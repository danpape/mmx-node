
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/stxo_t.hxx>
#include <mmx/txio_key_t.hxx>
#include <mmx/utxo_t.hxx>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 stxo_t::VNX_TYPE_HASH(0x615a84cdd47c1938ull);
const vnx::Hash64 stxo_t::VNX_CODE_HASH(0x7273d6659d33fa3bull);

vnx::Hash64 stxo_t::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string stxo_t::get_type_name() const {
	return "mmx.stxo_t";
}

const vnx::TypeCode* stxo_t::get_type_code() const {
	return mmx::vnx_native_type_code_stxo_t;
}

std::shared_ptr<stxo_t> stxo_t::create() {
	return std::make_shared<stxo_t>();
}

std::shared_ptr<stxo_t> stxo_t::clone() const {
	return std::make_shared<stxo_t>(*this);
}

void stxo_t::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void stxo_t::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void stxo_t::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_stxo_t;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, address);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, contract);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, amount);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, height);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, spent);
	_visitor.type_end(*_type_code);
}

void stxo_t::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"address\": "; vnx::write(_out, address);
	_out << ", \"contract\": "; vnx::write(_out, contract);
	_out << ", \"amount\": "; vnx::write(_out, amount);
	_out << ", \"height\": "; vnx::write(_out, height);
	_out << ", \"spent\": "; vnx::write(_out, spent);
	_out << "}";
}

void stxo_t::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object stxo_t::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.stxo_t";
	_object["address"] = address;
	_object["contract"] = contract;
	_object["amount"] = amount;
	_object["height"] = height;
	_object["spent"] = spent;
	return _object;
}

void stxo_t::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "address") {
			_entry.second.to(address);
		} else if(_entry.first == "amount") {
			_entry.second.to(amount);
		} else if(_entry.first == "contract") {
			_entry.second.to(contract);
		} else if(_entry.first == "height") {
			_entry.second.to(height);
		} else if(_entry.first == "spent") {
			_entry.second.to(spent);
		}
	}
}

vnx::Variant stxo_t::get_field(const std::string& _name) const {
	if(_name == "address") {
		return vnx::Variant(address);
	}
	if(_name == "contract") {
		return vnx::Variant(contract);
	}
	if(_name == "amount") {
		return vnx::Variant(amount);
	}
	if(_name == "height") {
		return vnx::Variant(height);
	}
	if(_name == "spent") {
		return vnx::Variant(spent);
	}
	return vnx::Variant();
}

void stxo_t::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "address") {
		_value.to(address);
	} else if(_name == "contract") {
		_value.to(contract);
	} else if(_name == "amount") {
		_value.to(amount);
	} else if(_name == "height") {
		_value.to(height);
	} else if(_name == "spent") {
		_value.to(spent);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const stxo_t& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, stxo_t& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* stxo_t::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> stxo_t::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.stxo_t";
	type_code->type_hash = vnx::Hash64(0x615a84cdd47c1938ull);
	type_code->code_hash = vnx::Hash64(0x7273d6659d33fa3bull);
	type_code->is_native = true;
	type_code->native_size = sizeof(::mmx::stxo_t);
	type_code->parents.resize(2);
	type_code->parents[0] = ::mmx::utxo_t::static_get_type_code();
	type_code->parents[1] = ::mmx::tx_out_t::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<vnx::Struct<stxo_t>>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::mmx::txio_key_t::static_get_type_code();
	type_code->fields.resize(5);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "address";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "contract";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 8;
		field.name = "amount";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 4;
		field.name = "height";
		field.value = vnx::to_string(-1);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "spent";
		field.code = {19, 0};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::stxo_t& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.amount, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.height, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.address, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.contract, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.spent, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::stxo_t& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_stxo_t;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::stxo_t>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(12);
	vnx::write_value(_buf + 0, value.amount);
	vnx::write_value(_buf + 8, value.height);
	vnx::write(out, value.address, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.contract, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.spent, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::mmx::stxo_t& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::stxo_t& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::stxo_t& value) {
	value.accept(visitor);
}

bool is_equivalent<::mmx::stxo_t>::operator()(const uint16_t* code, const TypeCode* type_code) {
	if(code[0] != CODE_STRUCT || !type_code) {
		return false;
	}
	type_code = type_code->depends[code[1]];
	return type_code->type_hash == ::mmx::stxo_t::VNX_TYPE_HASH && type_code->is_equivalent;
}

} // vnx