---
title: Classe IDispatchImpl
ms.date: 11/04/2016
f1_keywords:
- IDispatchImpl
- ATLCOM/ATL::IDispatchImpl
- ATLCOM/ATL::IDispatchImpl::IDispatchImpl
- ATLCOM/ATL::IDispatchImpl::GetIDsOfNames
- ATLCOM/ATL::IDispatchImpl::GetTypeInfo
- ATLCOM/ATL::IDispatchImpl::GetTypeInfoCount
- ATLCOM/ATL::IDispatchImpl::Invoke
helpviewer_keywords:
- dual interfaces, classes
- IDispatchImpl class
- IDispatch class support in ATL
ms.assetid: 8108eb36-1228-4127-a203-3ab5ba488892
ms.openlocfilehash: bf6b416337c58f5e9b8a62dda841615412573666
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57293212"
---
# <a name="idispatchimpl-class"></a>Classe IDispatchImpl

Fornisce un'implementazione predefinita per il `IDispatch` fa parte di un'interfaccia duale.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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

*T*<br/>
[in] Un'interfaccia duale.

*piid*<br/>
[in] Un puntatore all'IID del *T*.

*plibid*<br/>
[in] Puntatore a LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, viene passata la libreria dei tipi a livello di server.

*wMajor*<br/>
[in] La versione principale della libreria dei tipi. Per impostazione predefinita, il valore è 1.

*wMinor*<br/>
[in] La versione secondaria della libreria dei tipi. Per impostazione predefinita, il valore è 0.

*tihclass*<br/>
[in] La classe usata per gestire le informazioni sul tipo per *T*. Per impostazione predefinita, il valore è `CComTypeInfoHolder`.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispatchImpl::IDispatchImpl](#idispatchimpl)|Costruttore. Le chiamate `AddRef` sulla variabile membro protetto che gestisce le informazioni sul tipo per l'interfaccia duale. Il distruttore chiama `Release`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispatchImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un set di nomi a un set corrispondente di ID dispatch.|
|[IDispatchImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per l'interfaccia duale.|
|[IDispatchImpl::GetTypeInfoCount](#gettypeinfocount)|Determina se è disponibile per l'interfaccia duale informazioni sul tipo.|
|[IDispatchImpl::Invoke](#invoke)|Fornisce l'accesso ai metodi e proprietà esposte dall'interfaccia duale.|

## <a name="remarks"></a>Note

`IDispatchImpl` fornisce un'implementazione predefinita per il `IDispatch` fa parte di qualsiasi interfaccia duale su un oggetto. Un'interfaccia duale deriva da `IDispatch` e Usa solo tipi compatibili con l'automazione. Come un'interfaccia di dispatch, un'interfaccia duale supporta l'associazione anticipata e tardiva; Tuttavia, un'interfaccia duale supporta anche l'associazione vtable.

Nell'esempio seguente viene illustrata un'implementazione tipica delle `IDispatchImpl`.

[!code-cpp[NVC_ATL_COM#47](../../atl/codesnippet/cpp/idispatchimpl-class_1.h)]

Per impostazione predefinita, il `IDispatchImpl` cerca le informazioni sul tipo per la classe *T* nel Registro di sistema. Per implementare un'interfaccia non registrata, è possibile usare il `IDispatchImpl` classe senza accedere al Registro di sistema con un numero di versione predefinito. Se si crea un' `IDispatchImpl` oggetto avente 0xFFFF come valore per *wMajor* e 0xFFFF come valore per *wMinor*, il `IDispatchImpl` classe recupera la libreria dei tipi dal file con estensione dll anziché il Registro di sistema.

`IDispatchImpl` contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo per l'interfaccia duale. Se sono presenti più oggetti che implementano lo stesso doppia interfaccia, solo un'istanza di `CComTypeInfoHolder` viene usato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`IDispatchImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getidsofnames"></a>  IDispatchImpl::GetIDsOfNames

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

Visualizzare [GetIDsOfNames](/windows/desktop/api/oaidl/nf-oaidl-idispatch-getidsofnames) in Windows SDK.

##  <a name="gettypeinfo"></a>  IDispatchImpl::GetTypeInfo

Recupera le informazioni sul tipo per l'interfaccia duale.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Note

Visualizzare [IDispatch:: GetTypeInfo](/windows/desktop/api/oaidl/nf-oaidl-idispatch-gettypeinfo) in Windows SDK.

##  <a name="gettypeinfocount"></a>  IDispatchImpl::GetTypeInfoCount

Determina se è disponibile per l'interfaccia duale informazioni sul tipo.

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### <a name="remarks"></a>Note

Vedere `IDispatch::GetTypeInfoCount` in Windows SDK.

##  <a name="idispatchimpl"></a>  IDispatchImpl::IDispatchImpl

Costruttore. Le chiamate `AddRef` sulla variabile membro protetto che gestisce le informazioni sul tipo per l'interfaccia duale. Il distruttore chiama `Release`.

```
IDispatchImpl();
```

##  <a name="invoke"></a>  IDispatchImpl::Invoke

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

Visualizzare [IDispatch:: Invoke](/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
