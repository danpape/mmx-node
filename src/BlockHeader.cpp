/*
 * BlockHeader.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: mad
 */

#include <mmx/BlockHeader.hxx>
#include <mmx/write_bytes.h>

#include <vnx/Output.hpp>


namespace mmx {

vnx::bool_t BlockHeader::is_valid() const
{
	if(version > 0) {
		return false;
	}
	if(calc_hash() != hash) {
		return false;
	}
	if(!proof || !farmer_sig.verify(proof->farmer_key, hash)) {
		return false;
	}
	return true;
}

mmx::hash_t BlockHeader::calc_hash() const
{
	std::vector<uint8_t> buffer;
	vnx::VectorOutputStream stream(&buffer);
	vnx::OutputBuffer out(&stream);

	buffer.reserve(64 * 1024);

	write_bytes(out, prev);
	write_bytes(out, version);
	write_bytes(out, time_ms);
	write_bytes(out, time_diff);
	write_bytes(out, space_diff);
	write_bytes(out, vdf_iters);
	write_bytes(out, vdf_output);

	if(proof) {
		write_bytes(out, proof->calc_hash());
	}
	if(auto tx = tx_base) {
		write_bytes(out, tx->calc_hash());
	}
	write_bytes(out, tx_hash);
	out.flush();

	return hash_t(buffer);
}


} // mmx