/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* StoreApiImpl.h
*
* 
*/

#ifndef STORE_API_IMPL_H_
#define STORE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <StoreApi.h>

#include "Order.h"
#include <map>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class StoreApiImpl : public org::openapitools::server::api::StoreApi {
public:
    StoreApiImpl(Pistache::Address addr);
    ~StoreApiImpl() { };

    void delete_order(const std::string &orderId, Pistache::Http::ResponseWriter &response);
    void get_inventory(Pistache::Http::ResponseWriter &response);
    void get_order_by_id(const int64_t &orderId, Pistache::Http::ResponseWriter &response);
    void place_order(const std::shared_ptr<Order> &order, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif