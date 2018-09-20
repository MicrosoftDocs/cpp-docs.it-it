---
title: Classe CAsyncMonikerFile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAsyncMonikerFile
- AFXOLE/CAsyncMonikerFile
- AFXOLE/CAsyncMonikerFile::CAsyncMonikerFile
- AFXOLE/CAsyncMonikerFile::Close
- AFXOLE/CAsyncMonikerFile::GetBinding
- AFXOLE/CAsyncMonikerFile::GetFormatEtc
- AFXOLE/CAsyncMonikerFile::Open
- AFXOLE/CAsyncMonikerFile::CreateBindStatusCallback
- AFXOLE/CAsyncMonikerFile::GetBindInfo
- AFXOLE/CAsyncMonikerFile::GetPriority
- AFXOLE/CAsyncMonikerFile::OnDataAvailable
- AFXOLE/CAsyncMonikerFile::OnLowResource
- AFXOLE/CAsyncMonikerFile::OnProgress
- AFXOLE/CAsyncMonikerFile::OnStartBinding
- AFXOLE/CAsyncMonikerFile::OnStopBinding
dev_langs:
- C++
helpviewer_keywords:
- CAsyncMonikerFile [MFC], CAsyncMonikerFile
- CAsyncMonikerFile [MFC], Close
- CAsyncMonikerFile [MFC], GetBinding
- CAsyncMonikerFile [MFC], GetFormatEtc
- CAsyncMonikerFile [MFC], Open
- CAsyncMonikerFile [MFC], CreateBindStatusCallback
- CAsyncMonikerFile [MFC], GetBindInfo
- CAsyncMonikerFile [MFC], GetPriority
- CAsyncMonikerFile [MFC], OnDataAvailable
- CAsyncMonikerFile [MFC], OnLowResource
- CAsyncMonikerFile [MFC], OnProgress
- CAsyncMonikerFile [MFC], OnStartBinding
- CAsyncMonikerFile [MFC], OnStopBinding
ms.assetid: 17378b66-a49a-4b67-88e3-7756ad26a2fc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c40d012ba32d2ea656024af77779f2cf8f67419a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433025"
---
# <a name="casyncmonikerfile-class"></a>Classe CAsyncMonikerFile

Fornisce la funzionalità per l'utilizzo di moniker asincroni in controlli ActiveX (precedentemente controlli OLE).

## <a name="syntax"></a>Sintassi

```
class CAsyncMonikerFile : public CMonikerFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncMonikerFile::CAsyncMonikerFile](#casyncmonikerfile)|Costruisce un oggetto `CAsyncMonikerFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncMonikerFile::Close](#close)|Chiude e rilascia tutte le risorse.|
|[CAsyncMonikerFile::GetBinding](#getbinding)|Recupera un puntatore per il trasferimento asincrono di associazione.|
|[CAsyncMonikerFile::GetFormatEtc](#getformatetc)|Recupera il formato dei dati nel flusso.|
|[CAsyncMonikerFile::Open](#open)|Apre un file in modo asincrono.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncMonikerFile::CreateBindStatusCallback](#createbindstatuscallback)|Crea un oggetto COM che implementa `IBindStatusCallback`.|
|[CAsyncMonikerFile::GetBindInfo](#getbindinfo)|Chiamato dalla libreria di sistema OLE per richiedere informazioni sul tipo di associazione da creare.|
|[CAsyncMonikerFile::GetPriority](#getpriority)|Chiamato dalla libreria di sistema OLE per ottenere la priorità dell'associazione.|
|[CAsyncMonikerFile::OnDataAvailable](#ondataavailable)|Chiamata eseguita per fornire i dati appena sarà disponibile al client durante le operazioni di associazione asincrona.|
|[CAsyncMonikerFile::OnLowResource](#onlowresource)|Chiamata eseguita quando le risorse sono insufficienti.|
|[CAsyncMonikerFile::OnProgress](#onprogress)|Chiamato per indicare lo stato del processo di download dati.|
|[CAsyncMonikerFile::OnStartBinding](#onstartbinding)|Chiamato durante l'avvio dell'associazione.|
|[CAsyncMonikerFile::OnStopBinding](#onstopbinding)|Chiamata eseguita quando trasferimento asincrono è stato arrestato.|

## <a name="remarks"></a>Note

Derivato da [CMonikerFile](../../mfc/reference/cmonikerfile-class.md), che a sua volta è derivato da [COleStreamFile](../../mfc/reference/colestreamfile-class.md), `CAsyncMonikerFile` Usa la [IMoniker](/windows/desktop/api/objidl/nn-objidl-imoniker) interfaccia per accedere a qualsiasi flusso di dati in modo asincrono, tra cui il caricamento dei file in modo asincrono da un URL. I file possono essere proprietà percorso dati dei controlli ActiveX.

Moniker asincroni vengono utilizzati principalmente in applicazioni abilitate per Internet e i controlli ActiveX per fornire un'interfaccia utente reattiva durante i trasferimenti di file. Un esempio tipico è l'uso di [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md) per fornire proprietà asincrona per i controlli ActiveX. Il `CDataPathProperty` oggetto ripetutamente riceverà un callback per indicare la disponibilità di nuovi dati durante il processo di scambio proprietà lunga durata.

Per altre informazioni su come usare i controlli ActiveX e moniker asincroni nelle applicazioni di Internet, vedere gli articoli seguenti:

- [Internet primi passaggi: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

- [Internet primi passaggi: Controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

`CAsyncMonikerFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="casyncmonikerfile"></a>  CAsyncMonikerFile::CAsyncMonikerFile

Costruisce un oggetto `CAsyncMonikerFile`.

```
CAsyncMonikerFile();
```

### <a name="remarks"></a>Note

Non crea il `IBindHost` interfaccia. `IBindHost` viene usato solo se si fornisce nel `Open` funzione membro.

Per una descrizione del `IBindHost` interfaccia, vedere il SDK di Windows.

##  <a name="close"></a>  CAsyncMonikerFile::Close

Chiamare questa funzione per chiudere e rilasciare tutte le risorse.

```
virtual void Close();
```

### <a name="remarks"></a>Note

Può essere chiamata su file non aperti o già chiusi.

##  <a name="createbindstatuscallback"></a>  CAsyncMonikerFile::CreateBindStatusCallback

Crea un oggetto COM che implementa `IBindStatusCallback`.

```
virtual IUnknown* CreateBindStatusCallback(IUnknown* pUnkControlling);
```

### <a name="parameters"></a>Parametri

*pUnkControlling*<br/>
Un puntatore per il controllo sconosciuto (esterna `IUnknown`) oppure NULL se non sono in uso delle aggregazioni.

### <a name="return-value"></a>Valore restituito

Se *pUnkControlling* non è NULL, la funzione restituisce un puntatore alla parte interna `IUnknown` in un nuovo oggetto COM che supporta `IBindStatusCallback`. Se `pUnkControlling` è NULL, la funzione restituisce un puntatore a un `IUnknown` in un nuovo oggetto COM che supporta `IBindStatusCallback`.

### <a name="remarks"></a>Note

`CAsyncMonikerFile` richiede un oggetto COM che implementa `IBindStatusCallback`. MFC implementa un oggetto di questo tipo, ed è aggregabile. È possibile eseguire l'override `CreateBindStatusCallback` per restituire il proprio oggetto COM. L'oggetto COM può aggregare dell'implementazione MFC chiamando `CreateBindStatusCallback` con il controllo sconosciuto dell'oggetto COM. Gli oggetti COM implementati usando il `CCmdTarget` supporto COM è possibile recuperare il controllo usando sconosciuto `CCmdTarget::GetControllingUnknown`.

In alternativa, l'oggetto COM possa delegare all'implementazione di MFC chiamando `CreateBindStatusCallback( NULL )`.

[CAsyncMonikerFile::Open](#open) chiamate `CreateBindStatusCallback`.

Per altre informazioni sull'associazione asincrona e moniker asincroni, vedere la [IBindStatusCallback](https://msdn.microsoft.com/library/ie/ms775060) interfaccia e [come associazione asincrona e lavoro archiviazione](/windows/desktop/Stg/how-asynchronous-binding-and-storage-work). Per una discussione di aggregazione, vedere [aggregazione](/windows/desktop/com/aggregation). Tutti e tre gli argomenti sono in Windows SDK.

##  <a name="getbindinfo"></a>  CAsyncMonikerFile::GetBindInfo

Chiamato dal client di un moniker asincrono per indicare il moniker asincrono come desidera associare.

```
virtual DWORD GetBindInfo() const;
```

### <a name="return-value"></a>Valore restituito

Recupera le impostazioni per `IBindStatusCallBack`. Per una descrizione del `IBindStatusCallback` interfaccia, vedere il SDK di Windows.

### <a name="remarks"></a>Note

L'implementazione predefinita imposta l'associazione in modo asincrono, utilizzare un supporto di archiviazione (un flusso) e usare il modello push di dati. Eseguire l'override di questa funzione se si desidera modificare il comportamento dell'associazione.

Uno dei motivi per eseguire questa operazione, è possibile eseguire il binding utilizzando il modello di pull dei dati anziché il modello push di dati. In un modello di pull dei dati, il client controlla l'operazione di binding e il moniker fornisce solo i dati al client quando viene letta. In un modello di push di dati, il moniker determina l'operazione di associazione asincrona e in modo continuo notifica al client ogni volta che sono disponibili nuovi dati.

##  <a name="getbinding"></a>  CAsyncMonikerFile::GetBinding

Chiamare questa funzione per recuperare un puntatore per il trasferimento asincrono di associazione.

```
IBinding* GetBinding() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore al `IBinding` interfaccia fornita quando inizia il trasferimento asincrono. Restituisce NULL se per qualsiasi motivo il trasferimento non possono essere effettuate in modo asincrono.

### <a name="remarks"></a>Note

Ciò consente di controllare il trasferimento dei dati processo tramite il `IBinding` interfacciarsi, ad esempio, con `IBinding::Abort`, `IBinding::Pause`, e `IBinding::Resume`.

Per una descrizione del `IBinding` interfaccia, vedere il SDK di Windows.

##  <a name="getformatetc"></a>  CAsyncMonikerFile::GetFormatEtc

Chiamare questa funzione per recuperare il formato dei dati nel flusso.

```
FORMATETC* GetFormatEtc() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore alla struttura di Windows [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) per il flusso attualmente aperto. Restituisce NULL se il moniker non è stato associato, se non è asincrona o se l'operazione asincrona non sia iniziato.

##  <a name="getpriority"></a>  CAsyncMonikerFile::GetPriority

Chiamato dal client di un moniker asincrono quando viene avviato il processo di associazione ricevere la priorità assegnata al thread per l'operazione di associazione.

```
virtual LONG GetPriority() const;
```

### <a name="return-value"></a>Valore restituito

La priorità in corrispondenza del quale verrà eseguito il trasferimento asincrono. Uno dei flag di priorità di thread standard: THREAD_PRIORITY_ABOVE_NORMAL THREAD_PRIORITY_BELOW_NORMAL, THREAD_PRIORITY_HIGHEST, THREAD_PRIORITY_IDLE, THREAD_PRIORITY_LOWEST, THREAD_PRIORITY_NORMAL e THREAD_PRIORITY_TIME_CRITICAL. Vedere la funzione di Windows [SetThreadPriority](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) per una descrizione di questi valori.

### <a name="remarks"></a>Note

`GetPriority` non deve essere chiamato direttamente. THREAD_PRIORITY_NORMAL viene restituito dall'implementazione predefinita.

##  <a name="ondataavailable"></a>  CAsyncMonikerFile::OnDataAvailable

Chiama un moniker asincrono `OnDataAvailable` per fornire dati al client appena sarà disponibile, associare le operazioni durante asincrona.

```
virtual void OnDataAvailable(DWORD dwSize, DWORD bscfFlag);
```

### <a name="parameters"></a>Parametri

*dwSize diverso da*<br/>
Il tempo cumulativo (in byte) disponibile a partire dall'inizio dell'associazione dati. Può essere zero, che indica che la quantità di dati non è rilevante per l'operazione o che è diventato disponibile alcuna quantità specifica.

*bscfFlag*<br/>
Valore dell'enumerazione BSCF. Può essere uno o più dei valori seguenti:

- BSCF_FIRSTDATANOTIFICATION identifica la prima chiamata a `OnDataAvailable` per un'operazione di associazione specificato.

- BSCF_INTERMEDIATEDATANOTIFICATION identifica una chiamata intermedia a `OnDataAvailable` per un'operazione di associazione.

- BSCF_LASTDATANOTIFICATION identifica l'ultima chiamata a `OnDataAvailable` per un'operazione di associazione.

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Vedere l'esempio seguente per un esempio di implementazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWinInet#5](../../mfc/codesnippet/cpp/casyncmonikerfile-class_1.cpp)]

##  <a name="onlowresource"></a>  CAsyncMonikerFile::OnLowResource

Chiamato dal moniker quando le risorse sono insufficienti.

```
virtual void OnLowResource();
```

### <a name="remarks"></a>Note

L'implementazione predefinita chiama `GetBinding( )-> Abort( )`.

##  <a name="onprogress"></a>  CAsyncMonikerFile::OnProgress

Chiamato dal moniker ripetutamente per indicare lo stato corrente di questa operazione di associazione, in genere a intervalli regolari durante un'operazione di lunga durata.

```
virtual void OnProgress(
    ULONG ulProgress,
    ULONG ulProgressMax,
    ULONG ulStatusCode,
    LPCTSTR szStatusText);
```

### <a name="parameters"></a>Parametri

*ulProgress*<br/>
Indica lo stato corrente dell'operazione di binding rispetto al valore massimo previsto indicato nel *ulProgressMax*.

*ulProgressMax*<br/>
Indica il valore massimo previsto del *ulProgress* per la durata delle chiamate a `OnProgress` per questa operazione.

*ulStatusCode*<br/>
Fornisce informazioni aggiuntive riguardanti lo stato di avanzamento dell'operazione di associazione. I valori validi vengono prelevati i `BINDSTATUS` enumerazione. Per i valori possibili, vedere la sezione Osservazioni.

*szStatusText*<br/>
Informazioni sullo stato di avanzamento corrente, in base al valore *ulStatusCode*. Per i valori possibili, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

I possibili valori per *ulStatusCode* (e il *szStatusText* per ogni valore) sono:

|||
|-|-|
|BINDSTATUS_FINDINGRESOURCE  |L'operazione di associazione sta cercando la risorsa che contiene l'oggetto o l'archiviazione a cui è associata. Il *szStatusText* fornisce il nome visualizzato della risorsa da ricercare per (ad esempio "www.microsoft.com").  |
|BINDSTATUS_CONNECTING  |L'operazione di associazione è la connessione alla risorsa che contiene l'oggetto o l'archiviazione a cui è associata. Il *szStatusText* fornisce il nome visualizzato della risorsa cui si è connessi (ad esempio, un indirizzo IP).  |
|BINDSTATUS_SENDINGREQUEST|L'operazione di associazione sta richiedendo l'oggetto o l'archiviazione a cui è associata. Il *szStatusText* fornisce il nome visualizzato dell'oggetto (ad esempio, un nome file).|
|BINDSTATUS_REDIRECTING  |L'operazione di associazione è stato reindirizzato a una posizione dati diversa. Il *szStatusText* fornisce il nome visualizzato della nuova posizione dei dati.  |
|BINDSTATUS_USINGCACHEDCOPY  |L'operazione di associazione sta recuperando l'oggetto richiesto o l'archiviazione da una copia memorizzata nella cache. Il *szStatusText* è NULL.  |
|BINDSTATUS_BEGINDOWNLOADDATA  |L'operazione di associazione ha iniziato a ricevere l'oggetto o l'archiviazione a cui è associata. Il *szStatusText* fornisce il nome visualizzato della posizione dei dati.|
|BINDSTATUS_DOWNLOADINGDATA  |L'operazione di associazione continua a ricevere l'oggetto o l'archiviazione a cui è associata. Il *szStatusText* fornisce il nome visualizzato della posizione dei dati.  |
|BINDSTATUS_ENDDOWNLOADDATA  |L'operazione di associazione ha completato la ricezione di oggetto o l'archiviazione a cui è associata. Il *szStatusText* fornisce il nome visualizzato della posizione dei dati.  |
|BINDSTATUS_CLASSIDAVAILABLE  |Un'istanza dell'oggetto a cui è associata è sufficiente per essere creata. Il *szStatusText* fornisce il CLSID del nuovo oggetto in formato stringa, consentendo al client di annullare l'operazione di associazione, se lo si desidera.  |

##  <a name="onstartbinding"></a>  CAsyncMonikerFile::OnStartBinding

Eseguire l'override di questa funzione nelle classi derivate per eseguire azioni durante l'avvio dell'associazione.

```
virtual void OnStartBinding();
```

### <a name="remarks"></a>Note

Questa funzione viene chiamata nuovamente dal moniker. L'implementazione predefinita non esegue alcuna operazione.

##  <a name="onstopbinding"></a>  CAsyncMonikerFile::OnStopBinding

Chiamato dal moniker al termine dell'operazione di associazione.

```
virtual void OnStopBinding(HRESULT hresult, LPCTSTR szError);
```

### <a name="parameters"></a>Parametri

*HRESULT*<br/>
HRESULT che è l'errore o un valore di avviso.

*szErrort*<br/>
Una stringa di caratteri che descrive l'errore.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per eseguire azioni durante il trasferimento è stato arrestato. Per impostazione predefinita, la funzione rilascia `IBinding`.

Per una descrizione del `IBinding` interfaccia, vedere il SDK di Windows.

##  <a name="open"></a>  CAsyncMonikerFile::Open

Chiamare questa funzione membro per aprire un file in modo asincrono.

```
virtual BOOL Open(
    LPCTSTR lpszURL,
    CFileException* pError = NULL);

virtual BOOL Open(
    IMoniker* pMoniker,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszURL,
    IBindHost* pBindHost,
    CFileException* pError = NULL);

virtual BOOL Open(
    IMoniker* pMoniker,
    IBindHost* pBindHost,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszURL,
    IServiceProvider* pServiceProvider,
    CFileException* pError = NULL);

virtual BOOL Open(
    IMoniker* pMoniker,
    IServiceProvider* pServiceProvider,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszURL,
    IUnknown* pUnknown,
    CFileException* pError = NULL);

virtual BOOL Open(
    IMoniker* pMoniker,
    IUnknown* pUnknown,
    CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*lpszURL*<br/>
Puntatore al file da aprire in modo asincrono. Il file può essere qualsiasi URL o nome file valido.

*pError*<br/>
Puntatore alle eccezioni del file. In caso di errore, verrà impostato per la causa.

*pMoniker*<br/>
Un puntatore all'interfaccia di moniker asincrono `IMoniker`, un preciso moniker che rappresenta la combinazione del moniker del documento, che è possibile recuperare con `IOleClientSite::GetMoniker(OLEWHICHMK_CONTAINER)`e un moniker creato dal nome del percorso. Il controllo può usare il moniker per l'associazione, ma questo non è il moniker che deve salvare il controllo.

*pBindHost*<br/>
Un puntatore al `IBindHost` interfaccia che verrà utilizzato per creare il moniker da un percorso potenzialmente relativo. Se l'host di binding non è valido o non fornisce un moniker, valore predefinito è la chiamata `Open(lpszFileName,pError)`. Per una descrizione del `IBindHost` interfaccia, vedere il SDK di Windows.

*probabilmente pServiceProvider*<br/>
Puntatore all'interfaccia `IServiceProvider`. Se il provider del servizio non è valido o non riesce a fornire il servizio per `IBindHost`, per impostazione predefinita la chiamata `Open(lpszFileName,pError)`.

*pUnknown*<br/>
Puntatore all'interfaccia `IUnknown`. Se `IServiceProvider` viene trovato, le query della funzione per `IBindHost`. Se il provider del servizio non è valido o non riesce a fornire il servizio per `IBindHost`, per impostazione predefinita la chiamata `Open(lpszFileName,pError)`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il file viene aperto correttamente; in caso contrario 0.

### <a name="remarks"></a>Note

Questa chiamata avvia il processo di associazione.

È possibile usare un URL o un nome file per il *lpszURL* parametro. Ad esempio:

[!code-cpp[NVC_MFCWinInet#6](../../mfc/codesnippet/cpp/casyncmonikerfile-class_2.cpp)]

\- oppure -

[!code-cpp[NVC_MFCWinInet#7](../../mfc/codesnippet/cpp/casyncmonikerfile-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)<br/>
[Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)
