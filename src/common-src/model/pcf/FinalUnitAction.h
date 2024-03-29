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
 * FinalUnitAction.h
 *
 *
 */

#ifndef FinalUnitAction_H_
#define FinalUnitAction_H_

#include "FinalUnitAction_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class FinalUnitAction {
 public:
  FinalUnitAction();
  virtual ~FinalUnitAction() = default;

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

  bool operator==(const FinalUnitAction& rhs) const;
  bool operator!=(const FinalUnitAction& rhs) const;

  /////////////////////////////////////////////
  /// FinalUnitAction members

  FinalUnitAction_anyOf getValue() const;
  void setValue(FinalUnitAction_anyOf value);
  FinalUnitAction_anyOf::eFinalUnitAction_anyOf getEnumValue() const;
  void setEnumValue(FinalUnitAction_anyOf::eFinalUnitAction_anyOf value);
  friend void to_json(nlohmann::json& j, const FinalUnitAction& o);
  friend void from_json(const nlohmann::json& j, FinalUnitAction& o);
  friend void to_json(nlohmann::json& j, const FinalUnitAction_anyOf& o);
  friend void from_json(const nlohmann::json& j, FinalUnitAction_anyOf& o);

 protected:
  FinalUnitAction_anyOf m_value;
};

}  // namespace oai::model::pcf

#endif /* FinalUnitAction_H_ */
