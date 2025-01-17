
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_exchange_Client_CLIENT_HXX_
#define INCLUDE_mmx_exchange_Client_CLIENT_HXX_

#include <vnx/Client.h>
#include <mmx/Block.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/exchange/OfferBundle.hxx>
#include <mmx/exchange/amount_t.hxx>
#include <mmx/exchange/matched_order_t.hxx>
#include <mmx/exchange/open_order_t.hxx>
#include <mmx/exchange/order_t.hxx>
#include <mmx/exchange/trade_order_t.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/txio_key_t.hxx>
#include <mmx/ulong_fraction_t.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/addons/MsgServer.h>


namespace mmx {
namespace exchange {

class ClientClient : public vnx::Client {
public:
	ClientClient(const std::string& service_name);
	
	ClientClient(vnx::Hash64 service_addr);
	
	::vnx::Object vnx_get_config_object();
	
	::vnx::Variant vnx_get_config(const std::string& name = "");
	
	void vnx_set_config_object(const ::vnx::Object& config = ::vnx::Object());
	
	void vnx_set_config_object_async(const ::vnx::Object& config = ::vnx::Object());
	
	void vnx_set_config(const std::string& name = "", const ::vnx::Variant& value = ::vnx::Variant());
	
	void vnx_set_config_async(const std::string& name = "", const ::vnx::Variant& value = ::vnx::Variant());
	
	::vnx::TypeCode vnx_get_type_code();
	
	std::shared_ptr<const ::vnx::ModuleInfo> vnx_get_module_info();
	
	void vnx_restart();
	
	void vnx_restart_async();
	
	void vnx_stop();
	
	void vnx_stop_async();
	
	vnx::bool_t vnx_self_test();
	
	std::vector<std::string> get_servers();
	
	::mmx::hash_t execute(const std::string& server = "", const uint32_t& wallet = 0, const ::mmx::exchange::matched_order_t& order = ::mmx::exchange::matched_order_t());
	
	std::vector<::mmx::exchange::matched_order_t> match(const std::string& server = "", const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t(), const std::vector<::mmx::exchange::trade_order_t>& orders = {});
	
	std::vector<::mmx::exchange::order_t> get_orders(const std::string& server = "", const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t());
	
	::mmx::ulong_fraction_t get_price(const std::string& server = "", const ::mmx::addr_t& want = ::mmx::addr_t(), const ::mmx::exchange::amount_t& have = ::mmx::exchange::amount_t());
	
	vnx::optional<::mmx::exchange::open_order_t> get_order(const ::mmx::txio_key_t& key = ::mmx::txio_key_t());
	
	std::shared_ptr<const ::mmx::exchange::OfferBundle> get_offer(const uint64_t& id = 0);
	
	std::vector<std::shared_ptr<const ::mmx::exchange::OfferBundle>> get_all_offers();
	
	void cancel_offer(const uint64_t& id = 0);
	
	void cancel_offer_async(const uint64_t& id = 0);
	
	void cancel_all();
	
	void cancel_all_async();
	
	std::shared_ptr<const ::mmx::exchange::OfferBundle> make_offer(const uint32_t& wallet = 0, const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t(), const uint64_t& bid = 0, const uint64_t& ask = 0);
	
	std::vector<::mmx::exchange::trade_order_t> make_trade(const uint32_t& wallet = 0, const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t(), const uint64_t& bid = 0, const vnx::optional<uint64_t>& ask = nullptr);
	
	void place(std::shared_ptr<const ::mmx::exchange::OfferBundle> offer = nullptr);
	
	void place_async(std::shared_ptr<const ::mmx::exchange::OfferBundle> offer = nullptr);
	
	std::shared_ptr<const ::mmx::Transaction> approve(std::shared_ptr<const ::mmx::Transaction> tx = nullptr);
	
};


} // namespace mmx
} // namespace exchange

#endif // INCLUDE_mmx_exchange_Client_CLIENT_HXX_
