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
 * DownlinkDataNotificationControlRm.h
 *
 * this data type is defined in the same way as the
 * DownlinkDataNotificationControl data type, but with the OpenAPI nullable
 * property set to true.
 */

#ifndef DownlinkDataNotificationControlRm_H_
#define DownlinkDataNotificationControlRm_H_

#include "DlDataDeliveryStatus.h"
#include "NotificationControlIndication.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
/// this data type is defined in the same way as the
/// DownlinkDataNotificationControl data type, but with the OpenAPI nullable
/// property set to true.
/// </summary>
class DownlinkDataNotificationControlRm {
 public:
  DownlinkDataNotificationControlRm();
  virtual ~DownlinkDataNotificationControlRm() = default;

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

  bool operator==(const DownlinkDataNotificationControlRm& rhs) const;
  bool operator!=(const DownlinkDataNotificationControlRm& rhs) const;

  /////////////////////////////////////////////
  /// DownlinkDataNotificationControlRm members

  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::pcf::NotificationControlIndication> getNotifCtrlInds()
      const;
  void setNotifCtrlInds(
      std::vector<oai::model::pcf::NotificationControlIndication> const& value);
  bool notifCtrlIndsIsSet() const;
  void unsetNotifCtrlInds();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::DlDataDeliveryStatus> getTypesOfNotif() const;
  void setTypesOfNotif(
      std::vector<oai::model::common::DlDataDeliveryStatus> const& value);
  bool typesOfNotifIsSet() const;
  void unsetTypesOfNotif();

  friend void to_json(
      nlohmann::json& j, const DownlinkDataNotificationControlRm& o);
  friend void from_json(
      const nlohmann::json& j, DownlinkDataNotificationControlRm& o);

 protected:
  std::vector<oai::model::pcf::NotificationControlIndication> m_NotifCtrlInds;
  bool m_NotifCtrlIndsIsSet;
  std::vector<oai::model::common::DlDataDeliveryStatus> m_TypesOfNotif;
  bool m_TypesOfNotifIsSet;
};

}  // namespace oai::model::pcf

#endif /* DownlinkDataNotificationControlRm_H_ */
