
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_exchange_Client_make_offer_HXX_
#define INCLUDE_mmx_exchange_Client_make_offer_HXX_

#include <mmx/exchange/package.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <vnx/Value.h>


namespace mmx {
namespace exchange {

class Client_make_offer : public ::vnx::Value {
public:
	
	uint32_t wallet = 0;
	::mmx::exchange::trade_pair_t pair;
	uint64_t bid = 0;
	uint64_t ask = 0;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x9d3f5ba7b8309a30ull;
	
	Client_make_offer() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<Client_make_offer> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const Client_make_offer& _value);
	friend std::istream& operator>>(std::istream& _in, Client_make_offer& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void Client_make_offer::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Client_make_offer>(4);
	_visitor.type_field("wallet", 0); _visitor.accept(wallet);
	_visitor.type_field("pair", 1); _visitor.accept(pair);
	_visitor.type_field("bid", 2); _visitor.accept(bid);
	_visitor.type_field("ask", 3); _visitor.accept(ask);
	_visitor.template type_end<Client_make_offer>(4);
}


} // namespace mmx
} // namespace exchange


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_exchange_Client_make_offer_HXX_
