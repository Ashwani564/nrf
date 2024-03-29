/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ReflectiveQoSAttribute_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::common {

ReflectiveQoSAttribute_anyOf::ReflectiveQoSAttribute_anyOf() {}

void ReflectiveQoSAttribute_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ReflectiveQoSAttribute_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReflectiveQoSAttribute_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReflectiveQoSAttribute_anyOf" : pathPrefix;

  if (m_value == ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool ReflectiveQoSAttribute_anyOf::operator==(
    const ReflectiveQoSAttribute_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool ReflectiveQoSAttribute_anyOf::operator!=(
    const ReflectiveQoSAttribute_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ReflectiveQoSAttribute_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf::RQOS:
      j = "RQOS";
      break;
    case ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf::NO_RQOS:
      j = "NO_RQOS";
      break;
  }
}

void from_json(const nlohmann::json& j, ReflectiveQoSAttribute_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "RQOS") {
    o.setValue(
        ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf::RQOS);
  } else if (s == "NO_RQOS") {
    o.setValue(
        ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf::NO_RQOS);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf
ReflectiveQoSAttribute_anyOf::getValue() const {
  return m_value;
}
void ReflectiveQoSAttribute_anyOf::setValue(
    ReflectiveQoSAttribute_anyOf::eReflectiveQoSAttribute_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::common
