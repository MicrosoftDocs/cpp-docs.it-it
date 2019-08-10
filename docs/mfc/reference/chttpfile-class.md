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
ms.openlocfilehash: ff050a89a10c68c639c141891dd51b1b2d58e105
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916002"
---
# <a name="chttpfile-class"></a>Classe CHttpFile

Fornisce la funzionalità per richiedere e leggere file in un server HTTP.

## <a name="syntax"></a>Sintassi

```
class CHttpFile : public CInternetFile
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|NOME|Descrizione|
|----------|-----------------|
|[CHttpFile::CHttpFile](#chttpfile)|Crea un oggetto `CHttpFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CHttpFile::AddRequestHeaders](#addrequestheaders)|Aggiunge le intestazioni alla richiesta inviata a un server HTTP.|
|[CHttpFile::EndRequest](#endrequest)|Termina una richiesta inviata a un server HTTP con la funzione membro [SendRequestEx](#sendrequestex) .|
|[CHttpFile::GetFileURL](#getfileurl)|Ottiene l'URL per il file specificato.|
|[CHttpFile::GetObject](#getobject)|Ottiene l'oggetto di destinazione del verbo in una richiesta a un server HTTP.|
|[CHttpFile::GetVerb](#getverb)|Ottiene il verbo utilizzato in una richiesta a un server HTTP.|
|[CHttpFile::QueryInfo](#queryinfo)|Restituisce le intestazioni della risposta o della richiesta dal server HTTP.|
|[CHttpFile::QueryInfoStatusCode](#queryinfostatuscode)|Recupera il codice di stato associato a una richiesta HTTP e lo inserisce nel parametro `dwStatusCode` fornito.|
|[CHttpFile::SendRequest](#sendrequest)|Invia una richiesta a un server HTTP.|
|[CHttpFile::SendRequestEx](#sendrequestex)|Invia una richiesta a un server HTTP utilizzando i metodi [Write](../../mfc/reference/cinternetfile-class.md#write) o [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) di `CInternetFile`.|

## <a name="remarks"></a>Note

Se la sessione Internet legge i dati da un server HTTP, è necessario creare un'istanza `CHttpFile`di.

Per ulteriori informazioni sul `CHttpFile` funzionamento con le altre classi Internet MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

[CInternetFile](../../mfc/reference/cinternetfile-class.md)

`CHttpFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

##  <a name="addrequestheaders"></a>CHttpFile:: AddRequestHeaders

Chiamare questa funzione membro per aggiungere una o più intestazioni di richiesta HTTP all'handle della richiesta HTTP.

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

*pstrHeaders*<br/>
Puntatore a una stringa contenente l'intestazione o le intestazioni da accodare alla richiesta. Ogni intestazione deve terminare con una coppia CR/LF.

*dwFlags*<br/>
Modifica la semantica delle nuove intestazioni. Può essere uno dei seguenti:

- HTTP_ADDREQ_FLAG_COALESCE unisce le intestazioni con lo stesso nome, usando il flag per aggiungere la prima intestazione trovata all'intestazione successiva. Ad esempio, "Accept: Text/\*" seguito da "Accept: audio/\*" genera la formazione della singola intestazione "Accept: Text/\*, audio/\*". Spetta all'applicazione chiamante garantire uno schema coeso rispetto ai dati ricevuti dalle richieste inviate con intestazioni Unite o separate.

- HTTP_ADDREQ_FLAG_REPLACE esegue un'eliminazione e Aggiungi per sostituire l'intestazione corrente. Il nome dell'intestazione verrà usato per rimuovere l'intestazione corrente e il valore completo verrà usato per aggiungere la nuova intestazione. Se il valore dell'intestazione è vuoto e l'intestazione viene trovata, viene rimossa. Se non è vuoto, il valore dell'intestazione viene sostituito.

- HTTP_ADDREQ_FLAG_ADD_IF_NEW aggiunge l'intestazione solo se non esiste già. Se ne esiste uno, viene restituito un errore.

- HTTP_ADDREQ_FLAG_ADD utilizzato con REPLACE. Aggiunge l'intestazione se non esiste.

*dwHeadersLen*<br/>
Lunghezza, in caratteri, di *pstrHeaders*. Se è-1L, viene presupposto che *pstrHeaders* sia con terminazione zero e la lunghezza viene calcolata.

*str*<br/>
Riferimento a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente l'intestazione o le intestazioni della richiesta da aggiungere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

`AddRequestHeaders`aggiunge intestazioni di formato libero aggiuntive all'handle della richiesta HTTP. È progettato per l'uso da parte di client sofisticati che necessitano di un controllo dettagliato sulla richiesta esatta inviata al server HTTP.

> [!NOTE]
>  L'applicazione può passare più intestazioni in *pstrHeaders* o *Str* per una `AddRequestHeaders` chiamata usando HTTP_ADDREQ_FLAG_ADD o HTTP_ADDREQ_FLAG_ADD_IF_NEW. Se l'applicazione tenta di rimuovere o sostituire un'intestazione tramite HTTP_ADDREQ_FLAG_REMOVE o HTTP_ADDREQ_FLAG_REPLACE, in *lpszHeaders*è possibile specificare una sola intestazione.

##  <a name="chttpfile"></a>CHttpFile:: CHttpFile

Questa funzione membro viene chiamata per costruire un `CHttpFile` oggetto.

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

*hFile*<br/>
Handle per un file Internet.

*hSession*<br/>
Handle per una sessione Internet.

*pstrObject*<br/>
Puntatore a una stringa che contiene l' `CHttpFile` oggetto.

*pstrServer*<br/>
Puntatore a una stringa che contiene il nome del server.

*pstrVerb*<br/>
Puntatore a una stringa contenente il metodo da utilizzare per l'invio della richiesta. Può essere POST, HEAD o GET.

*dwContext*<br/>
Identificatore di contesto per l' `CHttpFile` oggetto. Per ulteriori informazioni su questo parametro, vedere la **sezione Osservazioni** .

*pConnection*<br/>
Puntatore a un oggetto [CHttpConnection](../../mfc/reference/chttpconnection-class.md) .

### <a name="remarks"></a>Note

Non si costruisce `CHttpFile` mai direttamente un oggetto, invece si chiama [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) o [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) .

Il valore predefinito per `dwContext` viene inviato da MFC `CHttpFile` all'oggetto dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l' `CHttpFile` oggetto. Quando si chiama `CInternetSession::OpenURL` o `CHttpConnection` per costruire un `CHttpFile` oggetto, è possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato nell'oggetto con cui viene identificato. Vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

##  <a name="endrequest"></a>CHttpFile:: EndRequest

Chiamare questa funzione membro per terminare una richiesta inviata a un server HTTP con la funzione membro [SendRequestEx](#sendrequestex) .

```
BOOL EndRequest(
    DWORD dwFlags = 0,
    LPINTERNET_BUFFERS lpBuffIn = NULL,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag che descrivono l'operazione. Per un elenco dei flag appropriati, vedere [HttpEndRequest](/windows/desktop/api/wininet/nf-wininet-httpendrequesta) nel Windows SDK.

*lpBuffIn*<br/>
Puntatore a un [INTERNET_BUFFERS](/windows/desktop/api/wininet/ns-wininet-internet_buffersa) inizializzato che descrive il buffer di input utilizzato per l'operazione.

*dwContext*<br/>
Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere la sezione Osservazioni.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la cause dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Note

Il valore predefinito per *dwContext* viene inviato da MFC all' `CHttpFile` oggetto dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l' `CHttpFile` oggetto. Quando si chiama [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) o [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` oggetto, è possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato nell'oggetto con cui viene identificato. Vedere l' [articolo Internet First steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

##  <a name="getfileurl"></a>CHttpFile:: GetFileURL

Chiamare questa funzione membro per ottenere il nome del file HTTP come URL.

```
virtual CString GetFileURL() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente un URL che fa riferimento alla risorsa associata a questo file.

### <a name="remarks"></a>Note

Utilizzare questa funzione membro solo dopo una chiamata riuscita a [SendRequest](#sendrequest) o su un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

##  <a name="getobject"></a>CHttpFile:: GetObject

Chiamare questa funzione membro per ottenere il nome dell'oggetto associato a questo `CHttpFile`.

```
CString GetObject() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome dell'oggetto.

### <a name="remarks"></a>Note

Utilizzare questa funzione membro solo dopo una chiamata riuscita a [SendRequest](#sendrequest) o su un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

##  <a name="getverb"></a>CHttpFile:: getverb

Chiamare questa funzione membro per ottenere il verbo o il metodo HTTP associato a questo `CHttpFile`.

```
CString GetVerb() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome del verbo o del metodo HTTP.

### <a name="remarks"></a>Note

Utilizzare questa funzione membro solo dopo una chiamata riuscita a [SendRequest](#sendrequest) o su un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

##  <a name="queryinfo"></a>  CHttpFile::QueryInfo

Chiamare questa funzione membro per restituire le intestazioni della risposta o della richiesta da una richiesta HTTP.

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

*dwInfoLevel*<br/>
Combinazione dell'attributo per eseguire una query e i flag seguenti che specificano il tipo di informazioni richieste:

- HTTP_QUERY_CUSTOM trova il nome dell'intestazione e restituisce questo valore in *lpvBuffer* nell'output. HTTP_QUERY_CUSTOM genera un'asserzione se l'intestazione non viene trovata.

- HTTP_QUERY_FLAG_REQUEST_HEADERS in genere, l'applicazione esegue una query sulle intestazioni di risposta, ma un'applicazione può anche eseguire query sulle intestazioni di richiesta usando questo flag.

- HTTP_QUERY_FLAG_SYSTEMTIME per le intestazioni il cui valore è una stringa di data/ora, ad esempio "Last-Modified-Time", questo flag restituisce il valore dell'intestazione come struttura standard di Win32 [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) che non richiede l'analisi dei dati da parte dell'applicazione. Se si utilizza questo flag, è consigliabile utilizzare l' `SYSTEMTIME` override della funzione.

- HTTP_QUERY_FLAG_NUMBER per le intestazioni il cui valore è un numero, ad esempio il codice di stato, questo flag restituisce i dati come numero a 32 bit.

Per un elenco dei valori possibili, vedere la sezione **osservazioni** .

*lpvBuffer*<br/>
Puntatore al buffer che riceve le informazioni.

*lpdwBufferLength*<br/>
In ingresso, punta a un valore che contiene la lunghezza del buffer di dati, in numero di caratteri o byte. Per informazioni più dettagliate su questo parametro, vedere la sezione **osservazioni** .

*lpdwIndex*<br/>
Puntatore a un indice in base zero dell'intestazione. Può essere NULL. Utilizzare questo flag per enumerare più intestazioni con lo stesso nome. In input *lpdwIndex* indica l'indice dell'intestazione specificata da restituire. Nell'output *lpdwIndex* indica l'indice dell'intestazione successiva. Se non è possibile trovare l'indice successivo, viene restituito ERROR_HTTP_HEADER_NOT_FOUND.

*str*<br/>
Riferimento all'oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che riceve le informazioni restituite.

*dwIndex*<br/>
Valore di indice. Vedere *lpdwIndex*.

*pSysTime*<br/>
Puntatore a una struttura Win32 [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

Utilizzare questa funzione membro solo dopo una chiamata riuscita a [SendRequest](#sendrequest) o su un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

È possibile recuperare i seguenti tipi di dati da `QueryInfo`:

- stringhe (impostazione predefinita)

- `SYSTEMTIME`(per "Data:" "scadenza:" e così via, intestazioni)

- DWORD (per STATUS_CODE, CONTENT_LENGTH e così via)

Quando una stringa viene scritta nel buffer e la funzione membro ha esito positivo, `lpdwBufferLength` contiene la lunghezza della stringa in caratteri meno 1 per il carattere null di terminazione.

I valori possibili di *dwInfoLevel* includono:

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

##  <a name="queryinfostatuscode"></a>  CHttpFile::QueryInfoStatusCode

Chiamare questa funzione membro per ottenere il codice di stato associato a una richiesta HTTP e inserirlo nel parametro *dwStatusCode* fornito.

```
BOOL QueryInfoStatusCode(DWORD& dwStatusCode) const;
```

### <a name="parameters"></a>Parametri

*dwStatusCode*<br/>
Riferimento a un codice di stato. I codici di stato indicano l'esito positivo o negativo dell'evento richiesto. Per una selezione delle descrizioni dei codici di stato, vedere la **sezione Osservazioni** .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

Utilizzare questa funzione membro solo dopo una chiamata riuscita a [SendRequest](#sendrequest) o su un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

I codici di stato HTTP rientrano in gruppi che indicano l'esito positivo o negativo della richiesta. Le tabelle seguenti descrivono i gruppi di codice di stato e i codici di stato HTTP più comuni.

|Group|Significato|
|-----------|-------------|
|200-299|Riuscito|
|300-399|Informazioni|
|400-499|Errore di richiesta|
|500-599|Errore del server|

Codici di stato HTTP comuni:

|status code|Significato|
|-----------------|-------------|
|200|URL individuato, la trasmissione segue|
|400|Richiesta non intelligibile|
|404|L'URL richiesto non è stato trovato|
|405|Il server non supporta il metodo richiesto|
|500|Errore del server sconosciuto|
|503|Capacità server raggiunta|

##  <a name="sendrequest"></a>CHttpFile:: SendRequest

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

*pstrHeaders*<br/>
Puntatore a una stringa che contiene il nome delle intestazioni da inviare.

*dwHeadersLen*<br/>
Lunghezza delle intestazioni identificate da *pstrHeaders*.

*lpOptional*<br/>
Eventuali dati facoltativi da inviare immediatamente dopo le intestazioni della richiesta. Viene in genere usato per le operazioni POST e PUT. Può essere NULL se non sono presenti dati facoltativi da inviare.

*dwOptionalLen*<br/>
Lunghezza di *lpOptional*.

*strHeaders*<br/>
Stringa che contiene il nome delle intestazioni per la richiesta inviata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la cause dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

##  <a name="sendrequestex"></a>CHttpFile:: SendRequestEx

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
Flag che descrivono l'operazione. Per un elenco dei flag appropriati, vedere [HttpSendRequestEx](/windows/desktop/api/wininet/nf-wininet-httpsendrequestexa) nel Windows SDK.

*dwContext*<br/>
Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere la sezione Osservazioni.

*lpBuffIn*<br/>
Puntatore a un [INTERNET_BUFFERS](/windows/desktop/api/wininet/ns-wininet-internet_buffersa) inizializzato che descrive il buffer di input utilizzato per l'operazione.

*lpBuffOut*<br/>
Puntatore a un INTERNET_BUFFERS inizializzato che descrive il buffer di output utilizzato per l'operazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. Se la chiamata ha esito negativo, determinare la cause dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Note

Questa funzione consente all'applicazione di inviare dati usando i metodi [Write](../../mfc/reference/cinternetfile-class.md#write) e [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) di `CInternetFile`. È necessario essere a conoscenza della lunghezza dei dati da inviare prima di chiamare l'override di questa funzione. Il primo override consente di specificare la lunghezza dei dati che si desidera inviare. Il secondo override accetta i puntatori alle strutture INTERNET_BUFFERS, che possono essere usati per descrivere in modo dettagliato il buffer.

Dopo che il contenuto è stato scritto nel file, chiamare [EndRequest](#endrequest) per terminare l'operazione.

Il valore predefinito per *dwContext* viene inviato da MFC all' `CHttpFile` oggetto dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l' `CHttpFile` oggetto. Quando si chiama [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) o [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` oggetto, è possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato nell'oggetto con cui viene identificato. Vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

### <a name="example"></a>Esempio

Questo frammento di codice invia il contenuto di una stringa a una DLL denominata MFCISAPI. DLL nel server LOCALHOST. Mentre in questo esempio viene utilizzata una sola `WriteString`chiamata a, l'utilizzo di più chiamate per inviare dati in blocchi è accettabile.

[!code-cpp[NVC_MFCWinInet#9](../../mfc/codesnippet/cpp/chttpfile-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)
