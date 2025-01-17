
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_contract_Locked_HXX_
#define INCLUDE_mmx_contract_Locked_HXX_

#include <mmx/contract/package.hxx>
#include <mmx/Contract.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/contract/Condition.hxx>


namespace mmx {
namespace contract {

class Locked : public ::mmx::Contract {
public:
	
	::mmx::addr_t owner;
	std::shared_ptr<const ::mmx::contract::Condition> condition;
	
	typedef ::mmx::Contract Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xd0ff1b6e7bad1493ull;
	
	Locked() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<Locked> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const Locked& _value);
	friend std::istream& operator>>(std::istream& _in, Locked& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void Locked::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Locked>(3);
	_visitor.type_field("version", 0); _visitor.accept(version);
	_visitor.type_field("owner", 1); _visitor.accept(owner);
	_visitor.type_field("condition", 2); _visitor.accept(condition);
	_visitor.template type_end<Locked>(3);
}


} // namespace mmx
} // namespace contract


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_contract_Locked_HXX_
