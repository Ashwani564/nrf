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
 * NFInstanceIDDocumentApi.h
 *
 *
 */

#ifndef NFInstanceIDDocumentApi_H_
#define NFInstanceIDDocumentApi_H_

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>

#include "NFProfile.h"
#include "PatchItem.h"
#include "ProblemDetails.h"
#include <string>
#include <vector>

namespace oai {
namespace nrf {
namespace api {

class NFInstanceIDDocumentApi {
 public:
  NFInstanceIDDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~NFInstanceIDDocumentApi() {}
  void init();

  const std::string base = "/nnrf-nfm/";

 private:
  void setupRoutes();

  void deregister_nf_instance_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void get_nf_instance_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void register_nf_instance_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void update_nf_instance_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void nf_instance_id_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Deregisters a given NF Instance
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nfInstanceID">Unique ID of the NF Instance to
  /// deregister</param>
  virtual void deregister_nf_instance(
      const std::string& nfInstanceID,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Read the profile of a given NF Instance
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nfInstanceID">Unique ID of the NF Instance</param>
  virtual void get_nf_instance(
      const std::string& nfInstanceID,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Register a new NF Instance
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nfInstanceID">Unique ID of the NF Instance to
  /// register</param> <param name="nFProfile"></param> <param
  /// name="contentEncoding">Content-Encoding, described in IETF RFC 7231
  /// (optional, default to &quot;&quot;)</param>
  virtual void register_nf_instance(
      const std::string& nfInstanceID,
      const oai::model::nrf::NFProfile& nFProfile,
      const Pistache::Optional<Pistache::Http::Header::Raw>& contentEncoding,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Update NF Instance profile
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nfInstanceID">Unique ID of the NF Instance to update</param>
  /// <param name="patchItem"></param>
  virtual void update_nf_instance(
      const std::string& nfInstanceID,
      const std::vector<oai::model::common::PatchItem>& patchItem,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace api
}  // namespace nrf
}  // namespace oai

#endif /* NFInstanceIDDocumentApi_H_ */
