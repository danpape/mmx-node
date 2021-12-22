
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Harvester_reload.hxx>
#include <mmx/Harvester_reload_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Harvester_reload::VNX_TYPE_HASH(0xc67a4577de7e85caull);
const vnx::Hash64 Harvester_reload::VNX_CODE_HASH(0xa01f4f9a3b23c380ull);

vnx::Hash64 Harvester_reload::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Harvester_reload::get_type_name() const {
	return "mmx.Harvester.reload";
}

const vnx::TypeCode* Harvester_reload::get_type_code() const {
	return mmx::vnx_native_type_code_Harvester_reload;
}

std::shared_ptr<Harvester_reload> Harvester_reload::create() {
	return std::make_shared<Harvester_reload>();
}

std::shared_ptr<vnx::Value> Harvester_reload::clone() const {
	return std::make_shared<Harvester_reload>(*this);
}

void Harvester_reload::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Harvester_reload::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Harvester_reload::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Harvester_reload;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void Harvester_reload::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Harvester.reload\"";
	_out << "}";
}

void Harvester_reload::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Harvester_reload::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Harvester.reload";
	return _object;
}

void Harvester_reload::from_object(const vnx::Object& _object) {
}

vnx::Variant Harvester_reload::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void Harvester_reload::set_field(const std::string& _name, const vnx::Variant& _value) {
	throw std::logic_error("no such field: '" + _name + "'");
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Harvester_reload& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Harvester_reload& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Harvester_reload::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Harvester_reload::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Harvester.reload";
	type_code->type_hash = vnx::Hash64(0xc67a4577de7e85caull);
	type_code->code_hash = vnx::Hash64(0xa01f4f9a3b23c380ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::Harvester_reload);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Harvester_reload>(); };
	type_code->return_type = ::mmx::Harvester_reload_return::static_get_type_code();
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Harvester_reload& value, const TypeCode* type_code, const uint16_t* code) {
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
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Harvester_reload& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Harvester_reload;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Harvester_reload>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::mmx::Harvester_reload& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Harvester_reload& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Harvester_reload& value) {
	value.accept(visitor);
}

} // vnx