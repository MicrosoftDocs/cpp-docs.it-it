---
title: Classe CHttpFile
ms.date: 11/04/2016
f1_keywords:
- CHttpFile
- AFXINET/CHttpFile
- AFXINET/CHttpFile::CHttpFile
- AFXINET/CHttpFile::AddRequestHeaders
- AFXINET/CHttpFile::EndRequest
- AFXINET/CHttpFile::GetFileURL
- AFXINET/CHttpFile::GetObject
- AFXINET/CHttpFile::GetVerb
- AFXINET/CHttpFile::QueryInfo
- AFXINET/CHttpFile::QueryInfoStatusCode
- AFXINET/CHttpFile::SendRequest
- AFXINET/CHttpFile::SendRequestEx
helpviewer_keywords:
- CHttpFile [MFC], CHttpFile
- CHttpFile [MFC], AddRequestHeaders
- CHttpFile [MFC], EndRequest
- CHttpFile [MFC], GetFileURL
- CHttpFile [MFC], GetObject
- CHttpFile [MFC], GetVerb
- CHttpFile [MFC], QueryInfo
- CHttpFile [MFC], QueryInfoStatusCode
- CHttpFile [MFC], SendRequest
- CHttpFile [MFC], SendRequestEx
ms.assetid: 399e7c68-bbce-4374-8c55-206e9c7baac6
ms.openlocfilehash: cba3ba7d86577703de2bf5709d66bbd5e0298863
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368398"
---
# <a name="chttpfile-class"></a>Classe CHttpFile

Fornisce la funzionalità per richiedere e leggere file in un server HTTP.

## <a name="syntax"></a>Sintassi

```
class CHttpFile : public CInternetFile
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[FileCHttpFile::CHttpFile](#chttpfile)|Crea un oggetto `CHttpFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHttpFile::AddRequestHeaders](#addrequestheaders)|Aggiunge intestazioni alla richiesta inviata a un server HTTP.|
|[CHttpFile::EndRequest](#endrequest)|Termina una richiesta inviata a un server HTTP con la funzione membro [SendRequestEx.](#sendrequestex)|
|[FileCHttp::GetFileURL](#getfileurl)|Ottiene l'URL per il file specificato.|
|[FileCHttpFile::GetObject](#getobject)|Ottiene l'oggetto di destinazione del verbo in una richiesta a un server HTTP.|
|[FileCHttpFile::GetVerb](#getverb)|Ottiene il verbo utilizzato in una richiesta a un server HTTP.|
|[FileCHttp::QueryInfo](#queryinfo)|Restituisce le intestazioni di risposta o richiesta dal server HTTP.|
|[CHttpFile::QueryInfoStatusCode](#queryinfostatuscode)|Recupera il codice di stato associato a una richiesta `dwStatusCode` HTTP e lo inserisce nel parametro fornito.|
|[FileCHttpFile::SendRequest](#sendrequest)|Invia una richiesta a un server HTTP.|
|[FileCHttp::SendRequestEx](#sendrequestex)|Invia una richiesta a un server HTTP utilizzando `CInternetFile`i metodi [Write](../../mfc/reference/cinternetfile-class.md#write) o [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) di .|

## <a name="remarks"></a>Osservazioni

Se la sessione Internet legge i dati da un `CHttpFile`server HTTP, è necessario creare un'istanza di .

Per ulteriori informazioni `CHttpFile` sul funzionamento con le altre classi Internet MFC, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

[CInternetFile](../../mfc/reference/cinternetfile-class.md)

`CHttpFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="chttpfileaddrequestheaders"></a><a name="addrequestheaders"></a>CHttpFile::AddRequestHeaders

Chiamare questa funzione membro per aggiungere una o più intestazioni di richiesta HTTP all'handle di richiesta HTTP.

```
BOOL AddRequestHeaders(
    LPCTSTR pstrHeaders,
    DWORD dwFlags = HTTP_ADDREQ_FLAG_ADD_IF_NEW,
    int dwHeadersLen = -1);

BOOL AddRequestHeaders(
    CString& str,
    DWORD dwFlags = HTTP_ADDREQ_FLAG_ADD_IF_NEW);
```

### <a name="parameters"></a>Parametri

*pstrHeaders (informazioni in due)*<br/>
Puntatore a una stringa contenente l'intestazione o le intestazioni da aggiungere alla richiesta. Ogni intestazione deve essere terminata da una coppia CR/LF.

*dwFlags*<br/>
Modifica la semantica delle nuove intestazioni. Può essere uno dei valori seguenti:

- HTTP_ADDREQ_FLAG_COALESCE Unisce intestazioni con lo stesso nome, utilizzando il flag per aggiungere la prima intestazione trovata all'intestazione successiva. Ad esempio, "Accetta:\*text/ " seguito\*da "Accept: audio/ " determina la\*formazione\*della singola intestazione "Accept: text/ , audio/ ". Spetta all'applicazione chiamante garantire uno schema coeso rispetto ai dati ricevuti dalle richieste inviate con intestazioni fuse o separate.

- HTTP_ADDREQ_FLAG_REPLACE Esegue una rimozione e un'aggiunta per sostituire l'intestazione corrente. Il nome dell'intestazione verrà utilizzato per rimuovere l'intestazione corrente e il valore completo verrà utilizzato per aggiungere la nuova intestazione. Se il valore-intestazione è vuoto e l'intestazione viene trovata, viene rimossa. Se non è vuoto, il valore-intestazione viene sostituito.

- HTTP_ADDREQ_FLAG_ADD_IF_NEW aggiunge solo l'intestazione se non esiste già. Se ne esiste uno, viene restituito un errore.

- HTTP_ADDREQ_FLAG_ADD utilizzato con REPLACE. Aggiunge l'intestazione se non esiste.

*dwHeadersLen*<br/>
Lunghezza, in caratteri, di *pstrHeaders*. Se si tratta di -1L, si presuppone *che pstrHeaders* sia con terminazione zero e che la lunghezza venga calcolata.

*Str*<br/>
Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente l'intestazione della richiesta o le intestazioni da aggiungere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

`AddRequestHeaders`aggiunge intestazioni aggiuntive in formato libero all'handle di richiesta HTTP. È destinato all'uso da parte di client sofisticati che necessitano di un controllo dettagliato sulla richiesta esatta inviata al server HTTP.

> [!NOTE]
> L'applicazione può passare più intestazioni *str* in `AddRequestHeaders` *pstrHeaders* o str per una chiamata utilizzando HTTP_ADDREQ_FLAG_ADD o HTTP_ADDREQ_FLAG_ADD_IF_NEW. Se l'applicazione tenta di rimuovere o sostituire un'intestazione utilizzando HTTP_ADDREQ_FLAG_REMOVE o HTTP_ADDREQ_FLAG_REPLACE, è possibile fornire una sola intestazione in *lpszHeaders*.

## <a name="chttpfilechttpfile"></a><a name="chttpfile"></a>FileCHttpFile::CHttpFile

Questa funzione membro viene `CHttpFile` chiamata per costruire un oggetto.

```
CHttpFile(
    HINTERNET hFile,
    HINTERNET hSession,
    LPCTSTR pstrObject,
    LPCTSTR pstrServer,
    LPCTSTR pstrVerb,
    DWORD_PTR dwContext);

CHttpFile(
    HINTERNET hFile,
    LPCTSTR pstrVerb,
    LPCTSTR pstrObject,
    CHttpConnection* pConnection);
```

### <a name="parameters"></a>Parametri

*hFile (File)*<br/>
Handle per un file Internet.

*hSessione*<br/>
Handle per una sessione Internet.

*pstrOggetto*<br/>
Puntatore a una `CHttpFile` stringa contenente l'oggetto.

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server.

*pstrVerbo*<br/>
Puntatore a una stringa contenente il metodo da utilizzare per l'invio della richiesta. Può essere POST, HEAD o GET.

*dwContext*<br/>
Identificatore di `CHttpFile` contesto per l'oggetto. Per ulteriori informazioni su questo parametro, vedere **Osservazioni.**

*pConnection*<br/>
Puntatore a un oggetto [CHttpConnection.](../../mfc/reference/chttpconnection-class.md)

### <a name="remarks"></a>Osservazioni

Non si `CHttpFile` costruisce mai direttamente un oggetto; piuttosto chiamare [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) o [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) invece.

Il valore `dwContext` predefinito per viene `CHttpFile` inviato da MFC all'oggetto `CHttpFile` dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l'oggetto. Quando si `CInternetSession::OpenURL` `CHttpConnection` chiama o `CHttpFile` per costruire un oggetto, è possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato sull'oggetto con cui è identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="chttpfileendrequest"></a><a name="endrequest"></a>CHttpFile::EndRequest

Chiamare questa funzione membro per terminare una richiesta inviata a un server HTTP con la funzione membro [SendRequestEx.Call](#sendrequestex) this member function to end a request sent to an HTTP server with the SendRequestEx member function.

```
BOOL EndRequest(
    DWORD dwFlags = 0,
    LPINTERNET_BUFFERS lpBuffIn = NULL,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag che descrivono l'operazione. Per un elenco dei flag appropriati, vedere [HttpEndRequest](/windows/win32/api/wininet/nf-wininet-httpendrequestw) in Windows SDK.

*LpBuffIn*<br/>
Puntatore a un [INTERNET_BUFFERS](/windows/win32/api/wininet/ns-wininet-internet_buffersw) inizializzato che descrive il buffer di input utilizzato per l'operazione.

*dwContext*<br/>
Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere Osservazioni.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Osservazioni

Il valore predefinito per *dwContext* viene `CHttpFile` inviato da MFC all'oggetto `CHttpFile` dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l'oggetto. Quando si chiama [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) o [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` oggetto, è possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato sull'oggetto con cui è identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="chttpfilegetfileurl"></a><a name="getfileurl"></a>FileCHttp::GetFileURL

Chiamare questa funzione membro per ottenere il nome del file HTTP come URL.

```
virtual CString GetFileURL() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente un URL che fa riferimento alla risorsa associata a questo file.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro solo dopo una chiamata `CHttpFile` riuscita a [SendRequest](#sendrequest) o su un oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

## <a name="chttpfilegetobject"></a><a name="getobject"></a>FileCHttpFile::GetObject

Chiamare questa funzione membro per ottenere il `CHttpFile`nome dell'oggetto associato a questo oggetto .

```
CString GetObject() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome dell'oggetto.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro solo dopo una chiamata `CHttpFile` riuscita a [SendRequest](#sendrequest) o su un oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

## <a name="chttpfilegetverb"></a><a name="getverb"></a>FileCHttpFile::GetVerb

Chiamare questa funzione membro per ottenere il verbo `CHttpFile`HTTP (o metodo) associato a questo oggetto .

```
CString GetVerb() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome del verbo HTTP (o metodo).

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro solo dopo una chiamata `CHttpFile` riuscita a [SendRequest](#sendrequest) o su un oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

## <a name="chttpfilequeryinfo"></a><a name="queryinfo"></a>FileCHttp::QueryInfo

Chiamare questa funzione membro per restituire le intestazioni di risposta o richiesta da una richiesta HTTP.

```
BOOL QueryInfo(
    DWORD dwInfoLevel,
    LPVOID lpvBuffer,
    LPDWORD lpdwBufferLength,
    LPDWORD lpdwIndex = NULL) const;

BOOL QueryInfo(
    DWORD dwInfoLevel,
    CString& str,
    LPDWORD dwIndex = NULL) const;

BOOL QueryInfo(
    DWORD dwInfoLevel,
    SYSTEMTIME* pSysTime,
    LPDWORD dwIndex = NULL) const;
```

### <a name="parameters"></a>Parametri

*dwInfoLevel (in stato di informazione)*<br/>
Combinazione dell'attributo su cui eseguire la query e dei flag seguenti che specificano il tipo di informazioni richieste:

- HTTP_QUERY_CUSTOM Trova il nome dell'intestazione e restituisce questo valore in *lpvBuffer* nell'output. HTTP_QUERY_CUSTOM genera un'asserzione se l'intestazione non viene trovata.

- HTTP_QUERY_FLAG_REQUEST_HEADERS in genere, l'applicazione esegue una query sulle intestazioni di risposta, ma un'applicazione può anche eseguire query sulle intestazioni di richiesta utilizzando questo flag.

- HTTP_QUERY_FLAG_SYSTEMTIME Per le intestazioni il cui valore è una stringa di data/ora, ad esempio "Last-Modified-Time", questo flag restituisce il valore dell'intestazione come una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) Win32 standard che non richiede all'applicazione di analizzare i dati. Se si utilizza questo flag, è `SYSTEMTIME` possibile utilizzare l'override della funzione.

- HTTP_QUERY_FLAG_NUMBER Per le intestazioni il cui valore è un numero, ad esempio il codice di stato, questo flag restituisce i dati come numero a 32 bit.

Vedere la sezione **Osservazioni** per un elenco dei valori possibili.

*LpvBuffer (lpvBuffer)*<br/>
Puntatore al buffer che riceve le informazioni.

*lpdwBufferLength (lunghezza in dominio lpdwBufferLength)*<br/>
All'ingresso, questo punta a un valore contenente la lunghezza del buffer di dati, in numero di caratteri o byte. Vedere la sezione **Osservazioni** per informazioni più dettagliate su questo parametro.

*Indice lpdw*<br/>
Puntatore a un indice di intestazione in base zero. Può essere NULL. Utilizzare questo flag per enumerare più intestazioni con lo stesso nome. Nell'input, *lpdwIndex* indica l'indice dell'intestazione specificata da restituire. Nell'output, *lpdwIndex* indica l'indice dell'intestazione successiva. Se non è possibile trovare l'indice successivo, viene restituito ERROR_HTTP_HEADER_NOT_FOUND.

*Str*<br/>
Riferimento all'oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che riceve le informazioni restituite.

*dwIndex (indice)*<br/>
Valore di indice. Vedere *lpdwIndex*.

*pSysTime (in questo stato)*<br/>
Puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) Win32.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro solo dopo una chiamata `CHttpFile` riuscita a [SendRequest](#sendrequest) o su un oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

È possibile recuperare i seguenti `QueryInfo`tipi di dati da:

- stringhe (predefinito)

- `SYSTEMTIME`(per "Dati:" "Scadenza:" ecc, intestazioni)

- DWORD (per STATUS_CODE, CONTENT_LENGTH, ecc.)

Quando una stringa viene scritta nel buffer e `lpdwBufferLength` la funzione membro ha esito positivo, contiene la lunghezza della stringa nei caratteri meno 1 per il carattere di terminazione NULL.

I possibili *valori dwInfoLevel* includono:The possible dwInfoLevel values include:

- HTTP_QUERY_MIME_VERSION

- HTTP_QUERY_CONTENT_TYPE

- HTTP_QUERY_CONTENT_TRANSFER_ENCODING

- HTTP_QUERY_CONTENT_ID

- HTTP_QUERY_CONTENT_DESCRIPTION

- HTTP_QUERY_CONTENT_LENGTH

- HTTP_QUERY_ALLOWED_METHODS

- HTTP_QUERY_PUBLIC_METHODS

- HTTP_QUERY_DATE

- HTTP_QUERY_EXPIRES

- HTTP_QUERY_LAST_MODIFIED

- HTTP_QUERY_MESSAGE_ID

- HTTP_QUERY_URI

- HTTP_QUERY_DERIVED_FROM

- HTTP_QUERY_LANGUAGE

- HTTP_QUERY_COST

- HTTP_QUERY_WWW_LINK

- HTTP_QUERY_PRAGMA

- HTTP_QUERY_VERSION

- HTTP_QUERY_STATUS_CODE

- HTTP_QUERY_STATUS_TEXT

- HTTP_QUERY_RAW_HEADERS

- HTTP_QUERY_RAW_HEADERS_CRLF

## <a name="chttpfilequeryinfostatuscode"></a><a name="queryinfostatuscode"></a>CHttpFile::QueryInfoStatusCode

Chiamare questa funzione membro per ottenere il codice di stato associato a una richiesta HTTP e inserirlo nel parametro *dwStatusCode* fornito.

```
BOOL QueryInfoStatusCode(DWORD& dwStatusCode) const;
```

### <a name="parameters"></a>Parametri

*dwStatusCode (codice di stato dwStatusCode)*<br/>
Riferimento a un codice di stato. I codici di stato indicano l'esito positivo o negativo dell'evento richiesto. Vedere **Osservazioni** per una selezione di descrizioni dei codici di stato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro solo dopo una chiamata `CHttpFile` riuscita a [SendRequest](#sendrequest) o su un oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

I codici di stato HTTP rientrano in gruppi che indicano l'esito positivo o negativo della richiesta. Nelle tabelle seguenti vengono descritti i gruppi di codici di stato e i codici di stato HTTP più comuni.

|Gruppo|Significato|
|-----------|-------------|
|200-299|Operazione completata|
|300-399|Informazioni|
|400-499|Errore di richiesta|
|500-599|Errore del server|

Codici di stato HTTP comuni:Common HTTP Status Codes:

|Codice di stato|Significato|
|-----------------|-------------|
|200|URL individuato, la trasmissione segue|
|400|Richiesta incomprensibile|
|404|URL richiesto non trovato|
|405|Il server non supporta il metodo richiesto|
|500|Errore del server sconosciuto|
|503|Raggiunta la capacità del server|

## <a name="chttpfilesendrequest"></a><a name="sendrequest"></a>FileCHttpFile::SendRequest

Chiamare questa funzione membro per inviare una richiesta a un server HTTP.

```
BOOL SendRequest(
    LPCTSTR pstrHeaders = NULL,
    DWORD dwHeadersLen = 0,
    LPVOID lpOptional = NULL,
    DWORD dwOptionalLen = 0);

BOOL SendRequest(
    CString& strHeaders,
    LPVOID lpOptional = NULL,
    DWORD dwOptionalLen = 0);
```

### <a name="parameters"></a>Parametri

*pstrHeaders (informazioni in due)*<br/>
Puntatore a una stringa contenente il nome delle intestazioni da inviare.

*dwHeadersLen*<br/>
Lunghezza delle intestazioni identificate da *pstrHeaders*.

*lpFacoltativo*<br/>
Tutti i dati facoltativi da inviare immediatamente dopo le intestazioni della richiesta. Viene in genere utilizzato per le operazioni POST e PUT. Può essere NULL se non sono presenti dati facoltativi da inviare.

*dwOptionalLen*<br/>
Lunghezza di *lpOptional*.

*strHeaders (strHeaders)*<br/>
Stringa contenente il nome delle intestazioni per la richiesta inviata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

## <a name="chttpfilesendrequestex"></a><a name="sendrequestex"></a>FileCHttp::SendRequestEx

Chiamare questa funzione membro per inviare una richiesta a un server HTTP.

```
BOOL SendRequestEx(
    DWORD dwTotalLen,
    DWORD dwFlags = HSR_INITIATE,
    DWORD_PTR dwContext = 1);

BOOL SendRequestEx(
    LPINTERNET_BUFFERS lpBuffIn,
    LPINTERNET_BUFFERS lpBuffOut,
    DWORD dwFlags = HSR_INITIATE,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*dwTotalLen*<br/>
Numero di byte da inviare nella richiesta.

*dwFlags*<br/>
Flag che descrivono l'operazione. Per un elenco dei flag appropriati, vedere [HttpSendRequestEx](/windows/win32/api/wininet/nf-wininet-httpsendrequestexw) in Windows SDK.

*dwContext*<br/>
Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere Osservazioni.

*LpBuffIn*<br/>
Puntatore a un [INTERNET_BUFFERS](/windows/win32/api/wininet/ns-wininet-internet_buffersw) inizializzato che descrive il buffer di input utilizzato per l'operazione.

*lpBuffOut*<br/>
Puntatore a un INTERNET_BUFFERS inizializzato che descrive il buffer di output utilizzato per l'operazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Osservazioni

Questa funzione consente all'applicazione di inviare dati `CInternetFile`utilizzando i metodi [Write](../../mfc/reference/cinternetfile-class.md#write) e [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) di . È necessario conoscere la lunghezza dei dati da inviare prima di chiamare l'override di questa funzione. La prima sostituzione consente di specificare la lunghezza dei dati che si desidera inviare. Il secondo override accetta puntatori a INTERNET_BUFFERS strutture, che possono essere utilizzate per descrivere il buffer in dettaglio.

Dopo che il contenuto viene scritto nel file, chiamare [EndRequest](#endrequest) per terminare l'operazione.

Il valore predefinito per *dwContext* viene `CHttpFile` inviato da MFC all'oggetto `CHttpFile` dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l'oggetto. Quando si chiama [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) o [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` oggetto, è possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato sull'oggetto con cui è identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

### <a name="example"></a>Esempio

Questo frammento di codice invia il contenuto di una stringa a una DLL denominata MFCISAPI. DLL sul server LOCALHOST. Mentre in questo esempio `WriteString`viene utilizzata una sola chiamata a , l'utilizzo di più chiamate per inviare dati in blocchi è accettabile.

[!code-cpp[NVC_MFCWinInet#9](../../mfc/codesnippet/cpp/chttpfile-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)
