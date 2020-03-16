/*** Autogenerated by WIDL 1.7.37 from netlistmgr.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __netlistmgr_h__
#define __netlistmgr_h__

/* Forward declarations */

#ifndef __INetworkCostManager_FWD_DEFINED__
#define __INetworkCostManager_FWD_DEFINED__
typedef interface INetworkCostManager INetworkCostManager;
#endif

#ifndef __INetworkListManager_FWD_DEFINED__
#define __INetworkListManager_FWD_DEFINED__
typedef interface INetworkListManager INetworkListManager;
#endif

#ifndef __NetworkListManager_FWD_DEFINED__
#define __NetworkListManager_FWD_DEFINED__
#ifdef __cplusplus
typedef class NetworkListManager NetworkListManager;
#else
typedef struct NetworkListManager NetworkListManager;
#endif /* defined __cplusplus */
#endif /* defined __NetworkListManager_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IEnumNetworks_FWD_DEFINED__
#define __IEnumNetworks_FWD_DEFINED__
typedef interface IEnumNetworks IEnumNetworks;
#endif

#ifndef __IEnumNetworkConnections_FWD_DEFINED__
#define __IEnumNetworkConnections_FWD_DEFINED__
typedef interface IEnumNetworkConnections IEnumNetworkConnections;
#endif

#ifndef __INetwork_FWD_DEFINED__
#define __INetwork_FWD_DEFINED__
typedef interface INetwork INetwork;
#endif

#ifndef __INetworkConnection_FWD_DEFINED__
#define __INetworkConnection_FWD_DEFINED__
typedef interface INetworkConnection INetworkConnection;
#endif

#ifndef __INetworkCostManager_FWD_DEFINED__
#define __INetworkCostManager_FWD_DEFINED__
typedef interface INetworkCostManager INetworkCostManager;
#endif

#ifndef __INetworkListManager_FWD_DEFINED__
#define __INetworkListManager_FWD_DEFINED__
typedef interface INetworkListManager INetworkListManager;
#endif

typedef enum NLM_CONNECTIVITY {
    NLM_CONNECTIVITY_DISCONNECTED = 0x0,
    NLM_CONNECTIVITY_IPV4_NOTRAFFIC = 0x1,
    NLM_CONNECTIVITY_IPV6_NOTRAFFIC = 0x2,
    NLM_CONNECTIVITY_IPV4_SUBNET = 0x10,
    NLM_CONNECTIVITY_IPV4_LOCALNETWORK = 0x20,
    NLM_CONNECTIVITY_IPV4_INTERNET = 0x40,
    NLM_CONNECTIVITY_IPV6_SUBNET = 0x100,
    NLM_CONNECTIVITY_IPV6_LOCALNETWORK = 0x200,
    NLM_CONNECTIVITY_IPV6_INTERNET = 0x400
} NLM_CONNECTIVITY;
typedef enum NLM_ENUM_NETWORK {
    NLM_ENUM_NETWORK_CONNECTED = 0x1,
    NLM_ENUM_NETWORK_DISCONNECTED = 0x2,
    NLM_ENUM_NETWORK_ALL = 0x3
} NLM_ENUM_NETWORK;
typedef enum NLM_CONNECTION_COST {
    NLM_CONNECTION_COST_UNKNOWN = 0x0,
    NLM_CONNECTION_COST_UNRESTRICTED = 0x1,
    NLM_CONNECTION_COST_FIXED = 0x2,
    NLM_CONNECTION_COST_VARIABLE = 0x4,
    NLM_CONNECTION_COST_OVERDATALIMIT = 0x10000,
    NLM_CONNECTION_COST_CONGESTED = 0x20000,
    NLM_CONNECTION_COST_ROAMING = 0x40000,
    NLM_CONNECTION_COST_APPROACHINGDATALIMIT = 0x80000
} NLM_CONNECTION_COST;
typedef struct NLM_SOCKADDR {
    BYTE data[128];
} NLM_SOCKADDR;
typedef struct NLM_USAGE_DATA {
    DWORD UsageInMegabytes;
    FILETIME LastSyncTime;
} NLM_USAGE_DATA;
typedef struct NLM_DATAPLAN_STATUS {
    GUID InterfaceGuid;
    NLM_USAGE_DATA UsageData;
    DWORD DataLimitInMegabytes;
    DWORD InboundBandwidthInKbps;
    DWORD OutboundBandwidthInKbps;
    FILETIME NextBillingCycle;
    DWORD MaxTransferSizeInMegabytes;
    DWORD Reserved;
} NLM_DATAPLAN_STATUS;
/*****************************************************************************
 * INetworkCostManager interface
 */
#ifndef __INetworkCostManager_INTERFACE_DEFINED__
#define __INetworkCostManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_INetworkCostManager, 0xdcb00008, 0x570f, 0x4a9b, 0x8d,0x69, 0x19,0x9f,0xdb,0xa5,0x72,0x3b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("dcb00008-570f-4a9b-8d69-199fdba5723b")
INetworkCostManager : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCost(
        DWORD *pCost,
        NLM_SOCKADDR *pDestIPAddr) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDataPlanStatus(
        NLM_DATAPLAN_STATUS *pDataPlanStatus,
        NLM_SOCKADDR *pDestIPAddr) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDestinationAddresses(
        UINT32 length,
        NLM_SOCKADDR *pDestIPAddrList,
        VARIANT_BOOL bAppend) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INetworkCostManager, 0xdcb00008, 0x570f, 0x4a9b, 0x8d,0x69, 0x19,0x9f,0xdb,0xa5,0x72,0x3b)
#endif
#else
typedef struct INetworkCostManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INetworkCostManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INetworkCostManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INetworkCostManager *This);

    /*** INetworkCostManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCost)(
        INetworkCostManager *This,
        DWORD *pCost,
        NLM_SOCKADDR *pDestIPAddr);

    HRESULT (STDMETHODCALLTYPE *GetDataPlanStatus)(
        INetworkCostManager *This,
        NLM_DATAPLAN_STATUS *pDataPlanStatus,
        NLM_SOCKADDR *pDestIPAddr);

    HRESULT (STDMETHODCALLTYPE *SetDestinationAddresses)(
        INetworkCostManager *This,
        UINT32 length,
        NLM_SOCKADDR *pDestIPAddrList,
        VARIANT_BOOL bAppend);

    END_INTERFACE
} INetworkCostManagerVtbl;
interface INetworkCostManager {
    CONST_VTBL INetworkCostManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INetworkCostManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INetworkCostManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INetworkCostManager_Release(This) (This)->lpVtbl->Release(This)
/*** INetworkCostManager methods ***/
#define INetworkCostManager_GetCost(This,pCost,pDestIPAddr) (This)->lpVtbl->GetCost(This,pCost,pDestIPAddr)
#define INetworkCostManager_GetDataPlanStatus(This,pDataPlanStatus,pDestIPAddr) (This)->lpVtbl->GetDataPlanStatus(This,pDataPlanStatus,pDestIPAddr)
#define INetworkCostManager_SetDestinationAddresses(This,length,pDestIPAddrList,bAppend) (This)->lpVtbl->SetDestinationAddresses(This,length,pDestIPAddrList,bAppend)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INetworkCostManager_QueryInterface(INetworkCostManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INetworkCostManager_AddRef(INetworkCostManager* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INetworkCostManager_Release(INetworkCostManager* This) {
    return This->lpVtbl->Release(This);
}
/*** INetworkCostManager methods ***/
static FORCEINLINE HRESULT INetworkCostManager_GetCost(INetworkCostManager* This,DWORD *pCost,NLM_SOCKADDR *pDestIPAddr) {
    return This->lpVtbl->GetCost(This,pCost,pDestIPAddr);
}
static FORCEINLINE HRESULT INetworkCostManager_GetDataPlanStatus(INetworkCostManager* This,NLM_DATAPLAN_STATUS *pDataPlanStatus,NLM_SOCKADDR *pDestIPAddr) {
    return This->lpVtbl->GetDataPlanStatus(This,pDataPlanStatus,pDestIPAddr);
}
static FORCEINLINE HRESULT INetworkCostManager_SetDestinationAddresses(INetworkCostManager* This,UINT32 length,NLM_SOCKADDR *pDestIPAddrList,VARIANT_BOOL bAppend) {
    return This->lpVtbl->SetDestinationAddresses(This,length,pDestIPAddrList,bAppend);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE INetworkCostManager_GetCost_Proxy(
    INetworkCostManager* This,
    DWORD *pCost,
    NLM_SOCKADDR *pDestIPAddr);
void __RPC_STUB INetworkCostManager_GetCost_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkCostManager_GetDataPlanStatus_Proxy(
    INetworkCostManager* This,
    NLM_DATAPLAN_STATUS *pDataPlanStatus,
    NLM_SOCKADDR *pDestIPAddr);
void __RPC_STUB INetworkCostManager_GetDataPlanStatus_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkCostManager_SetDestinationAddresses_Proxy(
    INetworkCostManager* This,
    UINT32 length,
    NLM_SOCKADDR *pDestIPAddrList,
    VARIANT_BOOL bAppend);
void __RPC_STUB INetworkCostManager_SetDestinationAddresses_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __INetworkCostManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INetworkListManager interface
 */
#ifndef __INetworkListManager_INTERFACE_DEFINED__
#define __INetworkListManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_INetworkListManager, 0xdcb00000, 0x570f, 0x4a9b, 0x8d,0x69, 0x19,0x9f,0xdb,0xa5,0x72,0x3b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("dcb00000-570f-4a9b-8d69-199fdba5723b")
INetworkListManager : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE GetNetworks(
        NLM_ENUM_NETWORK Flags,
        IEnumNetworks **ppEnumNetwork) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNetwork(
        GUID gdNetworkId,
        INetwork **ppNetwork) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNetworkConnections(
        IEnumNetworkConnections **ppEnum) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNetworkConnection(
        GUID gdNetworkConnectionId,
        INetworkConnection **ppNetworkConnection) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsConnectedToInternet(
        VARIANT_BOOL *pbIsConnected) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsConnected(
        VARIANT_BOOL *pbIsConnected) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetConnectivity(
        NLM_CONNECTIVITY *pConnectivity) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INetworkListManager, 0xdcb00000, 0x570f, 0x4a9b, 0x8d,0x69, 0x19,0x9f,0xdb,0xa5,0x72,0x3b)
#endif
#else
typedef struct INetworkListManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INetworkListManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INetworkListManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INetworkListManager *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        INetworkListManager *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        INetworkListManager *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        INetworkListManager *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        INetworkListManager *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** INetworkListManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNetworks)(
        INetworkListManager *This,
        NLM_ENUM_NETWORK Flags,
        IEnumNetworks **ppEnumNetwork);

    HRESULT (STDMETHODCALLTYPE *GetNetwork)(
        INetworkListManager *This,
        GUID gdNetworkId,
        INetwork **ppNetwork);

    HRESULT (STDMETHODCALLTYPE *GetNetworkConnections)(
        INetworkListManager *This,
        IEnumNetworkConnections **ppEnum);

    HRESULT (STDMETHODCALLTYPE *GetNetworkConnection)(
        INetworkListManager *This,
        GUID gdNetworkConnectionId,
        INetworkConnection **ppNetworkConnection);

    HRESULT (STDMETHODCALLTYPE *IsConnectedToInternet)(
        INetworkListManager *This,
        VARIANT_BOOL *pbIsConnected);

    HRESULT (STDMETHODCALLTYPE *IsConnected)(
        INetworkListManager *This,
        VARIANT_BOOL *pbIsConnected);

    HRESULT (STDMETHODCALLTYPE *GetConnectivity)(
        INetworkListManager *This,
        NLM_CONNECTIVITY *pConnectivity);

    END_INTERFACE
} INetworkListManagerVtbl;
interface INetworkListManager {
    CONST_VTBL INetworkListManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INetworkListManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INetworkListManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INetworkListManager_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define INetworkListManager_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define INetworkListManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define INetworkListManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define INetworkListManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** INetworkListManager methods ***/
#define INetworkListManager_GetNetworks(This,Flags,ppEnumNetwork) (This)->lpVtbl->GetNetworks(This,Flags,ppEnumNetwork)
#define INetworkListManager_GetNetwork(This,gdNetworkId,ppNetwork) (This)->lpVtbl->GetNetwork(This,gdNetworkId,ppNetwork)
#define INetworkListManager_GetNetworkConnections(This,ppEnum) (This)->lpVtbl->GetNetworkConnections(This,ppEnum)
#define INetworkListManager_GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection) (This)->lpVtbl->GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection)
#define INetworkListManager_IsConnectedToInternet(This,pbIsConnected) (This)->lpVtbl->IsConnectedToInternet(This,pbIsConnected)
#define INetworkListManager_IsConnected(This,pbIsConnected) (This)->lpVtbl->IsConnected(This,pbIsConnected)
#define INetworkListManager_GetConnectivity(This,pConnectivity) (This)->lpVtbl->GetConnectivity(This,pConnectivity)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INetworkListManager_QueryInterface(INetworkListManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INetworkListManager_AddRef(INetworkListManager* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INetworkListManager_Release(INetworkListManager* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static FORCEINLINE HRESULT INetworkListManager_GetTypeInfoCount(INetworkListManager* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static FORCEINLINE HRESULT INetworkListManager_GetTypeInfo(INetworkListManager* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static FORCEINLINE HRESULT INetworkListManager_GetIDsOfNames(INetworkListManager* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static FORCEINLINE HRESULT INetworkListManager_Invoke(INetworkListManager* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** INetworkListManager methods ***/
static FORCEINLINE HRESULT INetworkListManager_GetNetworks(INetworkListManager* This,NLM_ENUM_NETWORK Flags,IEnumNetworks **ppEnumNetwork) {
    return This->lpVtbl->GetNetworks(This,Flags,ppEnumNetwork);
}
static FORCEINLINE HRESULT INetworkListManager_GetNetwork(INetworkListManager* This,GUID gdNetworkId,INetwork **ppNetwork) {
    return This->lpVtbl->GetNetwork(This,gdNetworkId,ppNetwork);
}
static FORCEINLINE HRESULT INetworkListManager_GetNetworkConnections(INetworkListManager* This,IEnumNetworkConnections **ppEnum) {
    return This->lpVtbl->GetNetworkConnections(This,ppEnum);
}
static FORCEINLINE HRESULT INetworkListManager_GetNetworkConnection(INetworkListManager* This,GUID gdNetworkConnectionId,INetworkConnection **ppNetworkConnection) {
    return This->lpVtbl->GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection);
}
static FORCEINLINE HRESULT INetworkListManager_IsConnectedToInternet(INetworkListManager* This,VARIANT_BOOL *pbIsConnected) {
    return This->lpVtbl->IsConnectedToInternet(This,pbIsConnected);
}
static FORCEINLINE HRESULT INetworkListManager_IsConnected(INetworkListManager* This,VARIANT_BOOL *pbIsConnected) {
    return This->lpVtbl->IsConnected(This,pbIsConnected);
}
static FORCEINLINE HRESULT INetworkListManager_GetConnectivity(INetworkListManager* This,NLM_CONNECTIVITY *pConnectivity) {
    return This->lpVtbl->GetConnectivity(This,pConnectivity);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE INetworkListManager_GetNetworks_Proxy(
    INetworkListManager* This,
    NLM_ENUM_NETWORK Flags,
    IEnumNetworks **ppEnumNetwork);
void __RPC_STUB INetworkListManager_GetNetworks_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkListManager_GetNetwork_Proxy(
    INetworkListManager* This,
    GUID gdNetworkId,
    INetwork **ppNetwork);
void __RPC_STUB INetworkListManager_GetNetwork_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkListManager_GetNetworkConnections_Proxy(
    INetworkListManager* This,
    IEnumNetworkConnections **ppEnum);
void __RPC_STUB INetworkListManager_GetNetworkConnections_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkListManager_GetNetworkConnection_Proxy(
    INetworkListManager* This,
    GUID gdNetworkConnectionId,
    INetworkConnection **ppNetworkConnection);
void __RPC_STUB INetworkListManager_GetNetworkConnection_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkListManager_IsConnectedToInternet_Proxy(
    INetworkListManager* This,
    VARIANT_BOOL *pbIsConnected);
void __RPC_STUB INetworkListManager_IsConnectedToInternet_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkListManager_IsConnected_Proxy(
    INetworkListManager* This,
    VARIANT_BOOL *pbIsConnected);
void __RPC_STUB INetworkListManager_IsConnected_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE INetworkListManager_GetConnectivity_Proxy(
    INetworkListManager* This,
    NLM_CONNECTIVITY *pConnectivity);
void __RPC_STUB INetworkListManager_GetConnectivity_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __INetworkListManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * NetworkListManager coclass
 */

DEFINE_GUID(CLSID_NetworkListManager, 0xdcb00c01, 0x570f, 0x4a9b, 0x8d,0x69, 0x19,0x9f,0xdb,0xa5,0x72,0x3b);

#ifdef __cplusplus
class DECLSPEC_UUID("dcb00c01-570f-4a9b-8d69-199fdba5723b") NetworkListManager;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(NetworkListManager, 0xdcb00c01, 0x570f, 0x4a9b, 0x8d,0x69, 0x19,0x9f,0xdb,0xa5,0x72,0x3b)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __netlistmgr_h__ */
