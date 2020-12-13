---
description: 'Altre informazioni su: classe CDacl'
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
ms.openlocfilehash: 0f071cbf426fe9cf89752defa19ff7f212e142d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141999"
---
# <a name="cdacl-class"></a>Classe CDacl

Questa classe è un wrapper per una struttura DACL (elenco di controllo di accesso discrezionale).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CDacl : public CAcl
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDacl:: CDacl](#cdacl)|Costruttore.|
|[CDacl:: ~ CDacl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDacl:: AddAllowedAce](#addallowedace)|Aggiunge una voce di controllo di accesso (ACE) consentita all' `CDacl` oggetto.|
|[CDacl:: AddDeniedAce](#adddeniedace)|Aggiunge una voce ACE negata all' `CDacl` oggetto.|
|[CDacl:: GetAceCount](#getacecount)|Restituisce il numero di voci di controllo di accesso (ACE) nell' `CDacl` oggetto.|
|[CDacl:: RemoveAce](#removeace)|Rimuove una voce ACE (Access-Control Entry) specifica dall' `CDacl` oggetto.|
|[CDacl:: RemoveAllAces](#removeallaces)|Rimuove tutte le voci ACE contenute nell' `CDacl` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CDacl:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Commenti

Il descrittore di sicurezza di un oggetto può contenere un DACL. Un DACL contiene zero o più ACE (voci di controllo di accesso) che identificano gli utenti e i gruppi che possono accedere all'oggetto. Se un DACL è vuoto (ovvero contiene zero assi), nessun accesso viene concesso in modo esplicito, quindi l'accesso viene negato in modo implicito. Tuttavia, se il descrittore di sicurezza di un oggetto non dispone di un DACL, l'oggetto non è protetto e tutti hanno accesso completo.

Per recuperare l'elenco DACL di un oggetto, è necessario essere il proprietario dell'oggetto o avere READ_CONTROL l'accesso all'oggetto. Per modificare il DACL di un oggetto, è necessario disporre dell'accesso WRITE_DAC all'oggetto.

Usare i metodi della classe forniti per creare, aggiungere, rimuovere ed eliminare voci ACE dall' `CDacl` oggetto. Vedere anche [AtlGetDacl](security-global-functions.md#atlgetdacl) e [AtlSetDacl](security-global-functions.md#atlsetdacl).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAcl](../../atl/reference/cacl-class.md)

`CDacl`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="cdacladdallowedace"></a><a name="addallowedace"></a> CDacl:: AddAllowedAce

Aggiunge una voce di controllo di accesso (ACE) consentita all' `CDacl` oggetto.

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
Oggetto [CSid](../../atl/reference/csid-class.md) .

*AccessMask*<br/>
Specifica la maschera dei diritti di accesso da consentire per l' `CSid` oggetto specificato.

*AceFlags*<br/>
Set di flag di bit che controllano l'ereditarietà ACE.

*pObjectType*<br/>
Tipo di oggetto.

*pInheritedObjectType*<br/>
Tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la voce ACE viene aggiunta all' `CDacl` oggetto, false in caso di errore.

### <a name="remarks"></a>Commenti

Un `CDacl` oggetto contiene zero o più voci di controllo di accesso (ACE) che identificano gli utenti e i gruppi che possono accedere all'oggetto. Questo metodo aggiunge una voce ACE che consente l'accesso all' `CDacl` oggetto.

Per [](/windows/win32/api/winnt/ns-winnt-ace_header) una descrizione dei diversi flag che è possibile impostare nel parametro, vedere ACE_HEADER `AceFlags` .

## <a name="cdacladddeniedace"></a><a name="adddeniedace"></a> CDacl:: AddDeniedAce

Aggiunge un ACE negato (voce di controllo di accesso) all' `CDacl` oggetto.

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
Un oggetto `CSid`.

*AccessMask*<br/>
Specifica la maschera dei diritti di accesso da negare per l' `CSid` oggetto specificato.

*AceFlags*<br/>
Set di flag di bit che controllano l'ereditarietà ACE. Il valore predefinito è 0 nella prima forma del metodo.

*pObjectType*<br/>
Tipo di oggetto.

*pInheritedObjectType*<br/>
Tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la voce ACE viene aggiunta all' `CDacl` oggetto, false in caso di errore.

### <a name="remarks"></a>Commenti

Un `CDacl` oggetto contiene zero o più voci di controllo di accesso (ACE) che identificano gli utenti e i gruppi che possono accedere all'oggetto. Questo metodo aggiunge una voce ACE che nega l'accesso all' `CDacl` oggetto.

Per [](/windows/win32/api/winnt/ns-winnt-ace_header) una descrizione dei diversi flag che è possibile impostare nel parametro, vedere ACE_HEADER `AceFlags` .

## <a name="cdaclcdacl"></a><a name="cdacl"></a> CDacl:: CDacl

Costruttore.

```
CDacl (const ACL& rhs) throw(...);
CDacl () throw();
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Struttura esistente `ACL` (elenco di controllo di accesso).

### <a name="remarks"></a>Commenti

L' `CDacl` oggetto può essere creato facoltativamente utilizzando una `ACL` struttura esistente. È importante notare che come questo parametro deve essere passato solo un DACL (elenco di controllo di accesso discrezionale) e non un SACL (elenco di controllo di accesso di sistema). Nelle build di debug, il passaggio di un SACL provocherà un'ASSERZIONe. Nelle build di rilascio, passando un SACL, le voci ACE (Access-Control Entry) nell'ACL verranno ignorate e non si verificherà alcun errore.

## <a name="cdaclcdacl"></a><a name="dtor"></a> CDacl:: ~ CDacl

Distruttore.

```
~CDacl () throw();
```

### <a name="remarks"></a>Commenti

Il distruttore libera tutte le risorse acquisite dall'oggetto, incluse tutte le voci ACE (Access-Control Entry) con [CDacl:: RemoveAllAces](#removeallaces).

## <a name="cdaclgetacecount"></a><a name="getacecount"></a> CDacl:: GetAceCount

Restituisce il numero di voci di controllo di accesso (ACE) nell' `CDacl` oggetto.

```
UINT GetAceCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci ACE contenute nell' `CDacl` oggetto.

## <a name="cdacloperator-"></a><a name="operator_eq"></a> CDacl:: operator =

Operatore di assegnazione.

```
CDacl& operator= (const ACL& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
ACL (elenco di controllo di accesso) da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto aggiornato `CDacl` .

### <a name="remarks"></a>Commenti

È necessario assicurarsi di passare solo un DACL (elenco di controllo di accesso discrezionale) a questa funzione. Il passaggio di un SACL (elenco di controllo di accesso di sistema) a questa funzione provocherà un'ASSERZIONe nelle compilazioni di debug, ma non genererà alcun errore nelle build di rilascio.

## <a name="cdaclremoveace"></a><a name="removeace"></a> CDacl:: RemoveAce

Rimuove una voce ACE (Access-Control Entry) specifica dall' `CDacl` oggetto.

```cpp
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACE da rimuovere.

### <a name="remarks"></a>Commenti

Questo metodo è derivato da [CAtlArray:: RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="cdaclremoveallaces"></a><a name="removeallaces"></a> CDacl:: RemoveAllAces

Rimuove tutte le voci di controllo di accesso contenute nell' `CDacl` oggetto.

```cpp
void RemoveAllAces() throw();
```

### <a name="remarks"></a>Commenti

Rimuove ogni eventuale `ACE` struttura (voce di controllo di accesso) presente nell' `CDacl` oggetto.

## <a name="see-also"></a>Vedi anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Classe CAcl](../../atl/reference/cacl-class.md)<br/>
[ACL](/windows/win32/SecAuthZ/access-control-lists)<br/>
[Assi](/windows/win32/SecAuthZ/access-control-entries)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
