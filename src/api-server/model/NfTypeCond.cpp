/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NfTypeCond.h"
#include <iostream>

namespace oai::model::nrf {

NfTypeCond::NfTypeCond() {}

NfTypeCond::~NfTypeCond() {}

void NfTypeCond::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const NfTypeCond& o) {
  j           = nlohmann::json();
  j["nfType"] = o.m_NfType;
}

void from_json(const nlohmann::json& j, NfTypeCond& o) {
  j.at("nfType").get_to(o.m_NfType);
}

std::string NfTypeCond::getNfType() const {
  return m_NfType;
}
void NfTypeCond::setNfType(std::string const& value) {
  m_NfType = value;
}

}  // namespace oai::model::nrf
