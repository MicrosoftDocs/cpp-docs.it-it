---
title: Classe CSacl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CSacl
- ATL::CSacl
- CSacl
dev_langs:
- C++
helpviewer_keywords:
- CSacl class
ms.assetid: 8624889b-aebc-4183-9d29-a20f07837f05
caps.latest.revision: 22
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
ms.openlocfilehash: 50f10ab765648d4b587a941ccf24726b53f14c88
ms.lasthandoff: 02/24/2017

---
# <a name="csacl-class"></a>Classe CSacl
Questa classe è un wrapper per una struttura SACL (elenco di controllo di accesso di sistema).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CSacl : public CAcl
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::CSacl](#csacl)|Costruttore.|  
|[CSacl:: ~ CSacl](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::AddAuditAce](#addauditace)|Aggiunge una voce di controllo di accesso (ACE) di controllo per il `CSacl` oggetto.|  
|[CSacl::GetAceCount](#getacecount)|Restituisce il numero di voci di controllo di accesso (ACE) di `CSacl` oggetto.|  
|[CSacl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce di controllo di accesso) di **CSacl** oggetto.|  
|[CSacl::RemoveAllAces](#removeallaces)|Rimuove tutte le voci ACE nel `CSacl` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Un SACL contiene voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di protezione di un controller di dominio. Si noti che un SACL genera le voci di log solo sul controller di dominio in cui si è verificato durante il tentativo di accesso, non su ogni controller di dominio che contiene una replica dell'oggetto.  
  
 Per impostare o recuperare il SACL nel descrittore di protezione di un oggetto, è necessario attivare il privilegio SE_SECURITY_NAME nel token di accesso del thread richiedente. È possibile concedere ad altri utenti o gruppi al gruppo administrators ha il privilegio concesso per impostazione predefinita. Con il privilegio concesso non è tutto ciò che è necessario: prima di poter eseguire l'operazione definita tramite il privilegio, il privilegio deve essere abilitato nel token di accesso di sicurezza per rendere effettive. Il modello consente di privilegi per essere abilitato solo per le operazioni di sistema specifico e quindi disabilitata quando non sono più necessari. Vedere [AtlGetSacl](http://msdn.microsoft.com/library/1d69611f-d8a7-467b-9d57-cbe2f1610bf8) e [AtlSetSacl](http://msdn.microsoft.com/library/54daab9a-8c69-45fd-86c4-18eb30d59547) per esempi di abilitazione SE_SECURITY_NAME.  
  
 Utilizzare i metodi di classe forniti per aggiungere, rimuovere, creare ed eliminare le voci ACE dal **SACL** oggetto. Vedere anche [AtlGetSacl](http://msdn.microsoft.com/library/1d69611f-d8a7-467b-9d57-cbe2f1610bf8) e [AtlSetSacl](http://msdn.microsoft.com/library/54daab9a-8c69-45fd-86c4-18eb30d59547).  
  
 Per un'introduzione al modello di controllo di accesso di Windows, vedere [il controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAcl](../../atl/reference/cacl-class.md)  
  
 `CSacl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="a-nameaddauditacea--csacladdauditace"></a><a name="addauditace"></a>CSacl::AddAuditAce  
 Aggiunge una voce di controllo di accesso (ACE) di controllo per il `CSacl` oggetto.  
  
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
 `rSid`  
 Il [IDSR](../../atl/reference/csid-class.md) oggetto.  
  
 `AccessMask`  
 Specifica la maschera di diritti di accesso da controllare per l'oggetto specificato `CSid` oggetto.  
  
 `bSuccess`  
 Specifica se i tentativi di accesso consentiti sono da controllare. Impostare questo flag su true per abilitare il controllo; in caso contrario, impostarla su false.  
  
 *bFailure*  
 Specifica se devono essere controllate tentativi di accesso negato. Impostare questo flag su true per abilitare il controllo; in caso contrario, impostarla su false.  
  
 `AceFlags`  
 Un set di flag di bit che controllano l'ereditarietà ACE.  
  
 `pObjectType`  
 Tipo di oggetto.  
  
 `pInheritedObjectType`  
 Il tipo di oggetto ereditato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se viene aggiunto alla voce ACE per il `CSacl` oggetto **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Oggetto `CSacl` oggetto contiene le voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di protezione. Questo metodo aggiunge tali una voce ACE per il `CSacl` oggetto. La seconda forma di `AddAuditAce` è disponibile solo in Windows 2000 e versioni successive.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per una descrizione dei vari flag che possono essere impostate nella `AceFlags` parametro.  
  
##  <a name="a-namecsacla--csaclcsacl"></a><a name="csacl"></a>CSacl::CSacl  
 Costruttore.  
  
```
CSacl() throw();
CSacl(const ACL& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Un oggetto esistente **ACL** struttura (elenco di controllo di accesso).  
  
### <a name="remarks"></a>Note  
 Il `CSacl` oggetto può essere creato facoltativamente utilizzando una classe **ACL** struttura. Assicurarsi che questo parametro è un elenco di controllo di accesso di sistema (SACL) e non un elenco di controllo di accesso discrezionali (DACL). Nelle build di debug, se viene fornito un elenco DACL verrà eseguita un'asserzione. Nelle build di rilascio vengono ignorate le voci di un elenco DACL.  
  
##  <a name="a-namedtora--csaclcsacl"></a><a name="dtor"></a>CSacl:: ~ CSacl  
 Distruttore.  
  
```
~CSacl() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera eventuali risorse ottenute dall'oggetto, incluse tutte le voci di controllo di accesso (ACE).  
  
##  <a name="a-namegetacecounta--csaclgetacecount"></a><a name="getacecount"></a>CSacl::GetAceCount  
 Restituisce il numero di voci di controllo di accesso (ACE) di `CSacl` oggetto.  
  
```
UINT GetAceCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di voci ACE presenti nel `CSacl` oggetto.  
  
##  <a name="a-nameoperatoreqa--csacloperator-"></a><a name="operator_eq"></a>CSacl::operator =  
 Operatore di assegnazione.  
  
```
CSacl& operator=(const ACL& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il **ACL** (elenco di controllo di accesso) per assegnare all'oggetto esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CSacl` oggetto. Assicurarsi che il **ACL** parametro è effettivamente un controllo di accesso elenco di sistema (SACL) e non un elenco di controllo di accesso discrezionali (DACL). Nelle build di debug si verificherà un'asserzione e nelle build di rilascio di **ACL** parametro verrà ignorato.  
  
##  <a name="a-nameremoveacea--csaclremoveace"></a><a name="removeace"></a>CSacl::RemoveAce  
 Rimuove una voce ACE specifica (voce di controllo di accesso) di **CSacl** oggetto.  
  
```
void RemoveAce(UINT nIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice per la voce ACE da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).  
  
##  <a name="a-nameremoveallacesa--csaclremoveallaces"></a><a name="removeallaces"></a>CSacl::RemoveAllAces  
 Rimuove tutte le voci di controllo di accesso (ACE) contenute nel `CSacl` oggetto.  
  
```
void RemoveAllAces() throw();
```  
  
### <a name="remarks"></a>Note  
 Rimuove ogni **ACE** struttura (se presente) nei `CSacl` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAcl](../../atl/reference/cacl-class.md)   
 [ACL](http://msdn.microsoft.com/library/windows/desktop/aa374872)   
 [Voci ACE](http://msdn.microsoft.com/library/windows/desktop/aa374868)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di protezione](../../atl/reference/security-global-functions.md)

