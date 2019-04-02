---
title: Classe CDacl
ms.date: 11/04/2016
f1_keywords:
- CDacl
- ATLSECURITY/ATL::CDacl
- ATLSECURITY/ATL::CDacl::CDacl
- ATLSECURITY/ATL::CDacl::AddAllowedAce
- ATLSECURITY/ATL::CDacl::AddDeniedAce
- ATLSECURITY/ATL::CDacl::GetAceCount
- ATLSECURITY/ATL::CDacl::RemoveAce
- ATLSECURITY/ATL::CDacl::RemoveAllAces
helpviewer_keywords:
- CDacl class
ms.assetid: 2dc76616-6362-4967-b6cf-e2d39ca37ddd
ms.openlocfilehash: 1beac6106b825c775012b85ccd01226c3dfab795
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58770019"
---
# <a name="cdacl-class"></a>Classe CDacl

Questa classe è un wrapper per una struttura DACL (elenco di controllo di accesso discrezionali).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CDacl : public CAcl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDacl::CDacl](#cdacl)|Costruttore.|
|[CDacl::~CDacl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDacl::AddAllowedAce](#addallowedace)|Aggiunge una voce ACE consentita (voce di controllo di accesso) per il `CDacl` oggetto.|
|[CDacl::AddDeniedAce](#adddeniedace)|Aggiunge una voce ACE autorizzazioni negata il `CDacl` oggetto.|
|[CDacl::GetAceCount](#getacecount)|Restituisce il numero di voci ACE (voce di controllo di accesso) nel `CDacl` oggetto.|
|[CDacl::RemoveAce](#removeace)|Rimuove una specifica voce ACE (voce di controllo di accesso) di `CDacl` oggetto.|
|[CDacl::RemoveAllAces](#removeallaces)|Rimuove tutte le voci ACE contenute nel `CDacl` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDacl::operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

Descrittore di sicurezza di un oggetto può contenere un DACL. Un DACL contiene zero o più voci ACE (voce di controllo di accesso) che identificano gli utenti e gruppi di utenti che possono accedere all'oggetto. Se un DACL è vuoto (ovvero, contiene zero ACE), non consentire l'accesso in modo esplicito viene concessa, in modo che l'accesso è negato in modo implicito. Tuttavia, se il descrittore di sicurezza di un oggetto non ha un DACL, l'oggetto non è protetto e tutti gli utenti con accesso completo.

Per recuperare l'elenco DACL di un oggetto, è necessario essere il proprietario dell'oggetto o avere accesso READ_CONTROL all'oggetto. Per modificare l'elenco DACL di un oggetto, è necessario disporre dell'accesso WRITE_DAC per l'oggetto.

Utilizzare i metodi di classe forniti per creare, aggiungere, rimuovere ed eliminare le voci ACE dal `CDacl` oggetto. Vedere anche [AtlGetDacl](security-global-functions.md#atlgetdacl) e [AtlSetDacl](security-global-functions.md#atlsetdacl).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAcl](../../atl/reference/cacl-class.md)

`CDacl`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="addallowedace"></a>  CDacl::AddAllowedAce

Aggiunge una voce ACE consentita (voce di controllo di accesso) per il `CDacl` oggetto.

```
bool AddAllowedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags = 0) throw(...);

bool AddAllowedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags,
    const GUID* pObjectType,
    const GUID* pInheritedObjectType) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto [IDSR](../../atl/reference/csid-class.md) oggetto.

*AccessMask*<br/>
Specifica la maschera di diritti di accesso deve essere autorizzato per l'oggetto specificato `CSid` oggetto.

*AceFlags*<br/>
Un set di flag di bit che controllano l'ereditarietà di voce ACE.

*pObjectType*<br/>
Tipo di oggetto.

*pInheritedObjectType*<br/>
Il tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la voce ACE viene aggiunto al `CDacl` dell'oggetto, FALSE in caso di errore.

### <a name="remarks"></a>Note

Oggetto `CDacl` oggetto contiene zero o più voci ACE (voce di controllo di accesso) che identificano gli utenti e gruppi di utenti che possono accedere all'oggetto. Questo metodo aggiunge una voce ACE che consenta l'accesso per il `CDacl` oggetto.

Visualizzare [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-_ace_header) per una descrizione dei vari flag che possono essere impostati nel `AceFlags` parametro.

##  <a name="adddeniedace"></a>  CDacl::AddDeniedAce

Aggiunge una voce ACE autorizzazioni negata (voce di controllo di accesso) per il `CDacl` oggetto.

```
bool AddDeniedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags = 0) throw(...);

bool AddDeniedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags,
    const GUID* pObjectType,
    const GUID* pInheritedObjectType) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto `CSid`.

*AccessMask*<br/>
Specifica la maschera di diritti di accesso a cui viene negato per l'oggetto specificato `CSid` oggetto.

*AceFlags*<br/>
Un set di flag di bit che controllano l'ereditarietà di voce ACE. Il valore predefinito è 0 nel primo form del metodo.

*pObjectType*<br/>
Tipo di oggetto.

*pInheritedObjectType*<br/>
Il tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la voce ACE viene aggiunto al `CDacl` dell'oggetto, FALSE in caso di errore.

### <a name="remarks"></a>Note

Oggetto `CDacl` oggetto contiene zero o più voci ACE (voce di controllo di accesso) che identificano gli utenti e gruppi di utenti che possono accedere all'oggetto. Questo metodo aggiunge una voce ACE che nega l'accesso di `CDacl` oggetto.

Visualizzare [ACE_HEADER](/windows/desktop/api/winnt/ns-winnt-_ace_header) per una descrizione dei vari flag che possono essere impostati nel `AceFlags` parametro.

##  <a name="cdacl"></a>  CDacl::CDacl

Costruttore.

```
CDacl (const ACL& rhs) throw(...);
CDacl () throw();
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Un oggetto esistente `ACL` struttura (elenco di controllo di accesso).

### <a name="remarks"></a>Note

Il `CDacl` oggetto può essere creato facoltativamente usando un oggetto esistente `ACL` struttura. È importante notare che solo un DACL (elenco di controllo di accesso discrezionali), e non un SACL (elenco di controllo di accesso di sistema,) deve essere passato come parametro. Nelle build di debug, il passaggio di un SACL causerà un'ASSERZIONE. Nelle build di rilascio, passando un SACL causerà le voci ACE (voce di controllo di accesso) nell'elenco ACL viene ignorato e non verrà generato alcun errore.

##  <a name="dtor"></a>  CDacl::~CDacl

Distruttore.

```
~CDacl () throw();
```

### <a name="remarks"></a>Note

Il distruttore libera eventuali risorse ottenute dall'oggetto, incluse tutte le voci ACE (voce di controllo di accesso) usando [CDacl::RemoveAllAces](#removeallaces).

##  <a name="getacecount"></a>  CDacl::GetAceCount

Restituisce il numero di voci ACE (voce di controllo di accesso) nel `CDacl` oggetto.

```
UINT GetAceCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci ACE contenuti nel `CDacl` oggetto.

##  <a name="operator_eq"></a>  CDacl::operator =

Operatore di assegnazione.

```
CDacl& operator= (const ACL& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
L'ACL (elenco di controllo di accesso) da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento aggiornato `CDacl` oggetto.

### <a name="remarks"></a>Note

È necessario assicurarsi che un DACL (elenco di controllo di accesso discrezionale) è passare solo a questa funzione. Il passaggio di un SACL (elenco di controllo di accesso di sistema) a questa funzione causerà un'ASSERZIONE nelle build di debug ma non verrà generato alcun errore nelle build di rilascio.

##  <a name="removeace"></a>  CDacl::RemoveAce

Rimuove una specifica voce ACE (voce di controllo di accesso) di `CDacl` oggetto.

```
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice per la voce ACE da rimuovere.

### <a name="remarks"></a>Note

Questo metodo è derivato dalla [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

##  <a name="removeallaces"></a>  CDacl::RemoveAllAces

Rimuove tutte le voci ACE (voce di controllo di accesso) contenute nel `CDacl` oggetto.

```
void RemoveAllAces() throw();
```

### <a name="remarks"></a>Note

Rimuove ogni `ACE` struttura (voce di controllo di accesso) (se presente) nel `CDacl` oggetto.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Classe CAcl](../../atl/reference/cacl-class.md)<br/>
[ACL](/windows/desktop/SecAuthZ/access-control-lists)<br/>
[Voci ACE](/windows/desktop/SecAuthZ/access-control-entries)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
