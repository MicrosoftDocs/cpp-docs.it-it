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
ms.openlocfilehash: 7e9cb903742cdc31c1d9bba2c4aabbb0472407c1
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495955"
---
# <a name="idispatchimpl-class"></a>Classe IDispatchImpl

Fornisce un'implementazione predefinita per la `IDispatch` parte di un'interfaccia duale.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

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
in Interfaccia duale.

*piid*<br/>
in Puntatore all'IID di *T*.

*plibid*<br/>
in Puntatore a LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, viene passata la libreria dei tipi a livello di server.

*wMajor*<br/>
in Versione principale della libreria dei tipi. Per impostazione predefinita, il valore è 1.

*wMinor*<br/>
in Versione secondaria della libreria dei tipi. Per impostazione predefinita, il valore è 0.

*tihclass*<br/>
in Classe utilizzata per gestire le informazioni sul tipo per *T*. Per impostazione predefinita, il valore è `CComTypeInfoHolder`.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[IDispatchImpl::IDispatchImpl](#idispatchimpl)|Costruttore. Chiama `AddRef` sulla variabile membro protetta che gestisce le informazioni sul tipo per l'interfaccia duale. Il distruttore chiama `Release`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[IDispatchImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un set di nomi a un set corrispondente di ID dispatch.|
|[IDispatchImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per l'interfaccia duale.|
|[IDispatchImpl::GetTypeInfoCount](#gettypeinfocount)|Determina se sono disponibili informazioni sul tipo per l'interfaccia duale.|
|[IDispatchImpl::Invoke](#invoke)|Fornisce l'accesso ai metodi e alle proprietà esposti dall'interfaccia duale.|

## <a name="remarks"></a>Note

`IDispatchImpl`fornisce un'implementazione predefinita per la `IDispatch` parte di qualsiasi interfaccia duale in un oggetto. Una doppia interfaccia deriva da `IDispatch` e usa solo tipi compatibili con l'automazione. Analogamente a un'interfaccia dispatch, un'interfaccia duale supporta l'associazione anticipata e l'associazione tardiva. Tuttavia, un'interfaccia duale supporta anche l'associazione vtable.

Nell'esempio seguente viene illustrata un'implementazione `IDispatchImpl`tipica di.

[!code-cpp[NVC_ATL_COM#47](../../atl/codesnippet/cpp/idispatchimpl-class_1.h)]

Per impostazione predefinita, `IDispatchImpl` la classe cerca le informazioni sul tipo per *T* nel registro di sistema. Per implementare un'interfaccia non registrata, è possibile usare la `IDispatchImpl` classe senza accedere al registro di sistema usando un numero di versione predefinito. Se si crea un `IDispatchImpl` oggetto con 0xFFFF come valore per *wMajor* e 0xFFFF come valore per *wMinor*, la `IDispatchImpl` classe recupera la libreria dei tipi dal file con estensione dll invece che dal registro di sistema.

`IDispatchImpl`contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo per l'interfaccia duale. Se si dispone di più oggetti che implementano la stessa interfaccia duale, viene `CComTypeInfoHolder` utilizzata una sola istanza di.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`IDispatchImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getidsofnames"></a>IDispatchImpl:: GetIDsOfNames

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

Vedere [IDispatch:: GetIDsOfNames](/windows/win32/api/oaidl/nf-oaidl-idispatch-getidsofnames) nel Windows SDK.

##  <a name="gettypeinfo"></a>IDispatchImpl:: GetTypeInfo

Recupera le informazioni sul tipo per l'interfaccia duale.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Note

Vedere [IDispatch:: GetTypeInfo](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfo) nel Windows SDK.

##  <a name="gettypeinfocount"></a>IDispatchImpl:: GetTypeInfoCount

Determina se sono disponibili informazioni sul tipo per l'interfaccia duale.

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### <a name="remarks"></a>Note

Vedere `IDispatch::GetTypeInfoCount` nel Windows SDK.

##  <a name="idispatchimpl"></a>IDispatchImpl:: IDispatchImpl

Costruttore. Chiama `AddRef` sulla variabile membro protetta che gestisce le informazioni sul tipo per l'interfaccia duale. Il distruttore chiama `Release`.

```
IDispatchImpl();
```

##  <a name="invoke"></a>IDispatchImpl:: Invoke

Fornisce l'accesso ai metodi e alle proprietà esposti dall'interfaccia duale.

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

Vedere [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
