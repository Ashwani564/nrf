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

#include "UdrInfo.h"

namespace oai::model::nrf {

UdrInfo::UdrInfo() {
  m_GroupId                             = "";
  m_GroupIdIsSet                        = false;
  m_SupiRangesIsSet                     = false;
  m_GpsiRangesIsSet                     = false;
  m_ExternalGroupIdentifiersRangesIsSet = false;
  m_SupportedDataSetsIsSet              = false;
}

UdrInfo::~UdrInfo() {}

void UdrInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const UdrInfo& o) {
  j = nlohmann::json();
  if (o.groupIdIsSet()) j["groupId"] = o.m_GroupId;
  if (o.supiRangesIsSet() || !o.m_SupiRanges.empty())
    j["supiRanges"] = o.m_SupiRanges;
  if (o.gpsiRangesIsSet() || !o.m_GpsiRanges.empty())
    j["gpsiRanges"] = o.m_GpsiRanges;
  if (o.externalGroupIdentifiersRangesIsSet() ||
      !o.m_ExternalGroupIdentifiersRanges.empty())
    j["externalGroupIdentifiersRanges"] = o.m_ExternalGroupIdentifiersRanges;
  if (o.supportedDataSetsIsSet() || !o.m_SupportedDataSets.empty())
    j["supportedDataSets"] = o.m_SupportedDataSets;
}

void from_json(const nlohmann::json& j, UdrInfo& o) {
  if (j.find("groupId") != j.end()) {
    j.at("groupId").get_to(o.m_GroupId);
    o.m_GroupIdIsSet = true;
  }
  if (j.find("supiRanges") != j.end()) {
    j.at("supiRanges").get_to(o.m_SupiRanges);
    o.m_SupiRangesIsSet = true;
  }
  if (j.find("gpsiRanges") != j.end()) {
    j.at("gpsiRanges").get_to(o.m_GpsiRanges);
    o.m_GpsiRangesIsSet = true;
  }
  if (j.find("externalGroupIdentifiersRanges") != j.end()) {
    j.at("externalGroupIdentifiersRanges")
        .get_to(o.m_ExternalGroupIdentifiersRanges);
    o.m_ExternalGroupIdentifiersRangesIsSet = true;
  }
  if (j.find("supportedDataSets") != j.end()) {
    j.at("supportedDataSets").get_to(o.m_SupportedDataSets);
    o.m_SupportedDataSetsIsSet = true;
  }
}

std::string UdrInfo::getGroupId() const {
  return m_GroupId;
}
void UdrInfo::setGroupId(std::string const& value) {
  m_GroupId      = value;
  m_GroupIdIsSet = true;
}
bool UdrInfo::groupIdIsSet() const {
  return m_GroupIdIsSet;
}
void UdrInfo::unsetGroupId() {
  m_GroupIdIsSet = false;
}
std::vector<SupiRange>& UdrInfo::getSupiRanges() {
  return m_SupiRanges;
}
void UdrInfo::setSupiRanges(std::vector<SupiRange> const& value) {
  m_SupiRanges      = value;
  m_SupiRangesIsSet = true;
}
bool UdrInfo::supiRangesIsSet() const {
  return m_SupiRangesIsSet;
}
void UdrInfo::unsetSupiRanges() {
  m_SupiRangesIsSet = false;
}
std::vector<IdentityRange>& UdrInfo::getGpsiRanges() {
  return m_GpsiRanges;
}
void UdrInfo::setGpsiRanges(std::vector<IdentityRange> const& value) {
  m_GpsiRanges      = value;
  m_GpsiRangesIsSet = true;
}
bool UdrInfo::gpsiRangesIsSet() const {
  return m_GpsiRangesIsSet;
}
void UdrInfo::unsetGpsiRanges() {
  m_GpsiRangesIsSet = false;
}
std::vector<IdentityRange>& UdrInfo::getExternalGroupIdentifiersRanges() {
  return m_ExternalGroupIdentifiersRanges;
}
void UdrInfo::setExternalGroupIdentifiersRanges(
    std::vector<IdentityRange> const& value) {
  m_ExternalGroupIdentifiersRanges      = value;
  m_ExternalGroupIdentifiersRangesIsSet = true;
}
bool UdrInfo::externalGroupIdentifiersRangesIsSet() const {
  return m_ExternalGroupIdentifiersRangesIsSet;
}
void UdrInfo::unsetExternalGroupIdentifiersRanges() {
  m_ExternalGroupIdentifiersRangesIsSet = false;
}
std::vector<DataSetId>& UdrInfo::getSupportedDataSets() {
  return m_SupportedDataSets;
}
void UdrInfo::setSupportedDataSets(std::vector<DataSetId> const& value) {
  m_SupportedDataSets      = value;
  m_SupportedDataSetsIsSet = true;
}
bool UdrInfo::supportedDataSetsIsSet() const {
  return m_SupportedDataSetsIsSet;
}
void UdrInfo::unsetSupportedDataSets() {
  m_SupportedDataSetsIsSet = false;
}

}  // namespace oai::model::nrf
