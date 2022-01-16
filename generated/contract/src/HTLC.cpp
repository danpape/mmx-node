
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/HTLC.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/contract/Locked.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/pubkey_t.hpp>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {


const vnx::Hash64 HTLC::VNX_TYPE_HASH(0x64804455753f1f10ull);
const vnx::Hash64 HTLC::VNX_CODE_HASH(0xd4a5b5cf87d97ca9ull);

vnx::Hash64 HTLC::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string HTLC::get_type_name() const {
	return "mmx.contract.HTLC";
}

const vnx::TypeCode* HTLC::get_type_code() const {
	return mmx::contract::vnx_native_type_code_HTLC;
}

std::shared_ptr<HTLC> HTLC::create() {
	return std::make_shared<HTLC>();
}

std::shared_ptr<vnx::Value> HTLC::clone() const {
	return std::make_shared<HTLC>(*this);
}

void HTLC::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void HTLC::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void HTLC::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_HTLC;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, version);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, condition);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, target);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, pubkey);
	_visitor.type_end(*_type_code);
}

void HTLC::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.HTLC\"";
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << ", \"condition\": "; vnx::write(_out, condition);
	_out << ", \"target\": "; vnx::write(_out, target);
	_out << ", \"pubkey\": "; vnx::write(_out, pubkey);
	_out << "}";
}

void HTLC::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object HTLC::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.HTLC";
	_object["version"] = version;
	_object["condition"] = condition;
	_object["target"] = target;
	_object["pubkey"] = pubkey;
	return _object;
}

void HTLC::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "condition") {
			_entry.second.to(condition);
		} else if(_entry.first == "pubkey") {
			_entry.second.to(pubkey);
		} else if(_entry.first == "target") {
			_entry.second.to(target);
		} else if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

vnx::Variant HTLC::get_field(const std::string& _name) const {
	if(_name == "version") {
		return vnx::Variant(version);
	}
	if(_name == "condition") {
		return vnx::Variant(condition);
	}
	if(_name == "target") {
		return vnx::Variant(target);
	}
	if(_name == "pubkey") {
		return vnx::Variant(pubkey);
	}
	return vnx::Variant();
}

void HTLC::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "version") {
		_value.to(version);
	} else if(_name == "condition") {
		_value.to(condition);
	} else if(_name == "target") {
		_value.to(target);
	} else if(_name == "pubkey") {
		_value.to(pubkey);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const HTLC& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, HTLC& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* HTLC::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> HTLC::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.HTLC";
	type_code->type_hash = vnx::Hash64(0x64804455753f1f10ull);
	type_code->code_hash = vnx::Hash64(0xd4a5b5cf87d97ca9ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::contract::HTLC);
	type_code->parents.resize(2);
	type_code->parents[0] = ::mmx::contract::Locked::static_get_type_code();
	type_code->parents[1] = ::mmx::Contract::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<HTLC>(); };
	type_code->fields.resize(4);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "version";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "condition";
		field.code = {16};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "target";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "pubkey";
		field.code = {11, 33, 1};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::HTLC& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.version, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.condition, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.target, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.pubkey, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::contract::HTLC& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_HTLC;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::HTLC>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.version);
	vnx::write(out, value.condition, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.target, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.pubkey, type_code, type_code->fields[3].code.data());
}

void read(std::istream& in, ::mmx::contract::HTLC& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::HTLC& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::HTLC& value) {
	value.accept(visitor);
}

} // vnx