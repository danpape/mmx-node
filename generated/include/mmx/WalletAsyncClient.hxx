
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_Wallet_ASYNC_CLIENT_HXX_
#define INCLUDE_mmx_Wallet_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <mmx/Contract.hxx>
#include <mmx/FarmerKeys.hxx>
#include <mmx/Solution.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/account_t.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/hash_t.hpp>
#include <mmx/spend_options_t.hxx>
#include <mmx/stxo_entry_t.hxx>
#include <mmx/tx_entry_t.hxx>
#include <mmx/txio_key_t.hxx>
#include <mmx/utxo_entry_t.hxx>
#include <mmx/utxo_t.hxx>
#include <vnx/Module.h>
#include <vnx/addons/HttpData.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>


namespace mmx {

class WalletAsyncClient : public vnx::AsyncClient {
public:
	WalletAsyncClient(const std::string& service_name);
	
	WalletAsyncClient(vnx::Hash64 service_addr);
	
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
	
	uint64_t send(const uint32_t& index = 0, const uint64_t& amount = 0, const ::mmx::addr_t& dst_addr = ::mmx::addr_t(), const ::mmx::addr_t& currency = ::mmx::addr_t(), const ::mmx::spend_options_t& options = ::mmx::spend_options_t(), 
			const std::function<void(const ::mmx::hash_t&)>& _callback = std::function<void(const ::mmx::hash_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t send_from(const uint32_t& index = 0, const uint64_t& amount = 0, const ::mmx::addr_t& dst_addr = ::mmx::addr_t(), const ::mmx::addr_t& src_addr = ::mmx::addr_t(), const ::mmx::addr_t& currency = ::mmx::addr_t(), const ::mmx::spend_options_t& options = ::mmx::spend_options_t(), 
			const std::function<void(const ::mmx::hash_t&)>& _callback = std::function<void(const ::mmx::hash_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t mint(const uint32_t& index = 0, const uint64_t& amount = 0, const ::mmx::addr_t& dst_addr = ::mmx::addr_t(), const ::mmx::addr_t& currency = ::mmx::addr_t(), const ::mmx::spend_options_t& options = ::mmx::spend_options_t(), 
			const std::function<void(const ::mmx::hash_t&)>& _callback = std::function<void(const ::mmx::hash_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t deploy(const uint32_t& index = 0, std::shared_ptr<const ::mmx::Contract> contract = nullptr, const ::mmx::spend_options_t& options = ::mmx::spend_options_t(), 
			const std::function<void(const ::mmx::hash_t&)>& _callback = std::function<void(const ::mmx::hash_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t sign_off(const uint32_t& index = 0, std::shared_ptr<const ::mmx::Transaction> tx = nullptr, const vnx::bool_t& cover_fee = 0, const std::vector<std::pair<::mmx::txio_key_t, ::mmx::utxo_t>>& utxo_list = {}, 
			const std::function<void(std::shared_ptr<const ::mmx::Transaction>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Transaction>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t sign_msg(const uint32_t& index = 0, const ::mmx::addr_t& address = ::mmx::addr_t(), const ::mmx::hash_t& msg = ::mmx::hash_t(), 
			const std::function<void(std::shared_ptr<const ::mmx::Solution>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Solution>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t mark_spent(const uint32_t& index = 0, const std::vector<::mmx::txio_key_t>& keys = {}, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t reserve(const uint32_t& index = 0, const std::vector<::mmx::txio_key_t>& keys = {}, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t release(const uint32_t& index = 0, const std::vector<::mmx::txio_key_t>& keys = {}, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t release_all(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_utxo_list(const uint32_t& index = 0, const uint32_t& min_confirm = 0, 
			const std::function<void(const std::vector<::mmx::utxo_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::utxo_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_utxo_list_for(const uint32_t& index = 0, const ::mmx::addr_t& currency = ::mmx::addr_t(), const uint32_t& min_confirm = 0, 
			const std::function<void(const std::vector<::mmx::utxo_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::utxo_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_stxo_list(const uint32_t& index = 0, 
			const std::function<void(const std::vector<::mmx::stxo_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::stxo_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_stxo_list_for(const uint32_t& index = 0, const ::mmx::addr_t& currency = ::mmx::addr_t(), 
			const std::function<void(const std::vector<::mmx::stxo_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::stxo_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t gather_utxos_for(const uint32_t& index = 0, const uint64_t& amount = 0, const ::mmx::addr_t& currency = ::mmx::addr_t(), const ::mmx::spend_options_t& options = ::mmx::spend_options_t(), 
			const std::function<void(const std::vector<::mmx::utxo_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::utxo_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_history(const uint32_t& index = 0, const int32_t& since = 0, 
			const std::function<void(const std::vector<::mmx::tx_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::tx_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_balance(const uint32_t& index = 0, const ::mmx::addr_t& currency = ::mmx::addr_t(), const uint32_t& min_confirm = 0, 
			const std::function<void(const uint64_t&)>& _callback = std::function<void(const uint64_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_balances(const uint32_t& index = 0, const uint32_t& min_confirm = 0, 
			const std::function<void(const std::map<::mmx::addr_t, uint64_t>&)>& _callback = std::function<void(const std::map<::mmx::addr_t, uint64_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_reserved_balances(const uint32_t& index = 0, const uint32_t& min_confirm = 0, 
			const std::function<void(const std::map<::mmx::addr_t, uint64_t>&)>& _callback = std::function<void(const std::map<::mmx::addr_t, uint64_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_contracts(const uint32_t& index = 0, 
			const std::function<void(const std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>&)>& _callback = std::function<void(const std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_address(const uint32_t& index = 0, const uint32_t& offset = 0, 
			const std::function<void(const ::mmx::addr_t&)>& _callback = std::function<void(const ::mmx::addr_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_all_addresses(const int32_t& index = 0, 
			const std::function<void(const std::vector<::mmx::addr_t>&)>& _callback = std::function<void(const std::vector<::mmx::addr_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_accounts(
			const std::function<void(const std::map<uint32_t, ::mmx::account_t>&)>& _callback = std::function<void(const std::map<uint32_t, ::mmx::account_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t add_account(const uint32_t& index = 0, const ::mmx::account_t& config = ::mmx::account_t(), 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_master_seed(const uint32_t& index = 0, 
			const std::function<void(const ::mmx::hash_t&)>& _callback = std::function<void(const ::mmx::hash_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_farmer_keys(const uint32_t& index = 0, 
			const std::function<void(std::shared_ptr<const ::mmx::FarmerKeys>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::FarmerKeys>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_all_farmer_keys(
			const std::function<void(const std::vector<std::shared_ptr<const ::mmx::FarmerKeys>>&)>& _callback = std::function<void(const std::vector<std::shared_ptr<const ::mmx::FarmerKeys>>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t http_request(std::shared_ptr<const ::vnx::addons::HttpRequest> request = nullptr, const std::string& sub_path = "", 
			const std::function<void(std::shared_ptr<const ::vnx::addons::HttpResponse>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::addons::HttpResponse>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t http_request_chunk(std::shared_ptr<const ::vnx::addons::HttpRequest> request = nullptr, const std::string& sub_path = "", const int64_t& offset = 0, const int64_t& max_bytes = 0, 
			const std::function<void(std::shared_ptr<const ::vnx::addons::HttpData>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::addons::HttpData>)>(),
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
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::hash_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_send;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::hash_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_send_from;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::hash_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_mint;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::hash_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_deploy;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Transaction>)>, std::function<void(const vnx::exception&)>>> vnx_queue_sign_off;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Solution>)>, std::function<void(const vnx::exception&)>>> vnx_queue_sign_msg;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_mark_spent;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_reserve;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_release;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_release_all;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::utxo_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_utxo_list;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::utxo_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_utxo_list_for;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::stxo_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_stxo_list;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::stxo_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_stxo_list_for;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::utxo_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_gather_utxos_for;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::tx_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_history;
	std::unordered_map<uint64_t, std::pair<std::function<void(const uint64_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_balance;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::addr_t, uint64_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_balances;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::addr_t, uint64_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_reserved_balances;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_contracts;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::addr_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_address;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::addr_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_all_addresses;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<uint32_t, ::mmx::account_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_accounts;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_add_account;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::hash_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_master_seed;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::FarmerKeys>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_farmer_keys;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<std::shared_ptr<const ::mmx::FarmerKeys>>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_all_farmer_keys;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::addons::HttpResponse>)>, std::function<void(const vnx::exception&)>>> vnx_queue_http_request;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::addons::HttpData>)>, std::function<void(const vnx::exception&)>>> vnx_queue_http_request_chunk;
	
};


} // namespace mmx

#endif // INCLUDE_mmx_Wallet_ASYNC_CLIENT_HXX_
