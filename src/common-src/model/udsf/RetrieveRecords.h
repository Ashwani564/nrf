/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RetrieveRecords.h
 *
 * Indicates the data to be retrieved.
 */

#ifndef RetrieveRecords_H_
#define RetrieveRecords_H_

#include <nlohmann/json.hpp>

namespace oai::model::udsf {

/// <summary>
/// Indicates the data to be retrieved.
/// </summary>
class RetrieveRecords {
 public:
  RetrieveRecords();
  virtual ~RetrieveRecords() = default;

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

  bool operator==(const RetrieveRecords& rhs) const;
  bool operator!=(const RetrieveRecords& rhs) const;

  std::string get() const;
  void set(const std::string&);

  /////////////////////////////////////////////
  /// RetrieveRecords members

  friend void to_json(nlohmann::json& j, const RetrieveRecords& o);
  friend void from_json(const nlohmann::json& j, RetrieveRecords& o);

 protected:
  std::string value;
};

}  // namespace oai::model::udsf

#endif /* RetrieveRecords_H_ */
