// +build !minimal

#pragma once

#ifndef GO_QTSERIALBUS_H
#define GO_QTSERIALBUS_H

#ifdef __cplusplus
extern "C" {
#endif

void* QCanBus_CreateDevice(void* ptr, char* plugin, char* interfaceName);
void* QCanBus_QCanBus_Instance();
void QCanBus_TimerEvent(void* ptr, void* event);
void QCanBus_TimerEventDefault(void* ptr, void* event);
void QCanBus_ChildEvent(void* ptr, void* event);
void QCanBus_ChildEventDefault(void* ptr, void* event);
void QCanBus_ConnectNotify(void* ptr, void* sign);
void QCanBus_ConnectNotifyDefault(void* ptr, void* sign);
void QCanBus_CustomEvent(void* ptr, void* event);
void QCanBus_CustomEventDefault(void* ptr, void* event);
void QCanBus_DeleteLater(void* ptr);
void QCanBus_DeleteLaterDefault(void* ptr);
void QCanBus_DisconnectNotify(void* ptr, void* sign);
void QCanBus_DisconnectNotifyDefault(void* ptr, void* sign);
int QCanBus_Event(void* ptr, void* e);
int QCanBus_EventDefault(void* ptr, void* e);
int QCanBus_EventFilter(void* ptr, void* watched, void* event);
int QCanBus_EventFilterDefault(void* ptr, void* watched, void* event);
void* QCanBus_MetaObject(void* ptr);
void* QCanBus_MetaObjectDefault(void* ptr);
long long QCanBusDevice_FramesAvailable(void* ptr);
long long QCanBusDevice_FramesToWrite(void* ptr);
void QCanBusDevice_Close(void* ptr);
void* QCanBusDevice_ConfigurationParameter(void* ptr, int key);
int QCanBusDevice_ConnectDevice(void* ptr);
void QCanBusDevice_DisconnectDevice(void* ptr);
void QCanBusDevice_EnqueueOutgoingFrame(void* ptr, void* newFrame);
int QCanBusDevice_Error(void* ptr);
void QCanBusDevice_ConnectErrorOccurred(void* ptr);
void QCanBusDevice_DisconnectErrorOccurred(void* ptr);
void QCanBusDevice_ErrorOccurred(void* ptr, int error);
char* QCanBusDevice_ErrorString(void* ptr);
void QCanBusDevice_ConnectFramesReceived(void* ptr);
void QCanBusDevice_DisconnectFramesReceived(void* ptr);
void QCanBusDevice_FramesReceived(void* ptr);
void QCanBusDevice_ConnectFramesWritten(void* ptr);
void QCanBusDevice_DisconnectFramesWritten(void* ptr);
void QCanBusDevice_FramesWritten(void* ptr, long long framesCount);
int QCanBusDevice_HasOutgoingFrames(void* ptr);
int QCanBusDevice_Open(void* ptr);
void QCanBusDevice_SetConfigurationParameter(void* ptr, int key, void* value);
void QCanBusDevice_SetConfigurationParameterDefault(void* ptr, int key, void* value);
void QCanBusDevice_SetError(void* ptr, char* errorText, int errorId);
void QCanBusDevice_SetState(void* ptr, int newState);
int QCanBusDevice_State(void* ptr);
void QCanBusDevice_ConnectStateChanged(void* ptr);
void QCanBusDevice_DisconnectStateChanged(void* ptr);
void QCanBusDevice_StateChanged(void* ptr, int state);
void QCanBusDevice_TimerEvent(void* ptr, void* event);
void QCanBusDevice_TimerEventDefault(void* ptr, void* event);
void QCanBusDevice_ChildEvent(void* ptr, void* event);
void QCanBusDevice_ChildEventDefault(void* ptr, void* event);
void QCanBusDevice_ConnectNotify(void* ptr, void* sign);
void QCanBusDevice_ConnectNotifyDefault(void* ptr, void* sign);
void QCanBusDevice_CustomEvent(void* ptr, void* event);
void QCanBusDevice_CustomEventDefault(void* ptr, void* event);
void QCanBusDevice_DeleteLater(void* ptr);
void QCanBusDevice_DeleteLaterDefault(void* ptr);
void QCanBusDevice_DisconnectNotify(void* ptr, void* sign);
void QCanBusDevice_DisconnectNotifyDefault(void* ptr, void* sign);
int QCanBusDevice_Event(void* ptr, void* e);
int QCanBusDevice_EventDefault(void* ptr, void* e);
int QCanBusDevice_EventFilter(void* ptr, void* watched, void* event);
int QCanBusDevice_EventFilterDefault(void* ptr, void* watched, void* event);
void* QCanBusDevice_MetaObject(void* ptr);
void* QCanBusDevice_MetaObjectDefault(void* ptr);
void* QCanBusFactory_CreateDevice(void* ptr, char* interfaceName);
char* QCanBusFactory_ObjectNameAbs(void* ptr);
void QCanBusFactory_SetObjectNameAbs(void* ptr, char* name);
int QCanBusFrame_TransmissionTimeoutError_Type();
int QCanBusFrame_LostArbitrationError_Type();
int QCanBusFrame_ControllerError_Type();
int QCanBusFrame_ProtocolViolationError_Type();
int QCanBusFrame_TransceiverError_Type();
int QCanBusFrame_MissingAcknowledgmentError_Type();
int QCanBusFrame_BusOffError_Type();
int QCanBusFrame_BusError_Type();
int QCanBusFrame_ControllerRestartError_Type();
int QCanBusFrame_UnknownError_Type();
int QCanBusFrame_AnyError_Type();
void* QCanBusFrame_NewQCanBusFrame(int ty);
int QCanBusFrame_Error(void* ptr);
int QCanBusFrame_FrameType(void* ptr);
int QCanBusFrame_HasExtendedFrameFormat(void* ptr);
int QCanBusFrame_IsValid(void* ptr);
char* QCanBusFrame_Payload(void* ptr);
void QCanBusFrame_SetError(void* ptr, int error);
void QCanBusFrame_SetExtendedFrameFormat(void* ptr, int isExtended);
void QCanBusFrame_SetFrameType(void* ptr, int newType);
void QCanBusFrame_SetPayload(void* ptr, char* data);
int QModbusClient_Timeout(void* ptr);
void* QModbusClient_NewQModbusClient(void* parent);
int QModbusClient_NumberOfRetries(void* ptr);
void* QModbusClient_SendRawRequest(void* ptr, void* request, int serverAddress);
void* QModbusClient_SendReadRequest(void* ptr, void* read, int serverAddress);
void* QModbusClient_SendReadWriteRequest(void* ptr, void* read, void* write, int serverAddress);
void* QModbusClient_SendWriteRequest(void* ptr, void* write, int serverAddress);
void QModbusClient_SetNumberOfRetries(void* ptr, int number);
void QModbusClient_SetTimeout(void* ptr, int newTimeout);
void QModbusClient_ConnectTimeoutChanged(void* ptr);
void QModbusClient_DisconnectTimeoutChanged(void* ptr);
void QModbusClient_TimeoutChanged(void* ptr, int newTimeout);
void QModbusClient_Close(void* ptr);
;
int QModbusClient_Open(void* ptr);
;
void QModbusClient_TimerEvent(void* ptr, void* event);
void QModbusClient_TimerEventDefault(void* ptr, void* event);
void QModbusClient_ChildEvent(void* ptr, void* event);
void QModbusClient_ChildEventDefault(void* ptr, void* event);
void QModbusClient_ConnectNotify(void* ptr, void* sign);
void QModbusClient_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusClient_CustomEvent(void* ptr, void* event);
void QModbusClient_CustomEventDefault(void* ptr, void* event);
void QModbusClient_DeleteLater(void* ptr);
void QModbusClient_DeleteLaterDefault(void* ptr);
void QModbusClient_DisconnectNotify(void* ptr, void* sign);
void QModbusClient_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusClient_Event(void* ptr, void* e);
int QModbusClient_EventDefault(void* ptr, void* e);
int QModbusClient_EventFilter(void* ptr, void* watched, void* event);
int QModbusClient_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusClient_MetaObject(void* ptr);
void* QModbusClient_MetaObjectDefault(void* ptr);
void* QModbusDataUnit_NewQModbusDataUnit();
void* QModbusDataUnit_NewQModbusDataUnit2(int ty);
int QModbusDataUnit_IsValid(void* ptr);
int QModbusDataUnit_RegisterType(void* ptr);
void QModbusDataUnit_SetRegisterType(void* ptr, int ty);
void QModbusDataUnit_SetStartAddress(void* ptr, int address);
int QModbusDataUnit_StartAddress(void* ptr);
void* QModbusDevice_NewQModbusDevice(void* parent);
void QModbusDevice_Close(void* ptr);
int QModbusDevice_ConnectDevice(void* ptr);
void* QModbusDevice_ConnectionParameter(void* ptr, int parameter);
void QModbusDevice_DisconnectDevice(void* ptr);
int QModbusDevice_Error(void* ptr);
void QModbusDevice_ConnectErrorOccurred(void* ptr);
void QModbusDevice_DisconnectErrorOccurred(void* ptr);
void QModbusDevice_ErrorOccurred(void* ptr, int error);
char* QModbusDevice_ErrorString(void* ptr);
int QModbusDevice_Open(void* ptr);
void QModbusDevice_SetConnectionParameter(void* ptr, int parameter, void* value);
void QModbusDevice_SetError(void* ptr, char* errorText, int error);
void QModbusDevice_SetState(void* ptr, int newState);
int QModbusDevice_State(void* ptr);
void QModbusDevice_ConnectStateChanged(void* ptr);
void QModbusDevice_DisconnectStateChanged(void* ptr);
void QModbusDevice_StateChanged(void* ptr, int state);
void QModbusDevice_DestroyQModbusDevice(void* ptr);
void QModbusDevice_TimerEvent(void* ptr, void* event);
void QModbusDevice_TimerEventDefault(void* ptr, void* event);
void QModbusDevice_ChildEvent(void* ptr, void* event);
void QModbusDevice_ChildEventDefault(void* ptr, void* event);
void QModbusDevice_ConnectNotify(void* ptr, void* sign);
void QModbusDevice_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusDevice_CustomEvent(void* ptr, void* event);
void QModbusDevice_CustomEventDefault(void* ptr, void* event);
void QModbusDevice_DeleteLater(void* ptr);
void QModbusDevice_DeleteLaterDefault(void* ptr);
void QModbusDevice_DisconnectNotify(void* ptr, void* sign);
void QModbusDevice_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusDevice_Event(void* ptr, void* e);
int QModbusDevice_EventDefault(void* ptr, void* e);
int QModbusDevice_EventFilter(void* ptr, void* watched, void* event);
int QModbusDevice_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusDevice_MetaObject(void* ptr);
void* QModbusDevice_MetaObjectDefault(void* ptr);
void* QModbusDeviceIdentification_NewQModbusDeviceIdentification();
int QModbusDeviceIdentification_ConformityLevel(void* ptr);
int QModbusDeviceIdentification_IsValid(void* ptr);
void QModbusDeviceIdentification_SetConformityLevel(void* ptr, int level);
void* QModbusExceptionResponse_NewQModbusExceptionResponse();
void* QModbusExceptionResponse_NewQModbusExceptionResponse3(int code, int ec);
void* QModbusExceptionResponse_NewQModbusExceptionResponse2(void* pdu);
void QModbusExceptionResponse_SetExceptionCode(void* ptr, int ec);
void QModbusExceptionResponse_SetFunctionCode(void* ptr, int c);
void QModbusExceptionResponse_SetFunctionCodeDefault(void* ptr, int c);
char* QModbusExceptionResponse_ObjectNameAbs(void* ptr);
void QModbusExceptionResponse_SetObjectNameAbs(void* ptr, char* name);
void* QModbusPdu_NewQModbusPdu();
void* QModbusPdu_NewQModbusPdu2(int code, char* data);
void* QModbusPdu_NewQModbusPdu3(void* other);
char* QModbusPdu_Data(void* ptr);
int QModbusPdu_ExceptionCode(void* ptr);
int QModbusPdu_FunctionCode(void* ptr);
int QModbusPdu_IsException(void* ptr);
int QModbusPdu_IsValid(void* ptr);
void QModbusPdu_SetData(void* ptr, char* data);
void QModbusPdu_SetFunctionCode(void* ptr, int code);
void QModbusPdu_SetFunctionCodeDefault(void* ptr, int code);
void QModbusPdu_DestroyQModbusPdu(void* ptr);
char* QModbusPdu_ObjectNameAbs(void* ptr);
void QModbusPdu_SetObjectNameAbs(void* ptr, char* name);
void* QModbusReply_NewQModbusReply(int ty, int serverAddress, void* parent);
int QModbusReply_Error(void* ptr);
void QModbusReply_ConnectErrorOccurred(void* ptr);
void QModbusReply_DisconnectErrorOccurred(void* ptr);
void QModbusReply_ErrorOccurred(void* ptr, int error);
char* QModbusReply_ErrorString(void* ptr);
void QModbusReply_ConnectFinished(void* ptr);
void QModbusReply_DisconnectFinished(void* ptr);
void QModbusReply_Finished(void* ptr);
int QModbusReply_IsFinished(void* ptr);
int QModbusReply_ServerAddress(void* ptr);
int QModbusReply_Type(void* ptr);
void QModbusReply_TimerEvent(void* ptr, void* event);
void QModbusReply_TimerEventDefault(void* ptr, void* event);
void QModbusReply_ChildEvent(void* ptr, void* event);
void QModbusReply_ChildEventDefault(void* ptr, void* event);
void QModbusReply_ConnectNotify(void* ptr, void* sign);
void QModbusReply_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusReply_CustomEvent(void* ptr, void* event);
void QModbusReply_CustomEventDefault(void* ptr, void* event);
void QModbusReply_DeleteLater(void* ptr);
void QModbusReply_DeleteLaterDefault(void* ptr);
void QModbusReply_DisconnectNotify(void* ptr, void* sign);
void QModbusReply_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusReply_Event(void* ptr, void* e);
int QModbusReply_EventDefault(void* ptr, void* e);
int QModbusReply_EventFilter(void* ptr, void* watched, void* event);
int QModbusReply_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusReply_MetaObject(void* ptr);
void* QModbusReply_MetaObjectDefault(void* ptr);
void* QModbusRequest_NewQModbusRequest();
void* QModbusRequest_NewQModbusRequest3(int code, char* data);
void* QModbusRequest_NewQModbusRequest2(void* pdu);
int QModbusRequest_QModbusRequest_CalculateDataSize(void* request);
int QModbusRequest_QModbusRequest_MinimumDataSize(void* request);
void QModbusRequest_SetFunctionCode(void* ptr, int code);
void QModbusRequest_SetFunctionCodeDefault(void* ptr, int code);
void* QModbusResponse_NewQModbusResponse();
void* QModbusResponse_NewQModbusResponse3(int code, char* data);
void* QModbusResponse_NewQModbusResponse2(void* pdu);
int QModbusResponse_QModbusResponse_CalculateDataSize(void* response);
int QModbusResponse_QModbusResponse_MinimumDataSize(void* response);
void QModbusResponse_SetFunctionCode(void* ptr, int code);
void QModbusResponse_SetFunctionCodeDefault(void* ptr, int code);
void* QModbusRtuSerialMaster_NewQModbusRtuSerialMaster(void* parent);
int QModbusRtuSerialMaster_InterFrameDelay(void* ptr);
void QModbusRtuSerialMaster_SetInterFrameDelay(void* ptr, int microseconds);
void QModbusRtuSerialMaster_Close(void* ptr);
void QModbusRtuSerialMaster_CloseDefault(void* ptr);
int QModbusRtuSerialMaster_Open(void* ptr);
int QModbusRtuSerialMaster_OpenDefault(void* ptr);
void QModbusRtuSerialMaster_TimerEvent(void* ptr, void* event);
void QModbusRtuSerialMaster_TimerEventDefault(void* ptr, void* event);
void QModbusRtuSerialMaster_ChildEvent(void* ptr, void* event);
void QModbusRtuSerialMaster_ChildEventDefault(void* ptr, void* event);
void QModbusRtuSerialMaster_ConnectNotify(void* ptr, void* sign);
void QModbusRtuSerialMaster_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusRtuSerialMaster_CustomEvent(void* ptr, void* event);
void QModbusRtuSerialMaster_CustomEventDefault(void* ptr, void* event);
void QModbusRtuSerialMaster_DeleteLater(void* ptr);
void QModbusRtuSerialMaster_DeleteLaterDefault(void* ptr);
void QModbusRtuSerialMaster_DisconnectNotify(void* ptr, void* sign);
void QModbusRtuSerialMaster_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusRtuSerialMaster_Event(void* ptr, void* e);
int QModbusRtuSerialMaster_EventDefault(void* ptr, void* e);
int QModbusRtuSerialMaster_EventFilter(void* ptr, void* watched, void* event);
int QModbusRtuSerialMaster_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusRtuSerialMaster_MetaObject(void* ptr);
void* QModbusRtuSerialMaster_MetaObjectDefault(void* ptr);
void* QModbusRtuSerialSlave_NewQModbusRtuSerialSlave(void* parent);
void QModbusRtuSerialSlave_DestroyQModbusRtuSerialSlave(void* ptr);
void* QModbusRtuSerialSlave_ProcessPrivateRequest(void* ptr, void* request);
void* QModbusRtuSerialSlave_ProcessPrivateRequestDefault(void* ptr, void* request);
void* QModbusRtuSerialSlave_ProcessRequest(void* ptr, void* request);
void* QModbusRtuSerialSlave_ProcessRequestDefault(void* ptr, void* request);
int QModbusRtuSerialSlave_ProcessesBroadcast(void* ptr);
int QModbusRtuSerialSlave_ProcessesBroadcastDefault(void* ptr);
int QModbusRtuSerialSlave_SetValue(void* ptr, int option, void* newValue);
int QModbusRtuSerialSlave_SetValueDefault(void* ptr, int option, void* newValue);
void* QModbusRtuSerialSlave_Value(void* ptr, int option);
void* QModbusRtuSerialSlave_ValueDefault(void* ptr, int option);
void QModbusRtuSerialSlave_Close(void* ptr);
void QModbusRtuSerialSlave_CloseDefault(void* ptr);
int QModbusRtuSerialSlave_Open(void* ptr);
int QModbusRtuSerialSlave_OpenDefault(void* ptr);
void QModbusRtuSerialSlave_TimerEvent(void* ptr, void* event);
void QModbusRtuSerialSlave_TimerEventDefault(void* ptr, void* event);
void QModbusRtuSerialSlave_ChildEvent(void* ptr, void* event);
void QModbusRtuSerialSlave_ChildEventDefault(void* ptr, void* event);
void QModbusRtuSerialSlave_ConnectNotify(void* ptr, void* sign);
void QModbusRtuSerialSlave_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusRtuSerialSlave_CustomEvent(void* ptr, void* event);
void QModbusRtuSerialSlave_CustomEventDefault(void* ptr, void* event);
void QModbusRtuSerialSlave_DeleteLater(void* ptr);
void QModbusRtuSerialSlave_DeleteLaterDefault(void* ptr);
void QModbusRtuSerialSlave_DisconnectNotify(void* ptr, void* sign);
void QModbusRtuSerialSlave_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusRtuSerialSlave_Event(void* ptr, void* e);
int QModbusRtuSerialSlave_EventDefault(void* ptr, void* e);
int QModbusRtuSerialSlave_EventFilter(void* ptr, void* watched, void* event);
int QModbusRtuSerialSlave_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusRtuSerialSlave_MetaObject(void* ptr);
void* QModbusRtuSerialSlave_MetaObjectDefault(void* ptr);
void* QModbusServer_NewQModbusServer(void* parent);
int QModbusServer_Data(void* ptr, void* newData);
void QModbusServer_ConnectDataWritten(void* ptr);
void QModbusServer_DisconnectDataWritten(void* ptr);
void QModbusServer_DataWritten(void* ptr, int regist, int address, int size);
void* QModbusServer_ProcessPrivateRequest(void* ptr, void* request);
void* QModbusServer_ProcessPrivateRequestDefault(void* ptr, void* request);
void* QModbusServer_ProcessRequest(void* ptr, void* request);
void* QModbusServer_ProcessRequestDefault(void* ptr, void* request);
int QModbusServer_ProcessesBroadcast(void* ptr);
int QModbusServer_ProcessesBroadcastDefault(void* ptr);
int QModbusServer_ServerAddress(void* ptr);
int QModbusServer_SetData(void* ptr, void* newData);
void QModbusServer_SetServerAddress(void* ptr, int serverAddress);
int QModbusServer_SetValue(void* ptr, int option, void* newValue);
int QModbusServer_SetValueDefault(void* ptr, int option, void* newValue);
void* QModbusServer_Value(void* ptr, int option);
void* QModbusServer_ValueDefault(void* ptr, int option);
void QModbusServer_Close(void* ptr);
;
int QModbusServer_Open(void* ptr);
;
void QModbusServer_TimerEvent(void* ptr, void* event);
void QModbusServer_TimerEventDefault(void* ptr, void* event);
void QModbusServer_ChildEvent(void* ptr, void* event);
void QModbusServer_ChildEventDefault(void* ptr, void* event);
void QModbusServer_ConnectNotify(void* ptr, void* sign);
void QModbusServer_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusServer_CustomEvent(void* ptr, void* event);
void QModbusServer_CustomEventDefault(void* ptr, void* event);
void QModbusServer_DeleteLater(void* ptr);
void QModbusServer_DeleteLaterDefault(void* ptr);
void QModbusServer_DisconnectNotify(void* ptr, void* sign);
void QModbusServer_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusServer_Event(void* ptr, void* e);
int QModbusServer_EventDefault(void* ptr, void* e);
int QModbusServer_EventFilter(void* ptr, void* watched, void* event);
int QModbusServer_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusServer_MetaObject(void* ptr);
void* QModbusServer_MetaObjectDefault(void* ptr);
void* QModbusTcpClient_NewQModbusTcpClient(void* parent);
void QModbusTcpClient_DestroyQModbusTcpClient(void* ptr);
void QModbusTcpClient_Close(void* ptr);
void QModbusTcpClient_CloseDefault(void* ptr);
int QModbusTcpClient_Open(void* ptr);
int QModbusTcpClient_OpenDefault(void* ptr);
void QModbusTcpClient_TimerEvent(void* ptr, void* event);
void QModbusTcpClient_TimerEventDefault(void* ptr, void* event);
void QModbusTcpClient_ChildEvent(void* ptr, void* event);
void QModbusTcpClient_ChildEventDefault(void* ptr, void* event);
void QModbusTcpClient_ConnectNotify(void* ptr, void* sign);
void QModbusTcpClient_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusTcpClient_CustomEvent(void* ptr, void* event);
void QModbusTcpClient_CustomEventDefault(void* ptr, void* event);
void QModbusTcpClient_DeleteLater(void* ptr);
void QModbusTcpClient_DeleteLaterDefault(void* ptr);
void QModbusTcpClient_DisconnectNotify(void* ptr, void* sign);
void QModbusTcpClient_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusTcpClient_Event(void* ptr, void* e);
int QModbusTcpClient_EventDefault(void* ptr, void* e);
int QModbusTcpClient_EventFilter(void* ptr, void* watched, void* event);
int QModbusTcpClient_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusTcpClient_MetaObject(void* ptr);
void* QModbusTcpClient_MetaObjectDefault(void* ptr);
void* QModbusTcpServer_NewQModbusTcpServer(void* parent);
void QModbusTcpServer_DestroyQModbusTcpServer(void* ptr);
void* QModbusTcpServer_ProcessPrivateRequest(void* ptr, void* request);
void* QModbusTcpServer_ProcessPrivateRequestDefault(void* ptr, void* request);
void* QModbusTcpServer_ProcessRequest(void* ptr, void* request);
void* QModbusTcpServer_ProcessRequestDefault(void* ptr, void* request);
int QModbusTcpServer_ProcessesBroadcast(void* ptr);
int QModbusTcpServer_ProcessesBroadcastDefault(void* ptr);
int QModbusTcpServer_SetValue(void* ptr, int option, void* newValue);
int QModbusTcpServer_SetValueDefault(void* ptr, int option, void* newValue);
void* QModbusTcpServer_Value(void* ptr, int option);
void* QModbusTcpServer_ValueDefault(void* ptr, int option);
void QModbusTcpServer_Close(void* ptr);
void QModbusTcpServer_CloseDefault(void* ptr);
int QModbusTcpServer_Open(void* ptr);
int QModbusTcpServer_OpenDefault(void* ptr);
void QModbusTcpServer_TimerEvent(void* ptr, void* event);
void QModbusTcpServer_TimerEventDefault(void* ptr, void* event);
void QModbusTcpServer_ChildEvent(void* ptr, void* event);
void QModbusTcpServer_ChildEventDefault(void* ptr, void* event);
void QModbusTcpServer_ConnectNotify(void* ptr, void* sign);
void QModbusTcpServer_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusTcpServer_CustomEvent(void* ptr, void* event);
void QModbusTcpServer_CustomEventDefault(void* ptr, void* event);
void QModbusTcpServer_DeleteLater(void* ptr);
void QModbusTcpServer_DeleteLaterDefault(void* ptr);
void QModbusTcpServer_DisconnectNotify(void* ptr, void* sign);
void QModbusTcpServer_DisconnectNotifyDefault(void* ptr, void* sign);
int QModbusTcpServer_Event(void* ptr, void* e);
int QModbusTcpServer_EventDefault(void* ptr, void* e);
int QModbusTcpServer_EventFilter(void* ptr, void* watched, void* event);
int QModbusTcpServer_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusTcpServer_MetaObject(void* ptr);
void* QModbusTcpServer_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif