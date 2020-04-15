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
ms.openlocfilehash: 3b3899a0c4a49aa7fb1bd82af330f5f1cc7329c4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329805"
---
# <a name="idispatchimpl-class"></a>Classe IDispatchImpl

Fornisce un'implementazione `IDispatch` predefinita per la parte di un'interfaccia duale.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

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
[in] Una doppia interfaccia.

*piid*<br/>
[in] Puntatore all'IID di *T*.

*plibid*<br/>
[in] Puntatore al LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, viene passata la libreria dei tipi a livello di server.

*wMajor (informazioni in base al t*<br/>
[in] Versione principale della libreria dei tipi. Per impostazione predefinita, il valore è 1.By default, the value is 1.

*wMinore*<br/>
[in] Versione secondaria della libreria dei tipi. Per impostazione predefinita, il valore è 0.By default, the value is 0.

*tihclass*<br/>
[in] Classe utilizzata per gestire le informazioni sul tipo per *T*. Per impostazione predefinita, il valore è `CComTypeInfoHolder`.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispatchImpl::IDispatchImpl](#idispatchimpl)|Costruttore. Chiamate `AddRef` sulla variabile membro protetta che gestisce le informazioni sul tipo per l'interfaccia duale. Il distruttore chiama `Release`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispatchImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un set di nomi a un set corrispondente di ID dispatch.|
|[IDispatchImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per l'interfaccia duale.|
|[IDispatchImpl::GetTypeInfoCount](#gettypeinfocount)|Determina se sono disponibili informazioni sul tipo per l'interfaccia duale.|
|[IDispatchImpl::Richiamare](#invoke)|Fornisce l'accesso ai metodi e alle proprietà esposti dall'interfaccia duale.|

## <a name="remarks"></a>Osservazioni

`IDispatchImpl`fornisce un'implementazione `IDispatch` predefinita per la parte di qualsiasi interfaccia duale su un oggetto. Un'interfaccia duale `IDispatch` deriva da e utilizza solo tipi compatibili con l'automazione. Come un'interfaccia dispatch, un'interfaccia duale supporta l'associazione anticipata e l'associazione tardiva; tuttavia, un'interfaccia duale supporta anche l'associazione vtable.

Nell'esempio seguente viene `IDispatchImpl`illustrata un'implementazione tipica di .

[!code-cpp[NVC_ATL_COM#47](../../atl/codesnippet/cpp/idispatchimpl-class_1.h)]

Per impostazione `IDispatchImpl` predefinita, la classe cerca le informazioni sul tipo per *T* nel Registro di sistema. Per implementare un'interfaccia non `IDispatchImpl` registrata, è possibile utilizzare la classe senza accedere al Registro di sistema utilizzando un numero di versione predefinito. Se si `IDispatchImpl` crea un oggetto con 0xFFFF come valore per *wMajor* e 0xFFFF come valore per *wMinor*, la `IDispatchImpl` classe recupera la libreria dei tipi dal file DLL anziché dal Registro di sistema.

`IDispatchImpl`contiene un membro `CComTypeInfoHolder` statico di tipo che gestisce le informazioni sul tipo per l'interfaccia duale. Se si dispone di più oggetti che implementano `CComTypeInfoHolder` la stessa interfaccia duale, viene utilizzata una sola istanza di.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`IDispatchImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="idispatchimplgetidsofnames"></a><a name="getidsofnames"></a>IDispatchImpl::GetIDsOfNames

Esegue il mapping di un set di nomi a un set corrispondente di ID dispatch.

```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::GetIDsOfNames](/windows/win32/api/oaidl/nf-oaidl-idispatch-getidsofnames) in Windows SDK.

## <a name="idispatchimplgettypeinfo"></a><a name="gettypeinfo"></a>IDispatchImpl::GetTypeInfo

Recupera le informazioni sul tipo per l'interfaccia duale.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::GetTypeInfo](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfo) in Windows SDK.

## <a name="idispatchimplgettypeinfocount"></a><a name="gettypeinfocount"></a>IDispatchImpl::GetTypeInfoCount

Determina se sono disponibili informazioni sul tipo per l'interfaccia duale.

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### <a name="remarks"></a>Osservazioni

Vedere `IDispatch::GetTypeInfoCount` in Windows SDK.

## <a name="idispatchimplidispatchimpl"></a><a name="idispatchimpl"></a>IDispatchImpl::IDispatchImpl

Costruttore. Chiamate `AddRef` sulla variabile membro protetta che gestisce le informazioni sul tipo per l'interfaccia duale. Il distruttore chiama `Release`.

```
IDispatchImpl();
```

## <a name="idispatchimplinvoke"></a><a name="invoke"></a>IDispatchImpl::Richiamare

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

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
