
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_FarmerKeys_HXX_
#define INCLUDE_mmx_FarmerKeys_HXX_

#include <mmx/package.hxx>
#include <mmx/bls_pubkey_t.hpp>
#include <mmx/skey_t.hpp>
#include <vnx/Value.h>


namespace mmx {

class FarmerKeys : public ::vnx::Value {
public:
	
	::mmx::skey_t pool_private_key;
	::mmx::skey_t farmer_private_key;
	::mmx::bls_pubkey_t pool_public_key;
	::mmx::bls_pubkey_t farmer_public_key;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x9942f861520098b3ull;
	
	FarmerKeys() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<FarmerKeys> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const FarmerKeys& _value);
	friend std::istream& operator>>(std::istream& _in, FarmerKeys& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void FarmerKeys::accept_generic(T& _visitor) const {
	_visitor.template type_begin<FarmerKeys>(4);
	_visitor.type_field("pool_private_key", 0); _visitor.accept(pool_private_key);
	_visitor.type_field("farmer_private_key", 1); _visitor.accept(farmer_private_key);
	_visitor.type_field("pool_public_key", 2); _visitor.accept(pool_public_key);
	_visitor.type_field("farmer_public_key", 3); _visitor.accept(farmer_public_key);
	_visitor.template type_end<FarmerKeys>(4);
}


} // namespace mmx


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_FarmerKeys_HXX_
