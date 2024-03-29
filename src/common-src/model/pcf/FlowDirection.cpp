/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "FlowDirection.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

FlowDirection::FlowDirection() {}

void FlowDirection::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool FlowDirection::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool FlowDirection::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "FlowDirection" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool FlowDirection::operator==(const FlowDirection& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool FlowDirection::operator!=(const FlowDirection& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const FlowDirection& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
  if (o.m_value.getValue() ==
      FlowDirection_anyOf::eFlowDirection_anyOf::NULL_VALUE) {
    throw std::invalid_argument(
        "Could not convert to json: FlowDirection does not allow null values");
  }
}

void from_json(const nlohmann::json& j, FlowDirection& o) {
  from_json(j, o.m_value);
  if (j.is_null()) {
    throw std::invalid_argument(
        "Could not convert from json: FlowDirection does not allow null "
        "values");
  }
}

FlowDirection_anyOf FlowDirection::getValue() const {
  return m_value;
}

void FlowDirection::setValue(FlowDirection_anyOf value) {
  m_value = value;
}

FlowDirection_anyOf::eFlowDirection_anyOf FlowDirection::getEnumValue() const {
  return m_value.getValue();
}

void FlowDirection::setEnumValue(
    FlowDirection_anyOf::eFlowDirection_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::pcf
