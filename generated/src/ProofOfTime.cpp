
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/ProofOfTime.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/pubkey_t.hpp>
#include <mmx/signature_t.hpp>
#include <mmx/time_segment_t.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 ProofOfTime::VNX_TYPE_HASH(0xa84a63942b8e5c6aull);
const vnx::Hash64 ProofOfTime::VNX_CODE_HASH(0x72bee12809a2ec98ull);

vnx::Hash64 ProofOfTime::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ProofOfTime::get_type_name() const {
	return "mmx.ProofOfTime";
}

const vnx::TypeCode* ProofOfTime::get_type_code() const {
	return mmx::vnx_native_type_code_ProofOfTime;
}

std::shared_ptr<ProofOfTime> ProofOfTime::create() {
	return std::make_shared<ProofOfTime>();
}

std::shared_ptr<vnx::Value> ProofOfTime::clone() const {
	return std::make_shared<ProofOfTime>(*this);
}

void ProofOfTime::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ProofOfTime::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ProofOfTime::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_ProofOfTime;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, start);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, infuse);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, segments);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, timelord_key);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, timelord_sig);
	_visitor.type_end(*_type_code);
}

void ProofOfTime::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.ProofOfTime\"";
	_out << ", \"start\": "; vnx::write(_out, start);
	_out << ", \"infuse\": "; vnx::write(_out, infuse);
	_out << ", \"segments\": "; vnx::write(_out, segments);
	_out << ", \"timelord_key\": "; vnx::write(_out, timelord_key);
	_out << ", \"timelord_sig\": "; vnx::write(_out, timelord_sig);
	_out << "}";
}

void ProofOfTime::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ProofOfTime::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.ProofOfTime";
	_object["start"] = start;
	_object["infuse"] = infuse;
	_object["segments"] = segments;
	_object["timelord_key"] = timelord_key;
	_object["timelord_sig"] = timelord_sig;
	return _object;
}

void ProofOfTime::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "infuse") {
			_entry.second.to(infuse);
		} else if(_entry.first == "segments") {
			_entry.second.to(segments);
		} else if(_entry.first == "start") {
			_entry.second.to(start);
		} else if(_entry.first == "timelord_key") {
			_entry.second.to(timelord_key);
		} else if(_entry.first == "timelord_sig") {
			_entry.second.to(timelord_sig);
		}
	}
}

vnx::Variant ProofOfTime::get_field(const std::string& _name) const {
	if(_name == "start") {
		return vnx::Variant(start);
	}
	if(_name == "infuse") {
		return vnx::Variant(infuse);
	}
	if(_name == "segments") {
		return vnx::Variant(segments);
	}
	if(_name == "timelord_key") {
		return vnx::Variant(timelord_key);
	}
	if(_name == "timelord_sig") {
		return vnx::Variant(timelord_sig);
	}
	return vnx::Variant();
}

void ProofOfTime::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "start") {
		_value.to(start);
	} else if(_name == "infuse") {
		_value.to(infuse);
	} else if(_name == "segments") {
		_value.to(segments);
	} else if(_name == "timelord_key") {
		_value.to(timelord_key);
	} else if(_name == "timelord_sig") {
		_value.to(timelord_sig);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ProofOfTime& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ProofOfTime& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ProofOfTime::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ProofOfTime::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.ProofOfTime";
	type_code->type_hash = vnx::Hash64(0xa84a63942b8e5c6aull);
	type_code->code_hash = vnx::Hash64(0x72bee12809a2ec98ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::ProofOfTime);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ProofOfTime>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::mmx::time_segment_t::static_get_type_code();
	type_code->fields.resize(5);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "start";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "infuse";
		field.code = {11, 2, 13, 3, 4, 11, 32, 1};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "segments";
		field.code = {12, 19, 0};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "timelord_key";
		field.code = {11, 33, 1};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "timelord_sig";
		field.code = {11, 64, 1};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::ProofOfTime& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.start, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.infuse, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.segments, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.timelord_key, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.timelord_sig, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::ProofOfTime& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_ProofOfTime;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::ProofOfTime>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.start);
	vnx::write(out, value.infuse, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.segments, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.timelord_key, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.timelord_sig, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::mmx::ProofOfTime& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::ProofOfTime& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::ProofOfTime& value) {
	value.accept(visitor);
}

} // vnx