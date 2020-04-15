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
ms.openlocfilehash: 87bf903220a584798ea59c5f1c701fc35049e901
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321664"
---
# <a name="cacl-class"></a>Classe CAcl

Questa classe è un `ACL` wrapper per una struttura (elenco di controllo di accesso).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAcl
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::CAccessMaskArray](#caccessmaskarray)|Matrice di ACCESS_MASKs.|
|[CAcl::CAceFlagArray](#caceflagarray)|Matrice di BYTE.|
|[CAcl::CAceTypeArray](#cacetypearray)|Matrice di BYTE.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::CAcl](#cacl)|Costruttore.|
|[CAcl:: CAcl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::GetAceCount](#getacecount)|Restituisce il numero di oggetti voce di controllo di accesso (ACE).|
|[CAcl::GetAclEntries](#getaclentries)|Recupera le voci dell'elenco di controllo `CAcl` di accesso (ACL) dall'oggetto.|
|[CAcl::GetAclEntry](#getaclentry)|Recupera tutte le informazioni su una `CAcl` voce in un oggetto.|
|[CAcl::GetLength](#getlength)|Restituisce la lunghezza dell'ACL.|
|[CAcl::GetPACL](#getpacl)|Restituisce un PACL (puntatore a un ACL).|
|[CAcl::IsEmpty](#isempty)|Verifica `CAcl` la ricerca di voci nell'oggetto.|
|[CAcl::IsNull](#isnull)|Restituisce lo `CAcl` stato dell'oggetto.|
|[CAcl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce `CAcl` di controllo di accesso) dall'oggetto.|
|[CAcl::RemoveAces](#removeaces)|Rimuove tutte le voci di controllo di accesso `CAcl` (voci di `CSid`controllo di accesso) dall'oggetto che si applicano all'oggetto specificato.|
|[CAcl::SetEmpty](#setempty)|Contrassegna `CAcl` l'oggetto come vuoto.|
|[CAcl::SetNull](#setnull)|Contrassegna `CAcl` l'oggetto come NULL.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::operator const ACL](#operator_const_acl__star)|Esegue il `CAcl` cast `ACL` di un oggetto in una struttura.|
|[CAcl::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

La `ACL` struttura è l'intestazione di un ACL (elenco di controllo di accesso). Un ACL include un elenco sequenziale di zero o più voci [ACE](/windows/win32/SecAuthZ/access-control-entries) (voci di controllo di accesso). Le singole voci di controllo di accesso in un ACL sono numerate da 0 a *n-1*, dove *n* è il numero di voci di controllo di accesso nell'ACL. Quando si modifica un ACL, un'applicazione fa riferimento a una voce di controllo di accesso (ACE) all'interno dell'ACL in base al relativo indice.

Esistono due tipi acl:

- Discrezionale

- Sistema

Un ACL discrezionale è controllato dal proprietario di un oggetto o da chiunque sia stato concesso WRITE_DAC l'accesso all'oggetto. Specifica l'accesso a utenti e gruppi specifici che possono avere per un oggetto. Ad esempio, il proprietario di un file può utilizzare un ACL discrezionale per controllare quali utenti e gruppi possono e non possono avere accesso al file.

A un oggetto possono inoltre essere associate informazioni di protezione a livello di sistema, sotto forma di un ACL di sistema controllato da un amministratore di sistema. Un ACL di sistema può consentire all'amministratore di sistema di controllare qualsiasi tentativo di accesso a un oggetto.

Per ulteriori informazioni, vedere la discussione [ACL](/windows/win32/SecAuthZ/access-control-lists) in Windows SDK.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="caclcaccessmaskarray"></a><a name="caccessmaskarray"></a>CAcl::CAccessMaskArray

Matrice di oggetti ACCESS_MASK.

```
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```

### <a name="remarks"></a>Osservazioni

Questo typedef specifica il tipo di matrice che può essere utilizzato per archiviare i diritti di accesso utilizzati nelle voci di controllo di accesso (ACE).

## <a name="caclcaceflagarray"></a><a name="caceflagarray"></a>CAcl::CAceFlagArray

Matrice di BYTE.

```
typedef CAtlArray<BYTE> CAceFlagArray;
```

### <a name="remarks"></a>Osservazioni

Questo typedef specifica il tipo di matrice utilizzato per definire i flag di controllo specifici del tipo di voce di controllo di accesso (ACE). Vedere la definizione [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) per l'elenco completo dei possibili flag.

## <a name="caclcacetypearray"></a><a name="cacetypearray"></a>CAcl::CAceTypeArray

Matrice di BYTE.

```
typedef CAtlArray<BYTE> CAceTypeArray;
```

### <a name="remarks"></a>Osservazioni

Questo typedef specifica il tipo di matrice utilizzato per definire la natura degli oggetti voce di controllo di accesso (ACE), ad esempio ACCESS_ALLOWED_ACE_TYPE o ACCESS_DENIED_ACE_TYPE. Vedere la definizione [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) per l'elenco completo dei tipi possibili.

## <a name="caclcacl"></a><a name="cacl"></a>CAcl::CAcl

Costruttore.

```
CAcl() throw();
CAcl(const CAcl& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CAcl` esistente.

### <a name="remarks"></a>Osservazioni

L'oggetto `CAcl` può essere creato `CAcl` facoltativamente utilizzando un oggetto esistente.

## <a name="caclcacl"></a><a name="dtor"></a>CAcl:: CAcl

Distruttore.

```
virtual ~CAcl() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse acquisite dall'oggetto.

## <a name="caclgetacecount"></a><a name="getacecount"></a>CAcl::GetAceCount

Restituisce il numero di oggetti voce di controllo di accesso (ACE).

```
virtual UINT GetAceCount() const throw() = 0;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di `CAcl` voci ACE nell'oggetto.

## <a name="caclgetaclentries"></a><a name="getaclentries"></a>CAcl::GetAclEntries

Recupera le voci dell'elenco di controllo `CAcl` di accesso (ACL) dall'oggetto.

```
void GetAclEntries(
    CSid::CSidArray* pSids,
    CAccessMaskArray* pAccessMasks = NULL,
    CAceTypeArray* pAceTypes = NULL,
    CAceFlagArray* pAceFlags = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSids (in stato di*<br/>
Puntatore a una matrice di [CSid](../../atl/reference/csid-class.md) oggetti.

*pAccessMaschere*<br/>
Le maschere di accesso.

*pAceTipi*<br/>
Tipi di voce di controllo di accesso (ACE).

*pAceFlags (flag)*<br/>
I flag ACE.

### <a name="remarks"></a>Osservazioni

Questo metodo riempie i parametri della matrice con `CAcl` i dettagli di ogni oggetto ACE contenuto nell'oggetto. Utilizzare NULL quando i dettagli per quella particolare matrice non sono necessari.

Il contenuto di ogni matrice corrisponde l'uno all'altro, ovvero il primo elemento della `CAccessMaskArray` matrice corrisponde al primo elemento della `CSidArray` matrice e così via.

Vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) per ulteriori dettagli su tipi e flag ACE.

## <a name="caclgetaclentry"></a><a name="getaclentry"></a>CAcl::GetAclEntry

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

*Psid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) a cui si applica la voce ACL.

*pMaschera*<br/>
Maschera che specifica le autorizzazioni per concedere o negare l'accesso.

*pTipo*<br/>
Il tipo ACE.

*pFlags (Flag)*<br/>
I flag ACE.

*pObjectType (tipo di oggetto)*<br/>
Tipo dell'oggetto. Questo valore verrà impostato su GUID_NULL se il tipo di oggetto non è specificato nell'ACE o se l'ACE non è una voce ACE OBJECT.

*pInheritedObjectType (oggetto PEreditatoOggettoType)*<br/>
Tipo di oggetto ereditato. Questo valore verrà impostato su GUID_NULL se il tipo di oggetto ereditato non è specificato nella voce ACE o se la voce ACE non è una voce ACE OBJECT.

### <a name="remarks"></a>Osservazioni

Questo metodo recupererà tutte le informazioni su una singola voce ACE, fornendo più informazioni di [CAcl::GetAclEntries](#getaclentries) da solo rende disponibili.

Vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) per ulteriori dettagli su tipi e flag ACE.

## <a name="caclgetlength"></a><a name="getlength"></a>CAcl::GetLength

Restituisce la lunghezza dell'elenco di controllo di accesso (ACL).

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza richiesta in `ACL` byte necessaria per contenere la struttura.

## <a name="caclgetpacl"></a><a name="getpacl"></a>CAcl::GetPACL

Restituisce un puntatore a un elenco di controllo di accesso (ACL).

```
const ACL* GetPACL() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce un `ACL` puntatore alla struttura.

## <a name="caclisempty"></a><a name="isempty"></a>CAcl::IsEmpty

Verifica `CAcl` la ricerca di voci nell'oggetto.

```
bool IsEmpty() const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce TRUE `CAcl` se l'oggetto non è NULL e non contiene voci. Restituisce FALSE `CAcl` se l'oggetto è NULL o contiene almeno una voce.

## <a name="caclisnull"></a><a name="isnull"></a>CAcl::IsNull

Restituisce lo `CAcl` stato dell'oggetto.

```
bool IsNull() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE `CAcl` se l'oggetto è NULL, FALSE in caso contrario.

## <a name="cacloperator-const-acl-"></a><a name="operator_const_acl__star"></a>CAcl::operator const ACL

Esegue il `CAcl` cast `ACL` di un oggetto a una struttura (elenco di controllo di accesso).

```
operator const ACL *() const throw(...);
```

### <a name="remarks"></a>Osservazioni

Restituisce l'indirizzo della `ACL` struttura.

## <a name="cacloperator-"></a><a name="operator_eq"></a>CAcl::operatore

Operatore di assegnazione.

```
CAcl& operator= (const CAcl& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CAcl` da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento `CAcl` all'oggetto aggiornato.

## <a name="caclremoveace"></a><a name="removeace"></a>CAcl::RemoveAce

Rimuove una voce ACE specifica (voce `CAcl` di controllo di accesso) dall'oggetto.

```
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACE da rimuovere.

### <a name="remarks"></a>Osservazioni

Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="caclremoveaces"></a><a name="removeaces"></a>CAcl::RemoveAces

Rimuove tutte le voci ACE (voci di controllo `CAcl` di accesso) `CSid`dall'oggetto che si applicano all'oggetto specificato.

```
bool RemoveAces(const CSid& rSid) throw(...)
```

### <a name="parameters"></a>Parametri

*rSid (in seguito al numero di*<br/>
Riferimento a un oggetto `CSid`.

## <a name="caclsetempty"></a><a name="setempty"></a>CAcl::SetEmpty

Contrassegna `CAcl` l'oggetto come vuoto.

```
void SetEmpty() throw();
```

### <a name="remarks"></a>Osservazioni

L'oggetto `CAcl` può essere impostato su empty o su NULL: i due stati sono distinti.

## <a name="caclsetnull"></a><a name="setnull"></a>CAcl::SetNull

Contrassegna `CAcl` l'oggetto come NULL.

```
void SetNull() throw();
```

### <a name="remarks"></a>Osservazioni

L'oggetto `CAcl` può essere impostato su empty o su NULL: i due stati sono distinti.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
