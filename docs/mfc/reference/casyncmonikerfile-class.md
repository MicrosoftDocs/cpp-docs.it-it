---
description: 'Altre informazioni su: classe CAsyncMonikerFile'
title: Classe CAsyncMonikerFile
ms.date: 11/04/2016
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
ms.openlocfilehash: 559ffd5ed3a8b7100d9901dc70fe4f5349c05f7f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343529"
---
# <a name="casyncmonikerfile-class"></a>Classe CAsyncMonikerFile

Fornisce la funzionalità per l'utilizzo di moniker asincroni in controlli ActiveX (precedentemente controlli OLE).

## <a name="syntax"></a>Sintassi

```
class CAsyncMonikerFile : public CMonikerFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAsyncMonikerFile:: CAsyncMonikerFile](#casyncmonikerfile)|Costruisce un oggetto `CAsyncMonikerFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAsyncMonikerFile:: Close](#close)|Chiude e rilascia tutte le risorse.|
|[CAsyncMonikerFile:: GetBinding](#getbinding)|Recupera un puntatore al binding di trasferimento asincrono.|
|[CAsyncMonikerFile:: GetFormatEtc](#getformatetc)|Recupera il formato dei dati nel flusso.|
|[CAsyncMonikerFile:: Open](#open)|Apre un file in modo asincrono.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAsyncMonikerFile:: CreateBindStatusCallback](#createbindstatuscallback)|Crea un oggetto COM che implementa `IBindStatusCallback` .|
|[CAsyncMonikerFile:: GetBindInfo.](#getbindinfo)|Chiamato dalla libreria di sistema OLE per richiedere informazioni sul tipo di binding da creare.|
|[CAsyncMonikerFile:: GetPriority](#getpriority)|Chiamato dalla libreria di sistema OLE per ottenere la priorità dell'associazione.|
|[CAsyncMonikerFile:: OnDataAvailable](#ondataavailable)|Chiamato per fornire i dati che diventano disponibili per il client durante le operazioni di binding asincrono.|
|[CAsyncMonikerFile:: OnLowResource](#onlowresource)|Chiamato quando le risorse sono insufficienti.|
|[CAsyncMonikerFile:: OnProgress](#onprogress)|Chiamato per indicare lo stato di avanzamento del processo di download dei dati.|
|[CAsyncMonikerFile:: OnStart](#onstartbinding)|Chiamato quando l'associazione viene avviata.|
|[CAsyncMonikerFile:: onstopy](#onstopbinding)|Chiamato quando viene arrestato il trasferimento asincrono.|

## <a name="remarks"></a>Commenti

Derivato da [CMonikerFile](../../mfc/reference/cmonikerfile-class.md), che a sua volta deriva da [COleStreamFile](../../mfc/reference/colestreamfile-class.md), `CAsyncMonikerFile` Usa l'interfaccia [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) per accedere ai flussi di dati in modo asincrono, incluso il caricamento asincrono dei file da un URL. I file possono essere proprietà del percorso dati dei controlli ActiveX.

I moniker asincroni vengono utilizzati principalmente in applicazioni abilitate per Internet e controlli ActiveX per fornire un'interfaccia utente reattiva durante i trasferimenti di file. Un esempio principale è l'uso di [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md) per fornire proprietà asincrone per i controlli ActiveX. L' `CDataPathProperty` oggetto otterrà ripetutamente un callback per indicare la disponibilità dei nuovi dati durante un processo di scambio di proprietà lungo.

Per ulteriori informazioni sull'utilizzo di moniker asincroni e controlli ActiveX nelle applicazioni Internet, vedere gli articoli seguenti:

- [Primi passi per Internet: moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

- [Primi passi per Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

`CAsyncMonikerFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="casyncmonikerfilecasyncmonikerfile"></a><a name="casyncmonikerfile"></a> CAsyncMonikerFile:: CAsyncMonikerFile

Costruisce un oggetto `CAsyncMonikerFile`.

```
CAsyncMonikerFile();
```

### <a name="remarks"></a>Commenti

Non crea l' `IBindHost` interfaccia. `IBindHost` viene utilizzato solo se viene fornito nella `Open` funzione membro.

Per una descrizione dell' `IBindHost` interfaccia, vedere la Windows SDK.

## <a name="casyncmonikerfileclose"></a><a name="close"></a> CAsyncMonikerFile:: Close

Chiamare questa funzione per chiudere e rilasciare tutte le risorse.

```
virtual void Close();
```

### <a name="remarks"></a>Commenti

Può essere chiamato su file non aperti o già chiusi.

## <a name="casyncmonikerfilecreatebindstatuscallback"></a><a name="createbindstatuscallback"></a> CAsyncMonikerFile:: CreateBindStatusCallback

Crea un oggetto COM che implementa `IBindStatusCallback` .

```
virtual IUnknown* CreateBindStatusCallback(IUnknown* pUnkControlling);
```

### <a name="parameters"></a>Parametri

*pUnkControlling*<br/>
Puntatore al controllo sconosciuto (l'oggetto esterno `IUnknown` ) o null se non viene utilizzata l'aggregazione.

### <a name="return-value"></a>Valore restituito

Se *pUnkControlling* non è null, la funzione restituisce un puntatore all'interno di `IUnknown` un nuovo oggetto com che supporta `IBindStatusCallback` . Se `pUnkControlling` è null, la funzione restituisce un puntatore a un `IUnknown` oggetto su un nuovo oggetto com che supporta `IBindStatusCallback` .

### <a name="remarks"></a>Commenti

`CAsyncMonikerFile` richiede un oggetto COM che implementi `IBindStatusCallback` . MFC implementa un oggetto di questo tipo ed è aggregabile. È possibile eseguire l'override `CreateBindStatusCallback` di per restituire il proprio oggetto com. L'oggetto COM può aggregare l'implementazione di MFC chiamando `CreateBindStatusCallback` con il controllo sconosciuto dell'oggetto com. Gli oggetti COM implementati utilizzando il `CCmdTarget` supporto com possono recuperare il controllo sconosciuto utilizzando `CCmdTarget::GetControllingUnknown` .

In alternativa, l'oggetto COM può delegare all'implementazione di MFC chiamando `CreateBindStatusCallback( NULL )` .

Chiamate a [CAsyncMonikerFile:: Open](#open) `CreateBindStatusCallback` .

Per ulteriori informazioni sui moniker asincroni e sul binding asincrono, vedere l'interfaccia [IBindStatusCallback](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/ms775060\(v=vs.85\)) e il [funzionamento del binding asincrono e dell'archiviazione](/windows/win32/Stg/how-asynchronous-binding-and-storage-work). Per informazioni sull'aggregazione, vedere [aggregazione](/windows/win32/com/aggregation). Tutti e tre gli argomenti sono inclusi nel Windows SDK.

## <a name="casyncmonikerfilegetbindinfo"></a><a name="getbindinfo"></a> CAsyncMonikerFile:: GetBindInfo.

Chiamata eseguita dal client di un moniker asincrono per indicare al moniker asincrono come si desidera eseguire l'associazione.

```
virtual DWORD GetBindInfo() const;
```

### <a name="return-value"></a>Valore restituito

Recupera le impostazioni per `IBindStatusCallBack` . Per una descrizione dell' `IBindStatusCallback` interfaccia, vedere la Windows SDK.

### <a name="remarks"></a>Commenti

L'implementazione predefinita imposta l'associazione come asincrona, per l'utilizzo di un supporto di archiviazione (un flusso) e per l'utilizzo del modello di push dei dati. Eseguire l'override di questa funzione se si desidera modificare il comportamento dell'associazione.

Uno dei motivi per eseguire questa operazione consiste nell'eseguire il binding usando il modello di pull dei dati anziché il modello di push dei dati. In un modello di pull dei dati, il client guida l'operazione di associazione e il moniker fornisce solo i dati al client quando viene letto. In un modello di push dei dati, il moniker guida l'operazione di associazione asincrona e notifica continuamente al client ogni volta che sono disponibili nuovi dati.

## <a name="casyncmonikerfilegetbinding"></a><a name="getbinding"></a> CAsyncMonikerFile:: GetBinding

Chiamare questa funzione per recuperare un puntatore al binding di trasferimento asincrono.

```
IBinding* GetBinding() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `IBinding` interfaccia fornita all'inizio del trasferimento asincrono. Restituisce NULL se per qualsiasi motivo non è possibile eseguire il trasferimento in modo asincrono.

### <a name="remarks"></a>Commenti

In questo modo è possibile controllare il processo di trasferimento dei dati tramite l' `IBinding` interfaccia, ad esempio con `IBinding::Abort` , `IBinding::Pause` e `IBinding::Resume` .

Per una descrizione dell' `IBinding` interfaccia, vedere la Windows SDK.

## <a name="casyncmonikerfilegetformatetc"></a><a name="getformatetc"></a> CAsyncMonikerFile:: GetFormatEtc

Chiamare questa funzione per recuperare il formato dei dati nel flusso.

```
FORMATETC* GetFormatEtc() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla struttura di Windows [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) per il flusso attualmente aperto. Restituisce NULL se il moniker non è stato associato, se non è asincrono, oppure se l'operazione asincrona non è iniziata.

## <a name="casyncmonikerfilegetpriority"></a><a name="getpriority"></a> CAsyncMonikerFile:: GetPriority

Chiamato dal client di un moniker asincrono perché il processo di associazione inizia a ricevere la priorità assegnata al thread per l'operazione di associazione.

```
virtual LONG GetPriority() const;
```

### <a name="return-value"></a>Valore restituito

Priorità con cui verrà eseguita la trasmissione asincrona. Uno dei flag di priorità di thread standard: THREAD_PRIORITY_ABOVE_NORMAL, THREAD_PRIORITY_BELOW_NORMAL, THREAD_PRIORITY_HIGHEST, THREAD_PRIORITY_IDLE, THREAD_PRIORITY_LOWEST, THREAD_PRIORITY_NORMAL e THREAD_PRIORITY_TIME_CRITICAL. Per una descrizione di questi valori, vedere la funzione [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) di Windows.

### <a name="remarks"></a>Commenti

`GetPriority` non deve essere chiamato direttamente. THREAD_PRIORITY_NORMAL viene restituito dall'implementazione predefinita.

## <a name="casyncmonikerfileondataavailable"></a><a name="ondataavailable"></a> CAsyncMonikerFile:: OnDataAvailable

Un moniker asincrono chiama `OnDataAvailable` per fornire i dati al client quando diventa disponibile, durante le operazioni di binding asincrono.

```
virtual void OnDataAvailable(DWORD dwSize, DWORD bscfFlag);
```

### <a name="parameters"></a>Parametri

*dwSize*<br/>
Quantità cumulativa (in byte) dei dati disponibili dall'inizio dell'associazione. Può essere zero, che indica che la quantità di dati non è pertinente per l'operazione o che non è stata resa disponibile alcun importo specifico.

*bscfFlag*<br/>
Valore dell'enumerazione BSCF. Può essere uno o più dei valori seguenti:

- BSCF_FIRSTDATANOTIFICATION identifica la prima chiamata a `OnDataAvailable` per un'operazione di associazione specificata.

- BSCF_INTERMEDIATEDATANOTIFICATION identifica una chiamata intermedia a `OnDataAvailable` per un'operazione di associazione.

- BSCF_LASTDATANOTIFICATION identifica l'ultima chiamata a `OnDataAvailable` per un'operazione di associazione.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Per un'implementazione di esempio, vedere l'esempio seguente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWinInet#5](../../mfc/codesnippet/cpp/casyncmonikerfile-class_1.cpp)]

## <a name="casyncmonikerfileonlowresource"></a><a name="onlowresource"></a> CAsyncMonikerFile:: OnLowResource

Chiamato dal moniker quando le risorse sono insufficienti.

```
virtual void OnLowResource();
```

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama `GetBinding( )-> Abort( )` .

## <a name="casyncmonikerfileonprogress"></a><a name="onprogress"></a> CAsyncMonikerFile:: OnProgress

Chiamato dal moniker ripetutamente per indicare lo stato corrente di questa operazione di associazione, in genere a intervalli ragionevoli durante un'operazione di lunga durata.

```
virtual void OnProgress(
    ULONG ulProgress,
    ULONG ulProgressMax,
    ULONG ulStatusCode,
    LPCTSTR szStatusText);
```

### <a name="parameters"></a>Parametri

*ulProgress*<br/>
Indica lo stato di avanzamento corrente dell'operazione di binding rispetto al valore massimo previsto indicato in *ulProgressMax*.

*ulProgressMax*<br/>
Indica il valore massimo previsto di *ulProgress* per la durata delle chiamate a `OnProgress` per questa operazione.

*ulStatusCode*<br/>
Fornisce informazioni aggiuntive relative allo stato di avanzamento dell'operazione di associazione. I valori validi sono ricavati dall' `BINDSTATUS` enumerazione. Per i valori possibili, vedere Note.

*szStatusText*<br/>
Informazioni sullo stato di avanzamento corrente, a seconda del valore di *ulStatusCode*. Per i valori possibili, vedere Note.

### <a name="remarks"></a>Commenti

I valori possibili per *ulStatusCode* (e *szStatusText* per ogni valore) sono:

| Valore | Description |
|--|--|
| BINDSTATUS_FINDINGRESOURCE | L'operazione di associazione sta individuando la risorsa che include l'oggetto o l'archiviazione a cui è associata. *SzStatusText* fornisce il nome visualizzato della risorsa da cercare, ad esempio "www.Microsoft.com". |
| BINDSTATUS_CONNECTING | L'operazione di binding si connette alla risorsa che include l'oggetto o l'archiviazione a cui è associata. *SzStatusText* fornisce il nome visualizzato della risorsa a cui si è connessi, ad esempio un indirizzo IP. |
| BINDSTATUS_SENDINGREQUEST | L'operazione di binding richiede l'oggetto o l'archiviazione a cui viene eseguita l'associazione. *SzStatusText* fornisce il nome visualizzato dell'oggetto, ad esempio un nome di file. |
| BINDSTATUS_REDIRECTING | L'operazione di associazione è stata reindirizzata a un percorso dati diverso. *SzStatusText* fornisce il nome visualizzato della nuova posizione dei dati. |
| BINDSTATUS_USINGCACHEDCOPY | L'operazione di associazione sta recuperando l'oggetto o l'archiviazione richiesta da una copia memorizzata nella cache. *SzStatusText* è null. |
| BINDSTATUS_BEGINDOWNLOADDATA | L'operazione di associazione ha iniziato a ricevere l'oggetto o l'archiviazione a cui è associata. *SzStatusText* fornisce il nome visualizzato della posizione dei dati. |
| BINDSTATUS_DOWNLOADINGDATA | L'operazione di associazione continua a ricevere l'oggetto o l'archiviazione a cui viene associato. *SzStatusText* fornisce il nome visualizzato della posizione dei dati. |
| BINDSTATUS_ENDDOWNLOADDATA | L'operazione di associazione ha terminato di ricevere l'oggetto o l'archiviazione a cui è associata. *SzStatusText* fornisce il nome visualizzato della posizione dei dati. |
| BINDSTATUS_CLASSIDAVAILABLE | Un'istanza dell'oggetto a cui viene associato sta per essere creata. *SzStatusText* fornisce il CLSID del nuovo oggetto in formato stringa, consentendo al client di annullare l'operazione di associazione, se lo si desidera. |

## <a name="casyncmonikerfileonstartbinding"></a><a name="onstartbinding"></a> CAsyncMonikerFile:: OnStart

Eseguire l'override di questa funzione nelle classi derivate per eseguire azioni all'avvio dell'associazione.

```
virtual void OnStartBinding();
```

### <a name="remarks"></a>Commenti

Questa funzione viene richiamata dal moniker. L'implementazione predefinita non esegue alcuna operazione.

## <a name="casyncmonikerfileonstopbinding"></a><a name="onstopbinding"></a> CAsyncMonikerFile:: onstopy

Chiamato dal moniker alla fine dell'operazione di associazione.

```
virtual void OnStopBinding(HRESULT hresult, LPCTSTR szError);
```

### <a name="parameters"></a>Parametri

*HRESULT*<br/>
HRESULT che rappresenta il valore di errore o di avviso.

*szErrort*<br/>
Stringa di caratteri che descrive l'errore.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per eseguire azioni quando il trasferimento viene interrotto. Per impostazione predefinita, la funzione rilascia `IBinding` .

Per una descrizione dell' `IBinding` interfaccia, vedere la Windows SDK.

## <a name="casyncmonikerfileopen"></a><a name="open"></a> CAsyncMonikerFile:: Open

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
Puntatore alle eccezioni del file. In caso di errore, verrà impostato sulla ragione.

*pMoniker*<br/>
Puntatore all'interfaccia del moniker asincrono `IMoniker` , un moniker preciso che corrisponde alla combinazione del moniker del documento, che è possibile recuperare con `IOleClientSite::GetMoniker(OLEWHICHMK_CONTAINER)` e un moniker creato dal nome del percorso. Il controllo può utilizzare questo moniker per l'associazione, ma non è il moniker che deve essere salvato dal controllo.

*pBindHost*<br/>
Puntatore all' `IBindHost` interfaccia che verrà utilizzata per creare il moniker da un percorso potenzialmente relativo. Se l'host di binding non è valido o non fornisce un moniker, il valore predefinito della chiamata è `Open(lpszFileName,pError)` . Per una descrizione dell' `IBindHost` interfaccia, vedere la Windows SDK.

*pServiceProvider*<br/>
Puntatore all'interfaccia `IServiceProvider`. Se il provider di servizi non è valido o non è in grado di fornire il servizio per `IBindHost` , il valore predefinito della chiamata è `Open(lpszFileName,pError)` .

*pUnknown*<br/>
Puntatore all'interfaccia `IUnknown`. Se `IServiceProvider` viene trovato, la funzione esegue una query per `IBindHost` . Se il provider di servizi non è valido o non è in grado di fornire il servizio per `IBindHost` , il valore predefinito della chiamata è `Open(lpszFileName,pError)` .

### <a name="return-value"></a>Valore restituito

Diverso da zero se il file viene aperto correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa chiamata avvia il processo di associazione.

È possibile usare un URL o un nome file per il parametro *lpszURL* . Ad esempio:

[!code-cpp[NVC_MFCWinInet#6](../../mfc/codesnippet/cpp/casyncmonikerfile-class_2.cpp)]

\- - oppure -

[!code-cpp[NVC_MFCWinInet#7](../../mfc/codesnippet/cpp/casyncmonikerfile-class_3.cpp)]

## <a name="see-also"></a>Vedi anche

[Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)<br/>
[Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)
