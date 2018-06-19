---
title: Classe CSacl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CSacl
- ATLSECURITY/ATL::CSacl
- ATLSECURITY/ATL::CSacl::CSacl
- ATLSECURITY/ATL::CSacl::AddAuditAce
- ATLSECURITY/ATL::CSacl::GetAceCount
- ATLSECURITY/ATL::CSacl::RemoveAce
- ATLSECURITY/ATL::CSacl::RemoveAllAces
dev_langs:
- C++
helpviewer_keywords:
- CSacl class
ms.assetid: 8624889b-aebc-4183-9d29-a20f07837f05
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 116e66d36dde016ef902a0b345eec33e46177b6c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32363584"
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
|[CSacl::GetAceCount](#getacecount)|Restituisce il numero di voci di controllo di accesso (ACE) nei `CSacl` oggetto.|  
|[CSacl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce di controllo di accesso) il **CSacl** oggetto.|  
|[CSacl::RemoveAllAces](#removeallaces)|Rimuove tutte le voci ACE nel `CSacl` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 L'elenco contiene le voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di sicurezza di un controller di dominio. Si noti che un SACL genera le voci di log solo sul controller di dominio in cui si è verificato durante il tentativo di accesso, non su ogni controller di dominio che contiene una replica dell'oggetto.  
  
 Per impostare o recuperare l'elenco SACL nel descrittore di sicurezza di un oggetto, è necessario abilitare il privilegio SE_SECURITY_NAME nel token di accesso del thread richiedente. Il gruppo di amministratori ha questo privilegio concesso per impostazione predefinita, è possibile concedere ad altri utenti o gruppi. Con il privilegio concesso non è tutto ciò che è necessario: prima di poter eseguire l'operazione definita per il privilegio, è necessario abilitare il privilegio nel token di accesso di sicurezza per rendere effettive. Il modello consente di privilegi per essere abilitata solo per operazioni specifiche del sistema e quindi disabilitata quando non sono più necessari. Vedere [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl) per esempi di abilitazione SE_SECURITY_NAME.  
  
 Utilizzare i metodi di classe forniti per aggiungere, rimuovere, creare ed eliminare le voci ACE dal **SACL** oggetto. Vedere anche [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAcl](../../atl/reference/cacl-class.md)  
  
 `CSacl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="addauditace"></a>  CSacl::AddAuditAce  
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
 Specifica se i tentativi di accesso consentito da controllare. Impostare questo flag per true per abilitare il controllo; in caso contrario, impostarla su false.  
  
 *bFailure*  
 Specifica se devono essere controllati tentativi di accesso negato. Impostare questo flag per true per abilitare il controllo; in caso contrario, impostarla su false.  
  
 `AceFlags`  
 Un set di flag di bit che controllano l'ereditarietà ACE.  
  
 `pObjectType`  
 Tipo di oggetto.  
  
 `pInheritedObjectType`  
 Il tipo di oggetto ereditato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se viene aggiunto alla voce ACE di `CSacl` oggetto **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Oggetto `CSacl` oggetto contiene le voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di sicurezza. Questo metodo aggiunge tale voce per il `CSacl` oggetto.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per una descrizione dei vari flag che possono essere impostate nel `AceFlags` parametro.  
  
##  <a name="csacl"></a>  CSacl::CSacl  
 Costruttore.  
  
```
CSacl() throw();
CSacl(const ACL& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Un oggetto esistente **ACL** struttura (elenco di controllo di accesso).  
  
### <a name="remarks"></a>Note  
 Il `CSacl` oggetto può essere creato facoltativamente utilizzando un oggetto esistente **ACL** struttura. Verificare che questo parametro è un elenco di controllo di accesso di sistema (SACL) e non un elenco di controllo di accesso discrezionali (DACL). Nelle build di debug, se viene fornito un elenco DACL si verificherà un'asserzione. Nelle build di rilascio vengono ignorate le voci di un elenco DACL.  
  
##  <a name="dtor"></a>  CSacl::~CSacl  
 Distruttore.  
  
```
~CSacl() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera le risorse acquisite dall'oggetto, incluse tutte le voci di controllo di accesso (ACE).  
  
##  <a name="getacecount"></a>  CSacl::GetAceCount  
 Restituisce il numero di voci di controllo di accesso (ACE) nei `CSacl` oggetto.  
  
```
UINT GetAceCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di voci ACE presenti nel `CSacl` oggetto.  
  
##  <a name="operator_eq"></a>  CSacl::operator =  
 Operatore di assegnazione.  
  
```
CSacl& operator=(const ACL& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il **ACL** (elenco di controllo di accesso) da assegnare all'oggetto esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CSacl` oggetto. Verificare che il **ACL** parametro è effettivamente un controllo di accesso elenco di sistema (SACL) e non un elenco di controllo di accesso discrezionali (DACL). Nelle build di debug, si verificherà un'asserzione e nelle build di rilascio di **ACL** parametro verrà ignorato.  
  
##  <a name="removeace"></a>  CSacl::RemoveAce  
 Rimuove una voce ACE specifica (voce di controllo di accesso) il **CSacl** oggetto.  
  
```
void RemoveAce(UINT nIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice per la voce ACE da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).  
  
##  <a name="removeallaces"></a>  CSacl::RemoveAllAces  
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
 [Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
