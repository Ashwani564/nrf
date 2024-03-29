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

#include "NFInstancesStoreApi.h"
#include "Helpers.h"
#include "nrf_config.hpp"
#include "logger.hpp"

extern std::unique_ptr<oai::config::nrf::nrf_config> nrf_cfg;

namespace oai {
namespace nrf {
namespace api {

using namespace oai::model::nrf;
using namespace oai::model::common;

NFInstancesStoreApi::NFInstancesStoreApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void NFInstancesStoreApi::init() {
  setupRoutes();
}

void NFInstancesStoreApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router,
      base + nrf_cfg->local().get_sbi().get_api_version() + "/nf-instances",
      Routes::bind(&NFInstancesStoreApi::get_nf_instances_handler, this));
  Routes::Options(
      *router,
      base + nrf_cfg->local().get_sbi().get_api_version() + "/nf-instances",
      Routes::bind(&NFInstancesStoreApi::options_nf_instances_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &NFInstancesStoreApi::nf_instances_store_api_default_handler, this));
}

void NFInstancesStoreApi::get_nf_instances_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  // Getting the query params
  auto nfTypeQuery = request.query().get("nf-type");
  Pistache::Optional<std::string> nfType;
  if (!nfTypeQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (helpers::fromStringValue(nfTypeQuery.get(), valueQuery_instance)) {
      nfType = Pistache::Some(valueQuery_instance);
    }
  }
  auto limitQuery = request.query().get("limit");
  Pistache::Optional<int32_t> limit;
  if (!limitQuery.isEmpty()) {
    int32_t valueQuery_instance;
    if (helpers::fromStringValue(limitQuery.get(), valueQuery_instance)) {
      limit = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->get_nf_instances(nfType, limit, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (Pistache::Http::HttpError& e) {
    response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}
void NFInstancesStoreApi::options_nf_instances_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  try {
    this->options_nf_instances(response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (Pistache::Http::HttpError& e) {
    response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void NFInstancesStoreApi::nf_instances_store_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace api
}  // namespace nrf
}  // namespace oai
