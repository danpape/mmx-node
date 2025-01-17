
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_exchange_Client_ASYNC_CLIENT_HXX_
#define INCLUDE_mmx_exchange_Client_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
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

class ClientAsyncClient : public vnx::AsyncClient {
public:
	ClientAsyncClient(const std::string& service_name);
	
	ClientAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t vnx_get_config_object(
			const std::function<void(const ::vnx::Object&)>& _callback = std::function<void(const ::vnx::Object&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_config(const std::string& name = "", 
			const std::function<void(const ::vnx::Variant&)>& _callback = std::function<void(const ::vnx::Variant&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_set_config_object(const ::vnx::Object& config = ::vnx::Object(), 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_set_config(const std::string& name = "", const ::vnx::Variant& value = ::vnx::Variant(), 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_type_code(
			const std::function<void(const ::vnx::TypeCode&)>& _callback = std::function<void(const ::vnx::TypeCode&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_module_info(
			const std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_restart(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_stop(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_self_test(
			const std::function<void(const vnx::bool_t&)>& _callback = std::function<void(const vnx::bool_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_servers(
			const std::function<void(const std::vector<std::string>&)>& _callback = std::function<void(const std::vector<std::string>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t execute(const std::string& server = "", const uint32_t& wallet = 0, const ::mmx::exchange::matched_order_t& order = ::mmx::exchange::matched_order_t(), 
			const std::function<void(const ::mmx::hash_t&)>& _callback = std::function<void(const ::mmx::hash_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t match(const std::string& server = "", const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t(), const std::vector<::mmx::exchange::trade_order_t>& orders = {}, 
			const std::function<void(const std::vector<::mmx::exchange::matched_order_t>&)>& _callback = std::function<void(const std::vector<::mmx::exchange::matched_order_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_orders(const std::string& server = "", const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t(), 
			const std::function<void(const std::vector<::mmx::exchange::order_t>&)>& _callback = std::function<void(const std::vector<::mmx::exchange::order_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_price(const std::string& server = "", const ::mmx::addr_t& want = ::mmx::addr_t(), const ::mmx::exchange::amount_t& have = ::mmx::exchange::amount_t(), 
			const std::function<void(const ::mmx::ulong_fraction_t&)>& _callback = std::function<void(const ::mmx::ulong_fraction_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_order(const ::mmx::txio_key_t& key = ::mmx::txio_key_t(), 
			const std::function<void(const vnx::optional<::mmx::exchange::open_order_t>&)>& _callback = std::function<void(const vnx::optional<::mmx::exchange::open_order_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_offer(const uint64_t& id = 0, 
			const std::function<void(std::shared_ptr<const ::mmx::exchange::OfferBundle>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::exchange::OfferBundle>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_all_offers(
			const std::function<void(const std::vector<std::shared_ptr<const ::mmx::exchange::OfferBundle>>&)>& _callback = std::function<void(const std::vector<std::shared_ptr<const ::mmx::exchange::OfferBundle>>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t cancel_offer(const uint64_t& id = 0, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t cancel_all(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t make_offer(const uint32_t& wallet = 0, const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t(), const uint64_t& bid = 0, const uint64_t& ask = 0, 
			const std::function<void(std::shared_ptr<const ::mmx::exchange::OfferBundle>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::exchange::OfferBundle>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t make_trade(const uint32_t& wallet = 0, const ::mmx::exchange::trade_pair_t& pair = ::mmx::exchange::trade_pair_t(), const uint64_t& bid = 0, const vnx::optional<uint64_t>& ask = nullptr, 
			const std::function<void(const std::vector<::mmx::exchange::trade_order_t>&)>& _callback = std::function<void(const std::vector<::mmx::exchange::trade_order_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t place(std::shared_ptr<const ::mmx::exchange::OfferBundle> offer = nullptr, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t approve(std::shared_ptr<const ::mmx::Transaction> tx = nullptr, 
			const std::function<void(std::shared_ptr<const ::mmx::Transaction>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Transaction>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
protected:
	int32_t vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) override;
	
	int32_t vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::vnx::Object&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_config_object;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::vnx::Variant&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_config;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_set_config_object;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_set_config;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::vnx::TypeCode&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_type_code;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_module_info;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_restart;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_stop;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::bool_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_self_test;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<std::string>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_servers;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::hash_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_execute;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::exchange::matched_order_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_match;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::exchange::order_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_orders;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::ulong_fraction_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_price;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::optional<::mmx::exchange::open_order_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_order;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::exchange::OfferBundle>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_offer;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<std::shared_ptr<const ::mmx::exchange::OfferBundle>>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_all_offers;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_cancel_offer;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_cancel_all;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::exchange::OfferBundle>)>, std::function<void(const vnx::exception&)>>> vnx_queue_make_offer;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::exchange::trade_order_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_make_trade;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_place;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Transaction>)>, std::function<void(const vnx::exception&)>>> vnx_queue_approve;
	
};


} // namespace mmx
} // namespace exchange

#endif // INCLUDE_mmx_exchange_Client_ASYNC_CLIENT_HXX_
