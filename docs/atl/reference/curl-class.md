---
title: CUrl classe | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CUrl
- CUrl
- ATL::CUrl
dev_langs:
- C++
helpviewer_keywords:
- CUrl class
ms.assetid: b3894d34-47b9-4961-9719-4197153793da
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: eda63a8dc704dd471d8078b848d95fc9fb44f58f
ms.lasthandoff: 02/24/2017

---
# <a name="curl-class"></a>CUrl (classe)
Questa classe rappresenta un URL. Consente di modificare ogni elemento dell'URL in modo indipendente, se l'analisi di un URL esistente stringa o la creazione di una stringa da zero.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[CUrl::Canonicalize](#canonicalize)|Chiamare questo metodo per convertire la stringa URL in forma canonica.|  
|[CUrl::Clear](#clear)|Chiamare questo metodo per cancellare tutti i campi URL.|  
|[CUrl::CrackUrl](#crackurl)|Chiamare questo metodo per decodificare e analizzare l'URL.|  
|[CUrl::CreateUrl](#createurl)|Chiamare questo metodo per creare l'URL.|  
|[CUrl::GetExtraInfo](#getextrainfo)|Chiamare questo metodo per ottenere informazioni aggiuntive (ad esempio *testo* o # *testo*) dall'URL.|  
|[CUrl::GetExtraInfoLength](#getextrainfolength)|Chiamare questo metodo per ottenere la lunghezza di informazioni aggiuntive (ad esempio *testo* o # *testo*) per recuperare l'URL.|  
|[CUrl::GetHostName](#gethostname)|Chiamare questo metodo per ottenere il nome host dell'URL.|  
|[CUrl::GetHostNameLength](#gethostnamelength)|Chiamare questo metodo per ottenere la lunghezza del nome host.|  
|[CUrl::GetPassword](#getpassword)|Chiamare questo metodo per ottenere la password dall'URL.|  
|[CUrl::GetPasswordLength](#getpasswordlength)|Chiamare questo metodo per ottenere la lunghezza della password.|  
|[CUrl::GetPortNumber](#getportnumber)|Chiamare questo metodo per ottenere il numero di porta in termini di ATL_URL_PORT.|  
|[CUrl::GetScheme](#getscheme)|Chiamare questo metodo per ottenere lo schema dell'URL.|  
|[CUrl::GetSchemeName](#getschemename)|Chiamare questo metodo per ottenere il nome dello schema di URL.|  
|[CUrl::GetSchemeNameLength](#getschemenamelength)|Chiamare questo metodo per ottenere la lunghezza del nome di schema dell'URL.|  
|[CUrl::GetUrlLength](#geturllength)|Chiamare questo metodo per ottenere la lunghezza dell'URL.|  
|[CUrl::GetUrlPath](#geturlpath)|Chiamare questo metodo per ottenere il percorso dell'URL.|  
|[CUrl::GetUrlPathLength](#geturlpathlength)|Chiamare questo metodo per ottenere la lunghezza del percorso URL.|  
|[CUrl::GetUserName](#getusername)|Chiamare questo metodo per ottenere il nome utente dall'URL.|  
|[CUrl::GetUserNameLength](#getusernamelength)|Chiamare questo metodo per ottenere la lunghezza del nome utente.|  
|[CUrl::SetExtraInfo](#setextrainfo)|Chiamare questo metodo per impostare le informazioni aggiuntive (ad esempio *testo* o # *testo*) dell'URL.|  
|[CUrl::SetHostName](#sethostname)|Chiamare questo metodo per impostare il nome host.|  
|[CUrl::SetPassword](#setpassword)|Chiamare questo metodo per impostare la password.|  
|[CUrl::SetPortNumber](#setportnumber)|Chiamare questo metodo per impostare il numero di porta in termini di ATL_URL_PORT.|  
|[CUrl::SetScheme](#setscheme)|Chiamare questo metodo per impostare lo schema dell'URL.|  
|[CUrl::SetSchemeName](#setschemename)|Chiamare questo metodo per impostare il nome dello schema di URL.|  
|[CUrl::SetUrlPath](#seturlpath)|Chiamare questo metodo per impostare il percorso dell'URL.|  
|[CUrl::SetUserName](#setusername)|Chiamare questo metodo per impostare il nome utente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUrl::operator =](#operator_eq)|Assegna l'oggetto specificato `CUrl` oggetto all'oggetto corrente `CUrl` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CUrl`Consente di modificare i campi di un URL, ad esempio il numero di porta o percorso. `CUrl`riconosce gli URL nel formato seguente:  
  
 \<Schema >: / /\<nome utente >:\<Password > @\<HostName >:\<NumeroPorta > /\<UrlPath >\<ExtraInfo >  
  
 (Alcuni campi sono facoltativi). Si consideri ad esempio, questo URL:  
  
 http://someone:secret@www.microsoft.com:80/visualc/stuff.htm#contents  
  
 [CUrl::CrackUrl](#crackurl) analizza come indicato di seguito:  
  
-   Schema: "http" o [ATL_URL_SCHEME_HTTP](atl-url-scheme-enum.md)  
  
-   Nome utente: "utente"  
  
-   Password: "segreto"  
  
-   Nome host: "www.microsoft.com"  
  
-   Numero di porta: 80  
  
-   UrlPath: "visualc/stuff.htm"  
  
-   ExtraInfo: "#contents"  
  
 Per modificare il campo UrlPath (ad esempio), si utilizzerebbe [GetUrlPath](#geturlpath), [GetUrlPathLength](#geturlpathlength), e [SetUrlPath](#seturlpath). Utilizzare [CreateUrl](#createurl) per creare la stringa URL completezza.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="a-namecanonicalizea--curlcanonicalize"></a><a name="canonicalize"></a>CUrl::Canonicalize  
 Chiamare questo metodo per convertire la stringa URL in forma canonica.  
  
```
inline BOOL Canonicalize(DWORD dwFlags = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Flag che controllano la canonizzazione. Se non viene specificato ( `dwFlags` = 0), il metodo converte tutti i caratteri non sicuri e le sequenze di metadati (ad esempio \\., \..., e \\...) sequenze di escape. `dwFlags`può essere uno dei valori seguenti:  
  
-   ATL_URL_BROWSER_MODE: Non codificare o decodificare i caratteri successivi a "#" o "" e non rimuove gli spazi finali dopo "". Se questo valore viene omesso, viene codificato l'intero URL e lo spazio vuoto finale viene rimosso.  
  
-   ATL_URL _DECODE: converte tutte le sequenze XX % in caratteri, incluse le sequenze di escape, prima che l'URL viene analizzato.  
  
-   ATL_URL _ENCODE_PERCENT: codifica di tutti i segni di percentuale rilevati. Per impostazione predefinita, i segni di percentuale non sono codificati.  
  
-   ATL_URL _ENCODE_SPACES_ONLY: codifica solo da spazi.  
  
-   ATL_URL _NO_ENCODE: non converte i caratteri non sicuri in sequenze di escape.  
  
-   ATL_URL _NO_META: non rimuove le sequenze di metadati (ad esempio "."e"...") dall'URL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 La conversione in forma canonica comporta la conversione di caratteri non sicuri e gli spazi per le sequenze di escape.  
  
##  <a name="a-namecleara--curlclear"></a><a name="clear"></a>CUrl::Clear  
 Chiamare questo metodo per cancellare tutti i campi URL.  
  
```
inline void Clear() throw();
```  
  
##  <a name="a-namecrackurla--curlcrackurl"></a><a name="crackurl"></a>CUrl::CrackUrl  
 Chiamare questo metodo per decodificare e analizzare l'URL.  
  
```
BOOL CrackUrl(LPCTSTR lpszUrl, DWORD dwFlags = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszUrl`  
 L'URL.  
  
 `dwFlags`  
 Specificare ATL_URL_DECODE o ATL_URL_ESCAPE per convertire tutti i caratteri di escape in `lpszUrl` in base ai valori reali dopo l'analisi. (Prima di Visual C++ 2005, ATL_URL_DECODE convertito tutti i caratteri di escape prima dell'analisi.)  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
##  <a name="a-namecreateurla--curlcreateurl"></a><a name="createurl"></a>CUrl::CreateUrl  
 Questo metodo costruisce una stringa URL da campi componente dell'oggetto CUrl.  
  
```
inline BOOL CreateUrl(
    LPTSTR lpszUrl,
    DWORD* pdwMaxLength,
    DWORD dwFlags = 0) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *lpszUrl*  
 Un buffer di stringa per memorizzare la stringa URL completezza.  
  
 `pdwMaxLength`  
 La lunghezza massima di *lpszUrl* buffer di stringa.  
  
 `dwFlags`  
 Specificare ATL_URL_ESCAPE per convertire tutti i caratteri di escape in *lpszUrl* in base ai valori reali.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge i singoli campi per costruire la stringa URL completezza nel formato seguente:  
  
 **\<schema >: / /\<utente >:\<passare > @\<dominio >:\<porta >\<percorso >\<aggiuntivi >**  
  
 Quando si chiama questo metodo, il `pdwMaxLength` parametro inizialmente deve contenere la lunghezza massima del buffer di stringa a cui fa riferimento il *lpszUrl* parametro. Il valore di `pdwMaxLength` parametro verrà aggiornato con la lunghezza effettiva della stringa dell'URL.  
  
### <a name="example"></a>Esempio  
 In questo esempio viene illustrata la creazione di un oggetto CUrl e recuperare la stringa URL  
  
 [!code-cpp[&#133; NVC_ATL_Utilities](../../atl/codesnippet/cpp/curl-class_1.cpp)]  
  
##  <a name="a-namecurla--curlcurl"></a><a name="curl"></a>CUrl::CUrl  
 Costruttore.  
  
```
CUrl() throw();
CUrl(const CUrl& urlThat) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `urlThat`  
 Il `CUrl` oggetto da copiare per creare l'URL.  
  
##  <a name="a-namedtora--curlcurl"></a><a name="dtor"></a>CUrl:: ~ CUrl  
 Distruttore.  
  
```
~CUrl() throw();
```  
  
##  <a name="a-namegetextrainfoa--curlgetextrainfo"></a><a name="getextrainfo"></a>CUrl::GetExtraInfo  
 Chiamare questo metodo per ottenere informazioni aggiuntive (ad esempio *testo* o # *testo*) dall'URL.  
  
```
inline LPCTSTR GetExtraInfo() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una stringa contenente le informazioni aggiuntive.  
  
##  <a name="a-namegetextrainfolengtha--curlgetextrainfolength"></a><a name="getextrainfolength"></a>CUrl::GetExtraInfoLength  
 Chiamare questo metodo per ottenere la lunghezza di informazioni aggiuntive (ad esempio *testo* o # *testo*) per recuperare l'URL.  
  
```
inline DWORD GetExtraInfoLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza della stringa che contiene le informazioni aggiuntive.  
  
##  <a name="a-namegethostnamea--curlgethostname"></a><a name="gethostname"></a>CUrl::GetHostName  
 Chiamare questo metodo per ottenere il nome host dell'URL.  
  
```
inline LPCTSTR GetHostName() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il nome host.  
  
##  <a name="a-namegethostnamelengtha--curlgethostnamelength"></a><a name="gethostnamelength"></a>CUrl::GetHostNameLength  
 Chiamare questo metodo per ottenere la lunghezza del nome host.  
  
```
inline DWORD GetHostNameLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'host di lunghezza del nome.  
  
##  <a name="a-namegetpassworda--curlgetpassword"></a><a name="getpassword"></a>CUrl::GetPassword  
 Chiamare questo metodo per ottenere la password dall'URL.  
  
```
inline LPCTSTR GetPassword() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la password.  
  
##  <a name="a-namegetpasswordlengtha--curlgetpasswordlength"></a><a name="getpasswordlength"></a>CUrl::GetPasswordLength  
 Chiamare questo metodo per ottenere la lunghezza della password.  
  
```
inline DWORD GetPasswordLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza della password.  
  
##  <a name="a-namegetportnumbera--curlgetportnumber"></a><a name="getportnumber"></a>CUrl::GetPortNumber  
 Chiamare questo metodo per ottenere il numero di porta.  
  
```
inline ATL_URL_PORT GetPortNumber() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di porta.  
  
##  <a name="a-namegetschemea--curlgetscheme"></a><a name="getscheme"></a>CUrl::GetScheme  
 Chiamare questo metodo per ottenere lo schema dell'URL.  
  
```
inline ATL_URL_SCHEME GetScheme() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il [ATL_URL_SCHEME](atl-url-scheme-enum.md) che descrive lo schema dell'URL.  
  
##  <a name="a-namegetschemenamea--curlgetschemename"></a><a name="getschemename"></a>CUrl::GetSchemeName  
 Chiamare questo metodo per ottenere il nome dello schema di URL.  
  
```
inline LPCTSTR GetSchemeName() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il nome dello schema URL (ad esempio "http" o "ftp").  
  
##  <a name="a-namegetschemenamelengtha--curlgetschemenamelength"></a><a name="getschemenamelength"></a>CUrl::GetSchemeNameLength  
 Chiamare questo metodo per ottenere la lunghezza del nome di schema dell'URL.  
  
```
inline DWORD GetSchemeNameLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza del nome schema URL.  
  
##  <a name="a-namegeturllengtha--curlgeturllength"></a><a name="geturllength"></a>CUrl::GetUrlLength  
 Chiamare questo metodo per ottenere la lunghezza dell'URL.  
  
```
inline DWORD GetUrlLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza dell'URL.  
  
##  <a name="a-namegeturlpatha--curlgeturlpath"></a><a name="geturlpath"></a>CUrl::GetUrlPath  
 Chiamare questo metodo per ottenere il percorso dell'URL.  
  
```
inline LPCTSTR GetUrlPath() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il percorso URL.  
  
##  <a name="a-namegeturlpathlengtha--curlgeturlpathlength"></a><a name="geturlpathlength"></a>CUrl::GetUrlPathLength  
 Chiamare questo metodo per ottenere la lunghezza del percorso URL.  
  
```
inline DWORD GetUrlPathLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza del percorso URL.  
  
##  <a name="a-namegetusernamea--curlgetusername"></a><a name="getusername"></a>CUrl::GetUserName  
 Chiamare questo metodo per ottenere il nome utente dall'URL.  
  
```
inline LPCTSTR GetUserName() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il nome utente.  
  
##  <a name="a-namegetusernamelengtha--curlgetusernamelength"></a><a name="getusernamelength"></a>CUrl::GetUserNameLength  
 Chiamare questo metodo per ottenere la lunghezza del nome utente.  
  
```
inline DWORD GetUserNameLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza del nome utente.  
  
##  <a name="a-nameoperatoreqa--curloperator-"></a><a name="operator_eq"></a>CUrl::operator =  
 Assegna l'oggetto specificato `CUrl` oggetto all'oggetto corrente `CUrl` oggetto.  
  
```
CUrl& operator= (const CUrl& urlThat) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `urlThat`  
 Il `CUrl` oggetto da copiare nell'oggetto corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento all'oggetto corrente.  
  
##  <a name="a-namesetextrainfoa--curlsetextrainfo"></a><a name="setextrainfo"></a>CUrl::SetExtraInfo  
 Chiamare questo metodo per impostare le informazioni aggiuntive (ad esempio *testo* o # *testo*) dell'URL.  
  
```
inline BOOL SetExtraInfo(LPCTSTR lpszInfo) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *lpszInfo*  
 Stringa contenente le informazioni aggiuntive da includere nell'URL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
##  <a name="a-namesethostnamea--curlsethostname"></a><a name="sethostname"></a>CUrl::SetHostName  
 Chiamare questo metodo per impostare il nome host.  
  
```
inline BOOL SetHostName(LPCTSTR lpszHost) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszHost`  
 Il nome host.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
##  <a name="a-namesetpassworda--curlsetpassword"></a><a name="setpassword"></a>CUrl::SetPassword  
 Chiamare questo metodo per impostare la password.  
  
```
inline BOOL SetPassword(LPCTSTR lpszPass) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *lpszPass*  
 Password.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
##  <a name="a-namesetportnumbera--curlsetportnumber"></a><a name="setportnumber"></a>CUrl::SetPortNumber  
 Chiamare questo metodo per impostare il numero di porta.  
  
```
inline BOOL SetPortNumber(ATL_URL_PORT nPrt) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nPrt*  
 Il numero di porta.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
##  <a name="a-namesetschemea--curlsetscheme"></a><a name="setscheme"></a>CUrl::SetScheme  
 Chiamare questo metodo per impostare lo schema dell'URL.  
  
```
inline BOOL SetScheme(ATL_URL_SCHEME nScheme) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nScheme`  
 Uno del [ATL_URL_SCHEME](atl-url-scheme-enum.md) i valori per lo schema.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 È inoltre possibile impostare lo schema in base al nome (vedere [CUrl::SetSchemeName](#setschemename)).  
  
##  <a name="a-namesetschemenamea--curlsetschemename"></a><a name="setschemename"></a>CUrl::SetSchemeName  
 Chiamare questo metodo per impostare il nome dello schema di URL.  
  
```
inline BOOL SetSchemeName(LPCTSTR lpszSchm) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *lpszSchm*  
 Il nome dello schema di URL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 È inoltre possibile impostare lo schema utilizzando un [ATL_URL_SCHEME](atl-url-scheme-enum.md) costante (vedere [CUrl::SetScheme](#setscheme)).  
  
##  <a name="a-nameseturlpatha--curlseturlpath"></a><a name="seturlpath"></a>CUrl::SetUrlPath  
 Chiamare questo metodo per impostare il percorso dell'URL.  
  
```
inline BOOL SetUrlPath(LPCTSTR lpszPath) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPath`  
 Percorso URL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
##  <a name="a-namesetusernamea--curlsetusername"></a><a name="setusername"></a>CUrl::SetUserName  
 Chiamare questo metodo per impostare il nome utente.  
  
```
inline BOOL SetUserName(LPCTSTR lpszUser) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *lpszUser*  
 Nome utente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)

