---
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
ms.openlocfilehash: 57ab463445f249b4e9393f19af103b7588962d5e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377002"
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
|[CAsyncMonikerFile::CAsyncMonikerFile (File)CAsyncMonikerFile::CAsyncMonikerFile](#casyncmonikerfile)|Costruisce un oggetto `CAsyncMonikerFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncMonikerFile::Close](#close)|Chiude e rilascia tutte le risorse.|
|[CAsyncMonikerFile::GetBinding](#getbinding)|Recupera un puntatore all'associazione di trasferimento asincrono.|
|[CAsyncMonikerFile::GetFormatEtc](#getformatetc)|Recupera il formato dei dati nel flusso.|
|[CAsyncMonikerFile::Open](#open)|Apre un file in modo asincrono.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncMonikerFile::CreateBindStatusCallback](#createbindstatuscallback)|Crea un oggetto `IBindStatusCallback`COM che implementa .|
|[CAsyncMonikerFile::GetBindInfo](#getbindinfo)|Chiamato dalla libreria di sistema OLE per richiedere informazioni sul tipo di associazione da creare.|
|[CAsyncMonikerFile::GetPriority](#getpriority)|Chiamato dalla libreria di sistema OLE per ottenere la priorità dell'associazione.|
|[CAsyncMonikerFile::OnDataAvailable](#ondataavailable)|Chiamato per fornire dati non appena diventano disponibili per il client durante le operazioni di associazione asincrona.|
|[CAsyncMonikerFile::OnLowResource](#onlowresource)|Chiamato quando le risorse sono basse.|
|[CAsyncMonikerFile::OnProgress](#onprogress)|Chiamato per indicare lo stato di avanzamento del processo di download dei dati.|
|[CAsyncMonikerFile::OnStartBinding](#onstartbinding)|Chiamato durante l'avvio dell'associazione.|
|[CAsyncMonikerFile::OnStopBinding](#onstopbinding)|Chiamato quando il trasferimento asincrono viene arrestato.|

## <a name="remarks"></a>Osservazioni

Derivata da [CMonikerFile](../../mfc/reference/cmonikerfile-class.md), che a sua volta `CAsyncMonikerFile` deriva da [COleStreamFile](../../mfc/reference/colestreamfile-class.md), utilizza l'interfaccia [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) per accedere a qualsiasi flusso di dati in modo asincrono, incluso il caricamento asincrono dei file da un URL. I file possono essere proprietà datapath dei controlli ActiveX.

I moniker asincroni vengono utilizzati principalmente nelle applicazioni abilitate per Internet e nei controlli ActiveX per fornire un'interfaccia utente reattiva durante i trasferimenti di file. Un primo esempio è l'uso di [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md) per fornire proprietà asincrone per i controlli ActiveX. L'oggetto `CDataPathProperty` otterrà ripetutamente un callback per indicare la disponibilità di nuovi dati durante un lungo processo di scambio di proprietà.

Per ulteriori informazioni su come utilizzare moniker asincroni e controlli ActiveX nelle applicazioni Internet, vedere i seguenti articoli:

- [Primi passi su Internet: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

- [Primi passi su Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

`CAsyncMonikerFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="casyncmonikerfilecasyncmonikerfile"></a><a name="casyncmonikerfile"></a>CAsyncMonikerFile::CAsyncMonikerFile (File)CAsyncMonikerFile::CAsyncMonikerFile

Costruisce un oggetto `CAsyncMonikerFile`.

```
CAsyncMonikerFile();
```

### <a name="remarks"></a>Osservazioni

Non crea l'interfaccia. `IBindHost` `IBindHost`viene utilizzato solo se viene `Open` fornito nella funzione membro.

Per una descrizione `IBindHost` dell'interfaccia, vedere Windows SDK.

## <a name="casyncmonikerfileclose"></a><a name="close"></a>CAsyncMonikerFile::Close

Chiamare questa funzione per chiudere e rilasciare tutte le risorse.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Può essere chiamato su file non aperti o già chiusi.

## <a name="casyncmonikerfilecreatebindstatuscallback"></a><a name="createbindstatuscallback"></a>CAsyncMonikerFile::CreateBindStatusCallback

Crea un oggetto `IBindStatusCallback`COM che implementa .

```
virtual IUnknown* CreateBindStatusCallback(IUnknown* pUnkControlling);
```

### <a name="parameters"></a>Parametri

*pUnkControlling (pUnkControlling)*<br/>
Puntatore all'oggetto che `IUnknown`controlla unknown (esterno ) o NULL se non viene utilizzata l'aggregazione.

### <a name="return-value"></a>Valore restituito

Se *pUnkControlling* non è NULL, la funzione `IUnknown` restituisce un `IBindStatusCallback`puntatore all'interno su un nuovo oggetto COM che supporta . Se `pUnkControlling` è NULL, la funzione `IUnknown` restituisce un puntatore a un puntatore su un nuovo oggetto COM che supporta `IBindStatusCallback`.

### <a name="remarks"></a>Osservazioni

`CAsyncMonikerFile`richiede un oggetto `IBindStatusCallback`COM che implementa . MFC implementa un oggetto di questo tipo ed è aggregabile. È possibile `CreateBindStatusCallback` eseguire l'override per restituire il proprio oggetto COM. L'oggetto COM può aggregare `CreateBindStatusCallback` l'implementazione di MFC chiamando con il controllo sconosciuto dell'oggetto COM. Gli oggetti COM `CCmdTarget` implementati utilizzando il `CCmdTarget::GetControllingUnknown`supporto COM possono recuperare il controllo sconosciuto utilizzando .

In alternativa, l'oggetto COM può delegare `CreateBindStatusCallback( NULL )`all'implementazione di MFC chiamando .

[CAsyncMonikerFile::Chiamate](#open) `CreateBindStatusCallback`di apertura .

Per ulteriori informazioni sui moniker asincroni e sull'associazione asincrona, vedere l'interfaccia [IBindStatusCallback](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/ms775060\(v=vs.85\)) e [Funzionamento dell'associazione asincrona e dell'archiviazione](/windows/win32/Stg/how-asynchronous-binding-and-storage-work). Per una descrizione dell'aggregazione, vedere [Aggregazione](/windows/win32/com/aggregation). Tutti e tre gli argomenti sono disponibili in Windows SDK.

## <a name="casyncmonikerfilegetbindinfo"></a><a name="getbindinfo"></a>CAsyncMonikerFile::GetBindInfo

Chiamato dal client di un moniker asincrono per indicare al moniker asincrono come si vuole associare.

```
virtual DWORD GetBindInfo() const;
```

### <a name="return-value"></a>Valore restituito

Recupera le impostazioni `IBindStatusCallBack`per . Per una descrizione `IBindStatusCallback` dell'interfaccia, vedere Windows SDK.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita imposta l'associazione come asincrona, per usare un supporto di archiviazione (un flusso) e usare il modello di push dei dati. Eseguire l'override di questa funzione se si desidera modificare il comportamento dell'associazione.

Un motivo per eseguire questa operazione potrebbe essere quello di eseguire l'associazione utilizzando il modello di pull dei dati anziché il modello di push dei dati. In un modello di pull dei dati, il client guida l'operazione di associazione e il moniker fornisce i dati al client solo quando viene letto. In un modello di push dei dati, il moniker guida l'operazione di associazione asincrona e invia continuamente una notifica al client ogni volta che sono disponibili nuovi dati.

## <a name="casyncmonikerfilegetbinding"></a><a name="getbinding"></a>CAsyncMonikerFile::GetBinding

Chiamare questa funzione per recuperare un puntatore all'associazione di trasferimento asincrono.

```
IBinding* GetBinding() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia fornita all'inizio `IBinding` del trasferimento asincrono. Restituisce NULL se per qualsiasi motivo il trasferimento non può essere effettuato in modo asincrono.

### <a name="remarks"></a>Osservazioni

In questo modo è possibile controllare `IBinding` il processo di `IBinding::Abort` `IBinding::Pause`trasferimento `IBinding::Resume`dei dati tramite l'interfaccia, ad esempio con , e .

Per una descrizione `IBinding` dell'interfaccia, vedere Windows SDK.

## <a name="casyncmonikerfilegetformatetc"></a><a name="getformatetc"></a>CAsyncMonikerFile::GetFormatEtc

Chiamare questa funzione per recuperare il formato dei dati nel flusso.

```
FORMATETC* GetFormatEtc() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla struttura di Windows [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) per il flusso attualmente aperto. Restituisce NULL se il moniker non è stato associato, se non è asincrono o se l'operazione asincrona non è stata avviata.

## <a name="casyncmonikerfilegetpriority"></a><a name="getpriority"></a>CAsyncMonikerFile::GetPriority

Chiamato dal client di un moniker asincrono quando il processo di associazione inizia a ricevere la priorità assegnata al thread per l'operazione di associazione.

```
virtual LONG GetPriority() const;
```

### <a name="return-value"></a>Valore restituito

Priorità con cui avrà luogo il trasferimento asincrono. Uno dei flag di priorità del thread standard: THREAD_PRIORITY_ABOVE_NORMAL, THREAD_PRIORITY_BELOW_NORMAL, THREAD_PRIORITY_HIGHEST, THREAD_PRIORITY_IDLE, THREAD_PRIORITY_LOWEST, THREAD_PRIORITY_NORMAL e THREAD_PRIORITY_TIME_CRITICAL. Vedere la funzione di Windows [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) per una descrizione di questi valori.

### <a name="remarks"></a>Osservazioni

`GetPriority`non deve essere chiamato direttamente. THREAD_PRIORITY_NORMAL viene restituito dall'implementazione predefinita.

## <a name="casyncmonikerfileondataavailable"></a><a name="ondataavailable"></a>CAsyncMonikerFile::OnDataAvailable

Un moniker `OnDataAvailable` asincrono chiama per fornire dati al client non appena diventa disponibile, durante le operazioni di associazione asincrone.

```
virtual void OnDataAvailable(DWORD dwSize, DWORD bscfFlag);
```

### <a name="parameters"></a>Parametri

*dwSize (Dimensioni dwSize)*<br/>
Quantità cumulativa (in byte) di dati disponibili dall'inizio dell'associazione. Può essere zero, a indicare che la quantità di dati non è rilevante per l'operazione o che non è stato reso disponibile alcun importo specifico.

*bscfFlag (informazioni in base al gruppo)*<br/>
Valore di enumerazione BSCF. Può essere uno o più dei seguenti valori:

- BSCF_FIRSTDATANOTIFICATION Identifica la `OnDataAvailable` prima chiamata a per una determinata operazione di associazione.

- BSCF_INTERMEDIATEDATANOTIFICATION Identifica una chiamata `OnDataAvailable` intermedia a per un'operazione di associazione.

- BSCF_LASTDATANOTIFICATION Identifica l'ultima chiamata a `OnDataAvailable` per un'operazione di associazione.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Vedere l'esempio seguente per un'implementazione di esempio.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWinInet#5](../../mfc/codesnippet/cpp/casyncmonikerfile-class_1.cpp)]

## <a name="casyncmonikerfileonlowresource"></a><a name="onlowresource"></a>CAsyncMonikerFile::OnLowResource

Chiamato dal moniker quando le risorse sono basse.

```
virtual void OnLowResource();
```

### <a name="remarks"></a>Osservazioni

L'implementazione `GetBinding( )-> Abort( )`predefinita chiama .

## <a name="casyncmonikerfileonprogress"></a><a name="onprogress"></a>CAsyncMonikerFile::OnProgress

Chiamato ripetutamente dal moniker per indicare lo stato corrente di questa operazione di associazione, in genere a intervalli ragionevoli durante un'operazione lunga.

```
virtual void OnProgress(
    ULONG ulProgress,
    ULONG ulProgressMax,
    ULONG ulStatusCode,
    LPCTSTR szStatusText);
```

### <a name="parameters"></a>Parametri

*ulProgresso*<br/>
Indica lo stato corrente dell'operazione di binding rispetto al massimo previsto indicato in *ulProgressMax*.

*ulProgressMax*<br/>
Indica il valore massimo previsto di *ulProgress* `OnProgress` per la durata delle chiamate per questa operazione.

*ulStatusCode (codice di stato)*<br/>
Fornisce informazioni aggiuntive sullo stato dell'operazione di associazione. I valori validi `BINDSTATUS` vengono ricavati dall'enumerazione. Per i valori possibili, vedere Note.

*Testodistatoz szStatus*<br/>
Informazioni sullo stato corrente, a seconda del valore di *ulStatusCode*. Per i valori possibili, vedere Note.

### <a name="remarks"></a>Osservazioni

I valori possibili per *ulStatusCode* (e *szStatusText* per ogni valore) sono:

|||
|-|-|
|BINDSTATUS_FINDINGRESOURCE  |L'operazione di associazione sta trovando la risorsa che contiene l'oggetto o l'archiviazione a cui è associato. *szStatusText* fornisce il nome visualizzato della risorsa da cercare (ad esempio, "www.microsoft.com").  |
|BINDSTATUS_CONNECTING  |L'operazione di associazione si connette alla risorsa che contiene l'oggetto o l'archiviazione a cui è associato. *szStatusText* fornisce il nome visualizzato della risorsa a cui si sta connettendo (ad esempio, un indirizzo IP).  |
|BINDSTATUS_SENDINGREQUEST|L'operazione di associazione richiede l'oggetto o l'archiviazione a cui è associato. *szStatusText* fornisce il nome visualizzato dell'oggetto (ad esempio, un nome di file).|
|BINDSTATUS_REDIRECTING  |L'operazione di associazione è stata reindirizzata a un percorso dati diverso. *szStatusText* fornisce il nome visualizzato del nuovo percorso dati.  |
|BINDSTATUS_USINGCACHEDCOPY  |L'operazione di associazione sta recuperando l'oggetto o l'archiviazione richiesto da una copia memorizzata nella cache. Il *szStatusText* è NULL.  |
|BINDSTATUS_BEGINDOWNLOADDATA  |L'operazione di associazione ha iniziato a ricevere l'oggetto o l'archiviazione a cui è associato. *szStatusText* fornisce il nome visualizzato del percorso dei dati.|
|BINDSTATUS_DOWNLOADINGDATA  |L'operazione di associazione continua a ricevere l'oggetto o l'archiviazione a cui è associata. *szStatusText* fornisce il nome visualizzato del percorso dei dati.  |
|BINDSTATUS_ENDDOWNLOADDATA  |L'operazione di associazione ha terminato di ricevere l'oggetto o l'archiviazione a cui è associato. *szStatusText* fornisce il nome visualizzato del percorso dei dati.  |
|BINDSTATUS_CLASSIDAVAILABLE  |Un'istanza dell'oggetto a cui viene associata sta per essere creata. *szStatusText* fornisce il CLSID del nuovo oggetto in formato stringa, consentendo al client di annullare l'operazione di associazione, se lo si desidera.  |

## <a name="casyncmonikerfileonstartbinding"></a><a name="onstartbinding"></a>CAsyncMonikerFile::OnStartBinding

Eseguire l'override di questa funzione nelle classi derivate per eseguire azioni durante l'avvio dell'associazione.

```
virtual void OnStartBinding();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene richiamata dal moniker. L'implementazione predefinita non esegue alcuna operazione.

## <a name="casyncmonikerfileonstopbinding"></a><a name="onstopbinding"></a>CAsyncMonikerFile::OnStopBinding

Chiamato dal moniker alla fine dell'operazione di associazione.

```
virtual void OnStopBinding(HRESULT hresult, LPCTSTR szError);
```

### <a name="parameters"></a>Parametri

*Hresult*<br/>
HRESULT che è il valore di errore o avviso.

*szErrort (errore)*<br/>
Stringa di caratteri che descrive l'errore.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per eseguire azioni quando il trasferimento viene interrotto. Per impostazione predefinita, la funzione rilascia `IBinding`.

Per una descrizione `IBinding` dell'interfaccia, vedere Windows SDK.

## <a name="casyncmonikerfileopen"></a><a name="open"></a>CAsyncMonikerFile::Open

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

*URL lpsz*<br/>
Puntatore al file da aprire in modo asincrono. Il file può essere qualsiasi URL o nome file valido.

*pError*<br/>
Puntatore alle eccezioni del file. In caso di errore, verrà impostato sulla causa.

*pMoniker*<br/>
Un puntatore all'interfaccia `IMoniker`del moniker asincrona , un moniker preciso che è la `IOleClientSite::GetMoniker(OLEWHICHMK_CONTAINER)`combinazione del moniker del documento, che è possibile recuperare con , e un moniker creato dal nome del percorso. Il controllo può utilizzare questo moniker per l'associazione, ma questo non è il moniker che il controllo deve salvare.

*pBindHost*<br/>
Puntatore all'interfaccia `IBindHost` che verrà utilizzata per creare il moniker da un nome di percorso potenzialmente relativo. Se l'host di associazione non è valido o non `Open(lpszFileName,pError)`fornisce un moniker, il valore predefinito della chiamata è . Per una descrizione `IBindHost` dell'interfaccia, vedere Windows SDK.

*pServiceProvider (informazioni in stato in stato in stato*<br/>
Puntatore all'interfaccia `IServiceProvider`. Se il provider di servizi non è `IBindHost`valido o non `Open(lpszFileName,pError)`riesce a fornire il servizio per , la chiamata viene impostato su .

*pSconosciuto*<br/>
Puntatore all'interfaccia `IUnknown`. Se `IServiceProvider` viene trovato, la `IBindHost`funzione esegue una query per . Se il provider di servizi non è `IBindHost`valido o non `Open(lpszFileName,pError)`riesce a fornire il servizio per , la chiamata viene impostato su .

### <a name="return-value"></a>Valore restituito

Diverso da zero se il file viene aperto correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa chiamata avvia il processo di associazione.

È possibile utilizzare un URL o un nome file per il parametro *lpszURL.* Ad esempio:

[!code-cpp[NVC_MFCWinInet#6](../../mfc/codesnippet/cpp/casyncmonikerfile-class_2.cpp)]

\- - oppure -

[!code-cpp[NVC_MFCWinInet#7](../../mfc/codesnippet/cpp/casyncmonikerfile-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)<br/>
[CDataPathProperty (classe)](../../mfc/reference/cdatapathproperty-class.md)
