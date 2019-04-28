---
title: Classe cUrl
ms.date: 11/04/2016
f1_keywords:
- CUrl
- ATLUTIL/ATL::CUrl
- ATLUTIL/ATL::CUrl::CUrl
- ATLUTIL/ATL::CUrl::Canonicalize
- ATLUTIL/ATL::CUrl::Clear
- ATLUTIL/ATL::CUrl::CrackUrl
- ATLUTIL/ATL::CUrl::CreateUrl
- ATLUTIL/ATL::CUrl::GetExtraInfo
- ATLUTIL/ATL::CUrl::GetExtraInfoLength
- ATLUTIL/ATL::CUrl::GetHostName
- ATLUTIL/ATL::CUrl::GetHostNameLength
- ATLUTIL/ATL::CUrl::GetPassword
- ATLUTIL/ATL::CUrl::GetPasswordLength
- ATLUTIL/ATL::CUrl::GetPortNumber
- ATLUTIL/ATL::CUrl::GetScheme
- ATLUTIL/ATL::CUrl::GetSchemeName
- ATLUTIL/ATL::CUrl::GetSchemeNameLength
- ATLUTIL/ATL::CUrl::GetUrlLength
- ATLUTIL/ATL::CUrl::GetUrlPath
- ATLUTIL/ATL::CUrl::GetUrlPathLength
- ATLUTIL/ATL::CUrl::GetUserName
- ATLUTIL/ATL::CUrl::GetUserNameLength
- ATLUTIL/ATL::CUrl::SetExtraInfo
- ATLUTIL/ATL::CUrl::SetHostName
- ATLUTIL/ATL::CUrl::SetPassword
- ATLUTIL/ATL::CUrl::SetPortNumber
- ATLUTIL/ATL::CUrl::SetScheme
- ATLUTIL/ATL::CUrl::SetSchemeName
- ATLUTIL/ATL::CUrl::SetUrlPath
- ATLUTIL/ATL::CUrl::SetUserName
helpviewer_keywords:
- CUrl class
ms.assetid: b3894d34-47b9-4961-9719-4197153793da
ms.openlocfilehash: 913365e2b20015b22480dfd364d75b2be3c6355b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62277253"
---
# <a name="curl-class"></a>Classe cUrl

Questa classe rappresenta un URL. È possibile modificare ogni elemento dell'URL indipendentemente dagli altri, se l'analisi di un URL esistente stringa o creazione di una stringa da zero.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CUrl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUrl::CUrl](#curl)|Costruttore.|
|[CUrl:: ~ CUrl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUrl::Canonicalize](#canonicalize)|Chiamare questo metodo per convertire la stringa URL in formato canonico.|
|[CUrl::Clear](#clear)|Chiamare questo metodo per cancellare tutti i campi URL.|
|[CUrl::CrackUrl](#crackurl)|Chiamare questo metodo per decodificare e analizzare l'URL.|
|[CUrl::CreateUrl](#createurl)|Chiamare questo metodo per creare l'URL.|
|[CUrl::GetExtraInfo](#getextrainfo)|Chiamare questo metodo per ottenere informazioni aggiuntive (ad esempio *testo* o & *testo*) dall'URL.|
|[CUrl::GetExtraInfoLength](#getextrainfolength)|Chiamare questo metodo per ottenere la lunghezza di informazioni aggiuntive (ad esempio *testo* o & *testo*) per recuperare dall'URL.|
|[CUrl::GetHostName](#gethostname)|Chiamare questo metodo per ottenere il nome host dell'URL.|
|[CUrl::GetHostNameLength](#gethostnamelength)|Chiamare questo metodo per ottenere la lunghezza del nome host.|
|[CUrl::GetPassword](#getpassword)|Chiamare questo metodo per ottenere la password dall'URL.|
|[CUrl::GetPasswordLength](#getpasswordlength)|Chiamare questo metodo per ottenere la lunghezza della password.|
|[CUrl::GetPortNumber](#getportnumber)|Chiamare questo metodo per ottenere il numero di porta in termini di ATL_URL_PORT.|
|[CUrl::GetScheme](#getscheme)|Chiamare questo metodo per ottenere lo schema URL.|
|[CUrl::GetSchemeName](#getschemename)|Chiamare questo metodo per ottenere il nome dello schema URL.|
|[CUrl::GetSchemeNameLength](#getschemenamelength)|Chiamare questo metodo per ottenere la lunghezza del nome di schema dell'URL.|
|[CUrl::GetUrlLength](#geturllength)|Chiamare questo metodo per ottenere la lunghezza dell'URL.|
|[CUrl::GetUrlPath](#geturlpath)|Chiamare questo metodo per ottenere il percorso dell'URL.|
|[CUrl::GetUrlPathLength](#geturlpathlength)|Chiamare questo metodo per ottenere la lunghezza del percorso URL.|
|[CUrl::GetUserName](#getusername)|Chiamare questo metodo per ottenere il nome utente dall'URL.|
|[CUrl::GetUserNameLength](#getusernamelength)|Chiamare questo metodo per ottenere la lunghezza del nome utente.|
|[CUrl::SetExtraInfo](#setextrainfo)|Chiamare questo metodo per impostare le informazioni aggiuntive (ad esempio *testo* o & *testo*) dell'URL.|
|[CUrl::SetHostName](#sethostname)|Chiamare questo metodo per impostare il nome host.|
|[CUrl::SetPassword](#setpassword)|Chiamare questo metodo per impostare la password.|
|[CUrl::SetPortNumber](#setportnumber)|Chiamare questo metodo per impostare il numero di porta in termini di ATL_URL_PORT.|
|[CUrl::SetScheme](#setscheme)|Chiamare questo metodo per impostare lo schema URL.|
|[CUrl::SetSchemeName](#setschemename)|Chiamare questo metodo per impostare il nome dello schema URL.|
|[CUrl::SetUrlPath](#seturlpath)|Chiamare questo metodo per impostare il percorso dell'URL.|
|[CUrl::SetUserName](#setusername)|Chiamare questo metodo per impostare il nome utente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUrl::operator =](#operator_eq)|Assegna l'oggetto specificato `CUrl` oggetto all'oggetto corrente `CUrl` oggetto.|

## <a name="remarks"></a>Note

`CUrl` Consente di modificare i campi di un URL, ad esempio il numero di porta o percorso. `CUrl` riconosce gli URL nel formato seguente:

\<Schema > ://\<UserName >:\<Password >\@\<nome host >:\<NumeroPorta > /\<UrlPath >\<ExtraInfo >

(Alcuni campi sono facoltativi). Si consideri, ad esempio, questo URL:

`http://someone:secret@www.microsoft.com:80/visualc/stuff.htm#contents`

[CUrl::CrackUrl](#crackurl) analizza come indicato di seguito:

- Schema: "http" o [ATL_URL_SCHEME_HTTP](atl-url-scheme-enum.md)

- Nome utente: "someone"

- Password: "secret"

- Nome host: "`www.microsoft.com`"

- Numero di porta: 80

- UrlPath: "visualc/stuff.htm"

- ExtraInfo: "#contents"

Per modificare il campo UrlPath (ad esempio), si utilizzerebbe [GetUrlPath](#geturlpath), [GetUrlPathLength](#geturlpathlength), e [SetUrlPath](#seturlpath). Si utilizzerebbe [CreateUrl](#createurl) per creare la stringa dell'URL completata.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

##  <a name="canonicalize"></a>  CUrl::Canonicalize

Chiamare questo metodo per convertire la stringa URL in formato canonico.

```
inline BOOL Canonicalize(DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag che controllano la canonizzazione. Se nessun flag specificato (*dwFlags* = 0), il metodo converte tutti i caratteri non sicuri e le sequenze di metadati (ad esempio \\., \.., e \\...) per eseguire l'escape di sequenze. *dwFlags* può essere uno dei valori seguenti:

- ATL_URL_BROWSER_MODE: Non codificare o decodificare i caratteri successivi a "#" o "" e non rimuove gli spazi finali dopo "". Se questo valore viene omesso, l'intero URL è codificato e spazio vuoto finale viene rimosso.

- _DECODE ATL_URL: Converte tutte le sequenze XX % in caratteri, tra cui le sequenze di escape, prima che l'URL viene analizzato.

- ATL_URL _ENCODE_PERCENT: Codifica qualsiasi segni di percentuale rilevati. Per impostazione predefinita, i segni di percentuale non vengono codificati.

- _ENCODE_SPACES_ONLY ATL_URL: Codifica solo da spazi.

- ATL_URL _NO_ENCODE: Non converte i caratteri non sicuri in sequenze di escape.

- ATL_URL _NO_META: Non rimuove le sequenze di metadati (ad esempio "."e"..") dall'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

La conversione in forma canonica comporta la conversione di caratteri non sicuri e gli spazi per le sequenze di escape.

##  <a name="clear"></a>  CUrl::Clear

Chiamare questo metodo per cancellare tutti i campi URL.

```
inline void Clear() throw();
```

##  <a name="crackurl"></a>  CUrl::CrackUrl

Chiamare questo metodo per decodificare e analizzare l'URL.

```
BOOL CrackUrl(LPCTSTR lpszUrl, DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*lpszUrl*<br/>
L'URL.

*dwFlags*<br/>
Specificare ATL_URL_DECODE o ATL_URL_ESCAPE per convertire tutti i caratteri di escape *lpszUrl* sui rispettivi valori reale dopo l'analisi. (Prima dell'oggetto visivo C++ 2005, ATL_URL_DECODE convertito tutti i caratteri di escape prima dell'analisi.)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="createurl"></a>  CUrl::CreateUrl

Questo metodo costruisce una stringa URL in campi di componente dell'oggetto CUrl.

```
inline BOOL CreateUrl(
    LPTSTR lpszUrl,
    DWORD* pdwMaxLength,
    DWORD dwFlags = 0) const throw();
```

### <a name="parameters"></a>Parametri

*lpszUrl*<br/>
Un buffer di stringa per contenere la stringa dell'URL completata.

*pdwMaxLength*<br/>
La lunghezza massima del *lpszUrl* buffer di stringa.

*dwFlags*<br/>
Specificare ATL_URL_ESCAPE per convertire tutti i caratteri di escape *lpszUrl* sui rispettivi valori reali.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questo metodo aggiunge i singoli campi per costruire la stringa URL completata nel formato seguente:

**\<scheme>://\<user>:\<pass>\@\<domain>:\<port>\<path>\<extra>**

Quando si chiama questo metodo, il *pdwMaxLength* il parametro inizialmente deve contenere la lunghezza massima del buffer di stringa a cui fanno riferimento le *lpszUrl* parametro. Il valore della *pdwMaxLength* parametro verrà aggiornato con la lunghezza effettiva della stringa dell'URL.

### <a name="example"></a>Esempio

In questo esempio illustra la creazione di un oggetto CUrl e recuperare la stringa URL

[!code-cpp[NVC_ATL_Utilities#133](../../atl/codesnippet/cpp/curl-class_1.cpp)]

##  <a name="curl"></a>  CUrl::CUrl

Costruttore.

```
CUrl() throw();
CUrl(const CUrl& urlThat) throw();
```

### <a name="parameters"></a>Parametri

*urlThat*<br/>
Il `CUrl` oggetto da copiare per creare l'URL.

##  <a name="dtor"></a>  CUrl:: ~ CUrl

Distruttore.

```
~CUrl() throw();
```

##  <a name="getextrainfo"></a>  CUrl::GetExtraInfo

Chiamare questo metodo per ottenere informazioni aggiuntive (ad esempio *testo* o & *testo*) dall'URL.

```
inline LPCTSTR GetExtraInfo() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa che contiene le informazioni aggiuntive.

##  <a name="getextrainfolength"></a>  CUrl::GetExtraInfoLength

Chiamare questo metodo per ottenere la lunghezza di informazioni aggiuntive (ad esempio *testo* o & *testo*) per recuperare dall'URL.

```
inline DWORD GetExtraInfoLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza della stringa che contiene le informazioni aggiuntive.

##  <a name="gethostname"></a>  CUrl::GetHostName

Chiamare questo metodo per ottenere il nome host dell'URL.

```
inline LPCTSTR GetHostName() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome host.

##  <a name="gethostnamelength"></a>  CUrl::GetHostNameLength

Chiamare questo metodo per ottenere la lunghezza del nome host.

```
inline DWORD GetHostNameLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del nome host.

##  <a name="getpassword"></a>  CUrl::GetPassword

Chiamare questo metodo per ottenere la password dall'URL.

```
inline LPCTSTR GetPassword() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la password.

##  <a name="getpasswordlength"></a>  CUrl::GetPasswordLength

Chiamare questo metodo per ottenere la lunghezza della password.

```
inline DWORD GetPasswordLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza della password.

##  <a name="getportnumber"></a>  CUrl::GetPortNumber

Chiamare questo metodo per ottenere il numero di porta.

```
inline ATL_URL_PORT GetPortNumber() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di porta.

##  <a name="getscheme"></a>  CUrl::GetScheme

Chiamare questo metodo per ottenere lo schema URL.

```
inline ATL_URL_SCHEME GetScheme() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il [ATL_URL_SCHEME](atl-url-scheme-enum.md) che descrive lo schema dell'URL.

##  <a name="getschemename"></a>  CUrl::GetSchemeName

Chiamare questo metodo per ottenere il nome dello schema URL.

```
inline LPCTSTR GetSchemeName() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome dello schema URL (ad esempio "http" o "ftp").

##  <a name="getschemenamelength"></a>  CUrl::GetSchemeNameLength

Chiamare questo metodo per ottenere la lunghezza del nome di schema dell'URL.

```
inline DWORD GetSchemeNameLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del nome dello schema URL.

##  <a name="geturllength"></a>  CUrl::GetUrlLength

Chiamare questo metodo per ottenere la lunghezza dell'URL.

```
inline DWORD GetUrlLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza dell'URL.

##  <a name="geturlpath"></a>  CUrl::GetUrlPath

Chiamare questo metodo per ottenere il percorso dell'URL.

```
inline LPCTSTR GetUrlPath() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il percorso dell'URL.

##  <a name="geturlpathlength"></a>  CUrl::GetUrlPathLength

Chiamare questo metodo per ottenere la lunghezza del percorso URL.

```
inline DWORD GetUrlPathLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del percorso URL.

##  <a name="getusername"></a>  CUrl::GetUserName

Chiamare questo metodo per ottenere il nome utente dall'URL.

```
inline LPCTSTR GetUserName() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome utente.

##  <a name="getusernamelength"></a>  CUrl::GetUserNameLength

Chiamare questo metodo per ottenere la lunghezza del nome utente.

```
inline DWORD GetUserNameLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del nome utente.

##  <a name="operator_eq"></a>  CUrl::operator =

Assegna l'oggetto specificato `CUrl` oggetto all'oggetto corrente `CUrl` oggetto.

```
CUrl& operator= (const CUrl& urlThat) throw();
```

### <a name="parameters"></a>Parametri

*urlThat*<br/>
Il `CUrl` oggetto da copiare nell'oggetto corrente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto corrente.

##  <a name="setextrainfo"></a>  CUrl::SetExtraInfo

Chiamare questo metodo per impostare le informazioni aggiuntive (ad esempio *testo* o & *testo*) dell'URL.

```
inline BOOL SetExtraInfo(LPCTSTR lpszInfo) throw();
```

### <a name="parameters"></a>Parametri

*lpszInfo*<br/>
Stringa contenente le informazioni aggiuntive da includere nell'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="sethostname"></a>  CUrl::SetHostName

Chiamare questo metodo per impostare il nome host.

```
inline BOOL SetHostName(LPCTSTR lpszHost) throw();
```

### <a name="parameters"></a>Parametri

*lpszHost*<br/>
Il nome host.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="setpassword"></a>  CUrl::SetPassword

Chiamare questo metodo per impostare la password.

```
inline BOOL SetPassword(LPCTSTR lpszPass) throw();
```

### <a name="parameters"></a>Parametri

*lpszPass*<br/>
Password.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="setportnumber"></a>  CUrl::SetPortNumber

Chiamare questo metodo per impostare il numero di porta.

```
inline BOOL SetPortNumber(ATL_URL_PORT nPrt) throw();
```

### <a name="parameters"></a>Parametri

*nPrt*<br/>
Il numero di porta.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="setscheme"></a>  CUrl::SetScheme

Chiamare questo metodo per impostare lo schema URL.

```
inline BOOL SetScheme(ATL_URL_SCHEME nScheme) throw();
```

### <a name="parameters"></a>Parametri

*nScheme*<br/>
Uno dei [ATL_URL_SCHEME](atl-url-scheme-enum.md) valori per lo schema.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

È anche possibile impostare lo schema in base al nome (vedere [CUrl::SetSchemeName](#setschemename)).

##  <a name="setschemename"></a>  CUrl::SetSchemeName

Chiamare questo metodo per impostare il nome dello schema URL.

```
inline BOOL SetSchemeName(LPCTSTR lpszSchm) throw();
```

### <a name="parameters"></a>Parametri

*lpszSchm*<br/>
Il nome dello schema URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

È anche possibile impostare lo schema utilizzando un [ATL_URL_SCHEME](atl-url-scheme-enum.md) costante (vedere [CUrl::SetScheme](#setscheme)).

##  <a name="seturlpath"></a>  CUrl::SetUrlPath

Chiamare questo metodo per impostare il percorso dell'URL.

```
inline BOOL SetUrlPath(LPCTSTR lpszPath) throw();
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
Il percorso dell'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="setusername"></a>  CUrl::SetUserName

Chiamare questo metodo per impostare il nome utente.

```
inline BOOL SetUserName(LPCTSTR lpszUser) throw();
```

### <a name="parameters"></a>Parametri

*lpszUser*<br/>
Nome utente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)
