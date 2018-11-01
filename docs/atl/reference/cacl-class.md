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
ms.openlocfilehash: a9653225f3057d6c5ba9fd49cf64487e766ca8d1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50491546"
---
# <a name="cacl-class"></a>Classe CAcl

Questa classe è un wrapper per un `ACL` struttura (elenco di controllo di accesso).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAcl
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::CAccessMaskArray](#caccessmaskarray)|Matrice di ACCESS_MASKs.|
|[CAcl::CAceFlagArray](#caceflagarray)|Matrice di byte.|
|[CAcl::CAceTypeArray](#cacetypearray)|Matrice di byte.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::CAcl](#cacl)|Costruttore.|
|[CAcl:: ~ CAcl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::GetAceCount](#getacecount)|Restituisce il numero di controllo di accesso oggetti voce (ACE).|
|[CAcl::GetAclEntries](#getaclentries)|Recupera le voci di elenco (ACL) di controllo di accesso dal `CAcl` oggetto.|
|[CAcl::GetAclEntry](#getaclentry)|Recupera tutte le informazioni su una voce in un `CAcl` oggetto.|
|[CAcl::GetLength](#getlength)|Restituisce la lunghezza dell'ACL.|
|[CAcl::GetPACL](#getpacl)|Restituisce del pacchetto del (puntatore a un ACL).|
|[CAcl::IsEmpty](#isempty)|Test di `CAcl` oggetto per le voci.|
|[CAcl::IsNull](#isnull)|Restituisce lo stato del `CAcl` oggetto.|
|[CAcl::RemoveAce](#removeace)|Rimuove una specifica voce ACE (voce di controllo di accesso) di `CAcl` oggetto.|
|[CAcl::RemoveAces](#removeaces)|Rimuove tutte le voci ACE (voce di controllo di accesso) di `CAcl` che si applicano al determinato `CSid`.|
|[CAcl::SetEmpty](#setempty)|Segni di `CAcl` dell'oggetto come vuoto.|
|[CAcl::SetNull](#setnull)|Segni di `CAcl` oggetto come NULL.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::operator ACL const *](#operator_const_acl__star)|Cast di un `CAcl` dell'oggetto a un `ACL` struttura.|
|[CAcl::operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

Il `ACL` struttura corrisponde all'intestazione di un ACL (elenco di controllo di accesso). Un ACL include un elenco di zero o più caratteri sequenziali [ACE](/windows/desktop/SecAuthZ/access-control-entries) (voci di controllo di accesso). Le singole voci ACE di controllo di accesso sono numerate da 0 a *n-1*, dove *n* è il numero di voci ACE nell'elenco ACL. Quando si modifica un ACL, un'applicazione fa riferimento a una voce di controllo di accesso (ACE) all'interno dell'ACL in base all'indice.

Esistono due tipi ACL:

- Discretionary Access Control List

- System

Un ACL discrezionale è controllato dal proprietario dell'oggetto o a chiunque concesso l'accesso WRITE_DAC per l'oggetto. Specifica che a un oggetto possono avere l'accesso utenti e gruppi specifici. Ad esempio, il proprietario di un file è possibile usare un ACL discrezionale per controllare quali utenti e gruppi possono e non può avere accesso al file.

Un oggetto può avere anche le informazioni di sicurezza a livello di sistema associate, sotto forma di un sistema ACL controllata da un amministratore di sistema. Un ACL di sistema può consentire all'amministratore di sistema di tutti i tentativi di ottenere l'accesso a un oggetto di controllo.

Per altre informazioni, vedere la [ACL](/windows/desktop/SecAuthZ/access-control-lists) discussione in Windows SDK.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="caccessmaskarray"></a>  CAcl::CAccessMaskArray

Una matrice di oggetti ACCESS_MASK.

```
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```

### <a name="remarks"></a>Note

Questo typedef specifica il tipo di matrice che può essere utilizzato per archiviare i diritti di accesso utilizzati nelle voci di controllo di accesso (ACE).

##  <a name="caceflagarray"></a>  CAcl::CAceFlagArray

Matrice di byte.

```
typedef CAtlArray<BYTE> CAceFlagArray;
```

### <a name="remarks"></a>Note

Questo typedef specifica il tipo di matrice utilizzato per definire i flag di controllo specifici del tipo voce ACE di controllo di accesso. Vedere le [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-_ace_header) definizione per un elenco completo dei flag possibili.

##  <a name="cacetypearray"></a>  CAcl::CAceTypeArray

Matrice di byte.

```
typedef CAtlArray<BYTE> CAceTypeArray;
```

### <a name="remarks"></a>Note

Questo typedef specifica il tipo di matrice utilizzato per definire la natura degli oggetti voce (ACE) controllo di accesso, ad esempio ACCESS_ALLOWED_ACE_TYPE o ACCESS_DENIED_ACE_TYPE. Vedere le [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-_ace_header) definizione per un elenco completo dei tipi possibili.

##  <a name="cacl"></a>  CAcl::CAcl

Costruttore.

```
CAcl() throw();
CAcl(const CAcl& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CAcl` esistente.

### <a name="remarks"></a>Note

Il `CAcl` oggetto può essere creato facoltativamente usando un oggetto esistente `CAcl` oggetto.

##  <a name="dtor"></a>  CAcl:: ~ CAcl

Distruttore.

```
virtual ~CAcl() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera eventuali risorse ottenute dall'oggetto.

##  <a name="getacecount"></a>  CAcl::GetAceCount

Restituisce il numero di controllo di accesso oggetti voce (ACE).

```
virtual UINT GetAceCount() const throw() = 0;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci ACE di `CAcl` oggetto.

##  <a name="getaclentries"></a>  CAcl::GetAclEntries

Recupera le voci di elenco (ACL) di controllo di accesso dal `CAcl` oggetto.

```
void GetAclEntries(
    CSid::CSidArray* pSids,
    CAccessMaskArray* pAccessMasks = NULL,
    CAceTypeArray* pAceTypes = NULL,
    CAceFlagArray* pAceFlags = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSids*<br/>
Un puntatore a una matrice di [IDSR](../../atl/reference/csid-class.md) oggetti.

*pAccessMasks*<br/>
Le maschere di accesso.

*pAceTypes*<br/>
I tipi di voce ACE di controllo di accesso.

*pAceFlags*<br/>
I flag di voce ACE.

### <a name="remarks"></a>Note

Questo metodo inserisce i parametri di matrice con i dettagli di ogni oggetto ACE contenuti nel `CAcl` oggetto. Utilizzare NULL quando non sono richiesti i dettagli di tale matrice specifico.

Il contenuto di ogni matrice corrispondenza tra loro, vale a dire il primo elemento della `CAccessMaskArray` matrice corrisponde al primo elemento nel `CSidArray` matrice e così via.

Visualizzare [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-_ace_header) per altri dettagli sul flag e tipi di voce ACE.

##  <a name="getaclentry"></a>  CAcl::GetAclEntry

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
Indice per la voce ACL da recuperare.

*pSid*<br/>
Il [IDSR](../../atl/reference/csid-class.md) dell'oggetto a cui viene applicata la voce ACL.

*pMask*<br/>
La maschera che specifica le autorizzazioni per concedere o negare l'accesso.

*PDigitare*<br/>
Il tipo di voce ACE.

*pFlags*<br/>
I flag di voce ACE.

*pObjectType*<br/>
Tipo di oggetto. Questo tipo verrà impostato su to GUID_NULL se il tipo di oggetto non viene specificato nella voce ACE o se la voce ACE non è un oggetto.

*pInheritedObjectType*<br/>
Il tipo di oggetto ereditato. Questo tipo verrà impostato su to GUID_NULL se il tipo di oggetto ereditato non è specificato nella voce ACE o se la voce ACE non è un oggetto.

### <a name="remarks"></a>Note

Questo metodo recupera tutte le informazioni su una voce ACE singoli, che offre maggiori informazioni rispetto [CAcl::GetAclEntries](#getaclentries) singolarmente rende disponibili.

Visualizzare [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-_ace_header) per altri dettagli sul flag e tipi di voce ACE.

##  <a name="getlength"></a>  CAcl::GetLength

Restituisce la lunghezza dell'elenco di controllo di accesso (ACL).

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza in byte necessari per contenere il `ACL` struttura.

##  <a name="getpacl"></a>  CAcl::GetPACL

Restituisce un puntatore a un elenco di controllo di accesso (ACL).

```
const ACL* GetPACL() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al `ACL` struttura.

##  <a name="isempty"></a>  CAcl::IsEmpty

Test di `CAcl` oggetto per le voci.

```
bool IsEmpty() const throw();
```

### <a name="remarks"></a>Note

Restituisce TRUE se il `CAcl` oggetto non NULL e non contiene voci. Restituisce FALSE se il `CAcl` oggetto è NULL o contiene almeno una voce.

##  <a name="isnull"></a>  CAcl::IsNull

Restituisce lo stato del `CAcl` oggetto.

```
bool IsNull() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il `CAcl` oggetto è NULL, in caso contrario, FALSE.

##  <a name="operator_const_acl__star"></a>  CAcl::operator ACL const *

Cast di un `CAcl` dell'oggetto a un `ACL` struttura (elenco di controllo di accesso).

```
operator const ACL *() const throw(...);
```

### <a name="remarks"></a>Note

Restituisce l'indirizzo del `ACL` struttura.

##  <a name="operator_eq"></a>  CAcl::operator =

Operatore di assegnazione.

```
CAcl& operator= (const CAcl& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `CAcl` da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento aggiornato `CAcl` oggetto.

##  <a name="removeace"></a>  CAcl::RemoveAce

Rimuove una specifica voce ACE (voce di controllo di accesso) di `CAcl` oggetto.

```
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice per la voce ACE da rimuovere.

### <a name="remarks"></a>Note

Questo metodo è derivato dalla [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

##  <a name="removeaces"></a>  CAcl::RemoveAces

Rimuove opzioni ACE (voce di controllo di accesso) il `CAcl` che si applicano al determinato `CSid`.

```
bool RemoveAces(const CSid& rSid) throw(...)
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Riferimento a un oggetto `CSid`.

##  <a name="setempty"></a>  CAcl::SetEmpty

Segni di `CAcl` dell'oggetto come vuoto.

```
void SetEmpty() throw();
```

### <a name="remarks"></a>Note

Il `CAcl` può essere impostato su vuota o su NULL: i due stati sono distinti.

##  <a name="setnull"></a>  CAcl::SetNull

Segni di `CAcl` oggetto come NULL.

```
void SetNull() throw();
```

### <a name="remarks"></a>Note

Il `CAcl` può essere impostato su vuota o su NULL: i due stati sono distinti.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
