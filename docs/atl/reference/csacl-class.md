---
description: 'Altre informazioni su: classe CSacl'
title: Classe CSacl
ms.date: 11/04/2016
f1_keywords:
- CSacl
- ATLSECURITY/ATL::CSacl
- ATLSECURITY/ATL::CSacl::CSacl
- ATLSECURITY/ATL::CSacl::AddAuditAce
- ATLSECURITY/ATL::CSacl::GetAceCount
- ATLSECURITY/ATL::CSacl::RemoveAce
- ATLSECURITY/ATL::CSacl::RemoveAllAces
helpviewer_keywords:
- CSacl class
ms.assetid: 8624889b-aebc-4183-9d29-a20f07837f05
ms.openlocfilehash: 504276d22da963b9e8ec407e88ca73d63dd71541
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140855"
---
# <a name="csacl-class"></a>Classe CSacl

Questa classe è un wrapper per una struttura SACL (elenco di controllo di accesso di sistema).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSacl : public CAcl
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSacl:: CSacl](#csacl)|Costruttore.|
|[CSacl:: ~ CSacl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSacl:: AddAuditAce](#addauditace)|Aggiunge una voce di controllo di accesso (ACE) di controllo all' `CSacl` oggetto.|
|[CSacl:: GetAceCount](#getacecount)|Restituisce il numero di voci di controllo di accesso (ACE) nell' `CSacl` oggetto.|
|[CSacl:: RemoveAce](#removeace)|Rimuove una voce ACE (Access-Control Entry) specifica dall' `CSacl` oggetto.|
|[CSacl:: RemoveAllAces](#removeallaces)|Rimuove tutte le voci ACE contenute nell' `CSacl` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CSacl:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Commenti

Un SACL contiene voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di protezione di un controller di dominio. Si noti che un SACL genera voci di log solo sul controller di dominio in cui si è verificato il tentativo di accesso, non su tutti i controller di dominio che contengono una replica dell'oggetto.

Per impostare o recuperare il SACL nel descrittore di sicurezza di un oggetto, il privilegio di SE_SECURITY_NAME deve essere abilitato nel token di accesso del thread richiedente. Il gruppo Administrators dispone di questo privilegio concesso per impostazione predefinita e può essere concesso ad altri utenti o gruppi. La concessione del privilegio non è sufficiente: prima che sia possibile eseguire l'operazione definita dal privilegio, il privilegio deve essere abilitato nel token di accesso di sicurezza per rendere effettiva la richiesta. Il modello consente di abilitare i privilegi solo per operazioni di sistema specifiche e quindi disabilitato quando non sono più necessari. Per esempi relativi all'abilitazione di SE_SECURITY_NAME, vedere [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl) .

Usare i metodi della classe forniti per aggiungere, rimuovere, creare ed eliminare voci ACE dall' `SACL` oggetto. Vedere anche [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAcl](../../atl/reference/cacl-class.md)

`CSacl`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="csacladdauditace"></a><a name="addauditace"></a> CSacl:: AddAuditAce

Aggiunge una voce di controllo di accesso (ACE) di controllo all' `CSacl` oggetto.

```
bool AddAuditAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    bool bSuccess,
    bool bFailure,
    BYTE AceFlags = 0) throw(...);

bool AddAuditAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    bool bSuccess,
    bool bFailure,
    BYTE AceFlags,
    const GUID* pObjectType,
    const GUID* pInheritedObjectType) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) .

*AccessMask*<br/>
Specifica la maschera dei diritti di accesso da controllare per l'oggetto specificato `CSid` .

*bSuccess*<br/>
Specifica se devono essere controllati i tentativi di accesso consentiti. Impostare questo flag su true per abilitare il controllo; in caso contrario, impostarlo su false.

*bFailure*<br/>
Specifica se devono essere controllati i tentativi di accesso negato. Impostare questo flag su true per abilitare il controllo; in caso contrario, impostarlo su false.

*AceFlags*<br/>
Set di flag di bit che controllano l'ereditarietà ACE.

*pObjectType*<br/>
Tipo di oggetto.

*pInheritedObjectType*<br/>
Tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la voce ACE viene aggiunta all' `CSacl` oggetto, false in caso di errore.

### <a name="remarks"></a>Commenti

Un `CSacl` oggetto contiene le voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di sicurezza. Questo metodo aggiunge tale voce ACE all' `CSacl` oggetto.

Per una descrizione dei diversi flag che è possibile impostare nel parametro *AceFlags* , vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) .

## <a name="csaclcsacl"></a><a name="csacl"></a> CSacl:: CSacl

Costruttore.

```
CSacl() throw();
CSacl(const ACL& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Struttura esistente `ACL` (elenco di controllo di accesso).

### <a name="remarks"></a>Commenti

L' `CSacl` oggetto può essere creato facoltativamente utilizzando una `ACL` struttura esistente. Assicurarsi che questo parametro sia un elenco di controllo di accesso di sistema (SACL) e non un elenco di controllo di accesso discrezionale (DACL). Nelle compilazioni di debug, se viene fornito un DACL, si verificherà un'asserzione. Nelle compilazioni di rilascio qualsiasi voce di un DACL viene ignorata.

## <a name="csaclcsacl"></a><a name="dtor"></a> CSacl:: ~ CSacl

Distruttore.

```
~CSacl() throw();
```

### <a name="remarks"></a>Commenti

Il distruttore libera tutte le risorse acquisite dall'oggetto, incluse tutte le voci di controllo di accesso (ACE).

## <a name="csaclgetacecount"></a><a name="getacecount"></a> CSacl:: GetAceCount

Restituisce il numero di voci di controllo di accesso (ACE) nell' `CSacl` oggetto.

```
UINT GetAceCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci ACE contenute nell' `CSacl` oggetto.

## <a name="csacloperator-"></a><a name="operator_eq"></a> CSacl:: operator =

Operatore di assegnazione.

```
CSacl& operator=(const ACL& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
L' `ACL` elenco di controllo di accesso da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto aggiornato `CSacl` . Verificare che il `ACL` parametro sia in realtà un elenco di controllo di accesso di sistema (SACL) e non un elenco di controllo di accesso discrezionale (DACL). Nelle compilazioni di debug si verificherà un'asserzione e nelle build di rilascio il `ACL` parametro verrà ignorato.

## <a name="csaclremoveace"></a><a name="removeace"></a> CSacl:: RemoveAce

Rimuove una voce ACE (Access-Control Entry) specifica dall' `CSacl` oggetto.

```cpp
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACE da rimuovere.

### <a name="remarks"></a>Commenti

Questo metodo è derivato da [CAtlArray:: RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="csaclremoveallaces"></a><a name="removeallaces"></a> CSacl:: RemoveAllAces

Rimuove tutte le voci di controllo di accesso (ACE) contenute nell' `CSacl` oggetto.

```cpp
void RemoveAllAces() throw();
```

### <a name="remarks"></a>Commenti

Rimuove tutte `ACE` le eventuali strutture presenti nell' `CSacl` oggetto.

## <a name="see-also"></a>Vedi anche

[Classe CAcl](../../atl/reference/cacl-class.md)<br/>
[ACL](/windows/win32/SecAuthZ/access-control-lists)<br/>
[Assi](/windows/win32/SecAuthZ/access-control-entries)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
