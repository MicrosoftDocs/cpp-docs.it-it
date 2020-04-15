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
ms.openlocfilehash: ddd7ca6676805e6de1b7afb5ebc77733701dfef9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372386"
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
|[CInternetSession::Close](#close)|Chiude la connessione Internet quando la sessione Internet viene terminata.|
|[CInternetSession::EnableStatusCallback](#enablestatuscallback)|Stabilisce una routine di callback di stato.|
|[CInternetSession::GetContext](#getcontext)|Chiude la connessione Internet quando la sessione Internet viene terminata.|
|[CInternetSession::GetCookie](#getcookie)|Restituisce i cookie per l'URL specificato e tutti i relativi URL padre.|
|[CInternetSession::GetCookieLength](#getcookielength)|Recupera la variabile specificando la lunghezza del cookie archiviato nel buffer.|
|[CInternetSession::GetFtpConnection](#getftpconnection)|Apre una sessione FTP con un server. Accede all'utente.|
|[CInternetSession::GetGopherConnection](#getgopherconnection)|Apre un server gopher per un'applicazione che sta tentando di aprire una connessione.|
|[CInternetSession::GetHttpConnection](#gethttpconnection)|Apre un server HTTP per un'applicazione che sta tentando di aprire una connessione.|
|[CInternetSession::OnStatusCallback](#onstatuscallback)|Aggiorna lo stato di un'operazione quando il callback dello stato è abilitato.|
|[CInternetSession::OpenURL](#openurl)|Analizza e apre un URL.|
|[CInternetSession::SetCookie](#setcookie)|Imposta un cookie per l'URL specificato.|
|[CInternetSession::SetOption](#setoption)|Imposta le opzioni per la sessione Internet.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetSession::operatorEInternet](#operator_hinternet)|Handle per la sessione Internet corrente.|

## <a name="remarks"></a>Osservazioni

Se la connessione a Internet deve essere mantenuta per `CInternetSession` la durata di un'applicazione, è possibile creare un membro della classe [CWinApp](../../mfc/reference/cwinapp-class.md).

Una volta stabilita una sessione Internet, è possibile chiamare [OpenURL](#openurl). `CInternetSession`quindi analizza l'URL per l'utente chiamando la funzione globale [AfxParseURL](internet-url-parsing-globals.md#afxparseurl). Indipendentemente dal tipo `CInternetSession` di protocollo, interpreta l'URL e lo gestisce per te. Può gestire le richieste per i file locali identificati con la risorsa URL "file://". `OpenURL`restituirà un puntatore a un oggetto [CStdioFile](../../mfc/reference/cstdiofile-class.md) se il nome passato è un file locale.

Se si apre un URL `OpenURL`su un server Internet utilizzando , è possibile leggere le informazioni dal sito. Se si desidera eseguire azioni specifiche del servizio (ad esempio, HTTP, FTP o gopher) sui file che si trovano su un server, è necessario stabilire la connessione appropriata con tale server. Per aprire un particolare tipo di connessione direttamente a un determinato servizio, utilizzare una delle seguenti funzioni membro:

- [GetGopherConnection](#getgopherconnection) per aprire una connessione a un servizio gopher.

- [GetHttpConnection](#gethttpconnection) per aprire una connessione a un servizio HTTP.

- [GetFtpConnection](#getftpconnection) per aprire una connessione a un servizio FTP.

[SetOption](#setoption) consente di impostare le opzioni di query della sessione, ad esempio i valori di timeout, il numero di tentativi e così via.

`CInternetSession`Le funzioni membro [SetCookie](#setcookie), [GetCookie](#getcookie)e [GetCookieLength](#getcookielength) consentono di gestire un database di cookie Win32 tramite i quali i server e gli script gestiscono le informazioni sullo stato della workstation client.

Per ulteriori informazioni sulle attività di programmazione Internet di base, vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md). Per informazioni generali sull'utilizzo delle classi Mfc WinInet, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

> [!NOTE]
> `CInternetSession`verrà generata [un'eccezione AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception) per i tipi di servizio non supportati. Attualmente sono supportati solo i seguenti tipi di servizio: FTP, HTTP, gopher e file.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;`CInternetSession`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cinternetsessioncinternetsession"></a><a name="cinternetsession"></a>CInternetSession::CInternetSession

Questa funzione membro viene `CInternetSession` chiamata quando viene creato un oggetto.

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

*pstrAgent (indetto pstr)*<br/>
Puntatore a una stringa che identifica il nome dell'applicazione o dell'entità che chiama le funzioni Internet, ad esempio "Microsoft Internet Browser". Se *pstrAgent* è NULL (impostazione predefinita), il framework chiama la funzione globale [AfxGetAppName](application-information-and-management.md#afxgetappname), che restituisce una stringa con terminazione null contenente il nome di un'applicazione. Alcuni protocolli utilizzano questa stringa per identificare l'applicazione nel server.

*dwContext*<br/>
Identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession::OnStatusCallback](#onstatuscallback). Il valore predefinito è 1; Tuttavia, è possibile assegnare in modo esplicito un ID di contesto specifico per l'operazione. L'oggetto e le operazioni eseguite verranno associati a tale ID di contesto.

*dwAccessType (tipo di accesso a Windows)*<br/>
Tipo di accesso richiesto. I seguenti sono valori validi, esattamente uno dei quali può essere fornito:

- INTERNET_OPEN_TYPE_PRECONFIG Connetti utilizzando impostazioni preconfigurate nel Registro di sistema. Questo tipo di accesso è impostato come predefinito. Per connettersi tramite un proxy TIS, impostare *dwAccessType* su questo valore; impostare il Registro di sistema in modo appropriato.

- INTERNET_OPEN_TYPE_DIRECT Connettiti direttamente a Internet.

- INTERNET_OPEN_TYPE_PROXY Connettersi tramite un proxy CERN.

Per informazioni sulla connessione con diversi tipi di proxy, vedere [Passaggi in un'applicazione client FTP tipica.](../../mfc/steps-in-a-typical-ftp-client-application.md)

*pstrNomeproxy*<br/>
Nome del proxy CERN preferito se *dwAccessType* è impostato come INTERNET_OPEN_TYPE_PROXY. Il valore predefinito è NULL.

*pstrProxyBypass*<br/>
Puntatore a una stringa contenente un elenco facoltativo di indirizzi server. Questi indirizzi possono essere ignorati quando si utilizza l'accesso proxy. Se viene fornito un valore NULL, l'elenco di esclusione verrà letto dal Registro di sistema. Questo parametro è significativo solo se *dwAccessType* è impostato su INTERNET_OPEN_TYPE_PROXY.

*dwFlags*<br/>
Indica varie opzioni di memorizzazione nella cache. Il valore predefinito è impostato su 0. I valori possibili includono:

- INTERNET_FLAG_DONT_CACHE Non memorizzare nella cache i dati, localmente o in qualsiasi server gateway.

- INTERNET_FLAG_OFFLINE le operazioni di download vengono soddisfatte solo tramite la cache permanente. Se l'elemento non esiste nella cache, viene restituito un codice di errore appropriato. Questo flag può essere combinato con l'operatore **OR** bit per bit **(&#124;). **

### <a name="remarks"></a>Osservazioni

`CInternetSession`è la prima funzione Internet chiamata da un'applicazione. Inizializza le strutture di dati interne e si prepara per le chiamate future dall'applicazione.

Se non è possibile `CInternetSession` aprire alcuna connessione a Internet, viene generata [un'eccezione AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).

### <a name="example"></a>Esempio

Vedere l'esempio per [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="cinternetsessionclose"></a><a name="close"></a>CInternetSession::Close

Chiamare questa funzione membro al termine `CInternetSession` dell'utilizzo dell'oggetto da parte dell'applicazione.

```cpp
virtual void Close();
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="cinternetsessionenablestatuscallback"></a><a name="enablestatuscallback"></a>CInternetSession::EnableStatusCallback

Chiamare questa funzione membro per abilitare il callback di stato.

```cpp
BOOL EnableStatusCallback(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se il callback è abilitato o disabilitato. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Osservazioni

Quando si gestisce il callback di stato, è possibile fornire lo stato sullo stato dell'operazione (ad esempio la risoluzione del nome, la connessione al server e così via) nella barra di stato dell'applicazione. La visualizzazione dello stato dell'operazione è particolarmente auspicabile durante un'operazione a lungo termine.

Poiché i callback si verificano durante l'elaborazione della richiesta, l'applicazione deve dedicare il minor tempo possibile al callback per evitare la riduzione della velocità effettiva dei dati nella rete. Ad esempio, l'inserimento di una finestra di dialogo in un callback può essere un'operazione così lunga che il server termina la richiesta.

Il callback di stato non può essere rimosso finché tutti i callback sono in sospeso.

Per gestire le operazioni in modo asincrono, è necessario creare il proprio thread o utilizzare le funzioni WinInet senza MFC.

## <a name="cinternetsessiongetcontext"></a><a name="getcontext"></a>CInternetSession::GetContext

Chiamare questa funzione membro per ottenere il valore di contesto per una particolare sessione dell'applicazione.

```cpp
DWORD_PTR GetContext() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore del contesto definito dall'applicazione.

### <a name="remarks"></a>Osservazioni

[OnStatusCallback](#onstatuscallback) utilizza l'ID `GetContext` di contesto restituito da per segnalare lo stato di una determinata applicazione. Ad esempio, quando un utente attiva una richiesta Internet che comporta la restituzione di informazioni sullo stato, il callback dello stato utilizza l'ID di contesto per segnalare lo stato di quella particolare richiesta. Se l'utente attiva due richieste Internet separate che `OnStatusCallback` comportano entrambe la restituzione di informazioni sullo stato, utilizza gli identificatori di contesto per restituire lo stato delle richieste corrispondenti. Di conseguenza, l'identificatore di contesto viene utilizzato per tutte le operazioni di callback dello stato ed è associato alla sessione fino al terminata della sessione.

Per ulteriori informazioni sulle operazioni asincrone, vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md).

## <a name="cinternetsessiongetcookie"></a><a name="getcookie"></a>CInternetSession::GetCookie

Questa funzione membro implementa il comportamento della funzione Win32 [InternetGetCookie](/windows/win32/api/wininet/nf-wininet-internetgetcookiew), come descritto in Windows SDK.

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

*pstrUrl (informazioni in due)*<br/>
Puntatore a una stringa contenente l'URL.

*pstrCookieName (nome pstrCookie)*<br/>
Puntatore a una stringa contenente il nome del cookie da ottenere per l'URL specificato.

*pstrCookieData (dati pstrCookieData)*<br/>
Nel primo overload, un puntatore a una stringa contenente l'indirizzo del buffer che riceve i dati del cookie. Questo valore può essere NULL. Nel secondo overload, un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per ricevere i dati del cookie.

*dwBufLen*<br/>
Variabile che specifica la dimensione del buffer *pstrCookieData.* Se la funzione ha esito positivo, il buffer riceve la quantità di dati copiati nel buffer *pstrCookieData.* Se *pstrCookieData* è NULL, questo parametro riceve un valore che specifica la dimensione del buffer necessaria per copiare tutti i dati del cookie.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo o FALSE in caso contrario. Se la chiamata ha esito negativo, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la causa dell'errore. Si applicano i seguenti valori di errore:

- ERROR_NO_MORE_ITEMS Non esiste alcun cookie per l'URL specificato e per tutti i relativi elementi padre.

- ERROR_INSUFFICIENT_BUFFER Il valore passato in *dwBufLen* non è sufficiente per copiare tutti i dati del cookie. Il valore restituito in *dwBufLen* è la dimensione del buffer necessaria per ottenere tutti i dati.

### <a name="remarks"></a>Osservazioni

Nel secondo overload, MFC recupera i dati `CString` dei cookie nell'oggetto fornito.

## <a name="cinternetsessiongetcookielength"></a><a name="getcookielength"></a>CInternetSession::GetCookieLength

Chiamare questa funzione membro per ottenere la lunghezza del cookie archiviato nel buffer.

```cpp
static DWORD GetCookieLength(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName);
```

### <a name="parameters"></a>Parametri

*pstrUrl (informazioni in due)*<br/>
Puntatore a una stringa contenente l'URL

*pstrCookieName (nome pstrCookie)*<br/>
Puntatore a una stringa contenente il nome del cookie.

### <a name="return-value"></a>Valore restituito

Valore DWORD che indica la lunghezza del cookie, memorizzato nel buffer. zero se non esiste alcun cookie con il nome indicato da *pstrCookieName.*

### <a name="remarks"></a>Osservazioni

Questo valore viene utilizzato da [GetCookie](#getcookie).

## <a name="cinternetsessiongetftpconnection"></a><a name="getftpconnection"></a>CInternetSession::GetFtpConnection

Chiamare questa funzione membro per stabilire una connessione `CFtpConnection` FTP e ottenere un puntatore a un oggetto.

```cpp
CFtpConnection* GetFtpConnection(
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    BOOL bPassive = FALSE);
```

### <a name="parameters"></a>Parametri

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server FTP.

*pstrUserName (nome di applicazione)*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonimo.

*pstrPassword (informazioni in base alla proprietà di un*<br/>
Puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se sia *pstrPassword* che *pstrUserName* sono NULL, la password anonima predefinita è il nome di posta elettronica dell'utente. Se *pstrPassword* è NULL (o una stringa vuota) ma *pstrUserName* non è NULL, viene utilizzata una password vuota. Nella tabella seguente viene descritto il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:

| *pstrUserName (nome di applicazione)*  | *pstrPassword (informazioni in base alla proprietà di un*  | Nome utente inviato al server FTP | Password inviata al server FTP |
|-----------------|-----------------|-----------------------------|-----------------------------|
|   NULL o " "   |   NULL o " "   |         "anonimo"         |      Nome e-mail dell'utente      |
| Stringa non NULL |   NULL o " "   |       *pstrUserName (nome di applicazione)*        |             " "             |
|      NULL       | Stringa non NULL |            ERRORE            |            ERRORE            |
| Stringa non NULL | Stringa non NULL |       *pstrUserName (nome di applicazione)*        |       *pstrPassword (informazioni in base alla proprietà di un*        |

*nPorta*<br/>
Numero che identifica la porta TCP/IP da utilizzare sul server.

*bPassivo*<br/>
Specifica la modalità passiva o attiva per questa sessione FTP. Se impostato su TRUE, imposta l'API `dwFlag` Win32 su INTERNET_FLAG_PASSIVE.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CFtpConnection.](../../mfc/reference/cftpconnection-class.md) Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Osservazioni

`GetFtpConnection`si connette a un server FTP e crea `CFTPConnection` e restituisce un puntatore a un oggetto. Non esegue alcuna operazione specifica sul server. Se si intende leggere o scrivere nei file, ad esempio, è necessario eseguire tali operazioni come passaggi separati. Per informazioni sulla ricerca di file, sull'apertura e la scrittura nei file, vedere le classi [CFtpConnection](../../mfc/reference/cftpconnection-class.md) e [CFtpFileFind.](../../mfc/reference/cftpfilefind-class.md) Vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md) per la procedura di esecuzione delle attività comuni di connessione FTP.

### <a name="example"></a>Esempio

Vedere l'esempio per [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="cinternetsessiongetgopherconnection"></a><a name="getgopherconnection"></a>CInternetSession::GetGopherConnection

Chiamare questa funzione membro per stabilire una nuova connessione `CGopherConnection` gopher e ottenere un puntatore a un oggetto.

```cpp
CGopherConnection* GetGopherConnection(
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### <a name="parameters"></a>Parametri

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server gopher.

*pstrUserName (nome di applicazione)*<br/>
Puntatore a una stringa contenente il nome utente.

*pstrPassword (informazioni in base alla proprietà di un*<br/>
Puntatore a una stringa contenente la password di accesso.

*nPorta*<br/>
Numero che identifica la porta TCP/IP da utilizzare sul server.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CGopherConnection.](../../mfc/reference/cgopherconnection-class.md) Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Osservazioni

`GetGopherConnection`si connette a un server gopher e crea `CGopherConnection` e restituisce un puntatore a un oggetto. Non esegue alcuna operazione specifica sul server. Se si intende leggere o scrivere dati, ad esempio, è necessario eseguire tali operazioni come passaggi separati. Per informazioni sulla ricerca di file, sulla ricerca di file, sull'apertura di file e sulla lettura o la scrittura nei file, vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md), [CGopherFile](../../mfc/reference/cgopherfile-class.md)e [CGopherFileFind.](../../mfc/reference/cgopherfilefind-class.md) Per informazioni sull'esplorazione di un sito FTP, vedere la funzione membro [OpenURL](#openurl). Vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md) per la procedura di esecuzione di attività comuni di connessione gopher.

## <a name="cinternetsessiongethttpconnection"></a><a name="gethttpconnection"></a>CInternetSession::GetHttpConnection

Chiamare questa funzione membro per stabilire una connessione `CHttpConnection` HTTP e ottenere un puntatore a un oggetto.

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

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server HTTP.

*nPorta*<br/>
Numero che identifica la porta TCP/IP da utilizzare sul server.

*pstrUserName (nome di applicazione)*<br/>
Puntatore a una stringa contenente il nome utente.

*pstrPassword (informazioni in base alla proprietà di un*<br/>
Puntatore a una stringa contenente la password di accesso.

*Dwflags*<br/>
Qualsiasi combinazione `INTERNET_FLAG_*` di flag. Vedere la tabella nella sezione **Osservazioni** di [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) per una descrizione dei valori *dwFlags.*

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CHttpConnection.](../../mfc/reference/chttpconnection-class.md) Se la chiamata ha esito negativo, determinare la causa dell'errore esaminando l'oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) generato.

### <a name="remarks"></a>Osservazioni

`GetHttpConnection`si connette a un server HTTP e crea `CHttpConnection` e restituisce un puntatore a un oggetto. Non esegue alcuna operazione specifica sul server. Se si intende eseguire una query su un'intestazione HTTP, ad esempio, è necessario eseguire questa operazione come passaggio separato. Vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CHttpFile](../../mfc/reference/chttpfile-class.md) per informazioni sulle operazioni che è possibile eseguire utilizzando una connessione a un server HTTP. Per informazioni sull'esplorazione di un sito HTTP, vedere la funzione membro [OpenURL](#openurl). Vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md) per la procedura di esecuzione delle attività di connessione HTTP comuni.

## <a name="cinternetsessiononstatuscallback"></a><a name="onstatuscallback"></a>CInternetSession::OnStatusCallback

Questa funzione membro viene chiamata dal framework per aggiornare lo stato quando il callback di stato è abilitato e un'operazione è in sospeso.

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

*dwInternetStatus (informazioni in stato instato)*<br/>
Codice di stato che indica il motivo per cui viene eseguito il callback. Vedere **Osservazioni** per una tabella dei valori possibili.

*lpvStatusInformation (informazioni in stato di informazione)*<br/>
Puntatore a un buffer contenente informazioni pertinenti a questo callback.

*dwStatusInformationLength*<br/>
Dimensione di *lpvStatusInformation*.

### <a name="remarks"></a>Osservazioni

È innanzitutto necessario chiamare [EnableStatusCallback](#enablestatuscallback) per sfruttare il callback dello stato.

Il parametro *dwInternetStatus* indica l'operazione eseguita e determina quale sarà il contenuto di *lpvStatusInformation.* *dwStatusInformationLength* indica la lunghezza dei dati inclusi in *lpvStatusInformation*. I seguenti valori di stato per *dwInternetStatus* sono definiti come segue:

|Valore|Significato|
|-----------|-------------|
|INTERNET_STATUS_RESOLVING_NAME|Cerca l'indirizzo IP del nome contenuto in *lpvStatusInformation*.|
|INTERNET_STATUS_NAME_RESOLVED|L'indirizzo IP del nome contenuto in *lpvStatusInformation*è stato trovato correttamente.|
|INTERNET_STATUS_CONNECTING_TO_SERVER|Connessione all'indirizzo socket ([SOCKADDR](/windows/win32/winsock/sockaddr-2)) a cui punta *lpvStatusInformation*.|
|INTERNET_STATUS_CONNECTED_TO_SERVER|Connessione all'indirizzo socket (SOCKADDR) a cui punta *lpvStatusInformation*.|
|INTERNET_STATUS_SENDING_REQUEST|Invio della richiesta di informazioni al server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_ REQUEST_SENT|La richiesta di informazioni è stata inviata correttamente al server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_RECEIVING_RESPONSE|In attesa che il server risponda a una richiesta. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_RESPONSE_RECEIVED|Ricevuto correttamente una risposta dal server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_CLOSING_CONNECTION|Chiusura della connessione al server. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_CONNECTION_CLOSED|La connessione al server è stata chiusa correttamente. Il *lpvStatusInformation* parametro è NULL.|
|INTERNET_STATUS_HANDLE_CREATED|Utilizzato dalla funzione API Win32 [InternetConnect](/windows/win32/api/wininet/nf-wininet-internetconnectw) per indicare che è stato creato il nuovo handle. Ciò consente all'applicazione di chiamare la funzione Win32 [InternetCloseHandle](/windows/win32/api/wininet/nf-wininet-internetclosehandle) da un altro thread se la connessione richiede troppo tempo. Vedere Windows SDKper ulteriori informazioni su queste funzioni.|
|INTERNET_STATUS_HANDLE_CLOSING|Terminato correttamente il valore dell'handle.|

Eseguire l'override di questa funzione membro per richiedere un'azione prima che venga eseguita una routine di callback di stato.

> [!NOTE]
> I callback di stato richiedono la protezione dello stato del thread. Se si utilizza MFC in una libreria condivisa, aggiungere la riga seguente all'inizio della sostituzione:

[!code-cpp[NVC_MFCHtmlHttp#8](../../mfc/reference/codesnippet/cpp/cinternetsession-class_1.cpp)]

Per ulteriori informazioni sulle operazioni asincrone, vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md).

## <a name="cinternetsessionopenurl"></a><a name="openurl"></a>CInternetSession::OpenURL

Chiamare questa funzione membro per inviare la richiesta specificata al server HTTP e consentire al client di specificare intestazioni RFC822, MIME o HTTP aggiuntive da inviare insieme alla richiesta.

```cpp
CStdioFile* OpenURL(
    LPCTSTR pstrURL,
    DWORD_PTR dwContext = 1,
    DWORD dwFlags = INTERNET_FLAG_TRANSFER_ASCII,
    LPCTSTR pstrHeaders = NULL,
    DWORD dwHeadersLength = 0);
```

### <a name="parameters"></a>Parametri

*pstrURL (informazioni in due)*<br/>
Puntatore al nome dell'URL da iniziare a leggere. Sono supportati solo gli URL che iniziano con file:, ftp:, gopher: o http:. Asserie se *pstrURL* è NULL.

*dwContext*<br/>
Valore definito dall'applicazione passato con l'handle restituito nel callback.

*dwFlags*<br/>
Flag che descrivono come gestire questa connessione. Per ulteriori informazioni sui flag validi, vedere **Osservazioni.** I flag validi sono:

- INTERNET_FLAG_TRANSFER_ASCII L'impostazione predefinita. Trasferire il file come testo ASCII.

- INTERNET_FLAG_TRANSFER_BINARY Trasferire il file come file binario.

- INTERNET_FLAG_RELOAD Ottenere i dati dalla rete anche se è memorizzato nella cache locale.

- INTERNET_FLAG_DONT_CACHE Non memorizzare nella cache i dati, localmente o in alcun gateway.

- INTERNET_FLAG_SECURE Questo flag è applicabile solo alle richieste HTTP. Richiede transazioni sicure in rete con Secure Sockets Layer o PCT.

- INTERNET_OPEN_FLAG_USE_EXISTING_CONNECT possibile, riutilizzare le connessioni esistenti al server `OpenUrl` per le nuove richieste generate da anziché creare una nuova sessione per ogni richiesta di connessione.

- INTERNET_FLAG_PASSIVE Utilizzato per un sito FTP. Utilizza la semantica FTP passiva. Utilizzato con [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) di `OpenURL`.

*pstrHeaders (informazioni in due)*<br/>
Puntatore a una stringa contenente le intestazioni da inviare al server HTTP.

*dwHeadersLength*<br/>
Lunghezza, in caratteri, delle intestazioni aggiuntive. Se questo è -1L e *pstrHeaders* è diverso da NULL, *pstrHeaders* viene considerato come zero terminato e viene calcolata la lunghezza.

### <a name="return-value"></a>Valore restituito

Restituisce un handle di file solo per i servizi Internet FTP, GOPHER, HTTP e file. Restituisce NULL se l'analisi non è riuscita.

Il puntatore restituito `OpenURL` dipende dal tipo di servizio di *pstrURL.* Nella tabella seguente viene illustrato `OpenURL` i possibili puntatori che possono essere restituiti.

|Tipo di URL|Valori di codice restituiti|
|--------------|-------------|
|`file://`|`CStdioFile*`|
|`http://`|`CHttpFile*`|
|`gopher://`|`CGopherFile*`|
|`ftp://`|`CInternetFile*`|

### <a name="remarks"></a>Osservazioni

Il parametro *dwFlags* deve includere INTERNET_FLAG_TRANSFER_ASCII o INTERNET_FLAG_TRANSFER_BINARY, ma non entrambi. I flag rimanenti possono essere combinati con l'operatore **OR** bit per bit ( **&#124;**).

`OpenURL`, che esegue il wrapping `InternetOpenURL`della funzione Win32 , consente solo il download, il recupero e la lettura dei dati da un server Internet. `OpenURL`non consente la manipolazione di file in una posizione remota, pertanto non richiede alcun oggetto [CInternetConnection.](../../mfc/reference/cinternetconnection-class.md)

Per utilizzare funzioni specifiche della connessione (ovvero specifiche del protocollo), ad esempio la scrittura in un file, è necessario aprire una sessione, quindi aprire un particolare tipo di connessione, quindi utilizzare tale connessione per aprire un file nella modalità desiderata. Per `CInternetConnection` altre informazioni sulle funzioni specifiche della connessione, vedere .See more information about connection-specific functions.

## <a name="cinternetsessionoperator-hinternet"></a><a name="operator_hinternet"></a>CInternetSession::operatorEInternet

Utilizzare questo operatore per ottenere l'handle di Windows per la sessione Internet corrente.

```cpp
operator HINTERNET() const;
```

## <a name="cinternetsessionsetcookie"></a><a name="setcookie"></a>CInternetSession::SetCookie

Imposta un cookie per l'URL specificato.

```cpp
static BOOL SetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    LPCTSTR pstrCookieData);
```

### <a name="parameters"></a>Parametri

*pstrUrl (informazioni in due)*<br/>
Puntatore a una stringa con terminazione null che specifica l'URL per il quale deve essere impostato il cookie.

*pstrCookieName (nome pstrCookie)*<br/>
Puntatore a una stringa contenente il nome del cookie.

*pstrCookieData (dati pstrCookieData)*<br/>
Puntatore a una stringa contenente i dati di stringa effettivi da associare all'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo o FALSE in caso contrario. Per ottenere il codice di errore specifico, chiamare`GetLastError.`

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [InternetSetCookie](/windows/win32/api/wininet/nf-wininet-internetsetcookiew), come descritto in Windows SDK.

## <a name="cinternetsessionsetoption"></a><a name="setoption"></a>CInternetSession::SetOption

Chiamare questa funzione membro per impostare le opzioni per la sessione Internet.Call this member function to set options for the Internet session.

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

*dwOption (Opzione)*<br/>
L'opzione Internet da impostare. Vedere [Flag di opzione](/windows/win32/WinInet/option-flags) in Windows SDKper un elenco delle opzioni possibili.

*lpBuffer (il buffer)*<br/>
Buffer che contiene l'impostazione dell'opzione.

*dwBufferLength (Lunghezza dwBuffer)*<br/>
La lunghezza di *lpBuffer* o la dimensione di *dwValue*.

*dwValue (valore in dwValue)*<br/>
DWORD che contiene l'impostazione dell'opzione.

*dwFlags*<br/>
Indica varie opzioni di memorizzazione nella cache. Il valore predefinito è impostato su 0. I valori possibili includono:

- INTERNET_FLAG_DONT_CACHE Non memorizzare nella cache i dati, localmente o in qualsiasi server gateway.

- INTERNET_FLAG_OFFLINE le operazioni di download vengono soddisfatte solo tramite la cache permanente. Se l'elemento non esiste nella cache, viene restituito un codice di errore appropriato. Questo flag può essere combinato con l'operatore **OR** bit per bit **(&#124;). **

### <a name="return-value"></a>Valore restituito

Se l'operazione ha esito positivo, viene restituito il valore TRUE. Se si è verificato un errore, viene restituito il valore FALSE. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)<br/>
[Classe CFtpConnection](../../mfc/reference/cftpconnection-class.md)<br/>
[Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
