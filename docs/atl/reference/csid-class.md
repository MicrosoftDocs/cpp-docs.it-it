---
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
ms.openlocfilehash: 414cf428cebe8105d90b3add93cc7f1e76927c2a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330918"
---
# <a name="csid-class"></a>Classe CSid

Questa classe è un `SID` wrapper per una struttura (identificatore di sicurezza).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

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
|[CSid::](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSid::NomeAccount](#accountname)|Restituisce il nome dell'account associato all'oggetto. `CSid`|
|[CSid::Domain](#domain)|Restituisce il nome del `CSid` dominio associato all'oggetto.|
|[CSid::EqualPrefix](#equalprefix)|Verifica `SID` l'uguaglianza dei prefissi (identificatore di sicurezza).|
|[CSid::GetLength](#getlength)|Restituisce la `CSid` lunghezza dell'oggetto.|
|[CSid::GetPSID](#getpsid)|Restituisce un `SID` puntatore a una struttura.|
|[CSid::GetPSID_IDENTIFIER_AUTHORITY](#getpsid_identifier_authority)|Restituisce un `SID_IDENTIFIER_AUTHORITY` puntatore alla struttura.|
|[CSid::GetSubAuthority](#getsubauthority)|Restituisce una sottoautorità `SID` specificata in una struttura.|
|[CSid::GetSubAuthorityCount](#getsubauthoritycount)|Restituisce il conteggio delle sottoautorità.|
|[CSid::IsValid](#isvalid)|Verifica `CSid` la validità dell'oggetto.|
|[CSid::LoadAccount](#loadaccount)|Aggiorna `CSid` l'oggetto in base al nome `SID` account e al dominio o a una struttura esistente.|
|[CSid::Sid](#sid)|Restituisce la stringa ID.|
|[CSid::SidNameUso](#sidnameuse)|Restituisce una descrizione dello `CSid` stato dell'oggetto.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore .](#operator_eq)|Operatore di assegnazione.|
|[operatore const SID](#operator_const_sid__star)|Esegue il `CSid` cast di un `SID` oggetto a un puntatore a una struttura.|

### <a name="global-operators"></a>Operatori globali

|||
|-|-|
|[operatore .](#operator_eq_eq)|Verifica l'uguaglianza di due oggetti descrittore di sicurezza|
|[Operatore !](#operator_neq)|Verifica la disuguaglianza di due oggetti descrittore di sicurezza|
|[Operatore\<](#operator_lt)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[>operatore](#operator_gt)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[Operatore\<=](#operator_lt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|
|[operatore >](#operator_gt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|

## <a name="remarks"></a>Osservazioni

La `SID` struttura è una struttura a lunghezza variabile utilizzata per identificare in modo univoco utenti o gruppi.

Le applicazioni non `SID` devono modificare direttamente la struttura, ma utilizzare i metodi forniti in questa classe wrapper. Vedere anche [AtlGetOwnerSid](security-global-functions.md#atlgetownersid), [AtlSetGroupSid](security-global-functions.md#atlsetgroupsid), [AtlGetGroupSid](security-global-functions.md#atlgetgroupsid)e [AtlSetOwnerSid](security-global-functions.md#atlsetownersid).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="csidaccountname"></a><a name="accountname"></a>CSid::NomeAccount

Restituisce il nome dell'account associato all'oggetto. `CSid`

```
LPCTSTR AccountName() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce l'LPCTSTR che punta al nome dell'account.

### <a name="remarks"></a>Osservazioni

Questo metodo tenta di trovare `SID` un nome per l'identificatore di sicurezza specificato. Per i dettagli completi, vedere [LookupAccountSid](/windows/win32/api/winbase/nf-winbase-lookupaccountsidw).

Se non è `SID` possibile trovare `AccountName` alcun nome di account per l'oggetto, restituisce una stringa vuota. Ciò può verificarsi se un timeout di rete impedisce a questo metodo di trovare il nome. Si verifica anche per gli identificatori di sicurezza `SID` senza nome account corrispondente, ad esempio un che identifica una sessione di accesso.

## <a name="csidcsid"></a><a name="csid"></a>CSid::CSid

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
Oggetto `CSid` esistente `SID` o struttura (identificatore di sicurezza).

*IdentifierAuthority (Autorità Identifier)*<br/>
L'autorità.

*nSubAuthorityCount*<br/>
Il conteggio delle sottoautorità.

*pszAccountName (nome account psz)*<br/>
Nome dell'account.

*pszSystem (sistema operativo)*<br/>
Nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.

*Psid*<br/>
Puntatore a `SID` una struttura.

### <a name="remarks"></a>Osservazioni

Il costruttore `CSid` inizializza l'oggetto, impostando un membro dati interno su *SidTypeInvalid*o copiando le impostazioni da un account , `CSid` `SID`, o esistente.

Se l'inizializzazione non riesce, il costruttore genererà una [classe CAtlException](../../atl/reference/catlexception-class.md).

## <a name="csidcsid"></a><a name="dtor"></a>CSid::

Distruttore.

```
virtual ~CSid() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse acquisite dall'oggetto.

## <a name="csidcsidarray"></a><a name="csidarray"></a>CSid::CSidArray

Matrice di [oggetti CSid.](../../atl/reference/csid-class.md)

```
typedef CAtlArray<CSid> CSidArray;
```

### <a name="remarks"></a>Osservazioni

Questo typedef specifica il tipo di matrice che può essere utilizzato per recuperare gli identificatori di sicurezza da un ACL (elenco di controllo di accesso). Vedere [CAcl::GetAclEntries](../../atl/reference/cacl-class.md#getaclentries).

## <a name="csiddomain"></a><a name="domain"></a>CSid::Domain

Restituisce il nome del `CSid` dominio associato all'oggetto.

```
LPCTSTR Domain() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce `LPCTSTR` l'oggetto che punta al dominio.

### <a name="remarks"></a>Osservazioni

Questo metodo tenta di trovare `SID` un nome per l'identificatore di sicurezza specificato. Per i dettagli completi, vedere [LookupAccountSid](/windows/win32/api/winbase/nf-winbase-lookupaccountsidw).

Se non viene `SID` trovato alcun `Domain` nome di account per l'oggetto, restituisce il dominio come stringa vuota. Ciò può verificarsi se un timeout di rete impedisce a questo metodo di trovare il nome. Si verifica anche per gli identificatori di sicurezza `SID` senza nome account corrispondente, ad esempio un che identifica una sessione di accesso.

## <a name="csidequalprefix"></a><a name="equalprefix"></a>CSid::EqualPrefix

Verifica `SID` l'uguaglianza dei prefissi (identificatore di sicurezza).

```
bool EqualPrefix(const SID& rhs) const throw();
bool EqualPrefix(const CSid& rhs) const throw();
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Struttura `SID` (identificatore di `CSid` sicurezza) o oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [EqualPrefixSid](/windows/win32/api/securitybaseapi/nf-securitybaseapi-equalprefixsid) in Windows SDK.

## <a name="csidgetlength"></a><a name="getlength"></a>CSid::GetLength

Restituisce la `CSid` lunghezza dell'oggetto.

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza `CSid` in byte dell'oggetto.

### <a name="remarks"></a>Osservazioni

Se `CSid` la struttura non è valida, il valore restituito non è definito. Prima `GetLength`di chiamare , utilizzare la funzione membro [CSid::IsValid](#isvalid) per verificare che `CSid` sia valida.

> [!NOTE]
> Nelle build di debug la funzione `CSid` causerà un ASSERT se l'oggetto non è valido.

## <a name="csidgetpsid"></a><a name="getpsid"></a>CSid::GetPSID

Restituisce un `SID` puntatore a una struttura (identificatore di sicurezza).

```
const SID* GetPSID() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo della `SID` struttura sottostante dell'oggetto. `CSid`

## <a name="csidgetpsid_identifier_authority"></a><a name="getpsid_identifier_authority"></a>CSid::GetPSID_IDENTIFIER_AUTHORITY

Restituisce un `SID_IDENTIFIER_AUTHORITY` puntatore alla struttura.

```
const SID_IDENTIFIER_AUTHORITY* GetPSID_IDENTIFIER_AUTHORITY() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce l'indirizzo della `SID_IDENTIFIER_AUTHORITY` struttura. Se ha esito negativo, il valore restituito non è definito. L'errore può `CSid` verificarsi se l'oggetto non è valido, nel qual caso il metodo [CSid::IsValid](#isvalid) restituisce FALSE. La `GetLastError` funzione può essere chiamata per informazioni estese sull'errore.

> [!NOTE]
> Nelle build di debug la funzione `CSid` causerà un ASSERT se l'oggetto non è valido.

## <a name="csidgetsubauthority"></a><a name="getsubauthority"></a>CSid::GetSubAuthority

Restituisce un'autorità `SID` secondaria specificata in una struttura (identificatore di sicurezza).

```
DWORD GetSubAuthority(DWORD nSubAuthority) const throw();
```

### <a name="parameters"></a>Parametri

*nSubAuthority (autorità di base)*<br/>
La sottoautorità.

### <a name="return-value"></a>Valore restituito

Restituisce la sottoautorità a cui fa riferimento *nSubAuthority.* Il valore della sottoquotanza è un identificatore relativo (RID).

### <a name="remarks"></a>Osservazioni

Il parametro *nSubAuthority* consente di specificare un valore di indice che identifica l'elemento della matrice subauthority che verrà restituito dal metodo. Il metodo non esegue alcun test di convalida su questo valore. Un'applicazione può chiamare [CSid::GetSubAuthorityCount](#getsubauthoritycount) per individuare l'intervallo di valori accettabili.

> [!NOTE]
> Nelle build di debug la funzione `CSid` causerà un ASSERT se l'oggetto non è valido.

## <a name="csidgetsubauthoritycount"></a><a name="getsubauthoritycount"></a>CSid::GetSubAuthorityCount

Restituisce il conteggio delle sottoautorità.

```
UCHAR GetSubAuthorityCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è il conteggio delle sottoautorità.

Se il metodo ha esito negativo, il valore restituito non è definito. Il metodo ha `CSid` esito negativo se l'oggetto non è valido. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

> [!NOTE]
> Nelle build di debug la funzione `CSid` causerà un ASSERT se l'oggetto non è valido.

## <a name="csidisvalid"></a><a name="isvalid"></a>CSid::IsValid

Verifica `CSid` la validità dell'oggetto.

```
bool IsValid() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE `CSid` se l'oggetto è valido, FALSE in caso contrario. Non sono disponibili informazioni estese sull'errore per questo metodo. non chiamare `GetLastError`.

### <a name="remarks"></a>Osservazioni

Il `IsValid` metodo convalida `CSid` l'oggetto verificando che il numero di revisione rientri in un intervallo noto e che il numero di sottoautorità sia inferiore al massimo.

## <a name="csidloadaccount"></a><a name="loadaccount"></a>CSid::LoadAccount

Aggiorna `CSid` l'oggetto in base al nome account e al dominio o a una struttura SID (identificatore di protezione) esistente.

```
bool LoadAccount(
    LPCTSTR pszAccountName,
    LPCTSTR pszSystem = NULL) throw(...);

bool LoadAccount(
    const SID* pSid,
    LPCTSTR pszSystem = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszAccountName (nome account psz)*<br/>
Nome dell'account.

*pszSystem (sistema operativo)*<br/>
Nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.

*Psid*<br/>
Puntatore a una struttura [SID.](/windows/win32/api/winnt/ns-winnt-sid)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Osservazioni

`LoadAccount`tenta di trovare un identificatore di sicurezza per il nome specificato. Per ulteriori dettagli, vedere [LookupAccountSid.](/windows/win32/api/winbase/nf-winbase-lookupaccountsidw)

## <a name="csidoperator-"></a><a name="operator_eq"></a>CSid::operatore

Operatore di assegnazione.

```
CSid& operator= (const CSid& rhs) throw(...);
CSid& operator= (const SID& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o `CSid` da assegnare all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento `CSid` all'oggetto aggiornato.

## <a name="csidoperator-"></a><a name="operator_eq_eq"></a>CSid::operatore

Verifica l'uguaglianza di due oggetti descrittore di sicurezza.

```
bool operator==(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato sinistro dell'operatore .

*rhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato destro dell'operatore .

### <a name="return-value"></a>Valore restituito

TRUE se i descrittori di sicurezza sono uguali, in caso contrario FALSE.

## <a name="csidoperator-"></a><a name="operator_neq"></a>CSid::operator !

Verifica la disuguaglianza di due oggetti descrittore di sicurezza.

```
bool operator!=(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato sinistro dell'operatore !

*rhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato destro dell'operatore !

### <a name="return-value"></a>Valore restituito

TRUE se i descrittori di sicurezza non sono uguali, in caso contrario FALSE.

## <a name="csidoperator-lt"></a><a name="operator_lt"></a>CSid::operatore&lt;

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato sinistro dell'operatore !

*rhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato destro dell'operatore !

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è minore di *rhs*, in caso contrario FALSE.

## <a name="csidoperator-lt"></a><a name="operator_lt__eq"></a>CSid::operatore&lt;=

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator<=(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato sinistro dell'operatore !

*rhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato destro dell'operatore !

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è minore o uguale a *rhs*, in caso contrario FALSE.

## <a name="csidoperator-gt"></a><a name="operator_gt"></a>CSid::operatore&gt;

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator>(
    const CSid& lhs,
    const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato sinistro dell'operatore !

*rhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato destro dell'operatore !

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è maggiore di *rhs*, in caso contrario FALSE.

## <a name="csidoperator-gt"></a><a name="operator_gt__eq"></a>CSid::operatore&gt;=

Confronta il valore relativo di due oggetti descrittore di sicurezza.

```
bool operator>=(
    const CSid& lhs,
    const CSid& rhs) throw());
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato sinistro dell'operatore !

*rhs*<br/>
L'identificatore `SID` di `CSid` sicurezza o che viene visualizzato sul lato destro dell'operatore !

### <a name="return-value"></a>Valore restituito

TRUE se *lhs* è maggiore o uguale a *rhs*, in caso contrario FALSE.

## <a name="csidoperator-const-sid-"></a><a name="operator_const_sid__star"></a>CSid::operator const SID\*

Esegue il `CSid` cast di un `SID` oggetto a un puntatore a una struttura (identificatore di sicurezza).

```
operator const SID *() const throw(...);
```

### <a name="remarks"></a>Osservazioni

Restituisce l'indirizzo della `SID` struttura.

## <a name="csidsid"></a><a name="sid"></a>CSid::Sid

Restituisce `SID` la struttura (identificatore di sicurezza) come stringa.

```
LPCTSTR Sid() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce `SID` la struttura come stringa in un formato adatto per la visualizzazione, l'archiviazione o la trasmissione. Equivalente a [ConvertSidToStringSid](/windows/win32/api/sddl/nf-sddl-convertsidtostringsidw).

## <a name="csidsidnameuse"></a><a name="sidnameuse"></a>CSid::SidNameUso

Restituisce una descrizione dello `CSid` stato dell'oggetto.

```
SID_NAME_USE SidNameUse() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore del membro dati che archivia un valore che descrive lo stato dell'oggetto. `CSid`

|valore|Descrizione|
|-----------|-----------------|
|SidTypeUser|Indica un `SID` utente (identificatore di sicurezza).|
|SidTypeGroup (gruppo DidTypeGroup)|Indica un `SID`gruppo.|
|SidTypeDomain (dominio di tipo SidTypeDomain)|Indica un `SID`dominio .|
|SidTypeAlias (Alias di base)|Indica un `SID`alias .|
|SidTypeWellKnownGroup (gruppo sidTypeWellKnownGroup)|Indica un `SID` per un gruppo noto.|
|SidTypeDeletedAccount|Indica un `SID` per un account eliminato.|
|SidTypeInvalid|Indica un `SID`file .|
|SidTypeUnknown|Indica un `SID` tipo sconosciuto.|
|SidTypeComputer (informazioni in base al computer|Indica un `SID` per un computer.|

### <a name="remarks"></a>Osservazioni

Chiamare [CSid::LoadAccount](#loadaccount) per `CSid` aggiornare `SidNameUse` l'oggetto prima di chiamare per restituire lo stato. `SidNameUse`non modifica lo stato dell'oggetto `LookupAccountName` (chiamando o `LookupAccountSid`), ma restituisce solo lo stato corrente.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)<br/>
[Operatori](../../atl/reference/atl-operators.md)
