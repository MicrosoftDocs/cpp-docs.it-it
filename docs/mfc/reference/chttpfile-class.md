---
title: Classe CHttpFile | Documenti Microsoft
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
ms.openlocfilehash: 6e1020c8b0f2b97053951cde6eeb0724dcf60d02
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039076"
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
|[CHttpFile::GetVerb](#getverb)|Ottiene il verbo è stato usato in una richiesta a un server HTTP.|  
|[QueryInfo](#queryinfo)|Restituisce le intestazioni di richiesta o risposta dal server HTTP.|  
|[QueryInfoStatusCode](#queryinfostatuscode)|Recupera il codice di stato associato a una richiesta HTTP e lo inserisce nella classe fornita `dwStatusCode` parametro.|  
|[CHttpFile:: SendRequest](#sendrequest)|Invia una richiesta a un server HTTP.|  
|[CHttpFile::SendRequestEx](#sendrequestex)|Invia una richiesta a un server HTTP usando il [scrivere](../../mfc/reference/cinternetfile-class.md#write) oppure [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) metodi di `CInternetFile`.|  
  
## <a name="remarks"></a>Note  
 Se la sessione Internet legge i dati da un server HTTP, è necessario creare un'istanza di `CHttpFile`.  
  
 Per altre informazioni su come `CHttpFile` funziona con le altre classi MFC Internet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [CStdioFile](../../mfc/reference/cstdiofile-class.md)  
  
 [CInternetFile](../../mfc/reference/cinternetfile-class.md)  
  
 `CHttpFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="addrequestheaders"></a>  CHttpFile:: AddRequestHeaders  
 Chiamare questa funzione membro per aggiungere uno o più intestazioni di richiesta HTTP per la richiesta HTTP gestiscono.  
  
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
 Un puntatore a una stringa contenente l'intestazione o intestazioni da aggiungere alla richiesta. Ogni intestazione deve essere terminata da una coppia di CR/LF.  
  
 *dwFlags*  
 Modifica la semantica delle intestazioni di nuovo. Può essere uno dei seguenti:  
  
- `HTTP_ADDREQ_FLAG_COALESCE` Unisce le intestazioni con lo stesso nome, utilizzando il flag per aggiungere l'intestazione prima trovata per l'intestazione successivo. Ad esempio, "Accept: testo /\*" seguito da "Accept: audio /\*" comporta la formazione della sola intestazione "Accept: testo /\*audio /\*". È compito dell'applicazione chiamante per garantire uno schema coerente rispetto ai dati ricevuti dalle richieste inviate con le intestazioni fuse o separate.  
  
- `HTTP_ADDREQ_FLAG_REPLACE` Esegue un rimuovere e aggiungere per sostituire l'intestazione corrente. Il nome dell'intestazione verrà utilizzato per rimuovere l'intestazione corrente e il valore completo verrà utilizzato per aggiungere la nuova intestazione. Se il valore dell'intestazione è vuoto e viene trovata l'intestazione, verrà rimosso. Se non è vuota, viene sostituito il valore dell'intestazione.  
  
- `HTTP_ADDREQ_FLAG_ADD_IF_NEW` Aggiunge l'intestazione solo se non esiste già. Se è presente, viene restituito un errore.  
  
- `HTTP_ADDREQ_FLAG_ADD` Utilizzato con sostituzione. Aggiunge un'intestazione se non esiste.  
  
 *dwHeadersLen*  
 Lunghezza, espressa in caratteri, della *pstrHeaders*. Se si tratta quindi-1L *pstrHeaders* si presuppone che sia terminare con zero e la lunghezza viene calcolata.  
  
 *str*  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene l'intestazione della richiesta o intestazioni da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 `AddRequestHeaders` Accoda intestazioni aggiuntive, in formato libero per l'handle di richiesta HTTP. Si deve essere utilizzato dai client sofisticati che necessitano di un controllo dettagliato sulle esatta richiesta inviata al server HTTP.  
  
> [!NOTE]
>  L'applicazione può passare più intestazioni *pstrHeaders* oppure *str* per un `AddRequestHeaders` chiamare usando `HTTP_ADDREQ_FLAG_ADD` o `HTTP_ADDREQ_FLAG_ADD_IF_NEW`. Se l'applicazione tenta di rimuovere o sostituire un'intestazione usando `HTTP_ADDREQ_FLAG_REMOVE` oppure `HTTP_ADDREQ_FLAG_REPLACE`, è possibile specificare solo un'intestazione nel *lpszHeaders*.  
  
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
 *hFile*  
 Un handle a un file di Internet.  
  
 *hSession*  
 Un handle a una sessione di Internet.  
  
 *pstrObject*  
 Un puntatore a una stringa contenente il `CHttpFile` oggetto.  
  
 *pstrServer*  
 Un puntatore a una stringa contenente il nome del server.  
  
 *pstrVerb*  
 Un puntatore a una stringa contenente il metodo da usare durante l'invio della richiesta. Può essere **POST**, **HEAD**, o **ottenere**.  
  
 *dwContext*  
 Identificatore di contesto per il `CHttpFile` oggetto. Vedere **osservazioni** per ulteriori informazioni su questo parametro.  
  
 *pConnection*  
 Un puntatore a un [CHttpConnection](../../mfc/reference/chttpconnection-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Mai costruire una `CHttpFile` l'oggetto direttamente; piuttosto chiamare [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) o [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) invece.  
  
 Il valore predefinito per `dwContext` viene inviato da MFC per la `CHttpFile` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CHttpFile` oggetto. Quando si chiama `CInternetSession::OpenURL` oppure `CHttpConnection` per costruire un `CHttpFile` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato per l'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
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
 Flag che descrivono l'operazione. Per un elenco dei flag appropriati, vedere [HttpEndRequest](http://msdn.microsoft.com/library/windows/desktop/aa384230) in Windows SDK.  
  
 *lpBuffIn*  
 Puntatore a un oggetto inizializzato [INTERNET_BUFFERS](http://msdn.microsoft.com/library/windows/desktop/aa385132) che descrive il buffer di input utilizzato per l'operazione.  
  
 *dwContext*  
 Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere la sezione Osservazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata non riesce, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito per *dwContext* inviato da MFC per il `CHttpFile` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CHttpFile` oggetto. Quando si chiama [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) oppure [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato per l'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
##  <a name="getfileurl"></a>  CHttpFile::GetFileURL  
 Chiamare questa funzione membro per ottenere il nome del file sotto forma di URL HTTP.  
  
```  
virtual CString GetFileURL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente un URL che fa riferimento la risorsa associata a questo file.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
##  <a name="getobject"></a>  CHttpFile::GetObject  
 Chiamare questa funzione membro per ottenere il nome dell'oggetto associato a questo `CHttpFile`.  
  
```  
CString GetObject() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
##  <a name="getverb"></a>  CHttpFile::GetVerb  
 Chiamare questa funzione membro per ottenere HTTP verbo (o del metodo) associato a questo `CHttpFile`.  
  
```  
CString GetVerb() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome del verbo HTTP (o metodo).  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
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
 Una combinazione di attributo da Progettazione query e i flag seguenti che specificano il tipo di informazioni richieste:  
  
- **HTTP_QUERY_CUSTOM** trova il nome dell'intestazione e restituisce questo valore in *lpvBuffer* nell'output. **HTTP_QUERY_CUSTOM** genera un'asserzione se l'intestazione non viene trovato.  
  
- **HTTP_QUERY_FLAG_REQUEST_HEADERS** in genere, l'applicazione esegue una query le intestazioni di risposta, ma un'applicazione può richiedere anche le intestazioni di richiesta utilizzando il flag.  
  
- **HTTP_QUERY_FLAG_SYSTEMTIME** per tali intestazioni il cui valore è una stringa di data/ora, ad esempio "Last-Modified-Time," questo flag viene restituito il valore dell'intestazione come Win32 standard [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura che non richiede il applicazione per analizzare i dati. Se si utilizza questo flag, è possibile utilizzare il `SYSTEMTIME` eseguire l'override della funzione.  
  
- **HTTP_QUERY_FLAG_NUMBER** per tali intestazioni il cui valore è un numero, ad esempio il codice di stato, questo flag restituisce i dati come un numero a 32 bit.  
  
 Vedere la **osservazioni** sezione per un elenco dei possibili valori.  
  
 *lpvBuffer*  
 Un puntatore al buffer che riceve le informazioni.  
  
 *lpdwBufferLength*  
 In ingresso, punta a un valore che contiene la lunghezza del buffer di dati, in numero di caratteri o byte. Vedere la **osservazioni** sezione per informazioni più dettagliate su questo parametro.  
  
 *lpdwIndex*  
 Puntatore a un indice in base zero dell'intestazione. Può essere **NULL**. Utilizzare questo flag per enumerare più intestazioni con lo stesso nome. Per l'input, *lpdwIndex* indica l'indice dell'intestazione specificata da restituire. Nell'output, *lpdwIndex* indica l'indice dell'intestazione successiva. Se l'indice successivo non viene trovato, **ERROR_HTTP_HEADER_NOT_FOUND** viene restituito.  
  
 *str*  
 Un riferimento per il [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che riceve le informazioni restituite.  
  
 *dwIndex*  
 Un valore di indice. Vedere *lpdwIndex*.  
  
 *pSysTime*  
 Un puntatore a un Win32 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
 È possibile recuperare i seguenti tipi di dati da `QueryInfo`:  
  
-   stringhe (impostazione predefinita)  
  
- `SYSTEMTIME` (per "dati:" "Expires:" e così via, le intestazioni)  
  
- `DWORD` (per **STATUS_CODE**, **CONTENT_LENGTH**, ecc.)  
  
 Quando una stringa viene scritto nel buffer e viene eseguita la funzione membro, `lpdwBufferLength` contiene la lunghezza della stringa in caratteri meno 1 per la terminazione **NULL** carattere.  
  
 I possibili *dwInfoLevel* i valori includono:  
  
- **HTTP_QUERY_MIME_VERSION**  
  
- **HTTP_QUERY_CONTENT_TYPE**  
  
- **HTTP_QUERY_CONTENT_TRANSFER_ENCODING**  
  
- **HTTP_QUERY_CONTENT_ID**  
  
- **HTTP_QUERY_CONTENT_DESCRIPTION**  
  
- **HTTP_QUERY_CONTENT_LENGTH**  
  
- **HTTP_QUERY_ALLOWED_METHODS**  
  
- **HTTP_QUERY_PUBLIC_METHODS**  
  
- **HTTP_QUERY_DATE**  
  
- **HTTP_QUERY_EXPIRES**  
  
- **HTTP_QUERY_LAST_MODIFIED**  
  
- **HTTP_QUERY_MESSAGE_ID**  
  
- **HTTP_QUERY_URI**  
  
- **HTTP_QUERY_DERIVED_FROM**  
  
- **HTTP_QUERY_LANGUAGE**  
  
- **HTTP_QUERY_COST**  
  
- **HTTP_QUERY_WWW_LINK**  
  
- **HTTP_QUERY_PRAGMA**  
  
- **HTTP_QUERY_VERSION**  
  
- **HTTP_QUERY_STATUS_CODE**  
  
- **HTTP_QUERY_STATUS_TEXT**  
  
- **HTTP_QUERY_RAW_HEADERS**  
  
- **HTTP_QUERY_RAW_HEADERS_CRLF**  
  
##  <a name="queryinfostatuscode"></a>  QueryInfoStatusCode  
 Chiamare questa funzione membro per ottenere il codice di stato associato a una richiesta HTTP e lo inserisce nella fornito *dwStatusCode* parametro.  
  
```  
BOOL QueryInfoStatusCode(DWORD& dwStatusCode) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwStatusCode*  
 Un riferimento a un codice di stato. Codici di stato indicano l'esito positivo o negativo dell'evento di richiesta. Vedere **osservazioni** per una selezione di descrizioni dei codici di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo dopo una chiamata a [SendRequest](#sendrequest) o in un `CHttpFile` oggetto creato correttamente da [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
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
|404|Richiesta URL non trovato|  
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
 La lunghezza delle intestazioni identificate *pstrHeaders*.  
  
 *lpOptional*  
 Tutti i dati facoltativi per l'invio immediatamente dopo le intestazioni della richiesta. Viene in genere utilizzato per il **POST** e **inserire** operazioni. Può trattarsi **NULL** se non sono presenti dati facoltativi per l'invio.  
  
 *dwOptionalLen*  
 La lunghezza di *lpOptional*.  
  
 *strHeaders*  
 Stringa contenente il nome delle intestazioni per la richiesta inviata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata non riesce, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.  
  
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
 Flag che descrivono l'operazione. Per un elenco dei flag appropriati, vedere [HttpSendRequestEx](http://msdn.microsoft.com/library/windows/desktop/aa384318) in Windows SDK.  
  
 *dwContext*  
 Identificatore di contesto per l'operazione `CHttpFile`. Per ulteriori informazioni su questo parametro, vedere la sezione Osservazioni.  
  
 *lpBuffIn*  
 Puntatore a un oggetto inizializzato [INTERNET_BUFFERS](http://msdn.microsoft.com/library/windows/desktop/aa385132) che descrive il buffer di input utilizzato per l'operazione.  
  
 *lpBuffOut*  
 Puntatore a un oggetto inizializzato **INTERNET_BUFFERS** che descrive il buffer di output utilizzato per l'operazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. Se la chiamata non riesce, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione consente all'applicazione di inviare i dati utilizzando il [scrivere](../../mfc/reference/cinternetfile-class.md#write) e [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) metodi di `CInternetFile`. È necessario conoscere la lunghezza dei dati da inviare prima di chiamare l'override di questa funzione. Il primo override consente di specificare la lunghezza dei dati che si desidera inviare. Il secondo override accetta i puntatori ai **INTERNET_BUFFERS** strutture, che possono essere utilizzate per descrivere il buffer in maggior dettaglio.  
  
 Dopo aver scritto il contenuto del file, chiamare [EndRequest](#endrequest) per terminare l'operazione.  
  
 Il valore predefinito per *dwContext* inviato da MFC per il `CHttpFile` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CHttpFile` oggetto. Quando si chiama [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) oppure [CHttpConnection](../../mfc/reference/chttpconnection-class.md) per costruire un `CHttpFile` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato per l'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
### <a name="example"></a>Esempio  
 Questo frammento di codice invia il contenuto di una stringa in una DLL denominata MFCISAPI. DLL nel server di LOCALHOST. Sebbene questo esempio viene utilizzata una sola chiamata a `WriteString`, l'utilizzo di più chiamate per inviare i dati in blocchi è accettabile.  
  
 [!code-cpp[NVC_MFCWinInet#9](../../mfc/codesnippet/cpp/chttpfile-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile (classe)](../../mfc/reference/cgopherfile-class.md)   
 [Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)
