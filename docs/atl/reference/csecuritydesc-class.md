---
title: Classe CSecurityDesc
ms.date: 11/04/2016
f1_keywords:
- CSecurityDesc
- ATLSECURITY/ATL::CSecurityDesc
- ATLSECURITY/ATL::CSecurityDesc::CSecurityDesc
- ATLSECURITY/ATL::CSecurityDesc::FromString
- ATLSECURITY/ATL::CSecurityDesc::GetControl
- ATLSECURITY/ATL::CSecurityDesc::GetDacl
- ATLSECURITY/ATL::CSecurityDesc::GetGroup
- ATLSECURITY/ATL::CSecurityDesc::GetOwner
- ATLSECURITY/ATL::CSecurityDesc::GetPSECURITY_DESCRIPTOR
- ATLSECURITY/ATL::CSecurityDesc::GetSacl
- ATLSECURITY/ATL::CSecurityDesc::IsDaclAutoInherited
- ATLSECURITY/ATL::CSecurityDesc::IsDaclDefaulted
- ATLSECURITY/ATL::CSecurityDesc::IsDaclPresent
- ATLSECURITY/ATL::CSecurityDesc::IsDaclProtected
- ATLSECURITY/ATL::CSecurityDesc::IsGroupDefaulted
- ATLSECURITY/ATL::CSecurityDesc::IsOwnerDefaulted
- ATLSECURITY/ATL::CSecurityDesc::IsSaclAutoInherited
- ATLSECURITY/ATL::CSecurityDesc::IsSaclDefaulted
- ATLSECURITY/ATL::CSecurityDesc::IsSaclPresent
- ATLSECURITY/ATL::CSecurityDesc::IsSaclProtected
- ATLSECURITY/ATL::CSecurityDesc::IsSelfRelative
- ATLSECURITY/ATL::CSecurityDesc::MakeAbsolute
- ATLSECURITY/ATL::CSecurityDesc::MakeSelfRelative
- ATLSECURITY/ATL::CSecurityDesc::SetControl
- ATLSECURITY/ATL::CSecurityDesc::SetDacl
- ATLSECURITY/ATL::CSecurityDesc::SetGroup
- ATLSECURITY/ATL::CSecurityDesc::SetOwner
- ATLSECURITY/ATL::CSecurityDesc::SetSacl
- ATLSECURITY/ATL::CSecurityDesc::ToString
helpviewer_keywords:
- CSecurityDesc class
ms.assetid: 3767a327-378f-4690-ba40-4d9f6a1f5ee4
ms.openlocfilehash: 926e4e0a795982479188d90ed866bf5e2584c187
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330970"
---
# <a name="csecuritydesc-class"></a>Classe CSecurityDesc

Questa classe è un `SECURITY_DESCRIPTOR` wrapper per la struttura.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSecurityDesc
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityDesc::CSecurityDesc](#csecuritydesc)|Costruttore.|
|[CSecurityDesc:: CSecurityDesc](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityDesc::FromString](#fromstring)|Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale valido.|
|[CSecurityDesc::GetControl](#getcontrol)|Recupera le informazioni sul controllo dal descrittore di sicurezza.|
|[CSecurityDesc::GetDacl](#getdacl)|Recupera informazioni sull'elenco di controllo di accesso discrezionale (DACL) dal descrittore di sicurezza.|
|[CSecurityDesc::GetGroup](#getgroup)|Recupera le informazioni sul gruppo primario dal descrittore di sicurezza.|
|[CSecurityDesc::GetOwner](#getowner)|Recupera owner informaton dal descrittore di sicurezza.|
|[CSecurityDesc::GetPSECURITY_DESCRIPTOR](#getpsecurity_descriptor)|Restituisce un `SECURITY_DESCRIPTOR` puntatore alla struttura.|
|[CSecurityDesc::GetSacl](#getsacl)|Recupera le informazioni SACL (System Access Control List) dal descrittore di sicurezza.|
|[CSecurityDesc::IsDaclAutoInherited](#isdaclautoinherited)|Determina se l'elenco DACL è configurato per supportare la propagazione automatica.|
|[CSecurityDesc::IsDaclPredefinito](#isdacldefaulted)|Determina se il descrittore di sicurezza è configurato con un elenco DACL predefinito.|
|[CSecurityDesc::IsDaclPresentCSecurityDesc::IsDaclPresent](#isdaclpresent)|Determina se il descrittore di sicurezza contiene un elenco DACL.|
|[CSecurityDesc::IsDaclProtected](#isdaclprotected)|Determina se l'elenco DACL è configurato per impedire modifiche.|
|[CSecurityDesc::IsGroupDefaulted](#isgroupdefaulted)|Determina se l'identificatore di protezione (SID) del descrittore di sicurezza è stato impostato per impostazione predefinita.|
|[CSecurityDesc::IsOwnerPredefinito](#isownerdefaulted)|Determina se il SID proprietario del descrittore di sicurezza è stato impostato per impostazione predefinita.|
|[CSecurityDesc::IsSaclAutoInherited](#issaclautoinherited)|Determina se il SACL è configurato per supportare la propagazione automatica.|
|[CSecurityDesc::IsSaclPredefinito](#issacldefaulted)|Determina se il descrittore di sicurezza è configurato con un SACL predefinito.|
|[CSecurityDesc::IsSaclPresent](#issaclpresent)|Determina se il descrittore di protezione contiene un SACL.|
|[CSecurityDesc::IsSaclProtected](#issaclprotected)|Determina se il SACL è configurato per impedire modifiche.|
|[CSecurityDesc::IsSelfRelativeCSecurityDesc::IsSelfRelative](#isselfrelative)|Determina se il descrittore di sicurezza è in formato siristrante.|
|[CSecurityDesc::MakeAbsolute](#makeabsolute)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.|
|[CSecurityDesc::MakeSelfRelativeCSecurityDesc::MakeSelfRelative](#makeselfrelative)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato indipendente.|
|[CSecurityDesc::SetControl](#setcontrol)|Imposta i bit di controllo di un descrittore di sicurezza.|
|[CSecurityDesc::SetDacl](#setdacl)|Imposta le informazioni in un daCL. Se un elenco DACL è già presente nel descrittore di protezione, viene sostituito.|
|[CSecurityDesc::SetGroup](#setgroup)|Imposta le informazioni sul gruppo primario di un descrittore di protezione di formato assoluto, sostituendo le informazioni sul gruppo primario già presenti.|
|[CSecurityDesc::SetOwnerCSecurityDesc::SetOwner](#setowner)|Imposta le informazioni sul proprietario di un descrittore di sicurezza di formato assoluto, sostituendo le informazioni sul proprietario già presenti.|
|[CSecurityDesc::SetSacl](#setsacl)|Imposta le informazioni in un SACL. Se un SACL è già presente nel descrittore di protezione, viene sostituito.|
|[CSecurityDesc::ToString](#tostring)|Converte un descrittore di sicurezza in un formato stringa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityDesc::operator const SECURITY_DESCRIPTOR](#operator_const_security_descriptor__star)|Restituisce un `SECURITY_DESCRIPTOR` puntatore alla struttura.|
|[CSecurityDesc::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

La `SECURITY_DESCRIPTOR` struttura contiene le informazioni di sicurezza associate a un oggetto. Le applicazioni utilizzano questa struttura per impostare ed eseguire query sullo stato di sicurezza di un oggetto. Vedere anche [AtlGetSecurityDescriptor](security-global-functions.md#atlgetsecuritydescriptor).

Le applicazioni non `SECURITY_DESCRIPTOR` devono modificare direttamente la struttura e devono invece utilizzare i metodi della classe forniti.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="csecuritydesccsecuritydesc"></a><a name="csecuritydesc"></a>CSecurityDesc::CSecurityDesc

Costruttore.

```
CSecurityDesc() throw();
CSecurityDesc(const CSecurityDesc& rhs) throw(... );
CSecurityDesc(const SECURITY_DESCRIPTOR& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CSecurityDesc` o `SECURITY_DESCRIPTOR` struttura da assegnare al nuovo `CSecurityDesc` oggetto.

### <a name="remarks"></a>Osservazioni

L'oggetto `CSecurityDesc` può essere creato `SECURITY_DESCRIPTOR` facoltativamente utilizzando `CSecurityDesc` una struttura o un oggetto definito in precedenza.

## <a name="csecuritydesccsecuritydesc"></a><a name="dtor"></a>CSecurityDesc:: CSecurityDesc

Distruttore.

```
virtual ~CSecurityDesc() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse allocate.

## <a name="csecuritydescfromstring"></a><a name="fromstring"></a>CSecurityDesc::FromString

Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale valido.

```
bool FromString(LPCTSTR pstr) throw(...);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa con terminazione null che contiene il [descrittore](/windows/win32/SecAuthZ/security-descriptor-string-format) di sicurezza in formato stringa da convertire.

### <a name="return-value"></a>Valore restituito

Restituisce true in caso di esito positivo. Genera un'eccezione in caso di errore.

### <a name="remarks"></a>Osservazioni

La stringa può essere creata utilizzando [CSecurityDesc::ToString](#tostring). La conversione del descrittore di sicurezza in una stringa semplifica l'archiviazione e la trasmissione.

Questo metodo chiama [ConvertStringSecurityDescriptorToSecurityDescriptor](/windows/win32/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptorw).

## <a name="csecuritydescgetcontrol"></a><a name="getcontrol"></a>CSecurityDesc::GetControl

Recupera le informazioni sul controllo dal descrittore di sicurezza.

```
bool GetControl(SECURITY_DESCRIPTOR_CONTROL* psdc) const throw();
```

### <a name="parameters"></a>Parametri

*psdc (in modo psdc)*<br/>
Puntatore `SECURITY_DESCRIPTOR_CONTROL` a una struttura che riceve le informazioni sul controllo del descrittore di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false se ha esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [GetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-getsecuritydescriptorcontrol).

## <a name="csecuritydescgetdacl"></a><a name="getdacl"></a>CSecurityDesc::GetDacl

Recupera informazioni sull'elenco di controllo di accesso discrezionale (DACL) dal descrittore di sicurezza.

```
bool GetDacl(
    CDacl* pDacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDacl*<br/>
Puntatore `CDacl` a una struttura in cui archiviare una copia dell'elenco DACL del descrittore di sicurezza. Se esiste un ACL discrezionale, il metodo imposta *pDacl* sull'indirizzo dell'ACL discrezionale del descrittore di protezione. Se non esiste un ACL discrezionale, non viene archiviato alcun valore.

*pbPresento*<br/>
Puntatore a un valore che indica la presenza di un ACL discrezionale nel descrittore di protezione specificato. Se il descrittore di protezione contiene un ACL discrezionale, questo parametro è impostato su true. Se il descrittore di protezione non contiene un ACL discrezionale, questo parametro è impostato su false.

*pbPredefinito*<br/>
Puntatore a un flag impostato sul valore `SECURITY_DESCRIPTOR_CONTROL` del flag di SE_DACL_DEFAULTED nella struttura se esiste un ACL discrezionale per il descrittore di protezione. Se questo flag è true, l'ACL discrezionale è stato recuperato da un meccanismo predefinito; se false, l'ACL discrezionale è stato specificato in modo esplicito da un utente.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false se ha esito negativo.

## <a name="csecuritydescgetgroup"></a><a name="getgroup"></a>CSecurityDesc::GetGroup

Recupera le informazioni sul gruppo primario dal descrittore di sicurezza.

```
bool GetGroup(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*Psid*<br/>
Puntatore a un [CSid](../../atl/reference/csid-class.md) (identificatore di sicurezza) che riceve una copia del gruppo archiviato nel CDacl.

*pbPredefinito*<br/>
Puntatore a un flag impostato sul valore `SECURITY_DESCRIPTOR_CONTROL` del flag SE_GROUP_DEFAULTED nella struttura quando il metodo restituisce .

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false se ha esito negativo.

## <a name="csecuritydescgetowner"></a><a name="getowner"></a>CSecurityDesc::GetOwner

Recupera owner informaton dal descrittore di sicurezza.

```
bool GetOwner(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*Psid*<br/>
Puntatore a un [CSid](../../atl/reference/csid-class.md) (identificatore di sicurezza) che riceve una copia del gruppo archiviato nel CDacl.

*pbPredefinito*<br/>
Puntatore a un flag impostato sul valore `SECURITY_DESCRIPTOR_CONTROL` del SE_OWNER_DEFAULTED flag nella struttura quando il metodo restituisce .

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false se ha esito negativo.

## <a name="csecuritydescgetpsecurity_descriptor"></a><a name="getpsecurity_descriptor"></a>CSecurityDesc::GetPSECURITY_DESCRIPTOR

Restituisce un `SECURITY_DESCRIPTOR` puntatore alla struttura.

```
const SECURITY_DESCRIPTOR* GetPSECURITY_DESCRIPTOR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura [SECURITY_DESCRIPTOR.](/windows/win32/api/winnt/ns-winnt-security_descriptor)

## <a name="csecuritydescgetsacl"></a><a name="getsacl"></a>CSecurityDesc::GetSacl

Recupera le informazioni SACL (System Access Control List) dal descrittore di sicurezza.

```
bool GetSacl(
    CSacl* pSacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSacl*<br/>
Puntatore `CSacl` a una struttura in cui archiviare una copia dell'elenco SACL del descrittore di protezione. Se esiste un ACL di sistema, il metodo imposta *pSacl* sull'indirizzo dell'ACL di sistema del descrittore di protezione. Se non esiste un ACL di sistema, non viene archiviato alcun valore.

*pbPresento*<br/>
Puntatore a un flag il metodo imposta per indicare la presenza di un ACL di sistema nel descrittore di protezione specificato. Se il descrittore di protezione contiene un ACL di sistema, questo parametro è impostato su true. Se il descrittore di protezione non contiene un ACL di sistema, questo parametro è impostato su false.

*pbPredefinito*<br/>
Puntatore a un flag impostato sul valore `SECURITY_DESCRIPTOR_CONTROL` del flag SE_SACL_DEFAULTED nella struttura se esiste un ACL di sistema per il descrittore di protezione.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false se ha esito negativo.

## <a name="csecuritydescisdaclautoinherited"></a><a name="isdaclautoinherited"></a>CSecurityDesc::IsDaclAutoInherited

Determina se l'elenco di controllo di accesso discrezionale (DACL) è configurato per supportare la propagazione automatica.

```
bool IsDaclAutoInherited() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un elenco DACL impostato per supportare la propagazione automatica delle voci di controllo di accesso (ACE) ereditabili agli oggetti figlio esistenti. Altrimenti restituisce false.

### <a name="remarks"></a>Osservazioni

Il sistema imposta questo bit quando esegue l'algoritmo di ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistenti.

## <a name="csecuritydescisdacldefaulted"></a><a name="isdacldefaulted"></a>CSecurityDesc::IsDaclPredefinito

Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso discrezionale (DACL) predefinito.

```
bool IsDaclDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un elenco DACL predefinito, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo flag può influire sul modo in cui il sistema tratta l'elenco DACL, per quanto riguarda l'ereditarietà delle voci di controllo di accesso (ACE). Ad esempio, se il creatore di un oggetto non specifica un elenco DACL, l'oggetto riceve l'elenco DACL predefinito dal token di accesso del creatore. Il sistema ignora questo flag se il flag SE_DACL_PRESENT non è impostato.

Questo flag viene utilizzato per determinare come deve essere calcolato l'elenco DACL finale dell'oggetto e non viene archiviato fisicamente nel controllo del descrittore di protezione dell'oggetto a protezione diretta.

Per impostare questo flag, utilizzare il metodo [CSecurityDesc::SetDacl](#setdacl) .

## <a name="csecuritydescisdaclpresent"></a><a name="isdaclpresent"></a>CSecurityDesc::IsDaclPresentCSecurityDesc::IsDaclPresent

Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso discrezionale (DACL).

```
bool IsDaclPresent() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un elenco DACL, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Se questo flag non è impostato o se questo flag è impostato e l'elenco DACL è NULL, il descrittore di sicurezza consente l'accesso completo a tutti gli utenti.

Questo flag viene utilizzato per contenere le informazioni di sicurezza specificate da un chiamante fino a quando il descrittore di sicurezza non è associato a un oggetto a protezione diretta. Una volta che il descrittore di protezione è associato a un oggetto a protezione diretta, il flag di SE_DACL_PRESENT è sempre impostato nel controllo descrittore di protezione.

Per impostare questo flag, utilizzare il metodo [CSecurityDesc::SetDacl](#setdacl) .

## <a name="csecuritydescisdaclprotected"></a><a name="isdaclprotected"></a>CSecurityDesc::IsDaclProtected

Determina se l'elenco di controllo di accesso discrezionale (DACL) è configurato per impedire modifiche.

```
bool IsDaclProtected() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elenco DACL è configurato per impedire la modifica del descrittore di sicurezza da parte di voci di controllo di accesso (ACE) ereditabili. Altrimenti restituisce false.

### <a name="remarks"></a>Osservazioni

Per impostare questo flag, utilizzare il metodo [CSecurityDesc::SetDacl](#setdacl) .

Questo metodo supporta la propagazione automatica di voci di controllo di accesso ereditabili.

## <a name="csecuritydescisgroupdefaulted"></a><a name="isgroupdefaulted"></a>CSecurityDesc::IsGroupDefaulted

Determina se l'identificatore di protezione (SID) del descrittore di sicurezza è stato impostato per impostazione predefinita.

```
bool IsGroupDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se un meccanismo predefinito, anziché il provider originale del descrittore di sicurezza, a condizione che il SID del gruppo del descrittore di sicurezza sia. Altrimenti restituisce false.

### <a name="remarks"></a>Osservazioni

Per impostare questo flag, utilizzare il [metodo CSecurityDesc::SetGroup](#setgroup) .

## <a name="csecuritydescisownerdefaulted"></a><a name="isownerdefaulted"></a>CSecurityDesc::IsOwnerPredefinito

Determina se l'identificatore di protezione (SID) del proprietario del descrittore di sicurezza è stato impostato per impostazione predefinita.

```
bool IsOwnerDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se un meccanismo predefinito, anziché il provider originale del descrittore di sicurezza, purché il SID del proprietario del descrittore di sicurezza. Altrimenti restituisce false.

### <a name="remarks"></a>Osservazioni

Per impostare questo flag, utilizzare il metodo [CSecurityDesc::SetOwner](#setowner) .

## <a name="csecuritydescissaclautoinherited"></a><a name="issaclautoinherited"></a>CSecurityDesc::IsSaclAutoInherited

Determina se l'elenco di controllo di accesso di sistema (SACL) è configurato per supportare la propagazione automatica.

```
bool IsSaclAutoInherited() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL impostato per supportare la propagazione automatica delle voci di controllo di accesso (ACE) ereditabili agli oggetti figlio esistenti. Altrimenti restituisce false.

### <a name="remarks"></a>Osservazioni

Il sistema imposta questo bit quando esegue l'algoritmo di ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistenti.

## <a name="csecuritydescissacldefaulted"></a><a name="issacldefaulted"></a>CSecurityDesc::IsSaclPredefinito

Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso di sistema (SACL) predefinito.

```
bool IsSaclDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL predefinito, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo flag può influire sul modo in cui il sistema tratta l'elenco SACL, per quanto riguarda l'ereditarietà della voce di controllo di accesso (ACE). Il sistema ignora questo flag se il flag SE_SACL_PRESENT non è impostato.

Per impostare questo flag, utilizzare il metodo [CSecurityDesc::SetSacl](#setsacl) .

## <a name="csecuritydescissaclpresent"></a><a name="issaclpresent"></a>CSecurityDesc::IsSaclPresent

Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso di sistema (SACL).

```
bool IsSaclPresent() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Per impostare questo flag, utilizzare il metodo [CSecurityDesc::SetSacl](#setsacl) .

## <a name="csecuritydescissaclprotected"></a><a name="issaclprotected"></a>CSecurityDesc::IsSaclProtected

Determina se l'elenco di controllo di accesso di sistema (SACL) è configurato per impedire modifiche.

```
bool IsSaclProtected() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elenco SACL è configurato per impedire la modifica del descrittore di sicurezza da parte di voci di controllo di accesso (ACE) ereditabili. Altrimenti restituisce false.

### <a name="remarks"></a>Osservazioni

Per impostare questo flag, utilizzare il metodo [CSecurityDesc::SetSacl](#setsacl) .

Questo metodo supporta la propagazione automatica di voci di controllo di accesso ereditabili.

## <a name="csecuritydescisselfrelative"></a><a name="isselfrelative"></a>CSecurityDesc::IsSelfRelativeCSecurityDesc::IsSelfRelative

Determina se il descrittore di sicurezza è in formato siristrante.

```
bool IsSelfRelative() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza è in formato autorelativo con tutte le informazioni di sicurezza in un blocco di memoria contiguo. Restituisce false se il descrittore di sicurezza è in formato assoluto. Per ulteriori informazioni, vedere Descrittori di [sicurezza assoluti e relativi.](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors)

## <a name="csecuritydescmakeabsolute"></a><a name="makeabsolute"></a>CSecurityDesc::MakeAbsolute

Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.

```
bool MakeAbsolute() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Un descrittore di sicurezza in formato assoluto contiene puntatori alle informazioni in esso contenute, anziché le informazioni stesse. Un descrittore di protezione in formato silendo contiene le informazioni in un blocco di memoria contiguo. In un descrittore di `SECURITY_DESCRIPTOR` sicurezza relativo a un elemento, una struttura avvia sempre le informazioni, ma gli altri componenti del descrittore di sicurezza possono seguire la struttura in qualsiasi ordine. Anziché utilizzare indirizzi di memoria, i componenti del descrittore di protezione relativo sono identificati dagli offset dall'inizio del descrittore di protezione. Questo formato è utile quando un descrittore di sicurezza deve essere memorizzato su un disco o trasmesso tramite un protocollo di comunicazione. Per ulteriori informazioni, vedere Descrittori di [sicurezza assoluti e relativi.](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors)

## <a name="csecuritydescmakeselfrelative"></a><a name="makeselfrelative"></a>CSecurityDesc::MakeSelfRelativeCSecurityDesc::MakeSelfRelative

Chiamare questo metodo per convertire il descrittore di sicurezza in formato indipendente.

```
bool MakeSelfRelative() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Un descrittore di sicurezza in formato assoluto contiene puntatori alle informazioni in esso contenute, anziché contenere le informazioni stesse. Un descrittore di protezione in formato silendo contiene le informazioni in un blocco di memoria contiguo. In un descrittore di `SECURITY_DESCRIPTOR` sicurezza relativo a un elemento, una struttura avvia sempre le informazioni, ma gli altri componenti del descrittore di sicurezza possono seguire la struttura in qualsiasi ordine. Anziché utilizzare indirizzi di memoria, i componenti del descrittore di protezione vengono identificati dagli offset dall'inizio del descrittore di protezione. Questo formato è utile quando un descrittore di sicurezza deve essere memorizzato su un disco o trasmesso tramite un protocollo di comunicazione. Per ulteriori informazioni, vedere Descrittori di [sicurezza assoluti e relativi.](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors)

## <a name="csecuritydescoperator-"></a><a name="operator_eq"></a>CSecurityDesc::operatore

Operatore di assegnazione.

```
CSecurityDesc& operator= (const SECURITY_DESCRIPTOR& rhs) throw(...);
CSecurityDesc& operator= (const CSecurityDesc& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Struttura `SECURITY_DESCRIPTOR` o `CSecurityDesc` oggetto da `CSecurityDesc` assegnare all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce `CSecurityDesc` l'oggetto aggiornato.

## <a name="csecuritydescoperator-const-security_descriptor-"></a><a name="operator_const_security_descriptor__star"></a>CSecurityDesc::operator const SECURITY_DESCRIPTOR

Esegue il cast di un `SECURITY_DESCRIPTOR` valore a un puntatore alla struttura.

```
operator const SECURITY_DESCRIPTOR *() const throw();
```

## <a name="csecuritydescsetcontrol"></a><a name="setcontrol"></a>CSecurityDesc::SetControl

Imposta i bit di controllo di un descrittore di sicurezza.

```
bool SetControl(
    SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
    SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet) throw();
```

### <a name="parameters"></a>Parametri

*ControlBitsOfInterest*<br/>
Maschera SECURITY_DESCRIPTOR_CONTROL che indica i bit del controllo da impostare. Per un elenco dei flag che è possibile impostare, vedere [SetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

*ControlloBitsToSet*<br/>
Oggetto SECURITY_DESCRIPTOR_CONTROL maschera che indica i nuovi valori per i bit di controllo specificati dalla maschera *ControlBitsOfInterest.* Questo parametro può essere una combinazione dei flag elencati per il parametro *ControlBitsOfInterest.*

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [SetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

## <a name="csecuritydescsetdacl"></a><a name="setdacl"></a>CSecurityDesc::SetDacl

Imposta le informazioni in un elenco di controllo di accesso discrezionale (DACL). Se un elenco DACL è già presente nel descrittore di protezione, viene sostituito.

```
inline void SetDacl(
    bool bPresent = true,
    bool bDefaulted = false) throw(...);

inline void SetDacl(
    const CDacl& Dacl,
    bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Dacl*<br/>
Riferimento a `CDacl` un oggetto che specifica l'elenco DACL per il descrittore di sicurezza. Questo parametro non deve essere NULL. Per impostare un elenco DACL NULL nel descrittore di sicurezza, il primo form del metodo deve essere utilizzato con *bPresent* impostato su false.

*bPresente*<br/>
Specifica un flag che indica la presenza di un elenco DACL nel descrittore di protezione. Se questo parametro è true, il `SECURITY_DESCRIPTOR_CONTROL` metodo imposta il flag SE_DACL_PRESENT nella struttura e utilizza i valori nei parametri *Dacl* e *bDefaulted.* Se è false, il metodo cancella il flag SE_DACL_PRESENT e *bDefaulted* viene ignorato.

*bPredefinito*<br/>
Specifica un flag che indica l'origine dell'elenco DACL. Se questo flag è true, l'elenco DACL è stato recuperato da un meccanismo predefinito. Se false, l'elenco DACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore `SECURITY_DESCRIPTOR_CONTROL` nel SE_DACL_DEFAULTED flag della struttura. Se questo parametro non è specificato, il flag SE_DACL_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Esiste una differenza importante tra un DACL vuoto e un DACL inesistente. Quando un elenco DACL è vuoto, non contiene voci di controllo di accesso e non sono stati concessi diritti di accesso in modo esplicito. Di conseguenza, l'accesso all'oggetto viene negato in modo implicito. Quando un oggetto non dispone di alcun elenco DACL, d'altra parte, non viene assegnata alcuna protezione all'oggetto e viene concessa qualsiasi richiesta di accesso.

## <a name="csecuritydescsetgroup"></a><a name="setgroup"></a>CSecurityDesc::SetGroup

Imposta le informazioni sul gruppo primario di un descrittore di protezione di formato assoluto, sostituendo le informazioni sul gruppo primario già presenti.

```
bool SetGroup(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sid*<br/>
Riferimento a un oggetto [CSid](../../atl/reference/csid-class.md) per il nuovo gruppo primario del descrittore di sicurezza. Questo parametro non deve essere NULL. Un descrittore di protezione può essere contrassegnato come non dispone di un DACL o un SACL, ma deve avere un gruppo e un proprietario, anche se si tratta del SID NULL (che è un SID incorporato con un significato speciale).

*bPredefinito*<br/>
Indica se le informazioni sul gruppo primario sono state ricavate da un meccanismo predefinito. Se questo valore è true, si tratta di informazioni predefinite e `SECURITY_DESCRIPTOR_CONTROL` il metodo archivia questo valore come flag di SE_GROUP_DEFAULTED nella struttura. Se questo parametro è zero, il flag SE_GROUP_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

## <a name="csecuritydescsetowner"></a><a name="setowner"></a>CSecurityDesc::SetOwnerCSecurityDesc::SetOwner

Imposta le informazioni sul proprietario di un descrittore di protezione di formato assoluto. Sostituisce tutte le informazioni del proprietario già presenti.

```
bool SetOwner(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) per il nuovo proprietario primario del descrittore di sicurezza. Questo parametro non deve essere NULL.

*bPredefinito*<br/>
Indica se le informazioni sul proprietario derivano da un meccanismo predefinito. Se questo valore è true, si tratta di informazioni predefinite. Il metodo archivia questo valore `SECURITY_DESCRIPTOR_CONTROL` come flag di SE_OWNER_DEFAULTED nella struttura. Se questo parametro è zero, il flag SE_OWNER_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

## <a name="csecuritydescsetsacl"></a><a name="setsacl"></a>CSecurityDesc::SetSacl

Imposta le informazioni in un elenco di controllo di accesso di sistema (SACL). Se un SACL è già presente nel descrittore di protezione, viene sostituito.

```
bool SetSacl(const CSacl& Sacl, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sacl*<br/>
Puntatore `CSacl` a un oggetto che specifica l'elenco SACL per il descrittore di protezione. Questo parametro non deve essere NULL e deve essere un oggetto CSacl. A differenza degli elenchi DACL, non esiste alcuna differenza tra NULL e un SACL vuoto, poiché gli oggetti SACL non specificano i diritti di accesso, ma solo le informazioni di controllo.

*bPredefinito*<br/>
Specifica un flag che indica l'origine del SACL. Se questo flag è true, il SACL è stato recuperato da un meccanismo predefinito. Se false, il SACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore `SECURITY_DESCRIPTOR_CONTROL` nel SE_SACL_DEFAULTED flag della struttura. Se questo parametro non è specificato, il flag di SE_SACL_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

## <a name="csecuritydesctostring"></a><a name="tostring"></a>CSecurityDesc::ToString

Converte un descrittore di sicurezza in un formato stringa.

```
bool ToString(
    CString* pstr, SECURITY_INFORMATION si = OWNER_SECURITY_INFORMATION |
    GROUP_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION |
    SACL_SECURITY_INFORMATION) const throw(...);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa con terminazione null che riceverà il descrittore di sicurezza in [formato stringa.](/windows/win32/SecAuthZ/security-descriptor-string-format)

*si*<br/>
Specifica una combinazione di flag di bit SECURITY_INFORMATION per indicare i componenti del descrittore di sicurezza da includere nella stringa di output.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Una volta che il descrittore di sicurezza è in formato stringa, può essere memorizzato o trasmesso più facilmente. Utilizzare `CSecurityDesc::FromString` il metodo per convertire nuovamente la stringa in un descrittore di sicurezza.

Il parametro *si* può contenere i seguenti flag SECURITY_INFORMATION:

|Valore|Significato|
|-----------|-------------|
|OWNER_SECURITY_INFORMATION|Includere il proprietario.|
|GROUP_SECURITY_INFORMATION|Includere il gruppo primario.|
|DACL_SECURITY_INFORMATION|Includere l'elenco DACL.|
|SACL_SECURITY_INFORMATION|Includere l'elenco SACL.|

Se l'elenco DACL è NULL e il bit di controllo SE_DACL_PRESENT è impostato nel descrittore di sicurezza di input, il metodo ha esito negativo.

Se l'elenco DACL è NULL e il SE_DACL_PRESENT bit di controllo non è impostato nel descrittore di protezione di input, la stringa del descrittore di protezione risultante non dispone di un componente D:. Per ulteriori informazioni, vedere [Security Descriptor String Format.See Security Descriptor String Format](/windows/win32/SecAuthZ/security-descriptor-string-format) for more details.

Questo metodo chiama [ConvertStringSecurityDescriptorToSecurityDescriptor](/windows/win32/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptorw).

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
