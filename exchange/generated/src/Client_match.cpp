
// AUTO GENERATED by vnxcppcodegen

#include <mmx/exchange/package.hxx>
#include <mmx/exchange/Client_match.hxx>
#include <mmx/exchange/Client_match_return.hxx>
#include <mmx/exchange/trade_order_t.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {
namespace exchange {


const vnx::Hash64 Client_match::VNX_TYPE_HASH(0x5b38e7fda1090949ull);
const vnx::Hash64 Client_match::VNX_CODE_HASH(0xc8618ac8f4b990d5ull);

vnx::Hash64 Client_match::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Client_match::get_type_name() const {
	return "mmx.exchange.Client.match";
}

const vnx::TypeCode* Client_match::get_type_code() const {
	return mmx::exchange::vnx_native_type_code_Client_match;
}

std::shared_ptr<Client_match> Client_match::create() {
	return std::make_shared<Client_match>();
}

std::shared_ptr<vnx::Value> Client_match::clone() const {
	return std::make_shared<Client_match>(*this);
}

void Client_match::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Client_match::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Client_match::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::exchange::vnx_native_type_code_Client_match;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, server);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, pair);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, orders);
	_visitor.type_end(*_type_code);
}

void Client_match::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.exchange.Client.match\"";
	_out << ", \"server\": "; vnx::write(_out, server);
	_out << ", \"pair\": "; vnx::write(_out, pair);
	_out << ", \"orders\": "; vnx::write(_out, orders);
	_out << "}";
}

void Client_match::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Client_match::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.exchange.Client.match";
	_object["server"] = server;
	_object["pair"] = pair;
	_object["orders"] = orders;
	return _object;
}

void Client_match::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "orders") {
			_entry.second.to(orders);
		} else if(_entry.first == "pair") {
			_entry.second.to(pair);
		} else if(_entry.first == "server") {
			_entry.second.to(server);
		}
	}
}

vnx::Variant Client_match::get_field(const std::string& _name) const {
	if(_name == "server") {
		return vnx::Variant(server);
	}
	if(_name == "pair") {
		return vnx::Variant(pair);
	}
	if(_name == "orders") {
		return vnx::Variant(orders);
	}
	return vnx::Variant();
}

void Client_match::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "server") {
		_value.to(server);
	} else if(_name == "pair") {
		_value.to(pair);
	} else if(_name == "orders") {
		_value.to(orders);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Client_match& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Client_match& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Client_match::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Client_match::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.exchange.Client.match";
	type_code->type_hash = vnx::Hash64(0x5b38e7fda1090949ull);
	type_code->code_hash = vnx::Hash64(0xc8618ac8f4b990d5ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::exchange::Client_match);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Client_match>(); };
	type_code->depends.resize(2);
	type_code->depends[0] = ::mmx::exchange::trade_pair_t::static_get_type_code();
	type_code->depends[1] = ::mmx::exchange::trade_order_t::static_get_type_code();
	type_code->is_const = true;
	type_code->is_async = true;
	type_code->return_type = ::mmx::exchange::Client_match_return::static_get_type_code();
	type_code->fields.resize(3);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "server";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "pair";
		field.code = {19, 0};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "orders";
		field.code = {12, 19, 1};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace exchange


namespace vnx {

void read(TypeInput& in, ::mmx::exchange::Client_match& value, const TypeCode* type_code, const uint16_t* code) {
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
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.server, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.pair, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.orders, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::exchange::Client_match& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::exchange::vnx_native_type_code_Client_match;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::exchange::Client_match>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.server, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.pair, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.orders, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::mmx::exchange::Client_match& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::exchange::Client_match& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::exchange::Client_match& value) {
	value.accept(visitor);
}

} // vnx
