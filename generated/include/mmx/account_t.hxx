
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_account_t_HXX_
#define INCLUDE_mmx_account_t_HXX_

#include <vnx/Type.h>
#include <mmx/package.hxx>


namespace mmx {

struct account_t {
	
	
	uint32_t index = 0;
	uint32_t num_addresses = 100;
	std::string name;
	std::string key_file;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xc0c163f453729a7ull;
	
	account_t() {}
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	static std::shared_ptr<account_t> create();
	std::shared_ptr<account_t> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const account_t& _value);
	friend std::istream& operator>>(std::istream& _in, account_t& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void account_t::accept_generic(T& _visitor) const {
	_visitor.template type_begin<account_t>(4);
	_visitor.type_field("index", 0); _visitor.accept(index);
	_visitor.type_field("num_addresses", 1); _visitor.accept(num_addresses);
	_visitor.type_field("name", 2); _visitor.accept(name);
	_visitor.type_field("key_file", 3); _visitor.accept(key_file);
	_visitor.template type_end<account_t>(4);
}


} // namespace mmx


namespace vnx {

template<>
struct is_equivalent<::mmx::account_t> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_mmx_account_t_HXX_
