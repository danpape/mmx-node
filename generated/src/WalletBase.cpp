
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/WalletBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <mmx/Contract.hxx>
#include <mmx/FarmerKeys.hxx>
#include <mmx/Solution.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/Wallet_add_account.hxx>
#include <mmx/Wallet_add_account_return.hxx>
#include <mmx/Wallet_deploy.hxx>
#include <mmx/Wallet_deploy_return.hxx>
#include <mmx/Wallet_gather_utxos_for.hxx>
#include <mmx/Wallet_gather_utxos_for_return.hxx>
#include <mmx/Wallet_get_accounts.hxx>
#include <mmx/Wallet_get_accounts_return.hxx>
#include <mmx/Wallet_get_address.hxx>
#include <mmx/Wallet_get_address_return.hxx>
#include <mmx/Wallet_get_all_addresses.hxx>
#include <mmx/Wallet_get_all_addresses_return.hxx>
#include <mmx/Wallet_get_all_farmer_keys.hxx>
#include <mmx/Wallet_get_all_farmer_keys_return.hxx>
#include <mmx/Wallet_get_balance.hxx>
#include <mmx/Wallet_get_balance_return.hxx>
#include <mmx/Wallet_get_balances.hxx>
#include <mmx/Wallet_get_balances_return.hxx>
#include <mmx/Wallet_get_contracts.hxx>
#include <mmx/Wallet_get_contracts_return.hxx>
#include <mmx/Wallet_get_farmer_keys.hxx>
#include <mmx/Wallet_get_farmer_keys_return.hxx>
#include <mmx/Wallet_get_history.hxx>
#include <mmx/Wallet_get_history_return.hxx>
#include <mmx/Wallet_get_master_seed.hxx>
#include <mmx/Wallet_get_master_seed_return.hxx>
#include <mmx/Wallet_get_reserved_balances.hxx>
#include <mmx/Wallet_get_reserved_balances_return.hxx>
#include <mmx/Wallet_get_stxo_list.hxx>
#include <mmx/Wallet_get_stxo_list_return.hxx>
#include <mmx/Wallet_get_stxo_list_for.hxx>
#include <mmx/Wallet_get_stxo_list_for_return.hxx>
#include <mmx/Wallet_get_utxo_list.hxx>
#include <mmx/Wallet_get_utxo_list_return.hxx>
#include <mmx/Wallet_get_utxo_list_for.hxx>
#include <mmx/Wallet_get_utxo_list_for_return.hxx>
#include <mmx/Wallet_mark_spent.hxx>
#include <mmx/Wallet_mark_spent_return.hxx>
#include <mmx/Wallet_mint.hxx>
#include <mmx/Wallet_mint_return.hxx>
#include <mmx/Wallet_release.hxx>
#include <mmx/Wallet_release_return.hxx>
#include <mmx/Wallet_release_all.hxx>
#include <mmx/Wallet_release_all_return.hxx>
#include <mmx/Wallet_reserve.hxx>
#include <mmx/Wallet_reserve_return.hxx>
#include <mmx/Wallet_send.hxx>
#include <mmx/Wallet_send_return.hxx>
#include <mmx/Wallet_send_from.hxx>
#include <mmx/Wallet_send_from_return.hxx>
#include <mmx/Wallet_sign_msg.hxx>
#include <mmx/Wallet_sign_msg_return.hxx>
#include <mmx/Wallet_sign_off.hxx>
#include <mmx/Wallet_sign_off_return.hxx>
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
#include <vnx/addons/HttpComponent_http_request.hxx>
#include <vnx/addons/HttpComponent_http_request_return.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk_return.hxx>
#include <vnx/addons/HttpData.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 WalletBase::VNX_TYPE_HASH(0x62207fd96d3aead7ull);
const vnx::Hash64 WalletBase::VNX_CODE_HASH(0xd3041d75a9807c4cull);

WalletBase::WalletBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".key_files", key_files);
	vnx::read_config(vnx_name + ".accounts", accounts);
	vnx::read_config(vnx_name + ".storage_path", storage_path);
	vnx::read_config(vnx_name + ".node_server", node_server);
	vnx::read_config(vnx_name + ".max_accounts", max_accounts);
	vnx::read_config(vnx_name + ".max_key_files", max_key_files);
	vnx::read_config(vnx_name + ".num_addresses", num_addresses);
	vnx::read_config(vnx_name + ".utxo_timeout_ms", utxo_timeout_ms);
	vnx::read_config(vnx_name + ".enable_bls", enable_bls);
}

vnx::Hash64 WalletBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string WalletBase::get_type_name() const {
	return "mmx.Wallet";
}

const vnx::TypeCode* WalletBase::get_type_code() const {
	return mmx::vnx_native_type_code_WalletBase;
}

void WalletBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_WalletBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, key_files);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, accounts);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, storage_path);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, node_server);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, max_accounts);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, max_key_files);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, num_addresses);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, utxo_timeout_ms);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, enable_bls);
	_visitor.type_end(*_type_code);
}

void WalletBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"key_files\": "; vnx::write(_out, key_files);
	_out << ", \"accounts\": "; vnx::write(_out, accounts);
	_out << ", \"storage_path\": "; vnx::write(_out, storage_path);
	_out << ", \"node_server\": "; vnx::write(_out, node_server);
	_out << ", \"max_accounts\": "; vnx::write(_out, max_accounts);
	_out << ", \"max_key_files\": "; vnx::write(_out, max_key_files);
	_out << ", \"num_addresses\": "; vnx::write(_out, num_addresses);
	_out << ", \"utxo_timeout_ms\": "; vnx::write(_out, utxo_timeout_ms);
	_out << ", \"enable_bls\": "; vnx::write(_out, enable_bls);
	_out << "}";
}

void WalletBase::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object WalletBase::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Wallet";
	_object["key_files"] = key_files;
	_object["accounts"] = accounts;
	_object["storage_path"] = storage_path;
	_object["node_server"] = node_server;
	_object["max_accounts"] = max_accounts;
	_object["max_key_files"] = max_key_files;
	_object["num_addresses"] = num_addresses;
	_object["utxo_timeout_ms"] = utxo_timeout_ms;
	_object["enable_bls"] = enable_bls;
	return _object;
}

void WalletBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "accounts") {
			_entry.second.to(accounts);
		} else if(_entry.first == "enable_bls") {
			_entry.second.to(enable_bls);
		} else if(_entry.first == "key_files") {
			_entry.second.to(key_files);
		} else if(_entry.first == "max_accounts") {
			_entry.second.to(max_accounts);
		} else if(_entry.first == "max_key_files") {
			_entry.second.to(max_key_files);
		} else if(_entry.first == "node_server") {
			_entry.second.to(node_server);
		} else if(_entry.first == "num_addresses") {
			_entry.second.to(num_addresses);
		} else if(_entry.first == "storage_path") {
			_entry.second.to(storage_path);
		} else if(_entry.first == "utxo_timeout_ms") {
			_entry.second.to(utxo_timeout_ms);
		}
	}
}

vnx::Variant WalletBase::get_field(const std::string& _name) const {
	if(_name == "key_files") {
		return vnx::Variant(key_files);
	}
	if(_name == "accounts") {
		return vnx::Variant(accounts);
	}
	if(_name == "storage_path") {
		return vnx::Variant(storage_path);
	}
	if(_name == "node_server") {
		return vnx::Variant(node_server);
	}
	if(_name == "max_accounts") {
		return vnx::Variant(max_accounts);
	}
	if(_name == "max_key_files") {
		return vnx::Variant(max_key_files);
	}
	if(_name == "num_addresses") {
		return vnx::Variant(num_addresses);
	}
	if(_name == "utxo_timeout_ms") {
		return vnx::Variant(utxo_timeout_ms);
	}
	if(_name == "enable_bls") {
		return vnx::Variant(enable_bls);
	}
	return vnx::Variant();
}

void WalletBase::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "key_files") {
		_value.to(key_files);
	} else if(_name == "accounts") {
		_value.to(accounts);
	} else if(_name == "storage_path") {
		_value.to(storage_path);
	} else if(_name == "node_server") {
		_value.to(node_server);
	} else if(_name == "max_accounts") {
		_value.to(max_accounts);
	} else if(_name == "max_key_files") {
		_value.to(max_key_files);
	} else if(_name == "num_addresses") {
		_value.to(num_addresses);
	} else if(_name == "utxo_timeout_ms") {
		_value.to(utxo_timeout_ms);
	} else if(_name == "enable_bls") {
		_value.to(enable_bls);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const WalletBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, WalletBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* WalletBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> WalletBase::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Wallet";
	type_code->type_hash = vnx::Hash64(0x62207fd96d3aead7ull);
	type_code->code_hash = vnx::Hash64(0xd3041d75a9807c4cull);
	type_code->is_native = true;
	type_code->native_size = sizeof(::mmx::WalletBase);
	type_code->depends.resize(1);
	type_code->depends[0] = ::mmx::account_t::static_get_type_code();
	type_code->methods.resize(38);
	type_code->methods[0] = ::vnx::ModuleInterface_vnx_get_config_object::static_get_type_code();
	type_code->methods[1] = ::vnx::ModuleInterface_vnx_get_config::static_get_type_code();
	type_code->methods[2] = ::vnx::ModuleInterface_vnx_set_config_object::static_get_type_code();
	type_code->methods[3] = ::vnx::ModuleInterface_vnx_set_config::static_get_type_code();
	type_code->methods[4] = ::vnx::ModuleInterface_vnx_get_type_code::static_get_type_code();
	type_code->methods[5] = ::vnx::ModuleInterface_vnx_get_module_info::static_get_type_code();
	type_code->methods[6] = ::vnx::ModuleInterface_vnx_restart::static_get_type_code();
	type_code->methods[7] = ::vnx::ModuleInterface_vnx_stop::static_get_type_code();
	type_code->methods[8] = ::vnx::ModuleInterface_vnx_self_test::static_get_type_code();
	type_code->methods[9] = ::mmx::Wallet_send::static_get_type_code();
	type_code->methods[10] = ::mmx::Wallet_send_from::static_get_type_code();
	type_code->methods[11] = ::mmx::Wallet_mint::static_get_type_code();
	type_code->methods[12] = ::mmx::Wallet_deploy::static_get_type_code();
	type_code->methods[13] = ::mmx::Wallet_sign_off::static_get_type_code();
	type_code->methods[14] = ::mmx::Wallet_sign_msg::static_get_type_code();
	type_code->methods[15] = ::mmx::Wallet_mark_spent::static_get_type_code();
	type_code->methods[16] = ::mmx::Wallet_reserve::static_get_type_code();
	type_code->methods[17] = ::mmx::Wallet_release::static_get_type_code();
	type_code->methods[18] = ::mmx::Wallet_release_all::static_get_type_code();
	type_code->methods[19] = ::mmx::Wallet_get_utxo_list::static_get_type_code();
	type_code->methods[20] = ::mmx::Wallet_get_utxo_list_for::static_get_type_code();
	type_code->methods[21] = ::mmx::Wallet_get_stxo_list::static_get_type_code();
	type_code->methods[22] = ::mmx::Wallet_get_stxo_list_for::static_get_type_code();
	type_code->methods[23] = ::mmx::Wallet_gather_utxos_for::static_get_type_code();
	type_code->methods[24] = ::mmx::Wallet_get_history::static_get_type_code();
	type_code->methods[25] = ::mmx::Wallet_get_balance::static_get_type_code();
	type_code->methods[26] = ::mmx::Wallet_get_balances::static_get_type_code();
	type_code->methods[27] = ::mmx::Wallet_get_reserved_balances::static_get_type_code();
	type_code->methods[28] = ::mmx::Wallet_get_contracts::static_get_type_code();
	type_code->methods[29] = ::mmx::Wallet_get_address::static_get_type_code();
	type_code->methods[30] = ::mmx::Wallet_get_all_addresses::static_get_type_code();
	type_code->methods[31] = ::mmx::Wallet_get_accounts::static_get_type_code();
	type_code->methods[32] = ::mmx::Wallet_add_account::static_get_type_code();
	type_code->methods[33] = ::mmx::Wallet_get_master_seed::static_get_type_code();
	type_code->methods[34] = ::mmx::Wallet_get_farmer_keys::static_get_type_code();
	type_code->methods[35] = ::mmx::Wallet_get_all_farmer_keys::static_get_type_code();
	type_code->methods[36] = ::vnx::addons::HttpComponent_http_request::static_get_type_code();
	type_code->methods[37] = ::vnx::addons::HttpComponent_http_request_chunk::static_get_type_code();
	type_code->fields.resize(9);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "key_files";
		field.code = {12, 32};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "accounts";
		field.code = {12, 19, 0};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "storage_path";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "node_server";
		field.value = vnx::to_string("Node");
		field.code = {32};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 4;
		field.name = "max_accounts";
		field.value = vnx::to_string(1000);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 4;
		field.name = "max_key_files";
		field.value = vnx::to_string(100);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[6];
		field.data_size = 4;
		field.name = "num_addresses";
		field.value = vnx::to_string(100);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[7];
		field.data_size = 4;
		field.name = "utxo_timeout_ms";
		field.value = vnx::to_string(1000);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[8];
		field.data_size = 1;
		field.name = "enable_bls";
		field.value = vnx::to_string(true);
		field.code = {31};
	}
	type_code->build();
	return type_code;
}

void WalletBase::vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) {
	const auto* _type_code = _value->get_type_code();
	while(_type_code) {
		switch(_type_code->type_hash) {
			default:
				_type_code = _type_code->super;
		}
	}
	handle(std::static_pointer_cast<const vnx::Value>(_value));
}

std::shared_ptr<vnx::Value> WalletBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	switch(_method->get_type_hash()) {
		case 0x17f58f68bf83abc0ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_object_return::create();
			_return_value->_ret_0 = vnx_get_config_object();
			return _return_value;
		}
		case 0xbbc7f1a01044d294ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_return::create();
			_return_value->_ret_0 = vnx_get_config(_args->name);
			return _return_value;
		}
		case 0xca30f814f17f322full: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_object_return::create();
			vnx_set_config_object(_args->config);
			return _return_value;
		}
		case 0x362aac91373958b7ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_return::create();
			vnx_set_config(_args->name, _args->value);
			return _return_value;
		}
		case 0x305ec4d628960e5dull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_type_code_return::create();
			_return_value->_ret_0 = vnx_get_type_code();
			return _return_value;
		}
		case 0xf6d82bdf66d034a1ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_module_info_return::create();
			_return_value->_ret_0 = vnx_get_module_info();
			return _return_value;
		}
		case 0x9e95dc280cecca1bull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_restart>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_restart_return::create();
			vnx_restart();
			return _return_value;
		}
		case 0x7ab49ce3d1bfc0d2ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_stop>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_stop_return::create();
			vnx_stop();
			return _return_value;
		}
		case 0x6ce3775b41a42697ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_self_test_return::create();
			_return_value->_ret_0 = vnx_self_test();
			return _return_value;
		}
		case 0x3842658ae3c2d5ebull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_send>(_method);
			auto _return_value = ::mmx::Wallet_send_return::create();
			_return_value->_ret_0 = send(_args->index, _args->amount, _args->dst_addr, _args->currency, _args->options);
			return _return_value;
		}
		case 0x40c3c88665341592ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_send_from>(_method);
			auto _return_value = ::mmx::Wallet_send_from_return::create();
			_return_value->_ret_0 = send_from(_args->index, _args->amount, _args->dst_addr, _args->src_addr, _args->currency, _args->options);
			return _return_value;
		}
		case 0x3c52811b834fbd3eull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_mint>(_method);
			auto _return_value = ::mmx::Wallet_mint_return::create();
			_return_value->_ret_0 = mint(_args->index, _args->amount, _args->dst_addr, _args->currency, _args->options);
			return _return_value;
		}
		case 0xcd71b07853d17497ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_deploy>(_method);
			auto _return_value = ::mmx::Wallet_deploy_return::create();
			_return_value->_ret_0 = deploy(_args->index, _args->contract, _args->options);
			return _return_value;
		}
		case 0x232c89cf3ed4d5b1ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_sign_off>(_method);
			auto _return_value = ::mmx::Wallet_sign_off_return::create();
			_return_value->_ret_0 = sign_off(_args->index, _args->tx, _args->cover_fee, _args->utxo_list);
			return _return_value;
		}
		case 0x5bc54cc8b0112d3aull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_sign_msg>(_method);
			auto _return_value = ::mmx::Wallet_sign_msg_return::create();
			_return_value->_ret_0 = sign_msg(_args->index, _args->address, _args->msg);
			return _return_value;
		}
		case 0x107fed23348b3333ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_mark_spent>(_method);
			auto _return_value = ::mmx::Wallet_mark_spent_return::create();
			mark_spent(_args->index, _args->keys);
			return _return_value;
		}
		case 0xd14c466e8e7ebd76ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_reserve>(_method);
			auto _return_value = ::mmx::Wallet_reserve_return::create();
			reserve(_args->index, _args->keys);
			return _return_value;
		}
		case 0x2cd72a3370e05db3ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_release>(_method);
			auto _return_value = ::mmx::Wallet_release_return::create();
			release(_args->index, _args->keys);
			return _return_value;
		}
		case 0x4bd57b9deca4be51ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_release_all>(_method);
			auto _return_value = ::mmx::Wallet_release_all_return::create();
			release_all();
			return _return_value;
		}
		case 0xa9416ad9f318f1feull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_utxo_list>(_method);
			auto _return_value = ::mmx::Wallet_get_utxo_list_return::create();
			_return_value->_ret_0 = get_utxo_list(_args->index, _args->min_confirm);
			return _return_value;
		}
		case 0x8b3f02747642c28dull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_utxo_list_for>(_method);
			auto _return_value = ::mmx::Wallet_get_utxo_list_for_return::create();
			_return_value->_ret_0 = get_utxo_list_for(_args->index, _args->currency, _args->min_confirm);
			return _return_value;
		}
		case 0x62f2ba31c40eed7full: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_stxo_list>(_method);
			auto _return_value = ::mmx::Wallet_get_stxo_list_return::create();
			_return_value->_ret_0 = get_stxo_list(_args->index);
			return _return_value;
		}
		case 0xf1a2de0ec45bc8ecull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_stxo_list_for>(_method);
			auto _return_value = ::mmx::Wallet_get_stxo_list_for_return::create();
			_return_value->_ret_0 = get_stxo_list_for(_args->index, _args->currency);
			return _return_value;
		}
		case 0xf668de85f98c8ab5ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_gather_utxos_for>(_method);
			auto _return_value = ::mmx::Wallet_gather_utxos_for_return::create();
			_return_value->_ret_0 = gather_utxos_for(_args->index, _args->amount, _args->currency, _args->options);
			return _return_value;
		}
		case 0x921f73f3d97d2d4dull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_history>(_method);
			auto _return_value = ::mmx::Wallet_get_history_return::create();
			_return_value->_ret_0 = get_history(_args->index, _args->since);
			return _return_value;
		}
		case 0x1bc2c2dd67ab2829ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_balance>(_method);
			auto _return_value = ::mmx::Wallet_get_balance_return::create();
			_return_value->_ret_0 = get_balance(_args->index, _args->currency, _args->min_confirm);
			return _return_value;
		}
		case 0x5be581d54ae69a4ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_balances>(_method);
			auto _return_value = ::mmx::Wallet_get_balances_return::create();
			_return_value->_ret_0 = get_balances(_args->index, _args->min_confirm);
			return _return_value;
		}
		case 0x1d7a6c15c0262b11ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_reserved_balances>(_method);
			auto _return_value = ::mmx::Wallet_get_reserved_balances_return::create();
			_return_value->_ret_0 = get_reserved_balances(_args->index, _args->min_confirm);
			return _return_value;
		}
		case 0x9ff1932bcec18d57ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_contracts>(_method);
			auto _return_value = ::mmx::Wallet_get_contracts_return::create();
			_return_value->_ret_0 = get_contracts(_args->index);
			return _return_value;
		}
		case 0xccad8dfe1543aa77ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_address>(_method);
			auto _return_value = ::mmx::Wallet_get_address_return::create();
			_return_value->_ret_0 = get_address(_args->index, _args->offset);
			return _return_value;
		}
		case 0xf5e2b4554613fd97ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_all_addresses>(_method);
			auto _return_value = ::mmx::Wallet_get_all_addresses_return::create();
			_return_value->_ret_0 = get_all_addresses(_args->index);
			return _return_value;
		}
		case 0x76e6f1f2f43168d2ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_accounts>(_method);
			auto _return_value = ::mmx::Wallet_get_accounts_return::create();
			_return_value->_ret_0 = get_accounts();
			return _return_value;
		}
		case 0x92d2d3518d9c33aeull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_add_account>(_method);
			auto _return_value = ::mmx::Wallet_add_account_return::create();
			add_account(_args->index, _args->config);
			return _return_value;
		}
		case 0x8fddd77ece4d295bull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_master_seed>(_method);
			auto _return_value = ::mmx::Wallet_get_master_seed_return::create();
			_return_value->_ret_0 = get_master_seed(_args->index);
			return _return_value;
		}
		case 0x44709e11ff3ff3eeull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_farmer_keys>(_method);
			auto _return_value = ::mmx::Wallet_get_farmer_keys_return::create();
			_return_value->_ret_0 = get_farmer_keys(_args->index);
			return _return_value;
		}
		case 0xc6a03b3f813d071dull: {
			auto _args = std::static_pointer_cast<const ::mmx::Wallet_get_all_farmer_keys>(_method);
			auto _return_value = ::mmx::Wallet_get_all_farmer_keys_return::create();
			_return_value->_ret_0 = get_all_farmer_keys();
			return _return_value;
		}
		case 0xe0b6c38f619bad92ull: {
			auto _args = std::static_pointer_cast<const ::vnx::addons::HttpComponent_http_request>(_method);
			http_request_async(_args->request, _args->sub_path, _request_id);
			return nullptr;
		}
		case 0x97e79d08440406d5ull: {
			auto _args = std::static_pointer_cast<const ::vnx::addons::HttpComponent_http_request_chunk>(_method);
			http_request_chunk_async(_args->request, _args->sub_path, _args->offset, _args->max_bytes, _request_id);
			return nullptr;
		}
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : vnx::Hash64();
	_ex->method = _method->get_type_name();
	return _ex;
}

void WalletBase::http_request_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::addons::HttpResponse>& _ret_0) const {
	auto _return_value = ::vnx::addons::HttpComponent_http_request_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void WalletBase::http_request_chunk_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::addons::HttpData>& _ret_0) const {
	auto _return_value = ::vnx::addons::HttpComponent_http_request_chunk_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::WalletBase& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.max_accounts, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.max_key_files, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[6]) {
			vnx::read_value(_buf + _field->offset, value.num_addresses, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[7]) {
			vnx::read_value(_buf + _field->offset, value.utxo_timeout_ms, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[8]) {
			vnx::read_value(_buf + _field->offset, value.enable_bls, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.key_files, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.accounts, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.storage_path, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.node_server, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::WalletBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_WalletBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::WalletBase>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(17);
	vnx::write_value(_buf + 0, value.max_accounts);
	vnx::write_value(_buf + 4, value.max_key_files);
	vnx::write_value(_buf + 8, value.num_addresses);
	vnx::write_value(_buf + 12, value.utxo_timeout_ms);
	vnx::write_value(_buf + 16, value.enable_bls);
	vnx::write(out, value.key_files, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.accounts, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.storage_path, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.node_server, type_code, type_code->fields[3].code.data());
}

void read(std::istream& in, ::mmx::WalletBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::WalletBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::WalletBase& value) {
	value.accept(visitor);
}

} // vnx
