---
title: Classe CDacl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDacl
- ATLSECURITY/ATL::CDacl
- ATLSECURITY/ATL::CDacl::CDacl
- ATLSECURITY/ATL::CDacl::AddAllowedAce
- ATLSECURITY/ATL::CDacl::AddDeniedAce
- ATLSECURITY/ATL::CDacl::GetAceCount
- ATLSECURITY/ATL::CDacl::RemoveAce
- ATLSECURITY/ATL::CDacl::RemoveAllAces
dev_langs:
- C++
helpviewer_keywords:
- CDacl class
ms.assetid: 2dc76616-6362-4967-b6cf-e2d39ca37ddd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5ac83d5c1f72bf1df20d41ec39b464ddb79e4f8e
ms.sourcegitcommit: a5916b48541f804a79891ff04e246628b5f9a24a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/09/2018
---
# <a name="cdacl-class"></a>Classe CDacl
Questa classe è un wrapper per una struttura DACL (elenco di controllo di accesso discrezionali).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CDacl : public CAcl
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDacl::CDacl](#cdacl)|Costruttore.|  
|[CDacl::~CDacl](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDacl::AddAllowedAce](#addallowedace)|Aggiunge una voce ACE consentita (voce di controllo di accesso) per il `CDacl` oggetto.|  
|[CDacl::AddDeniedAce](#adddeniedace)|Aggiunge una voce ACE negato l'accesso per il `CDacl` oggetto.|  
|[CDacl::GetAceCount](#getacecount)|Restituisce il numero di voci ACE (voci di controllo di accesso) il `CDacl` oggetto.|  
|[CDacl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce di controllo di accesso) il `CDacl` oggetto.|  
|[CDacl::RemoveAllAces](#removeallaces)|Rimuove tutte le voci ACE nel `CDacl` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDacl::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Descrittore di sicurezza di un oggetto può contenere un elenco DACL. Un elenco DACL contiene zero o più ACE (voci di controllo di accesso) che identificano gli utenti e gruppi di utenti che è possono accedere all'oggetto. Se un elenco DACL è vuoto (ovvero, contiene zero ACE), nessun accesso in modo esplicito viene concessa, in modo implicito viene negato l'accesso. Tuttavia, se il descrittore di sicurezza di un oggetto non dispone di un elenco DACL, l'oggetto non è protetto e tutti gli utenti con accesso completo.  
  
 Per recuperare un elenco DACL di oggetto, è necessario essere il proprietario dell'oggetto o READ_CONTROL accedere all'oggetto. Per modificare un elenco DACL di oggetto, è necessario disporre di accesso WRITE_DAC all'oggetto.  
  
 Utilizzare i metodi di classe forniti per creare, aggiungere, rimuovere ed eliminare le voci ACE dal `CDacl` oggetto. Vedere anche [AtlGetDacl](security-global-functions.md#atlgetdacl) e [AtlSetDacl](security-global-functions.md#atlsetdacl).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAcl](../../atl/reference/cacl-class.md)  
  
 `CDacl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="addallowedace"></a>  CDacl::AddAllowedAce  
 Aggiunge una voce ACE consentita (voce di controllo di accesso) per il `CDacl` oggetto.  
  
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
 `rSid`  
 Oggetto [IDSR](../../atl/reference/csid-class.md) oggetto.  
  
 `AccessMask`  
 Specifica la maschera di diritti di accesso consentito per l'oggetto specificato `CSid` oggetto.  
  
 `AceFlags`  
 Un set di flag di bit che controllano l'ereditarietà ACE.  
  
 `pObjectType`  
 Tipo di oggetto.  
  
 `pInheritedObjectType`  
 Il tipo di oggetto ereditato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se viene aggiunto alla voce ACE di `CDacl` oggetto **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Oggetto `CDacl` oggetto contiene zero o più ACE (voci di controllo di accesso) che identificano gli utenti e gruppi di utenti che è possono accedere all'oggetto. Questo metodo aggiunge una voce ACE che consenta l'accesso di `CDacl` oggetto.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per una descrizione dei vari flag che possono essere impostate nel `AceFlags` parametro.  
  
##  <a name="adddeniedace"></a>  CDacl::AddDeniedAce  
 Aggiunge una voce ACE negata (voce di controllo di accesso) per il `CDacl` oggetto.  
  
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
 `rSid`  
 Oggetto `CSid`.  
  
 `AccessMask`  
 Specifica la maschera di diritti di accesso a cui viene negato per l'oggetto specificato `CSid` oggetto.  
  
 `AceFlags`  
 Un set di flag di bit che controllano l'ereditarietà ACE. Il valore predefinito 0 nel primo formato del metodo.  
  
 `pObjectType`  
 Tipo di oggetto.  
  
 `pInheritedObjectType`  
 Il tipo di oggetto ereditato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se viene aggiunto alla voce ACE di `CDacl` oggetto **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Oggetto `CDacl` oggetto contiene zero o più ACE (voci di controllo di accesso) che identificano gli utenti e gruppi di utenti che è possono accedere all'oggetto. Questo metodo aggiunge una voce ACE che nega l'accesso per il `CDacl` oggetto.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per una descrizione dei vari flag che possono essere impostate nel `AceFlags` parametro.  
  
##  <a name="cdacl"></a>  CDacl::CDacl  
 Costruttore.  
  
```
CDacl (const ACL& rhs) throw(...);  
CDacl () throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Un oggetto esistente **ACL** struttura (elenco di controllo di accesso).  
  
### <a name="remarks"></a>Note  
 Il `CDacl` oggetto può essere creato facoltativamente utilizzando un oggetto esistente **ACL** struttura. È importante notare che solo un elenco DACL (elenco di controllo di accesso discrezionali) e non un SACL (elenco di controllo di accesso di sistema,) deve essere passato come parametro. Nelle build di debug, passando un SACL causerà un'ASSERZIONE. Nelle build di rilascio, passando un SACL causerà le voci ACE (voci di controllo di accesso) nell'elenco ACL verrà ignorato e non verrà generato alcun errore.  
  
##  <a name="dtor"></a>  CDacl::~CDacl  
 Distruttore.  
  
```
~CDacl () throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera le risorse acquisite dall'oggetto, incluse tutte le voci ACE (voci di controllo di accesso) utilizzando [CDacl::RemoveAllAces](#removeallaces).  
  
##  <a name="getacecount"></a>  CDacl::GetAceCount  
 Restituisce il numero di voci ACE (voci di controllo di accesso) il `CDacl` oggetto.  
  
```
UINT GetAceCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di voci ACE presenti nel `CDacl` oggetto.  
  
##  <a name="operator_eq"></a>  CDacl::operator =  
 Operatore di assegnazione.  
  
```
CDacl& operator= (const ACL& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 L'ACL (elenco di controllo di accesso) da assegnare all'oggetto esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CDacl` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario passare solo un elenco DACL (elenco di controllo di accesso discrezionali) a questa funzione. Passando un SACL (elenco di controllo di accesso di sistema) a questa funzione causerà un'ASSERZIONE nelle build di debug ma non verrà generato alcun errore nelle build di rilascio.  
  
##  <a name="removeace"></a>  CDacl::RemoveAce  
 Rimuove una voce ACE specifica (voce di controllo di accesso) il `CDacl` oggetto.  
  
```
void RemoveAce(UINT nIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice per la voce ACE da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).  
  
##  <a name="removeallaces"></a>  CDacl::RemoveAllAces  
 Rimuove tutte le voci ACE (voci di controllo di accesso) contenute nella `CDacl` oggetto.  
  
```
void RemoveAllAces() throw();
```  
  
### <a name="remarks"></a>Note  
 Rimuove ogni **ACE** struttura (voce di controllo di accesso) (se presente) nei `CDacl` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [Classe CAcl](../../atl/reference/cacl-class.md)   
 [ACL](http://msdn.microsoft.com/library/windows/desktop/aa374872)   
 [Voci ACE](http://msdn.microsoft.com/library/windows/desktop/aa374868)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
