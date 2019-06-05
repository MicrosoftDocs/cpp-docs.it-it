---
title: Classe CInternetSession
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
ms.openlocfilehash: e3d6d319a963fbc24e89bf8c4c0858cd80ec5a9d
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66503464"
---
# <a name="cinternetsession-class"></a>Classe CInternetSession

Crea e inizializza una singola sessione o più sessioni Internet simultanee e descrive la connessione a un server proxy, se necessario.

## <a name="syntax"></a>Sintassi

```cpp
class CInternetSession : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetSession::CInternetSession](#cinternetsession)|Costruisce un oggetto `CInternetSession`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetSession::Close](#close)|Chiude la connessione a Internet quando viene terminata la sessione di Internet.|
|[CInternetSession::EnableStatusCallback](#enablestatuscallback)|Stabilisce una routine di callback dello stato.|
|[CInternetSession::GetContext](#getcontext)|Chiude la connessione a Internet quando viene terminata la sessione di Internet.|
|[CInternetSession::GetCookie](#getcookie)|Restituisce i cookie per l'URL specificato e tutto il relativo elemento padre degli URL.|
|[CInternetSession::GetCookieLength](#getcookielength)|Recupera la variabile che specifica la lunghezza del cookie memorizzato nel buffer.|
|[CInternetSession::GetFtpConnection](#getftpconnection)|Apre una sessione FTP con un server. Log per l'utente.|
|[CInternetSession::GetGopherConnection](#getgopherconnection)|Apre un server gopher per un'applicazione che sta tentando di aprire una connessione.|
|[CInternetSession::GetHttpConnection](#gethttpconnection)|Apre un server HTTP per un'applicazione che sta tentando di aprire una connessione.|
|[CInternetSession::OnStatusCallback](#onstatuscallback)|Aggiorna lo stato di un'operazione quando viene abilitato il callback dello stato.|
|[CInternetSession::OpenURL](#openurl)|Analizza e apre un URL.|
|[CInternetSession::SetCookie](#setcookie)|Imposta un cookie per l'URL specificato.|
|[CInternetSession::SetOption](#setoption)|Imposta le opzioni per la sessione di Internet.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetSession::operator HINTERNET](#operator_hinternet)|Handle per la sessione corrente di Internet.|

## <a name="remarks"></a>Note

Se la connessione Internet deve essere mantenuta per tutta la durata di un'applicazione, è possibile creare un `CInternetSession` membro della classe [CWinApp](../../mfc/reference/cwinapp-class.md).

Dopo aver stabilito una sessione di Internet, è possibile chiamare [OpenURL](#openurl). `CInternetSession` quindi analizza l'URL per l'utente chiamando la funzione globale [AfxParseURL](internet-url-parsing-globals.md#afxparseurl). Indipendentemente dal relativo tipo di protocollo, `CInternetSession` interpreta l'URL e lo gestisce per l'utente. È possibile gestire le richieste per i file locali identificati con la risorsa di URL "file://". `OpenURL` Restituisce un puntatore a un [CStdioFile](../../mfc/reference/cstdiofile-class.md) oggetto se il nome viene passato è un file locale.

Se si apre un URL in un server Internet tramite `OpenURL`, è possibile leggere informazioni dal sito. Se si vogliono eseguire azioni specifiche del servizio (ad esempio, HTTP, FTP o gopher) nel file che si trovano in un server, è necessario stabilire la connessione appropriata con quel server. Per aprire un particolare tipo di connessione direttamente a un determinato servizio, usare una delle funzioni membro seguenti:

- [GetGopherConnection](#getgopherconnection) per aprire una connessione a un servizio gopher.

- [GetHttpConnection](#gethttpconnection) per aprire una connessione a un servizio HTTP.

- [GetFtpConnection](#getftpconnection) per aprire una connessione a un servizio FTP.

[SetOption](#setoption) consente di impostare le opzioni di query della sessione, ad esempio i valori di timeout, numero di tentativi e così via.

`CInternetSession` funzioni membro [SetCookie](#setcookie), [GetCookie](#getcookie), e [GetCookieLength](#getcookielength) forniscono i mezzi per gestire un database di cookie di Win32, attraverso il quale gestiscono server e gli script informazioni sullo stato sulle workstation client.

Per altre informazioni sulle attività di programmazione Internet base, vedere l'articolo [Internet primi passaggi: WinInet](../../mfc/wininet-basics.md). Per informazioni generali sull'utilizzo delle classi WinInet MFC, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).

> [!NOTE]
> `CInternetSession` Genera un [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception) per i tipi di servizio non supportato. Attualmente sono supportati solo i tipi di servizio seguenti: FTP, HTTP, gopher e file.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;`CInternetSession`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

## <a name="cinternetsession"></a> CInternetSession::CInternetSession

Questa funzione membro viene chiamata quando un `CInternetSession` oggetto viene creato.

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
Un puntatore a una stringa che identifica il nome dell'applicazione o entità chiamando le funzioni di Internet (ad esempio, "Microsoft Internet Browser"). Se *pstrAgent* è NULL (predefinito), il framework chiama la funzione globale [AfxGetAppName](application-information-and-management.md#afxgetappname), che restituisce una stringa con terminazione null che contiene il nome di un'applicazione. Alcuni protocolli questa stringa viene utilizzata per identificare l'applicazione al server.

*dwContext*<br/>
L'identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](#onstatuscallback). Il valore predefinito è impostato su 1. Tuttavia, è possibile assegnare in modo esplicito un ID di contesto specifico per l'operazione. L'oggetto e qualsiasi lavoro che svolto da associare con tale ID del contesto.

*dwAccessType*<br/>
Il tipo di accesso necessaria. Di seguito sono i valori validi, uno dei quali può essere fornito:

- Connetti INTERNET_OPEN_TYPE_PRECONFIG tramite impostazioni nel Registro di sistema preconfigurate. Questo tipo di accesso è impostato come predefinito. Per connettersi tramite un proxy TIS, impostata *dwAccessType* in questo valore; è quindi impostare il Registro di sistema in modo appropriato.

- INTERNET_OPEN_TYPE_DIRECT connettersi direttamente a Internet.

- INTERNET_OPEN_TYPE_PROXY connettersi tramite un proxy CERN.

Per informazioni sulla connessione con diversi tipi di proxy, vedere [i passaggi in un'applicazione Client FTP tipica](../../mfc/steps-in-a-typical-ftp-client-application.md).

*pstrProxyName*<br/>
Il nome del proxy CERN preferito se *dwAccessType* viene impostato come INTERNET_OPEN_TYPE_PROXY. Il valore predefinito è NULL.

*pstrProxyBypass*<br/>
Un puntatore a una stringa contenente un elenco facoltativo di indirizzi del server. Questi indirizzi possono essere ignorati quando si usa l'accesso al proxy. Se viene fornito un valore NULL, l'elenco di esclusione leggerà dal Registro di sistema. Questo parametro è significativo solo se *dwAccessType* è impostato su INTERNET_OPEN_TYPE_PROXY.

*dwFlags*<br/>
Indica diverse opzioni di memorizzazione nella cache. Il valore predefinito è impostato su 0. I valori possibili includono:

- INTERNET_FLAG_DONT_CACHE nella cache i dati, sia localmente che in tutti i server gateway.

- Scaricare INTERNET_FLAG_OFFLINE operazioni sono soddisfatto usando solo la cache persistente. Se l'elemento non esiste nella cache, viene restituito un codice di errore appropriato. Questo flag può essere combinato con i bit per bit **oppure** ( **&#124;** ) operatore.

### <a name="remarks"></a>Note

`CInternetSession` la prima funzione Internet viene chiamata da un'applicazione. Inizializza strutture di dati interne e lo prepara per le future chiamate dall'applicazione.

Se non si può aprire alcuna connessione a Internet, `CInternetSession` genera una [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="close"></a>  CInternetSession::Close

Chiamare questa funzione membro quando l'applicazione ha finito di utilizzare il `CInternetSession` oggetto.

```cpp
virtual void Close();
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="enablestatuscallback"></a>  CInternetSession::EnableStatusCallback

Chiamare questa funzione membro per abilitare i callback dello stato.

```cpp
BOOL EnableStatusCallback(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se i callback è abilitato o disabilitato. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.

### <a name="remarks"></a>Note

Quando si gestisce il callback dello stato, è possibile fornire lo stato sullo stato di avanzamento dell'operazione (ad esempio, la risoluzione nome, la connessione al server e così via) nella barra di stato dell'applicazione. Visualizzazione dello stato dell'operazione è particolarmente utile durante un'operazione a lungo termine.

Perché i callback eseguiti durante l'elaborazione della richiesta, l'applicazione dovrebbe impiegare il minor tempo possibile nel callback da impedire riduzioni di velocità effettiva dei dati alla rete. Inserimento di una finestra di dialogo in un callback, ad esempio, potrebbe essere un'operazione lunga che il server termina la richiesta.

Impossibile rimuovere il callback dello stato, purché i callback sono in sospeso.

Per gestire eventuali operazioni in modo asincrono, è necessario creare il proprio thread oppure usare le funzioni di WinInet senza MFC.

## <a name="getcontext"></a>  CInternetSession::GetContext

Chiamare questa funzione membro per ottenere il valore di contesto per una sessione specifica applicazione.

```cpp
DWORD_PTR GetContext() const;
```

### <a name="return-value"></a>Valore restituito

Il contesto definito dall'applicazione identificatore.

### <a name="remarks"></a>Note

[OnStatusCallback](#onstatuscallback) Usa l'ID del contesto restituito dalla `GetContext` per segnalare lo stato di una determinata applicazione. Ad esempio, quando un utente attiva una richiesta Internet che prevede la restituzione di informazioni sullo stato, il callback dello stato Usa l'ID del contesto per segnalare lo stato per la richiesta specifica. Se l'utente attiva due Internet richiede che entrambe prevedono la restituzione di informazioni sullo stato, `OnStatusCallback` utilizza gli identificatori di contesto per restituire lo stato delle richieste corrispondente. Di conseguenza, l'identificatore di contesto viene utilizzato per tutte le operazioni di callback di stato, ed è associata alla sessione fino a quando la sessione viene terminata.

Per altre informazioni sulle operazioni asincrone, vedere l'articolo [Internet primi passaggi: WinInet](../../mfc/wininet-basics.md).

## <a name="getcookie"></a>  CInternetSession::GetCookie

Questa funzione membro implementa il comportamento della funzione Win32 [InternetGetCookie](/windows/desktop/api/wininet/nf-wininet-internetgetcookiea), come descritto nel SDK di Windows.

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
Un puntatore a una stringa contenente l'URL.

*pstrCookieName*<br/>
Un puntatore a una stringa contenente il nome del cookie da ottenere per l'URL specificato.

*pstrCookieData*<br/>
Nel primo overload, un puntatore a una stringa contenente l'indirizzo del buffer che riceve i dati del cookie. Questo valore può essere NULL. Nel secondo overload, un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per ricevere i dati del cookie.

*dwBufLen*<br/>
La variabile che specifica le dimensioni dei *pstrCookieData* buffer. Se la funzione ha esito positivo, il buffer riceve la quantità di dati copiati per la *pstrCookieData* buffer. Se *pstrCookieData* è NULL, questo parametro riceve un valore che specifica la dimensione del buffer necessarie per copiare tutti i dati del cookie.

### <a name="return-value"></a>Valore restituito

In caso contrario, restituisce TRUE se ha esito positivo o FALSE. Se la chiamata ha esito negativo, chiamare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la causa dell'errore. Si applicano i valori di errore seguente:

- ERROR_NO_MORE_ITEMS c'è nessun cookie per l'URL specificato e tutti i relativi elementi padre.

- Il valore passato ERROR_INSUFFICIENT_BUFFER *dwBufLen* è insufficiente per copiare tutti i dati del cookie. Il valore restituito in *dwBufLen* è la dimensione del buffer necessarie per ottenere tutti i dati.

### <a name="remarks"></a>Note

Nel secondo overload, MFC recupera i dati del cookie in fornito `CString` oggetto.

## <a name="getcookielength"></a>  CInternetSession::GetCookieLength

Chiamare questa funzione membro per ottenere la lunghezza del cookie memorizzato nel buffer.

```cpp
static DWORD GetCookieLength(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName);
```

### <a name="parameters"></a>Parametri

*pstrUrl*<br/>
Un puntatore a una stringa contenente l'URL

*pstrCookieName*<br/>
Un puntatore a una stringa contenente il nome del cookie.

### <a name="return-value"></a>Valore restituito

Un valore DWORD che indica la lunghezza del cookie, archiviato nel buffer. Zero se nessun cookie con il nome indicato dal *pstrCookieName* esiste.

### <a name="remarks"></a>Note

Questo valore viene usato da [GetCookie](#getcookie).

## <a name="getftpconnection"></a>  CInternetSession::GetFtpConnection

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
Un puntatore a una stringa contenente il nome del server FTP.

*pstrUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonymous.

*pstrPassword*<br/>
Un puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se entrambe *pstrPassword* e *pstrUserName* sono NULL, la password anonima predefinita è il nome dell'utente tramite posta elettronica. Se *pstrPassword* è NULL (o una stringa vuota), ma *pstrUserName* non è NULL, viene usata una password vuota. La tabella seguente descrive il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:

| *pstrUserName*  | *pstrPassword*  | Nome utente inviato al server FTP | Password inviati al server FTP |
|-----------------|-----------------|-----------------------------|-----------------------------|
|   NULL o ""   |   NULL o ""   |         "anonymous"         |      Nome messaggio di posta elettronica dell'utente      |
| Stringa non NULL |   NULL o ""   |       *pstrUserName*        |             " "             |
|      NULL       | Stringa non NULL |            ERROR            |            ERROR            |
| Stringa non NULL | Stringa non NULL |       *pstrUserName*        |       *pstrPassword*        |

*nPort*<br/>
Numero che identifica la porta TCP/IP da usare nel server.

*bPassive*<br/>
Specifica la modalità passiva o attiva per questa sessione FTP. Se impostato su TRUE, imposta l'API Win32 `dwFlag` a INTERNET_FLAG_PASSIVE.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CFtpConnection](../../mfc/reference/cftpconnection-class.md) oggetto. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.

### <a name="remarks"></a>Note

`GetFtpConnection` si connette a un server FTP, crea e restituisce un puntatore a un `CFTPConnection` oggetto. Non esegue qualsiasi operazione specifica nel server. Se si prevede di leggere o scrivere in file, ad esempio, è necessario eseguire queste operazioni in due fasi distinte. Vedere le classi [CFtpConnection](../../mfc/reference/cftpconnection-class.md) e [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) per informazioni su ricerca di file, aprire i file e la lettura o scrittura su file. Vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md) per i passaggi di esecuzione di attività comuni di connessione FTP.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="getgopherconnection"></a>  CInternetSession::GetGopherConnection

Chiamare questa funzione membro per stabilire una nuova connessione gopher e ottenere un puntatore a un `CGopherConnection` oggetto.

```cpp
CGopherConnection* GetGopherConnection(
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### <a name="parameters"></a>Parametri

*pstrServer*<br/>
Un puntatore a una stringa contenente il nome del server gopher.

*pstrUserName*<br/>
Un puntatore a una stringa contenente il nome utente.

*pstrPassword*<br/>
Un puntatore a una stringa contenente la password di accesso.

*nPort*<br/>
Numero che identifica la porta TCP/IP da usare nel server.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) oggetto. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.

### <a name="remarks"></a>Note

`GetGopherConnection` si connette a un server gopher e crea e restituisce un puntatore a un `CGopherConnection` oggetto. Non esegue qualsiasi operazione specifica nel server. Se si prevede di leggere o scrivere dati, ad esempio, è necessario eseguire queste operazioni in due fasi distinte. Vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md), [CGopherFile](../../mfc/reference/cgopherfile-class.md), e [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) per informazioni su ricerca di file, aprire i file e la lettura o scrittura su file. Per informazioni sull'esplorazione di un sito FTP, vedere la funzione membro [OpenURL](#openurl). Vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md) per i passaggi di esecuzione di attività di connessione comuni gopher.

## <a name="gethttpconnection"></a>  CInternetSession::GetHttpConnection

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
Un puntatore a una stringa contenente il nome del server HTTP.

*nPort*<br/>
Numero che identifica la porta TCP/IP da usare nel server.

*pstrUserName*<br/>
Un puntatore a una stringa contenente il nome utente.

*pstrPassword*<br/>
Un puntatore a una stringa contenente la password di accesso.

*dwflags*<br/>
Qualsiasi combinazione del `INTERNET_FLAG_*` flag. Vedere la tabella nel **osservazioni** sezione del [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) per una descrizione delle *dwFlags* valori.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CHttpConnection](../../mfc/reference/chttpconnection-class.md) oggetto. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando il generata [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.

### <a name="remarks"></a>Note

`GetHttpConnection` si connette a un server HTTP e crea e restituisce un puntatore a un `CHttpConnection` oggetto. Non esegue qualsiasi operazione specifica nel server. Se si prevede di eseguire query di un'intestazione HTTP, ad esempio, è necessario eseguire questa operazione come passaggio separato. Vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CHttpFile](../../mfc/reference/chttpfile-class.md) per informazioni sulle operazioni eseguibili con una connessione a un server HTTP. Per informazioni sull'esplorazione di un sito HTTP, vedere la funzione membro [OpenURL](#openurl). Vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md) per i passaggi di esecuzione di attività comuni di connessione HTTP.

## <a name="onstatuscallback"></a>  CInternetSession::OnStatusCallback

Questa funzione membro viene chiamata dal framework per aggiornare lo stato quando viene abilitato il callback dello stato e un'operazione è in sospeso.

```cpp
virtual void OnStatusCallback(
    DWORD_PTR dwContext,
    DWORD dwInternetStatus,
    LPVOID lpvStatusInformation,
    DWORD dwStatusInformationLength);
```

### <a name="parameters"></a>Parametri

*dwContext*<br/>
Il valore di contesto fornito dall'applicazione.

*dwInternetStatus*<br/>
Un codice di stato che indica il motivo per cui è stata effettuata la richiamata. Visualizzare **osservazioni** per una tabella di valori possibili.

*lpvStatusInformation*<br/>
Un puntatore a un buffer contenente informazioni relative a questo callback.

*dwStatusInformationLength*<br/>
Il valore pari *lpvStatusInformation*.

### <a name="remarks"></a>Note

È prima necessario chiamare [EnableStatusCallback](#enablestatuscallback) possa sfruttare i vantaggi di callback dello stato.

Il *dwInternetStatus* parametro indica l'operazione viene eseguita e determina quali il contenuto delle *lpvStatusInformation* sarà. *dwStatusInformationLength* indica la lunghezza dei dati inclusi in *lpvStatusInformation*. Lo stato seguente i valori per *dwInternetStatus* sono definiti come segue:

|Value|Significato|
|-----------|-------------|
|INTERNET_STATUS_RESOLVING_NAME|Cercare l'indirizzo IP del nome del contenuto in *lpvStatusInformation*.|
|INTERNET_STATUS_NAME_RESOLVED|È stato trovato l'indirizzo IP del nome del contenuto in *lpvStatusInformation*.|
|INTERNET_STATUS_CONNECTING_TO_SERVER|La connessione per l'indirizzo del socket ([SOCKADDR](/windows/desktop/winsock/sockaddr-2)) a cui punta *lpvStatusInformation*.|
|INTERNET_STATUS_CONNECTED_TO_SERVER|Connessione stabilita con l'indirizzo del socket (SOCKADDR) a cui punta *lpvStatusInformation*.|
|INTERNET_STATUS_SENDING_REQUEST|Inviare la richiesta di informazioni al server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_ REQUEST_SENT|È stato inviato la richiesta di informazioni al server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_RECEIVING_RESPONSE|In attesa per il server che risponde a una richiesta. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_RESPONSE_RECEIVED|È stato ricevuto una risposta dal server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_CLOSING_CONNECTION|Chiusura della connessione al server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_CONNECTION_CLOSED|È stata chiusa la connessione al server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_HANDLE_CREATED|Usato dalla funzione API Win32 [InternetConnect](/windows/desktop/api/wininet/nf-wininet-internetconnecta) per indicare che ha creato il nuovo handle. In questo modo, la funzione Win32 di applicazione [InternetCloseHandle](/windows/desktop/api/wininet/nf-wininet-internetclosehandle) da un altro thread se la connessione sta richiedendo troppo tempo. Vedere altre informazioni su queste funzioni SDKfor di Windows.|
|INTERNET_STATUS_HANDLE_CLOSING|È stato terminato il valore dell'handle.|

Eseguire l'override di questa funzione membro per richiedere un'azione prima dell'esecuzione di una routine di callback dello stato.

> [!NOTE]
> Callback stato necessario garantire la protezione stato del thread. Se si Usa MFC in una libreria condivisa, aggiungere la riga seguente all'inizio della sostituzione:

[!code-cpp[NVC_MFCHtmlHttp#8](../../mfc/reference/codesnippet/cpp/cinternetsession-class_1.cpp)]

Per altre informazioni sulle operazioni asincrone, vedere l'articolo [Internet primi passaggi: WinInet](../../mfc/wininet-basics.md).

## <a name="openurl"></a>  CInternetSession::OpenURL

Chiamare questo membro di funzione per inviare la richiesta specificata per il server HTTP e consentire al client di specificare altri RFC822, MIME o intestazioni HTTP da inviare insieme alla richiesta.

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
Un puntatore al nome dell'URL per iniziare la lettura. Solo gli URL che iniziano con file:, ftp:, gopher:, o http: sono supportati. Indica se *pstrURL* è NULL.

*dwContext*<br/>
Un valore definito dall'applicazione passato con l'handle restituito all'interno del callback.

*dwFlags*<br/>
Flag che descrivono come gestire questa connessione. Visualizzare **osservazioni** per altre informazioni sui flag validi. I flag validi sono:

- INTERNET_FLAG_TRANSFER_ASCII il valore predefinito. Trasferire il file come testo ASCII.

- INTERNET_FLAG_TRANSFER_BINARY trasferire il file come file binario.

- INTERNET_FLAG_RELOAD ottenere i dati dalla rete, anche se è in locale viene memorizzato nella cache.

- INTERNET_FLAG_DONT_CACHE nella cache i dati, sia localmente che in tutti i gateway.

- INTERNET_FLAG_SECURE questo flag è applicabile al solo le richieste HTTP. Richiede le transazioni sicure in transito con Secure Sockets Layer o PCT.

- INTERNET_OPEN_FLAG_USE_EXISTING_CONNECT se possibile, riusare le connessioni esistenti al server per le nuove richieste generate da `OpenUrl` invece di crearne una nuova sessione per ogni richiesta di connessione.

- INTERNET_FLAG_PASSIVE usato per un sito FTP. Usa la semantica FTP passiva. Utilizzato con [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) di `OpenURL`.

*pstrHeaders*<br/>
Un puntatore a una stringa contenente le intestazioni da inviare al server HTTP.

*dwHeadersLength*<br/>
La lunghezza in caratteri, le intestazioni aggiuntive. Se si tratta-1L e *pstrHeaders* è diverso da NULL, quindi *pstrHeaders* presuppone sia pari a zero terminato e la lunghezza viene calcolata.

### <a name="return-value"></a>Valore restituito

Restituisce un handle di file per i servizi FTP, GOPHER, HTTP e Internet tipo di FILE. Restituisce NULL se l'analisi ha esito negativo.

Il puntatore che `OpenURL` restituisce dipende *pstrURL*del tipo di servizio. La tabella seguente illustra i puntatori possibili `OpenURL` può restituire.

|Tipo di URL|Valore restituito|
|--------------|-------------|
|file://|`CStdioFile*`|
|http://|`CHttpFile*`|
|gopher://|`CGopherFile*`|
|ftp://|`CInternetFile*`|

### <a name="remarks"></a>Note

Il parametro *dwFlags* deve includere INTERNET_FLAG_TRANSFER_ASCII o INTERNET_FLAG_TRANSFER_BINARY, ma non entrambi. I flag restanti possono essere combinati con i bit per bit **oppure** operator ( **&#124;** ).

`OpenURL`, che include la funzione Win32 `InternetOpenURL`, consente di solo download, il recupero e la lettura dei dati da un server Internet. `OpenURL` non consente a nessuna modifica dei file in una posizione remota, in modo che non richiede alcuna [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) oggetto.

Usare specifico della connessione (vale a dire, specifiche del protocollo) le funzioni, ad esempio la scrittura in un file, è necessario aprire una sessione, quindi aprire un particolare tipo di connessione, quindi usare tale connessione per aprire un file nella modalità desiderata. Vedere `CInternetConnection` per altre informazioni sulle funzioni specifico della connessione.

## <a name="operator_hinternet"></a>  CInternetSession::operator HINTERNET

Utilizzare questo operatore per ottenere l'handle di Windows per la sessione corrente di Internet.

```cpp
operator HINTERNET() const;
```

## <a name="setcookie"></a>  CInternetSession::SetCookie

Imposta un cookie per l'URL specificato.

```cpp
static BOOL SetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    LPCTSTR pstrCookieData);
```

### <a name="parameters"></a>Parametri

*pstrUrl*<br/>
Un puntatore a una stringa con terminazione null che specifica l'URL per il quale il cookie deve essere impostato.

*pstrCookieName*<br/>
Un puntatore a una stringa contenente il nome del cookie.

*pstrCookieData*<br/>
Un puntatore a una stringa che contiene i dati di stringa effettivo da associare all'URL.

### <a name="return-value"></a>Valore restituito

In caso contrario, restituisce TRUE se ha esito positivo o FALSE. Per ottenere il codice di errore specifico, chiamare `GetLastError.`

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [InternetSetCookie](/windows/desktop/api/wininet/nf-wininet-internetsetcookiea), come descritto nel SDK di Windows.

## <a name="setoption"></a>  CInternetSession::SetOption

Chiamare questa funzione membro per impostare le opzioni per la sessione di Internet.

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
Opzione Internet da impostare. Visualizzare [flag di opzione](/windows/desktop/WinInet/option-flags) nel SDKfor Windows un elenco delle possibili opzioni.

*lpBuffer*<br/>
Un buffer che contiene l'impostazione dell'opzione.

*dwBufferLength*<br/>
La lunghezza di *lpBuffer* o le dimensioni dei *dwValue*.

*dwValue*<br/>
Un valore DWORD che contiene l'impostazione dell'opzione.

*dwFlags*<br/>
Indica diverse opzioni di memorizzazione nella cache. Il valore predefinito è impostato su 0. I valori possibili includono:

- INTERNET_FLAG_DONT_CACHE nella cache i dati, sia localmente che in tutti i server gateway.

- Scaricare INTERNET_FLAG_OFFLINE operazioni sono soddisfatto usando solo la cache persistente. Se l'elemento non esiste nella cache, viene restituito un codice di errore appropriato. Questo flag può essere combinato con i bit per bit **oppure** ( **&#124;** ) operatore.

### <a name="return-value"></a>Valore restituito

Se l'operazione ha esito positivo, viene restituito un valore TRUE. Se si è verificato un errore, viene restituito un valore FALSE. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamato per determinare la causa dell'errore.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)<br/>
[Classe CFtpConnection](../../mfc/reference/cftpconnection-class.md)<br/>
[Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
