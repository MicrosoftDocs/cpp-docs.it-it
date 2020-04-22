---
title: CBindStatusCallback (classe)
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
ms.openlocfilehash: 0ae7f4fcdba18be84d99140e395b6f2ac3db792a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748206"
---
# <a name="cbindstatuscallback-class"></a>CBindStatusCallback (classe)

La classe implementa l'interfaccia `IBindStatusCallback`.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T,
    int nBindFlags = BINDF_ASYNCHRONOUS | BINDF_ASYNCSTORAGE | BINDF_GETNEWESTVERSION | BINDF_NOWRITECACHE>
class ATL_NO_VTABLE CBindStatusCallback : public CComObjectRootEx <T ::_ThreadModel::ThreadModelNoCS>,
    public IBindStatusCallbackImpl<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe contenente la funzione che verrà chiamata quando vengono ricevuti i dati.

*nBindFlags (flag)*<br/>
Specifica i flag di associazione restituiti da [GetBindInfo](#getbindinfo). L'implementazione predefinita imposta l'associazione come asincrona, recupera la versione più recente dei dati/oggetto e non archivia i dati recuperati nella cache del disco.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBindStatusCallback::CBindStatusCallback](#cbindstatuscallback)|Costruttore.|
|[CBindStatusCallback:: CBindStatusCallback](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBindStatusCallback::Download](#download)|Metodo statico che avvia il `CBindStatusCallback` processo di `StartAsyncDownload`download, crea un oggetto e chiama .|
|[CBindStatusCallback::GetBindInfo](#getbindinfo)|Chiamato dal moniker asincrono per richiedere informazioni sul tipo di associazione da creare.|
|[CBindStatusCallback::GetPriority](#getpriority)|Chiamato dal moniker asincrono per ottenere la priorità dell'operazione di associazione. L'implementazione `E_NOTIMPL`ATL restituisce .|
|[CBindStatusCallback::OnDataAvailable](#ondataavailable)|Chiamato per fornire dati all'applicazione non appena diventa disponibile. Legge i dati, quindi chiama la funzione passata per utilizzare i dati.|
|[CBindStatusCallback::OnLowResource](#onlowresource)|Chiamato quando le risorse sono basse. L'implementazione ATL restituisce S_OK.|
|[CBindStatusCallback::OnObjectAvailable](#onobjectavailable)|Chiamato dal moniker asincrono per passare un puntatore a interfaccia oggetto all'applicazione. L'implementazione ATL restituisce S_OK.|
|[CBindStatusCallback::OnProgress](#onprogress)|Chiamato per indicare lo stato di avanzamento di un processo di download dei dati. L'implementazione ATL restituisce S_OK.|
|[CBindStatusCallback::OnStartBinding](#onstartbinding)|Chiamato quando viene avviata l'associazione.|
|[CBindStatusCallback::OnStopBinding](#onstopbinding)|Chiamato quando il trasferimento dati asincrono viene interrotto.|
|[CBindStatusCallback::StartAsyncDownload](#startasyncdownload)|Inizializza i byte disponibili e i byte letti a zero, crea un `OnDataAvailable` oggetto flusso di tipo push da un URL e chiama ogni volta che sono disponibili dati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBindStatusCallback::m_dwAvailableToRead](#m_dwavailabletoread)|Numero di byte disponibili per la lettura.|
|[CBindStatusCallback::m_dwTotalRead](#m_dwtotalread)|Numero totale di byte letti.|
|[CBindStatusCallback::m_pFunc](#m_pfunc)|Puntatore alla funzione chiamata quando i dati sono disponibili.|
|[CBindStatusCallback::m_pT](#m_pt)|Puntatore all'oggetto che richiede il trasferimento di dati asincrono.|
|[CBindStatusCallback::m_spBindCtx](#m_spbindctx)|Puntatore all'interfaccia [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) per l'operazione di associazione corrente.|
|[CBindStatusCallback::m_spBinding](#m_spbinding)|Puntatore `IBinding` all'interfaccia per l'operazione di associazione corrente.|
|[CBindStatusCallback::m_spMoniker](#m_spmoniker)|Puntatore all'interfaccia [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) per l'URL da utilizzare.|
|[CBindStatusCallback::m_spStream](#m_spstream)|Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) per il trasferimento dei dati.|

## <a name="remarks"></a>Osservazioni

La classe `CBindStatusCallback` implementa l'interfaccia `IBindStatusCallback`. `IBindStatusCallback`deve essere implementato dall'applicazione in modo che possa ricevere notifiche da un trasferimento di dati asincrono. Il moniker asincrono fornito `IBindStatusCallback` dal sistema utilizza metodi per inviare e ricevere informazioni sul trasferimento di dati asincroni da e verso l'oggetto.

In genere, l'oggetto `CBindStatusCallback` è associato a un'operazione di associazione specifica. Ad esempio, nell'esempio [ASYNC,](../../overview/visual-cpp-samples.md) quando si imposta `CBindStatusCallback` la proprietà URL, viene creato un oggetto nella chiamata a `Download`:

[!code-cpp[NVC_ATL_Windowing#86](../../atl/codesnippet/cpp/cbindstatuscallback-class_1.h)]

Il moniker asincrono `OnData` utilizza la funzione di callback per chiamare l'applicazione quando contiene dati. Il moniker asincrono viene fornito dal sistema.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

`IBindStatusCallback`

[Ccomobjectrootex](../../atl/reference/ccomobjectrootex-class.md)

`CBindStatusCallback`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="cbindstatuscallbackcbindstatuscallback"></a><a name="cbindstatuscallback"></a>CBindStatusCallback::CBindStatusCallback

Costruttore.

```
CBindStatusCallback();
```

### <a name="remarks"></a>Osservazioni

Crea un oggetto per ricevere notifiche relative al trasferimento di dati asincrono. In genere, viene creato un oggetto per ogni operazione di associazione.

Il costruttore inizializza inoltre [m_pT](#m_pt) e [m_pFunc](#m_pfunc) su NULL.

## <a name="cbindstatuscallbackcbindstatuscallback"></a><a name="dtor"></a>CBindStatusCallback:: CBindStatusCallback

Distruttore.

```
~CBindStatusCallback();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="cbindstatuscallbackdownload"></a><a name="download"></a>CBindStatusCallback::Download

Crea `CBindStatusCallback` un oggetto `StartAsyncDownload` e chiama per avviare il download dei dati in modo asincrono dall'URL specificato.

```
static HRESULT Download(
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```

### <a name="parameters"></a>Parametri

*Pt*<br/>
[in] Puntatore all'oggetto che richiede il trasferimento di dati asincrono. L'oggetto `CBindStatusCallback` viene templatizzato nella classe dell'oggetto.

*pFunc*<br/>
[in] Puntatore alla funzione che riceve i dati letti. La funzione è un membro della classe `T`di tipo tipo dell'oggetto . Vedere [StartAsyncDownload](#startasyncdownload) per la sintassi e un esempio.

*bstrURL*<br/>
[in] URL da cui ottenere i dati. Può essere qualsiasi URL o nome di file valido. Non può essere NULL. Ad esempio:

`CComBSTR mybstr =_T("http://somesite/data.htm")`

*pUnkContenitore*<br/>
[in] Il `IUnknown` contenitore. NULL per impostazione predefinita.

*bRelativo*<br/>
[in] Flag che indica se l'URL è relativo o assoluto. FALSE per impostazione predefinita, ovvero l'URL è assoluto.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Ogni volta che i dati sono `OnDataAvailable`disponibili vengono inviati all'oggetto tramite . `OnDataAvailable`legge i dati e chiama la funzione a cui punta *pFunc* (ad esempio, per memorizzare i dati o stamparlo sullo schermo).

## <a name="cbindstatuscallbackgetbindinfo"></a><a name="getbindinfo"></a>CBindStatusCallback::GetBindInfo

Chiamato per indicare al moniker come eseguire l'associazione.

```
STDMETHOD(GetBindInfo)(
    DWORD* pgrfBSCF,
    BINDINFO* pbindinfo);
```

### <a name="parameters"></a>Parametri

*PgrfBSCF*<br/>
[fuori] Puntatore ai valori di enumerazione BINDF che indica come deve essere eseguita l'operazione di associazione. Per impostazione predefinita, impostare con i seguenti valori di enumerazione:

BINDF_ASYNCHRONOUS download asincrono.

BINDF_ASYNCSTORAGE `OnDataAvailable` restituisce E_PENDING quando i dati non sono ancora disponibili anziché bloccarli fino a quando i dati non sono disponibili.

BINDF_GETNEWESTVERSION L'operazione di associazione deve recuperare la versione più recente dei dati.

BINDF_NOWRITECACHE L'operazione di binding non deve archiviare i dati recuperati nella cache del disco.

*pbindinfo*<br/>
[in, out] Puntatore alla `BINDINFO` struttura che fornisce ulteriori informazioni su come l'oggetto desidera che si verifichi l'associazione.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita imposta l'associazione come asincrona e per utilizzare il modello di push dei dati. Nel modello di push dei dati, il moniker guida l'operazione di associazione asincrona e invia continuamente una notifica al client ogni volta che sono disponibili nuovi dati.

## <a name="cbindstatuscallbackgetpriority"></a><a name="getpriority"></a>CBindStatusCallback::GetPriority

Chiamato dal moniker asincrono per ottenere la priorità dell'operazione di associazione.

```
STDMETHOD(GetPriority)(LONG* pnPriority);
```

### <a name="parameters"></a>Parametri

*pnPriorità*<br/>
[fuori] Indirizzo della variabile **LONG** che, in caso di successo, riceve la priorità.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

## <a name="cbindstatuscallbackm_dwavailabletoread"></a><a name="m_dwavailabletoread"></a>CBindStatusCallback::m_dwAvailableToRead

Può essere utilizzato per memorizzare il numero di byte disponibili per la lettura.

```
DWORD m_dwAvailableToRead;
```

### <a name="remarks"></a>Osservazioni

Inizializzato su `StartAsyncDownload`zero in .

## <a name="cbindstatuscallbackm_dwtotalread"></a><a name="m_dwtotalread"></a>CBindStatusCallback::m_dwTotalRead

Totale cumulativo di byte letti nel trasferimento di dati asincrono.

```
DWORD m_dwTotalRead;
```

### <a name="remarks"></a>Osservazioni

Incrementato `OnDataAvailable` ogni volta viene chiamato dal numero di byte effettivamente letti. Inizializzato su `StartAsyncDownload`zero in .

## <a name="cbindstatuscallbackm_pfunc"></a><a name="m_pfunc"></a>CBindStatusCallback::m_pFunc

La funzione a `m_pFunc` cui `OnDataAvailable` punta viene chiamata dopo aver letto i dati disponibili (ad esempio, per memorizzare i dati o stamparlo sullo schermo).

```
ATL_PDATAAVAILABLE m_pFunc;
```

### <a name="remarks"></a>Osservazioni

La funzione a `m_pFunc` cui fa riferimento è un membro della classe dell'oggetto e ha la sintassi seguente:

```cpp
void Function_Name(
   CBindStatusCallback<T>* pbsc,
   BYTE* pBytes,
   DWORD dwSize
   );
```

## <a name="cbindstatuscallbackm_pt"></a><a name="m_pt"></a>CBindStatusCallback::m_pT

Puntatore all'oggetto che richiede il trasferimento di dati asincrono.

```
T* m_pT;
```

### <a name="remarks"></a>Osservazioni

L'oggetto `CBindStatusCallback` viene templatizzato nella classe dell'oggetto.

## <a name="cbindstatuscallbackm_spbindctx"></a><a name="m_spbindctx"></a>CBindStatusCallback::m_spBindCtx

Puntatore a un [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) interfaccia che fornisce l'accesso al contesto di associazione (un oggetto che archivia le informazioni su una particolare operazione di associazione moniker).

```
CComPtr<IBindCtx> m_spBindCtx;
```

### <a name="remarks"></a>Osservazioni

Inizializzato `StartAsyncDownload`in .

## <a name="cbindstatuscallbackm_spbinding"></a><a name="m_spbinding"></a>CBindStatusCallback::m_spBinding

Puntatore all'interfaccia `IBinding` dell'operazione di associazione corrente.

```
CComPtr<IBinding> m_spBinding;
```

### <a name="remarks"></a>Osservazioni

Inizializzato `OnStartBinding` in e `OnStopBinding`rilasciato in .

## <a name="cbindstatuscallbackm_spmoniker"></a><a name="m_spmoniker"></a>CBindStatusCallback::m_spMoniker

Puntatore all'interfaccia [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) per l'URL da utilizzare.

```
CComPtr<IMoniker> m_spMoniker;
```

### <a name="remarks"></a>Osservazioni

Inizializzato `StartAsyncDownload`in .

## <a name="cbindstatuscallbackm_spstream"></a><a name="m_spstream"></a>CBindStatusCallback::m_spStream

Puntatore all'interfaccia [IStream](/windows/win32/api/objidl/nn-objidl-istream) dell'operazione di associazione corrente.

```
CComPtr<IStream> m_spStream;
```

### <a name="remarks"></a>Osservazioni

Inizializzato `OnDataAvailable` dalla `STGMEDIUM` struttura quando il flag BCSF viene BCSF_FIRSTDATANOTIFICATION e rilasciato quando viene BCSF_LASTDATANOTIFICATION il flag BCSF.

## <a name="cbindstatuscallbackondataavailable"></a><a name="ondataavailable"></a>CBindStatusCallback::OnDataAvailable

Il moniker asincrono fornito `OnDataAvailable` dal sistema chiama per fornire dati all'oggetto non appena diventa disponibile.

```
STDMETHOD(
    OnDataAvailable)(DWORD grfBSCF,
    DWORD dwSize,
    FORMATETC* /* pformatetc */,
    STGMEDIUM* pstgmed);
```

### <a name="parameters"></a>Parametri

*grfBSCF*<br/>
[in] Valore di enumerazione BSCF. Uno o più dei seguenti elementi: BSCF_FIRSTDATANOTIFICATION, BSCF_INTERMEDIARYDATANOTIFICATION o BSCF_LASTDATANOTIFICATION.

*dwSize (Dimensioni dwSize)*<br/>
[in] Quantità cumulativa (in byte) di dati disponibili dall'inizio dell'associazione. Può essere zero, a indicare che la quantità di dati non è rilevante o che non è stato reso disponibile alcun importo specifico.

*pformatetco*<br/>
[in] Puntatore alla struttura [FORMATETC](/windows/win32/com/the-formatetc-structure) che contiene il formato dei dati disponibili. Se non è presente alcun formato, è possibile CF_NULL.

*pstgmed (inta)*<br/>
[in] Puntatore alla struttura [STGMEDIUM](/windows/win32/com/the-stgmedium-structure) che contiene i dati effettivi ora disponibili.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

`OnDataAvailable`legge i dati, quindi chiama un metodo della classe dell'oggetto (ad esempio, per memorizzare i dati o stamparlo sullo schermo). Per informazioni [dettagliate, vedere CBindStatusCallback::StartAsyncDownload.See CBindStatusCallback::StartAsyncDownload](#startasyncdownload) for details.

## <a name="cbindstatuscallbackonlowresource"></a><a name="onlowresource"></a>CBindStatusCallback::OnLowResource

Chiamato quando le risorse sono basse.

```
STDMETHOD(OnLowResource)(DWORD /* dwReserved */);
```

### <a name="parameters"></a>Parametri

*dwRiservato*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="cbindstatuscallbackonobjectavailable"></a><a name="onobjectavailable"></a>CBindStatusCallback::OnObjectAvailable

Chiamato dal moniker asincrono per passare un puntatore a interfaccia oggetto all'applicazione.

```
STDMETHOD(OnObjectAvailable)(REFID /* riid */, IUnknown* /* punk */);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
Identificatore di interfaccia dell'interfaccia richiesta. Non utilizzato.

*Punk*<br/>
Indirizzo dell'interfaccia IUnknown. Non utilizzato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="cbindstatuscallbackonprogress"></a><a name="onprogress"></a>CBindStatusCallback::OnProgress

Chiamato per indicare lo stato di avanzamento di un processo di download dei dati.

```
STDMETHOD(OnProgress)(
    ULONG /* ulProgress */,
    ULONG /* ulProgressMax */,
    ULONG /* ulStatusCode */,
    LPCWSTRONG /* szStatusText */);
```

### <a name="parameters"></a>Parametri

*ulProgresso*<br/>
Intero lungo senza segno. Non utilizzato.

*ulProgressMax*<br/>
Unsigned long integer Inutilizzato.

*ulStatusCode (codice di stato)*<br/>
Intero lungo senza segno. Non utilizzato.

*Testodistatoz szStatus*<br/>
Indirizzo di un valore stringa. Non utilizzato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="cbindstatuscallbackonstartbinding"></a><a name="onstartbinding"></a>CBindStatusCallback::OnStartBinding

Imposta il [membro](#m_spbinding) dati `IBinding` m_spBinding puntatore in *pBinding*.

```
STDMETHOD(OnStartBinding)(DWORD /* dwReserved */, IBinding* pBinding);
```

### <a name="parameters"></a>Parametri

*dwRiservato*<br/>
Riservato per utilizzi futuri.

*pBinding (Associazione)*<br/>
[in] Indirizzo dell'interfaccia IBinding dell'operazione di associazione corrente. Non può essere NULL. Il client deve chiamare AddRef su questo puntatore per mantenere un riferimento all'oggetto di associazione.

## <a name="cbindstatuscallbackonstopbinding"></a><a name="onstopbinding"></a>CBindStatusCallback::OnStopBinding

Rilascia `IBinding` il puntatore nel membro dati [m_spBinding](#m_spbinding).

```
STDMETHOD(OnStopBinding)(HRESULT hresult, LPCWSTR /* szError */);
```

### <a name="parameters"></a>Parametri

*Hresult*<br/>
Codice di stato restituito dall'operazione di associazione.

*szError (szError)*<br/>
Indirizzo di un valore stringa. Non utilizzato.

### <a name="remarks"></a>Osservazioni

Chiamato dal moniker asincrono fornito dal sistema per indicare la fine dell'operazione di associazione.

## <a name="cbindstatuscallbackstartasyncdownload"></a><a name="startasyncdownload"></a>CBindStatusCallback::StartAsyncDownload

Avvia il download dei dati in modo asincrono dall'URL specificato.

```
HRESULT StartAsyncDownload(
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```

### <a name="parameters"></a>Parametri

*Pt*<br/>
[in] Puntatore all'oggetto che richiede il trasferimento di dati asincrono. L'oggetto `CBindStatusCallback` viene templatizzato nella classe dell'oggetto.

*pFunc*<br/>
[in] Puntatore alla funzione che riceve i dati letti. La funzione è un membro della classe `T`di tipo tipo dell'oggetto . Vedere **Osservazioni** per sintassi e un esempio.

*bstrURL*<br/>
[in] URL da cui ottenere i dati. Può essere qualsiasi URL o nome di file valido. Non può essere NULL. Ad esempio:

`CComBSTR mybstr =_T("http://somesite/data.htm")`

*pUnkContenitore*<br/>
[in] Il `IUnknown` contenitore. NULL per impostazione predefinita.

*bRelativo*<br/>
[in] Flag che indica se l'URL è relativo o assoluto. FALSE per impostazione predefinita, ovvero l'URL è assoluto.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Ogni volta che i dati sono `OnDataAvailable`disponibili vengono inviati all'oggetto tramite . `OnDataAvailable`legge i dati e chiama la funzione a cui punta *pFunc* (ad esempio, per memorizzare i dati o stamparlo sullo schermo).

La funzione a cui punta *pFunc* è un membro della classe dell'oggetto e ha la sintassi seguente:

```cpp
void Function_Name(
    CBindStatusCallback<T>* pbsc,
    BYTE* pBytes,
    DWORD dwSize);
```

Nell'esempio seguente (tratto dall'esempio `OnData` [ASYNC),](../../overview/visual-cpp-samples.md) la funzione scrive i dati ricevuti in una casella di testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#87](../../atl/codesnippet/cpp/cbindstatuscallback-class_2.h)]

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
