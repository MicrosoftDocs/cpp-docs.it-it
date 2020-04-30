---
title: Globals e helper di analisi URL Internet
ms.date: 04/03/2017
helpviewer_keywords:
- parsing, URLs
- URLs, parsing
ms.assetid: 46c6384f-e4a6-4dbd-9196-219c19040ec5
ms.openlocfilehash: 742b381ecb55c433d0f384174b7612fcc21e9716
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81356616"
---
# <a name="internet-url-parsing-globals-and-helpers"></a>Globals e helper di analisi URL Internet

Quando un client invia una query al server Internet, è possibile usare una delle variabili globali di analisi degli URL per estrarre le informazioni sul client. Le funzioni di supporto forniscono altre funzionalità Internet.

## <a name="internet-url-parsing-globals"></a>Funzioni globali di analisi degli URL Internet

|||
|-|-|
|[AfxParseURL](#afxparseurl)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.|
|[AfxParseURLEx](#afxparseurlex)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, oltre a fornire il nome utente e la password.|

## <a name="other-internet-helpers"></a>Altri helper Internet

|||
|-|-|
|[AfxThrowInternetException](#afxthrowinternetexception)|Genera un'eccezione correlata alla connessione Internet.|
|[AfxGetInternetHandleType](#afxgetinternethandletype)|Determina il tipo di un handle Internet.|

## <a name="afxparseurl"></a><a name="afxparseurl"></a>AfxParseURL

Questo globale viene usato in [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

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
Puntatore a una stringa contenente l'URL da analizzare.

*dwServiceType*<br/>
Indica il tipo di servizio Internet. Sono disponibili i valori seguenti:

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
Primo segmento dell'URL che segue il tipo di servizio.

*strObject*<br/>
Oggetto a cui fa riferimento l'URL (può essere vuoto).

*nPort*<br/>
Determinato dalle parti del server o dell'oggetto dell'URL, se esistente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'URL è stato analizzato correttamente. in caso contrario, 0 se è vuoto o non contiene un tipo di servizio Internet noto.

### <a name="remarks"></a>Osservazioni

Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.

Ad esempio, `AfxParseURL` analizza gli URL del form *Service://server/dir/dir/Object.ext:Port* e restituisce i relativi componenti archiviati come indicato di seguito:

*strServer* = = "Server"

*strObject* = = "/dir/dir/Object/Object.ext"

*NPort* = = #port

*dwServiceType* = = #service

> [!NOTE]
> Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXINET. h

## <a name="afxparseurlex"></a><a name="afxparseurlex"></a>AfxParseURLEx

Questa funzione globale è la versione estesa di [AfxParseURL](#afxparseurl) e viene usata in [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

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
Puntatore a una stringa contenente l'URL da analizzare.

*dwServiceType*<br/>
Indica il tipo di servizio Internet. Sono disponibili i valori seguenti:

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
Primo segmento dell'URL che segue il tipo di servizio.

*strObject*<br/>
Oggetto a cui fa riferimento l'URL (può essere vuoto).

*nPort*<br/>
Determinato dalle parti del server o dell'oggetto dell'URL, se esistente.

*strUsername*<br/>
Riferimento a un `CString` oggetto che contiene il nome dell'utente.

*strPassword*<br/>
Riferimento a un `CString` oggetto contenente la password dell'utente.

*dwFlags*<br/>
Flag che controllano come analizzare l'URL. Può essere una combinazione dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|ICU_DECODE|Converte le sequenze di escape% XX in caratteri.|
|ICU_NO_ENCODE|Non convertire i caratteri non sicuri nella sequenza di escape.|
|ICU_NO_META|Non rimuovere le metasequenze (ad esempio "\." e "\..") dall'URL.|
|ICU_ENCODE_SPACES_ONLY|Codifica solo gli spazi.|
|ICU_BROWSER_MODE|Non codificare o decodificare i caratteri dopo ' #' o '' e non rimuovere gli spazi vuoti finali dopo ''. Se questo valore non viene specificato, l'intero URL viene codificato e gli spazi vuoti finali vengono rimossi.|

Se si usa l'impostazione predefinita MFC, che non è un flag, la funzione converte tutti i caratteri non sicuri e le metasequenze \\, ad esempio., \. \\. e..., in sequenze di escape.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'URL è stato analizzato correttamente. in caso contrario, 0 se è vuoto o non contiene un tipo di servizio Internet noto.

### <a name="remarks"></a>Osservazioni

Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, oltre a fornire il nome e la password dell'utente. I flag indicano come vengono gestiti i caratteri non sicuri.

> [!NOTE]
> Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXINET. h

## <a name="afxgetinternethandletype"></a><a name="afxgetinternethandletype"></a>AfxGetInternetHandleType

Usare questa funzione globale per determinare il tipo di un handle Internet.

### <a name="syntax"></a>Sintassi

  ```
DWORD AFXAPI AfxGetInternetHandleType(  HINTERNET hQuery );
```

### <a name="parameters"></a>Parametri

*hQuery*<br/>
Handle per una query Internet.

### <a name="return-value"></a>Valore restituito

Qualsiasi tipo di servizio Internet definito da WININET. H. Per un elenco di questi servizi Internet, vedere la sezione Osservazioni. Se l'handle è NULL o non riconosciuto, la funzione restituisce AFX_INET_SERVICE_UNK.

### <a name="remarks"></a>Osservazioni

Nell'elenco seguente sono inclusi i tipi Internet possibili `AfxGetInternetHandleType`restituiti da.

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
> Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

## <a name="afxthrowinternetexception"></a><a name="afxthrowinternetexception"></a>AfxThrowInternetException

Genera un'eccezione Internet.

### <a name="syntax"></a>Sintassi

```
   void AFXAPI AfxThrowInternetException(  DWORD dwContext,  DWORD dwError = 0 );
```

### <a name="parameters"></a>Parametri

*dwContext*<br/>
Identificatore di contesto per l'operazione che ha causato l'errore. Il valore predefinito di *dwContext* è specificato in origine in [CInternetSession](cinternetsession-class.md) e viene passato alle classi derivate da [CInternetConnection](cinternetconnection-class.md)e [CInternetFile](cinternetfile-class.md). Per operazioni specifiche eseguite su una connessione o un file, in genere si sostituisce il valore predefinito con un *dwContext* personalizzato. Questo valore viene quindi restituito a [CInternetSession:: OnStatusCallback](cinternetsession-class.md#onstatuscallback) per identificare lo stato dell'operazione specifica.

*dwError*<br/>
Errore che ha causato l'eccezione.

### <a name="remarks"></a>Osservazioni

L'utente è responsabile di determinare la causa in base al codice di errore del sistema operativo.

> [!NOTE]
> Per chiamare questa funzione, il progetto deve includere AFXINET. H.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Classe CInternetException](cinternetexception-class.md)<br/>
[AfxParseURL](internet-url-parsing-globals.md#afxparseurl)
