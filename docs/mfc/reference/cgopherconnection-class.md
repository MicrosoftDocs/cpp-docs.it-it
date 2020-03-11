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
ms.openlocfilehash: f5d655aa7fd2eb9e41c15c60a71492c24ba43c43
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78883902"
---
# <a name="cgopherconnection-class"></a>Classe CGopherConnection

Gestisce la connessione a un server Internet gopher.

> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono state deprecate perché non funzionano sulla piattaforma Windows XP, ma continueranno a funzionare su piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherConnection : public CInternetConnection
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherConnection:: CGopherConnection](#cgopherconnection)|Costruisce un oggetto `CGopherConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherConnection:: CreateLocator](#createlocator)|Crea un oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) per trovare i file in un server gopher.|
|[CGopherConnection:: GetAttribute](#getattribute)|Recupera le informazioni sugli attributi dell'oggetto gopher.|
|[CGopherConnection:: OpenFile](#openfile)|Apre un file gopher.|

## <a name="remarks"></a>Osservazioni

Il servizio Gopher è uno dei tre servizi Internet riconosciuti dalle classi WinInet di MFC.

La classe `CGopherConnection` contiene un costruttore e altre tre funzioni membro che gestiscono il servizio Gopher: [OpenFile](#openfile), [CreateLocator](#createlocator)e [GetAttribute](#getattribute).

Per comunicare con un server Internet Gopher, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi chiamare [CInternetSession:: GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), che crea l'oggetto `CGopherConnection` e restituisce un puntatore a tale istanza. Non è mai possibile creare direttamente un oggetto `CGopherConnection`.

Per ulteriori informazioni sul funzionamento di `CGopherConnection` con le altre classi Internet MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sull'utilizzo degli altri due servizi Internet supportati, FTP e HTTP, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CGopherConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

##  <a name="cgopherconnection"></a>CGopherConnection:: CGopherConnection

Questa funzione membro viene chiamata per costruire un oggetto `CGopherConnection`.

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

*pSession*<br/>
Puntatore all'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) correlato.

*hConnected*<br/>
Handle di Windows della sessione Internet corrente.

*pstrServer*<br/>
Puntatore a una stringa che contiene il nome del server FTP.

*dwContext*<br/>
Identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). Il valore predefinito è 1. Tuttavia, è possibile assegnare in modo esplicito un ID contesto specifico per l'operazione. L'oggetto e tutte le operazioni che verranno associate a tale ID di contesto.

*pstrUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente a cui accedere. Se NULL, il valore predefinito è anonimo.

*pstrPassword*<br/>
Puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se *pstrPassword* e *PSTRUSERNAME* sono entrambi null, la password anonima predefinita corrisponde al nome di posta elettronica dell'utente. Se *pstrPassword* è null (o una stringa vuota) ma *PSTRUSERNAME* non è null, viene utilizzata una password vuota. La tabella seguente descrive il comportamento per le quattro impostazioni possibili di *pstrUserName* e *pstrPassword*:

|*pstrUserName*|*pstrPassword*|Nome utente inviato al server FTP|Password inviata al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o ""|NULL o ""|Anonimo|Nome di posta elettronica dell'utente|
|Stringa non NULL|NULL o ""|*pstrUserName*|" "|
|Stringa NULL non NULL|ERRORE|ERRORE||
|Stringa non NULL|Stringa non NULL|*pstrUserName*|*pstrPassword*|

*nPort*<br/>
Numero che identifica la porta TCP/IP da utilizzare nel server.

### <a name="remarks"></a>Osservazioni

Non è mai possibile creare direttamente un `CGopherConnection`. Chiamare invece [CInternetSession:: GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), che crea un oggetto `CGopherConnection` e restituisce un puntatore a tale oggetto.

##  <a name="createlocator"></a>CGopherConnection:: CreateLocator

Chiamare questa funzione membro per creare un localizzatore Gopher per trovare o identificare un file in un server gopher.

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

*pstrDisplayString*<br/>
Puntatore a una stringa che contiene il nome del documento o della directory gopher da recuperare. Se il parametro *pstrDisplayString* è null, viene restituita la directory predefinita per il server gopher.

*pstrSelectorString*<br/>
Puntatore alla stringa del selettore da inviare al server gopher per recuperare un elemento. *pstrSelectorString* può essere null.

*dwGopherType*<br/>
Specifica se *pstrSelectorString* fa riferimento a una directory o a un documento e se la richiesta è Gopher o gopher +. Vedere gli attributi per la struttura [GOPHER_FIND_DATA](/windows/win32/api/wininet/ns-wininet-gopher_find_dataw) nel Windows SDK.

*pstrLocator*<br/>
Puntatore a una stringa che identifica il file da aprire. In genere, questa stringa viene restituita da una chiamata a [CGopherFileFind:: GetLocator](../../mfc/reference/cgopherfilefind-class.md#getlocator).

*pstrServerName*<br/>
Puntatore a una stringa che contiene il nome del server gopher.

*nPort*<br/>
Numero che identifica la porta Internet per questa connessione.

### <a name="return-value"></a>Valore restituito

Oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) .

### <a name="remarks"></a>Osservazioni

Per la versione statica della funzione membro è necessario specificare un server, mentre la versione non statica utilizza il nome del server dall'oggetto connessione.

Per recuperare informazioni da un server gopher, un'applicazione deve prima ottenere un localizzatore gopher. L'applicazione deve quindi trattare il localizzatore come token opaco, ovvero l'applicazione può usare il localizzatore ma non modificarlo direttamente o confrontarlo. In genere, l'applicazione usa il localizzatore per le chiamate alla funzione membro [CGopherFileFind:: FindFile](../../mfc/reference/cgopherfilefind-class.md#findfile) per recuperare informazioni specifiche.

##  <a name="getattribute"></a>CGopherConnection:: GetAttribute

Chiamare questa funzione membro per recuperare informazioni specifiche sugli attributi di un elemento dal server gopher.

```
BOOL GetAttribute(
    CGopherLocator& refLocator    CString strRequestedAttributes,
    CString& strResult,);
```

### <a name="parameters"></a>Parametri

*refLocator*<br/>
Riferimento a un oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) .

*strRequestedAttributes*<br/>
Stringa delimitata da spazi che specifica i nomi degli attributi richiesti.

*strResult*<br/>
Riferimento a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che riceve il tipo di localizzatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

##  <a name="openfile"></a>CGopherConnection:: OpenFile

Chiamare questa funzione membro per aprire un file in un server gopher.

```
CGopherFile* OpenFile(
    CGopherLocator& refLocator,
    DWORD dwFlags = 0,
    LPCTSTR pstrView = NULL,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*refLocator*<br/>
Riferimento a un oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) .

*dwFlags*<br/>
Qualsiasi combinazione di flag di INTERNET_FLAG_ *. Per ulteriori informazioni sui flag di\* INTERNET_FLAG_, vedere [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) .

*pstrView*<br/>
Puntatore a una stringa di visualizzazione file. Se nel server sono presenti più viste del file, questo parametro specifica la visualizzazione file da aprire. Se *pstrView* è null, viene utilizzata la visualizzazione file predefinita.

*dwContext*<br/>
ID del contesto per il file da aprire. Per ulteriori informazioni su *dwContext*, vedere la **sezione Osservazioni** .

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CGopherFile](../../mfc/reference/cgopherfile-class.md) da aprire.

### <a name="remarks"></a>Osservazioni

Eseguire l'override dell'impostazione predefinita *dwContext* per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto è associato a questa operazione specifica dell'oggetto `CGopherConnection` creato dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) . Il valore viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Per ulteriori informazioni sull'identificatore di contesto, vedere l'articolo [primo passaggio per Internet: WinInet](../../mfc/wininet-basics.md) .

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFtpConnection](../../mfc/reference/cftpconnection-class.md)<br/>
[Classe CHttpConnection](../../mfc/reference/chttpconnection-class.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CGopherLocator](../../mfc/reference/cgopherlocator-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CInternetSession](../../mfc/reference/cinternetsession-class.md)
