---
description: 'Altre informazioni su: classe CSid'
title: Classe CSid
ms.date: 03/27/2019
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
ms.openlocfilehash: b0f5553f14d31a43c0cc581ef43b518fa612616d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140803"
---
# <a name="csid-class"></a>Classe CSid

Questa classe è un wrapper per una `SID` struttura (ID di sicurezza).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSid
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CSid:: CSidArray](#csidarray)|Matrice di oggetti `CSid`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSid:: CSid](#csid)|Costruttore.|
|[CSid:: ~ CSid](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSid:: AccountName](#accountname)|Restituisce il nome dell'account associato all' `CSid` oggetto.|
|[CSid::D ominio](#domain)|Restituisce il nome del dominio associato all' `CSid` oggetto.|
|[CSid:: EqualPrefix](#equalprefix)|Test `SID` (ID di sicurezza) prefissi per verificarne l'uguaglianza.|
|[CSid:: GetLength](#getlength)|Restituisce la lunghezza dell' `CSid` oggetto.|
|[CSid:: GetPSID](#getpsid)|Restituisce un puntatore a una `SID` struttura.|
|[CSid:: GetPSID_IDENTIFIER_AUTHORITY](#getpsid_identifier_authority)|Restituisce un puntatore alla `SID_IDENTIFIER_AUTHORITY` struttura.|
|[CSid:: GetSubAuthority](#getsubauthority)|Restituisce una sottoautorizzazione specificata in una `SID` struttura.|
|[CSid:: GetSubAuthorityCount](#getsubauthoritycount)|Restituisce il numero di sottoscrittori.|
|[CSid:: IsValid](#isvalid)|Verifica la `CSid` validità dell'oggetto.|
|[CSid:: LoadAccount](#loadaccount)|Aggiorna l' `CSid` oggetto in base al nome e al dominio dell'account o a una `SID` struttura esistente.|
|[CSid:: SID](#sid)|Restituisce la stringa dell'ID.|
|[CSid:: SidNameUse](#sidnameuse)|Restituisce una descrizione dello stato dell' `CSid` oggetto.|

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore =](#operator_eq)|Operatore di assegnazione.|
|[operatore const SID *](#operator_const_sid__star)|Esegue il cast di un `CSid` oggetto a un puntatore a una `SID` struttura.|

### <a name="global-operators"></a>Operatori globali

|Nome|Description|
|-|-|
|[operatore = =](#operator_eq_eq)|Verifica l'uguaglianza di due oggetti descrittori di sicurezza|
|[operatore! =](#operator_neq)|Verifica la disuguaglianza di due oggetti descrittori di sicurezza|
|[operatore \<](#operator_lt)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[operatore >](#operator_gt)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[operatore \<=](#operator_lt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[operatore >=](#operator_gt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|

## <a name="remarks"></a>Commenti

La `SID` struttura è una struttura a lunghezza variabile utilizzata per identificare in modo univoco gli utenti o i gruppi.

Le applicazioni non devono modificare `SID` direttamente la struttura, ma usano invece i metodi forniti in questa classe wrapper. Vedere anche [AtlGetOwnerSid](security-global-functions.md#atlgetownersid), [AtlSetGroupSid](security-global-functions.md#atlsetgroupsid), [AtlGetGroupSid](security-global-functions.md#atlgetgroupsid)e [AtlSetOwnerSid](security-global-functions.md#atlsetownersid).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="csidaccountname"></a><a name="accountname"></a> CSid:: AccountName

Restituisce il nome dell'account associato all' `CSid` oggetto.

```
LPCTSTR AccountName() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce il LPCTSTR che punta al nome dell'account.

### <a name="remarks"></a>Commenti

Questo metodo tenta di trovare un nome per l' `SID` identificatore di sicurezza specificato. Per informazioni dettagliate, vedere [LookupAccountSid](/windows/win32/api/winbase/nf-winbase-lookupaccountsidw).

Se non è possibile trovare il nome di account per l'oggetto `SID` , `AccountName` restituisce una stringa vuota. Questo problema può verificarsi se un timeout di rete impedisce a questo metodo di trovare il nome. Si verifica anche per gli identificatori di sicurezza senza nome account corrispondente, ad esempio un `SID` che identifica una sessione di accesso.

## <a name="csidcsid"></a><a name="csid"></a> CSid:: CSid

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
Struttura esistente `CSid` o `SID` (ID di sicurezza).

*IdentifierAuthority*<br/>
Autorità.

*nSubAuthorityCount*<br/>
Il numero di sottoscrittori.

*pszAccountName*<br/>
Nome dell'account.

*pszSystem*<br/>
Nome di sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.

*pSid*<br/>
Puntatore a una `SID` struttura.

### <a name="remarks"></a>Commenti

Il costruttore inizializza l' `CSid` oggetto, impostando un membro dati interno su *SidTypeInvalid* o copiando le impostazioni da un `CSid` account esistente, `SID` o esistente.

Se l'inizializzazione ha esito negativo, il costruttore genererà una [classe CAtlException](../../atl/reference/catlexception-class.md).

## <a name="csidcsid"></a><a name="dtor"></a> CSid:: ~ CSid

Distruttore.

```
virtual ~CSid() throw();
```

### <a name="remarks"></a>Commenti

Il distruttore libera tutte le risorse acquisite dall'oggetto.

## <a name="csidcsidarray"></a><a name="csidarray"></a> CSid:: CSidArray

Matrice di oggetti [CSid](../../atl/reference/csid-class.md) .

```
typedef CAtlArray<CSid> CSidArray;
```

### <a name="remarks"></a>Commenti

Questo typedef specifica il tipo di matrice che può essere usato per recuperare gli identificatori di sicurezza da un ACL (elenco di controllo di accesso). Vedere [CAcl:: GetAclEntries](../../atl/reference/cacl-class.md#getaclentries).

## <a name="csiddomain"></a><a name="domain"></a> CSid::D ominio

Restituisce il nome del dominio associato all' `CSid` oggetto.

```
LPCTSTR Domain() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `LPCTSTR` che punta al dominio.

### <a name="remarks"></a>Commenti

Questo metodo tenta di trovare un nome per l' `SID` identificatore di sicurezza specificato. Per informazioni dettagliate, vedere [LookupAccountSid](/windows/win32/api/winbase/nf-winbase-lookupaccountsidw).

Se non è possibile trovare il nome di account per l'oggetto `SID` , `Domain` restituisce il dominio come una stringa vuota. Questo problema può verificarsi se un timeout di rete impedisce a questo metodo di trovare il nome. Si verifica anche per gli identificatori di sicurezza senza nome account corrispondente, ad esempio un `SID` che identifica una sessione di accesso.

## <a name="csidequalprefix"></a><a name="equalprefix"></a> CSid:: EqualPrefix

Test `SID` (ID di sicurezza) prefissi per verificarne l'uguaglianza.

```
bool EqualPrefix(const SID& rhs) const throw();
bool EqualPrefix(const CSid& rhs) const throw();
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`SID`Struttura o oggetto dell'identificatore di sicurezza `CSid` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [EqualPrefixSid](/windows/win32/api/securitybaseapi/nf-securitybaseapi-equalprefixsid) nel Windows SDK.

## <a name="csidgetlength"></a><a name="getlength"></a> CSid:: GetLength

Restituisce la lunghezza dell' `CSid` oggetto.

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza in byte dell' `CSid` oggetto.

### <a name="remarks"></a>Commenti

Se la `CSid` struttura non è valida, il valore restituito non è definito. Prima `GetLength` di chiamare, usare la funzione membro [CSid:: IsValid](#isvalid) per verificare che `CSid` sia valido.

> [!NOTE]
> In build di debug la funzione provocherà un'ASSERZIONe se l' `CSid` oggetto non è valido.

## <a name="csidgetpsid"></a><a name="getpsid"></a> CSid:: GetPSID

Restituisce un puntatore a una `SID` struttura (ID di sicurezza).

```
const SID* GetPSID() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo della `CSid` struttura sottostante dell'oggetto `SID` .

## <a name="csidgetpsid_identifier_authority"></a><a name="getpsid_identifier_authority"></a> CSid:: GetPSID_IDENTIFIER_AUTHORITY

Restituisce un puntatore alla `SID_IDENTIFIER_AUTHORITY` struttura.

```
const SID_IDENTIFIER_AUTHORITY* GetPSID_IDENTIFIER_AUTHORITY() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce l'indirizzo della `SID_IDENTIFIER_AUTHORITY` struttura. Se ha esito negativo, il valore restituito non è definito. È possibile che si verifichi un errore se l' `CSid` oggetto non è valido, nel qual caso il metodo [CSid:: ISVALID](#isvalid) restituisce false. La funzione `GetLastError` può essere chiamata per ottenere informazioni estese sull'errore.

> [!NOTE]
> In build di debug la funzione provocherà un'ASSERZIONe se l' `CSid` oggetto non è valido.

## <a name="csidgetsubauthority"></a><a name="getsubauthority"></a> CSid:: GetSubAuthority

Restituisce una sottoautorizzazione specificata in una `SID` struttura (ID di sicurezza).

```
DWORD GetSubAuthority(DWORD nSubAuthority) const throw();
```

### <a name="parameters"></a>Parametri

*nSubAuthority*<br/>
Sottoautorizzazione.

### <a name="return-value"></a>Valore restituito

Restituisce la sottoautorizzazione a cui fa riferimento *nSubAuthority.* Il valore di subauthority è un identificatore relativo (RID).

### <a name="remarks"></a>Commenti

Il parametro *nSubAuthority* specifica un valore di indice che identifica l'elemento della matrice di sottocreazione che il metodo restituirà. Il metodo non esegue alcun test di convalida su questo valore. Un'applicazione può chiamare [CSid:: GetSubAuthorityCount](#getsubauthoritycount) per individuare l'intervallo di valori accettabili.

> [!NOTE]
> In build di debug la funzione provocherà un'ASSERZIONe se l' `CSid` oggetto non è valido.

## <a name="csidgetsubauthoritycount"></a><a name="getsubauthoritycount"></a> CSid:: GetSubAuthorityCount

Restituisce il numero di sottoscrittori.

```
UCHAR GetSubAuthorityCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è il numero di sottoscrittori.

Se il metodo ha esito negativo, il valore restituito non è definito. Il metodo ha esito negativo se l' `CSid` oggetto non è valido. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

> [!NOTE]
> In build di debug la funzione provocherà un'ASSERZIONe se l' `CSid` oggetto non è valido.

## <a name="csidisvalid"></a><a name="isvalid"></a> CSid:: IsValid

Verifica la `CSid` validità dell'oggetto.

```
bool IsValid() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l' `CSid` oggetto è valido; in caso contrario, false. Non sono disponibili informazioni estese sull'errore per questo metodo. non chiamare `GetLastError` .

### <a name="remarks"></a>Commenti

Il `IsValid` metodo convalida l' `CSid` oggetto verificando che il numero di revisione si trovi all'interno di un intervallo noto e che il numero di sottoautori è inferiore al valore massimo.

## <a name="csidloadaccount"></a><a name="loadaccount"></a> CSid:: LoadAccount

Aggiorna l' `CSid` oggetto in base al nome e al dominio dell'account o a una struttura di SID (ID di sicurezza) esistente.

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
Nome dell'account.

*pszSystem*<br/>
Nome di sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.

*pSid*<br/>
Puntatore a una struttura [SID](/windows/win32/api/winnt/ns-winnt-sid) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Commenti

`LoadAccount` tenta di trovare un ID di sicurezza per il nome specificato. Per ulteriori informazioni, vedere [LookupAccountSid](/windows/win32/api/winbase/nf-winbase-lookupaccountsidw) .

## <a name="csidoperator-"></a><a name="operator_eq"></a> CSid:: operator =

Operatore di assegnazione.

```
CSid& operator= (const CSid& rhs) throw(...);
CSid& operator= (const SID& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`SID`Identificatore di sicurezza o `CSid` da assegnare all' `CSid` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto aggiornato `CSid` .

## <a name="csidoperator-"></a><a name="operator_eq_eq"></a> CSid:: operator = =

Verifica l'uguaglianza di due oggetti descrittori di sicurezza.

```
bool operator==(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato sinistro dell'operatore = =.

*rhs*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato destro dell'operatore = =.

### <a name="return-value"></a>Valore restituito

TRUE se i descrittori di sicurezza sono uguali; in caso contrario, FALSE.

## <a name="csidoperator-"></a><a name="operator_neq"></a> CSid:: operator! =

Verifica la disuguaglianza di due oggetti descrittori di sicurezza.

```
bool operator!=(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato sinistro dell'operatore! =.

*rhs*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato destro dell'operatore! =.

### <a name="return-value"></a>Valore restituito

TRUE se i descrittori di sicurezza non sono uguali; in caso contrario, FALSE.

## <a name="csidoperator-lt"></a><a name="operator_lt"></a> Operatore CSid:: &lt;

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato sinistro dell'operatore! =.

*rhs*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato destro dell'operatore! =.

### <a name="return-value"></a>Valore restituito

TRUE se *LHS* è minore di *RHS*, in caso contrario false.

## <a name="csidoperator-lt"></a><a name="operator_lt__eq"></a> Operatore CSid:: &lt;=

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator<=(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato sinistro dell'operatore! =.

*rhs*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato destro dell'operatore! =.

### <a name="return-value"></a>Valore restituito

TRUE se *LHS* è minore o uguale a *RHS*, in caso contrario false.

## <a name="csidoperator-gt"></a><a name="operator_gt"></a> Operatore CSid:: &gt;

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator>(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato sinistro dell'operatore! =.

*rhs*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato destro dell'operatore! =.

### <a name="return-value"></a>Valore restituito

TRUE se *LHS* è maggiore di *RHS*, in caso contrario false.

## <a name="csidoperator-gt"></a><a name="operator_gt__eq"></a> Operatore CSid:: &gt;=

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator>=(
    const CSid& lhs,
    const CSid& rhs) throw());
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato sinistro dell'operatore! =.

*rhs*<br/>
`SID`(ID di sicurezza) o `CSid` visualizzato sul lato destro dell'operatore! =.

### <a name="return-value"></a>Valore restituito

TRUE se *LHS* è maggiore o uguale a *RHS*, in caso contrario false.

## <a name="csidoperator-const-sid-"></a><a name="operator_const_sid__star"></a> CSid:: operator const (SID) \*

Esegue il cast di un `CSid` oggetto a un puntatore a una `SID` struttura (ID di sicurezza).

```
operator const SID *() const throw(...);
```

### <a name="remarks"></a>Commenti

Restituisce l'indirizzo della `SID` struttura.

## <a name="csidsid"></a><a name="sid"></a> CSid:: SID

Restituisce la `SID` struttura (ID di sicurezza) sotto forma di stringa.

```
LPCTSTR Sid() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce la `SID` struttura come stringa in un formato appropriato per la visualizzazione, l'archiviazione o la trasmissione. Equivalente a [ConvertSidToStringSid](/windows/win32/api/sddl/nf-sddl-convertsidtostringsidw).

## <a name="csidsidnameuse"></a><a name="sidnameuse"></a> CSid:: SidNameUse

Restituisce una descrizione dello stato dell' `CSid` oggetto.

```
SID_NAME_USE SidNameUse() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore del membro dati che archivia un valore che descrive lo stato dell' `CSid` oggetto.

|Valore|Description|
|-----------|-----------------|
|SidTypeUser|Indica un utente `SID` (ID di sicurezza).|
|SidTypeGroup|Indica un gruppo `SID` .|
|SidTypeDomain|Indica un dominio `SID` .|
|SidTypeAlias|Indica un alias `SID` .|
|SidTypeWellKnownGroup|Indica un oggetto `SID` per un gruppo noto.|
|SidTypeDeletedAccount|Indica un oggetto `SID` per un account eliminato.|
|SidTypeInvalid|Indica un oggetto non valido `SID` .|
|SidTypeUnknown|Indica un `SID` tipo sconosciuto.|
|SidTypeComputer|Indica un oggetto `SID` per un computer.|

### <a name="remarks"></a>Commenti

Chiamare [CSid:: LoadAccount](#loadaccount) per aggiornare l' `CSid` oggetto prima `SidNameUse` di chiamare per restituirne lo stato. `SidNameUse` non modifica lo stato dell'oggetto (chiamando `LookupAccountName` o `LookupAccountSid` ), ma restituisce solo lo stato corrente.

## <a name="see-also"></a>Vedi anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)<br/>
[Operatori](../../atl/reference/atl-operators.md)
