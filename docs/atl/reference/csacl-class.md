---
title: Classe CSacl | Microsoft Docs
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
ms.openlocfilehash: 65375b764c0d8d8673a59fcfb47b4eecaf730cb5
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37879956"
---
# <a name="csacl-class"></a>Classe CSacl
Questa classe è un wrapper per una struttura SACL (elenco di controllo di accesso di sistema).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
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
|[CSacl::GetAceCount](#getacecount)|Restituisce il numero di voci di controllo di accesso (ACE) nel `CSacl` oggetto.|  
|[CSacl::RemoveAce](#removeace)|Rimuove una specifica voce ACE (voce di controllo di accesso) di `CSacl` oggetto.|  
|[CSacl::RemoveAllAces](#removeallaces)|Rimuove tutte le voci ACE contenute nel `CSacl` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Un SACL contiene le voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di protezione di un controller di dominio. Si noti che un SACL genera le voci di log solo sul controller di dominio in cui si è verificato durante il tentativo di accesso, non su ogni controller di dominio che contiene una replica dell'oggetto.  
  
 Per impostare o recuperare l'elenco SACL nel descrittore di sicurezza di un oggetto, è necessario abilitare il privilegio SE_SECURITY_NAME nel token di accesso del thread richiedente. Il gruppo di amministratori con questo privilegio concesso per impostazione predefinita e possono essere concesse ad altri utenti o gruppi. Con il privilegio concesso non è tutto ciò che è necessario: prima di poter eseguire l'operazione definita dal privilegio, il privilegio deve essere abilitato nel token di accesso di sicurezza per rendere effettive. Il modello consente i privilegi per essere abilitata solo per le operazioni di sistema specifico e quindi disabilitata quando non sono più necessari. Visualizzare [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl) per alcuni esempi di abilitazione SE_SECURITY_NAME.  
  
 Utilizzare i metodi di classe forniti per aggiungere, rimuovere, creare ed eliminare le voci ACE dal `SACL` oggetto. Vedere anche [AtlGetSacl](security-global-functions.md#atlgetsacl) e [AtlSetSacl](security-global-functions.md#atlsetsacl).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) nel SDK di Windows.  
  
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
 *rSid*  
 Il [IDSR](../../atl/reference/csid-class.md) oggetto.  
  
 *AccessMask*  
 Specifica la maschera di diritti di accesso da controllare per l'oggetto specificato `CSid` oggetto.  
  
 *bSuccess*  
 Specifica se i tentativi di accesso consentiti vengono controllati. Impostare questo flag per true per abilitare il controllo; in caso contrario, impostarlo su false.  
  
 *bFailure*  
 Specifica se devono essere controllati i tentativi di accesso negato. Impostare questo flag per true per abilitare il controllo; in caso contrario, impostarlo su false.  
  
 *AceFlags*  
 Un set di flag di bit che controllano l'ereditarietà di voce ACE.  
  
 *pObjectType*  
 Tipo di oggetto.  
  
 *pInheritedObjectType*  
 Il tipo di oggetto ereditato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se la voce ACE viene aggiunto al `CSacl` dell'oggetto, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Oggetto `CSacl` oggetto contiene le voci di controllo di accesso (ACE) che specificano i tipi di tentativi di accesso che generano record di controllo nel registro eventi di sicurezza. Questo metodo aggiunge tale una voce ACE per il `CSacl` oggetto.  
  
 Visualizzare [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per una descrizione dei vari flag che possono essere impostati nel *AceFlags* parametro.  
  
##  <a name="csacl"></a>  CSacl::CSacl  
 Costruttore.  
  
```
CSacl() throw();
CSacl(const ACL& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *rhs*  
 Un oggetto esistente `ACL` struttura (elenco di controllo di accesso).  
  
### <a name="remarks"></a>Note  
 Il `CSacl` oggetto può essere creato facoltativamente usando un oggetto esistente `ACL` struttura. Assicurarsi che questo parametro è un elenco di controllo di accesso di sistema (SACL) e non un elenco di controllo di accesso discrezionali (DACL). Nelle build di debug, se viene fornito un DACL si verificherà un'asserzione. Nelle build di rilascio vengono ignorate tutte le voci da un elenco DACL.  
  
##  <a name="dtor"></a>  CSacl::~CSacl  
 Distruttore.  
  
```
~CSacl() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera eventuali risorse ottenute dall'oggetto, incluse tutte le voci di controllo di accesso (ACE).  
  
##  <a name="getacecount"></a>  CSacl::GetAceCount  
 Restituisce il numero di voci di controllo di accesso (ACE) nel `CSacl` oggetto.  
  
```
UINT GetAceCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di voci ACE contenuti nel `CSacl` oggetto.  
  
##  <a name="operator_eq"></a>  CSacl::operator =  
 Operatore di assegnazione.  
  
```
CSacl& operator=(const ACL& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *rhs*  
 Il `ACL` (elenco di controllo di accesso) da assegnare all'oggetto esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CSacl` oggetto. Verificare che il `ACL` parametro è effettivamente un accesso-elenco di controllo sistema (SACL) e non un elenco di controllo di accesso discrezionali (DACL). Nelle build di debug si verifica un'asserzione e nelle build di rilascio di `ACL` parametro verrà ignorato.  
  
##  <a name="removeace"></a>  CSacl::RemoveAce  
 Rimuove una specifica voce ACE (voce di controllo di accesso) di `CSacl` oggetto.  
  
```
void RemoveAce(UINT nIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice per la voce ACE da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo è derivato dalla [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).  
  
##  <a name="removeallaces"></a>  CSacl::RemoveAllAces  
 Rimuove tutte le voci di controllo di accesso (ACE) contenute nel `CSacl` oggetto.  
  
```
void RemoveAllAces() throw();
```  
  
### <a name="remarks"></a>Note  
 Rimuove ogni `ACE` struttura (se presente) nel `CSacl` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAcl](../../atl/reference/cacl-class.md)   
 [ACL](http://msdn.microsoft.com/library/windows/desktop/aa374872)   
 [Voci ACE](http://msdn.microsoft.com/library/windows/desktop/aa374868)   
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
