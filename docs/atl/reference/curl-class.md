---
title: Classe CUrl
ms.date: 05/06/2019
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
ms.openlocfilehash: 3468e17b031d0a72bc56d915c689fbe4c78859e0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330478"
---
# <a name="curl-class"></a>Classe CUrl

Questa classe rappresenta un URL. Consente di modificare ogni elemento dell'URL indipendentemente dagli altri, sia che si tratti dell'analisi di una stringa URL esistente o della creazione di una stringa da zero.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CUrl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[URL::CUrl](#curl)|Costruttore.|
|[Url: : : CUrl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUrl::Canonicalize](#canonicalize)|Chiamare questo metodo per convertire la stringa URL in formato canonico.|
|[CUrl::Cancella](#clear)|Chiamare questo metodo per cancellare tutti i campi URL.|
|[Url::CrackUrl](#crackurl)|Chiamare questo metodo per decodificare e analizzare l'URL.|
|[Url::CreateUrl](#createurl)|Chiamare questo metodo per creare l'URL.|
|[CUrl::GetExtraInfo](#getextrainfo)|Chiamare questo metodo per ottenere informazioni aggiuntive (ad esempio *testo* o *testo*) dall'URL.|
|[CUrl::GetExtraInfoLength](#getextrainfolength)|Chiamare questo metodo per ottenere la lunghezza delle informazioni aggiuntive (ad esempio *testo* o *testo*) da recuperare dall'URL.|
|[CUrl::GetHostName](#gethostname)|Chiamare questo metodo per ottenere il nome host dall'URL.|
|[CUrl::GetHostNameLength](#gethostnamelength)|Chiamare questo metodo per ottenere la lunghezza del nome host.|
|[CUrl::GetPassword](#getpassword)|Chiamare questo metodo per ottenere la password dall'URL.|
|[CUrl::GetPasswordLength](#getpasswordlength)|Chiamare questo metodo per ottenere la lunghezza della password.|
|[CUrl::NumeroPorta](#getportnumber)|Chiamare questo metodo per ottenere il numero di porta in termini di ATL_URL_PORT.|
|[CUrl::GetScheme](#getscheme)|Chiamare questo metodo per ottenere lo schema URL.|
|[CUrl::GetSchemeName](#getschemename)|Chiamare questo metodo per ottenere il nome dello schema URL.|
|[CUrl::GetSchemeNameLength](#getschemenamelength)|Chiamare questo metodo per ottenere la lunghezza del nome dello schema URL.|
|[CUrl::GetUrlLength](#geturllength)|Chiamare questo metodo per ottenere la lunghezza dell'URL.|
|[CUrl::GetUrlPath](#geturlpath)|Chiamare questo metodo per ottenere il percorso URL.|
|[CUrl::GetUrlPathLength](#geturlpathlength)|Chiamare questo metodo per ottenere la lunghezza del percorso URL.|
|[CUrl::GetUserName](#getusername)|Chiamare questo metodo per ottenere il nome utente dall'URL.|
|[CUrl::GetUserNameLength](#getusernamelength)|Chiamare questo metodo per ottenere la lunghezza del nome utente.|
|[CUrl::SetExtraInfo](#setextrainfo)|Chiamare questo metodo per impostare le informazioni aggiuntive (ad esempio *testo* o *testo*) dell'URL.|
|[CUrl::SetHostName](#sethostname)|Chiamare questo metodo per impostare il nome host.|
|[CUrl::SetPassword](#setpassword)|Chiamare questo metodo per impostare la password.|
|[CUrl::SetPortNumber](#setportnumber)|Chiamare questo metodo per impostare il numero di porta in termini di ATL_URL_PORT.|
|[CUrl::SetScheme](#setscheme)|Chiamare questo metodo per impostare lo schema URL.|
|[CUrl::SetSchemeName](#setschemename)|Chiamare questo metodo per impostare il nome dello schema URL.|
|[CUrl::SetUrlPath](#seturlpath)|Chiamare questo metodo per impostare il percorso URL.|
|[CUrl::SetUserName](#setusername)|Chiamare questo metodo per impostare il nome utente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUrl::operatore](#operator_eq)|Assegna l'oggetto specificato `CUrl` `CUrl` all'oggetto corrente.|

## <a name="remarks"></a>Osservazioni

`CUrl`consente di modificare i campi di un URL, ad esempio il percorso o il numero di porta. `CUrl`comprende gli URL nel seguente formato:

\<Schema\<>:// NomeUtente\<>: Password>\@ \<NomeHost\<>: \<\<Numeroporta>/ UrlPath>ExtraInfo>

(Alcuni campi sono facoltativi.) Ad esempio, si consideri questo URL:For example, consider this URL:

`http://someone:secret@www.microsoft.com:80/visualc/stuff.htm#contents`

[CUrl::CrackUrl](#crackurl) analizza il più grande:

- Schema: "http" o [ATL_URL_SCHEME_HTTP](atl-url-scheme-enum.md)

- Nome Utente: "qualcuno"

- Password: "segreto"

- HostName:`www.microsoft.com`" "

- Numero porta: 80

- UrlPath: "visualc/stuff.htm"

- ExtraInfo: "#contents"

Per modificare il campo UrlPath, ad esempio, è necessario utilizzare [GetUrlPath](#geturlpath), [GetUrlPathLength](#geturlpathlength)e [SetUrlPath](#seturlpath). Utilizzare [CreateUrl](#createurl) per creare la stringa URL completa.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="curlcanonicalize"></a><a name="canonicalize"></a>CUrl::Canonicalize

Chiamare questo metodo per convertire la stringa URL in formato canonico.

```
inline BOOL Canonicalize(DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag che controllano la conversione in formato canonico. Se non viene specificato alcun flag (*dwFlags* - 0), il metodo \\converte tutti i \\caratteri non sicuri e le sequenze meta (ad esempio ., .., e ...) in sequenze di escape. *dwFlags* può essere uno dei seguenti valori:

- ATL_URL_BROWSER_MODE: non codifica o decodifica i caratteri dopo "" o "" e non rimuove gli spazi vuoti finali dopo "". Se questo valore non viene specificato, l'intero URL viene codificato e gli spazi vuoti finali vengono rimossi.

- ATL_URL _DECODE: converte tutte le sequenze %XX in caratteri, incluse le sequenze di escape, prima che l'URL venga analizzato.

- ATL_URL _ENCODE_PERCENT: codifica tutti i segni di percentuale rilevati. Per impostazione predefinita, i segni di percentuale non sono codificati.

- ATL_URL _ENCODE_SPACES_ONLY: codifica solo gli spazi.

- ATL_URL _NO_ENCODE: non converte i caratteri non sicuri in sequenze di escape.

- ATL_URL _NO_META: non rimuove le sequenze meta (ad esempio "." e "..") dall'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

La conversione in formato canonico comporta la conversione di caratteri e spazi non sicuri in sequenze di escape.

## <a name="curlclear"></a><a name="clear"></a>CUrl::Cancella

Chiamare questo metodo per cancellare tutti i campi URL.

```
inline void Clear() throw();
```

## <a name="curlcrackurl"></a><a name="crackurl"></a>Url::CrackUrl

Chiamare questo metodo per decodificare e analizzare l'URL.

```
BOOL CrackUrl(LPCTSTR lpszUrl, DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*lpszUrl (informazioni in chiave)*<br/>
URL.

*dwFlags*<br/>
Specificare ATL_URL_DECODE o ATL_URL_ESCAPE per convertire tutti i caratteri di escape in *lpszUrl* nei valori reali dopo l'analisi. (Prima dell'analisi di Visual Cè 2005, ATL_URL_DECODE tutti i caratteri di escape prima dell'analisi.)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="curlcreateurl"></a><a name="createurl"></a>Url::CreateUrl

Questo metodo costruisce una stringa URL dai campi del componente di un oggetto CUrl.

```
inline BOOL CreateUrl(
    LPTSTR lpszUrl,
    DWORD* pdwMaxLength,
    DWORD dwFlags = 0) const throw();
```

### <a name="parameters"></a>Parametri

*lpszUrl (informazioni in chiave)*<br/>
Un buffer di stringa per contenere la stringa URL completa.

*pdwMaxLength (pdwMaxLength)*<br/>
Lunghezza massima del buffer di stringa *lpszUrl.*

*dwFlags*<br/>
Specificare ATL_URL_ESCAPE per convertire tutti i caratteri di escape in *lpszUrl* nei valori reali.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge i singoli campi per costruire la stringa URL completa utilizzando il seguente formato:

**\<schema\<>://>\<utente: passare \@ \<>> di dominio:\<il percorso del>\<porta>\<>**

Quando si chiama questo metodo, il *pdwMaxLength* parametro deve contenere inizialmente la lunghezza massima del buffer di stringa a cui fa riferimento il *lpszUrl* parametro. Il valore del parametro *pdwMaxLength* verrà aggiornato con la lunghezza effettiva della stringa URL.

### <a name="example"></a>Esempio

In questo esempio viene illustrata la creazione di un oggetto CUrl e il recupero della relativa stringa URL

[!code-cpp[NVC_ATL_Utilities#133](../../atl/codesnippet/cpp/curl-class_1.cpp)]

## <a name="curlcurl"></a><a name="curl"></a>URL::CUrl

Costruttore.

```
CUrl() throw();
CUrl(const CUrl& urlThat) throw();
```

### <a name="parameters"></a>Parametri

*urlChe*<br/>
Oggetto `CUrl` da copiare per creare l'URL.

## <a name="curlcurl"></a><a name="dtor"></a>Url: : : CUrl

Distruttore.

```
~CUrl() throw();
```

## <a name="curlgetextrainfo"></a><a name="getextrainfo"></a>CUrl::GetExtraInfo

Chiamare questo metodo per ottenere informazioni aggiuntive (ad esempio *testo* o *testo*) dall'URL.

```
inline LPCTSTR GetExtraInfo() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa contenente le informazioni aggiuntive.

## <a name="curlgetextrainfolength"></a><a name="getextrainfolength"></a>CUrl::GetExtraInfoLength

Chiamare questo metodo per ottenere la lunghezza delle informazioni aggiuntive (ad esempio *testo* o *testo*) da recuperare dall'URL.

```
inline DWORD GetExtraInfoLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza della stringa contenente le informazioni aggiuntive.

## <a name="curlgethostname"></a><a name="gethostname"></a>CUrl::GetHostName

Chiamare questo metodo per ottenere il nome host dall'URL.

```
inline LPCTSTR GetHostName() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome host.

## <a name="curlgethostnamelength"></a><a name="gethostnamelength"></a>CUrl::GetHostNameLength

Chiamare questo metodo per ottenere la lunghezza del nome host.

```
inline DWORD GetHostNameLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del nome host.

## <a name="curlgetpassword"></a><a name="getpassword"></a>CUrl::GetPassword

Chiamare questo metodo per ottenere la password dall'URL.

```
inline LPCTSTR GetPassword() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la password.

## <a name="curlgetpasswordlength"></a><a name="getpasswordlength"></a>CUrl::GetPasswordLength

Chiamare questo metodo per ottenere la lunghezza della password.

```
inline DWORD GetPasswordLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza della password.

## <a name="curlgetportnumber"></a><a name="getportnumber"></a>CUrl::NumeroPorta

Chiamare questo metodo per ottenere il numero di porta.

```
inline ATL_URL_PORT GetPortNumber() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di porta.

## <a name="curlgetscheme"></a><a name="getscheme"></a>CUrl::GetScheme

Chiamare questo metodo per ottenere lo schema URL.

```
inline ATL_URL_SCHEME GetScheme() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il [valore ATL_URL_SCHEME](atl-url-scheme-enum.md) che descrive lo schema dell'URL.

## <a name="curlgetschemename"></a><a name="getschemename"></a>CUrl::GetSchemeName

Chiamare questo metodo per ottenere il nome dello schema URL.

```
inline LPCTSTR GetSchemeName() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome dello schema URL (ad esempio "http" o "ftp").

## <a name="curlgetschemenamelength"></a><a name="getschemenamelength"></a>CUrl::GetSchemeNameLength

Chiamare questo metodo per ottenere la lunghezza del nome dello schema URL.

```
inline DWORD GetSchemeNameLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del nome dello schema URL.

## <a name="curlgeturllength"></a><a name="geturllength"></a>CUrl::GetUrlLength

Chiamare questo metodo per ottenere la lunghezza dell'URL.

```
inline DWORD GetUrlLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza dell'URL.

## <a name="curlgeturlpath"></a><a name="geturlpath"></a>CUrl::GetUrlPath

Chiamare questo metodo per ottenere il percorso URL.

```
inline LPCTSTR GetUrlPath() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il percorso URL.

## <a name="curlgeturlpathlength"></a><a name="geturlpathlength"></a>CUrl::GetUrlPathLength

Chiamare questo metodo per ottenere la lunghezza del percorso URL.

```
inline DWORD GetUrlPathLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del percorso URL.

## <a name="curlgetusername"></a><a name="getusername"></a>CUrl::GetUserName

Chiamare questo metodo per ottenere il nome utente dall'URL.

```
inline LPCTSTR GetUserName() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome utente.

## <a name="curlgetusernamelength"></a><a name="getusernamelength"></a>CUrl::GetUserNameLength

Chiamare questo metodo per ottenere la lunghezza del nome utente.

```
inline DWORD GetUserNameLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza del nome utente.

## <a name="curloperator-"></a><a name="operator_eq"></a>CUrl::operatore

Assegna l'oggetto specificato `CUrl` `CUrl` all'oggetto corrente.

```
CUrl& operator= (const CUrl& urlThat) throw();
```

### <a name="parameters"></a>Parametri

*urlChe*<br/>
Oggetto `CUrl` da copiare nell'oggetto corrente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto corrente.

## <a name="curlsetextrainfo"></a><a name="setextrainfo"></a>CUrl::SetExtraInfo

Chiamare questo metodo per impostare le informazioni aggiuntive (ad esempio *testo* o *testo*) dell'URL.

```
inline BOOL SetExtraInfo(LPCTSTR lpszInfo) throw();
```

### <a name="parameters"></a>Parametri

*lpszInfo (informazioni in base alle informazioni in stato di in*<br/>
Stringa contenente le informazioni aggiuntive da includere nell'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="curlsethostname"></a><a name="sethostname"></a>CUrl::SetHostName

Chiamare questo metodo per impostare il nome host.

```
inline BOOL SetHostName(LPCTSTR lpszHost) throw();
```

### <a name="parameters"></a>Parametri

*lpszHost (informazioni in due)*<br/>
Nome host.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="curlsetpassword"></a><a name="setpassword"></a>CUrl::SetPassword

Chiamare questo metodo per impostare la password.

```
inline BOOL SetPassword(LPCTSTR lpszPass) throw();
```

### <a name="parameters"></a>Parametri

*lpszPass*<br/>
Password.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="curlsetportnumber"></a><a name="setportnumber"></a>CUrl::SetPortNumber

Chiamare questo metodo per impostare il numero di porta.

```
inline BOOL SetPortNumber(ATL_URL_PORT nPrt) throw();
```

### <a name="parameters"></a>Parametri

*nPrt*<br/>
Il numero della porta.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="curlsetscheme"></a><a name="setscheme"></a>CUrl::SetScheme

Chiamare questo metodo per impostare lo schema URL.

```
inline BOOL SetScheme(ATL_URL_SCHEME nScheme) throw();
```

### <a name="parameters"></a>Parametri

*nSchema*<br/>
Uno dei valori [ATL_URL_SCHEME](atl-url-scheme-enum.md) per lo schema.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

È inoltre possibile impostare lo schema in base al nome (vedere [CUrl::SetSchemeName](#setschemename)).

## <a name="curlsetschemename"></a><a name="setschemename"></a>CUrl::SetSchemeName

Chiamare questo metodo per impostare il nome dello schema URL.

```
inline BOOL SetSchemeName(LPCTSTR lpszSchm) throw();
```

### <a name="parameters"></a>Parametri

*lpszSchm*<br/>
Nome dello schema URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

È inoltre possibile impostare lo schema utilizzando [una](atl-url-scheme-enum.md) ATL_URL_SCHEME costante (vedere [CUrl::SetScheme](#setscheme)).

## <a name="curlseturlpath"></a><a name="seturlpath"></a>CUrl::SetUrlPath

Chiamare questo metodo per impostare il percorso URL.

```
inline BOOL SetUrlPath(LPCTSTR lpszPath) throw();
```

### <a name="parameters"></a>Parametri

*LpszPath (percorso ipinoso)*<br/>
Percorso URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="curlsetusername"></a><a name="setusername"></a>CUrl::SetUserName

Chiamare questo metodo per impostare il nome utente.

```
inline BOOL SetUserName(LPCTSTR lpszUser) throw();
```

### <a name="parameters"></a>Parametri

*lpszUtente*<br/>
Nome utente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)
