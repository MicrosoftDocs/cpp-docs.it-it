---
title: Classe CAcl
ms.date: 11/04/2016
f1_keywords:
- CAcl
- ATLSECURITY/ATL::CAcl
- ATLSECURITY/ATL::CAcl::CAccessMaskArray
- ATLSECURITY/ATL::CAcl::CAceFlagArray
- ATLSECURITY/ATL::CAcl::CAceTypeArray
- ATLSECURITY/ATL::CAcl::CAcl
- ATLSECURITY/ATL::CAcl::GetAceCount
- ATLSECURITY/ATL::CAcl::GetAclEntries
- ATLSECURITY/ATL::CAcl::GetAclEntry
- ATLSECURITY/ATL::CAcl::GetLength
- ATLSECURITY/ATL::CAcl::GetPACL
- ATLSECURITY/ATL::CAcl::IsEmpty
- ATLSECURITY/ATL::CAcl::IsNull
- ATLSECURITY/ATL::CAcl::RemoveAce
- ATLSECURITY/ATL::CAcl::RemoveAces
- ATLSECURITY/ATL::CAcl::SetEmpty
- ATLSECURITY/ATL::CAcl::SetNull
helpviewer_keywords:
- CAcl class
ms.assetid: 20bcb9af-dc1c-4737-b923-3864776680d6
ms.openlocfilehash: 5d03154597f800042846e82d0a0cf5e7c46b613f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78864905"
---
# <a name="cacl-class"></a>Classe CAcl

Questa classe è un wrapper per una struttura di `ACL` (elenco di controllo di accesso).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAcl
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl:: CAccessMaskArray](#caccessmaskarray)|Matrice di ACCESS_MASKs.|
|[CAcl:: CAceFlagArray](#caceflagarray)|Matrice di byte.|
|[CAcl:: CAceTypeArray](#cacetypearray)|Matrice di byte.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl:: CAcl](#cacl)|Costruttore.|
|[CAcl:: ~ CAcl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl:: GetAceCount](#getacecount)|Restituisce il numero di oggetti ACE (Access-Control Entry).|
|[CAcl:: GetAclEntries](#getaclentries)|Recupera le voci dell'elenco di controllo di accesso (ACL) dall'oggetto `CAcl`.|
|[CAcl:: GetAclEntry](#getaclentry)|Recupera tutte le informazioni su una voce in un oggetto `CAcl`.|
|[CAcl:: GetLength](#getlength)|Restituisce la lunghezza dell'ACL.|
|[CAcl:: GetPACL](#getpacl)|Restituisce un PACL (puntatore a un ACL).|
|[CAcl:: IsEmpty](#isempty)|Verifica l'oggetto `CAcl` per le voci.|
|[CAcl:: IsNull](#isnull)|Restituisce lo stato dell'oggetto `CAcl`.|
|[CAcl:: RemoveAce](#removeace)|Rimuove una voce ACE (Access-Control) specifica dall'oggetto `CAcl`.|
|[CAcl:: RemoveAces](#removeaces)|Rimuove tutte le voci di controllo di accesso (ACE) dal `CAcl` che si applicano al `CSid`specificato.|
|[CAcl:: seempty](#setempty)|Contrassegna l'oggetto `CAcl` come vuoto.|
|[CAcl:: null](#setnull)|Contrassegna l'oggetto `CAcl` come NULL.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl:: operator const ACL *](#operator_const_acl__star)|Esegue il cast di un oggetto `CAcl` a una struttura di `ACL`.|
|[CAcl:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

La struttura del `ACL` è l'intestazione di un ACL (elenco di controllo di accesso). Un ACL include un elenco sequenziale di zero o più [ACE](/windows/win32/SecAuthZ/access-control-entries) (voci di controllo di accesso). Le singole voci ACE in un ACL sono numerate da 0 a *n-1*, dove *n* è il numero di voci ACE nell'ACL. Quando si modifica un ACL, un'applicazione fa riferimento a una voce di controllo di accesso (ACE) nell'ACL in base al relativo indice.

Sono disponibili due tipi di ACL:

- Discrezionale

- Sistema

Un ACL discrezionale è controllato dal proprietario di un oggetto o da chiunque abbia concesso WRITE_DAC l'accesso all'oggetto. Specifica l'accesso a utenti e gruppi specifici che possono disporre di un oggetto. Il proprietario di un file, ad esempio, può utilizzare un ACL discrezionale per controllare quali utenti e gruppi possono e non possono accedere al file.

Un oggetto può inoltre disporre di informazioni di sicurezza a livello di sistema associate, sotto forma di un ACL di sistema controllato da un amministratore di sistema. Un ACL di sistema può consentire all'amministratore di sistema di controllare eventuali tentativi di accesso a un oggetto.

Per ulteriori informazioni, vedere la discussione [ACL](/windows/win32/SecAuthZ/access-control-lists) nella Windows SDK.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="caccessmaskarray"></a>CAcl:: CAccessMaskArray

Matrice di oggetti ACCESS_MASK.

```
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```

### <a name="remarks"></a>Osservazioni

Questo typedef specifica il tipo di matrice che può essere usato per archiviare i diritti di accesso usati nelle voci di controllo di accesso (ACE).

##  <a name="caceflagarray"></a>CAcl:: CAceFlagArray

Matrice di byte.

```
typedef CAtlArray<BYTE> CAceFlagArray;
```

### <a name="remarks"></a>Osservazioni

Questo typedef specifica il tipo di matrice usato per definire i flag di controllo specifici del tipo ACE (Access-Control Entry). Per l'elenco completo dei flag possibili, vedere la definizione di [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) .

##  <a name="cacetypearray"></a>CAcl:: CAceTypeArray

Matrice di byte.

```
typedef CAtlArray<BYTE> CAceTypeArray;
```

### <a name="remarks"></a>Osservazioni

Questo typedef specifica il tipo di matrice usato per definire la natura degli oggetti ACE (Access-Control Entry), ad esempio ACCESS_ALLOWED_ACE_TYPE o ACCESS_DENIED_ACE_TYPE. Per l'elenco completo dei tipi possibili, vedere la definizione di [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) .

##  <a name="cacl"></a>CAcl:: CAcl

Costruttore.

```
CAcl() throw();
CAcl(const CAcl& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CAcl` esistente.

### <a name="remarks"></a>Osservazioni

È possibile creare facoltativamente l'oggetto `CAcl` usando un oggetto `CAcl` esistente.

##  <a name="dtor"></a>CAcl:: ~ CAcl

Distruttore.

```
virtual ~CAcl() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse acquisite dall'oggetto.

##  <a name="getacecount"></a>CAcl:: GetAceCount

Restituisce il numero di oggetti ACE (Access-Control Entry).

```
virtual UINT GetAceCount() const throw() = 0;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci ACE nell'oggetto `CAcl`.

##  <a name="getaclentries"></a>CAcl:: GetAclEntries

Recupera le voci dell'elenco di controllo di accesso (ACL) dall'oggetto `CAcl`.

```
void GetAclEntries(
    CSid::CSidArray* pSids,
    CAccessMaskArray* pAccessMasks = NULL,
    CAceTypeArray* pAceTypes = NULL,
    CAceFlagArray* pAceFlags = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSids*<br/>
Puntatore a una matrice di oggetti [CSid](../../atl/reference/csid-class.md) .

*pAccessMasks*<br/>
Maschere di accesso.

*pAceTypes*<br/>
Tipi di voce di controllo di accesso (ACE).

*pAceFlags*<br/>
Flag ACE.

### <a name="remarks"></a>Osservazioni

Questo metodo compila i parametri della matrice con i dettagli di ogni oggetto ACE contenuto nell'oggetto `CAcl`. Utilizzare NULL se i dettagli per la matrice specifica non sono obbligatori.

Il contenuto di ogni matrice corrisponde, ovvero il primo elemento della matrice di `CAccessMaskArray` corrisponde al primo elemento nella matrice `CSidArray` e così via.

Per altri dettagli sui tipi e sui flag ACE, vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) .

##  <a name="getaclentry"></a>CAcl:: GetAclEntry

Recupera tutte le informazioni su una voce in un elenco di controllo di accesso (ACL).

```
void GetAclEntry(
    UINT nIndex,
    CSid* pSid,
    ACCESS_MASK* pMask = NULL,
    BYTE* pType = NULL,
    BYTE* pFlags = NULL,
    GUID* pObjectType = NULL,
    GUID* pInheritedObjectType = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACL da recuperare.

*pSid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) a cui si applica la voce ACL.

*pMask*<br/>
Maschera che specifica le autorizzazioni per concedere o negare l'accesso.

*pType*<br/>
Tipo ACE.

*pFlags*<br/>
Flag ACE.

*pObjectType*<br/>
Tipo dell'oggetto. Questo valore verrà impostato su GUID_NULL se il tipo di oggetto non è specificato nella voce ACE o se la voce ACE non è una voce ACE di oggetti.

*pInheritedObjectType*<br/>
Tipo di oggetto ereditato. Questo valore verrà impostato su GUID_NULL se il tipo di oggetto ereditato non è specificato nella voce ACE o se la voce ACE non è una voce ACE.

### <a name="remarks"></a>Osservazioni

Questo metodo consente di recuperare tutte le informazioni relative a una singola voce ACE, fornendo più informazioni rispetto a quelle disponibili solo in [CAcl:: GetAclEntries](#getaclentries) .

Per altri dettagli sui tipi e sui flag ACE, vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) .

##  <a name="getlength"></a>CAcl:: GetLength

Restituisce la lunghezza dell'elenco di controllo di accesso (ACL).

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza in byte necessaria per mantenere la struttura `ACL`.

##  <a name="getpacl"></a>CAcl:: GetPACL

Restituisce un puntatore a un elenco di controllo di accesso (ACL).

```
const ACL* GetPACL() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura `ACL`.

##  <a name="isempty"></a>CAcl:: IsEmpty

Verifica l'oggetto `CAcl` per le voci.

```
bool IsEmpty() const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce TRUE se l'oggetto `CAcl` non è NULL e non contiene voci. Restituisce FALSE se l'oggetto `CAcl` è NULL o contiene almeno una voce.

##  <a name="isnull"></a>CAcl:: IsNull

Restituisce lo stato dell'oggetto `CAcl`.

```
bool IsNull() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto `CAcl` è NULL; in caso contrario, FALSE.

##  <a name="operator_const_acl__star"></a>CAcl:: operator const ACL *

Esegue il cast di un oggetto `CAcl` a una struttura di `ACL` (elenco di controllo di accesso).

```
operator const ACL *() const throw(...);
```

### <a name="remarks"></a>Osservazioni

Restituisce l'indirizzo della struttura `ACL`.

##  <a name="operator_eq"></a>CAcl:: operator =

Operatore di assegnazione.

```
CAcl& operator= (const CAcl& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`CAcl` da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto `CAcl` aggiornato.

##  <a name="removeace"></a>CAcl:: RemoveAce

Rimuove una voce ACE (Access-Control) specifica dall'oggetto `CAcl`.

```
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACE da rimuovere.

### <a name="remarks"></a>Osservazioni

Questo metodo è derivato da [CAtlArray:: RemoveAt](../../atl/reference/catlarray-class.md#removeat).

##  <a name="removeaces"></a>CAcl:: RemoveAces

Rimuove le voci di controllo di accesso (ACE) del `CAcl` che si applicano al `CSid`specificato.

```
bool RemoveAces(const CSid& rSid) throw(...)
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Riferimento a un oggetto `CSid`.

##  <a name="setempty"></a>CAcl:: seempty

Contrassegna l'oggetto `CAcl` come vuoto.

```
void SetEmpty() throw();
```

### <a name="remarks"></a>Osservazioni

Il `CAcl` può essere impostato su Empty o su NULL: i due Stati sono distinti.

##  <a name="setnull"></a>CAcl:: null

Contrassegna l'oggetto `CAcl` come NULL.

```
void SetNull() throw();
```

### <a name="remarks"></a>Osservazioni

Il `CAcl` può essere impostato su Empty o su NULL: i due Stati sono distinti.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
