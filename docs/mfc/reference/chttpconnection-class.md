---
title: Classe CHttpConnection
ms.date: 03/27/2019
f1_keywords:
- CHttpConnection
- AFXINET/CHttpConnection
- AFXINET/CHttpConnection::CHttpConnection
- AFXINET/CHttpConnection::OpenRequest
helpviewer_keywords:
- CHttpConnection [MFC], CHttpConnection
- CHttpConnection [MFC], OpenRequest
ms.assetid: a402b662-c445-4988-800d-c8278551babe
ms.openlocfilehash: af402b532b3aba28bdfefea5afa67331765db4c5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81351820"
---
# <a name="chttpconnection-class"></a>Classe CHttpConnection

Gestisce la connessione a un server HTTP.

## <a name="syntax"></a>Sintassi

```
class CHttpConnection : public CInternetConnection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHttpConnection::CHttpConnection](#chttpconnection)|Crea un oggetto `CHttpConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHttpConnection::OpenRequest](#openrequest)|Apre una richiesta HTTP.|

## <a name="remarks"></a>Osservazioni

HTTP è uno dei tre protocolli server Internet implementati dalle classi WinInet MFC.

La `CHttpConnection` classe contiene un costruttore e una funzione membro, [OpenRequest](#openrequest), che gestisce le connessioni a un server con un protocollo HTTP.

Per comunicare con un server HTTP, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi creare un oggetto [CHttpConnection](#chttpconnection) . Non si `CHttpConnection` crea mai direttamente un oggetto; chiamare invece [CInternetSession::GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection), `CHttpConnection` che crea l'oggetto e restituisce un puntatore a esso .

Per ulteriori informazioni `CHttpConnection` sul funzionamento con le altre classi Internet MFC, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sulla connessione ai server utilizzando gli altri due protocolli Internet supportati, gopher e FTP, vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CHttpConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="chttpconnectionchttpconnection"></a><a name="chttpconnection"></a>CHttpConnection::CHttpConnection

Questa funzione membro viene `CHttpConnection` chiamata per costruire un oggetto.

```
CHttpConnection(
    CInternetSession* pSession,
    HINTERNET hConnected,
    LPCTSTR pstrServer,
    DWORD_PTR dwContext);

CHttpConnection(
    CInternetSession* pSession,
    LPCTSTR pstrServer,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    DWORD_PTR dwContext = 1);

CHttpConnection(
    CInternetSession* pSession,
    LPCTSTR pstrServer,
    DWORD dwFlags,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pSessione*<br/>
Puntatore a un oggetto [CInternetSession.](../../mfc/reference/cinternetsession-class.md)

*hCollegato*<br/>
Handle per una connessione Internet.

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server.

*dwContext*<br/>
Identificatore di `CInternetConnection` contesto per l'oggetto. Per ulteriori informazioni su *dwContext*, vedere la sezione **Osservazioni** .

*nPorta*<br/>
Numero che identifica la porta Internet per questa connessione.

*pstrUserName (nome di applicazione)*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonimo.

*pstrPassword (informazioni in base alla proprietà di un*<br/>
Puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se sia *pstrPassword* che *pstrUserName* sono NULL, la password anonima predefinita è il nome di posta elettronica dell'utente. Se *pstrPassword* è NULL o una stringa vuota, ma *pstrUserName* non è NULL, viene utilizzata una password vuota. Nella tabella seguente viene descritto il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:

|*pstrUserName (nome di applicazione)*|*pstrPassword (informazioni in base alla proprietà di un*|Nome utente inviato al server FTP|Password inviata al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o " "|NULL o " "|"anonimo"|Nome e-mail dell'utente|
|Stringa non NULL|NULL o " "|*pstrUserName (nome di applicazione)*|" "|
|NULL |Stringa non NULL|ERRORE|ERRORE|
|Stringa non NULL|Stringa non NULL|*pstrUserName (nome di applicazione)*|*pstrPassword (informazioni in base alla proprietà di un*|

*dwFlags*<br/>
Qualsiasi combinazione `INTERNET_FLAG_*` di flag. Vedere la tabella nella sezione **Osservazioni** di [CHttpConnection::OpenRequest](#openrequest) per una descrizione dei valori *dwFlags.*

### <a name="remarks"></a>Osservazioni

Non si `CHttpConnection` crea mai un direttamente. È invece possibile creare un oggetto chiamando [CInternetSession::GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection).

## <a name="chttpconnectionopenrequest"></a><a name="openrequest"></a>CHttpConnection::OpenRequest

Chiamare la seguente funzione membro per aprire una connessione HTTP.

```
CHttpFile* OpenRequest(
    LPCTSTR pstrVerb,
    LPCTSTR pstrObjectName,
    LPCTSTR pstrReferer = NULL,
    DWORD_PTR dwContext = 1,
    LPCTSTR* ppstrAcceptTypes = NULL,
    LPCTSTR pstrVersion = NULL,
    DWORD dwFlags = INTERNET_FLAG_EXISTING_CONNECT);

CHttpFile* OpenRequest(
    int nVerb,
    LPCTSTR pstrObjectName,
    LPCTSTR pstrReferer = NULL,
    DWORD_PTR dwContext = 1,
    LPCTSTR* ppstrAcceptTypes = NULL,
    LPCTSTR pstrVersion = NULL,
    DWORD dwFlags = INTERNET_FLAG_EXISTING_CONNECT);
```

### <a name="parameters"></a>Parametri

*pstrVerbo*<br/>
Puntatore a una stringa contenente il metodo da utilizzare nella richiesta. Se NULL, viene utilizzato "GET".

*pstrObjectName (nome di oggetto pstrObject)*<br/>
Puntatore a una stringa contenente l'oggetto di destinazione del metodo specificato. Questa stringa è in genere un nome file, un modulo eseguibile o un identificatore di ricerca.

*pstrReferer (in cui pstrReferer)*<br/>
Puntatore a una stringa che specifica l'indirizzo (URL) del documento da cui è stato ottenuto l'URL nella richiesta (*pstrObjectName*). Se NULL, non viene specificata alcuna intestazione HTTP.

*dwContext*<br/>
Identificatore di contesto per l'operazione `OpenRequest`. Per ulteriori informazioni su *dwContext*, vedere la sezione Osservazioni .

*ppstrAcceptTypes (tipippiAcceptTypes)*<br/>
Puntatore a una matrice con terminazione null di puntatori LPCTSTR a stringhe che indicano tipi di contenuto accettati dal client. Se *ppstrAcceptTypes* è NULL, i server interpretano che il client accetta solo documenti di tipo "text/ s" (vale a dire solo documenti di testo e non immagini o altri file binari). Il tipo di contenuto è equivalente alla variabile CONTENT_TYPE di CGI, che identifica il tipo di dati per le query con informazioni associate, quali HTTP POST e PUT.

*pstrVersion (informazioni in due)*<br/>
Puntatore a una stringa che definisce la versione di HTTP. Se NULL, viene utilizzato "HTTP/1.0".

*dwFlags*<br/>
Qualsiasi combinazione dei flag INTERNET_ FLAG_*. Vedere la sezione Osservazioni per una descrizione dei possibili valori *dwFlags.*

*nVerbo*<br/>
Numero associato al tipo di richiesta HTTP. Può essere uno dei valori seguenti:

|Tipo di richiesta HTTP|*valore nVerb*|
|-----------------------|-------------------|
|HTTP_VERB_POST|0|
|HTTP_VERB_GET|1|
|HTTP_VERB_HEAD|2|
|HTTP_VERB_PUT|3|
|HTTP_VERB_LINK|4|
|HTTP_VERB_DELETE|5|
|HTTP_VERB_UNLINK|6|

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CHttpFile](../../mfc/reference/chttpfile-class.md) richiesto.

### <a name="remarks"></a>Osservazioni

*dwFlags* può essere uno dei seguenti:

|Flag Internet|Descrizione|
|-------------------|-----------------|
|INTERNET_FLAG_RELOAD|Impone un download del file, dell'oggetto o dell'elenco di directory richiesto dal server di origine e non dalla cache.|
|INTERNET_FLAG_DONT_CACHE|Non aggiunge l'entità restituita alla cache.|
|INTERNET_FLAG_MAKE_PERSISTENT|Aggiunge l'entità restituita alla cache come entità persistente. Ciò significa che la pulizia della cache standard, la verifica della coerenza o la procedura di Garbage Collection non possono rimuovere questo elemento dalla cache.|
|INTERNET_FLAG_SECURE|Utilizza semantica sicura delle transazioni. Si traduce in utilizzo di SSL/PCT ed è significativo solo nelle richieste HTTP|
|INTERNET_FLAG_NO_AUTO_REDIRECT|Utilizzato solo con HTTP, specifica che i reindirizzamenti non devono essere gestiti automaticamente in [CHttpFile::SendRequest](../../mfc/reference/chttpfile-class.md#sendrequest).|

Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è `CHttpConnection` associato a questa operazione specifica dell'oggetto creato dal relativo [oggetto CInternetSession.](../../mfc/reference/cinternetsession-class.md) Il valore viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

In questa funzione possono essere generate eccezioni.

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)
