---
title: Classe CSid
ms.date: 11/04/2016
f1_keywords:
- CSid
- ATLSECURITY/ATL::CSid
- ATLSECURITY/ATL::CSid::CSidArray
- ATLSECURITY/ATL::CSid::CSid
- ATLSECURITY/ATL::CSid::AccountName
- ATLSECURITY/ATL::CSid::Domain
- ATLSECURITY/ATL::CSid::EqualPrefix
- ATLSECURITY/ATL::CSid::GetLength
- ATLSECURITY/ATL::CSid::GetPSID
- ATLSECURITY/ATL::CSid::GetPSID_IDENTIFIER_AUTHORITY
- ATLSECURITY/ATL::CSid::GetSubAuthority
- ATLSECURITY/ATL::CSid::GetSubAuthorityCount
- ATLSECURITY/ATL::CSid::IsValid
- ATLSECURITY/ATL::CSid::LoadAccount
- ATLSECURITY/ATL::CSid::Sid
- ATLSECURITY/ATL::CSid::SidNameUse
helpviewer_keywords:
- CSid class
ms.assetid: be58b7ca-5958-49c3-a833-ca341aaaf753
ms.openlocfilehash: 02b7cbb9e66e1e8297699503fc510247efed1629
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57301896"
---
# <a name="csid-class"></a>Classe CSid

Questa classe è un wrapper per un `SID` struttura (ID di sicurezza).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CSid
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSid::CSidArray](#csidarray)|Matrice di oggetti `CSid`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSid::CSid](#csid)|Costruttore.|
|[CSid::~CSid](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSid::AccountName](#accountname)|Restituisce il nome dell'account associato il `CSid` oggetto.|
|[CSid::Domain](#domain)|Restituisce il nome di dominio associato con il `CSid` oggetto.|
|[CSid::EqualPrefix](#equalprefix)|Test `SID` prefissi (SID) per verificare l'uguaglianza.|
|[CSid::GetLength](#getlength)|Restituisce la lunghezza del `CSid` oggetto.|
|[CSid::GetPSID](#getpsid)|Restituisce un puntatore a un `SID` struttura.|
|[CSid::GetPSID_IDENTIFIER_AUTHORITY](#getpsid_identifier_authority)|Restituisce un puntatore al `SID_IDENTIFIER_AUTHORITY` struttura.|
|[CSid::GetSubAuthority](#getsubauthority)|Restituisce un sottoautorità specificato in un `SID` struttura.|
|[CSid::GetSubAuthorityCount](#getsubauthoritycount)|Restituisce il conteggio sottoautorità.|
|[CSid::IsValid](#isvalid)|Test di `CSid` oggetto per la validità.|
|[CSid::LoadAccount](#loadaccount)|Gli aggiornamenti di `CSid` oggetto dato il nome dell'account e al dominio o un oggetto esistente `SID` struttura.|
|[CSid::Sid](#sid)|Restituisce la stringa di ID.|
|[CSid::SidNameUse](#sidnameuse)|Restituisce una descrizione dello stato del `CSid` oggetto.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator =](#operator_eq)|Operatore di assegnazione.|
|[operatore SID const *](#operator_const_sid__star)|Cast di un `CSid` oggetti in un puntatore a un `SID` struttura.|

### <a name="global-operators"></a>Operatori globali

|||
|-|-|
|[operatore = =](#operator_eq_eq)|Verifica due oggetti descrittore di sicurezza per verificarne l'uguaglianza|
|[operatore! =](#operator_neq)|Verifica due oggetti descrittore di sicurezza per verificarne la disuguaglianza|
|[operator \<](#operator_lt_)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[operator >](#operator_gt_)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[operator \<=](#operator_lt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[operator >=](#operator_gt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|

## <a name="remarks"></a>Note

Il `SID` struttura è una struttura a lunghezza variabile utilizzata per identificare in modo univoco gli utenti o gruppi.

Le applicazioni non deve essere modificato il `SID` struttura direttamente, ma si utilizzano i metodi forniti in questa classe wrapper. Vedere anche [AtlGetOwnerSid](security-global-functions.md#atlgetownersid), [AtlSetGroupSid](security-global-functions.md#atlsetgroupsid), [AtlGetGroupSid](security-global-functions.md#atlgetgroupsid), e [AtlSetOwnerSid](security-global-functions.md#atlsetownersid).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="accountname"></a>  CSid::AccountName

Restituisce il nome dell'account associato il `CSid` oggetto.

```
LPCTSTR AccountName() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce il LPCTSTR che punta al nome dell'account.

### <a name="remarks"></a>Note

Questo metodo prova a trovare un nome per l'oggetto specificato `SID` (ID di sicurezza). Per informazioni dettagliate, vedere [LookupAccountSid](/windows/desktop/api/winbase/nf-winbase-lookupaccountsida).

Se nessun nome di account per il `SID` reperibili, `AccountName` restituisce una stringa vuota. Ciò può verificarsi se un timeout di rete impedisce l'individuazione del nome di questo metodo. Si verifica anche per gli identificatori di sicurezza con alcun nome di account corrispondente, ad esempio un account di accesso `SID` che identifica una sessione di accesso.

##  <a name="csid"></a>  CSid::CSid

Costruttore.

```
CSid() throw();
CSid(const SID& rhs) throw(...);
CSid(const CSid& rhs) throw(...);

CSid(
    const SID_IDENTIFIER_AUTHORITY& IdentifierAuthority,
    BYTE nSubAuthorityCount,
    ...) throw(...);

explicit CSid(
    LPCTSTR pszAccountName,
    LPCTSTR pszSystem = NULL) throw(...);

explicit CSid(
    const SID* pSid,
    LPCTSTR pszSystem = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Un oggetto esistente `CSid` oggetto o `SID` struttura (ID di sicurezza).

*IdentifierAuthority*<br/>
L'autorità.

*nSubAuthorityCount*<br/>
Il conteggio sottoautorità.

*pszAccountName*<br/>
Il nome dell'account.

*pszSystem*<br/>
Il nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.

*pSid*<br/>
Un puntatore a un `SID` struttura.

### <a name="remarks"></a>Note

Il costruttore inizializza la `CSid` oggetto, l'impostazione di un membro dati interni *SidTypeInvalid*, oppure copiando le impostazioni da un oggetto esistente `CSid`, `SID`, o account esistente.

Se l'inizializzazione non riesce, il costruttore genera un [classe CAtlException](../../atl/reference/catlexception-class.md).

##  <a name="dtor"></a>  CSid::~CSid

Distruttore.

```
virtual ~CSid() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera eventuali risorse ottenute dall'oggetto.

##  <a name="csidarray"></a>  CSid::CSidArray

Matrice di [IDSR](../../atl/reference/csid-class.md) oggetti.

```
typedef CAtlArray<CSid> CSidArray;
```

### <a name="remarks"></a>Note

Questo typedef specifica il tipo di matrice che può essere utilizzato per recuperare gli identificatori di sicurezza da un ACL (elenco di controllo di accesso). Visualizzare [CAcl::GetAclEntries](../../atl/reference/cacl-class.md#getaclentries).

##  <a name="domain"></a>  CSid::Domain

Restituisce il nome di dominio associato con il `CSid` oggetto.

```
LPCTSTR Domain() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce il `LPCTSTR` che puntano al dominio.

### <a name="remarks"></a>Note

Questo metodo prova a trovare un nome per l'oggetto specificato `SID` (ID di sicurezza). Per informazioni dettagliate, vedere [LookupAccountSid](/windows/desktop/api/winbase/nf-winbase-lookupaccountsida).

Se nessun nome di account per il `SID` reperibili, `Domain` restituisce il dominio come una stringa vuota. Ciò può verificarsi se un timeout di rete impedisce l'individuazione del nome di questo metodo. Si verifica anche per gli identificatori di sicurezza con alcun nome di account corrispondente, ad esempio un account di accesso `SID` che identifica una sessione di accesso.

##  <a name="equalprefix"></a>  CSid::EqualPrefix

Test `SID` prefissi (SID) per verificare l'uguaglianza.

```
bool EqualPrefix(const SID& rhs) const throw();
bool EqualPrefix(const CSid& rhs) const throw();
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `SID` struttura (ID di sicurezza) o `CSid` oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Visualizzare [EqualPrefixSid](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-equalprefixsid) nel SDK di Windows per altri dettagli.

##  <a name="getlength"></a>  CSid::GetLength

Restituisce la lunghezza del `CSid` oggetto.

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza in byte del `CSid` oggetto.

### <a name="remarks"></a>Note

Se il `CSid` struttura non è valida, il valore restituito è indefinito. Prima di chiamare `GetLength`, usare il [CSid::IsValid](#isvalid) funzione membro per verificare che `CSid` è valido.

> [!NOTE]
>  Nella build di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.

##  <a name="getpsid"></a>  CSid::GetPSID

Restituisce un puntatore a un `SID` struttura (ID di sicurezza).

```
const SID* GetPSID() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo del `CSid` sottostante del `SID` struttura.

##  <a name="getpsid_identifier_authority"></a>  CSid::GetPSID_IDENTIFIER_AUTHORITY

Restituisce un puntatore al `SID_IDENTIFIER_AUTHORITY` struttura.

```
const SID_IDENTIFIER_AUTHORITY* GetPSID_IDENTIFIER_AUTHORITY() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce l'indirizzo del `SID_IDENTIFIER_AUTHORITY` struttura. In caso contrario, il valore restituito è indefinito. Potrebbe verificarsi un errore se il `CSid` oggetto non valido, nel qual caso il [CSid::IsValid](#isvalid) metodo restituisce FALSE. La funzione `GetLastError` possono essere chiamati per informazioni dettagliate sull'errore.

> [!NOTE]
>  Nella build di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.

##  <a name="getsubauthority"></a>  CSid::GetSubAuthority

Restituisce un sottoautorità specificato in un `SID` struttura (ID di sicurezza).

```
DWORD GetSubAuthority(DWORD nSubAuthority) const throw();
```

### <a name="parameters"></a>Parametri

*nSubAuthority*<br/>
Le sottoautorità.

### <a name="return-value"></a>Valore restituito

Restituisce le sottoautorità fa *nSubAuthority.* Il valore sottoautorità è un identificatore relativo (RID).

### <a name="remarks"></a>Note

Il *nSubAuthority* parametro specifica un valore di indice che identifica il metodo restituisce l'elemento della matrice sottoautorità. Il metodo non esegue alcun test di convalida su questo valore. Un'applicazione può chiamare [CSid::GetSubAuthorityCount](#getsubauthoritycount) per individuare l'intervallo di valori accettabili.

> [!NOTE]
>  Nella build di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.

##  <a name="getsubauthoritycount"></a>  CSid::GetSubAuthorityCount

Restituisce il conteggio sottoautorità.

```
UCHAR GetSubAuthorityCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è il conteggio sottoautorità.

Se il metodo ha esito negativo, il valore restituito è indefinito. Il metodo ha esito negativo se il `CSid` oggetto non è valido. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

> [!NOTE]
>  Nella build di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.

##  <a name="isvalid"></a>  CSid::IsValid

Test di `CSid` oggetto per la validità.

```
bool IsValid() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il `CSid` oggetto è valido, FALSE in caso contrario. Non sono disponibili informazioni sull'errore per questo metodo. non chiamare `GetLastError`.

### <a name="remarks"></a>Note

Il `IsValid` metodo convalida il `CSid` oggetto verificando che il numero di revisione è all'interno di un intervallo noto e che il numero di sottoautorità è inferiore al massimo.

##  <a name="loadaccount"></a>  CSid::LoadAccount

Gli aggiornamenti di `CSid` oggetto dato il nome dell'account e al dominio o una struttura di sicurezza (SID) esistente.

```
bool LoadAccount(
    LPCTSTR pszAccountName,
    LPCTSTR pszSystem = NULL) throw(...);

bool LoadAccount(
    const SID* pSid,
    LPCTSTR pszSystem = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszAccountName*<br/>
Il nome dell'account.

*pszSystem*<br/>
Il nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.

*pSid*<br/>
Un puntatore a un [SID](/windows/desktop/api/winnt/ns-winnt-_sid) struttura.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Note

`LoadAccount` tenta di trovare un ID di sicurezza per il nome specificato. Visualizzare [LookupAccountSid](/windows/desktop/api/winbase/nf-winbase-lookupaccountsida) per altri dettagli.

##  <a name="operator_eq"></a>  CSid::operator =

Operatore di assegnazione.

```
CSid& operator= (const CSid& rhs) throw(...);
CSid& operator= (const SID& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` per assegnare al `CSid` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento aggiornato `CSid` oggetto.

##  <a name="operator_eq_eq"></a>  CSid::operator ==

Verifica due oggetti descrittore di sicurezza per verificarne l'uguaglianza.

```
bool operator==(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato sinistro dell'operatore = =.

*rhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato destro dell'operatore = =.

### <a name="return-value"></a>Valore restituito

TRUE se i descrittori di sicurezza sono uguali, in caso contrario, FALSE.

##  <a name="operator_neq"></a>  CSid::operator !=

Verifica due oggetti descrittore di sicurezza per verificarne la disuguaglianza.

```
bool operator!=(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato sinistro della! = (operatore).

*rhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato destro di! = (operatore).

### <a name="return-value"></a>Valore restituito

TRUE se i descrittori di sicurezza non sono uguali, in caso contrario, FALSE.

##  <a name="operator_lt"></a>  CSid::operator &lt;

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato sinistro della! = (operatore).

*rhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato destro di! = (operatore).

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è minore di *rhs*, in caso contrario, FALSE.

##  <a name="operator_lt__eq"></a>  CSid::operator &lt;=

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator<=(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato sinistro della! = (operatore).

*rhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato destro di! = (operatore).

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è minore o uguale a *rhs*, in caso contrario, FALSE.

##  <a name="operator_gt"></a>  CSid::operator &gt;

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator>(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato sinistro della! = (operatore).

*rhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato destro di! = (operatore).

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è maggiore di quella *rhs*, in caso contrario, FALSE.

##  <a name="operator_gt__eq"></a>  CSid::operator &gt;=

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator>=(
    const CSid& lhs,
    const CSid& rhs) throw());
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato sinistro della! = (operatore).

*rhs*<br/>
Il `SID` (ID di sicurezza) o `CSid` visualizzato sul lato destro di! = (operatore).

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è maggiore o uguale a *rhs*, in caso contrario, FALSE.

##  <a name="operator_const_sid__star"></a>  SID const CSid::operator \*

Cast di un `CSid` oggetti in un puntatore a un `SID` struttura (ID di sicurezza).

```
operator const SID *() const throw(...);
```

### <a name="remarks"></a>Note

Restituisce l'indirizzo del `SID` struttura.

##  <a name="sid"></a>  CSid::Sid

Restituisce il `SID` struttura (ID di sicurezza) sotto forma di stringa.

```
LPCTSTR Sid() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce il `SID` struttura sotto forma di stringa in un formato appropriato per la visualizzazione, l'archiviazione o la trasmissione. Equivalente a [ConvertSidToStringSid ha](/windows/desktop/api/sddl/nf-sddl-convertsidtostringsida).

##  <a name="sidnameuse"></a>  CSid::SidNameUse

Restituisce una descrizione dello stato del `CSid` oggetto.

```
SID_NAME_USE SidNameUse() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore del membro dati che archivia un valore che indica lo stato del `CSid` oggetto.

|Value|Descrizione|
|-----------|-----------------|
|SidTypeUser|Indica che un utente `SID` (ID di sicurezza).|
|SidTypeGroup|Indica un gruppo `SID`.|
|SidTypeDomain|Indica un dominio `SID`.|
|SidTypeAlias|Indica un alias `SID`.|
|SidTypeWellKnownGroup|Indica un `SID` per un gruppo noto.|
|SidTypeDeletedAccount|Indica un `SID` per un account eliminato.|
|SidTypeInvalid|Indica un valore non valido `SID`.|
|SidTypeUnknown|Indica sconosciuto `SID` tipo.|
|SidTypeComputer|Indica un `SID` per un computer.|

### <a name="remarks"></a>Note

Chiamare [CSid::LoadAccount](#loadaccount) per aggiornare le `CSid` oggetto prima di chiamare `SidNameUse` per restituire il relativo stato. `SidNameUse` non modifica lo stato dell'oggetto (con una chiamata a `LookupAccountName` o `LookupAccountSid`), ma solo restituisce lo stato corrente.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../visual-cpp-samples.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)<br/>
[Operatori](../../atl/reference/atl-operators.md)
