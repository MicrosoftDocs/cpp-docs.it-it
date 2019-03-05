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
ms.openlocfilehash: 1578518b8918f59b1da54f474e82cf899f3c76f6
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57285542"
---
# <a name="idispeventsimpleimpl-class"></a>Classe IDispEventSimpleImpl

Questa classe fornisce le implementazioni del `IDispatch` metodi, senza recupero di informazioni sul tipo da una libreria dei tipi.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <UINT nID, class T, const IID* pdiid>
class ATL_NO_VTABLE IDispEventSimpleImpl : public _IDispEventLocator<nID, pdiid>
```

#### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore univoco per l'oggetto di origine. Quando si `IDispEventSimpleImpl` è la classe base per un controllo composito, usare l'ID risorsa del controllo contenuto desiderato per questo parametro. In altri casi, usare un numero intero positivo arbitrario.

*T*<br/>
Classe dell'utente, che è derivata da `IDispEventSimpleImpl`.

*pdiid*<br/>
Il puntatore per l'IID dell'interfaccia dispatch eventi implementata da questa classe.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventSimpleImpl::Advise](#advise)|Stabilisce una connessione con l'origine evento predefinito.|
|[IDispEventSimpleImpl::DispEventAdvise](#dispeventadvise)|Stabilisce una connessione con l'origine evento.|
|[IDispEventSimpleImpl::DispEventUnadvise](#dispeventunadvise)|Interrompe la connessione con l'origine evento.|
|[IDispEventSimpleImpl::GetIDsOfNames](#getidsofnames)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl::GetTypeInfo](#gettypeinfo)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl::GetTypeInfoCount](#gettypeinfocount)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl::Invoke](#invoke)|Chiama i gestori eventi elencati nell'evento mappa del sink.|
|[IDispEventSimpleImpl::Unadvise](#unadvise)|Interrompe la connessione con l'origine evento predefinito.|

## <a name="remarks"></a>Note

`IDispEventSimpleImpl` fornisce un modo di implementazione di un'interfaccia dispatch eventi senza dover fornire codice di implementazione per ogni metodo/evento in quell'interfaccia. `IDispEventSimpleImpl` fornisce le implementazioni del `IDispatch` metodi. È necessario solo fornire implementazioni per gli eventi che si è interessati nella gestione.

`IDispEventSimpleImpl` funziona in combinazione con la mappa di sink di evento nella classe per instradare gli eventi per la funzione del gestore appropriato. Utilizzare questa classe:

- Aggiungere un [macro SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) macro per la mappa di sink di evento per ogni evento per ogni oggetto che si desidera gestire.

- Fornire informazioni sul tipo per ogni evento passando un puntatore a un [ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) struttura come parametro per ogni voce. Su x86, piattaforma di `_ATL_FUNC_INFO.cc` valore deve essere CC_CDECL con la funzione di callback chiamata metodo di stdcall.

- Chiamare [DispEventAdvise](#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base.

- Chiamare [DispEventUnadvise](#dispeventunadvise) per interrompere la connessione.

È necessario derivare da `IDispEventSimpleImpl` (uso di un valore univoco per *nID*) per ogni oggetto per cui è necessario gestire gli eventi. È possibile riutilizzare la classe di base per l'annullamento della notifica per oggetto una sola origine quindi che informa su un oggetto di origine diversa, ma il numero massimo di oggetti di origine che può essere gestita da un singolo oggetto in una sola volta è limitato dal numero di `IDispEventSimpleImpl` le classi di base.

`IDispEventSimplImpl` fornisce la stessa funzionalità del [IDispEventImpl](../../atl/reference/idispeventimpl-class.md), ma non ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi. Le procedure guidate di generano codice basato soltanto sul `IDispEventImpl`, ma è possibile usare `IDispEventSimpleImpl` aggiungendo il codice manualmente. Usare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia di eventi o per evitare il sovraccarico associato usando la libreria dei tipi.

> [!NOTE]
> `IDispEventImpl` e `IDispEventSimpleImpl` fornire la propria implementazione di `IUnknown::QueryInterface` abilitazione della ognuno `IDispEventImpl` o `IDispEventSimpleImpl` classe per fungere da un'identità distinta COM consentendo comunque accesso diretto ai membri della classe nel principale oggetto COM di base.

Implementazione di ATL CE di ActiveX evento sink solo supporta valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il comportamento sarà indefinito.

Per altre informazioni, vedere [supporto di IDispEventImpl](../../atl/supporting-idispeventimpl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_IDispEvent`

`_IDispEventLocator`

`IDispEventSimpleImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="advise"></a>  IDispEventSimpleImpl::Advise

Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentato da *pUnk*.

```
HRESULT Advise(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
[in] Un puntatore al `IUnknown` interfaccia dell'oggetto di origine evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Note

Una volta stabilita la connessione, gli eventi attivati dal *pUnk* verranno indirizzate ai gestori nella classe tramite la mappa di sink di evento.

> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario distinguere tra le chiamate al metodo definendone l'ambito della chiamata con la particolare classe di base si è interessati.

`Advise` stabilisce una connessione con l'origine evento di impostazione predefinita, ottiene l'IID dell'origine evento predefinito dell'oggetto come determinato dalla [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).

##  <a name="dispeventadvise"></a>  IDispEventSimpleImpl::DispEventAdvise

Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentato da *pUnk*.

```
HRESULT DispEventAdvise(IUnknown* pUnk  const IID* piid);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
[in] Un puntatore al `IUnknown` interfaccia dell'oggetto di origine evento.

*piid*<br/>
Puntatore all'IID dell'oggetto di origine evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Note

Successivamente, gli eventi attivati dal *pUnk* verranno indirizzate ai gestori nella classe tramite la mappa di sink di evento.

> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario distinguere tra le chiamate al metodo definendone l'ambito della chiamata con la particolare classe di base si è interessati.

`DispEventAdvise` stabilisce una connessione con l'origine evento specificata nella `pdiid`.

##  <a name="dispeventunadvise"></a>  IDispEventSimpleImpl::DispEventUnadvise

Interrompe la connessione con l'origine evento rappresentato da *pUnk*.

```
HRESULT DispEventUnadvise(IUnknown* pUnk  const IID* piid);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
[in] Un puntatore al `IUnknown` interfaccia dell'oggetto di origine evento.

*piid*<br/>
Puntatore all'IID dell'oggetto di origine evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Note

Dopo la connessione viene interrotta, non verranno indirizzati non è più eventi per le funzioni del gestore elencate nella mappa eventi sink.

> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario distinguere tra le chiamate al metodo definendone l'ambito della chiamata con la particolare classe di base si è interessati.

`DispEventAdvise` interrompe una connessione è stata stabilita con l'origine evento specificata nella `pdiid`.

##  <a name="getidsofnames"></a>  IDispEventSimpleImpl::GetIDsOfNames

Questa implementazione di `IDispatch::GetIDsOfNames` restituisce E_NOTIMPL.

```
STDMETHOD(GetIDsOfNames)(
    REFIID /* riid */,
    LPOLESTR* /* rgszNames */,
    UINT /* cNames */,
    LCID /* lcid */,
    DISPID* /* rgdispid */);
```

### <a name="remarks"></a>Note

Visualizzare [GetIDsOfNames](/windows/desktop/api/oaidl/nf-oaidl-idispatch-getidsofnames) in Windows SDK.

##  <a name="gettypeinfo"></a>  IDispEventSimpleImpl::GetTypeInfo

Questa implementazione di `IDispatch::GetTypeInfo` restituisce E_NOTIMPL.

```
STDMETHOD(GetTypeInfo)(
    UINT /* itinfo */,
    LCID /* lcid */,
    ITypeInfo** /* pptinfo */);
```

### <a name="remarks"></a>Note

Visualizzare [IDispatch:: GetTypeInfo](/windows/desktop/api/oaidl/nf-oaidl-idispatch-gettypeinfo) in Windows SDK.

##  <a name="gettypeinfocount"></a>  IDispEventSimpleImpl::GetTypeInfoCount

Questa implementazione di `IDispatch::GetTypeInfoCount` restituisce E_NOTIMPL.

```
STDMETHOD(GetTypeInfoCount)(UINT* /* pctinfo */);
```

### <a name="remarks"></a>Note

Visualizzare [IDispatch:: GetTypeInfoCount](/windows/desktop/api/oaidl/nf-oaidl-idispatch-gettypeinfocount) in Windows SDK.

##  <a name="invoke"></a>  IDispEventSimpleImpl::Invoke

Questa implementazione di `IDispatch::Invoke` chiama i gestori eventi elencati nell'evento mappa del sink.

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

### <a name="remarks"></a>Note

Visualizzare [IDispatch:: Invoke](/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke).

##  <a name="unadvise"></a>  IDispEventSimpleImpl::Unadvise

Interrompe la connessione con l'origine evento rappresentato da *pUnk*.

```
HRESULT Unadvise(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
[in] Un puntatore al `IUnknown` interfaccia dell'oggetto di origine evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Note

Dopo la connessione viene interrotta, non verranno indirizzati non è più eventi per le funzioni del gestore elencate nella mappa eventi sink.

> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario distinguere tra le chiamate al metodo definendone l'ambito della chiamata con la particolare classe di base si è interessati.

`Unadvise` interrompe una connessione è stata stabilita con l'origine evento predefinito specificato in `pdiid`.

`Unavise` le interruzioni di una connessione con l'origine evento di impostazione predefinita, ottiene l'IID dell'origine evento predefinito dell'oggetto come determinato dalla [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).

## <a name="see-also"></a>Vedere anche

[Struttura _ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)<br/>
[Classe IDispatchImpl](../../atl/reference/idispatchimpl-class.md)<br/>
[Classe IDispEventImpl](../../atl/reference/idispeventimpl-class.md)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
