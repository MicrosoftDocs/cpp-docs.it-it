---
title: Classe IDispatchImpl. | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IDispatchImpl
- ATLCOM/ATL::IDispatchImpl
- ATLCOM/ATL::IDispatchImpl::IDispatchImpl
- ATLCOM/ATL::IDispatchImpl::GetIDsOfNames
- ATLCOM/ATL::IDispatchImpl::GetTypeInfo
- ATLCOM/ATL::IDispatchImpl::GetTypeInfoCount
- ATLCOM/ATL::IDispatchImpl::Invoke
dev_langs: C++
helpviewer_keywords:
- dual interfaces, classes
- IDispatchImpl class
- IDispatch class support in ATL
ms.assetid: 8108eb36-1228-4127-a203-3ab5ba488892
caps.latest.revision: "27"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e20a9edee01480aa529ffcd0441f7096d30715fd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="idispatchimpl-class"></a>IDispatchImpl (classe)
Fornisce un'implementazione predefinita per il `IDispatch` fa parte di un'interfaccia duale.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T,
        const IID* piid= &__uuidof(T),
        const GUID* plibid = &CAtlModule::m_libid,
        WORD wMajor = 1,
        WORD wMinor = 0, 
        class tihclass = CComTypeInfoHolder>
class ATL_NO_VTABLE IDispatchImpl : public T
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `T`  
 Un'interfaccia duale.  
  
 [in] `piid`  
 Un puntatore per l'IID del `T`.  
  
 [in] `plibid`  
 Puntatore a LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, la libreria dei tipi a livello di server viene passata.  
  
 [in] `wMajor`  
 Versione principale della libreria dei tipi. Per impostazione predefinita, il valore è 1.  
  
 [in] `wMinor`  
 Versione secondaria della libreria dei tipi. Per impostazione predefinita, il valore è 0.  
  
 [in] `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo per `T`. Per impostazione predefinita, il valore è `CComTypeInfoHolder`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispatchImpl::IDispatchImpl](#idispatchimpl)|Costruttore. Chiamate `AddRef` sulla variabile membro protetto che gestisce le informazioni sul tipo di interfaccia duale. Il distruttore chiama `Release`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispatchImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un set di nomi a un set corrispondente di ID dispatch.|  
|[IDispatchImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo di interfaccia duale.|  
|[IDispatchImpl::GetTypeInfoCount](#gettypeinfocount)|Determina se è disponibile per l'interfaccia duale informazioni sul tipo.|  
|[IDispatchImpl::Invoke](#invoke)|Fornisce l'accesso ai metodi e proprietà esposte dall'interfaccia duale.|  
  
## <a name="remarks"></a>Note  
 `IDispatchImpl`fornisce un'implementazione predefinita per il `IDispatch` fa parte di un'interfaccia duale per un oggetto. Un'interfaccia duale deriva da `IDispatch` e utilizzare solo i tipi compatibili con l'automazione. Analogamente a un'interfaccia dispatch, un'interfaccia duale supporta l'associazione anticipata e tardiva; Tuttavia, un'interfaccia duale supporta anche l'associazione vtable.  
  
 Nell'esempio seguente viene illustrata un'implementazione tipica di `IDispatchImpl`.  
  
 [!code-cpp[NVC_ATL_COM#47](../../atl/codesnippet/cpp/idispatchimpl-class_1.h)]  
  
 Per impostazione predefinita, il `IDispatchImpl` classe cerca le informazioni sul tipo per `T` nel Registro di sistema. Per implementare un'interfaccia di annullare la registrazione, è possibile utilizzare la `IDispatchImpl` classe senza accedere al Registro di sistema utilizzando un numero di versione predefiniti. Se si crea un `IDispatchImpl` oggetto con 0xFFFF come valore per `wMajor` e 0xFFFF come valore per `wMinor`, `IDispatchImpl` classe recupera la libreria dei tipi dal file con estensione dll anziché il Registro di sistema.  
  
 `IDispatchImpl`contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo di interfaccia duale. Interfaccia se si dispone di più oggetti che implementano lo stesso duale, solo un'istanza di `CComTypeInfoHolder` viene utilizzato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `T`  
  
 `IDispatchImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getidsofnames"></a>IDispatchImpl::GetIDsOfNames  
 Esegue il mapping di un set di nomi a un set corrispondente di ID dispatch.  
  
```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```  
  
### <a name="remarks"></a>Note  
 Vedere [GetIDsOfNames](http://msdn.microsoft.com/en-us/6f6cf233-3481-436e-8d6a-51f93bf91619) in Windows SDK.  
  
##  <a name="gettypeinfo"></a>IDispatchImpl::GetTypeInfo  
 Recupera le informazioni sul tipo di interfaccia duale.  
  
```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: GetTypeInfo](http://msdn.microsoft.com/en-us/cc1ec9aa-6c40-4e70-819c-a7c6dd6b8c99) in Windows SDK.  
  
##  <a name="gettypeinfocount"></a>IDispatchImpl::GetTypeInfoCount  
 Determina se è disponibile per l'interfaccia duale informazioni sul tipo.  
  
```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```  
  
### <a name="remarks"></a>Note  
 Vedere `IDispatch::GetTypeInfoCount` in Windows SDK.  
  
##  <a name="idispatchimpl"></a>IDispatchImpl::IDispatchImpl  
 Costruttore. Chiamate `AddRef` sulla variabile membro protetto che gestisce le informazioni sul tipo di interfaccia duale. Il distruttore chiama **versione**.  
  
```
IDispatchImpl();
```  
  
##  <a name="invoke"></a>IDispatchImpl::Invoke  
 Fornisce l'accesso ai metodi e proprietà esposte dall'interfaccia duale.  
  
```
STDMETHOD(Invoke)(
    DISPID dispidMember,
    REFIID riid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS* pdispparams,
    VARIANT* pvarResult,
    EXCEPINFO* pexcepinfo,
    UINT* puArgErr);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: Invoke](http://msdn.microsoft.com/en-us/964ade8e-9d8a-4d32-bd47-aa678912a54d) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
