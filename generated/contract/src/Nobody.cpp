
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/Nobody.hxx>
#include <mmx/Contract.hxx>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {


const vnx::Hash64 Nobody::VNX_TYPE_HASH(0xe41a6e3df6d9e791ull);
const vnx::Hash64 Nobody::VNX_CODE_HASH(0xe6f6c0f1d7ced5a5ull);

vnx::Hash64 Nobody::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Nobody::get_type_name() const {
	return "mmx.contract.Nobody";
}

const vnx::TypeCode* Nobody::get_type_code() const {
	return mmx::contract::vnx_native_type_code_Nobody;
}

std::shared_ptr<Nobody> Nobody::create() {
	return std::make_shared<Nobody>();
}

std::shared_ptr<vnx::Value> Nobody::clone() const {
	return std::make_shared<Nobody>(*this);
}

void Nobody::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Nobody::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Nobody::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_Nobody;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, version);
	_visitor.type_end(*_type_code);
}

void Nobody::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.Nobody\"";
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << "}";
}

void Nobody::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Nobody::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.Nobody";
	_object["version"] = version;
	return _object;
}

void Nobody::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

vnx::Variant Nobody::get_field(const std::string& _name) const {
	if(_name == "version") {
		return vnx::Variant(version);
	}
	return vnx::Variant();
}

void Nobody::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "version") {
		_value.to(version);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Nobody& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Nobody& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Nobody::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Nobody::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.Nobody";
	type_code->type_hash = vnx::Hash64(0xe41a6e3df6d9e791ull);
	type_code->code_hash = vnx::Hash64(0xe6f6c0f1d7ced5a5ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::contract::Nobody);
	type_code->parents.resize(1);
	type_code->parents[0] = ::mmx::Contract::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Nobody>(); };
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "version";
		field.code = {3};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::Nobody& value, const TypeCode* type_code, const uint16_t* code) {
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
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::contract::Nobody& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_Nobody;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::Nobody>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.version);
}

void read(std::istream& in, ::mmx::contract::Nobody& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::Nobody& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::Nobody& value) {
	value.accept(visitor);
}

} // vnx