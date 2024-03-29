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

#include "IpEndPoint.h"

namespace oai::model::nrf {
using namespace oai::model::common;

IpEndPoint::IpEndPoint() {
  m_Ipv4Address      = "";
  m_Ipv4AddressIsSet = false;
  m_Ipv6AddressIsSet = false;
  m_TransportIsSet   = false;
  m_Port             = 0;
  m_PortIsSet        = false;
}

IpEndPoint::~IpEndPoint() {}

void IpEndPoint::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const IpEndPoint& o) {
  j = nlohmann::json();
  if (o.ipv4AddressIsSet()) j["ipv4Address"] = o.m_Ipv4Address;
  if (o.ipv6AddressIsSet()) j["ipv6Address"] = o.m_Ipv6Address;
  if (o.transportIsSet()) j["transport"] = o.m_Transport;
  if (o.portIsSet()) j["port"] = o.m_Port;
}

void from_json(const nlohmann::json& j, IpEndPoint& o) {
  if (j.find("ipv4Address") != j.end()) {
    j.at("ipv4Address").get_to(o.m_Ipv4Address);
    o.m_Ipv4AddressIsSet = true;
  }
  if (j.find("ipv6Address") != j.end()) {
    j.at("ipv6Address").get_to(o.m_Ipv6Address);
    o.m_Ipv6AddressIsSet = true;
  }
  if (j.find("transport") != j.end()) {
    j.at("transport").get_to(o.m_Transport);
    o.m_TransportIsSet = true;
  }
  if (j.find("port") != j.end()) {
    j.at("port").get_to(o.m_Port);
    o.m_PortIsSet = true;
  }
}

std::string IpEndPoint::getIpv4Address() const {
  return m_Ipv4Address;
}
void IpEndPoint::setIpv4Address(std::string const& value) {
  m_Ipv4Address      = value;
  m_Ipv4AddressIsSet = true;
}
bool IpEndPoint::ipv4AddressIsSet() const {
  return m_Ipv4AddressIsSet;
}
void IpEndPoint::unsetIpv4Address() {
  m_Ipv4AddressIsSet = false;
}
Ipv6Addr IpEndPoint::getIpv6Address() const {
  return m_Ipv6Address;
}
void IpEndPoint::setIpv6Address(Ipv6Addr const& value) {
  m_Ipv6Address      = value;
  m_Ipv6AddressIsSet = true;
}
bool IpEndPoint::ipv6AddressIsSet() const {
  return m_Ipv6AddressIsSet;
}
void IpEndPoint::unsetIpv6Address() {
  m_Ipv6AddressIsSet = false;
}
TransportProtocol IpEndPoint::getTransport() const {
  return m_Transport;
}
void IpEndPoint::setTransport(TransportProtocol const& value) {
  m_Transport      = value;
  m_TransportIsSet = true;
}
bool IpEndPoint::transportIsSet() const {
  return m_TransportIsSet;
}
void IpEndPoint::unsetTransport() {
  m_TransportIsSet = false;
}
int32_t IpEndPoint::getPort() const {
  return m_Port;
}
void IpEndPoint::setPort(int32_t const value) {
  m_Port      = value;
  m_PortIsSet = true;
}
bool IpEndPoint::portIsSet() const {
  return m_PortIsSet;
}
void IpEndPoint::unsetPort() {
  m_PortIsSet = false;
}

}  // namespace oai::model::nrf
