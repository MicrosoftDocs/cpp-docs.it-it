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
ms.openlocfilehash: 713e78635fe261615a82ab518cdb2c68ac0eeed4
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747734"
---
# <a name="cdacl-class"></a>Classe CDacl

Questa classe è un wrapper per una struttura DACL (elenco di controllo di accesso discrezionale).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CDacl : public CAcl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDacl::CDacl](#cdacl)|Costruttore.|
|[CDacl::](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDacl::AddAllowedAce](#addallowedace)|Aggiunge una voce ACE consentita (voce di controllo di accesso) all'oggetto. `CDacl`|
|[CDacl::AddDeniedAce](#adddeniedace)|Aggiunge una voce `CDacl` ACE negata all'oggetto.|
|[CDacl::GetAceCount](#getacecount)|Restituisce il numero di voci ACE (voci di `CDacl` controllo di accesso) nell'oggetto.|
|[CDacl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce `CDacl` di controllo di accesso) dall'oggetto.|
|[CDacl::RemoveAllAces](#removeallaces)|Rimuove tutte le voci di controllo `CDacl` di accesso contenute nell'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDacl::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

Il descrittore di sicurezza di un oggetto può contenere un elenco DACL. Un elenco DACL contiene zero o più voci ACE (voci di controllo di accesso) che identificano gli utenti e i gruppi che possono accedere all'oggetto. Se un elenco DACL è vuoto, ovvero contiene zero voci di controllo di accesso, non viene concesso alcun accesso in modo esplicito, pertanto l'accesso viene negato in modo implicito. Tuttavia, se il descrittore di protezione di un oggetto non dispone di un elenco DACL, l'oggetto non è protetto e tutti dispongono dell'accesso completo.

Per recuperare l'elenco DACL di un oggetto, è necessario essere il proprietario dell'oggetto o disporre READ_CONTROL l'accesso all'oggetto. Per modificare l'elenco DACL di un oggetto, è necessario disporre WRITE_DAC accesso all'oggetto.

Utilizzare i metodi della classe forniti per creare, aggiungere, `CDacl` rimuovere ed eliminare voci di controllo di accesso dall'oggetto. Vedere anche [AtlGetDacl](security-global-functions.md#atlgetdacl) e [AtlSetDacl](security-global-functions.md#atlsetdacl).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAcl](../../atl/reference/cacl-class.md)

`CDacl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="cdacladdallowedace"></a><a name="addallowedace"></a>CDacl::AddAllowedAce

Aggiunge una voce ACE consentita (voce di controllo di accesso) all'oggetto. `CDacl`

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

*rSid (in seguito al numero di*<br/>
Oggetto [CSid.](../../atl/reference/csid-class.md)

*Accessmask*<br/>
Specifica la maschera dei diritti di accesso `CSid` da consentire per l'oggetto specificato.

*Bandiere Ace*<br/>
Set di flag di bit che controllano l'ereditarietà ACE.

*pObjectType (tipo di oggetto)*<br/>
Tipo dell'oggetto.

*pInheritedObjectType (oggetto PEreditatoOggettoType)*<br/>
Tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la `CDacl` voce ACE viene aggiunta all'oggetto, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Un `CDacl` oggetto contiene zero o più voci ACE (voci di controllo di accesso) che identificano gli utenti e i gruppi che possono accedere all'oggetto. Questo metodo aggiunge una voce `CDacl` ACE che consente l'accesso all'oggetto.

Vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) per una descrizione dei vari flag `AceFlags` che possono essere impostati nel parametro.

## <a name="cdacladddeniedace"></a><a name="adddeniedace"></a>CDacl::AddDeniedAce

Aggiunge una voce ACE negata `CDacl` (voce di controllo di accesso) all'oggetto.

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

*rSid (in seguito al numero di*<br/>
Oggetto `CSid` .

*Accessmask*<br/>
Specifica la maschera dei diritti di accesso `CSid` da negare per l'oggetto specificato.

*Bandiere Ace*<br/>
Set di flag di bit che controllano l'ereditarietà ACE. Il valore predefinito è 0 nella prima forma del metodo.

*pObjectType (tipo di oggetto)*<br/>
Tipo dell'oggetto.

*pInheritedObjectType (oggetto PEreditatoOggettoType)*<br/>
Tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la `CDacl` voce ACE viene aggiunta all'oggetto, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Un `CDacl` oggetto contiene zero o più voci ACE (voci di controllo di accesso) che identificano gli utenti e i gruppi che possono accedere all'oggetto. Questo metodo aggiunge una voce ACE `CDacl` che nega l'accesso all'oggetto.

Vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) per una descrizione dei vari flag `AceFlags` che possono essere impostati nel parametro.

## <a name="cdaclcdacl"></a><a name="cdacl"></a>CDacl::CDacl

Costruttore.

```
CDacl (const ACL& rhs) throw(...);
CDacl () throw();
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Struttura `ACL` esistente (elenco di controllo di accesso).

### <a name="remarks"></a>Osservazioni

L'oggetto `CDacl` può essere creato `ACL` facoltativamente utilizzando una struttura esistente. È importante notare che solo un DACL (elenco di controllo di accesso discrezionale) e non un SACL (elenco di controllo di accesso di sistema) deve essere passato come questo parametro. Nelle build di debug, il passaggio di un SACL causerà un ASSERT. Nelle build di rilascio, il passaggio di un SACL causerà l'ignoramento delle voci ACE (voci di controllo di accesso) nell'ACL e non si verificherà alcun errore.

## <a name="cdaclcdacl"></a><a name="dtor"></a>CDacl::

Distruttore.

```
~CDacl () throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse acquisite dall'oggetto, incluse tutte le voci ACE (voci di controllo di accesso) tramite [CDacl::RemoveAllAces](#removeallaces).

## <a name="cdaclgetacecount"></a><a name="getacecount"></a>CDacl::GetAceCount

Restituisce il numero di voci ACE (voci di `CDacl` controllo di accesso) nell'oggetto.

```
UINT GetAceCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci `CDacl` DI controllo di accesso contenute nell'oggetto.

## <a name="cdacloperator-"></a><a name="operator_eq"></a>CDacl::operatore

Operatore di assegnazione.

```
CDacl& operator= (const ACL& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
ACL (elenco di controllo di accesso) da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento `CDacl` all'oggetto aggiornato.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi di passare solo un DACL (elenco di controllo di accesso discrezionale) a questa funzione. Il passaggio di un SACL (elenco di controllo di accesso di sistema) a questa funzione causerà un ASSERT nelle build di debug, ma non causerà alcun errore nelle build di rilascio.

## <a name="cdaclremoveace"></a><a name="removeace"></a>CDacl::RemoveAce

Rimuove una voce ACE specifica (voce `CDacl` di controllo di accesso) dall'oggetto.

```cpp
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACE da rimuovere.

### <a name="remarks"></a>Osservazioni

Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="cdaclremoveallaces"></a><a name="removeallaces"></a>CDacl::RemoveAllAces

Rimuove tutte le voci ACE (voci di controllo di `CDacl` accesso) contenute nell'oggetto.

```cpp
void RemoveAllAces() throw();
```

### <a name="remarks"></a>Osservazioni

Rimuove `ACE` ogni struttura (voce di controllo di `CDacl` accesso) (se presente) nell'oggetto.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Classe CAcl](../../atl/reference/cacl-class.md)<br/>
[ACL](/windows/win32/SecAuthZ/access-control-lists)<br/>
[Assi](/windows/win32/SecAuthZ/access-control-entries)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
