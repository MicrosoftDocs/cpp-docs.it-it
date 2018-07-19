---
title: Classe CHttpFile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 23c3e1b42c228ea971bdedff952c01078735948e
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37337460"
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
|[CHttpFile::CHttpFile](#chttpfile)|Crea un oggetto `CHttpFile`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHttpFile:: AddRequestHeaders](#addrequestheaders)|Aggiunge le intestazioni per la richiesta inviata a un server HTTP.|  
|[CHttpFile::EndRequest](#endrequest)|Termina una richiesta inviata a un server HTTP con il [SendRequestEx](#sendrequestex) funzione membro.|  
|[CHttpFile::GetFileURL](#getfileurl)|Ottiene l'URL per il file specificato.|  
|[CHttpFile::GetObject](#getobject)|Ottiene l'oggetto di destinazione del verbo in una richiesta a un server HTTP.|  
|[CHttpFile::GetVerb](#getverb)|Ottiene il verbo che è stato usato in una richiesta a un server HTTP.|  
|[QueryInfo](#queryinfo)|Restituisce le intestazioni di richiesta o risposta dal server HTTP.|  
|[QueryInfoStatusCode](#queryinfostatuscode)|Recupera il codice di stato associato a una richiesta HTTP e la inserisce nell'oggetto fornito `dwStatusCode` parametro.|  
|[CHttpFile:: SendRequest](#sendrequest)|Invia una richiesta a un server HTTP.|  
|[CHttpFile::SendRequestEx](#sendrequestex)|Invia una richiesta a un server HTTP con il [scrivere](../../mfc/reference/cinternetfile-class.md#write) oppure [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) metodi di `CInternetFile`.|  
  
## <a name="remarks"></a>Note  
 Se la sessione di Internet legge i dati da un server HTTP, è necessario creare un'istanza di `CHttpFile`.  
  
 Per altre informazioni su come `CHttpFile` funziona con le altre classi MFC Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [CStdioFile](../../mfc/reference/cstdiofile-class.md)  
  
 [CInternetFile](../../mfc/reference/cinternetfile-class.md)  
  
 `CHttpFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="addrequestheaders"></a>  CHttpFile:: AddRequestHeaders  
 Chiamare questa funzione membro per aggiungere uno o gestiscono altre intestazioni della richiesta HTTP alla richiesta HTTP.  
  
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
 *pstrHeaders*  
 Un puntatore a una stringa contenente l'intestazione o intestazioni da aggiungere alla richiesta. Ogni intestazione deve essere terminata da una coppia CR/LF.  
  
 *dwFlags*  
 Modifica la semantica delle intestazioni di nuovo. Può essere uno dei seguenti:  
  
- Intestazioni HTTP_ADDREQ_FLAG_COALESCE unisce lo stesso nome, con il flag per aggiungere l'intestazione prima trovata per l'intestazione successiva. Ad esempio, "Accept: testo /\*" seguito da "Accept: audio /\*" comporterà la formazione di intestazione singolo "Accept: testo /\*, audio /\*". Spetta all'applicazione chiamante di verificare che uno schema coerente rispetto ai dati ricevuti dalle richieste inviate con le intestazioni di fuse o separatamente.  
  
- HTTP_ADDREQ_FLAG_REPLACE esegue un rimuovere e aggiungere per sostituire l'intestazione corrente. Il nome di intestazione verrà usato per rimuovere l'intestazione corrente e il valore completo da utilizzare per aggiungere la nuova intestazione. Se il valore dell'intestazione è vuoto e viene trovata l'intestazione, viene rimossa. Se non è vuoto, viene sostituito il valore dell'intestazione.  
  
- Aggiunge l'intestazione HTTP_ADDREQ_FLAG_ADD_IF_NEW solo se non esiste già. Se è presente, viene restituito un errore.  
  
- HTTP_ADDREQ_FLAG_ADD usato con sostituzione. Aggiunge un'intestazione, se non esiste.  
  
 *dwHeadersLen*  
 Lunghezza, espressa in caratteri, della *pstrHeaders*. Se si tratta quindi-1L *pstrHeaders* si presuppone che sia con terminazione zero e la lunghezza viene calcolata.  
  
 *str*  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene l'intestazione della richiesta o le intestazioni da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 `AddRequestHeaders` Accoda intestazioni aggiuntive, in formato libero per l'handle di richiesta HTTP. Si tratta per l'uso da parte dei client sofisticate che necessitano di un controllo dettagliato sulle esatta richiesta inviata al server HTTP.  
  
> [!NOTE]
>  L'applicazione può passare più intestazioni nel *pstrHeaders* oppure *str* per un `AddRequestHeaders` chiamare usando HTTP_ADDREQ_FLAG_ADD o HTTP_ADDREQ_FLAG_ADD_IF_NEW. Se l'applicazione prova a rimuovere o sostituire un'intestazione usando HTTP_ADDREQ_FLAG_REMOVE o HTTP_ADDREQ_FLAG_REPLACE, solo un'intestazione può essere fornita in *lpszHeaders*.  
  
##  <a name="chttpfile"></a>  CHttpFile::CHttpFile  
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
 *oggetto hFile*  
 Handle per un file di Internet.  
  
 *hSession*  
 Handle a una sessione di Internet.  
  
 *pstrObject*  
 Un puntatore a una stringa contenente il `CHttpFile` oggetto.  
  
 *pstrServer*  
 Un puntatore a una stringa contenente il nome del server.  
  
 *pstrVerb*  
 Un puntatore a una stringa contenente il metodo da usare durante l'invio della richiesta. POST, HEAD, è possibile o ottenere.  
  
 *dwContext*  
 L'identificatore di contesto per il `CHttpFile` oggetto. Visualizzare **osservazioni** per altre informazioni su questo parametro.  
  
 *pConnection*  
 Un puntatore a un [CHttpConnection](../../mfc/reference/chttpconnection-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Non si costruisce mai una `CHttpFile` direttamente l'oggetto, anziché chiamare [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) oppure [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) invece.  
  
 Il valore predefinito per `dwContext` inviato da MFC per la `CHttpFile` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CHttpFile` oggetto. Quando si chiama `CInternetSession::OpenURL` oppure `CHttpConnection` per costruire un `CHttpFile` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.  
  
##  <a name="endrequest"></a>  CHttpFile::EndRequest  
 Chiamare questa funzione membro per terminare una richiesta inviata a un server HTTP con il [SendRequestEx](#sendrequestex) funzione membro.  
  
```  
BOOL EndRequest(
    DWORD dwFlags = 0,  
    LPINTERNET_BUFFERS lpBuffIn = NULL,  
    DWORD_PTR dwContext = 1);
```  
  
### <a name="parameters"></a>Parametri  
 *dwFlags*  
 Flag che descrivono l'operazione. Per un elenco dei flag appropriati, vedere [HttpEndRequest](http://msdn.microsoft.com/library/windows/desktop/aa384230) nel SDK di Windows.  
  
 *lpBuffIn*  
 Puntatore a un oggetto inizializzato [INTERNET_BUFFERS](http://msdn.microsoft.com/library/windows/desktop/aa385132) che descrive il buffer di input utilizzato per l'operazione.  
  
 *dwContext*  
 Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere la sezione Osservazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito per *dwContext* inviato da MFC per il `CHttpFile` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CHttpFile` oggetto. Quando si chiama [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) oppure [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.  
  
##  <a name="getfileurl"></a>  CHttpFile::GetFileURL  
 Chiamare questa funzione membro per ottenere il nome del file sotto forma di URL HTTP.  
  
```  
virtual CString GetFileURL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente un URL che fa riferimento la risorsa associata a questo file.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto è stato creato dal [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
##  <a name="getobject"></a>  CHttpFile::GetObject  
 Chiamare questa funzione membro per ottenere il nome dell'oggetto associato a questo `CHttpFile`.  
  
```  
CString GetObject() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto è stato creato dal [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
##  <a name="getverb"></a>  CHttpFile::GetVerb  
 Chiamare questa funzione membro per ottenere l'HTTP verbo (o metodo) associato a questo `CHttpFile`.  
  
```  
CString GetVerb() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome del verbo HTTP (o metodo).  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto è stato creato dal [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
##  <a name="queryinfo"></a>  QueryInfo  
 Chiamare questa funzione membro per restituire una risposta o intestazioni della richiesta da una richiesta HTTP.  
  
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
 *dwInfoLevel*  
 Una combinazione di attributo per eseguire query e i flag seguenti che specificano il tipo di informazioni richieste:  
  
- HTTP_QUERY_CUSTOM trova il nome dell'intestazione e restituisce questo valore in *lpvBuffer* nell'output. HTTP_QUERY_CUSTOM genera un'asserzione se l'intestazione non viene trovato.  
  
- HTTP_QUERY_FLAG_REQUEST_HEADERS in genere, l'applicazione esegue query le intestazioni di risposta, ma un'applicazione può richiedere anche le intestazioni delle richieste con questo flag.  
  
- Questo flag HTTP_QUERY_FLAG_SYSTEMTIME delle intestazioni il cui valore è una stringa data/ora, ad esempio "Last-Modified-Time," restituisce il valore dell'intestazione come Win32 standard [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura che non richiede l'applicazione analizzare i dati. Se si usa questo flag, è possibile usare il `SYSTEMTIME` eseguire l'override della funzione.  
  
- HTTP_QUERY_FLAG_NUMBER delle intestazioni il cui valore è un numero, ad esempio il codice di stato, questo flag restituisce i dati sotto forma di numero a 32 bit.  
  
 Vedere le **osservazioni** sezione per un elenco dei possibili valori.  
  
 *lpvBuffer*  
 Puntatore al buffer che riceve le informazioni.  
  
 *lpdwBufferLength*  
 In ingresso, si punta a un valore che contiene la lunghezza del buffer di dati, in numero di caratteri o byte. Vedere le **osservazioni** sezione per informazioni dettagliate su questo parametro.  
  
 *lpdwIndex*  
 Puntatore a un indice in base zero dell'intestazione. Può essere NULL. Utilizzare questo flag per enumerare più intestazioni con lo stesso nome. Per l'input, *lpdwIndex* indica l'indice dell'intestazione specificata da restituire. Nell'output *lpdwIndex* indica l'indice dell'intestazione successiva. Se l'indice successivo non viene trovato, viene restituito ERROR_HTTP_HEADER_NOT_FOUND.  
  
 *str*  
 Un riferimento per la [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che riceve le informazioni restituite.  
  
 *dwIndex*  
 Un valore di indice. Visualizzare *lpdwIndex*.  
  
 *pSysTime*  
 Un puntatore a un Win32 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto è stato creato dal [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
 È possibile recuperare i seguenti tipi di dati da `QueryInfo`:  
  
-   stringhe (valore predefinito)  
  
- `SYSTEMTIME` (per "dati:" "Expires:" e così via, le intestazioni)  
  
- Valore DWORD (per STATUS_CODE CONTENT_LENGTH, e così via.)  
  
 Quando una stringa viene scritta nel buffer e la funzione membro ha esito positivo, `lpdwBufferLength` contiene la lunghezza della stringa in caratteri meno 1 per il carattere di terminazione NULL.  
  
 I possibili *dwInfoLevel* i valori includono:  
  
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
  
##  <a name="queryinfostatuscode"></a>  QueryInfoStatusCode  
 Chiamare questa funzione membro per ottenere il codice di stato associato a una richiesta HTTP e inserirlo nella classe fornita *dwStatusCode* parametro.  
  
```  
BOOL QueryInfoStatusCode(DWORD& dwStatusCode) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwStatusCode*  
 Un riferimento a un codice di stato. Codici di stato indicano l'esito positivo o negativo dell'evento di richiesta. Visualizzare **osservazioni** per una selezione di descrizioni di codice di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto è stato creato dal [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
 Codici di stato HTTP rientrano in gruppi che indica l'esito positivo o negativo della richiesta. Nelle tabelle seguenti descrivono i gruppi di codice di stato e i codici di stato HTTP più comuni.  
  
|Raggruppa|Significato|  
|-----------|-------------|  
|200-299|Riuscito|  
|300-399|Informazioni|  
|400-499|Errore di richiesta|  
|500-599|Errore del server|  
  
 Codici di stato HTTP comuni:  
  
|Codice di stato|Significato|  
|-----------------|-------------|  
|200|URL che si trova, la trasmissione segue|  
|400|Richiesta incomprensibile|  
|404|Richiesta URL non trovata|  
|405|Server non supporta il metodo richiesto|  
|500|Errore sconosciuto del server|  
|503|Raggiunta la capacità del server|  
  
##  <a name="sendrequest"></a>  CHttpFile:: SendRequest  
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
 *pstrHeaders*  
 Un puntatore a una stringa contenente il nome delle intestazioni da inviare.  
  
 *dwHeadersLen*  
 La lunghezza delle intestazioni identificato da *pstrHeaders*.  
  
 *lpOptional*  
 Eventuali dati facoltativi da inviare immediatamente dopo le intestazioni della richiesta. Viene in genere utilizzato per le operazioni POST e PUT. Ciò può essere NULL se non sono presenti dati facoltativi da inviare.  
  
 *dwOptionalLen*  
 La lunghezza di *lpOptional*.  
  
 *strHeaders*  
 Stringa contenente il nome delle intestazioni per la richiesta inviata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.  
  
##  <a name="sendrequestex"></a>  CHttpFile::SendRequestEx  
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
 *dwTotalLen*  
 Numero di byte da inviare nella richiesta.  
  
 *dwFlags*  
 Flag che descrivono l'operazione. Per un elenco di flag appropriati, vedere [HttpSendRequestEx](http://msdn.microsoft.com/library/windows/desktop/aa384318) nel SDK di Windows.  
  
 *dwContext*  
 Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere la sezione Osservazioni.  
  
 *lpBuffIn*  
 Puntatore a un oggetto inizializzato [INTERNET_BUFFERS](http://msdn.microsoft.com/library/windows/desktop/aa385132) che descrive il buffer di input utilizzato per l'operazione.  
  
 *lpBuffOut*  
 Puntatore a un INTERNET_BUFFERS inizializzato che descrive il buffer di output utilizzato per l'operazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione consente all'applicazione di inviare i dati utilizzando il [scrivere](../../mfc/reference/cinternetfile-class.md#write) e [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) metodi `CInternetFile`. È necessario conoscere la lunghezza dei dati da inviare prima di chiamare l'override di questa funzione. Il primo override consente di specificare la lunghezza dei dati da inviare. Il secondo override accetta i puntatori alle strutture INTERNET_BUFFERS, che possono essere utilizzate per descrivere il buffer nel dettaglio.  
  
 Dopo aver scritto il contenuto del file, chiamare [EndRequest](#endrequest) per terminare l'operazione.  
  
 Il valore predefinito per *dwContext* inviato da MFC per il `CHttpFile` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CHttpFile` oggetto. Quando si chiama [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) oppure [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.  
  
### <a name="example"></a>Esempio  
 Questo frammento di codice invia il contenuto di una stringa in una DLL denominata MFCISAPI. DLL nel server host locale. Mentre in questo esempio Usa solo una chiamata a `WriteString`, usando più chiamate per l'invio dei dati in blocchi è accettabile.  
  
 [!code-cpp[NVC_MFCWinInet#9](../../mfc/codesnippet/cpp/chttpfile-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile (classe)](../../mfc/reference/cgopherfile-class.md)   
 [Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)
