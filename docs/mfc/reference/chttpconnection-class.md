---
title: CHttpConnection (classe)
ms.date: 11/04/2016
f1_keywords:
- CHttpConnection
- AFXINET/CHttpConnection
- AFXINET/CHttpConnection::CHttpConnection
- AFXINET/CHttpConnection::OpenRequest
helpviewer_keywords:
- CHttpConnection [MFC], CHttpConnection
- CHttpConnection [MFC], OpenRequest
ms.assetid: a402b662-c445-4988-800d-c8278551babe
ms.openlocfilehash: f7a91454b9a8619cda155f33391e5d02ae7653b5
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57273608"
---
# <a name="chttpconnection-class"></a>CHttpConnection (classe)

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

## <a name="remarks"></a>Note

HTTP è uno dei tre protocolli di server Internet implementati dalle classi WinInet MFC.

La classe `CHttpConnection` contiene un costruttore e una funzione, un membro [OpenRequest](#openrequest), che gestisce le connessioni a un server con un protocollo HTTP.

Per comunicare con un server HTTP, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi creare un [CHttpConnection](#_mfc_chttpconnection) oggetto. È non creare mai una `CHttpConnection` direttamente l'oggetto; piuttosto, chiamare [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection), che consente di creare il `CHttpConnection` specificato e restituisce un puntatore a esso.

Per altre informazioni su come `CHttpConnection` funziona con le altre classi MFC Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per altre informazioni sulla connessione ai server tramite gli altri due supportassero i protocolli Internet, gopher e FTP, vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CHttpConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

##  <a name="chttpconnection"></a>  CHttpConnection::CHttpConnection

Questa funzione membro viene chiamata per costruire un `CHttpConnection` oggetto.

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

*pSession*<br/>
Un puntatore a un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto.

*hConnected*<br/>
Handle per una connessione a Internet.

*pstrServer*<br/>
Un puntatore a una stringa contenente il nome del server.

*dwContext*<br/>
L'identificatore di contesto per il `CInternetConnection` oggetto. Visualizzare **osservazioni** per altre informazioni sui *dwContext*.

*nPort*<br/>
Numero che identifica la porta di Internet per questa connessione.

*pstrUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonymous.

*pstrPassword*<br/>
Un puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se entrambe *pstrPassword* e *pstrUserName* sono NULL, la password anonima predefinita è il nome dell'utente tramite posta elettronica. Se *pstrPassword* è NULL (o una stringa vuota), ma *pstrUserName* non è NULL, viene usata una password vuota. La tabella seguente descrive il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:

|*pstrUserName*|*pstrPassword*|Nome utente inviato al server FTP|Password inviati al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o ""|NULL o ""|"anonymous"|Nome messaggio di posta elettronica dell'utente|
|Stringa non NULL|NULL o ""|*pstrUserName*|" "|
|Stringa Non NULL a NULL|ERROR|ERROR||
|Stringa non NULL|Stringa non NULL|*pstrUserName*|*pstrPassword*|

*dwFlags*<br/>
Qualsiasi combinazione del `INTERNET_FLAG_*` flag. Vedere la tabella nel **osservazioni** sezione del [CHttpConnection:: OpenRequest](#openrequest) per una descrizione delle *dwFlags* valori.

### <a name="remarks"></a>Note

È non creare mai un `CHttpConnection` direttamente. Piuttosto, si crea un oggetto chiamando [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection).

##  <a name="openrequest"></a>  CHttpConnection::OpenRequest

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

*pstrVerb*<br/>
Puntatore a una stringa contenente il metodo da utilizzare nella richiesta. Se NULL, viene utilizzato "GET".

*pstrObjectName*<br/>
Puntatore a una stringa contenente l'oggetto di destinazione del metodo specificato. Rappresenta in genere un nome di file, un modulo eseguibile o un identificatore di ricerca.

*pstrReferer*<br/>
Un puntatore a una stringa che specifica l'indirizzo (URL) del documento da cui l'URL nella richiesta ( *pstrObjectName*) è stato ottenuto. Se NULL, non viene specificata alcuna intestazione HTTP.

*dwContext*<br/>
Identificatore di contesto per l'operazione `OpenRequest`. Vedere la sezione Osservazioni per altre informazioni *dwContext*.

*ppstrAcceptTypes*<br/>
Un puntatore a una matrice con terminazione null di puntatori LPCTSTR a stringhe che indica i tipi di contenuto accettati dal client. Se *ppstrAcceptTypes* è NULL, i server interpretano che il client accetta solo documenti di tipo "text / *" (ovvero solo documenti di testo e non immagini o altri file binari). Il tipo di contenuto è equivalente alla variabile CONTENT_TYPE di CGI, che identifica il tipo di dati per le query con informazioni associate, quali HTTP POST e PUT.

*pstrVersion*<br/>
Puntatore a una stringa che definisce la versione di HTTP. Se NULL, viene utilizzato "HTTP/1.0".

*dwFlags*<br/>
Qualsiasi combinazione dei flag INTERNET_ FLAG_*. Vedere la sezione Osservazioni per una descrizione dei possibili *dwFlags* valori.

*nVerb*<br/>
Numero associato al tipo di richiesta HTTP. Può essere uno dei seguenti:

|Tipo di richiesta HTTP|*nVerb* valore|
|-----------------------|-------------------|
|HTTP_VERB_POST|0|
|HTTP_VERB_GET|1|
|HTTP_VERB_HEAD|2|
|HTTP_VERB_PUT|3|
|HTTP_VERB_LINK|4|
|HTTP_VERB_DELETE|5|
|HTTP_VERB_UNLINK|6|

### <a name="return-value"></a>Valore restituito

Un puntatore per il [CHttpFile](../../mfc/reference/chttpfile-class.md) oggetto richiesto.

### <a name="remarks"></a>Note

*dwFlags* può essere uno dei seguenti:

|Flag Internet|Descrizione|
|-------------------|-----------------|
|INTERNET_FLAG_RELOAD|Impone un download del file, dell'oggetto o dell'elenco di directory richiesto dal server di origine e non dalla cache.|
|INTERNET_FLAG_DONT_CACHE|Non aggiunge l'entità restituita alla cache.|
|INTERNET_FLAG_MAKE_PERSISTENT|Aggiunge l'entità restituita alla cache come entità persistente. Ciò significa che la pulizia standard della cache, la verifica di coerenza e il controllo di consistenza o l'operazione di Garbage Collection non può eliminare l'elemento dalla cache.|
|INTERNET_FLAG_SECURE|Utilizza semantica sicura delle transazioni. Questo comporta l'utilizzo di SSL/PCT e il flag è significativo solo nelle richieste HTTP|
|INTERNET_FLAG_NO_AUTO_REDIRECT|Utilizzato solo con HTTP, specifica che non reindirizzamenti devono essere gestiti automaticamente [CHttpFile:: SendRequest](../../mfc/reference/chttpfile-class.md#sendrequest).|

Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa specifica operazione dei `CHttpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore per [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [Internet primi passaggi: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.

In questa funzione possono essere generate eccezioni.

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)
