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
ms.openlocfilehash: ba791ddc46fd59a470943bb30f415da01966dc61
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68915896"
---
# <a name="cacl-class"></a>Classe CAcl

Questa classe è un wrapper per una `ACL` struttura (elenco di controllo di accesso).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAcl
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Name|Descrizione|
|----------|-----------------|
|[CAcl::CAccessMaskArray](#caccessmaskarray)|Matrice di ACCESS_MASKs.|
|[CAcl::CAceFlagArray](#caceflagarray)|Matrice di byte.|
|[CAcl::CAceTypeArray](#cacetypearray)|Matrice di byte.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CAcl::CAcl](#cacl)|Costruttore.|
|[CAcl:: ~ CAcl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcl::GetAceCount](#getacecount)|Restituisce il numero di oggetti ACE (Access-Control Entry).|
|[CAcl::GetAclEntries](#getaclentries)|Recupera le voci dell'elenco di controllo di accesso (ACL) `CAcl` dall'oggetto.|
|[CAcl::GetAclEntry](#getaclentry)|Recupera tutte le informazioni su una voce in un `CAcl` oggetto.|
|[CAcl::GetLength](#getlength)|Restituisce la lunghezza dell'ACL.|
|[CAcl::GetPACL](#getpacl)|Restituisce un PACL (puntatore a un ACL).|
|[CAcl:: IsEmpty](#isempty)|Verifica l' `CAcl` oggetto per le voci.|
|[CAcl:: IsNull](#isnull)|Restituisce lo stato dell' `CAcl` oggetto.|
|[CAcl::RemoveAce](#removeace)|Rimuove una voce ACE (Access-Control Entry) specifica dall' `CAcl` oggetto.|
|[CAcl::RemoveAces](#removeaces)|Rimuove tutte le voci di controllo di accesso (ACE) `CAcl` dall'oggetto che si applicano all'oggetto specificato. `CSid`|
|[CAcl::SetEmpty](#setempty)|Contrassegna l' `CAcl` oggetto come vuoto.|
|[CAcl:: null](#setnull)|Contrassegna l' `CAcl` oggetto come null.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CAcl:: operator const ACL *](#operator_const_acl__star)|Esegue il cast `CAcl` di un oggetto `ACL` a una struttura.|
|[CAcl:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

La `ACL` struttura è l'intestazione di un ACL (elenco di controllo di accesso). Un ACL include un elenco sequenziale di zero o più [ACE](/windows/desktop/SecAuthZ/access-control-entries) (voci di controllo di accesso). Le singole voci ACE in un ACL sono numerate da 0 a *n-1*, dove *n* è il numero di voci ACE nell'ACL. Quando si modifica un ACL, un'applicazione fa riferimento a una voce di controllo di accesso (ACE) nell'ACL in base al relativo indice.

Sono disponibili due tipi di ACL:

- Discrezionale

- Sistema

Un ACL discrezionale è controllato dal proprietario di un oggetto o da chiunque abbia concesso l'accesso WRITE_DAC all'oggetto. Specifica l'accesso a utenti e gruppi specifici che possono disporre di un oggetto. Il proprietario di un file, ad esempio, può utilizzare un ACL discrezionale per controllare quali utenti e gruppi possono e non possono accedere al file.

Un oggetto può inoltre disporre di informazioni di sicurezza a livello di sistema associate, sotto forma di un ACL di sistema controllato da un amministratore di sistema. Un ACL di sistema può consentire all'amministratore di sistema di controllare eventuali tentativi di accesso a un oggetto.

Per ulteriori informazioni, vedere la discussione [ACL](/windows/desktop/SecAuthZ/access-control-lists) nella Windows SDK.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="caccessmaskarray"></a>  CAcl::CAccessMaskArray

Matrice di oggetti ACCESS_MASK.

```
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```

### <a name="remarks"></a>Note

Questo typedef specifica il tipo di matrice che può essere usato per archiviare i diritti di accesso usati nelle voci di controllo di accesso (ACE).

##  <a name="caceflagarray"></a>  CAcl::CAceFlagArray

Matrice di byte.

```
typedef CAtlArray<BYTE> CAceFlagArray;
```

### <a name="remarks"></a>Note

Questo typedef specifica il tipo di matrice usato per definire i flag di controllo specifici del tipo ACE (Access-Control Entry). Per l'elenco completo dei flag possibili, vedere la definizione di [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-ace_header) .

##  <a name="cacetypearray"></a>CAcl:: CAceTypeArray

Matrice di byte.

```
typedef CAtlArray<BYTE> CAceTypeArray;
```

### <a name="remarks"></a>Note

Questo typedef specifica il tipo di matrice usato per definire la natura degli oggetti ACE (Access-Control Entry), ad esempio ACCESS_ALLOWED_ACE_TYPE o ACCESS_DENIED_ACE_TYPE. Per l'elenco completo dei tipi possibili, vedere la definizione di [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-ace_header) .

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

L' `CAcl` oggetto può essere creato facoltativamente utilizzando un oggetto `CAcl` esistente.

##  <a name="dtor"></a>CAcl:: ~ CAcl

Distruttore.

```
virtual ~CAcl() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera tutte le risorse acquisite dall'oggetto.

##  <a name="getacecount"></a>  CAcl::GetAceCount

Restituisce il numero di oggetti ACE (Access-Control Entry).

```
virtual UINT GetAceCount() const throw() = 0;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci ACE presenti nell' `CAcl` oggetto.

##  <a name="getaclentries"></a>CAcl:: GetAclEntries

Recupera le voci dell'elenco di controllo di accesso (ACL) `CAcl` dall'oggetto.

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

### <a name="remarks"></a>Note

Questo metodo compila i parametri della matrice con i dettagli di ogni oggetto ACE contenuto nell' `CAcl` oggetto. Utilizzare NULL se i dettagli per la matrice specifica non sono obbligatori.

Il contenuto di ogni matrice corrisponde, ovvero, il primo elemento della `CAccessMaskArray` matrice corrisponde al primo elemento `CSidArray` della matrice e così via.

Per altri dettagli sui tipi e sui flag ACE, vedere [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-ace_header) .

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
Tipo di oggetto. Questo valore verrà impostato su GUID_NULL se il tipo di oggetto non è specificato nella voce ACE o se la voce ACE non è una voce ACE di oggetti.

*pInheritedObjectType*<br/>
Tipo di oggetto ereditato. Questo valore verrà impostato su GUID_NULL se il tipo di oggetto ereditato non è specificato nella voce ACE o se la voce ACE non è un oggetto ACE.

### <a name="remarks"></a>Note

Questo metodo consente di recuperare tutte le informazioni relative a una singola voce ACE, fornendo più informazioni rispetto a quelle disponibili solo in [CAcl:: GetAclEntries](#getaclentries) .

Per altri dettagli sui tipi e sui flag ACE, vedere [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-ace_header) .

##  <a name="getlength"></a>CAcl:: GetLength

Restituisce la lunghezza dell'elenco di controllo di accesso (ACL).

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la lunghezza in byte necessaria per mantenere la `ACL` struttura.

##  <a name="getpacl"></a>  CAcl::GetPACL

Restituisce un puntatore a un elenco di controllo di accesso (ACL).

```
const ACL* GetPACL() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla `ACL` struttura.

##  <a name="isempty"></a>CAcl:: IsEmpty

Verifica l' `CAcl` oggetto per le voci.

```
bool IsEmpty() const throw();
```

### <a name="remarks"></a>Note

Restituisce true se l' `CAcl` oggetto non è null e non contiene voci. Restituisce false se l' `CAcl` oggetto è null o contiene almeno una voce.

##  <a name="isnull"></a>CAcl:: IsNull

Restituisce lo stato dell' `CAcl` oggetto.

```
bool IsNull() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se l' `CAcl` oggetto è null; in caso contrario, false.

##  <a name="operator_const_acl__star"></a>CAcl:: operator const ACL *

Esegue il cast `CAcl` di un oggetto `ACL` in una struttura (elenco di controllo di accesso).

```
operator const ACL *() const throw(...);
```

### <a name="remarks"></a>Note

Restituisce l'indirizzo della `ACL` struttura.

##  <a name="operator_eq"></a>CAcl:: operator =

Operatore di assegnazione.

```
CAcl& operator= (const CAcl& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`CAcl` Da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto aggiornato `CAcl` .

##  <a name="removeace"></a>  CAcl::RemoveAce

Rimuove una voce ACE (Access-Control Entry) specifica dall' `CAcl` oggetto.

```
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACE da rimuovere.

### <a name="remarks"></a>Note

Questo metodo è derivato da [CAtlArray:: RemoveAt](../../atl/reference/catlarray-class.md#removeat).

##  <a name="removeaces"></a>  CAcl::RemoveAces

Rimuove le voci di controllo di accesso (ACE) dell' `CAcl` oggetto che si applicano `CSid`all'oggetto specificato.

```
bool RemoveAces(const CSid& rSid) throw(...)
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Riferimento a un oggetto `CSid`.

##  <a name="setempty"></a>CAcl:: seempty

Contrassegna l' `CAcl` oggetto come vuoto.

```
void SetEmpty() throw();
```

### <a name="remarks"></a>Note

`CAcl` Può essere impostato su Empty o su null: i due Stati sono distinti.

##  <a name="setnull"></a>CAcl:: null

Contrassegna l' `CAcl` oggetto come null.

```
void SetNull() throw();
```

### <a name="remarks"></a>Note

`CAcl` Può essere impostato su Empty o su null: i due Stati sono distinti.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
