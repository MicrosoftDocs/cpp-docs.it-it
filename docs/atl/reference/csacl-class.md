---
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
ms.openlocfilehash: 72b5c9fee3868286f9e4a0917f46aeb732349c62
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330996"
---
# <a name="csacl-class"></a>Classe CSacl

Questa classe è un wrapper per una struttura SACL (elenco di controllo di accesso di sistema).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSacl : public CAcl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSacl::CSacl](#csacl)|Costruttore.|
|[CSacl:: CSacl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSacl::AddAuditAce](#addauditace)|Aggiunge una voce di controllo di `CSacl` accesso di controllo di controllo (ACE) all'oggetto.|
|[CSacl::GetAceCount](#getacecount)|Restituisce il numero di voci di controllo di `CSacl` accesso (ACE) nell'oggetto.|
|[CSacl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce `CSacl` di controllo di accesso) dall'oggetto.|
|[CSacl::RemoveAllAces](#removeallaces)|Rimuove tutte le voci di controllo `CSacl` di accesso contenute nell'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSacl::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

Un SACL contiene voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di protezione di un controller di dominio. Si noti che un SACL genera voci di registro solo nel controller di dominio in cui si è verificato il tentativo di accesso, non in ogni controller di dominio che contiene una replica dell'oggetto.

Per impostare o recuperare l'elenco SACL nel descrittore di sicurezza di un oggetto, il privilegio SE_SECURITY_NAME deve essere abilitato nel token di accesso del thread richiedente. Il gruppo Administrators dispone di questo privilegio concesso per impostazione predefinita e può essere concesso ad altri utenti o gruppi. La disponibilità del privilegio non è tutto ciò che è necessario: prima di poter eseguire l'operazione definita dal privilegio, il privilegio deve essere abilitato nel token di accesso di sicurezza per avere effetto. Il modello consente di abilitare i privilegi solo per operazioni di sistema specifiche e quindi disabilitarli quando non sono più necessari. Vedere [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl) per esempi di abilitazione di SE_SECURITY_NAME.

Utilizzare i metodi della classe forniti per aggiungere, rimuovere, `SACL` creare ed eliminare voci di controllo di accesso dall'oggetto. Vedere anche [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl).

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAcl](../../atl/reference/cacl-class.md)

`CSacl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="csacladdauditace"></a><a name="addauditace"></a>CSacl::AddAuditAce

Aggiunge una voce di controllo di `CSacl` accesso di controllo di controllo (ACE) all'oggetto.

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

*rSid (in seguito al numero di*<br/>
Oggetto [CSid.](../../atl/reference/csid-class.md)

*Accessmask*<br/>
Specifica la maschera dei diritti di accesso `CSid` da controllare per l'oggetto specificato.

*bSuccesso*<br/>
Specifica se i tentativi di accesso consentiti devono essere controllati. Impostare questo flag su true per abilitare il controllo; in caso contrario, impostarlo su false.

*bErrore*<br/>
Specifica se i tentativi di accesso negato devono essere controllati. Impostare questo flag su true per abilitare il controllo; in caso contrario, impostarlo su false.

*Bandiere Ace*<br/>
Set di flag di bit che controllano l'ereditarietà ACE.

*pObjectType (tipo di oggetto)*<br/>
Tipo dell'oggetto.

*pInheritedObjectType (oggetto PEreditatoOggettoType)*<br/>
Tipo di oggetto ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la `CSacl` voce ACE viene aggiunta all'oggetto, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Un `CSacl` oggetto contiene voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di protezione. Questo metodo aggiunge tale `CSacl` ACE all'oggetto.

Vedere [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) per una descrizione dei vari flag che possono essere impostati nel parametro *AceFlags.*

## <a name="csaclcsacl"></a><a name="csacl"></a>CSacl::CSacl

Costruttore.

```
CSacl() throw();
CSacl(const ACL& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Struttura `ACL` esistente (elenco di controllo di accesso).

### <a name="remarks"></a>Osservazioni

L'oggetto `CSacl` può essere creato `ACL` facoltativamente utilizzando una struttura esistente. Assicurarsi che questo parametro sia un elenco di controllo di accesso di sistema (SACL) e non un elenco di controllo di accesso discrezionale (DACL). Nelle build di debug, se viene fornito un daCL si verificherà un'asserzione. Nelle build di rilascio tutte le voci di un elenco DACL vengono ignorate.

## <a name="csaclcsacl"></a><a name="dtor"></a>CSacl:: CSacl

Distruttore.

```
~CSacl() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse acquisite dall'oggetto, incluse tutte le voci di controllo di accesso (ACE).

## <a name="csaclgetacecount"></a><a name="getacecount"></a>CSacl::GetAceCount

Restituisce il numero di voci di controllo di `CSacl` accesso (ACE) nell'oggetto.

```
UINT GetAceCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci `CSacl` DI controllo di accesso contenute nell'oggetto.

## <a name="csacloperator-"></a><a name="operator_eq"></a>CSacl::operatore

Operatore di assegnazione.

```
CSacl& operator=(const ACL& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Elenco `ACL` (elenco di controllo di accesso) da assegnare all'oggetto esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento `CSacl` all'oggetto aggiornato. Assicurarsi `ACL` che il parametro sia effettivamente un elenco di controllo di accesso di sistema (SACL) e non un elenco di controllo di accesso discrezionale (DACL). Nelle build di debug si verificherà un'asserzione e nelle build di rilascio il `ACL` parametro verrà ignorato.

## <a name="csaclremoveace"></a><a name="removeace"></a>CSacl::RemoveAce

Rimuove una voce ACE specifica (voce `CSacl` di controllo di accesso) dall'oggetto.

```
void RemoveAce(UINT nIndex) throw();
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della voce ACE da rimuovere.

### <a name="remarks"></a>Osservazioni

Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="csaclremoveallaces"></a><a name="removeallaces"></a>CSacl::RemoveAllAces

Rimuove tutte le voci di controllo di accesso (ACE) contenute nell'oggetto. `CSacl`

```
void RemoveAllAces() throw();
```

### <a name="remarks"></a>Osservazioni

Rimuove `ACE` ogni struttura (se `CSacl` presente) nell'oggetto.

## <a name="see-also"></a>Vedere anche

[Classe CAcl](../../atl/reference/cacl-class.md)<br/>
[ACL](/windows/win32/SecAuthZ/access-control-lists)<br/>
[Assi](/windows/win32/SecAuthZ/access-control-entries)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
