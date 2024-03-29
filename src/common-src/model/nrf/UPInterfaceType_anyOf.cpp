/**
 * NRF NFManagement Service
 * NRF NFManagement Service.   © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UPInterfaceType_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::nrf {

UPInterfaceType_anyOf::UPInterfaceType_anyOf() {}

void UPInterfaceType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool UPInterfaceType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool UPInterfaceType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "UPInterfaceType_anyOf" : pathPrefix;

  if (m_value == UPInterfaceType_anyOf::eUPInterfaceType_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool UPInterfaceType_anyOf::operator==(const UPInterfaceType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool UPInterfaceType_anyOf::operator!=(const UPInterfaceType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UPInterfaceType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case UPInterfaceType_anyOf::eUPInterfaceType_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case UPInterfaceType_anyOf::eUPInterfaceType_anyOf::N3:
      j = "N3";
      break;
    case UPInterfaceType_anyOf::eUPInterfaceType_anyOf::N6:
      j = "N6";
      break;
    case UPInterfaceType_anyOf::eUPInterfaceType_anyOf::N9:
      j = "N9";
      break;
    case UPInterfaceType_anyOf::eUPInterfaceType_anyOf::DATA_FORWARDING:
      j = "DATA_FORWARDING";
      break;
  }
}

void from_json(const nlohmann::json& j, UPInterfaceType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "N3") {
    o.setValue(UPInterfaceType_anyOf::eUPInterfaceType_anyOf::N3);
  } else if (s == "N6") {
    o.setValue(UPInterfaceType_anyOf::eUPInterfaceType_anyOf::N6);
  } else if (s == "N9") {
    o.setValue(UPInterfaceType_anyOf::eUPInterfaceType_anyOf::N9);
  } else if (s == "DATA_FORWARDING") {
    o.setValue(UPInterfaceType_anyOf::eUPInterfaceType_anyOf::DATA_FORWARDING);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " UPInterfaceType_anyOf::eUPInterfaceType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

UPInterfaceType_anyOf::eUPInterfaceType_anyOf UPInterfaceType_anyOf::getValue()
    const {
  return m_value;
}
void UPInterfaceType_anyOf::setValue(
    UPInterfaceType_anyOf::eUPInterfaceType_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::nrf
