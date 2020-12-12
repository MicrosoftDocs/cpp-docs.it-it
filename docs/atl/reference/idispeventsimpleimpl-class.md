---
description: 'Altre informazioni su: classe IDispEventSimpleImpl'
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
ms.openlocfilehash: 4b581f4e5714f595a29fb27bd6dbd45c7d5e401c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139503"
---
# <a name="idispeventsimpleimpl-class"></a>Classe IDispEventSimpleImpl

Questa classe fornisce le implementazioni dei `IDispatch` metodi, senza recuperare le informazioni sul tipo da una libreria dei tipi.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <UINT nID, class T, const IID* pdiid>
class ATL_NO_VTABLE IDispEventSimpleImpl : public _IDispEventLocator<nID, pdiid>
```

#### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore univoco per l'oggetto di origine. Quando `IDispEventSimpleImpl` è la classe base per un controllo composito, usare l'ID di risorsa del controllo contenuto desiderato per questo parametro. In altri casi, usare un numero intero positivo arbitrario.

*T*<br/>
Classe dell'utente, derivata da `IDispEventSimpleImpl` .

*pdiid*<br/>
Puntatore all'IID dell'interfaccia dispatch dell'evento implementata da questa classe.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IDispEventSimpleImpl:: Advise](#advise)|Stabilisce una connessione con l'origine evento predefinita.|
|[IDispEventSimpleImpl::D ispEventAdvise](#dispeventadvise)|Stabilisce una connessione con l'origine evento.|
|[IDispEventSimpleImpl::D ispEventUnadvise](#dispeventunadvise)|Interrompe la connessione con l'origine evento.|
|[IDispEventSimpleImpl:: GetIDsOfNames](#getidsofnames)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl:: GetTypeInfo](#gettypeinfo)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl:: GetTypeInfoCount](#gettypeinfocount)|Restituisce E_NOTIMPL.|
|[IDispEventSimpleImpl:: Invoke](#invoke)|Chiama i gestori eventi elencati nella mappa di sink di evento.|
|[IDispEventSimpleImpl:: Unadvise](#unadvise)|Interrompe la connessione con l'origine evento predefinita.|

## <a name="remarks"></a>Commenti

`IDispEventSimpleImpl` fornisce un modo per implementare un'interfaccia dispatch dell'evento senza che sia necessario fornire il codice di implementazione per ogni metodo o evento su tale interfaccia. `IDispEventSimpleImpl` fornisce le implementazioni dei `IDispatch` metodi. È sufficiente fornire implementazioni per gli eventi che si desidera gestire.

`IDispEventSimpleImpl` funziona insieme alla mappa di sink di evento nella classe per indirizzare gli eventi alla funzione del gestore appropriata. Per usare questa classe:

- Aggiungere una [SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) macro alla mappa di sink di evento per ogni evento in ogni oggetto che si desidera gestire.

- Fornire informazioni sul tipo per ogni evento passando un puntatore a una struttura di [_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) come parametro a ogni voce. Nella piattaforma x86, il `_ATL_FUNC_INFO.cc` valore deve essere CC_CDECL con la funzione di callback che chiama il metodo di __stdcall.

- Chiamare [DispEventAdvise](#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base.

- Chiamare [DispEventUnadvise](#dispeventunadvise) per interrompere la connessione.

È necessario derivare da `IDispEventSimpleImpl` (usando un valore univoco per *NID*) per ogni oggetto per cui è necessario gestire gli eventi. È possibile riutilizzare la classe di base non consigliando a fronte di un oggetto di origine e consigliando a fronte di un oggetto di origine diverso, ma il numero massimo di oggetti di origine che può essere gestito da un singolo oggetto in una volta è limitato dal numero di `IDispEventSimpleImpl` classi di base.

`IDispEventSimplImpl` fornisce la stessa funzionalità di [IDispEventImpl](../../atl/reference/idispeventimpl-class.md), ad eccezione del fatto che non ottiene informazioni sul tipo relative all'interfaccia da una libreria dei tipi. Le procedure guidate generano codice solo in base a `IDispEventImpl` , ma è possibile utilizzare `IDispEventSimpleImpl` aggiungendo manualmente il codice. Usare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia eventi o si desidera evitare il sovraccarico associato all'utilizzo della libreria dei tipi.

> [!NOTE]
> `IDispEventImpl` e `IDispEventSimpleImpl` forniscono una propria implementazione di `IUnknown::QueryInterface` per consentire `IDispEventImpl` `IDispEventSimpleImpl` a ogni classe o base di agire come un'identità com separata consentendo comunque l'accesso diretto ai membri della classe nell'oggetto com principale.

L'implementazione della CE ATL dei sink di eventi ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il suo comportamento non è definito.

Per ulteriori informazioni, vedere [supporto di IDispEventImpl](../../atl/supporting-idispeventimpl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_IDispEvent`

`_IDispEventLocator`

`IDispEventSimpleImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="idispeventsimpleimpladvise"></a><a name="advise"></a> IDispEventSimpleImpl:: Advise

Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentata da *punk*.

```
HRESULT Advise(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Puntatore all' `IUnknown` interfaccia dell'oggetto di origine dell'evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Commenti

Una volta stabilita la connessione, gli eventi generati da *punk* verranno indirizzati ai gestori della classe tramite la mappa di sink di evento.

> [!NOTE]
> Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario distinguere le chiamate a questo metodo mediante l'ambito della chiamata con la classe di base a cui si è interessati.

`Advise` stabilisce una connessione con l'origine evento predefinita, ottiene l'IID dell'origine evento predefinita dell'oggetto come determinato da [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).

## <a name="idispeventsimpleimpldispeventadvise"></a><a name="dispeventadvise"></a> IDispEventSimpleImpl::D ispEventAdvise

Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentata da *punk*.

```
HRESULT DispEventAdvise(IUnknown* pUnk  const IID* piid);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Puntatore all' `IUnknown` interfaccia dell'oggetto di origine dell'evento.

*pIID*<br/>
Puntatore all'IID dell'oggetto di origine dell'evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Commenti

Successivamente, gli eventi generati da *punk* verranno indirizzati ai gestori della classe tramite la mappa di sink di evento.

> [!NOTE]
> Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario distinguere le chiamate a questo metodo mediante l'ambito della chiamata con la classe di base a cui si è interessati.

`DispEventAdvise` stabilisce una connessione con l'origine evento specificata in `pdiid` .

## <a name="idispeventsimpleimpldispeventunadvise"></a><a name="dispeventunadvise"></a> IDispEventSimpleImpl::D ispEventUnadvise

Interrompe la connessione con l'origine evento rappresentata da *punk*.

```
HRESULT DispEventUnadvise(IUnknown* pUnk  const IID* piid);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Puntatore all' `IUnknown` interfaccia dell'oggetto di origine dell'evento.

*pIID*<br/>
Puntatore all'IID dell'oggetto di origine dell'evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Commenti

Una volta interrotta la connessione, gli eventi non verranno più indirizzati alle funzioni del gestore elencate nella mappa di sink di evento.

> [!NOTE]
> Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario distinguere le chiamate a questo metodo mediante l'ambito della chiamata con la classe di base a cui si è interessati.

`DispEventAdvise` interrompe una connessione stabilita con l'origine evento specificata in `pdiid` .

## <a name="idispeventsimpleimplgetidsofnames"></a><a name="getidsofnames"></a> IDispEventSimpleImpl:: GetIDsOfNames

Questa implementazione di `IDispatch::GetIDsOfNames` restituisce E_NOTIMPL.

```
STDMETHOD(GetIDsOfNames)(
    REFIID /* riid */,
    LPOLESTR* /* rgszNames */,
    UINT /* cNames */,
    LCID /* lcid */,
    DISPID* /* rgdispid */);
```

### <a name="remarks"></a>Commenti

Vedere [IDispatch:: GetIDsOfNames](/windows/win32/api/oaidl/nf-oaidl-idispatch-getidsofnames) nel Windows SDK.

## <a name="idispeventsimpleimplgettypeinfo"></a><a name="gettypeinfo"></a> IDispEventSimpleImpl:: GetTypeInfo

Questa implementazione di `IDispatch::GetTypeInfo` restituisce E_NOTIMPL.

```
STDMETHOD(GetTypeInfo)(
    UINT /* itinfo */,
    LCID /* lcid */,
    ITypeInfo** /* pptinfo */);
```

### <a name="remarks"></a>Commenti

Vedere [IDispatch:: GetTypeInfo](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfo) nel Windows SDK.

## <a name="idispeventsimpleimplgettypeinfocount"></a><a name="gettypeinfocount"></a> IDispEventSimpleImpl:: GetTypeInfoCount

Questa implementazione di `IDispatch::GetTypeInfoCount` restituisce E_NOTIMPL.

```
STDMETHOD(GetTypeInfoCount)(UINT* /* pctinfo */);
```

### <a name="remarks"></a>Commenti

Vedere [IDispatch:: GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount) nel Windows SDK.

## <a name="idispeventsimpleimplinvoke"></a><a name="invoke"></a> IDispEventSimpleImpl:: Invoke

Questa implementazione di `IDispatch::Invoke` chiama i gestori eventi elencati nella mappa di sink di evento.

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

### <a name="remarks"></a>Commenti

Vedere [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke).

## <a name="idispeventsimpleimplunadvise"></a><a name="unadvise"></a> IDispEventSimpleImpl:: Unadvise

Interrompe la connessione con l'origine evento rappresentata da *punk*.

```
HRESULT Unadvise(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Puntatore all' `IUnknown` interfaccia dell'oggetto di origine dell'evento.

### <a name="return-value"></a>Valore restituito

S_OK o qualsiasi valore HRESULT di errore.

### <a name="remarks"></a>Commenti

Una volta interrotta la connessione, gli eventi non verranno più indirizzati alle funzioni del gestore elencate nella mappa di sink di evento.

> [!NOTE]
> Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario distinguere le chiamate a questo metodo mediante l'ambito della chiamata con la classe di base a cui si è interessati.

`Unadvise` interrompe una connessione stabilita con l'origine evento predefinita specificata in `pdiid` .

`Unavise` interrompe una connessione con l'origine evento predefinita, ottiene l'IID dell'origine evento predefinita dell'oggetto come determinato da [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).

## <a name="see-also"></a>Vedi anche

[Struttura _ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)<br/>
[Classe IDispatchImpl](../../atl/reference/idispatchimpl-class.md)<br/>
[Classe IDispEventImpl](../../atl/reference/idispeventimpl-class.md)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
