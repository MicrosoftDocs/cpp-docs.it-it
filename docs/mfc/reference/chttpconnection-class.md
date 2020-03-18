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
ms.openlocfilehash: 1941af1e16a897235dd90db509d6ed29c2d9a875
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420400"
---
# <a name="chttpconnection-class"></a>Classe CHttpConnection

Gestisce la connessione a un server HTTP.

## <a name="syntax"></a>Sintassi

```
class CHttpConnection : public CInternetConnection
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHttpConnection:: CHttpConnection](#chttpconnection)|Crea un oggetto `CHttpConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHttpConnection:: OpenRequest](#openrequest)|Apre una richiesta HTTP.|

## <a name="remarks"></a>Osservazioni

HTTP è uno dei tre protocolli server Internet implementato dalle classi WinInet di MFC.

La classe `CHttpConnection` contiene un costruttore e una funzione membro, [OpenRequest](#openrequest), che gestisce le connessioni a un server con un protocollo http.

Per comunicare con un server HTTP, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi creare un oggetto [CHttpConnection](#chttpconnection) . Non è mai possibile creare direttamente un oggetto `CHttpConnection`; chiamare invece [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection), che crea l'oggetto `CHttpConnection` e restituisce un puntatore a tale oggetto.

Per ulteriori informazioni sul funzionamento di `CHttpConnection` con le altre classi Internet MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sulla connessione ai server utilizzando gli altri due protocolli Internet supportati, Gopher e FTP, vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CHttpConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

##  <a name="chttpconnection"></a>CHttpConnection:: CHttpConnection

Questa funzione membro viene chiamata per costruire un oggetto `CHttpConnection`.

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
Puntatore a un oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) .

*hConnected*<br/>
Handle per una connessione Internet.

*pstrServer*<br/>
Puntatore a una stringa contenente il nome del server.

*dwContext*<br/>
Identificatore di contesto per l'oggetto `CInternetConnection`. Per ulteriori informazioni su *dwContext*, vedere la sezione **osservazioni** .

*nPort*<br/>
Numero che identifica la porta Internet per questa connessione.

*pstrUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente a cui accedere. Se NULL, il valore predefinito è anonimo.

*pstrPassword*<br/>
Puntatore a una stringa con terminazione null che specifica la password da usare per l'accesso. Se *pstrPassword* e *PSTRUSERNAME* sono entrambi null, la password anonima predefinita corrisponde al nome di posta elettronica dell'utente. Se *pstrPassword* è null o una stringa vuota, ma *PSTRUSERNAME* non è null, viene utilizzata una password vuota. La tabella seguente descrive il comportamento per le quattro impostazioni possibili di *pstrUserName* e *pstrPassword*:

|*pstrUserName*|*pstrPassword*|Nome utente inviato al server FTP|Password inviata al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o ""|NULL o ""|Anonimo|Nome di posta elettronica dell'utente|
|Stringa non NULL|NULL o ""|*pstrUserName*|" "|
|NULL |Stringa non NULL|ERRORE|ERRORE|
|Stringa non NULL|Stringa non NULL|*pstrUserName*|*pstrPassword*|

*dwFlags*<br/>
Qualsiasi combinazione dei flag di `INTERNET_FLAG_*`. Per una descrizione dei valori *dwFlags* , vedere la tabella nella sezione **osservazioni** di [CHttpConnection:: OpenRequest](#openrequest) .

### <a name="remarks"></a>Osservazioni

Non è mai possibile creare direttamente un `CHttpConnection`. Si crea invece un oggetto chiamando [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection).

##  <a name="openrequest"></a>CHttpConnection:: OpenRequest

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
Puntatore a una stringa contenente il metodo da utilizzare nella richiesta. Se è NULL, viene usato "GET".

*pstrObjectName*<br/>
Puntatore a una stringa contenente l'oggetto di destinazione del metodo specificato. Questa stringa è in genere un nome di file, un modulo eseguibile o un identificatore di ricerca.

*pstrReferer*<br/>
Puntatore a una stringa che specifica l'indirizzo (URL) del documento da cui è stato ottenuto l'URL nella richiesta (*pstrObjectName*). Se è NULL, non viene specificata alcuna intestazione HTTP.

*dwContext*<br/>
Identificatore di contesto per l'operazione `OpenRequest`. Per ulteriori informazioni su *dwContext*, vedere la sezione Osservazioni.

*ppstrAcceptTypes*<br/>
Puntatore a una matrice con terminazione null di puntatori LPCTSTR a stringhe che indicano i tipi di contenuto accettati dal client. Se *ppstrAcceptTypes* è null, i server interpretano che il client accetta solo documenti di tipo "Text/*" (ovvero solo documenti di testo e non immagini o altri file binari). Il tipo di contenuto è equivalente alla variabile CONTENT_TYPE di CGI, che identifica il tipo di dati per le query con informazioni associate, quali HTTP POST e PUT.

*pstrVersion*<br/>
Puntatore a una stringa che definisce la versione di HTTP. Se è NULL, viene usato "HTTP/1.0".

*dwFlags*<br/>
Qualsiasi combinazione dei flag INTERNET_ FLAG_*. Per una descrizione dei possibili valori di *dwFlags* , vedere la sezione Osservazioni.

*nVerb*<br/>
Numero associato al tipo di richiesta HTTP. Può essere uno dei valori seguenti:

|Tipo di richiesta HTTP|valore *nVerb*|
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
|INTERNET_FLAG_MAKE_PERSISTENT|Aggiunge l'entità restituita alla cache come entità persistente. Ciò significa che la pulizia della cache standard, il controllo della coerenza o Garbage Collection non possono rimuovere questo elemento dalla cache.|
|INTERNET_FLAG_SECURE|Utilizza semantica sicura delle transazioni. Viene convertito in utilizzando SSL/PCT ed è significativo solo nelle richieste HTTP|
|INTERNET_FLAG_NO_AUTO_REDIRECT|Usato solo con HTTP, specifica che i reindirizzamenti non devono essere gestiti automaticamente in [CHttpFile:: SendRequest](../../mfc/reference/chttpfile-class.md#sendrequest).|

Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa operazione specifica dell'oggetto `CHttpConnection` creato dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) . Il valore viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui è identificato. Per ulteriori informazioni sull'identificatore di contesto, vedere l'articolo [primo passaggio per Internet: WinInet](../../mfc/wininet-basics.md) .

In questa funzione possono essere generate eccezioni.

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)
