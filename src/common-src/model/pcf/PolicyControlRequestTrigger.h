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
/*
 * PolicyControlRequestTrigger.h
 *
 * Possible values are - PLMN_CH: PLMN Change - RES_MO_RE: A request for
 * resource modification has been received by the SMF. The SMF always reports to
 * the PCF. - AC_TY_CH: Access Type Change - UE_IP_CH: UE IP address change. The
 * SMF always reports to the PCF. - UE_MAC_CH: A new UE MAC address is detected
 * or a used UE MAC address is inactive for a specific period - AN_CH_COR:
 * Access Network Charging Correlation Information - US_RE: The PDU Session or
 * the Monitoring key specific resources consumed by a UE either reached the
 * threshold or needs to be reported for other reasons. - APP_STA: The start of
 * application traffic has been detected. - APP_STO: The stop of application
 * traffic has been detected. - AN_INFO: Access Network Information report -
 * CM_SES_FAIL: Credit management session failure - PS_DA_OFF: The SMF reports
 * when the 3GPP PS Data Off status changes. The SMF always reports to the PCF.
 * - DEF_QOS_CH: Default QoS Change. The SMF always reports to the PCF. -
 * SE_AMBR_CH: Session AMBR Change. The SMF always reports to the PCF. -
 * QOS_NOTIF: The SMF notify the PCF when receiving notification from RAN that
 * QoS targets of the QoS Flow cannot be guranteed or gurateed again. -
 * NO_CREDIT: Out of credit - REALLO_OF_CREDIT: Reallocation of credit - PRA_CH:
 * Change of UE presence in Presence Reporting Area - SAREA_CH: Location Change
 * with respect to the Serving Area - SCNN_CH: Location Change with respect to
 * the Serving CN node - RE_TIMEOUT: Indicates the SMF generated the request
 * because there has been a PCC revalidation timeout - RES_RELEASE: Indicate
 * that the SMF can inform the PCF of the outcome of the release of resources
 * for those rules that require so. - SUCC_RES_ALLO: Indicates that the
 * requested rule data is the successful resource allocation. - RAT_TY_CH: RAT
 * Type Change. - REF_QOS_IND_CH: Reflective QoS indication Change -
 * NUM_OF_PACKET_FILTER: Indicates that the SMF shall report the number of
 * supported packet filter for signalled QoS rules - UE_STATUS_RESUME: Indicates
 * that the UE’s status is resumed. - UE_TZ_CH: UE Time Zone Change -
 * AUTH_PROF_CH: The DN-AAA authorization profile index has changed -
 * QOS_MONITORING: Indicate that the SMF notifies the PCF of the QoS Monitoring
 * information. - SCELL_CH: Location Change with respect to the Serving Cell. -
 * EPS_FALLBACK: EPS Fallback report is enabled in the SMF. - MA_PDU: UE
 * Indicates that the SMF notifies the PCF of the MA PDU session request -
 * TSN_BRIDGE_INFO: 5GS Bridge information available - 5G_RG_JOIN: The 5G-RG has
 * joined to an IP Multicast Group. - 5G_RG_LEAVE: The 5G-RG has left an IP
 * Multicast Group. - DDN_FAILURE: Event subscription for DDN Failure event
 * received. - DDN_DELIVERY_STATUS: Event subscription for DDN Delivery Status
 * received. - GROUP_ID_LIST_CHG: UE Internal Group Identifier(s) has changed:
 * the SMF reports that UDM provided list of group Ids has changed. -
 * DDN_FAILURE_CANCELLATION: The event subscription for DDN Failure event is
 * cancelled. - DDN_DELIVERY_STATUS_CANCELLATION: The event subscription for DDD
 * STATUS is cancelled. - VPLMN_QOS_CH: Change of the QoS supported in the
 * VPLMN.
 */

#ifndef PolicyControlRequestTrigger_H_
#define PolicyControlRequestTrigger_H_

#include "PolicyControlRequestTrigger_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
/// Possible values are - PLMN_CH: PLMN Change - RES_MO_RE: A request for
/// resource modification has been received by the SMF. The SMF always reports
/// to the PCF. - AC_TY_CH: Access Type Change - UE_IP_CH: UE IP address change.
/// The SMF always reports to the PCF. - UE_MAC_CH: A new UE MAC address is
/// detected or a used UE MAC address is inactive for a specific period -
/// AN_CH_COR: Access Network Charging Correlation Information - US_RE: The PDU
/// Session or the Monitoring key specific resources consumed by a UE either
/// reached the threshold or needs to be reported for other reasons. - APP_STA:
/// The start of application traffic has been detected. - APP_STO: The stop of
/// application traffic has been detected. - AN_INFO: Access Network Information
/// report - CM_SES_FAIL: Credit management session failure - PS_DA_OFF: The SMF
/// reports when the 3GPP PS Data Off status changes. The SMF always reports to
/// the PCF. - DEF_QOS_CH: Default QoS Change. The SMF always reports to the
/// PCF. - SE_AMBR_CH: Session AMBR Change. The SMF always reports to the PCF. -
/// QOS_NOTIF: The SMF notify the PCF when receiving notification from RAN that
/// QoS targets of the QoS Flow cannot be guranteed or gurateed again. -
/// NO_CREDIT: Out of credit - REALLO_OF_CREDIT: Reallocation of credit -
/// PRA_CH: Change of UE presence in Presence Reporting Area - SAREA_CH:
/// Location Change with respect to the Serving Area - SCNN_CH: Location Change
/// with respect to the Serving CN node - RE_TIMEOUT: Indicates the SMF
/// generated the request because there has been a PCC revalidation timeout -
/// RES_RELEASE: Indicate that the SMF can inform the PCF of the outcome of the
/// release of resources for those rules that require so. - SUCC_RES_ALLO:
/// Indicates that the requested rule data is the successful resource
/// allocation. - RAT_TY_CH: RAT Type Change. - REF_QOS_IND_CH: Reflective QoS
/// indication Change - NUM_OF_PACKET_FILTER: Indicates that the SMF shall
/// report the number of supported packet filter for signalled QoS rules -
/// UE_STATUS_RESUME: Indicates that the UE’s status is resumed. - UE_TZ_CH: UE
/// Time Zone Change - AUTH_PROF_CH: The DN-AAA authorization profile index has
/// changed - QOS_MONITORING: Indicate that the SMF notifies the PCF of the QoS
/// Monitoring information. - SCELL_CH: Location Change with respect to the
/// Serving Cell. - EPS_FALLBACK: EPS Fallback report is enabled in the SMF. -
/// MA_PDU: UE Indicates that the SMF notifies the PCF of the MA PDU session
/// request - TSN_BRIDGE_INFO: 5GS Bridge information available - 5G_RG_JOIN:
/// The 5G-RG has joined to an IP Multicast Group. - 5G_RG_LEAVE: The 5G-RG has
/// left an IP Multicast Group. - DDN_FAILURE: Event subscription for DDN
/// Failure event received. - DDN_DELIVERY_STATUS: Event subscription for DDN
/// Delivery Status received. - GROUP_ID_LIST_CHG: UE Internal Group
/// Identifier(s) has changed: the SMF reports that UDM provided list of group
/// Ids has changed. - DDN_FAILURE_CANCELLATION: The event subscription for DDN
/// Failure event is cancelled. - DDN_DELIVERY_STATUS_CANCELLATION: The event
/// subscription for DDD STATUS is cancelled. - VPLMN_QOS_CH: Change of the QoS
/// supported in the VPLMN.
/// </summary>
class PolicyControlRequestTrigger {
 public:
  PolicyControlRequestTrigger();
  virtual ~PolicyControlRequestTrigger() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const PolicyControlRequestTrigger& rhs) const;
  bool operator!=(const PolicyControlRequestTrigger& rhs) const;

  /////////////////////////////////////////////
  /// PolicyControlRequestTrigger members

  PolicyControlRequestTrigger_anyOf getValue() const;
  void setValue(PolicyControlRequestTrigger_anyOf value);
  PolicyControlRequestTrigger_anyOf::ePolicyControlRequestTrigger_anyOf
  getEnumValue() const;
  void setEnumValue(
      PolicyControlRequestTrigger_anyOf::ePolicyControlRequestTrigger_anyOf
          value);
  friend void to_json(nlohmann::json& j, const PolicyControlRequestTrigger& o);
  friend void from_json(
      const nlohmann::json& j, PolicyControlRequestTrigger& o);
  friend void to_json(
      nlohmann::json& j, const PolicyControlRequestTrigger_anyOf& o);
  friend void from_json(
      const nlohmann::json& j, PolicyControlRequestTrigger_anyOf& o);

 protected:
  PolicyControlRequestTrigger_anyOf m_value;
};

}  // namespace oai::model::pcf

#endif /* PolicyControlRequestTrigger_H_ */
