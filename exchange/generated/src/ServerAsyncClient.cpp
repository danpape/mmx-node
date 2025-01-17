
// AUTO GENERATED by vnxcppcodegen

#include <mmx/exchange/package.hxx>
#include <mmx/exchange/ServerAsyncClient.hxx>
#include <mmx/Block.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/exchange/Server_approve.hxx>
#include <mmx/exchange/Server_approve_return.hxx>
#include <mmx/exchange/Server_cancel.hxx>
#include <mmx/exchange/Server_cancel_return.hxx>
#include <mmx/exchange/Server_execute.hxx>
#include <mmx/exchange/Server_execute_return.hxx>
#include <mmx/exchange/Server_get_orders.hxx>
#include <mmx/exchange/Server_get_orders_return.hxx>
#include <mmx/exchange/Server_get_price.hxx>
#include <mmx/exchange/Server_get_price_return.hxx>
#include <mmx/exchange/Server_match.hxx>
#include <mmx/exchange/Server_match_return.hxx>
#include <mmx/exchange/Server_place.hxx>
#include <mmx/exchange/Server_place_return.hxx>
#include <mmx/exchange/Server_reject.hxx>
#include <mmx/exchange/Server_reject_return.hxx>
#include <mmx/exchange/amount_t.hxx>
#include <mmx/exchange/limit_order_t.hxx>
#include <mmx/exchange/matched_order_t.hxx>
#include <mmx/exchange/order_t.hxx>
#include <mmx/exchange/trade_order_t.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/txio_key_t.hxx>
#include <mmx/ulong_fraction_t.hxx>
#include <vnx/ModuleInterface_vnx_get_config.hxx>
#include <vnx/ModuleInterface_vnx_get_config_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info_return.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/ModuleInterface_vnx_restart.hxx>
#include <vnx/ModuleInterface_vnx_restart_return.hxx>
#include <vnx/ModuleInterface_vnx_self_test.hxx>
#include <vnx/ModuleInterface_vnx_self_test_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config.hxx>
#include <vnx/ModuleInterface_vnx_set_config_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_stop.hxx>
#include <vnx/ModuleInterface_vnx_stop_return.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/addons/MsgServer.h>

#include <vnx/Generic.hxx>
#include <vnx/vnx.h>


namespace mmx {
namespace exchange {

ServerAsyncClient::ServerAsyncClient(const std::string& service_name)
	:	AsyncClient::AsyncClient(vnx::Hash64(service_name))
{
}

ServerAsyncClient::ServerAsyncClient(vnx::Hash64 service_addr)
	:	AsyncClient::AsyncClient(service_addr)
{
}

uint64_t ServerAsyncClient::vnx_get_config_object(const std::function<void(const ::vnx::Object&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_config_object::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 0;
		vnx_queue_vnx_get_config_object[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_get_config(const std::string& name, const std::function<void(const ::vnx::Variant&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_config::create();
	_method->name = name;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 1;
		vnx_queue_vnx_get_config[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_set_config_object(const ::vnx::Object& config, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 2;
		vnx_queue_vnx_set_config_object[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_set_config(const std::string& name, const ::vnx::Variant& value, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 3;
		vnx_queue_vnx_set_config[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_get_type_code(const std::function<void(const ::vnx::TypeCode&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_type_code::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 4;
		vnx_queue_vnx_get_type_code[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_get_module_info(const std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_module_info::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 5;
		vnx_queue_vnx_get_module_info[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_restart(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 6;
		vnx_queue_vnx_restart[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_stop(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 7;
		vnx_queue_vnx_stop[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::vnx_self_test(const std::function<void(const vnx::bool_t&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_self_test::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 8;
		vnx_queue_vnx_self_test[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::execute(std::shared_ptr<const ::mmx::Transaction> tx, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_execute::create();
	_method->tx = tx;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 9;
		vnx_queue_execute[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::match(const ::mmx::exchange::trade_pair_t& pair, const ::mmx::exchange::trade_order_t& order, const std::function<void(const ::mmx::exchange::matched_order_t&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_match::create();
	_method->pair = pair;
	_method->order = order;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 10;
		vnx_queue_match[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::get_orders(const ::mmx::exchange::trade_pair_t& pair, const std::function<void(const std::vector<::mmx::exchange::order_t>&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_get_orders::create();
	_method->pair = pair;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 11;
		vnx_queue_get_orders[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::get_price(const ::mmx::addr_t& want, const ::mmx::exchange::amount_t& have, const std::function<void(const ::mmx::ulong_fraction_t&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_get_price::create();
	_method->want = want;
	_method->have = have;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 12;
		vnx_queue_get_price[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::place(const uint64_t& client, const ::mmx::exchange::trade_pair_t& pair, const ::mmx::exchange::limit_order_t& order, const std::function<void(const std::vector<::mmx::exchange::order_t>&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_place::create();
	_method->client = client;
	_method->pair = pair;
	_method->order = order;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 13;
		vnx_queue_place[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::cancel(const uint64_t& client, const std::vector<::mmx::txio_key_t>& orders, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_cancel::create();
	_method->client = client;
	_method->orders = orders;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 14;
		vnx_queue_cancel[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::reject(const uint64_t& client, const ::mmx::hash_t& txid, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_reject::create();
	_method->client = client;
	_method->txid = txid;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 15;
		vnx_queue_reject[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t ServerAsyncClient::approve(const uint64_t& client, std::shared_ptr<const ::mmx::Transaction> tx, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::mmx::exchange::Server_approve::create();
	_method->client = client;
	_method->tx = tx;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 16;
		vnx_queue_approve[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

int32_t ServerAsyncClient::vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) {
	std::unique_lock<std::mutex> _lock(vnx_mutex);
	const auto _iter = vnx_pending.find(_request_id);
	if(_iter == vnx_pending.end()) {
		return -1;
	}
	const auto _index = _iter->second;
	vnx_pending.erase(_iter);
	switch(_index) {
		case 0: {
			const auto _iter = vnx_queue_vnx_get_config_object.find(_request_id);
			if(_iter != vnx_queue_vnx_get_config_object.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_config_object.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 1: {
			const auto _iter = vnx_queue_vnx_get_config.find(_request_id);
			if(_iter != vnx_queue_vnx_get_config.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_config.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 2: {
			const auto _iter = vnx_queue_vnx_set_config_object.find(_request_id);
			if(_iter != vnx_queue_vnx_set_config_object.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_set_config_object.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 3: {
			const auto _iter = vnx_queue_vnx_set_config.find(_request_id);
			if(_iter != vnx_queue_vnx_set_config.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_set_config.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 4: {
			const auto _iter = vnx_queue_vnx_get_type_code.find(_request_id);
			if(_iter != vnx_queue_vnx_get_type_code.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_type_code.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 5: {
			const auto _iter = vnx_queue_vnx_get_module_info.find(_request_id);
			if(_iter != vnx_queue_vnx_get_module_info.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_module_info.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 6: {
			const auto _iter = vnx_queue_vnx_restart.find(_request_id);
			if(_iter != vnx_queue_vnx_restart.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_restart.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 7: {
			const auto _iter = vnx_queue_vnx_stop.find(_request_id);
			if(_iter != vnx_queue_vnx_stop.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_stop.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 8: {
			const auto _iter = vnx_queue_vnx_self_test.find(_request_id);
			if(_iter != vnx_queue_vnx_self_test.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_self_test.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 9: {
			const auto _iter = vnx_queue_execute.find(_request_id);
			if(_iter != vnx_queue_execute.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_execute.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_match.find(_request_id);
			if(_iter != vnx_queue_match.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_match.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_get_orders.find(_request_id);
			if(_iter != vnx_queue_get_orders.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_get_orders.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 12: {
			const auto _iter = vnx_queue_get_price.find(_request_id);
			if(_iter != vnx_queue_get_price.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_get_price.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 13: {
			const auto _iter = vnx_queue_place.find(_request_id);
			if(_iter != vnx_queue_place.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_place.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 14: {
			const auto _iter = vnx_queue_cancel.find(_request_id);
			if(_iter != vnx_queue_cancel.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_cancel.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 15: {
			const auto _iter = vnx_queue_reject.find(_request_id);
			if(_iter != vnx_queue_reject.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_reject.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 16: {
			const auto _iter = vnx_queue_approve.find(_request_id);
			if(_iter != vnx_queue_approve.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_approve.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
	}
	return _index;
}

int32_t ServerAsyncClient::vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) {
	std::unique_lock<std::mutex> _lock(vnx_mutex);
	const auto _iter = vnx_pending.find(_request_id);
	if(_iter == vnx_pending.end()) {
		throw std::runtime_error("ServerAsyncClient: received unknown return");
	}
	const auto _index = _iter->second;
	vnx_pending.erase(_iter);
	switch(_index) {
		case 0: {
			const auto _iter = vnx_queue_vnx_get_config_object.find(_request_id);
			if(_iter == vnx_queue_vnx_get_config_object.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_config_object.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::Object>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 1: {
			const auto _iter = vnx_queue_vnx_get_config.find(_request_id);
			if(_iter == vnx_queue_vnx_get_config.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_config.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::Variant>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 2: {
			const auto _iter = vnx_queue_vnx_set_config_object.find(_request_id);
			if(_iter == vnx_queue_vnx_set_config_object.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_set_config_object.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 3: {
			const auto _iter = vnx_queue_vnx_set_config.find(_request_id);
			if(_iter == vnx_queue_vnx_set_config.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_set_config.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 4: {
			const auto _iter = vnx_queue_vnx_get_type_code.find(_request_id);
			if(_iter == vnx_queue_vnx_get_type_code.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_type_code.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::TypeCode>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 5: {
			const auto _iter = vnx_queue_vnx_get_module_info.find(_request_id);
			if(_iter == vnx_queue_vnx_get_module_info.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_module_info.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::ModuleInfo>>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 6: {
			const auto _iter = vnx_queue_vnx_restart.find(_request_id);
			if(_iter == vnx_queue_vnx_restart.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_restart.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 7: {
			const auto _iter = vnx_queue_vnx_stop.find(_request_id);
			if(_iter == vnx_queue_vnx_stop.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_stop.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 8: {
			const auto _iter = vnx_queue_vnx_self_test.find(_request_id);
			if(_iter == vnx_queue_vnx_self_test.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_self_test.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<vnx::bool_t>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 9: {
			const auto _iter = vnx_queue_execute.find(_request_id);
			if(_iter == vnx_queue_execute.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_execute.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_match.find(_request_id);
			if(_iter == vnx_queue_match.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_match.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_match_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::mmx::exchange::matched_order_t>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_get_orders.find(_request_id);
			if(_iter == vnx_queue_get_orders.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_get_orders.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_get_orders_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<std::vector<::mmx::exchange::order_t>>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 12: {
			const auto _iter = vnx_queue_get_price.find(_request_id);
			if(_iter == vnx_queue_get_price.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_get_price.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_get_price_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::mmx::ulong_fraction_t>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 13: {
			const auto _iter = vnx_queue_place.find(_request_id);
			if(_iter == vnx_queue_place.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_place.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_place_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<std::vector<::mmx::exchange::order_t>>());
				} else {
					throw std::logic_error("ServerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 14: {
			const auto _iter = vnx_queue_cancel.find(_request_id);
			if(_iter == vnx_queue_cancel.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_cancel.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 15: {
			const auto _iter = vnx_queue_reject.find(_request_id);
			if(_iter == vnx_queue_reject.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_reject.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 16: {
			const auto _iter = vnx_queue_approve.find(_request_id);
			if(_iter == vnx_queue_approve.end()) {
				throw std::runtime_error("ServerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_approve.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		default:
			if(_index >= 0) {
				throw std::logic_error("ServerAsyncClient: invalid callback index");
			}
	}
	return _index;
}


} // namespace mmx
} // namespace exchange
