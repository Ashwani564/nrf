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
/*
 * NotificationEventType.h
 *
 *
 */

#ifndef NotificationEventType_H_
#define NotificationEventType_H_

#include <nlohmann/json.hpp>

namespace oai::model::nrf {

/// <summary>
///
/// </summary>
class NotificationEventType {
 public:
  NotificationEventType();
  virtual ~NotificationEventType();

  void validate();

  /////////////////////////////////////////////
  /// NotificationEventType members

  friend void to_json(nlohmann::json& j, const NotificationEventType& o);
  friend void from_json(const nlohmann::json& j, NotificationEventType& o);

 protected:
};

}  // namespace oai::model::nrf

#endif /* NotificationEventType_H_ */
