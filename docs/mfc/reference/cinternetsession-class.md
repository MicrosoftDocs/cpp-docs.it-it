---
description: 'Altre informazioni su: classe CInternetSession'
title: CInternetSession (classe)
ms.date: 06/20/2018
f1_keywords:
- CInternetSession
- AFXINET/CInternetSession
- AFXINET/CInternetSession::CInternetSession
- AFXINET/CInternetSession::Close
- AFXINET/CInternetSession::EnableStatusCallback
- AFXINET/CInternetSession::GetContext
- AFXINET/CInternetSession::GetCookie
- AFXINET/CInternetSession::GetCookieLength
- AFXINET/CInternetSession::GetFtpConnection
- AFXINET/CInternetSession::GetGopherConnection
- AFXINET/CInternetSession::GetHttpConnection
- AFXINET/CInternetSession::OnStatusCallback
- AFXINET/CInternetSession::OpenURL
- AFXINET/CInternetSession::SetCookie
- AFXINET/CInternetSession::SetOption
helpviewer_keywords:
- CInternetSession [MFC], CInternetSession
- CInternetSession [MFC], Close
- CInternetSession [MFC], EnableStatusCallback
- CInternetSession [MFC], GetContext
- CInternetSession [MFC], GetCookie
- CInternetSession [MFC], GetCookieLength
- CInternetSession [MFC], GetFtpConnection
- CInternetSession [MFC], GetGopherConnection
- CInternetSession [MFC], GetHttpConnection
- CInternetSession [MFC], OnStatusCallback
- CInternetSession [MFC], OpenURL
- CInternetSession [MFC], SetCookie
- CInternetSession [MFC], SetOption
ms.assetid: ef54feb4-9d0f-4e65-a45d-7a4cf6c40e51
ms.openlocfilehash: 54ea5369bc0df2821cd9ac527a4ed91cfdc2c19f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339657"
---
# <a name="cinternetsession-class"></a>CInternetSession (classe)

Crea e inizializza una singola sessione o più sessioni Internet simultanee e descrive la connessione a un server proxy, se necessario.

## <a name="syntax"></a>Sintassi

```cpp
class CInternetSession : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetSession:: CInternetSession](#cinternetsession)|Costruisce un oggetto `CInternetSession`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetSession:: Close](#close)|Chiude la connessione Internet quando la sessione Internet viene terminata.|
|[CInternetSession:: EnableStatusCallback](#enablestatuscallback)|Stabilisce una routine di callback di stato.|
|[CInternetSession:: GetContext](#getcontext)|Chiude la connessione Internet quando la sessione Internet viene terminata.|
|[CInternetSession:: GetCookie](#getcookie)|Restituisce i cookie per l'URL specificato e per tutti i relativi URL padre.|
|[CInternetSession:: GetCookieLength](#getcookielength)|Recupera la variabile che specifica la lunghezza del cookie archiviato nel buffer.|
|[CInternetSession:: GetFtpConnection](#getftpconnection)|Apre una sessione FTP con un server. Registra l'utente.|
|[CInternetSession:: GetGopherConnection](#getgopherconnection)|Apre un server gopher per un'applicazione che sta tentando di aprire una connessione.|
|[CInternetSession:: GetHttpConnection](#gethttpconnection)|Apre un server HTTP per un'applicazione che sta tentando di aprire una connessione.|
|[CInternetSession:: OnStatusCallback](#onstatuscallback)|Aggiorna lo stato di un'operazione quando è abilitato il callback di stato.|
|[CInternetSession:: OpenURL](#openurl)|Analizza e apre un URL.|
|[CInternetSession:: secookie](#setcookie)|Imposta un cookie per l'URL specificato.|
|[CInternetSession:: SetOption](#setoption)|Imposta le opzioni per la sessione Internet.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetSession:: operator HINTERNET](#operator_hinternet)|Handle per la sessione Internet corrente.|

## <a name="remarks"></a>Commenti

Se la connessione Internet deve essere mantenuta per la durata di un'applicazione, è possibile creare un `CInternetSession` membro della classe [CWinApp](../../mfc/reference/cwinapp-class.md).

Una volta stabilita una sessione Internet, è possibile chiamare [OpenURL](#openurl). `CInternetSession` quindi analizza l'URL chiamando la funzione globale [AfxParseURL](internet-url-parsing-globals.md#afxparseurl). Indipendentemente dal tipo di protocollo, `CInternetSession` interpreta l'URL e lo gestisce automaticamente. Consente di gestire le richieste per i file locali identificati con la risorsa URL "file://". `OpenURL` restituirà un puntatore a un oggetto [CStdioFile](../../mfc/reference/cstdiofile-class.md) se il nome che viene passato è un file locale.

Se si apre un URL in un server Internet utilizzando `OpenURL` , è possibile leggere le informazioni dal sito. Se si desidera eseguire azioni specifiche del servizio (ad esempio, HTTP, FTP o gopher) sui file che si trovano in un server, è necessario stabilire la connessione appropriata con tale server. Per aprire un particolare tipo di connessione direttamente a un particolare servizio, utilizzare una delle funzioni membro seguenti:

- [GetGopherConnection](#getgopherconnection) per aprire una connessione a un servizio Gopher.

- [GetHttpConnection](#gethttpconnection) per aprire una connessione a un servizio http.

- [GetFtpConnection](#getftpconnection) per aprire una connessione a un servizio FTP.

[Seoption](#setoption) consente di impostare le opzioni di query della sessione, ad esempio i valori di timeout, il numero di tentativi e così via.

`CInternetSession` le funzioni membro [Secookie](#setcookie), [GetCookie](#getcookie)e [GetCookieLength](#getcookielength) forniscono gli strumenti per la gestione di un database di cookie Win32, tramite cui server e script conservano le informazioni sullo stato relative alla workstation client.

Per ulteriori informazioni sulle attività di programmazione Internet di base, vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md). Per informazioni generali sull'uso delle classi WinInet di MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

> [!NOTE]
> `CInternetSession` genererà un [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception) per i tipi di servizio non supportati. Attualmente sono supportati solo i tipi di servizio seguenti: FTP, HTTP, Gopher e file.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;`CInternetSession`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

## <a name="cinternetsessioncinternetsession"></a><a name="cinternetsession"></a> CInternetSession:: CInternetSession

Questa funzione membro viene chiamata quando `CInternetSession` viene creato un oggetto.

```cpp
CInternetSession(
    LPCTSTR pstrAgent = NULL,
    DWORD_PTR dwContext = 1,
    DWORD dwAccessType = PRE_CONFIG_INTERNET_ACCESS,
    LPCTSTR pstrProxyName = NULL,
    LPCTSTR pstrProxyBypass = NULL,
    DWORD dwFlags = 0);
```

### <a name="parameters"></a>Parametri

*pstrAgent*<br/>
Puntatore a una stringa che identifica il nome dell'applicazione o dell'entità che chiama le funzioni Internet (ad esempio, "Microsoft Internet browser"). Se *pstrAgent* è null (impostazione predefinita), il Framework chiama la funzione globale [AfxGetAppName](application-information-and-management.md#afxgetappname), che restituisce una stringa con terminazione null che contiene il nome di un'applicazione. Alcuni protocolli utilizzano questa stringa per identificare l'applicazione nel server.

*dwContext*<br/>
Identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](#onstatuscallback). Il valore predefinito è 1. Tuttavia, è possibile assegnare in modo esplicito un ID contesto specifico per l'operazione. L'oggetto e tutte le operazioni che verranno associate a tale ID di contesto.

*dwAccessType*<br/>
Tipo di accesso richiesto. Di seguito sono riportati i valori validi, esattamente uno dei quali può essere fornito:

- INTERNET_OPEN_TYPE_PRECONFIG connettersi con impostazioni preconfigurate nel registro di sistema. Questo tipo di accesso è impostato come predefinito. Per connettersi tramite un proxy TIS, impostare *dwAccessType* su questo valore; si imposta quindi il registro di sistema in modo appropriato.

- INTERNET_OPEN_TYPE_DIRECT connettersi direttamente a Internet.

- INTERNET_OPEN_TYPE_PROXY connettersi tramite un proxy CERN.

Per informazioni sulla connessione con diversi tipi di proxy, vedere [la procedura in un'applicazione client FTP tipica](../../mfc/steps-in-a-typical-ftp-client-application.md).

*pstrProxyName*<br/>
Nome del proxy CERN preferito se *dwAccessType* è impostato come INTERNET_OPEN_TYPE_PROXY. Il valore predefinito è NULL.

*pstrProxyBypass*<br/>
Puntatore a una stringa contenente un elenco facoltativo di indirizzi del server. Questi indirizzi possono essere ignorati quando si usa l'accesso proxy. Se viene specificato un valore NULL, l'elenco di bypass verrà letto dal registro di sistema. Questo parametro è significativo solo se *dwAccessType* è impostato su INTERNET_OPEN_TYPE_PROXY.

*dwFlags*<br/>
Indica varie opzioni di memorizzazione nella cache. Il valore predefinito è 0. I valori possibili includono:

- INTERNET_FLAG_DONT_CACHE non memorizzano nella cache i dati, in locale o in qualsiasi server gateway.

- Le operazioni di download INTERNET_FLAG_OFFLINE vengono soddisfatte solo tramite la cache permanente. Se l'elemento non esiste nella cache, viene restituito un codice di errore appropriato. Questo flag può essere combinato con l'operatore **OR bit per** bit ( **&#124;**).

### <a name="remarks"></a>Commenti

`CInternetSession` è la prima funzione Internet chiamata da un'applicazione. Inizializza le strutture di dati interne e prepara le chiamate future dall'applicazione.

Se non è possibile aprire alcuna connessione a Internet, `CInternetSession` genera un'eccezione [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).

### <a name="example"></a>Esempio

Vedere l'esempio per [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="cinternetsessionclose"></a><a name="close"></a> CInternetSession:: Close

Chiamare questa funzione membro quando l'applicazione ha terminato di utilizzare l' `CInternetSession` oggetto.

```cpp
virtual void Close();
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="cinternetsessionenablestatuscallback"></a><a name="enablestatuscallback"></a> CInternetSession:: EnableStatusCallback

Chiamare questa funzione membro per abilitare il callback dello stato.

```cpp
BOOL EnableStatusCallback(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se il callback è abilitato o disabilitato. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la cause dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Commenti

Quando si gestisce il callback di stato, è possibile fornire lo stato di avanzamento dell'operazione, ad esempio la risoluzione del nome, la connessione al server e così via, nella barra di stato dell'applicazione. La visualizzazione dello stato delle operazioni è particolarmente utile durante un'operazione a lungo termine.

Poiché i callback si verificano durante l'elaborazione della richiesta, l'applicazione deve spendere il minor tempo possibile nel callback per evitare la riduzione della velocità effettiva dei dati nella rete. Ad esempio, l'inserimento di una finestra di dialogo in un callback può essere un'operazione di lunga durata che il server termina la richiesta.

Non è possibile rimuovere il callback dello stato finché sono in sospeso tutti i callback.

Per gestire le operazioni in modo asincrono, è necessario creare un thread personalizzato o utilizzare le funzioni WinInet senza MFC.

## <a name="cinternetsessiongetcontext"></a><a name="getcontext"></a> CInternetSession:: GetContext

Chiamare questa funzione membro per ottenere il valore di contesto per una sessione dell'applicazione specifica.

```cpp
DWORD_PTR GetContext() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di contesto definito dall'applicazione.

### <a name="remarks"></a>Commenti

[OnStatusCallback](#onstatuscallback) usa l'ID del contesto restituito da `GetContext` per segnalare lo stato di una particolare applicazione. Ad esempio, quando un utente attiva una richiesta Internet che prevede la restituzione di informazioni sullo stato, il callback di stato USA l'ID del contesto per segnalare lo stato di tale richiesta specifica. Se l'utente attiva due richieste Internet separate che prevedono la restituzione di informazioni sullo stato, `OnStatusCallback` in vengono utilizzati gli identificatori di contesto per restituire lo stato delle richieste corrispondenti. Di conseguenza, l'identificatore di contesto viene usato per tutte le operazioni di callback dello stato ed è associato alla sessione fino al termine della sessione.

Per ulteriori informazioni sulle operazioni asincrone, vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md).

## <a name="cinternetsessiongetcookie"></a><a name="getcookie"></a> CInternetSession:: GetCookie

Questa funzione membro implementa il comportamento della funzione Win32 [InternetGetCookie](/windows/win32/api/wininet/nf-wininet-internetgetcookiew), come descritto nel Windows SDK.

```cpp
static BOOL GetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    LPTSTR pstrCookieData,
    DWORD dwBufLen);

static BOOL GetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    CString& strCookieData);
```

### <a name="parameters"></a>Parametri

*pstrUrl*<br/>
Puntatore a una stringa che contiene l'URL.

*pstrCookieName*<br/>
Puntatore a una stringa che contiene il nome del cookie da ottenere per l'URL specificato.

*pstrCookieData*<br/>
Nel primo overload, puntatore a una stringa che contiene l'indirizzo del buffer che riceve i dati del cookie. Questo valore può essere NULL. Nel secondo overload, un riferimento a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) per ricevere i dati del cookie.

*dwBufLen*<br/>
Variabile che specifica la dimensione del buffer *pstrCookieData* . Se la funzione ha esito positivo, il buffer riceve la quantità di dati copiati nel buffer di *pstrCookieData* . Se *pstrCookieData* è null, questo parametro riceve un valore che specifica la dimensione del buffer necessario per copiare tutti i dati del cookie.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo o FALSE in caso contrario. Se la chiamata ha esito negativo, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore. Si applicano i seguenti valori di errore:

- ERROR_NO_MORE_ITEMS non è presente alcun cookie per l'URL specificato e per tutti i relativi elementi padre.

- ERROR_INSUFFICIENT_BUFFER il valore passato in *dwBufLen* non è sufficiente per copiare tutti i dati del cookie. Il valore restituito in *dwBufLen* è la dimensione del buffer necessaria per ottenere tutti i dati.

### <a name="remarks"></a>Commenti

Nel secondo overload, MFC recupera i dati dei cookie nell'oggetto fornito `CString` .

## <a name="cinternetsessiongetcookielength"></a><a name="getcookielength"></a> CInternetSession:: GetCookieLength

Chiamare questa funzione membro per ottenere la lunghezza del cookie archiviato nel buffer.

```cpp
static DWORD GetCookieLength(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName);
```

### <a name="parameters"></a>Parametri

*pstrUrl*<br/>
Puntatore a una stringa che contiene l'URL

*pstrCookieName*<br/>
Puntatore a una stringa che contiene il nome del cookie.

### <a name="return-value"></a>Valore restituito

Valore DWORD che indica la lunghezza del cookie, memorizzato nel buffer. Zero se non esiste alcun cookie con il nome indicato da *pstrCookieName* .

### <a name="remarks"></a>Commenti

Questo valore viene usato da [GetCookie](#getcookie).

## <a name="cinternetsessiongetftpconnection"></a><a name="getftpconnection"></a> CInternetSession:: GetFtpConnection

Chiamare questa funzione membro per stabilire una connessione FTP e ottenere un puntatore a un `CFtpConnection` oggetto.

```cpp
CFtpConnection* GetFtpConnection(
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    BOOL bPassive = FALSE);
```

### <a name="parameters"></a>Parametri

*pstrServer*<br/>
Puntatore a una stringa che contiene il nome del server FTP.

*pstrUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente a cui accedere. Se NULL, il valore predefinito è anonimo.

*pstrPassword*<br/>
Puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se *pstrPassword* e *PSTRUSERNAME* sono entrambi null, la password anonima predefinita corrisponde al nome di posta elettronica dell'utente. Se *pstrPassword* è null (o una stringa vuota) ma *PSTRUSERNAME* non è null, viene utilizzata una password vuota. La tabella seguente descrive il comportamento per le quattro impostazioni possibili di *pstrUserName* e *pstrPassword*:

| *pstrUserName*  | *pstrPassword*  | Nome utente inviato al server FTP | Password inviata al server FTP |
|-----------------|-----------------|-----------------------------|-----------------------------|
|   NULL o ""   |   NULL o ""   |         Anonimo         |      Nome di posta elettronica dell'utente      |
| Stringa non NULL |   NULL o ""   |       *pstrUserName*        |             " "             |
|      NULL       | Stringa non NULL |            ERRORE            |            ERRORE            |
| Stringa non NULL | Stringa non NULL |       *pstrUserName*        |       *pstrPassword*        |

*nPort*<br/>
Numero che identifica la porta TCP/IP da utilizzare nel server.

*bPassive*<br/>
Specifica la modalità passiva o attiva per questa sessione FTP. Se è impostato su TRUE, l'API Win32 viene impostata `dwFlag` su INTERNET_FLAG_PASSIVE.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CFtpConnection](../../mfc/reference/cftpconnection-class.md) . Se la chiamata ha esito negativo, determinare la cause dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Commenti

`GetFtpConnection` si connette a un server FTP e crea e restituisce un puntatore a un `CFTPConnection` oggetto. Non esegue alcuna operazione specifica nel server. Se si intende leggere o scrivere su file, ad esempio, è necessario eseguire tali operazioni come passaggi distinti. Vedere le classi [CFtpConnection](../../mfc/reference/cftpconnection-class.md) e [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) per informazioni sulla ricerca di file, l'apertura di file, la lettura o la scrittura su file. Vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md) per i passaggi relativi all'esecuzione di attività comuni di connessione FTP.

### <a name="example"></a>Esempio

Vedere l'esempio per [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="cinternetsessiongetgopherconnection"></a><a name="getgopherconnection"></a> CInternetSession:: GetGopherConnection

Chiamare questa funzione membro per stabilire una nuova connessione a Gopher e ottenere un puntatore a un `CGopherConnection` oggetto.

```cpp
CGopherConnection* GetGopherConnection(
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### <a name="parameters"></a>Parametri

*pstrServer*<br/>
Puntatore a una stringa che contiene il nome del server gopher.

*pstrUserName*<br/>
Puntatore a una stringa che contiene il nome utente.

*pstrPassword*<br/>
Puntatore a una stringa contenente la password di accesso.

*nPort*<br/>
Numero che identifica la porta TCP/IP da utilizzare nel server.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) . Se la chiamata ha esito negativo, determinare la cause dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Commenti

`GetGopherConnection` si connette a un server gopher e crea e restituisce un puntatore a un `CGopherConnection` oggetto. Non esegue alcuna operazione specifica nel server. Se si desidera leggere o scrivere dati, ad esempio, è necessario eseguire tali operazioni come passaggi distinti. Per informazioni sulla ricerca di file, l'apertura di file e la lettura o la scrittura nei file, vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md), [CGopherFile](../../mfc/reference/cgopherfile-class.md)e [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) . Per informazioni sull'esplorazione di un sito FTP, vedere la funzione membro [OpenURL](#openurl). Vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md) per i passaggi relativi all'esecuzione di attività comuni di connessione a gopher.

## <a name="cinternetsessiongethttpconnection"></a><a name="gethttpconnection"></a> CInternetSession:: GetHttpConnection

Chiamare questa funzione membro per stabilire una connessione HTTP e ottenere un puntatore a un `CHttpConnection` oggetto.

```cpp
CHttpConnection* GetHttpConnection(
    LPCTSTR pstrServer,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL);

CHttpConnection* GetHttpConnection(
    LPCTSTR pstrServer,
    DWORD dwFlags,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL);
```

### <a name="parameters"></a>Parametri

*pstrServer*<br/>
Puntatore a una stringa contenente il nome del server HTTP.

*nPort*<br/>
Numero che identifica la porta TCP/IP da utilizzare nel server.

*pstrUserName*<br/>
Puntatore a una stringa che contiene il nome utente.

*pstrPassword*<br/>
Puntatore a una stringa contenente la password di accesso.

*dwFlags*<br/>
Qualsiasi combinazione di `INTERNET_FLAG_*` flag. Per una descrizione dei valori *dwFlags* , vedere la tabella nella sezione **osservazioni** di [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) .

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CHttpConnection](../../mfc/reference/chttpconnection-class.md) . Se la chiamata ha esito negativo, determinare la cause dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Commenti

`GetHttpConnection` si connette a un server HTTP e crea e restituisce un puntatore a un `CHttpConnection` oggetto. Non esegue alcuna operazione specifica nel server. Se si intende eseguire una query su un'intestazione HTTP, ad esempio, è necessario eseguire questa operazione come passaggio separato. Per informazioni sulle operazioni che è possibile eseguire tramite una connessione a un server HTTP, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CHttpFile](../../mfc/reference/chttpfile-class.md) . Per informazioni sull'esplorazione di un sito HTTP, vedere la funzione membro [OpenURL](#openurl). Vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md) per i passaggi relativi all'esecuzione di attività comuni di connessione HTTP.

## <a name="cinternetsessiononstatuscallback"></a><a name="onstatuscallback"></a> CInternetSession:: OnStatusCallback

Questa funzione membro viene chiamata dal Framework per aggiornare lo stato quando il callback di stato è abilitato e un'operazione è in sospeso.

```cpp
virtual void OnStatusCallback(
    DWORD_PTR dwContext,
    DWORD dwInternetStatus,
    LPVOID lpvStatusInformation,
    DWORD dwStatusInformationLength);
```

### <a name="parameters"></a>Parametri

*dwContext*<br/>
Valore di contesto fornito dall'applicazione.

*dwInternetStatus*<br/>
Codice di stato che indica il motivo per cui viene eseguito il callback. Per una tabella dei valori possibili, vedere la **sezione Osservazioni** .

*lpvStatusInformation*<br/>
Puntatore a un buffer contenente le informazioni pertinenti al callback.

*dwStatusInformationLength*<br/>
Dimensioni di *lpvStatusInformation*.

### <a name="remarks"></a>Commenti

È prima necessario chiamare [EnableStatusCallback](#enablestatuscallback) per sfruttare i vantaggi del callback di stato.

Il parametro *dwInternetStatus* indica l'operazione da eseguire e determina quale sarà il contenuto di *lpvStatusInformation* . *dwStatusInformationLength* indica la lunghezza dei dati inclusi in *lpvStatusInformation*. I valori di stato seguenti per *dwInternetStatus* sono definiti come segue:

|Valore|Significato|
|-----------|-------------|
|INTERNET_STATUS_RESOLVING_NAME|Ricerca dell'indirizzo IP del nome contenuto in *lpvStatusInformation*.|
|INTERNET_STATUS_NAME_RESOLVED|L'indirizzo IP del nome contenuto in *lpvStatusInformation* è stato trovato.|
|INTERNET_STATUS_CONNECTING_TO_SERVER|Connessione all'indirizzo del socket ([sockaddr](/windows/win32/winsock/sockaddr-2)) a cui fa riferimento *lpvStatusInformation*.|
|INTERNET_STATUS_CONNECTED_TO_SERVER|La connessione all'indirizzo del socket (SOCKADDR) a cui punta *lpvStatusInformation* è riuscita.|
|INTERNET_STATUS_SENDING_REQUEST|Invio della richiesta di informazioni al server. Il parametro *lpvStatusInformation* è null.|
|INTERNET_STATUS_ REQUEST_SENT|Invio della richiesta di informazioni al server completato. Il parametro *lpvStatusInformation* è null.|
|INTERNET_STATUS_RECEIVING_RESPONSE|In attesa che il server risponda a una richiesta. Il parametro *lpvStatusInformation* è null.|
|INTERNET_STATUS_RESPONSE_RECEIVED|Risposta ricevuta dal server completata. Il parametro *lpvStatusInformation* è null.|
|INTERNET_STATUS_CLOSING_CONNECTION|Chiusura della connessione al server. Il parametro *lpvStatusInformation* è null.|
|INTERNET_STATUS_CONNECTION_CLOSED|Chiusura della connessione al server completata. Il parametro *lpvStatusInformation* è null.|
|INTERNET_STATUS_HANDLE_CREATED|Usato dalla funzione API Win32 [InternetConnect](/windows/win32/api/wininet/nf-wininet-internetconnectw) per indicare che ha creato il nuovo handle. Ciò consente all'applicazione di chiamare la funzione Win32 [InternetCloseHandle](/windows/win32/api/wininet/nf-wininet-internetclosehandle) da un altro thread se la connessione richiede troppo tempo. Vedere Windows SDKfor ulteriori informazioni su queste funzioni.|
|INTERNET_STATUS_HANDLE_CLOSING|Il valore dell'handle è stato terminato.|

Eseguire l'override di questa funzione membro per richiedere un'azione prima di eseguire una routine di callback dello stato.

> [!NOTE]
> I callback di stato richiedono la protezione dello stato del thread. Se si usa MFC in una libreria condivisa, aggiungere la riga seguente all'inizio dell'override:

[!code-cpp[NVC_MFCHtmlHttp#8](../../mfc/reference/codesnippet/cpp/cinternetsession-class_1.cpp)]

Per ulteriori informazioni sulle operazioni asincrone, vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md).

## <a name="cinternetsessionopenurl"></a><a name="openurl"></a> CInternetSession:: OpenURL

Chiamare questa funzione membro per inviare la richiesta specificata al server HTTP e consentire al client di specificare altre intestazioni RFC822, MIME o HTTP da inviare insieme alla richiesta.

```cpp
CStdioFile* OpenURL(
    LPCTSTR pstrURL,
    DWORD_PTR dwContext = 1,
    DWORD dwFlags = INTERNET_FLAG_TRANSFER_ASCII,
    LPCTSTR pstrHeaders = NULL,
    DWORD dwHeadersLength = 0);
```

### <a name="parameters"></a>Parametri

*pstrURL*<br/>
Puntatore al nome dell'URL da cui iniziare la lettura. Sono supportati solo gli URL che iniziano con file:, FTP:, gopher: o http:. Asserisce se *pstrURL* è null.

*dwContext*<br/>
Valore definito dall'applicazione passato con l'handle restituito nel callback.

*dwFlags*<br/>
Flag che descrivono come gestire questa connessione. Per ulteriori informazioni sui flag validi, vedere la **sezione Osservazioni** . I flag validi sono:

- INTERNET_FLAG_TRANSFER_ASCII il valore predefinito. Trasferire il file come testo ASCII.

- INTERNET_FLAG_TRANSFER_BINARY trasferire il file come file binario.

- INTERNET_FLAG_RELOAD recuperare i dati dalla rete anche se sono memorizzati localmente nella cache.

- INTERNET_FLAG_DONT_CACHE non memorizzano nella cache i dati, in locale o in qualsiasi gateway.

- INTERNET_FLAG_SECURE questo flag è applicabile solo alle richieste HTTP. Richiede transazioni sicure in transito con Secure Sockets Layer o PCT.

- INTERNET_OPEN_FLAG_USE_EXISTING_CONNECT se possibile, riutilizzare le connessioni esistenti al server per le nuove richieste generate da `OpenUrl` anziché creare una nuova sessione per ogni richiesta di connessione.

- INTERNET_FLAG_PASSIVE utilizzata per un sito FTP. Usa la semantica FTP passiva. Utilizzato con [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) di `OpenURL` .

*pstrHeaders*<br/>
Puntatore a una stringa contenente le intestazioni da inviare al server HTTP.

*dwHeadersLength*<br/>
Lunghezza, in caratteri, delle intestazioni aggiuntive. Se è-1L e *pstrHeaders* è diverso da null, si presuppone che *pstrHeaders* sia terminato con zero e che la lunghezza venga calcolata.

### <a name="return-value"></a>Valore restituito

Restituisce un handle di file per i servizi Internet FTP, GOPHER, HTTP e di tipo FILE. Restituisce NULL se l'analisi ha avuto esito negativo.

Il puntatore `OpenURL` restituito dipende dal tipo di servizio di *pstrURL*. La tabella seguente illustra i possibili puntatori che `OpenURL` possono restituire.

|Tipo di URL|Restituisce|
|--------------|-------------|
|`file://`|`CStdioFile*`|
|`http://`|`CHttpFile*`|
|`gopher://`|`CGopherFile*`|
|`ftp://`|`CInternetFile*`|

### <a name="remarks"></a>Commenti

Il parametro *dwFlags* deve includere INTERNET_FLAG_TRANSFER_ASCII o INTERNET_FLAG_TRANSFER_BINARY, ma non entrambi. I flag rimanenti possono essere combinati con l'operatore **or** bit per bit ( **&#124;**).

`OpenURL`, che esegue il wrapping della funzione Win32 `InternetOpenURL` , consente solo il download, il recupero e la lettura dei dati da un server Internet. `OpenURL` non consente la modifica di file in una posizione remota, quindi non richiede alcun oggetto [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) .

Per utilizzare funzioni specifiche della connessione, ovvero specifiche del protocollo, ad esempio la scrittura in un file, è necessario aprire una sessione di, quindi aprire un particolare tipo di connessione e quindi utilizzare tale connessione per aprire un file nella modalità desiderata. `CInternetConnection`Per ulteriori informazioni sulle funzioni specifiche della connessione, vedere.

## <a name="cinternetsessionoperator-hinternet"></a><a name="operator_hinternet"></a> CInternetSession:: operator HINTERNET

Utilizzare questo operatore per ottenere l'handle di Windows per la sessione Internet corrente.

```cpp
operator HINTERNET() const;
```

## <a name="cinternetsessionsetcookie"></a><a name="setcookie"></a> CInternetSession:: secookie

Imposta un cookie per l'URL specificato.

```cpp
static BOOL SetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    LPCTSTR pstrCookieData);
```

### <a name="parameters"></a>Parametri

*pstrUrl*<br/>
Puntatore a una stringa con terminazione null che specifica l'URL per il quale deve essere impostato il cookie.

*pstrCookieName*<br/>
Puntatore a una stringa che contiene il nome del cookie.

*pstrCookieData*<br/>
Puntatore a una stringa che contiene i dati di stringa effettivi da associare all'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo o FALSE in caso contrario. Per ottenere il codice di errore specifico, chiamare `GetLastError.`

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del messaggio Win32 [InternetSetCookie](/windows/win32/api/wininet/nf-wininet-internetsetcookiew), come descritto nel Windows SDK.

## <a name="cinternetsessionsetoption"></a><a name="setoption"></a> CInternetSession:: SetOption

Chiamare questa funzione membro per impostare le opzioni per la sessione Internet.

```cpp
BOOL SetOption(
    DWORD dwOption,
    LPVOID lpBuffer,
    DWORD dwBufferLength,
    DWORD dwFlags = 0);

BOOL SetOption(
    DWORD dwOption,
    DWORD dwValue,
    DWORD dwFlags = 0);
```

### <a name="parameters"></a>Parametri

*dwOption*<br/>
Opzione Internet da impostare. Per un elenco delle opzioni possibili, vedere [flag di opzione](/windows/win32/WinInet/option-flags) in Windows SDKfor.

*lpBuffer*<br/>
Buffer che contiene l'impostazione dell'opzione.

*dwBufferLength*<br/>
Lunghezza di *lpBuffer* o della dimensione di *dwValue*.

*dwValue*<br/>
Valore DWORD che contiene l'impostazione dell'opzione.

*dwFlags*<br/>
Indica varie opzioni di memorizzazione nella cache. Il valore predefinito è 0. I valori possibili includono:

- INTERNET_FLAG_DONT_CACHE non memorizzano nella cache i dati, in locale o in qualsiasi server gateway.

- Le operazioni di download INTERNET_FLAG_OFFLINE vengono soddisfatte solo tramite la cache permanente. Se l'elemento non esiste nella cache, viene restituito un codice di errore appropriato. Questo flag può essere combinato con l'operatore **OR bit per** bit ( **&#124;**).

### <a name="return-value"></a>Valore restituito

Se l'operazione ha esito positivo, viene restituito un valore TRUE. Se si è verificato un errore, viene restituito il valore FALSE. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)<br/>
[Classe CFtpConnection](../../mfc/reference/cftpconnection-class.md)<br/>
[Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
