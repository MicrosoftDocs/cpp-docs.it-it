---
description: 'Altre informazioni su: classe CBindStatusCallback'
title: Classe CBindStatusCallback
ms.date: 11/04/2016
f1_keywords:
- CBindStatusCallback
- ATLCTL/ATL::CBindStatusCallback
- ATLCTL/ATL::CBindStatusCallback::CBindStatusCallback
- ATLCTL/ATL::CBindStatusCallback::Download
- ATLCTL/ATL::CBindStatusCallback::GetBindInfo
- ATLCTL/ATL::CBindStatusCallback::GetPriority
- ATLCTL/ATL::CBindStatusCallback::OnDataAvailable
- ATLCTL/ATL::CBindStatusCallback::OnLowResource
- ATLCTL/ATL::CBindStatusCallback::OnObjectAvailable
- ATLCTL/ATL::CBindStatusCallback::OnProgress
- ATLCTL/ATL::CBindStatusCallback::OnStartBinding
- ATLCTL/ATL::CBindStatusCallback::OnStopBinding
- ATLCTL/ATL::CBindStatusCallback::StartAsyncDownload
- ATLCTL/ATL::CBindStatusCallback::m_dwAvailableToRead
- ATLCTL/ATL::CBindStatusCallback::m_dwTotalRead
- ATLCTL/ATL::CBindStatusCallback::m_pFunc
- ATLCTL/ATL::CBindStatusCallback::m_pT
- ATLCTL/ATL::CBindStatusCallback::m_spBindCtx
- ATLCTL/ATL::CBindStatusCallback::m_spBinding
- ATLCTL/ATL::CBindStatusCallback::m_spMoniker
- ATLCTL/ATL::CBindStatusCallback::m_spStream
helpviewer_keywords:
- asynchronous data transfer [C++]
- data transfer [C++]
- data transfer [C++], asynchronous
- CBindStatusCallback class
ms.assetid: 0f5da276-6031-4418-b2a9-a4750ef29e77
ms.openlocfilehash: 8c57328be0cb2678e671f68ac5bb44471056f457
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146978"
---
# <a name="cbindstatuscallback-class"></a>Classe CBindStatusCallback

Questa classe implementa l'interfaccia `IBindStatusCallback` .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T,
    int nBindFlags = BINDF_ASYNCHRONOUS | BINDF_ASYNCSTORAGE | BINDF_GETNEWESTVERSION | BINDF_NOWRITECACHE>
class ATL_NO_VTABLE CBindStatusCallback : public CComObjectRootEx <T ::_ThreadModel::ThreadModelNoCS>,
    public IBindStatusCallbackImpl<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe che contiene la funzione che verrà chiamata durante la ricezione dei dati.

*nBindFlags*<br/>
Specifica i flag di associazione restituiti da [GetBindInfo.](#getbindinfo). L'implementazione predefinita imposta l'associazione come asincrona, recupera la versione più recente dei dati/oggetto e non archivia i dati recuperati nella cache del disco.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CBindStatusCallback:: CBindStatusCallback](#cbindstatuscallback)|Costruttore.|
|[CBindStatusCallback:: ~ CBindStatusCallback](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CBindStatusCallback::D ownload](#download)|Metodo statico che avvia il processo di download, crea un `CBindStatusCallback` oggetto e chiama `StartAsyncDownload` .|
|[CBindStatusCallback:: GetBindInfo.](#getbindinfo)|Chiamato dal moniker asincrono per richiedere informazioni sul tipo di binding da creare.|
|[CBindStatusCallback:: GetPriority](#getpriority)|Chiamato dal moniker asincrono per ottenere la priorità dell'operazione di associazione. L'implementazione ATL restituisce `E_NOTIMPL` .|
|[CBindStatusCallback:: OnDataAvailable](#ondataavailable)|Chiamato per fornire i dati all'applicazione non appena diventano disponibili. Legge i dati, quindi chiama la funzione passata per usare i dati.|
|[CBindStatusCallback:: OnLowResource](#onlowresource)|Chiamato quando le risorse sono insufficienti. L'implementazione ATL restituisce S_OK.|
|[CBindStatusCallback:: OnObjectAvailable](#onobjectavailable)|Chiamato dal moniker asincrono per passare un puntatore all'interfaccia dell'oggetto all'applicazione. L'implementazione ATL restituisce S_OK.|
|[CBindStatusCallback:: OnProgress](#onprogress)|Chiamato per indicare lo stato di avanzamento di un processo di download dei dati. L'implementazione ATL restituisce S_OK.|
|[CBindStatusCallback:: OnStart](#onstartbinding)|Chiamato quando l'associazione viene avviata.|
|[CBindStatusCallback:: onstopy](#onstopbinding)|Chiamato quando viene arrestato il trasferimento dati asincrono.|
|[CBindStatusCallback:: StartAsyncDownload](#startasyncdownload)|Inizializza i byte disponibili e i byte letti su zero, crea un oggetto flusso di tipo push da un URL e chiama `OnDataAvailable` ogni volta che i dati sono disponibili.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CBindStatusCallback:: m_dwAvailableToRead](#m_dwavailabletoread)|Numero di byte disponibili per la lettura.|
|[CBindStatusCallback:: m_dwTotalRead](#m_dwtotalread)|Numero totale di byte letti.|
|[CBindStatusCallback:: m_pFunc](#m_pfunc)|Puntatore alla funzione chiamata quando i dati sono disponibili.|
|[CBindStatusCallback:: m_pT](#m_pt)|Puntatore all'oggetto che richiede il trasferimento dati asincrono.|
|[CBindStatusCallback:: m_spBindCtx](#m_spbindctx)|Puntatore all'interfaccia [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) per l'operazione di associazione corrente.|
|[CBindStatusCallback:: m_spBinding](#m_spbinding)|Puntatore all' `IBinding` interfaccia per l'operazione di associazione corrente.|
|[CBindStatusCallback:: m_spMoniker](#m_spmoniker)|Puntatore all'interfaccia [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) per l'URL da utilizzare.|
|[CBindStatusCallback:: m_spStream](#m_spstream)|Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) per il trasferimento dei dati.|

## <a name="remarks"></a>Commenti

La classe `CBindStatusCallback` implementa l'interfaccia `IBindStatusCallback`. `IBindStatusCallback` deve essere implementato dall'applicazione in modo che possa ricevere notifiche da un trasferimento dati asincrono. Il moniker asincrono fornito dal sistema usa `IBindStatusCallback` metodi per inviare e ricevere informazioni sul trasferimento di dati asincrono da e verso l'oggetto.

In genere, l' `CBindStatusCallback` oggetto è associato a un'operazione di associazione specifica. Ad esempio, nell'esempio [asincrono](../../overview/visual-cpp-samples.md) , quando si imposta la proprietà URL, viene creato un `CBindStatusCallback` oggetto nella chiamata a `Download` :

[!code-cpp[NVC_ATL_Windowing#86](../../atl/codesnippet/cpp/cbindstatuscallback-class_1.h)]

Il moniker asincrono utilizza la funzione `OnData` di callback per chiamare l'applicazione quando dispone di dati. Il moniker asincrono viene fornito dal sistema.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

`IBindStatusCallback`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`CBindStatusCallback`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="cbindstatuscallbackcbindstatuscallback"></a><a name="cbindstatuscallback"></a> CBindStatusCallback:: CBindStatusCallback

Costruttore.

```
CBindStatusCallback();
```

### <a name="remarks"></a>Commenti

Crea un oggetto per ricevere le notifiche relative al trasferimento di dati asincrono. In genere, viene creato un oggetto per ogni operazione di associazione.

Il costruttore inizializza anche [m_pT](#m_pt) e [m_pFunc](#m_pfunc) su null.

## <a name="cbindstatuscallbackcbindstatuscallback"></a><a name="dtor"></a> CBindStatusCallback:: ~ CBindStatusCallback

Distruttore.

```
~CBindStatusCallback();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

## <a name="cbindstatuscallbackdownload"></a><a name="download"></a> CBindStatusCallback::D ownload

Crea un `CBindStatusCallback` oggetto e chiama `StartAsyncDownload` per iniziare a scaricare i dati in modo asincrono dall'URL specificato.

```
static HRESULT Download(
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```

### <a name="parameters"></a>Parametri

*pT*<br/>
in Puntatore all'oggetto che richiede il trasferimento dati asincrono. L' `CBindStatusCallback` oggetto è creato un modello sulla classe di questo oggetto.

*pFunc*<br/>
in Puntatore alla funzione che riceve i dati letti. La funzione è un membro della classe di tipo dell'oggetto `T` . Vedere [StartAsyncDownload](#startasyncdownload) per la sintassi e un esempio.

*bstrURL*<br/>
in URL da cui ottenere i dati. Può essere qualsiasi URL o nome file valido. Non può essere NULL. Ad esempio:

`CComBSTR mybstr =_T("http://somesite/data.htm")`

*pUnkContainer*<br/>
in `IUnknown` Del contenitore. NULL per impostazione predefinita.

*bRelative*<br/>
in Flag che indica se l'URL è relativo o assoluto. FALSE per impostazione predefinita, ovvero l'URL è assoluto.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

Ogni volta che i dati sono disponibili, vengono inviati all'oggetto tramite `OnDataAvailable` . `OnDataAvailable` legge i dati e chiama la funzione a cui punta *pfunc* (ad esempio, per archiviare i dati o stamparli sullo schermo).

## <a name="cbindstatuscallbackgetbindinfo"></a><a name="getbindinfo"></a> CBindStatusCallback:: GetBindInfo.

Chiamato per indicare al moniker come eseguire l'associazione.

```
STDMETHOD(GetBindInfo)(
    DWORD* pgrfBSCF,
    BINDINFO* pbindinfo);
```

### <a name="parameters"></a>Parametri

*pgrfBSCF*<br/>
out Puntatore ai valori di Enumerazione BINDF che indica il modo in cui deve essere eseguita l'operazione di associazione. Per impostazione predefinita, impostare con i seguenti valori di enumerazione:

BINDF_ASYNCHRONOUS download asincrono.

BINDF_ASYNCSTORAGE `OnDataAvailable` restituisce E_PENDING quando i dati non sono ancora disponibili anziché bloccarsi fino a quando i dati non sono disponibili.

BINDF_GETNEWESTVERSION l'operazione di associazione deve recuperare la versione più recente dei dati.

BINDF_NOWRITECACHE l'operazione di associazione non deve archiviare i dati recuperati nella cache del disco.

*pbindinfo*<br/>
[in, out] Puntatore alla struttura che `BINDINFO` fornisce ulteriori informazioni sulla modalità di associazione dell'oggetto.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

L'implementazione predefinita imposta l'associazione come asincrona e per l'utilizzo del modello di push dei dati. Nel modello di push dei dati, il moniker guida l'operazione di associazione asincrona e notifica continuamente al client ogni volta che sono disponibili nuovi dati.

## <a name="cbindstatuscallbackgetpriority"></a><a name="getpriority"></a> CBindStatusCallback:: GetPriority

Chiamato dal moniker asincrono per ottenere la priorità dell'operazione di associazione.

```
STDMETHOD(GetPriority)(LONG* pnPriority);
```

### <a name="parameters"></a>Parametri

*pnPriority*<br/>
out Indirizzo della variabile **Long** che, in esito positivo, riceve la priorità.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

## <a name="cbindstatuscallbackm_dwavailabletoread"></a><a name="m_dwavailabletoread"></a> CBindStatusCallback:: m_dwAvailableToRead

Può essere usato per archiviare il numero di byte disponibili per la lettura.

```
DWORD m_dwAvailableToRead;
```

### <a name="remarks"></a>Commenti

Inizializzato su zero in `StartAsyncDownload` .

## <a name="cbindstatuscallbackm_dwtotalread"></a><a name="m_dwtotalread"></a> CBindStatusCallback:: m_dwTotalRead

Totale cumulativo di byte letti nel trasferimento dati asincrono.

```
DWORD m_dwTotalRead;
```

### <a name="remarks"></a>Commenti

Viene incrementato ogni volta che `OnDataAvailable` viene chiamato dal numero di byte effettivamente letti. Inizializzato su zero in `StartAsyncDownload` .

## <a name="cbindstatuscallbackm_pfunc"></a><a name="m_pfunc"></a> CBindStatusCallback:: m_pFunc

La funzione a cui `m_pFunc` fa riferimento viene chiamata da `OnDataAvailable` dopo la lettura dei dati disponibili, ad esempio per archiviare i dati o stamparli sullo schermo.

```
ATL_PDATAAVAILABLE m_pFunc;
```

### <a name="remarks"></a>Commenti

La funzione a cui `m_pFunc` fa riferimento è un membro della classe dell'oggetto e presenta la sintassi seguente:

```cpp
void Function_Name(
   CBindStatusCallback<T>* pbsc,
   BYTE* pBytes,
   DWORD dwSize
   );
```

## <a name="cbindstatuscallbackm_pt"></a><a name="m_pt"></a> CBindStatusCallback:: m_pT

Puntatore all'oggetto che richiede il trasferimento dati asincrono.

```
T* m_pT;
```

### <a name="remarks"></a>Commenti

L' `CBindStatusCallback` oggetto è creato un modello sulla classe di questo oggetto.

## <a name="cbindstatuscallbackm_spbindctx"></a><a name="m_spbindctx"></a> CBindStatusCallback:: m_spBindCtx

Puntatore a un'interfaccia [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) che fornisce l'accesso al contesto di associazione, ovvero un oggetto che archivia informazioni su una particolare operazione di associazione del moniker.

```
CComPtr<IBindCtx> m_spBindCtx;
```

### <a name="remarks"></a>Commenti

Inizializzazione in `StartAsyncDownload` .

## <a name="cbindstatuscallbackm_spbinding"></a><a name="m_spbinding"></a> CBindStatusCallback:: m_spBinding

Puntatore all' `IBinding` interfaccia dell'operazione di associazione corrente.

```
CComPtr<IBinding> m_spBinding;
```

### <a name="remarks"></a>Commenti

Inizializzato `OnStartBinding` e rilasciato in `OnStopBinding` .

## <a name="cbindstatuscallbackm_spmoniker"></a><a name="m_spmoniker"></a> CBindStatusCallback:: m_spMoniker

Puntatore all'interfaccia [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) per l'URL da utilizzare.

```
CComPtr<IMoniker> m_spMoniker;
```

### <a name="remarks"></a>Commenti

Inizializzazione in `StartAsyncDownload` .

## <a name="cbindstatuscallbackm_spstream"></a><a name="m_spstream"></a> CBindStatusCallback:: m_spStream

Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) dell'operazione di associazione corrente.

```
CComPtr<IStream> m_spStream;
```

### <a name="remarks"></a>Commenti

Inizializzato `OnDataAvailable` dalla `STGMEDIUM` struttura quando il flag BCSF viene BCSF_FIRSTDATANOTIFICATION e rilasciato quando il flag BCSF è BCSF_LASTDATANOTIFICATION.

## <a name="cbindstatuscallbackondataavailable"></a><a name="ondataavailable"></a> CBindStatusCallback:: OnDataAvailable

Il moniker asincrono fornito dal sistema chiama `OnDataAvailable` per fornire i dati all'oggetto quando diventa disponibile.

```
STDMETHOD(
    OnDataAvailable)(DWORD grfBSCF,
    DWORD dwSize,
    FORMATETC* /* pformatetc */,
    STGMEDIUM* pstgmed);
```

### <a name="parameters"></a>Parametri

*grfBSCF*<br/>
in Valore dell'enumerazione BSCF. Uno o più degli elementi seguenti: BSCF_FIRSTDATANOTIFICATION, BSCF_INTERMEDIARYDATANOTIFICATION o BSCF_LASTDATANOTIFICATION.

*dwSize*<br/>
in Quantità cumulativa (in byte) dei dati disponibili dall'inizio dell'associazione. Può essere zero, che indica che la quantità di dati non è pertinente o che non è diventata disponibile alcuna quantità specifica.

*pFormatetc*<br/>
in Puntatore alla struttura [FORMATETC](/windows/win32/com/the-formatetc-structure) che contiene il formato dei dati disponibili. Se non è disponibile alcun formato, può essere CF_NULL.

*pstgmed*<br/>
in Puntatore alla struttura [STGMEDIUM](/windows/win32/com/the-stgmedium-structure) che include i dati effettivi ora disponibili.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

`OnDataAvailable` legge i dati, quindi chiama un metodo della classe dell'oggetto, ad esempio per archiviare i dati o stamparli sullo schermo. Per informazioni dettagliate, vedere [CBindStatusCallback:: StartAsyncDownload](#startasyncdownload) .

## <a name="cbindstatuscallbackonlowresource"></a><a name="onlowresource"></a> CBindStatusCallback:: OnLowResource

Chiamato quando le risorse sono insufficienti.

```
STDMETHOD(OnLowResource)(DWORD /* dwReserved */);
```

### <a name="parameters"></a>Parametri

*dwReserved*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="cbindstatuscallbackonobjectavailable"></a><a name="onobjectavailable"></a> CBindStatusCallback:: OnObjectAvailable

Chiamato dal moniker asincrono per passare un puntatore all'interfaccia dell'oggetto all'applicazione.

```
STDMETHOD(OnObjectAvailable)(REFID /* riid */, IUnknown* /* punk */);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
Identificatore di interfaccia dell'interfaccia richiesta. Non utilizzato.

*punk*<br/>
Indirizzo dell'interfaccia IUnknown. Non utilizzato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="cbindstatuscallbackonprogress"></a><a name="onprogress"></a> CBindStatusCallback:: OnProgress

Chiamato per indicare lo stato di avanzamento di un processo di download dei dati.

```
STDMETHOD(OnProgress)(
    ULONG /* ulProgress */,
    ULONG /* ulProgressMax */,
    ULONG /* ulStatusCode */,
    LPCWSTRONG /* szStatusText */);
```

### <a name="parameters"></a>Parametri

*ulProgress*<br/>
Intero lungo senza segno. Non utilizzato.

*ulProgressMax*<br/>
Intero lungo senza segno inutilizzato.

*ulStatusCode*<br/>
Intero lungo senza segno. Non utilizzato.

*szStatusText*<br/>
Indirizzo di un valore stringa. Non utilizzato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="cbindstatuscallbackonstartbinding"></a><a name="onstartbinding"></a> CBindStatusCallback:: OnStart

Imposta il membro dati [m_spBinding](#m_spbinding) al `IBinding` puntatore in *pBinding*.

```
STDMETHOD(OnStartBinding)(DWORD /* dwReserved */, IBinding* pBinding);
```

### <a name="parameters"></a>Parametri

*dwReserved*<br/>
Riservato per usi futuri.

*pBinding*<br/>
in Indirizzo dell'interfaccia IBinding dell'operazione di associazione corrente. Non può essere NULL. Il client deve chiamare AddRef su questo puntatore per tenere un riferimento all'oggetto di associazione.

## <a name="cbindstatuscallbackonstopbinding"></a><a name="onstopbinding"></a> CBindStatusCallback:: onstopy

Rilascia il `IBinding` puntatore nel [m_spBinding](#m_spbinding)del membro dati.

```
STDMETHOD(OnStopBinding)(HRESULT hresult, LPCWSTR /* szError */);
```

### <a name="parameters"></a>Parametri

*HRESULT*<br/>
Codice di stato restituito dall'operazione di associazione.

*szError*<br/>
Indirizzo di un valore stringa. Non utilizzato.

### <a name="remarks"></a>Commenti

Chiamato dal moniker asincrono fornito dal sistema per indicare la fine dell'operazione di associazione.

## <a name="cbindstatuscallbackstartasyncdownload"></a><a name="startasyncdownload"></a> CBindStatusCallback:: StartAsyncDownload

Inizia a scaricare i dati in modo asincrono dall'URL specificato.

```
HRESULT StartAsyncDownload(
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```

### <a name="parameters"></a>Parametri

*pT*<br/>
in Puntatore all'oggetto che richiede il trasferimento dati asincrono. L' `CBindStatusCallback` oggetto è creato un modello sulla classe di questo oggetto.

*pFunc*<br/>
in Puntatore alla funzione che riceve i dati da leggere. La funzione è un membro della classe di tipo dell'oggetto `T` . Vedere la **sezione Osservazioni** per la sintassi e un esempio.

*bstrURL*<br/>
in URL da cui ottenere i dati. Può essere qualsiasi URL o nome file valido. Non può essere NULL. Ad esempio:

`CComBSTR mybstr =_T("http://somesite/data.htm")`

*pUnkContainer*<br/>
in `IUnknown` Del contenitore. NULL per impostazione predefinita.

*bRelative*<br/>
in Flag che indica se l'URL è relativo o assoluto. FALSE per impostazione predefinita, ovvero l'URL è assoluto.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

Ogni volta che i dati sono disponibili, vengono inviati all'oggetto tramite `OnDataAvailable` . `OnDataAvailable` legge i dati e chiama la funzione a cui punta *pfunc* (ad esempio, per archiviare i dati o stamparli sullo schermo).

La funzione a cui punta *pfunc* è un membro della classe dell'oggetto e presenta la sintassi seguente:

```cpp
void Function_Name(
    CBindStatusCallback<T>* pbsc,
    BYTE* pBytes,
    DWORD dwSize);
```

Nell'esempio seguente (tratto dall'esempio [asincrono](../../overview/visual-cpp-samples.md) ) la funzione `OnData` scrive i dati ricevuti in una casella di testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#87](../../atl/codesnippet/cpp/cbindstatuscallback-class_2.h)]

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
