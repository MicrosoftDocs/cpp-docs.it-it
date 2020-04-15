---
title: Classe IDispEventSimpleImpl
ms.date: 11/04/2016
f1_keywords:
- IDispEventSimpleImpl
- ATLCOM/ATL::IDispEventSimpleImpl
- ATLCOM/ATL::IDispEventSimpleImpl::Advise
- ATLCOM/ATL::IDispEventSimpleImpl::DispEventAdvise
- ATLCOM/ATL::IDispEventSimpleImpl::DispEventUnadvise
- ATLCOM/ATL::IDispEventSimpleImpl::GetIDsOfNames
- ATLCOM/ATL::IDispEventSimpleImpl::GetTypeInfo
- ATLCOM/ATL::IDispEventSimpleImpl::GetTypeInfoCount
- ATLCOM/ATL::IDispEventSimpleImpl::Invoke
- ATLCOM/ATL::IDispEventSimpleImpl::Unadvise
helpviewer_keywords:
- IDispEventSimpleImpl class
ms.assetid: 971d82b7-a921-47fa-a4d8-909bed377ab0
ms.openlocfilehash: 779e143094760c7bd868ad33f590f7fd8f004762
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329741"
---
# <a name="idispeventsimpleimpl-class"></a>Classe IDispEventSimpleImpl

Questa classe fornisce implementazioni dei `IDispatch` metodi, senza ottenere informazioni sul tipo da una libreria dei tipi.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <UINT nID, class T, const IID* pdiid>
class ATL_NO_VTABLE IDispEventSimpleImpl : public _IDispEventLocator<nID, pdiid>
```

#### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore univoco dell'oggetto di origine. Quando `IDispEventSimpleImpl` è la classe base per un controllo composito, usare l'ID di risorsa del controllo contenuto desiderato per questo parametro. In altri casi, utilizzare un numero intero positivo arbitrario.

*T*<br/>
Classe dell'utente, derivata `IDispEventSimpleImpl`da .

*pdiid*<br/>
Puntatore all'IID dell'interfaccia dispatch dell'evento implementata da questa classe.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventSimpleImpl::Advise (Informazioni)](#advise)|Stabilisce una connessione con l'origine eventi predefinita.|
|[IDispEventSimpleImpl::DispEventAdvise](#dispeventadvise)|Stabilisce una connessione con l'origine eventi.|
|[IDispEventSimpleImpl::DispEventUnadvise](#dispeventunadvise)|Interrompe la connessione con l'origine evento.|
|[IDispEventSimpleImpl::GetIDsOfNames](#getidsofnames)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl::GetTypeInfo](#gettypeinfo)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl::GetTypeInfoCount](#gettypeinfocount)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl::Richiamare](#invoke)|Chiama i gestori eventi elencati nella mappa del sink di evento.|
|[IDispEventSimpleImpl::Unadvise](#unadvise)|Interrompe la connessione con l'origine eventi predefinita.|

## <a name="remarks"></a>Osservazioni

`IDispEventSimpleImpl`fornisce un modo per implementare un'interfaccia dispatch di eventi senza che sia necessario fornire codice di implementazione per ogni metodo/evento su tale interfaccia. `IDispEventSimpleImpl`fornisce implementazioni `IDispatch` dei metodi. È sufficiente fornire implementazioni per gli eventi che si desidera gestire.

`IDispEventSimpleImpl`funziona insieme alla mappa del sink di evento nella classe per indirizzare gli eventi alla funzione del gestore appropriata. Per utilizzare questa classe:

- Aggiungere una macro [di SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) alla mappa del sink di evento per ogni evento su ogni oggetto che si desidera gestire.

- Fornire informazioni sul tipo per ogni evento passando un puntatore a una struttura [_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) come parametro a ogni voce. Nella piattaforma x86, `_ATL_FUNC_INFO.cc` il valore deve essere CC_CDECL con il metodo di chiamata della funzione di callback di __stdcall.

- Chiamare [DispEventAdvise](#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe base.

- Chiamare [DispEventUnadvise](#dispeventunadvise) per interrompere la connessione.

È necessario `IDispEventSimpleImpl` derivare da (utilizzando un valore univoco per *nID*) per ogni oggetto per il quale è necessario gestire gli eventi. È possibile riutilizzare la classe base senza eseguire l'indvizione su un oggetto di origine e quindi consigliando di eseguire l'accesso a un `IDispEventSimpleImpl` oggetto di origine diverso, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto contemporaneamente è limitato dal numero di classi base.

`IDispEventSimplImpl`fornisce la stessa funzionalità di [IDispEventImpl](../../atl/reference/idispeventimpl-class.md), ad eccezione del fatto che non ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi. Le procedure guidate generano `IDispEventImpl`codice basato `IDispEventSimpleImpl` solo su , ma è possibile utilizzare aggiungendo il codice a mano. Utilizzare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia eventi o si desidera evitare l'overhead associato all'utilizzo della libreria dei tipi.

> [!NOTE]
> `IDispEventImpl`e `IDispEventSimpleImpl` fornire la `IUnknown::QueryInterface` propria `IDispEventImpl` implementazione di consentire a ogni classe o `IDispEventSimpleImpl` classe di base di agire come un'identità COM separata, pur consentendo l'accesso diretto ai membri della classe nell'oggetto COM principale.

L'implementazione ATL CE dei sink di evento ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi. qualsiasi altro valore restituito non è supportato e il relativo comportamento non è definito.

Per ulteriori informazioni, vedere [Supporto di IDispEventImpl](../../atl/supporting-idispeventimpl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_IDispEvent`

`_IDispEventLocator`

`IDispEventSimpleImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="idispeventsimpleimpladvise"></a><a name="advise"></a>IDispEventSimpleImpl::Advise (Informazioni)

Chiamare questo metodo per stabilire una connessione con l'origine eventi rappresentata da *pUnk*.

```
HRESULT Advise(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'oggetto origine eventi.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Osservazioni

Una volta stabilita la connessione, gli eventi generati da *pUnk* verranno indirizzati ai gestori nella classe tramite la mappa del sink di evento.

> [!NOTE]
> Se la classe deriva `IDispEventSimpleImpl` da più classi, è necessario evitare ambiguità delle chiamate a questo metodo impostando l'ambito della chiamata con la classe di base specifica a cui si è interessati.

`Advise`stabilisce una connessione con l'origine eventi predefinita, ottiene l'IID dell'origine eventi predefinita dell'oggetto come determinato da [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).

## <a name="idispeventsimpleimpldispeventadvise"></a><a name="dispeventadvise"></a>IDispEventSimpleImpl::DispEventAdvise

Chiamare questo metodo per stabilire una connessione con l'origine eventi rappresentata da *pUnk*.

```
HRESULT DispEventAdvise(IUnknown* pUnk  const IID* piid);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'oggetto origine eventi.

*piid*<br/>
Puntatore all'IID dell'oggetto origine eventi.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Osservazioni

Successivamente, gli eventi generati da *pUnk* verranno indirizzati ai gestori nella classe tramite la mappa del sink di evento.

> [!NOTE]
> Se la classe deriva `IDispEventSimpleImpl` da più classi, è necessario evitare ambiguità delle chiamate a questo metodo impostando l'ambito della chiamata con la classe di base specifica a cui si è interessati.

`DispEventAdvise`stabilisce una connessione con l'origine eventi specificata in `pdiid`.

## <a name="idispeventsimpleimpldispeventunadvise"></a><a name="dispeventunadvise"></a>IDispEventSimpleImpl::DispEventUnadvise

Interrompe la connessione con l'origine eventi rappresentata da *pUnk*.

```
HRESULT DispEventUnadvise(IUnknown* pUnk  const IID* piid);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'oggetto origine eventi.

*piid*<br/>
Puntatore all'IID dell'oggetto origine eventi.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Osservazioni

Una volta interrotta la connessione, gli eventi non verranno più indirizzati alle funzioni del gestore elencate nella mappa del sink di evento.

> [!NOTE]
> Se la classe deriva `IDispEventSimpleImpl` da più classi, è necessario evitare ambiguità delle chiamate a questo metodo impostando l'ambito della chiamata con la classe di base specifica a cui si è interessati.

`DispEventAdvise`interrompe una connessione stabilita con l'origine eventi specificata in `pdiid`.

## <a name="idispeventsimpleimplgetidsofnames"></a><a name="getidsofnames"></a>IDispEventSimpleImpl::GetIDsOfNames

Questa implementazione di `IDispatch::GetIDsOfNames` restituisce E_NOTIMPL.

```
STDMETHOD(GetIDsOfNames)(
    REFIID /* riid */,
    LPOLESTR* /* rgszNames */,
    UINT /* cNames */,
    LCID /* lcid */,
    DISPID* /* rgdispid */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::GetIDsOfNames](/windows/win32/api/oaidl/nf-oaidl-idispatch-getidsofnames) in Windows SDK.

## <a name="idispeventsimpleimplgettypeinfo"></a><a name="gettypeinfo"></a>IDispEventSimpleImpl::GetTypeInfo

Questa implementazione di `IDispatch::GetTypeInfo` restituisce E_NOTIMPL.

```
STDMETHOD(GetTypeInfo)(
    UINT /* itinfo */,
    LCID /* lcid */,
    ITypeInfo** /* pptinfo */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::GetTypeInfo](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfo) in Windows SDK.

## <a name="idispeventsimpleimplgettypeinfocount"></a><a name="gettypeinfocount"></a>IDispEventSimpleImpl::GetTypeInfoCount

Questa implementazione di `IDispatch::GetTypeInfoCount` restituisce E_NOTIMPL.

```
STDMETHOD(GetTypeInfoCount)(UINT* /* pctinfo */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount) in Windows SDK.

## <a name="idispeventsimpleimplinvoke"></a><a name="invoke"></a>IDispEventSimpleImpl::Richiamare

Questa implementazione di `IDispatch::Invoke` chiama i gestori eventi elencati nella mappa del sink di evento.

```
STDMETHOD(Invoke)(
    DISPID dispidMember,
    REFIID /* riid */,
    LCID lcid,
    WORD /* wFlags */,
    DISPPARMS* pdispparams,
    VARIANT* pvarResult,
    EXCEPINFO* /* pexcepinfo */,
    UINT* /* puArgErr */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke).

## <a name="idispeventsimpleimplunadvise"></a><a name="unadvise"></a>IDispEventSimpleImpl::Unadvise

Interrompe la connessione con l'origine eventi rappresentata da *pUnk*.

```
HRESULT Unadvise(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'oggetto origine eventi.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Osservazioni

Una volta interrotta la connessione, gli eventi non verranno più indirizzati alle funzioni del gestore elencate nella mappa del sink di evento.

> [!NOTE]
> Se la classe deriva `IDispEventSimpleImpl` da più classi, è necessario evitare ambiguità delle chiamate a questo metodo impostando l'ambito della chiamata con la classe di base specifica a cui si è interessati.

`Unadvise`interrompe una connessione stabilita con l'origine eventi predefinita specificata in `pdiid`.

`Unavise`interrompe una connessione con l'origine eventi predefinita, ottiene l'IID dell'origine eventi predefinita dell'oggetto come determinato da [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).

## <a name="see-also"></a>Vedere anche

[Struttura _ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)<br/>
[Classe IDispatchImpl](../../atl/reference/idispatchimpl-class.md)<br/>
[Classe IDispEventImpl](../../atl/reference/idispeventimpl-class.md)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
