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
 * SmPolicyAssociationReleaseCause_anyOf.h
 *
 *
 */

#ifndef SmPolicyAssociationReleaseCause_anyOf_H_
#define SmPolicyAssociationReleaseCause_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class SmPolicyAssociationReleaseCause_anyOf {
 public:
  SmPolicyAssociationReleaseCause_anyOf();
  virtual ~SmPolicyAssociationReleaseCause_anyOf() = default;

  enum class eSmPolicyAssociationReleaseCause_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    UNSPECIFIED,
    UE_SUBSCRIPTION,
    INSUFFICIENT_RES,
    VALIDATION_CONDITION_NOT_MET
  };

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

  bool operator==(const SmPolicyAssociationReleaseCause_anyOf& rhs) const;
  bool operator!=(const SmPolicyAssociationReleaseCause_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// SmPolicyAssociationReleaseCause_anyOf members

  SmPolicyAssociationReleaseCause_anyOf::eSmPolicyAssociationReleaseCause_anyOf
  getValue() const;
  void setValue(SmPolicyAssociationReleaseCause_anyOf::
                    eSmPolicyAssociationReleaseCause_anyOf value);

  friend void to_json(
      nlohmann::json& j, const SmPolicyAssociationReleaseCause_anyOf& o);
  friend void from_json(
      const nlohmann::json& j, SmPolicyAssociationReleaseCause_anyOf& o);

 protected:
  SmPolicyAssociationReleaseCause_anyOf::eSmPolicyAssociationReleaseCause_anyOf
      m_value = SmPolicyAssociationReleaseCause_anyOf::
          eSmPolicyAssociationReleaseCause_anyOf::
              INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::model::pcf

#endif /* SmPolicyAssociationReleaseCause_anyOf_H_ */
