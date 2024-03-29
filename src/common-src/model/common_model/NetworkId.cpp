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

#include "NetworkId.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

NetworkId::NetworkId() {
  m_Mnc      = "";
  m_MncIsSet = false;
  m_Mcc      = "";
  m_MccIsSet = false;
}

void NetworkId::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool NetworkId::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NetworkId::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "NetworkId" : pathPrefix;

  if (mncIsSet()) {
    const std::string& value           = m_Mnc;
    const std::string currentValuePath = _pathPrefix + ".mnc";
  }

  if (mccIsSet()) {
    const std::string& value           = m_Mcc;
    const std::string currentValuePath = _pathPrefix + ".mcc";
  }

  return success;
}

bool NetworkId::operator==(const NetworkId& rhs) const {
  return

      ((!mncIsSet() && !rhs.mncIsSet()) ||
       (mncIsSet() && rhs.mncIsSet() && getMnc() == rhs.getMnc())) &&

      ((!mccIsSet() && !rhs.mccIsSet()) ||
       (mccIsSet() && rhs.mccIsSet() && getMcc() == rhs.getMcc()))

          ;
}

bool NetworkId::operator!=(const NetworkId& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NetworkId& o) {
  j = nlohmann::json();
  if (o.mncIsSet()) j["mnc"] = o.m_Mnc;
  if (o.mccIsSet()) j["mcc"] = o.m_Mcc;
}

void from_json(const nlohmann::json& j, NetworkId& o) {
  if (j.find("mnc") != j.end()) {
    j.at("mnc").get_to(o.m_Mnc);
    o.m_MncIsSet = true;
  }
  if (j.find("mcc") != j.end()) {
    j.at("mcc").get_to(o.m_Mcc);
    o.m_MccIsSet = true;
  }
}

std::string NetworkId::getMnc() const {
  return m_Mnc;
}
void NetworkId::setMnc(std::string const& value) {
  m_Mnc      = value;
  m_MncIsSet = true;
}
bool NetworkId::mncIsSet() const {
  return m_MncIsSet;
}
void NetworkId::unsetMnc() {
  m_MncIsSet = false;
}
std::string NetworkId::getMcc() const {
  return m_Mcc;
}
void NetworkId::setMcc(std::string const& value) {
  m_Mcc      = value;
  m_MccIsSet = true;
}
bool NetworkId::mccIsSet() const {
  return m_MccIsSet;
}
void NetworkId::unsetMcc() {
  m_MccIsSet = false;
}

}  // namespace oai::model::common
