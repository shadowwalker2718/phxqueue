/* phxrpc_mqttbroker_service.h

 Generated by phxrpc_pb2service from mqttbroker.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "mqttbroker.pb.h"


class MqttBrokerService {
  public:
    MqttBrokerService();
    virtual ~MqttBrokerService();

    virtual int PHXEcho(const google::protobuf::StringValue &req, google::protobuf::StringValue *resp);
    virtual int MqttConnect(const phxqueue_phxrpc::logic::mqtt::MqttConnectPb &req, phxqueue_phxrpc::logic::mqtt::MqttConnackPb *resp);
    virtual int MqttPublish(const phxqueue_phxrpc::logic::mqtt::MqttPublishPb &req, google::protobuf::Empty *resp);
    virtual int MqttPuback(const phxqueue_phxrpc::logic::mqtt::MqttPubackPb &req, google::protobuf::Empty *resp);
    virtual int MqttPubrec(const phxqueue_phxrpc::logic::mqtt::MqttPubrecPb &req, google::protobuf::Empty *resp);
    virtual int MqttPubrel(const phxqueue_phxrpc::logic::mqtt::MqttPubrelPb &req, google::protobuf::Empty *resp);
    virtual int MqttPubcomp(const phxqueue_phxrpc::logic::mqtt::MqttPubcompPb &req, google::protobuf::Empty *resp);
    virtual int MqttSubscribe(const phxqueue_phxrpc::logic::mqtt::MqttSubscribePb &req, phxqueue_phxrpc::logic::mqtt::MqttSubackPb *resp);
    virtual int MqttUnsubscribe(const phxqueue_phxrpc::logic::mqtt::MqttUnsubscribePb &req, phxqueue_phxrpc::logic::mqtt::MqttUnsubackPb *resp);
    virtual int MqttPing(const phxqueue_phxrpc::logic::mqtt::MqttPingreqPb &req, phxqueue_phxrpc::logic::mqtt::MqttPingrespPb *resp);
    virtual int MqttDisconnect(const phxqueue_phxrpc::logic::mqtt::MqttDisconnectPb &req, google::protobuf::Empty *resp);
    virtual int HttpPublish(const phxqueue_phxrpc::logic::mqtt::HttpPublishPb &req, phxqueue_phxrpc::logic::mqtt::HttpPubackPb *resp);
};
