---
title: Classe CSecurityDesc | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CSecurityDesc class
ms.assetid: 3767a327-378f-4690-ba40-4d9f6a1f5ee4
caps.latest.revision: 24
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 6dbd586ee3ee07d3c567fa0aae46446397dfb62b
ms.lasthandoff: 02/24/2017

---
# <a name="csecuritydesc-class"></a>Classe CSecurityDesc
Questa classe è un wrapper per il **SECURITY_DESCRIPTOR** struttura.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CSecurityDesc
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityDesc::CSecurityDesc](#csecuritydesc)|Costruttore.|  
|[CSecurityDesc:: ~ CSecurityDesc](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityDesc::FromString](#fromstring)|Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale e valido.|  
|[CSecurityDesc::GetControl](#getcontrol)|Recupera le informazioni dal descrittore di sicurezza di controllo.|  
|[CSecurityDesc::GetDacl](#getdacl)|Recupera le informazioni di controllo di accesso discrezionali elenco DACL dal descrittore di sicurezza.|  
|[CSecurityDesc::GetGroup](#getgroup)|Recupera le informazioni di gruppo primario dal descrittore di sicurezza.|  
|[CSecurityDesc::GetOwner](#getowner)|Recupera informazioni relative al proprietario dal descrittore di sicurezza.|  
|[CSecurityDesc::GetPSECURITY_DESCRIPTOR](#getpsecurity_descriptor)|Restituisce un puntatore per il **SECURITY_DESCRIPTOR** struttura.|  
|[CSecurityDesc::GetSacl](#getsacl)|Recupera le informazioni di elenco (SACL) controllo di accesso di sistema dal descrittore di sicurezza.|  
|[CSecurityDesc::IsDaclAutoInherited](#isdaclautoinherited)|Determina se l'elenco DACL è configurato per supportare la propagazione automatica.|  
|[CSecurityDesc::IsDaclDefaulted](#isdacldefaulted)|Determina se il descrittore di sicurezza è configurato con un DACL predefinito.|  
|[CSecurityDesc::IsDaclPresent](#isdaclpresent)|Determina se il descrittore di sicurezza contiene un DACL.|  
|[CSecurityDesc::IsDaclProtected](#isdaclprotected)|Determina se l'elenco DACL è configurato per impedire modifiche.|  
|[CSecurityDesc::IsGroupDefaulted](#isgroupdefaulted)|Determina se l'ID di sicurezza di gruppo del descrittore di protezione (SID) è stata impostata per impostazione predefinita.|  
|[CSecurityDesc::IsOwnerDefaulted](#isownerdefaulted)|Determina se il SID del proprietario del descrittore di protezione è stato impostato per impostazione predefinita.|  
|[CSecurityDesc::IsSaclAutoInherited](#issaclautoinherited)|Determina se il SACL è configurato per supportare la propagazione automatica.|  
|[CSecurityDesc::IsSaclDefaulted](#issacldefaulted)|Determina se il descrittore di sicurezza è configurato con un SACL predefinito.|  
|[CSecurityDesc::IsSaclPresent](#issaclpresent)|Determina se il descrittore di sicurezza contiene un SACL.|  
|[CSecurityDesc::IsSaclProtected](#issaclprotected)|Determina se il SACL è configurato per impedire modifiche.|  
|[CSecurityDesc::IsSelfRelative](#isselfrelative)|Determina se il descrittore di sicurezza è in formato relativo.|  
|[CSecurityDesc::MakeAbsolute](#makeabsolute)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.|  
|[CSecurityDesc::MakeSelfRelative](#makeselfrelative)|Chiamare questo metodo per convertire il descrittore di sicurezza in formato relativo.|  
|[CSecurityDesc::SetControl](#setcontrol)|Imposta i bit di controllo di un descrittore di sicurezza.|  
|[CSecurityDesc::SetDacl](#setdacl)|Imposta le informazioni in un elenco DACL. Se un DACL è già presente nel descrittore di sicurezza, viene sostituita.|  
|[CSecurityDesc::SetGroup](#setgroup)|Imposta le informazioni di gruppo primario di un descrittore di sicurezza formato assoluto, sostituire le informazioni di gruppo primario è già presente.|  
|[CSecurityDesc::SetOwner](#setowner)|Imposta le informazioni relative al proprietario di un descrittore di sicurezza formato assoluto, sostituire le informazioni di proprietario è già presente.|  
|[CSecurityDesc::SetSacl](#setsacl)|Imposta le informazioni in un SACL. Se un SACL è già presente nel descrittore di sicurezza, viene sostituita.|  
|[CSecurityDesc::ToString](#tostring)|Converte un descrittore di sicurezza in un formato di stringa.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[SECURITY_DESCRIPTOR const CSecurityDesc::operator *](#operator_const_security_descriptor__star)|Restituisce un puntatore per il **SECURITY_DESCRIPTOR** struttura.|  
|[CSecurityDesc::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Il **SECURITY_DESCRIPTOR** struttura contiene le informazioni di sicurezza associate all'oggetto specificato. Applicazioni utilizzano questa struttura per impostare ed eseguire query sullo stato di sicurezza di un oggetto. Vedere anche [AtlGetSecurityDescriptor](http://msdn.microsoft.com/library/233578b8-dcc5-4f51-8e62-7cdcc2ff6b11).  
  
 Le applicazioni non è necessario modificare il **SECURITY_DESCRIPTOR** struttura direttamente e invece necessario utilizzare i metodi della classe forniti.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [il controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="csecuritydesc"></a>CSecurityDesc::CSecurityDesc  
 Costruttore.  
  
```
CSecurityDesc() throw();
CSecurityDesc(const CSecurityDesc& rhs) throw(... );  
CSecurityDesc(const SECURITY_DESCRIPTOR& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `CSecurityDesc` oggetto o **SECURITY_DESCRIPTOR** struttura da assegnare al nuovo `CSecurityDesc` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CSecurityDesc` oggetto può essere creato facoltativamente utilizzando un **SECURITY_DESCRIPTOR** struttura o definita in precedenza `CSecurityDesc` oggetto.  
  
##  <a name="dtor"></a>CSecurityDesc:: ~ CSecurityDesc  
 Distruttore.  
  
```
virtual ~CSecurityDesc() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera tutte le risorse allocate.  
  
##  <a name="fromstring"></a>CSecurityDesc::FromString  
 Converte un descrittore di sicurezza in formato stringa in un descrittore di sicurezza funzionale e valido.  
  
```
bool FromString(LPCTSTR pstr) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pstr`  
 Puntatore a una stringa con terminazione null che contiene il [descrittore di sicurezza in formato stringa](http://msdn.microsoft.com/library/windows/desktop/aa379570) da convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'esito positivo. Genera un'eccezione in caso di errore.  
  
### <a name="remarks"></a>Note  
 La stringa può essere creata utilizzando [CSecurityDesc::ToString](#tostring). Convertire il descrittore di sicurezza in una stringa rende più semplice archiviare e trasmettere.  
  
 Questo metodo è disponibile solo con Windows 2000 e versioni successive poiché chiama [convertstringsecuritydescriptortosecuritydescriptor ha](http://msdn.microsoft.com/library/windows/desktop/aa376401).  
  
##  <a name="getcontrol"></a>CSecurityDesc::GetControl  
 Recupera le informazioni dal descrittore di sicurezza di controllo.  
  
```
bool GetControl(SECURITY_DESCRIPTOR_CONTROL* psdc) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *psdc*  
 Puntatore a un **SECURITY_DESCRIPTOR_CONTROL** struttura che riceve le informazioni di controllo del descrittore di protezione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il metodo ha esito positivo, false in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo è solo significativi quando si utilizza Windows 2000 o versione successiva, come chiama [GetSecurityDescriptorControl](http://msdn.microsoft.com/library/windows/desktop/aa446647).  
  
##  <a name="getdacl"></a>CSecurityDesc::GetDacl  
 Recupera le informazioni di controllo di accesso discrezionali elenco DACL dal descrittore di sicurezza.  
  
```
bool GetDacl(
    CDacl* pDacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pDacl`  
 Puntatore a un `CDacl` struttura in cui archiviare una copia dell'elenco DACL del descrittore di protezione. Se un discrezionale **ACL** esiste, il metodo imposta `pDacl` per l'indirizzo del gruppo di protezione del discrezionale descrittore **ACL**. Se un discrezionale **ACL** non esiste, viene memorizzato alcun valore.  
  
 `pbPresent`  
 Puntatore a un valore che indica la presenza di un discrezionale **ACL** nel descrittore di sicurezza specificato. Se il descrittore di sicurezza contiene un discrezionale **ACL**, questo parametro è impostato su true. Se il descrittore di sicurezza non contiene un discrezionale **ACL**, questo parametro è impostato su false.  
  
 `pbDefaulted`  
 Puntatore a un flag impostato sul valore del flag SE_DACL_DEFAULTED nel **SECURITY_DESCRIPTOR_CONTROL** struttura se un discrezionale **ACL** esiste per il descrittore di sicurezza. Se questo flag è impostato su true, il discrezionale **ACL** è stata recuperata da un meccanismo predefinito; se false, il discrezionale **ACL** è stato specificato in modo esplicito da un utente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il metodo ha esito positivo, false in caso di errore.  
  
##  <a name="getgroup"></a>CSecurityDesc::GetGroup  
 Recupera le informazioni di gruppo primario dal descrittore di sicurezza.  
  
```
bool GetGroup(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSid`  
 Puntatore a un [IDSR](../../atl/reference/csid-class.md) (SID) che riceve una copia del gruppo di cui è archiviato il CDacl.  
  
 `pbDefaulted`  
 Puntatore a un flag impostato sul valore del flag nella SE_GROUP_DEFAULTED di **SECURITY_DESCRIPTOR_CONTROL** struttura quando il metodo restituisce.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il metodo ha esito positivo, false in caso di errore.  
  
##  <a name="getowner"></a>CSecurityDesc::GetOwner  
 Recupera informazioni relative al proprietario dal descrittore di sicurezza.  
  
```
bool GetOwner(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSid`  
 Puntatore a un [IDSR](../../atl/reference/csid-class.md) (SID) che riceve una copia del gruppo di cui è archiviato il CDacl.  
  
 `pbDefaulted`  
 Puntatore a un flag impostato sul valore del flag nella SE_OWNER_DEFAULTED di **SECURITY_DESCRIPTOR_CONTROL** struttura quando il metodo restituisce.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il metodo ha esito positivo, false in caso di errore.  
  
##  <a name="getpsecurity_descriptor"></a>CSecurityDesc::GetPSECURITY_DESCRIPTOR  
 Restituisce un puntatore per il **SECURITY_DESCRIPTOR** struttura.  
  
```
const SECURITY_DESCRIPTOR* GetPSECURITY_DESCRIPTOR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il [SECURITY_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561) struttura.  
  
##  <a name="getsacl"></a>CSecurityDesc::GetSacl  
 Recupera le informazioni di elenco (SACL) controllo di accesso di sistema dal descrittore di sicurezza.  
  
```
bool GetSacl(
    CSacl* pSacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSacl`  
 Puntatore a un `CSacl` struttura in cui archiviare una copia del SACL del descrittore di protezione. Se un sistema **ACL** esiste, il metodo imposta `pSacl` all'indirizzo del sistema del descrittore di protezione **ACL**. Se un sistema **ACL** non esiste, viene memorizzato alcun valore.  
  
 `pbPresent`  
 Puntatore a un flag imposta il metodo per indicare la presenza di un sistema **ACL** nel descrittore di sicurezza specificato. Se il descrittore di sicurezza contiene un sistema **ACL**, questo parametro è impostato su true. Se il descrittore di sicurezza non contiene un sistema **ACL**, questo parametro è impostato su false.  
  
 `pbDefaulted`  
 Puntatore a un flag impostato sul valore del flag nella SE_SACL_DEFAULTED di **SECURITY_DESCRIPTOR_CONTROL** struttura se un sistema **ACL** esiste per il descrittore di sicurezza.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il metodo ha esito positivo, false in caso di errore.  
  
##  <a name="isdaclautoinherited"></a>CSecurityDesc::IsDaclAutoInherited  
 Determina se l'elenco di controllo di accesso discrezionali (DACL) è configurato per supportare la propagazione automatica.  
  
```
bool IsDaclAutoInherited() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza contiene un elenco DACL con cui è configurato per supportare la propagazione automatica delle voci di controllo di accesso ereditabile (ACE) per gli oggetti figlio. Altrimenti restituisce false.  
  
### <a name="remarks"></a>Note  
 Il sistema questo bit viene impostato quando esegue l'algoritmo di ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistente.  
  
##  <a name="isdacldefaulted"></a>CSecurityDesc::IsDaclDefaulted  
 Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso discrezionali (DACL) predefinito.  
  
```
bool IsDaclDefaulted() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza contiene un DACL predefinito.  
  
### <a name="remarks"></a>Note  
 Questo flag può influire sul modo in cui il sistema considera il DACL, per quanto riguarda l'ereditarietà di voce ACE di controllo di accesso. Ad esempio, se l'autore di un oggetto non specifica un elenco DACL, l'oggetto riceve il DACL predefinito dal token di accesso del creatore. Il sistema di questo flag viene ignorato se non è impostato il flag SE_DACL_PRESENT.  
  
 Questo flag viene utilizzato per determinare come è possibile calcolare il DACL finale sull'oggetto e non è fisicamente archiviato nel controllo del descrittore di sicurezza dell'oggetto a protezione diretta.  
  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetDacl](#setdacl) metodo.  
  
##  <a name="isdaclpresent"></a>CSecurityDesc::IsDaclPresent  
 Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso discrezionali (DACL).  
  
```
bool IsDaclPresent() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza contiene un DACL.  
  
### <a name="remarks"></a>Note  
 Se questo flag non è impostato o se questo flag è impostato e l'elenco DACL è NULL, il descrittore di sicurezza consente di accedere a tutti gli utenti.  
  
 Questo flag viene utilizzato per contenere le informazioni di sicurezza specificate da un chiamante finché il descrittore di sicurezza è associato a un oggetto a protezione diretta. Una volta che il descrittore di sicurezza è associato a un oggetto a protezione diretta, il flag SE_DACL_PRESENT è sempre impostato nel controllo del descrittore di sicurezza.  
  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetDacl](#setdacl) metodo.  
  
##  <a name="isdaclprotected"></a>CSecurityDesc::IsDaclProtected  
 Determina se l'elenco di controllo di accesso discrezionali (DACL) è configurato per impedire modifiche.  
  
```
bool IsDaclProtected() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'elenco DACL è configurato per impedire che venga modificato da voci di controllo di accesso ereditabile (ACE) il descrittore di sicurezza. Altrimenti restituisce false.  
  
### <a name="remarks"></a>Note  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetDacl](#setdacl) metodo.  
  
 Questo metodo è solo significativo per Windows 2000 o versioni successive, solo Windows 2000 supporta la propagazione automatica delle voci ACE ereditabili.  
  
##  <a name="isgroupdefaulted"></a>CSecurityDesc::IsGroupDefaulted  
 Determina se l'ID di sicurezza di gruppo del descrittore di protezione (SID) è stata impostata per impostazione predefinita.  
  
```
bool IsGroupDefaulted() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza non fornito un meccanismo predefinito anziché il provider originale del descrittore di sicurezza, SID di gruppo. Altrimenti restituisce false.  
  
### <a name="remarks"></a>Note  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetGroup](#setgroup) metodo.  
  
##  <a name="isownerdefaulted"></a>CSecurityDesc::IsOwnerDefaulted  
 Determina se l'ID di sicurezza del proprietario del descrittore di protezione (SID) è stata impostata per impostazione predefinita.  
  
```
bool IsOwnerDefaulted() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se un meccanismo predefinito anziché il provider originale del descrittore di protezione, il SID del proprietario del descrittore di protezione. Altrimenti restituisce false.  
  
### <a name="remarks"></a>Note  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetOwner](#setowner) metodo.  
  
##  <a name="issaclautoinherited"></a>CSecurityDesc::IsSaclAutoInherited  
 Determina se l'elenco di controllo di accesso di sistema (SACL) è configurato per supportare la propagazione automatica.  
  
```
bool IsSaclAutoInherited() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza contiene un SACL che è configurato per supportare la propagazione automatica delle voci di controllo di accesso ereditabile (ACE) per gli oggetti figlio. Altrimenti restituisce false.  
  
### <a name="remarks"></a>Note  
 Il sistema questo bit viene impostato quando esegue l'algoritmo di ereditarietà automatica per l'oggetto e i relativi oggetti figlio esistente.  
  
##  <a name="issacldefaulted"></a>CSecurityDesc::IsSaclDefaulted  
 Determina se il descrittore di sicurezza è configurato con un elenco di controllo di accesso di sistema (SACL) predefinito.  
  
```
bool IsSaclDefaulted() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza contiene un SACL, impostazione predefinita.  
  
### <a name="remarks"></a>Note  
 Questo flag può influire sul modo in cui il sistema considera il SACL, per quanto riguarda l'ereditarietà di voce ACE di controllo di accesso. Il sistema di questo flag viene ignorato se non è impostato il flag SE_SACL_PRESENT.  
  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetSacl](#setsacl) metodo.  
  
##  <a name="issaclpresent"></a>CSecurityDesc::IsSaclPresent  
 Determina se il descrittore di sicurezza contiene un elenco di controllo di accesso di sistema (SACL).  
  
```
bool IsSaclPresent() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza contiene un SACL.  
  
### <a name="remarks"></a>Note  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetSacl](#setsacl) metodo.  
  
##  <a name="issaclprotected"></a>CSecurityDesc::IsSaclProtected  
 Determina se l'elenco di controllo di accesso di sistema (SACL) è configurato per impedire modifiche.  
  
```
bool IsSaclProtected() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il SACL è configurato per impedire che venga modificato da voci di controllo di accesso ereditabile (ACE) il descrittore di sicurezza. Altrimenti restituisce false.  
  
### <a name="remarks"></a>Note  
 Per impostare questo flag, utilizzare il [CSecurityDesc::SetSacl](#setsacl) metodo.  
  
 Questo metodo è solo significativo per Windows 2000 o versioni successive, solo Windows 2000 supporta la propagazione automatica delle voci ACE ereditabili.  
  
##  <a name="isselfrelative"></a>CSecurityDesc::IsSelfRelative  
 Determina se il descrittore di sicurezza è in formato relativo.  
  
```
bool IsSelfRelative() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il descrittore di sicurezza è in formato relativo a tutte le informazioni di sicurezza in un blocco di memoria contiguo. Restituisce false se il descrittore di sicurezza è in formato assoluto. Per ulteriori informazioni, vedere [assoluto e descrittori di protezione Self-Relative](http://msdn.microsoft.com/library/windows/desktop/aa374807).  
  
##  <a name="makeabsolute"></a>CSecurityDesc::MakeAbsolute  
 Chiamare questo metodo per convertire il descrittore di sicurezza in formato assoluto.  
  
```
bool MakeAbsolute() throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il metodo ha esito positivo, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 Un descrittore di sicurezza in formato assoluto contiene puntatori alle informazioni in che esso contenute, anziché le informazioni. Un descrittore di sicurezza in formato relativo contiene le informazioni contenute in un blocco di memoria contiguo. Un descrittore di sicurezza relativo, un **SECURITY_DESCRIPTOR** struttura inizia sempre le informazioni, ma il descrittore di protezione di altri componenti possono seguire la struttura in qualsiasi ordine. Invece di utilizzare gli indirizzi di memoria, i componenti del descrittore di protezione relativo sono identificati da offset dall'inizio del descrittore di sicurezza. Questo formato è utile quando un descrittore di sicurezza deve essere archiviato su un disco o trasmesso tramite un protocollo di comunicazione. Per ulteriori informazioni, vedere [assoluto e descrittori di protezione Self-Relative](http://msdn.microsoft.com/library/windows/desktop/aa374807).  
  
##  <a name="makeselfrelative"></a>CSecurityDesc::MakeSelfRelative  
 Chiamare questo metodo per convertire il descrittore di sicurezza in formato relativo.  
  
```
bool MakeSelfRelative() throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il metodo ha esito positivo, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 Un descrittore di sicurezza in formato assoluto contiene puntatori alle informazioni in che esso contenute, piuttosto che contenente le informazioni. Un descrittore di sicurezza in formato relativo contiene le informazioni contenute in un blocco di memoria contiguo. Un descrittore di sicurezza relativo, un **SECURITY_DESCRIPTOR** struttura inizia sempre le informazioni, ma il descrittore di protezione di altri componenti possono seguire la struttura in qualsiasi ordine. Invece di utilizzare gli indirizzi di memoria, i componenti del descrittore di protezione sono identificati da offset dall'inizio del descrittore di sicurezza. Questo formato è utile quando un descrittore di sicurezza deve essere archiviato su un disco o trasmesso tramite un protocollo di comunicazione. Per ulteriori informazioni, vedere [assoluto e descrittori di protezione Self-Relative](http://msdn.microsoft.com/library/windows/desktop/aa374807).  
  
##  <a name="operator_eq"></a>CSecurityDesc::operator =  
 Operatore di assegnazione.  
  
```
CSecurityDesc& operator= (const SECURITY_DESCRIPTOR& rhs) throw(...);  
CSecurityDesc& operator= (const CSecurityDesc& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il **SECURITY_DESCRIPTOR** struttura o `CSecurityDesc` oggetto da assegnare al `CSecurityDesc` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CSecurityDesc` oggetto.  
  
##  <a name="operator_const_security_descriptor__star"></a>SECURITY_DESCRIPTOR const CSecurityDesc::operator *  
 Esegue il cast a un puntatore a un valore di **SECURITY_DESCRIPTOR** struttura.  
  
```  
operator const SECURITY_DESCRIPTOR *() const throw();
```  
  
##  <a name="setcontrol"></a>CSecurityDesc::SetControl  
 Imposta i bit di controllo di un descrittore di sicurezza.  
  
```
bool SetControl(
    SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest, 
    SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `ControlBitsOfInterest`  
 Oggetto **SECURITY_DESCRIPTOR_CONTROL** maschera che indica i bit di controllo da impostare. Per un elenco di flag che può essere impostato, vedere [SetSecurityDescriptorControl](http://msdn.microsoft.com/library/windows/desktop/aa379582\(v=vs.85\).aspx).  
  
 `ControlBitsToSe`t  
 Maschera `SECURITY_DESCRIPTOR_CONTROL` che indica i nuovi valori per i bit del controllo specificati dalla maschera `ControlBitsOfInterest`. Questo parametro può essere una combinazione dei flag elencati per il parametro `ControlBitsOfInterest`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Questo metodo è disponibile solo in Windows 2000 e versioni successive, poiché chiama [SetSecurityDescriptorControl](http://msdn.microsoft.com/library/windows/desktop/aa379582\(v=vs.85\).aspx).  
  
##  <a name="setdacl"></a>CSecurityDesc::SetDacl  
 Imposta le informazioni in un elenco di controllo di accesso discrezionali (DACL). Se un DACL è già presente nel descrittore di sicurezza, viene sostituita.  
  
```
inline void SetDacl(  
    bool bPresent = true,
    bool bDefaulted = false) throw(...);

inline void SetDacl(  
    const CDacl& Dacl,
    bool bDefaulted = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *DACL*  
 Fare riferimento a un `CDacl` oggetto che specifica l'elenco DACL per il descrittore di sicurezza. Questo parametro non deve essere NULL. Per impostare un elenco DACL nel descrittore di protezione, il primo form del metodo deve essere utilizzato con `bPresent` impostato su false.  
  
 `bPresent`  
 Specifica un flag che indica la presenza di un elenco DACL nel descrittore di sicurezza. Se questo parametro è true, il metodo imposta il flag SE_DACL_PRESENT nel **SECURITY_DESCRIPTOR_CONTROL** struttura e utilizza i valori di *Dacl* e `bDefaulted` parametri. Se è false, il metodo cancella il flag SE_DACL_PRESENT, e `bDefaulted` viene ignorato.  
  
 `bDefaulted`  
 Specifica un flag che indica l'origine dell'elenco DACL. Se questo flag è true, il DACL è stato recuperato da un meccanismo predefinito. Se false, l'elenco DACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore in bandiera SE_DACL_DEFAULTED di **SECURITY_DESCRIPTOR_CONTROL** struttura. Se questo parametro viene omesso, il flag SE_DACL_DEFAULTED viene cancellato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Esiste un'importante differenza tra un oggetto vuoto e un DACL non esistente. Quando un DACL è vuoto, non contiene le voci di alcun controllo di accesso e diritti di accesso non siano state concesse in modo esplicito. Di conseguenza, in modo implicito è negato l'accesso all'oggetto. Quando un oggetto non dispone di alcun elenco DACL, d'altra parte, protezione non è assegnata all'oggetto e qualsiasi richiesta di accesso viene concesso.  
  
##  <a name="setgroup"></a>CSecurityDesc::SetGroup  
 Imposta le informazioni di gruppo primario di un descrittore di sicurezza formato assoluto, sostituire le informazioni di gruppo primario è già presente.  
  
```
bool SetGroup(const CSid& Sid, bool bDefaulted = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `Sid`  
 Fare riferimento a un [IDSR](../../atl/reference/csid-class.md) oggetto per il nuovo gruppo primario del descrittore di protezione. Questo parametro non deve essere NULL. Un descrittore di sicurezza può essere contrassegnato come non hanno un DACL né un SACL, ma deve disporre di un gruppo e un proprietario, anche questi sono il SID NULL (che è un SID incorporato con un significato speciale).  
  
 `bDefaulted`  
 Indica se le informazioni del gruppo primario è state derivate da un meccanismo predefinito. Se questo valore è true, si tratta di informazioni predefinito e il metodo memorizza questo valore come il flag SE_GROUP_DEFAULTED nel **SECURITY_DESCRIPTOR_CONTROL** struttura. Se questo parametro è zero, il flag SE_GROUP_DEFAULTED viene cancellato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="setowner"></a>CSecurityDesc::SetOwner  
 Imposta le informazioni relative al proprietario di un descrittore di sicurezza formato assoluto. Sostituisce le informazioni sul proprietario è già presente.  
  
```
bool SetOwner(const CSid& Sid, bool bDefaulted = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `Sid`  
 Il [IDSR](../../atl/reference/csid-class.md) oggetto per il nuovo proprietario primario del descrittore di protezione. Questo parametro non deve essere NULL.  
  
 `bDefaulted`  
 Indica se le informazioni sul proprietario è derivati da un meccanismo predefinito. Se questo valore è true, è informazioni predefinite. Il metodo memorizza questo valore come il flag SE_OWNER_DEFAULTED nel **SECURITY_DESCRIPTOR_CONTROL** struttura. Se questo parametro è zero, il flag SE_OWNER_DEFAULTED viene cancellato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="setsacl"></a>CSecurityDesc::SetSacl  
 Imposta le informazioni in un elenco di controllo di accesso di sistema (SACL). Se un SACL è già presente nel descrittore di sicurezza, viene sostituita.  
  
```
bool SetSacl(const CSacl& Sacl, bool bDefaulted = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *SACL*  
 Puntatore a un `CSacl` oggetto che specifica il SACL per il descrittore di sicurezza. Questo parametro non deve essere NULL e deve essere un oggetto CSacl. A differenza di DACL, non esiste alcuna differenza tra NULL e un SACL vuoto, come oggetti SACL non specificano i diritti di accesso, solo le informazioni di controllo.  
  
 `bDefaulted`  
 Specifica un flag che indica l'origine del SACL. Se questo flag è true, il SACL è stato recuperato da un meccanismo predefinito. Se false, il SACL è stato specificato in modo esplicito da un utente. Il metodo archivia questo valore in bandiera SE_SACL_DEFAULTED di **SECURITY_DESCRIPTOR_CONTROL** struttura. Se questo parametro viene omesso, il flag SE_SACL_DEFAULTED viene cancellato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="tostring"></a>CSecurityDesc::ToString  
 Converte un descrittore di sicurezza in un formato di stringa.  
  
```
bool ToString(
    CString* pstr, SECURITY_INFORMATION si = OWNER_SECURITY_INFORMATION |
    GROUP_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION |
    SACL_SECURITY_INFORMATION) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pstr`  
 Puntatore a una stringa con terminazione null che riceverà il [descrittore di sicurezza in formato stringa](http://msdn.microsoft.com/library/windows/desktop/aa379570).  
  
 `si`  
 Specifica una combinazione di flag di bit SECURITY_INFORMATION per indicare i componenti del descrittore di sicurezza da includere nella stringa di output.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Una volta che il descrittore di sicurezza è in formato stringa, più facilmente archiviato o trasmessi. Utilizzare il `CSecurityDesc::FromString` metodo per convertire la stringa in un descrittore di sicurezza.  
  
 Il `si` parametro può contenere i flag SECURITY_INFORMATION seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|OWNER_SECURITY_INFORMATION|Includere il proprietario.|  
|GROUP_SECURITY_INFORMATION|Includere il gruppo primario.|  
|DACL_SECURITY_INFORMATION|Includere l'elenco DACL.|  
|SACL_SECURITY_INFORMATION|Includere il SACL.|  
  
 Se il DACL è NULL e il bit di controllo SE_DACL_PRESENT viene impostato nel descrittore di sicurezza di input, il metodo ha esito negativo.  
  
 Se il DACL è NULL e il bit di controllo SE_DACL_PRESENT non viene impostato nel descrittore di sicurezza di input, la stringa del descrittore di protezione risultante dispone di un componente d:. Vedere [Security Descriptor String Format](http://msdn.microsoft.com/library/windows/desktop/aa379570) per ulteriori dettagli.  
  
 Questo metodo è disponibile solo con Windows 2000 e versioni successive, poiché chiama [convertstringsecuritydescriptortosecuritydescriptor ha](http://msdn.microsoft.com/library/windows/desktop/aa376401).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [SECURITY_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di protezione](../../atl/reference/security-global-functions.md)

