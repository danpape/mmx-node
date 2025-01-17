
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_exchange_Client_get_orders_HXX_
#define INCLUDE_mmx_exchange_Client_get_orders_HXX_

#include <mmx/exchange/package.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <vnx/Value.h>


namespace mmx {
namespace exchange {

class Client_get_orders : public ::vnx::Value {
public:
	
	std::string server;
	::mmx::exchange::trade_pair_t pair;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xe2be2ad61d7d7ddull;
	
	Client_get_orders() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<Client_get_orders> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const Client_get_orders& _value);
	friend std::istream& operator>>(std::istream& _in, Client_get_orders& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void Client_get_orders::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Client_get_orders>(2);
	_visitor.type_field("server", 0); _visitor.accept(server);
	_visitor.type_field("pair", 1); _visitor.accept(pair);
	_visitor.template type_end<Client_get_orders>(2);
}


} // namespace mmx
} // namespace exchange


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_exchange_Client_get_orders_HXX_
