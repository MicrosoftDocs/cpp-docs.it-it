---
title: Classe CGopherConnection
ms.date: 11/04/2016
f1_keywords:
- CGopherConnection
- AFXINET/CGopherConnection
- AFXINET/CGopherConnection::CGopherConnection
- AFXINET/CGopherConnection::CreateLocator
- AFXINET/CGopherConnection::GetAttribute
- AFXINET/CGopherConnection::OpenFile
helpviewer_keywords:
- CGopherConnection [MFC], CGopherConnection
- CGopherConnection [MFC], CreateLocator
- CGopherConnection [MFC], GetAttribute
- CGopherConnection [MFC], OpenFile
ms.assetid: b5b96aea-ac99-430e-bd84-d1372b43f78f
ms.openlocfilehash: eade1a82b674d5ad2e91146559139445ef017180
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373704"
---
# <a name="cgopherconnection-class"></a>Classe CGopherConnection

Gestisce la connessione a un server Internet gopher.

> [!NOTE]
> Le `CGopherConnection`classi `CGopherFile` `CGopherFileFind`, `CGopherLocator` , e i relativi membri sono stati deprecati perché non funzionano sulla piattaforma Windows XP, ma continueranno a lavorare su piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherConnection : public CInternetConnection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherConnection::CGopherConnection](#cgopherconnection)|Costruisce un oggetto `CGopherConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherConnection::CreateLocator](#createlocator)|Crea un oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) per trovare i file in un server gopher.|
|[CGopherConnection::GetAttribute](#getattribute)|Recupera le informazioni sugli attributi relative all'oggetto gopher.|
|[CGopherConnection::OpenFile](#openfile)|Apre un file gopher.|

## <a name="remarks"></a>Osservazioni

Il servizio gopher è uno dei tre servizi Internet riconosciuti dalle classi WinInet MFC.

La `CGopherConnection` classe contiene un costruttore e tre funzioni membro aggiuntive che gestiscono il servizio gopher: [OpenFile](#openfile), [CreateLocator](#createlocator)e [GetAttribute](#getattribute).

Per comunicare con un server Internet gopher, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), `CGopherConnection` quindi chiamare [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), che crea l'oggetto e restituisce un puntatore a esso. Non si `CGopherConnection` crea mai direttamente un oggetto.

Per ulteriori informazioni `CGopherConnection` sul funzionamento con le altre classi Internet MFC, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sull'utilizzo degli altri due servizi Internet supportati, FTP e HTTP, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CGopherConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cgopherconnectioncgopherconnection"></a><a name="cgopherconnection"></a>CGopherConnection::CGopherConnection

Questa funzione membro viene `CGopherConnection` chiamata per costruire un oggetto.

```
CGopherConnection(
    CInternetSession* pSession,
    HINTERNET hConnected,
    LPCTSTR pstrServer,
    DWORD_PTR dwContext);

CGopherConnection(
    CInternetSession* pSession,
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    DWORD_PTR dwContext = 0,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### <a name="parameters"></a>Parametri

*pSessione*<br/>
Puntatore all'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) correlato.

*hCollegato*<br/>
Handle di Windows della sessione Internet corrente.

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server FTP.

*dwContext*<br/>
Identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). Il valore predefinito è 1; Tuttavia, è possibile assegnare in modo esplicito un ID di contesto specifico per l'operazione. L'oggetto e le operazioni eseguite verranno associati a tale ID di contesto.

*pstrUserName (nome di applicazione)*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonimo.

*pstrPassword (informazioni in base alla proprietà di un*<br/>
Puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se sia *pstrPassword* che *pstrUserName* sono NULL, la password anonima predefinita è il nome di posta elettronica dell'utente. Se *pstrPassword* è NULL (o una stringa vuota) ma *pstrUserName* non è NULL, viene utilizzata una password vuota. Nella tabella seguente viene descritto il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:

|*pstrUserName (nome di applicazione)*|*pstrPassword (informazioni in base alla proprietà di un*|Nome utente inviato al server FTP|Password inviata al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o " "|NULL o " "|"anonimo"|Nome e-mail dell'utente|
|Stringa non NULL|NULL o " "|*pstrUserName (nome di applicazione)*|" "|
|Stringa NULL non NULL|ERRORE|ERRORE||
|Stringa non NULL|Stringa non NULL|*pstrUserName (nome di applicazione)*|*pstrPassword (informazioni in base alla proprietà di un*|

*nPorta*<br/>
Numero che identifica la porta TCP/IP da utilizzare sul server.

### <a name="remarks"></a>Osservazioni

Non si `CGopherConnection` crea mai un direttamente. Chiamare invece [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), `CGopherConnection` che crea un oggetto e restituisce un puntatore a esso .

## <a name="cgopherconnectioncreatelocator"></a><a name="createlocator"></a>CGopherConnection::CreateLocator

Chiamare questa funzione membro per creare un localizzatore gopher per trovare o identificare un file su un server gopher.

```
CGopherLocator CreateLocator(
    LPCTSTR pstrDisplayString,
    LPCTSTR pstrSelectorString,
    DWORD dwGopherType);

static CGopherLocator CreateLocator(LPCTSTR pstrLocator);

static CGopherLocator CreateLocator(
    LPCTSTR pstrServerName,
    LPCTSTR pstrDisplayString,
    LPCTSTR pstrSelectorString,
    DWORD dwGopherType,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### <a name="parameters"></a>Parametri

*pstrDisplayString (stringa)*<br/>
Puntatore a una stringa contenente il nome del documento o della directory gopher da recuperare. Se il parametro *pstrDisplayString* è NULL, viene restituita la directory predefinita per il server gopher.

*pstrSelectorString (stringa)*<br/>
Puntatore alla stringa del selettore da inviare al server gopher per recuperare un elemento. *pstrSelectorString* può essere NULL.

*Tipo dwGopherType*<br/>
Specifica se *pstrSelectorString* fa riferimento a una directory o a un documento e se la richiesta è gopher o gopher. Vedere gli attributi per la struttura [GOPHER_FIND_DATA](/windows/win32/api/wininet/ns-wininet-gopher_find_dataw) in Windows SDK.

*pstrLocator (informazioni in base al pstrLocator*<br/>
Puntatore a una stringa che identifica il file da aprire. In genere, questa stringa viene restituita da una chiamata a [CGopherFileFind::GetLocator](../../mfc/reference/cgopherfilefind-class.md#getlocator).

*pstrNomeservere*<br/>
Puntatore a una stringa contenente il nome del server gopher.

*nPorta*<br/>
Numero che identifica la porta Internet per questa connessione.

### <a name="return-value"></a>Valore restituito

Oggetto [CGopherLocator.](../../mfc/reference/cgopherlocator-class.md)

### <a name="remarks"></a>Osservazioni

La versione statica della funzione membro richiede di specificare un server, mentre la versione non statica utilizza il nome del server dall'oggetto connessione.

Per recuperare informazioni da un server gopher, un'applicazione deve prima ottenere un localizzatore gopher. L'applicazione deve quindi considerare il localizzatore come un token opaco, ovvero l'applicazione può utilizzare il localizzatore ma non modificarlo o confrontarlo direttamente. In genere, l'applicazione utilizza il localizzatore per le chiamate alla funzione membro [CGopherFileFind::FindFile](../../mfc/reference/cgopherfilefind-class.md#findfile) per recuperare un'informazione specifica.

## <a name="cgopherconnectiongetattribute"></a><a name="getattribute"></a>CGopherConnection::GetAttribute

Chiamare questa funzione membro per recuperare informazioni specifiche sull'attributo su un elemento dal server gopher.

```
BOOL GetAttribute(
    CGopherLocator& refLocator    CString strRequestedAttributes,
    CString& strResult,);
```

### <a name="parameters"></a>Parametri

*refLocator (individuazione e commato*<br/>
Riferimento a un oggetto [CGopherLocator.](../../mfc/reference/cgopherlocator-class.md)

*strRequestedAttributi*<br/>
Stringa delimitata da spazi che specifica i nomi degli attributi richiesti.

*strRisultato*<br/>
Riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che riceve il tipo di localizzatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

## <a name="cgopherconnectionopenfile"></a><a name="openfile"></a>CGopherConnection::OpenFile

Chiamare questa funzione membro per aprire un file su un server gopher.

```
CGopherFile* OpenFile(
    CGopherLocator& refLocator,
    DWORD dwFlags = 0,
    LPCTSTR pstrView = NULL,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*refLocator (individuazione e commato*<br/>
Riferimento a un oggetto [CGopherLocator.](../../mfc/reference/cgopherlocator-class.md)

*dwFlags*<br/>
Qualsiasi combinazione di flag INTERNET_FLAG_. Vedere [CInternetSession::OpenUrl](../../mfc/reference/cinternetsession-class.md#openurl) per ulteriori\* informazioni sui flag di INTERNET_FLAG_.

*pstrView (visualizzazione di un controllo di windows*<br/>
Puntatore a una stringa di visualizzazione file. Se nel server sono presenti più viste del file, questo parametro specifica la vista file da aprire. Se *pstrView* è NULL, viene utilizzata la visualizzazione predefinita del file.

*dwContext*<br/>
ID di contesto per il file da aprire. Vedere **Osservazioni** per ulteriori informazioni su *dwContext*.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CGopherFile](../../mfc/reference/cgopherfile-class.md) da aprire.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di *dwContext* predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è `CGopherConnection` associato a questa operazione specifica dell'oggetto creato dal relativo [oggetto CInternetSession.](../../mfc/reference/cinternetsession-class.md) Il valore viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFtpConnection](../../mfc/reference/cftpconnection-class.md)<br/>
[Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CGopherLocator](../../mfc/reference/cgopherlocator-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CInternetSession](../../mfc/reference/cinternetsession-class.md)
