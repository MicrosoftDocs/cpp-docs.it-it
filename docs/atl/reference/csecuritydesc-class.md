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
ms.openlocfilehash: 90f8cfd66fbab88bfa29c39ff27189f02447a7c7
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496483"
---
# <a name="csecuritydesc-class"></a>Classe CSecurityDesc

Questa classe è un wrapper per la `SECURITY_DESCRIPTOR` struttura.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSecurityDesc
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityDesc::CSecurityDesc](#csecuritydesc)|Costruttore.|
|[CSecurityDesc:: ~ CSecurityDesc](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CSecurityDesc::FromString](#fromstring)|Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale valido.|
|[CSecurityDesc::GetControl](#getcontrol)|Recupera le informazioni di controllo dal descrittore di sicurezza.|
|[CSecurityDesc::GetDacl](#getdacl)|Recupera le informazioni relative all'elenco di controllo di accesso discrezionale (DACL) dal descrittore di sicurezza.|
|[CSecurityDesc::GetGroup](#getgroup)|Recupera le informazioni sul gruppo primario dal descrittore di sicurezza.|
|[CSecurityDesc::GetOwner](#getowner)|Recupera il proprietario in base al formato dal descrittore di sicurezza.|
|[CSecurityDesc::GetPSECURITY_DESCRIPTOR](#getpsecurity_descriptor)|Restituisce un puntatore alla `SECURITY_DESCRIPTOR` struttura.|
|[CSecurityDesc::GetSacl](#getsacl)|Recupera le informazioni sull'elenco di controllo di accesso di sistema (SACL) dal descrittore di sicurezza.|
|[CSecurityDesc::IsDaclAutoInherited](#isdaclautoinherited)|Determina se l'elenco DACL è configurato per supportare la propagazione automatica.|
|[CSecurityDesc::IsDaclDefaulted](#isdacldefaulted)|Determina se il descrittore di sicurezza è configurato con un DACL predefinito.|
|[CSecurityDesc::IsDaclPresent](#isdaclpresent)|Determina se il descrittore di sicurezza contiene un DACL.|
|[CSecurityDesc::IsDaclProtected](#isdaclprotected)|Determina se l'elenco DACL è configurato per impedire le modifiche.|
|[CSecurityDesc::IsGroupDefaulted](#isgroupdefaulted)|Determina se l'ID di sicurezza del gruppo (SID) del descrittore di sicurezza è stato impostato per impostazione predefinita.|
|[CSecurityDesc::IsOwnerDefaulted](#isownerdefaulted)|Determina se il SID del proprietario del descrittore di sicurezza è stato impostato per impostazione predefinita.|
|[CSecurityDesc::IsSaclAutoInherited](#issaclautoinherited)|Determina se l'elenco SACL è configurato per supportare la propagazione automatica.|
|[CSecurityDesc::IsSaclDefaulted](#issacldefaulted)|Determina se il descrittore di sicurezza è configurato con un SACL predefinito.|
|[CSecurityDesc::IsSaclPresent](#issaclpresent)|Determina se il descrittore di sicurezza contiene un SACL.|
|[CSecurityDesc::IsSaclProtected](#issaclprotected)|Determina se l'elenco SACL è configurato per impedire le modifiche.|
|[CSecurityDesc::IsSelfRelative](#isselfrelative)|Determina se il descrittore di sicurezza è in formato relativo.|
|[CSecurityDesc:: MakeAbsolute](#makeabsolute)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.|
|[CSecurityDesc::MakeSelfRelative](#makeselfrelative)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato relativo.|
|[CSecurityDesc::SetControl](#setcontrol)|Imposta i bit di controllo di un descrittore di sicurezza.|
|[CSecurityDesc::SetDacl](#setdacl)|Imposta le informazioni in un DACL. Se un DACL è già presente nel descrittore di sicurezza, viene sostituito.|
|[CSecurityDesc::SetGroup](#setgroup)|Imposta le informazioni sul gruppo primario di un descrittore di sicurezza in formato assoluto, sostituendo le informazioni di gruppo primarie già presenti.|
|[CSecurityDesc::SetOwner](#setowner)|Imposta le informazioni sul proprietario di un descrittore di sicurezza in formato assoluto, sostituendo tutte le informazioni sul proprietario già presenti.|
|[CSecurityDesc::SetSacl](#setsacl)|Imposta le informazioni in un SACL. Se un SACL è già presente nel descrittore di sicurezza, viene sostituito.|
|[CSecurityDesc::ToString](#tostring)|Converte un descrittore di sicurezza in un formato stringa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CSecurityDesc:: operator const SECURITY_DESCRIPTOR *](#operator_const_security_descriptor__star)|Restituisce un puntatore alla `SECURITY_DESCRIPTOR` struttura.|
|[CSecurityDesc:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

La `SECURITY_DESCRIPTOR` struttura contiene le informazioni di sicurezza associate a un oggetto. Le applicazioni utilizzano questa struttura per impostare ed eseguire query sullo stato di sicurezza di un oggetto. Vedere anche [AtlGetSecurityDescriptor](security-global-functions.md#atlgetsecuritydescriptor).

Le applicazioni non devono modificare `SECURITY_DESCRIPTOR` direttamente la struttura ed è invece necessario usare i metodi della classe forniti.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="csecuritydesc"></a>  CSecurityDesc::CSecurityDesc

Costruttore.

```
CSecurityDesc() throw();
CSecurityDesc(const CSecurityDesc& rhs) throw(... );
CSecurityDesc(const SECURITY_DESCRIPTOR& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto o `SECURITY_DESCRIPTOR` struttura da assegnare al nuovo `CSecurityDesc` oggetto. `CSecurityDesc`

### <a name="remarks"></a>Note

È `CSecurityDesc` possibile creare facoltativamente l'oggetto utilizzando una `SECURITY_DESCRIPTOR` struttura o un oggetto definito `CSecurityDesc` in precedenza.

##  <a name="dtor"></a>  CSecurityDesc::~CSecurityDesc

Distruttore.

```
virtual ~CSecurityDesc() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera tutte le risorse allocate.

##  <a name="fromstring"></a>CSecurityDesc:: FromString

Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale valido.

```
bool FromString(LPCTSTR pstr) throw(...);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa con terminazione null che contiene il descrittore di [sicurezza in formato stringa](/windows/win32/SecAuthZ/security-descriptor-string-format) da convertire.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione è riuscita. Genera un'eccezione in caso di errore.

### <a name="remarks"></a>Note

La stringa può essere creata usando [CSecurityDesc:: ToString](#tostring). La conversione del descrittore di sicurezza in una stringa rende più semplice l'archiviazione e la trasmissione.

Questo metodo chiama [ConvertStringSecurityDescriptorToSecurityDescriptor ha](/windows/win32/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptorw).

##  <a name="getcontrol"></a>  CSecurityDesc::GetControl

Recupera le informazioni di controllo dal descrittore di sicurezza.

```
bool GetControl(SECURITY_DESCRIPTOR_CONTROL* psdc) const throw();
```

### <a name="parameters"></a>Parametri

*psdc*<br/>
Puntatore a una `SECURITY_DESCRIPTOR_CONTROL` struttura che riceve le informazioni sul controllo del descrittore di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Questo metodo chiama [GetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-getsecuritydescriptorcontrol).

##  <a name="getdacl"></a>  CSecurityDesc::GetDacl

Recupera le informazioni relative all'elenco di controllo di accesso discrezionale (DACL) dal descrittore di sicurezza.

```
bool GetDacl(
    CDacl* pDacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDacl*<br/>
Puntatore a una `CDacl` struttura in cui archiviare una copia del DACL del descrittore di sicurezza. Se esiste un ACL discrezionale, il metodo imposta *pDacl* sull'indirizzo dell'ACL discrezionale del descrittore di sicurezza. Se non esiste un ACL discrezionale, non viene archiviato alcun valore.

*pbPresent*<br/>
Puntatore a un valore che indica la presenza di un ACL discrezionale nel descrittore di sicurezza specificato. Se il descrittore di sicurezza contiene un ACL discrezionale, questo parametro è impostato su true. Se il descrittore di sicurezza non contiene un ACL discrezionale, questo parametro è impostato su false.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_DACL_DEFAULTED nella `SECURITY_DESCRIPTOR_CONTROL` struttura se è presente un ACL discrezionale per il descrittore di sicurezza. Se questo flag è true, l'ACL discrezionale è stato recuperato da un meccanismo predefinito; Se false, l'ACL discrezionale è stato specificato in modo esplicito da un utente.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di esito negativo.

##  <a name="getgroup"></a>  CSecurityDesc::GetGroup

Recupera le informazioni sul gruppo primario dal descrittore di sicurezza.

```
bool GetGroup(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [CSid](../../atl/reference/csid-class.md) (ID di sicurezza) che riceve una copia del gruppo archiviato in CDacl.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_GROUP_DEFAULTED nella `SECURITY_DESCRIPTOR_CONTROL` struttura quando il metodo restituisce.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di esito negativo.

##  <a name="getowner"></a>  CSecurityDesc::GetOwner

Recupera il proprietario in base al formato dal descrittore di sicurezza.

```
bool GetOwner(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [CSid](../../atl/reference/csid-class.md) (ID di sicurezza) che riceve una copia del gruppo archiviato in CDacl.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_OWNER_DEFAULTED nella `SECURITY_DESCRIPTOR_CONTROL` struttura quando il metodo restituisce.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di esito negativo.

##  <a name="getpsecurity_descriptor"></a>  CSecurityDesc::GetPSECURITY_DESCRIPTOR

Restituisce un puntatore alla `SECURITY_DESCRIPTOR` struttura.

```
const SECURITY_DESCRIPTOR* GetPSECURITY_DESCRIPTOR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura [SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor) .

##  <a name="getsacl"></a>  CSecurityDesc::GetSacl

Recupera le informazioni sull'elenco di controllo di accesso di sistema (SACL) dal descrittore di sicurezza.

```
bool GetSacl(
    CSacl* pSacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSacl*<br/>
Puntatore a una `CSacl` struttura in cui archiviare una copia del SACL del descrittore di sicurezza. Se esiste un ACL di sistema, il metodo imposta *pSacl* sull'indirizzo dell'ACL di sistema del descrittore di sicurezza. Se non esiste un ACL di sistema, non viene archiviato alcun valore.

*pbPresent*<br/>
Puntatore a un flag impostato dal metodo per indicare la presenza di un ACL di sistema nel descrittore di sicurezza specificato. Se il descrittore di sicurezza contiene un ACL di sistema, questo parametro è impostato su true. Se il descrittore di sicurezza non contiene un ACL di sistema, questo parametro è impostato su false.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_SACL_DEFAULTED nella `SECURITY_DESCRIPTOR_CONTROL` struttura se è presente un ACL di sistema per il descrittore di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di esito negativo.

##  <a name="isdaclautoinherited"></a>  CSecurityDesc::IsDaclAutoInherited

Determina se l'elenco di controllo di accesso discrezionale (DACL) è configurato per supportare la propagazione automatica.

```
bool IsDaclAutoInherited() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un DACL configurato per supportare la propagazione automatica di voci di controllo di accesso ereditabili (ACE) a oggetti figlio esistenti. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Questo bit viene impostato dal sistema quando viene eseguito l'algoritmo di ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistenti.

##  <a name="isdacldefaulted"></a>  CSecurityDesc::IsDaclDefaulted

Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso discrezionale (DACL) predefinito.

```
bool IsDaclDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un DACL predefinito; in caso contrario, false.

### <a name="remarks"></a>Note

Questo flag può influire sul modo in cui il sistema considera l'elenco DACL rispetto all'ereditarietà ACE (Access-Control Entry). Se, ad esempio, il creatore di un oggetto non specifica un DACL, l'oggetto riceve l'elenco DACL predefinito dal token di accesso del creatore. Questo flag viene ignorato dal sistema se il flag SE_DACL_PRESENT non è impostato.

Questo flag viene utilizzato per determinare il modo in cui deve essere calcolato l'elenco DACL finale nell'oggetto e non viene archiviato fisicamente nel controllo del descrittore di sicurezza dell'oggetto a protezione diretta.

Per impostare questo flag, utilizzare il metodo [CSecurityDesc:: DACL](#setdacl) .

##  <a name="isdaclpresent"></a>  CSecurityDesc::IsDaclPresent

Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso discrezionale (DACL).

```
bool IsDaclPresent() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un DACL, false in caso contrario.

### <a name="remarks"></a>Note

Se questo flag non è impostato o se questo flag è impostato e l'elenco DACL è NULL, il descrittore di sicurezza consente l'accesso completo a tutti gli utenti.

Questo flag viene utilizzato per mantenere le informazioni di sicurezza specificate da un chiamante finché il descrittore di sicurezza non è associato a un oggetto a protezione diretta. Quando il descrittore di sicurezza è associato a un oggetto a protezione diretta, il flag SE_DACL_PRESENT viene sempre impostato nel controllo del descrittore di sicurezza.

Per impostare questo flag, utilizzare il metodo [CSecurityDesc:: DACL](#setdacl) .

##  <a name="isdaclprotected"></a>  CSecurityDesc::IsDaclProtected

Determina se l'elenco di controllo di accesso discrezionale (DACL) è configurato per impedire le modifiche.

```
bool IsDaclProtected() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elenco DACL è configurato in modo da impedire la modifica del descrittore di sicurezza da parte delle voci di controllo di accesso (ACE) ereditabili. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, utilizzare il metodo [CSecurityDesc:: DACL](#setdacl) .

Questo metodo supporta la propagazione automatica di ACE ereditabili.

##  <a name="isgroupdefaulted"></a>  CSecurityDesc::IsGroupDefaulted

Determina se l'ID di sicurezza del gruppo (SID) del descrittore di sicurezza è stato impostato per impostazione predefinita.

```
bool IsGroupDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se un meccanismo predefinito, anziché il provider originale del descrittore di sicurezza, ha fornito il SID di gruppo del descrittore di sicurezza. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, utilizzare il metodo [CSecurityDesc:: segroup](#setgroup) .

##  <a name="isownerdefaulted"></a>  CSecurityDesc::IsOwnerDefaulted

Determina se l'ID di sicurezza (SID) del proprietario del descrittore di sicurezza è stato impostato per impostazione predefinita.

```
bool IsOwnerDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se un meccanismo predefinito, anziché il provider originale del descrittore di sicurezza, ha fornito il SID del proprietario del descrittore di sicurezza. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, usare il metodo [CSecurityDesc::](#setowner) SetOwner.

##  <a name="issaclautoinherited"></a>  CSecurityDesc::IsSaclAutoInherited

Determina se l'elenco di controllo di accesso di sistema (SACL) è configurato per supportare la propagazione automatica.

```
bool IsSaclAutoInherited() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL configurato per supportare la propagazione automatica di voci di controllo di accesso ereditabili (ACE) a oggetti figlio esistenti. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Questo bit viene impostato dal sistema quando viene eseguito l'algoritmo di ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistenti.

##  <a name="issacldefaulted"></a>  CSecurityDesc::IsSaclDefaulted

Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso di sistema (SACL) predefinito.

```
bool IsSaclDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL predefinito; in caso contrario, false.

### <a name="remarks"></a>Note

Questo flag può influire sul modo in cui il sistema considera l'elenco SACL, rispetto all'ereditarietà ACE (Access-Control Entry). Questo flag viene ignorato dal sistema se il flag SE_SACL_PRESENT non è impostato.

Per impostare questo flag, utilizzare il metodo [CSecurityDesc:: SACL](#setsacl) .

##  <a name="issaclpresent"></a>  CSecurityDesc::IsSaclPresent

Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso di sistema (SACL).

```
bool IsSaclPresent() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL; in caso contrario, false.

### <a name="remarks"></a>Note

Per impostare questo flag, utilizzare il metodo [CSecurityDesc:: SACL](#setsacl) .

##  <a name="issaclprotected"></a>  CSecurityDesc::IsSaclProtected

Determina se l'elenco di controllo di accesso di sistema (SACL) è configurato per impedire le modifiche.

```
bool IsSaclProtected() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il SACL è configurato in modo da impedire la modifica del descrittore di sicurezza da parte delle voci di controllo di accesso (ACE) ereditabili. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, utilizzare il metodo [CSecurityDesc:: SACL](#setsacl) .

Questo metodo supporta la propagazione automatica di ACE ereditabili.

##  <a name="isselfrelative"></a>  CSecurityDesc::IsSelfRelative

Determina se il descrittore di sicurezza è in formato relativo.

```
bool IsSelfRelative() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza è in formato relativo con tutte le informazioni di sicurezza in un blocco di memoria contiguo. Restituisce false se il descrittore di sicurezza è in formato assoluto. Per ulteriori informazioni, vedere descrittori di [sicurezza assoluti e autonomi](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors).

##  <a name="makeabsolute"></a>CSecurityDesc:: MakeAbsolute

Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.

```
bool MakeAbsolute() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo; in caso contrario, false.

### <a name="remarks"></a>Note

Un descrittore di sicurezza in formato assoluto contiene i puntatori alle informazioni che contiene, anziché le informazioni stesse. Un descrittore di sicurezza in formato relativo contiene le informazioni in un blocco di memoria contiguo. In un descrittore di sicurezza autonomo `SECURITY_DESCRIPTOR` , una struttura avvia sempre le informazioni, ma gli altri componenti del descrittore di sicurezza possono seguire la struttura in qualsiasi ordine. Invece di utilizzare gli indirizzi di memoria, i componenti del descrittore di sicurezza con relazione automatica sono identificati da offset dall'inizio del descrittore di sicurezza. Questo formato è utile quando un descrittore di sicurezza deve essere archiviato su un disco o trasmesso tramite un protocollo di comunicazione. Per ulteriori informazioni, vedere descrittori di [sicurezza assoluti e autonomi](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors).

##  <a name="makeselfrelative"></a>  CSecurityDesc::MakeSelfRelative

Chiamare questo metodo per convertire il descrittore di sicurezza in formato relativo.

```
bool MakeSelfRelative() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo; in caso contrario, false.

### <a name="remarks"></a>Note

Un descrittore di sicurezza in formato assoluto contiene puntatori alle informazioni in esso contenute, anziché contenere le informazioni. Un descrittore di sicurezza in formato relativo contiene le informazioni in un blocco di memoria contiguo. In un descrittore di sicurezza autonomo `SECURITY_DESCRIPTOR` , una struttura avvia sempre le informazioni, ma gli altri componenti del descrittore di sicurezza possono seguire la struttura in qualsiasi ordine. Anziché utilizzare gli indirizzi di memoria, i componenti del descrittore di sicurezza sono identificati da offset dall'inizio del descrittore di sicurezza. Questo formato è utile quando un descrittore di sicurezza deve essere archiviato su un disco o trasmesso tramite un protocollo di comunicazione. Per ulteriori informazioni, vedere descrittori di [sicurezza assoluti e autonomi](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors).

##  <a name="operator_eq"></a>CSecurityDesc:: operator =

Operatore di assegnazione.

```
CSecurityDesc& operator= (const SECURITY_DESCRIPTOR& rhs) throw(...);
CSecurityDesc& operator= (const CSecurityDesc& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`SECURITY_DESCRIPTOR` Struttura o `CSecurityDesc`oggettoda assegnare all' oggetto.`CSecurityDesc`

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CSecurityDesc` aggiornato.

##  <a name="operator_const_security_descriptor__star"></a>CSecurityDesc:: operator const SECURITY_DESCRIPTOR *

Esegue il cast di un valore a un puntatore `SECURITY_DESCRIPTOR` alla struttura.

```
operator const SECURITY_DESCRIPTOR *() const throw();
```

##  <a name="setcontrol"></a>  CSecurityDesc::SetControl

Imposta i bit di controllo di un descrittore di sicurezza.

```
bool SetControl(
    SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
    SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet) throw();
```

### <a name="parameters"></a>Parametri

*ControlBitsOfInterest*<br/>
Maschera SECURITY_DESCRIPTOR_CONTROL che indica i bit del controllo da impostare. Per un elenco dei flag che è possibile impostare, vedere [SetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

*ControlBitsToSet*<br/>
Maschera SECURITY_DESCRIPTOR_CONTROL che indica i nuovi valori per i bit del controllo specificati dalla maschera *ControlBitsOfInterest* . Questo parametro può essere una combinazione dei flag elencati per il parametro *ControlBitsOfInterest* .

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Questo metodo chiama [SetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

##  <a name="setdacl"></a>  CSecurityDesc::SetDacl

Imposta le informazioni in un elenco di controllo di accesso discrezionale (DACL). Se un DACL è già presente nel descrittore di sicurezza, viene sostituito.

```
inline void SetDacl(
    bool bPresent = true,
    bool bDefaulted = false) throw(...);

inline void SetDacl(
    const CDacl& Dacl,
    bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*DACL*<br/>
Riferimento a un `CDacl` oggetto che specifica l'elenco DACL per il descrittore di sicurezza. Questo parametro non può essere NULL. Per impostare un DACL NULL nel descrittore di sicurezza, è consigliabile utilizzare la prima forma del metodo con *bPresent* impostato su false.

*bPresent*<br/>
Specifica un flag che indica la presenza di un DACL nel descrittore di sicurezza. Se questo parametro è true, il metodo imposta il flag SE_DACL_PRESENT nella `SECURITY_DESCRIPTOR_CONTROL` struttura e usa i valori nei parametri *DACL* e *bDefaulted* . Se è false, il metodo cancella il flag SE_DACL_PRESENT e *bDefaulted* viene ignorato.

*bDefaulted*<br/>
Specifica un flag che indica l'origine dell'elenco DACL. Se questo flag è true, l'elenco DACL è stato recuperato da un meccanismo predefinito. Se false, l'elenco DACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore nel flag SE_DACL_DEFAULTED della `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro non viene specificato, il flag SE_DACL_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Esiste una differenza importante tra un DACL vuoto e un DACL inesistente. Quando un DACL è vuoto, non contiene voci di controllo di accesso e nessun diritto di accesso è stato concesso in modo esplicito. Di conseguenza, l'accesso all'oggetto viene negato in modo implicito. Quando un oggetto non dispone di DACL, al contrario, non viene assegnata alcuna protezione all'oggetto e viene concessa qualsiasi richiesta di accesso.

##  <a name="setgroup"></a>  CSecurityDesc::SetGroup

Imposta le informazioni sul gruppo primario di un descrittore di sicurezza in formato assoluto, sostituendo le informazioni di gruppo primarie già presenti.

```
bool SetGroup(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sid*<br/>
Riferimento a un oggetto [CSid](../../atl/reference/csid-class.md) per il nuovo gruppo primario del descrittore di sicurezza. Questo parametro non può essere NULL. Un descrittore di sicurezza può essere contrassegnato come privo di DACL o SACL, ma deve avere un gruppo e un proprietario, anche questo è il SID NULL, ovvero un SID predefinito con un significato speciale.

*bDefaulted*<br/>
Indica se le informazioni sul gruppo primario sono state derivate da un meccanismo predefinito. Se questo valore è true, si tratta di informazioni predefinite e il metodo archivia questo valore come flag SE_GROUP_DEFAULTED nella `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro è zero, il flag SE_GROUP_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

##  <a name="setowner"></a>  CSecurityDesc::SetOwner

Imposta le informazioni sul proprietario di un descrittore di sicurezza in formato assoluto. Sostituisce le informazioni sul proprietario già presenti.

```
bool SetOwner(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) per il nuovo proprietario primario del descrittore di sicurezza. Questo parametro non può essere NULL.

*bDefaulted*<br/>
Indica se le informazioni sul proprietario sono derivate da un meccanismo predefinito. Se questo valore è true, si tratta di informazioni predefinite. Il metodo archivia questo valore come flag SE_OWNER_DEFAULTED nella `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro è zero, il flag SE_OWNER_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

##  <a name="setsacl"></a>  CSecurityDesc::SetSacl

Imposta le informazioni in un elenco di controllo di accesso di sistema (SACL). Se un SACL è già presente nel descrittore di sicurezza, viene sostituito.

```
bool SetSacl(const CSacl& Sacl, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*SACL*<br/>
Puntatore a un `CSacl` oggetto che specifica l'elenco SACL per il descrittore di sicurezza. Questo parametro non deve essere NULL e deve essere un oggetto CSacl. Diversamente dagli elenchi DACL, non esiste alcuna differenza tra NULL e un SACL vuoto, perché gli oggetti SACL non specificano i diritti di accesso, bensì solo le informazioni di controllo.

*bDefaulted*<br/>
Specifica un flag che indica l'origine dell'elenco SACL. Se questo flag è true, il SACL è stato recuperato da un meccanismo predefinito. Se false, l'elenco SACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore nel flag SE_SACL_DEFAULTED della `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro non viene specificato, il flag SE_SACL_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

##  <a name="tostring"></a>  CSecurityDesc::ToString

Converte un descrittore di sicurezza in un formato stringa.

```
bool ToString(
    CString* pstr, SECURITY_INFORMATION si = OWNER_SECURITY_INFORMATION |
    GROUP_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION |
    SACL_SECURITY_INFORMATION) const throw(...);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa con terminazione null che riceverà il descrittore di [sicurezza in formato stringa](/windows/win32/SecAuthZ/security-descriptor-string-format).

*si*<br/>
Specifica una combinazione di flag di bit SECURITY_INFORMATION per indicare i componenti del descrittore di sicurezza da includere nella stringa di output.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Quando il descrittore di sicurezza è in formato stringa, può essere archiviato o trasmesso più facilmente. Usare il `CSecurityDesc::FromString` metodo per convertire di nuovo la stringa in un descrittore di sicurezza.

Il parametro *si* può contenere i flag SECURITY_INFORMATION seguenti:

|Value|Significato|
|-----------|-------------|
|OWNER_SECURITY_INFORMATION|Includere il proprietario.|
|GROUP_SECURITY_INFORMATION|Includere il gruppo primario.|
|DACL_SECURITY_INFORMATION|Includere l'elenco DACL.|
|SACL_SECURITY_INFORMATION|Includere il SACL.|

Se il DACL è NULL e il bit del controllo SE_DACL_PRESENT è impostato nel descrittore di sicurezza di input, il metodo ha esito negativo.

Se DACL è NULL e il bit del controllo SE_DACL_PRESENT non è impostato nel descrittore di sicurezza di input, la stringa del descrittore di sicurezza risultante non include un componente D:. Per ulteriori informazioni, vedere il [formato della stringa](/windows/win32/SecAuthZ/security-descriptor-string-format) del descrittore di sicurezza.

Questo metodo chiama [ConvertStringSecurityDescriptorToSecurityDescriptor ha](/windows/win32/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptorw).

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
