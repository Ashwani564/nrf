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

#include "TraceDepth.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

TraceDepth::TraceDepth() {}

void TraceDepth::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool TraceDepth::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TraceDepth::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TraceDepth" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool TraceDepth::operator==(const TraceDepth& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool TraceDepth::operator!=(const TraceDepth& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TraceDepth& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, TraceDepth& o) {
  from_json(j, o.m_value);
}

TraceDepth_anyOf TraceDepth::getValue() const {
  return m_value;
}

void TraceDepth::setValue(TraceDepth_anyOf value) {
  m_value = value;
}

TraceDepth_anyOf::eTraceDepth_anyOf TraceDepth::getEnumValue() const {
  return m_value.getValue();
}

void TraceDepth::setEnumValue(TraceDepth_anyOf::eTraceDepth_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::common
