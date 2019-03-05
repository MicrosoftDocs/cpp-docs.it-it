---
title: Gli helper e funzioni globali di analisi di URL Internet
ms.date: 04/03/2017
f1_keywords:
- vc.mfc.macros.isapi
helpviewer_keywords:
- parsing, URLs
- URLs, parsing
ms.assetid: 46c6384f-e4a6-4dbd-9196-219c19040ec5
ms.openlocfilehash: 0831d94f1a6f0293d3605a5e2e9ebde0564baf24
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57293472"
---
# <a name="internet-url-parsing-globals-and-helpers"></a>Gli helper e funzioni globali di analisi di URL Internet

Quando un client invia una query per il server Internet, è possibile utilizzare uno degli URL globali di analisi per estrarre le informazioni relative al client. Le funzioni di supporto forniscono altre funzionalità di internet.

## <a name="internet-url-parsing-globals"></a>Funzioni globali di analisi degli URL Internet

|||
|-|-|
|[AfxParseURL](#afxparseurl)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.|
|[AfxParseURLEx](#afxparseurlex)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, nonché fornendo il nome utente e password.|

## <a name="other-internet-helpers"></a>Altri helper Internet

|||
|-|-|
|[AfxThrowInternetException](#afxthrowinternetexception)|Genera un'eccezione relative alla connessione internet.|
|[AfxGetInternetHandleType](#afxgetinternethandletype)|Determina il tipo di un handle di Internet.|

##  <a name="afxparseurl"></a>  AfxParseURL

Questo globale viene usato nel [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

```
BOOL AFXAPI AfxParseURL(
    LPCTSTR pstrURL,
    DWORD& dwServiceType,
    CString& strServer,
    CString& strObject,
    INTERNET_PORT& nPort);
```

### <a name="parameters"></a>Parametri

*pstrURL*<br/>
Un puntatore a una stringa contenente l'URL deve essere analizzato.

*dwServiceType*<br/>
Indica il tipo di servizio Internet. I valori possibili sono i seguenti:

- AFX_INET_SERVICE_FTP

- AFX_INET_SERVICE_HTTP

- AFX_INET_SERVICE_HTTPS

- AFX_INET_SERVICE_GOPHER

- AFX_INET_SERVICE_FILE

- AFX_INET_SERVICE_MAILTO

- AFX_INET_SERVICE_NEWS

- AFX_INET_SERVICE_NNTP

- AFX_INET_SERVICE_TELNET

- AFX_INET_SERVICE_WAIS

- AFX_INET_SERVICE_MID

- AFX_INET_SERVICE_CID

- AFX_INET_SERVICE_PROSPERO

- AFX_INET_SERVICE_AFS

- AFX_INET_SERVICE_UNK

*strServer*<br/>
Il primo segmento di URL che segue il tipo di servizio.

*strObject*<br/>
Un oggetto che fa riferimento l'URL a (può essere vuoto).

*nPort*<br/>
Determinato dal Server o l'oggetto parti dell'URL, in presenza di una.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'URL è stato analizzato correttamente; in caso contrario, 0 se è vuoto o non contiene un tipo di servizio Internet noto.

### <a name="remarks"></a>Note

Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.

Ad esempio, `AfxParseURL` analizza URL nel formato *service://server/dir/dir/object.ext:port* e restituisce i relativi componenti, come illustrato di seguito:

*strServer* == "server"

*strObject* == "/dir/dir/object/object.ext"

*nPort* == #port

*dwServiceType* == #service

> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxinet. h

##  <a name="afxparseurlex"></a>  AfxParseURLEx

Questa funzione globale è la versione estesa del [AfxParseURL](#afxparseurl) e viene utilizzato [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

```
BOOL AFXAPI AfxParseURLEx(
    LPCTSTR pstrURL,
    DWORD& dwServiceType,
    CString& strServer,
    CString& strObject,
    INTERNET_PORT& nPort,
    CString& strUsername,
    CString& strPassword,
    DWORD dwFlags = 0);
```

### <a name="parameters"></a>Parametri

*pstrURL*<br/>
Un puntatore a una stringa contenente l'URL deve essere analizzato.

*dwServiceType*<br/>
Indica il tipo di servizio Internet. I valori possibili sono i seguenti:

- AFX_INET_SERVICE_FTP

- AFX_INET_SERVICE_HTTP

- AFX_INET_SERVICE_HTTPS

- AFX_INET_SERVICE_GOPHER

- AFX_INET_SERVICE_FILE

- AFX_INET_SERVICE_MAILTO

- AFX_INET_SERVICE_NEWS

- AFX_INET_SERVICE_NNTP

- AFX_INET_SERVICE_TELNET

- AFX_INET_SERVICE_WAIS

- AFX_INET_SERVICE_MID

- AFX_INET_SERVICE_CID

- AFX_INET_SERVICE_PROSPERO

- AFX_INET_SERVICE_AFS

- AFX_INET_SERVICE_UNK

*strServer*<br/>
Il primo segmento di URL che segue il tipo di servizio.

*strObject*<br/>
Un oggetto che fa riferimento l'URL a (può essere vuoto).

*nPort*<br/>
Determinato dal Server o l'oggetto parti dell'URL, in presenza di una.

*strUsername*<br/>
Un riferimento a un `CString` oggetto contenente il nome dell'utente.

*strPassword*<br/>
Un riferimento a un `CString` oggetto contenente la password dell'utente.

*dwFlags*<br/>
I flag che controllano come analizzare l'URL. Può essere una combinazione dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|ICU_DECODE|Convertire le sequenze di escape XX % per caratteri.|
|ICU_NO_ENCODE|Non convertire i caratteri non sicuri per sequenza di escape.|
|ICU_NO_META|Non rimuovere le sequenze di metadati (ad esempio "\". e "\"..) dall'URL.|
|ICU_ENCODE_SPACES_ONLY|Codificare solo da spazi.|
|ICU_BROWSER_MODE|Non codificare o decodificare i caratteri dopo '#' o ' e non rimuovere spazio vuoto finale dopo '. Se questo valore viene omesso, l'intero URL è codificato e spazio vuoto finale viene rimosso.|

Se si usa il valore predefinito MFC, ovvero alcun flag, la funzione converte tutti i caratteri non sicuri e le sequenze di metadati (ad esempio \\., \.., e \\...) per eseguire l'escape di sequenze.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'URL è stato analizzato correttamente; in caso contrario, 0 se è vuoto o non contiene un tipo di servizio Internet noto.

### <a name="remarks"></a>Note

Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, nonché specificando nome e la password dell'utente. I flag indicano caratteri non sicuri come vengono gestiti.

> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxinet. h

## <a name="afxgetinternethandletype"></a>  AfxGetInternetHandleType

Utilizzare questa funzione globale per determinare il tipo di un handle di Internet.

### <a name="syntax"></a>Sintassi

  ```
DWORD AFXAPI AfxGetInternetHandleType(  HINTERNET hQuery );
```

### <a name="parameters"></a>Parametri

*hQuery*<br/>
Handle per una query di Internet.

### <a name="return-value"></a>Valore restituito

Uno qualsiasi dei tipi di servizi Internet definiti da WININET. H. Vedere la sezione Osservazioni per un elenco di questi servizi Internet. Se l'handle è NULL o non riconosciuto, la funzione restituisce AFX_INET_SERVICE_UNK.

### <a name="remarks"></a>Note

Nell'elenco seguente include tipi Internet possibili restituiti da `AfxGetInternetHandleType`.

- INTERNET_HANDLE_TYPE_INTERNET

- INTERNET_HANDLE_TYPE_CONNECT_FTP

- INTERNET_HANDLE_TYPE_CONNECT_GOPHER

- INTERNET_HANDLE_TYPE_CONNECT_HTTP

- INTERNET_HANDLE_TYPE_FTP_FIND

- INTERNET_HANDLE_TYPE_FTP_FIND_HTML

- INTERNET_HANDLE_TYPE_FTP_FILE

- INTERNET_HANDLE_TYPE_FTP_FILE_HTML

- INTERNET_HANDLE_TYPE_GOPHER_FIND

- INTERNET_HANDLE_TYPE_GOPHER_FIND_HTML

- INTERNET_HANDLE_TYPE_GOPHER_FILE

- INTERNET_HANDLE_TYPE_GOPHER_FILE_HTML

- INTERNET_HANDLE_TYPE_HTTP_REQUEST

> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

## <a name="afxthrowinternetexception"></a>  AfxThrowInternetException

Genera un'eccezione di Internet.

### <a name="syntax"></a>Sintassi

```
   void AFXAPI AfxThrowInternetException(  DWORD dwContext,  DWORD dwError = 0 );
```

### <a name="parameters"></a>Parametri

*dwContext*<br/>
L'identificatore di contesto per l'operazione che ha causato l'errore. Il valore predefinito *dwContext* specificato originariamente nel [CInternetSession](cinternetsession-class.md) e viene passato al [CInternetConnection](cinternetconnection-class.md)- e [CInternetFile](cinternetfile-class.md)-le classi derivate. Per operazioni specifiche eseguite su una connessione o un file, è in genere ignorare il valore predefinito con un *dwContext* personalizzato. Questo valore viene quindi restituito al [CInternetSession:: OnStatusCallback](cinternetsession-class.md#onstatuscallback) per identificare lo stato dell'operazione specifica.

*dwError*<br/>
Errore che ha causato l'eccezione.

### <a name="remarks"></a>Note

Si è responsabile di determinare la causa in base al codice di errore del sistema operativo.

> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Classe CInternetException](cinternetexception-class.md)<br/>
[AfxParseURL](internet-url-parsing-globals.md#afxparseurl)
