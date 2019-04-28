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
ms.openlocfilehash: aadaa64a936aee867766dfc0f7a6e190c9691ca6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62277968"
---
# <a name="csecuritydesc-class"></a>Classe CSecurityDesc

Questa classe è un wrapper per il `SECURITY_DESCRIPTOR` struttura.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CSecurityDesc
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityDesc::CSecurityDesc](#csecuritydesc)|Costruttore.|
|[CSecurityDesc::~CSecurityDesc](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityDesc::FromString](#fromstring)|Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale e valido.|
|[CSecurityDesc::GetControl](#getcontrol)|Recupera le informazioni dal descrittore di sicurezza di controllo.|
|[CSecurityDesc::GetDacl](#getdacl)|Recupera le informazioni di controllo di accesso discrezionali (DACL) elenco dal descrittore di sicurezza.|
|[CSecurityDesc::GetGroup](#getgroup)|Recupera le informazioni di gruppo primario dal descrittore di sicurezza.|
|[CSecurityDesc::GetOwner](#getowner)|Recupera informazioni relative al proprietario dal descrittore di sicurezza.|
|[CSecurityDesc::GetPSECURITY_DESCRIPTOR](#getpsecurity_descriptor)|Restituisce un puntatore al `SECURITY_DESCRIPTOR` struttura.|
|[CSecurityDesc::GetSacl](#getsacl)|Recupera le informazioni dell'elenco SACL di controllo di accesso sistema dal descrittore di sicurezza.|
|[CSecurityDesc::IsDaclAutoInherited](#isdaclautoinherited)|Determina se l'elenco DACL è configurata per supportare la propagazione automatica.|
|[CSecurityDesc::IsDaclDefaulted](#isdacldefaulted)|Determina se il descrittore di sicurezza è configurato con un DACL predefinito.|
|[CSecurityDesc::IsDaclPresent](#isdaclpresent)|Determina se il descrittore di sicurezza contiene un DACL.|
|[CSecurityDesc::IsDaclProtected](#isdaclprotected)|Determina se l'elenco DACL è configurato per impedire le modifiche.|
|[CSecurityDesc::IsGroupDefaulted](#isgroupdefaulted)|Determina se l'ID di sicurezza gruppo del descrittore di sicurezza (SID) è stata impostata per impostazione predefinita.|
|[CSecurityDesc::IsOwnerDefaulted](#isownerdefaulted)|Determina se il SID del proprietario del descrittore di sicurezza è stato impostato per impostazione predefinita.|
|[CSecurityDesc::IsSaclAutoInherited](#issaclautoinherited)|Determina se l'elenco SACL è configurato per supportare la propagazione automatica.|
|[CSecurityDesc::IsSaclDefaulted](#issacldefaulted)|Determina se il descrittore di sicurezza è configurato con un valore predefinito SACL.|
|[CSecurityDesc::IsSaclPresent](#issaclpresent)|Determina se il descrittore di sicurezza contiene un SACL.|
|[CSecurityDesc::IsSaclProtected](#issaclprotected)|Determina se l'elenco SACL è configurato per impedire le modifiche.|
|[CSecurityDesc::IsSelfRelative](#isselfrelative)|Determina se il descrittore di sicurezza è in formato relativo.|
|[CSecurityDesc::MakeAbsolute](#makeabsolute)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.|
|[CSecurityDesc::MakeSelfRelative](#makeselfrelative)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato relativo.|
|[CSecurityDesc::SetControl](#setcontrol)|Imposta i bit di controllo di un descrittore di sicurezza.|
|[CSecurityDesc::SetDacl](#setdacl)|Imposta le informazioni in un elenco DACL. Se un DACL è già presente nel descrittore di sicurezza, viene sostituito.|
|[CSecurityDesc::SetGroup](#setgroup)|Imposta le informazioni di gruppo primario di un descrittore di sicurezza formato assoluto, sostituendo le informazioni di gruppo primario già presenti.|
|[CSecurityDesc::SetOwner](#setowner)|Imposta le informazioni relative al proprietario di un descrittore di sicurezza formato assoluto, sostituendo eventuali informazioni relative al proprietario sono già presenti.|
|[CSecurityDesc::SetSacl](#setsacl)|Imposta le informazioni in un SACL. Se un SACL è già presente nel descrittore di sicurezza, viene sostituito.|
|[CSecurityDesc::ToString](#tostring)|Converte un descrittore di sicurezza in un formato di stringa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityDesc::operator const SECURITY_DESCRIPTOR *](#operator_const_security_descriptor__star)|Restituisce un puntatore al `SECURITY_DESCRIPTOR` struttura.|
|[CSecurityDesc::operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

Il `SECURITY_DESCRIPTOR` struttura contiene le informazioni di sicurezza associate all'oggetto specificato. Applicazioni utilizzano questa struttura per impostare ed eseguire query sullo stato di sicurezza di un oggetto. Vedere anche [AtlGetSecurityDescriptor](security-global-functions.md#atlgetsecuritydescriptor).

Le applicazioni non deve essere modificato il `SECURITY_DESCRIPTOR` struttura direttamente e invece deve usare i metodi della classe forniti.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

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
Il `CSecurityDesc` oggetto oppure `SECURITY_DESCRIPTOR` struttura da assegnare al nuovo `CSecurityDesc` oggetto.

### <a name="remarks"></a>Note

Il `CSecurityDesc` oggetto può facoltativamente essere creato usando un' `SECURITY_DESCRIPTOR` struttura o un oggetto definito in precedenza `CSecurityDesc` oggetto.

##  <a name="dtor"></a>  CSecurityDesc::~CSecurityDesc

Distruttore.

```
virtual ~CSecurityDesc() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera tutte le risorse allocate.

##  <a name="fromstring"></a>  CSecurityDesc::FromString

Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale e valido.

```
bool FromString(LPCTSTR pstr) throw(...);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa con terminazione null che contiene il [descrittore di sicurezza in formato stringa](/windows/desktop/SecAuthZ/security-descriptor-string-format) da convertire.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione riesce. Genera un'eccezione in caso di errore.

### <a name="remarks"></a>Note

La stringa può essere creata usando [CSecurityDesc::ToString](#tostring). Convertire il descrittore di sicurezza in una stringa rende più semplice archiviare e trasmettere.

Questo metodo chiama [convertstringsecuritydescriptortosecuritydescriptor ha](/windows/desktop/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptora).

##  <a name="getcontrol"></a>  CSecurityDesc::GetControl

Recupera le informazioni dal descrittore di sicurezza di controllo.

```
bool GetControl(SECURITY_DESCRIPTOR_CONTROL* psdc) const throw();
```

### <a name="parameters"></a>Parametri

*psdc*<br/>
Puntatore a un `SECURITY_DESCRIPTOR_CONTROL` struttura che riceve le informazioni di controllo del descrittore di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di errore.

### <a name="remarks"></a>Note

Questo metodo chiama [GetSecurityDescriptorControl](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-getsecuritydescriptorcontrol).

##  <a name="getdacl"></a>  CSecurityDesc::GetDacl

Recupera le informazioni di controllo di accesso discrezionali (DACL) elenco dal descrittore di sicurezza.

```
bool GetDacl(
    CDacl* pDacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDacl*<br/>
Puntatore a un `CDacl` struttura in cui archiviare una copia del DACL del descrittore di sicurezza. Se un ACL discrezionale esiste, il metodo imposta *pDacl* all'indirizzo dell'ACL discrezionale del descrittore di sicurezza. Se un ACL discrezionale non esiste, non viene archiviato alcun valore.

*pbPresent*<br/>
Puntatore a un valore che indica la presenza di un ACL discrezionale nel descrittore di sicurezza specificato. Se il descrittore di sicurezza contiene un ACL discrezionale, questo parametro è impostato su true. Se il descrittore di sicurezza non contiene un ACL discrezionale, questo parametro è impostato su false.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_DACL_DEFAULTED nel `SECURITY_DESCRIPTOR_CONTROL` struttura se un ACL discrezionale esiste per il descrittore di sicurezza. Se questo flag è true, l'ACL discrezionale è stato recuperato da un meccanismo predefinito; Se false, l'ACL discrezionale è stato specificato in modo esplicito da un utente.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di errore.

##  <a name="getgroup"></a>  CSecurityDesc::GetGroup

Recupera le informazioni di gruppo primario dal descrittore di sicurezza.

```
bool GetGroup(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [IDSR](../../atl/reference/csid-class.md) (ID di sicurezza) che riceve una copia del gruppo archiviato nel CDacl.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_GROUP_DEFAULTED nel `SECURITY_DESCRIPTOR_CONTROL` struttura quando restituito dal metodo.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di errore.

##  <a name="getowner"></a>  CSecurityDesc::GetOwner

Recupera informazioni relative al proprietario dal descrittore di sicurezza.

```
bool GetOwner(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [IDSR](../../atl/reference/csid-class.md) (ID di sicurezza) che riceve una copia del gruppo archiviato nel CDacl.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_OWNER_DEFAULTED nel `SECURITY_DESCRIPTOR_CONTROL` struttura quando restituito dal metodo.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di errore.

##  <a name="getpsecurity_descriptor"></a>  CSecurityDesc::GetPSECURITY_DESCRIPTOR

Restituisce un puntatore al `SECURITY_DESCRIPTOR` struttura.

```
const SECURITY_DESCRIPTOR* GetPSECURITY_DESCRIPTOR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore per il [SECURITY_DESCRIPTOR](/windows/desktop/api/winnt/ns-winnt-_security_descriptor) struttura.

##  <a name="getsacl"></a>  CSecurityDesc::GetSacl

Recupera le informazioni dell'elenco SACL di controllo di accesso sistema dal descrittore di sicurezza.

```
bool GetSacl(
    CSacl* pSacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSacl*<br/>
Puntatore a un `CSacl` struttura in cui archiviare una copia del SACL del descrittore di sicurezza. Se un ACL di sistema non esiste, il metodo imposta *pSacl* all'indirizzo del sistema del descrittore di sicurezza ACL. Se un ACL di sistema non esiste, non viene archiviato alcun valore.

*pbPresent*<br/>
Puntatore a un flag, il metodo imposta per indicare la presenza di un ACL di sistema nel descrittore di sicurezza specificato. Se il descrittore di sicurezza contiene un ACL di sistema, questo parametro è impostato su true. Se il descrittore di sicurezza non contiene un ACL di sistema, questo parametro è impostato su false.

*pbDefaulted*<br/>
Puntatore a un flag impostato sul valore del flag SE_SACL_DEFAULTED nel `SECURITY_DESCRIPTOR_CONTROL` struttura se esiste un ACL di sistema per il descrittore di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso di errore.

##  <a name="isdaclautoinherited"></a>  CSecurityDesc::IsDaclAutoInherited

Determina se l'elenco di controllo di accesso discrezionali (DACL) è configurata per supportare la propagazione automatica.

```
bool IsDaclAutoInherited() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un elenco DACL con cui è configurato per supportare la propagazione automatica delle voci di controllo di accesso ereditabile (ACE) agli oggetti figlio esistente. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Questo bit viene impostato il sistema durante l'esecuzione dell'algoritmo l'ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistente.

##  <a name="isdacldefaulted"></a>  CSecurityDesc::IsDaclDefaulted

Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso discrezionali (DACL) predefinito.

```
bool IsDaclDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un DACL predefinito in caso contrario, false.

### <a name="remarks"></a>Note

Questo flag può influire sul modo in cui il sistema considera il DACL, rispetto all'ereditarietà di voce ACE di controllo di accesso. Ad esempio, se il creatore di un oggetto non specifica un DACL, l'oggetto riceve l'elenco DACL predefinito dal token di accesso dell'autore. Il sistema ignora questo flag se non è impostato il flag SE_DACL_PRESENT.

Questo flag viene utilizzato per determinare come deve essere calcolata l'elenco DACL finale sull'oggetto e non verrà archiviato fisicamente nel controllo del descrittore di sicurezza dell'oggetto a protezione diretta.

Per impostare questo flag, usare il [CSecurityDesc:: SetDacl](#setdacl) (metodo).

##  <a name="isdaclpresent"></a>  CSecurityDesc::IsDaclPresent

Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso discrezionali (DACL).

```
bool IsDaclPresent() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un DACL, in caso contrario, false.

### <a name="remarks"></a>Note

Se questo flag non è impostato o se questo flag è impostato e l'elenco DACL è NULL, il descrittore di sicurezza consente di accedere a tutti gli utenti.

Questo flag viene utilizzato per contenere le informazioni di sicurezza specificate da un chiamante fino a quando non è associato a un oggetto a protezione diretta con il descrittore di sicurezza. Una volta associato a un oggetto a protezione diretta con il descrittore di sicurezza, è sempre impostato il flag SE_DACL_PRESENT nel controllo del descrittore di sicurezza.

Per impostare questo flag, usare il [CSecurityDesc:: SetDacl](#setdacl) (metodo).

##  <a name="isdaclprotected"></a>  CSecurityDesc::IsDaclProtected

Determina se l'elenco di controllo di accesso discrezionali (DACL) è configurato per impedire le modifiche.

```
bool IsDaclProtected() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elenco DACL è configurato per impedire che il descrittore di sicurezza attualmente modificando le voci di controllo di accesso ereditabile (ACE). Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, usare il [CSecurityDesc:: SetDacl](#setdacl) (metodo).

Questo metodo supporta la propagazione automatica delle voci ACE ereditabili.

##  <a name="isgroupdefaulted"></a>  CSecurityDesc::IsGroupDefaulted

Determina se l'ID di sicurezza gruppo del descrittore di sicurezza (SID) è stata impostata per impostazione predefinita.

```
bool IsGroupDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza non fornito un meccanismo predefinito anziché il provider originale del descrittore di sicurezza, SID del gruppo. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, usare il [CSecurityDesc:: setGroup](#setgroup) (metodo).

##  <a name="isownerdefaulted"></a>  CSecurityDesc::IsOwnerDefaulted

Determina se l'ID di sicurezza del proprietario del descrittore di sicurezza (SID) è stata impostata per impostazione predefinita.

```
bool IsOwnerDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se un meccanismo predefinito anziché il provider del descrittore di sicurezza, originale fornito SID del proprietario del descrittore di sicurezza. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, usare il [CSecurityDesc:: setowner](#setowner) (metodo).

##  <a name="issaclautoinherited"></a>  CSecurityDesc::IsSaclAutoInherited

Determina se l'elenco di controllo di accesso di sistema (SACL) è configurata per supportare la propagazione automatica.

```
bool IsSaclAutoInherited() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL che è configurato per supportare la propagazione automatica delle voci di controllo di accesso ereditabile (ACE) agli oggetti figlio esistente. Altrimenti restituisce false.

### <a name="remarks"></a>Note

Questo bit viene impostato il sistema durante l'esecuzione dell'algoritmo l'ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistente.

##  <a name="issacldefaulted"></a>  CSecurityDesc::IsSaclDefaulted

Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso predefinita del sistema (SACL).

```
bool IsSaclDefaulted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL, valore predefinito.

### <a name="remarks"></a>Note

Questo flag può influire sul modo in cui il sistema considera il SACL, rispetto all'ereditarietà di voce ACE di controllo di accesso. Il sistema ignora questo flag se non è impostato il flag SE_SACL_PRESENT.

Per impostare questo flag, usare il [CSecurityDesc:: Setsacl](#setsacl) (metodo).

##  <a name="issaclpresent"></a>  CSecurityDesc::IsSaclPresent

Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso di sistema (SACL).

```
bool IsSaclPresent() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza contiene un SACL, in caso contrario, false.

### <a name="remarks"></a>Note

Per impostare questo flag, usare il [CSecurityDesc:: Setsacl](#setsacl) (metodo).

##  <a name="issaclprotected"></a>  CSecurityDesc::IsSaclProtected

Determina se l'elenco di controllo di accesso di sistema (SACL) è configurato per impedire le modifiche.

```
bool IsSaclProtected() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elenco SACL è configurato per impedire che il descrittore di sicurezza attualmente modificando le voci di controllo di accesso ereditabile (ACE). Altrimenti restituisce false.

### <a name="remarks"></a>Note

Per impostare questo flag, usare il [CSecurityDesc:: Setsacl](#setsacl) (metodo).

Questo metodo supporta la propagazione automatica delle voci ACE ereditabili.

##  <a name="isselfrelative"></a>  CSecurityDesc::IsSelfRelative

Determina se il descrittore di sicurezza è in formato relativo.

```
bool IsSelfRelative() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il descrittore di sicurezza è in formato relativo a tutte le informazioni di sicurezza in un blocco di memoria contigue. Restituisce false se il descrittore di sicurezza è in formato assoluto. Per altre informazioni, vedere [Absolute e descrittori di sicurezza Self-Relative](/windows/desktop/SecAuthZ/absolute-and-self-relative-security-descriptors).

##  <a name="makeabsolute"></a>  CSecurityDesc::MakeAbsolute

Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.

```
bool MakeAbsolute() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso contrario.

### <a name="remarks"></a>Note

Un descrittore di sicurezza in formato assoluto contiene i puntatori per le informazioni in che esso contenute, piuttosto che le informazioni di se stesso. Un descrittore di sicurezza in formato relativo contiene le informazioni contenute in un blocco di memoria contigue. In un descrittore di sicurezza relativo un `SECURITY_DESCRIPTOR` struttura inizia sempre le informazioni, ma il descrittore di sicurezza di altri componenti possono seguire la struttura in qualsiasi ordine. Invece di usare gli indirizzi di memoria, i componenti del descrittore di sicurezza relativo vengono identificati dagli offset dall'inizio del descrittore di sicurezza. Questo formato è utile quando un descrittore di sicurezza deve essere archiviato in un disco o trasmesso tramite un protocollo di comunicazione. Per altre informazioni, vedere [Absolute e descrittori di sicurezza Self-Relative](/windows/desktop/SecAuthZ/absolute-and-self-relative-security-descriptors).

##  <a name="makeselfrelative"></a>  CSecurityDesc::MakeSelfRelative

Chiamare questo metodo per convertire il descrittore di sicurezza in formato relativo.

```
bool MakeSelfRelative() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il metodo ha esito positivo, false in caso contrario.

### <a name="remarks"></a>Note

Un descrittore di sicurezza in formato assoluto contiene i puntatori per le informazioni in che esso contenute, invece che contiene le informazioni. Un descrittore di sicurezza in formato relativo contiene le informazioni contenute in un blocco di memoria contigue. In un descrittore di sicurezza relativo un `SECURITY_DESCRIPTOR` struttura inizia sempre le informazioni, ma il descrittore di sicurezza di altri componenti possono seguire la struttura in qualsiasi ordine. Invece di usare gli indirizzi di memoria, i componenti del descrittore di sicurezza vengono identificati dagli offset dall'inizio del descrittore di sicurezza. Questo formato è utile quando un descrittore di sicurezza deve essere archiviato in un disco o trasmesso tramite un protocollo di comunicazione. Per altre informazioni, vedere [Absolute e descrittori di sicurezza Self-Relative](/windows/desktop/SecAuthZ/absolute-and-self-relative-security-descriptors).

##  <a name="operator_eq"></a>  CSecurityDesc::operator =

Operatore di assegnazione.

```
CSecurityDesc& operator= (const SECURITY_DESCRIPTOR& rhs) throw(...);
CSecurityDesc& operator= (const CSecurityDesc& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `SECURITY_DESCRIPTOR` struttura oppure `CSecurityDesc` oggetto da assegnare al `CSecurityDesc` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CSecurityDesc` oggetto.

##  <a name="operator_const_security_descriptor__star"></a>  CSecurityDesc::operator const SECURITY_DESCRIPTOR *

Esegue il cast a un puntatore a un valore di `SECURITY_DESCRIPTOR` struttura.

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
Maschera SECURITY_DESCRIPTOR_CONTROL che indica i bit del controllo da impostare. Per un elenco di flag che possono essere impostati, vedere [SetSecurityDescriptorControl](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

*ControlBitsToSet*<br/>
Maschera che indica i nuovi valori per i bit del controllo specificati dalla SECURITY_DESCRIPTOR_CONTROL il *ControlBitsOfInterest* maschera. Questo parametro può essere una combinazione dei flag elencati per il *ControlBitsOfInterest* parametro.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Questo metodo chiama [SetSecurityDescriptorControl](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

##  <a name="setdacl"></a>  CSecurityDesc::SetDacl

Imposta le informazioni in un elenco di controllo di accesso discrezionali (DACL). Se un DACL è già presente nel descrittore di sicurezza, viene sostituito.

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
Fare riferimento a un `CDacl` oggetto che specifica l'elenco DACL per il descrittore di sicurezza. Questo parametro non deve essere NULL. Per impostare un elenco DACL nel descrittore di sicurezza, la prima forma del metodo deve essere utilizzata con *bPresent* impostato su false.

*bPresent*<br/>
Specifica un flag che indica la presenza di un elenco DACL nel descrittore di sicurezza. Se questo parametro è true, il metodo imposta il flag SE_DACL_PRESENT `SECURITY_DESCRIPTOR_CONTROL` strutturare e utilizza i valori nel *Dacl* e *bDefaulted* parametri. Se è false, il metodo cancella il flag SE_DACL_PRESENT, e *bDefaulted* viene ignorato.

*bDefaulted*<br/>
Specifica un flag che indica l'origine dell'elenco DACL. Se questo flag è true, l'elenco DACL è stato recuperato da un meccanismo predefinito. Se false, l'elenco DACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore nel flag SE_DACL_DEFAULTED del `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro viene omesso, il flag SE_DACL_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

È un'importante differenza tra un oggetto vuoto e un DACL inesistente. Quando un DACL è vuoto, non contiene alcuna voce di controllo di accesso e nessun diritto di accesso è stato esplicitamente concesso. Di conseguenza, in modo implicito è negato l'accesso all'oggetto. Quando un oggetto non dispone di alcun elenco DACL, d'altra parte, protezione non viene assegnata all'oggetto e qualsiasi richiesta di accesso viene concesso.

##  <a name="setgroup"></a>  CSecurityDesc::SetGroup

Imposta le informazioni di gruppo primario di un descrittore di sicurezza formato assoluto, sostituendo le informazioni di gruppo primario già presenti.

```
bool SetGroup(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sid*<br/>
Fare riferimento a un [IDSR](../../atl/reference/csid-class.md) oggetto per il nuovo gruppo primario del descrittore di sicurezza. Questo parametro non deve essere NULL. Un descrittore di sicurezza può essere contrassegnato come non hanno un DACL né un SACL, ma deve disporre di un gruppo e un proprietario, anche questi sono il SID NULL (ovvero un SID predefinito con un significato speciale).

*bDefaulted*<br/>
Indica se le informazioni sul gruppo primario è stati derivati da un meccanismo predefinito. Se questo valore è true, si tratta di informazioni predefinite e il metodo archivia questo valore come il flag di SE_GROUP_DEFAULTED il `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro è zero, il flag SE_GROUP_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

##  <a name="setowner"></a>  CSecurityDesc::SetOwner

Imposta le informazioni relative al proprietario di un descrittore di sicurezza formato assoluto. Sostituisce le informazioni di proprietario già presenti.

```
bool SetOwner(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sid*<br/>
Il [IDSR](../../atl/reference/csid-class.md) oggetto per il nuovo proprietario primario del descrittore di sicurezza. Questo parametro non deve essere NULL.

*bDefaulted*<br/>
Indica se le informazioni sul proprietario è derivati da un meccanismo predefinito. Se questo valore è true, è informazioni predefinite. Il metodo archivia questo valore come il flag di SE_OWNER_DEFAULTED il `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro è zero, il flag SE_OWNER_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

##  <a name="setsacl"></a>  CSecurityDesc::SetSacl

Imposta le informazioni in un elenco di controllo di accesso di sistema (SACL). Se un SACL è già presente nel descrittore di sicurezza, viene sostituito.

```
bool SetSacl(const CSacl& Sacl, bool bDefaulted = false) throw(...);
```

### <a name="parameters"></a>Parametri

*Sacl*<br/>
Puntatore a un `CSacl` oggetto che specifica l'elenco SACL per il descrittore di sicurezza. Questo parametro non deve essere NULL e deve essere un oggetto CSacl. Differenza DACL, non si verifica alcuna differenza tra NULL e un SACL vuoto, come oggetti SACL non specificano i diritti di accesso, solo le informazioni di controllo.

*bDefaulted*<br/>
Specifica un flag che indica l'origine del SACL. Se questo flag è true, l'elenco SACL è stato recuperato da un meccanismo predefinito. Se false, l'elenco SACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore nel flag SE_SACL_DEFAULTED del `SECURITY_DESCRIPTOR_CONTROL` struttura. Se questo parametro viene omesso, il flag SE_SACL_DEFAULTED viene cancellato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

##  <a name="tostring"></a>  CSecurityDesc::ToString

Converte un descrittore di sicurezza in un formato di stringa.

```
bool ToString(
    CString* pstr, SECURITY_INFORMATION si = OWNER_SECURITY_INFORMATION |
    GROUP_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION |
    SACL_SECURITY_INFORMATION) const throw(...);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa con terminazione null che riceverà il [descrittore di sicurezza in formato stringa](/windows/desktop/SecAuthZ/security-descriptor-string-format).

*si*<br/>
Specifica una combinazione di flag di bit SECURITY_INFORMATION per indicare i componenti del descrittore di sicurezza da includere nella stringa di output.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Una volta il descrittore di sicurezza in formato stringa, può più facilmente essere archiviato o trasmessi. Usare il `CSecurityDesc::FromString` metodo per convertire la stringa in un descrittore di sicurezza.

Il *sistema internazionale di misura* parametro può contenere i flag SECURITY_INFORMATION seguenti:

|Value|Significato|
|-----------|-------------|
|OWNER_SECURITY_INFORMATION|Includere il proprietario.|
|GROUP_SECURITY_INFORMATION|Includere il gruppo primario.|
|DACL_SECURITY_INFORMATION|Includere l'elenco DACL.|
|SACL_SECURITY_INFORMATION|Includere l'elenco SACL.|

Se l'elenco DACL è NULL e il bit del controllo SE_DACL_PRESENT è impostato nel descrittore di sicurezza di input, il metodo ha esito negativo.

Se l'elenco DACL è NULL e il bit del controllo SE_DACL_PRESENT non è impostato nel descrittore di sicurezza di input, la stringa descrittore di sicurezza risultante non è un componente di unità d:. Visualizzare [formato di stringa del descrittore di sicurezza](/windows/desktop/SecAuthZ/security-descriptor-string-format) per altri dettagli.

Questo metodo chiama [convertstringsecuritydescriptortosecuritydescriptor ha](/windows/desktop/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptora).

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_DESCRIPTOR](/windows/desktop/api/winnt/ns-winnt-_security_descriptor)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
