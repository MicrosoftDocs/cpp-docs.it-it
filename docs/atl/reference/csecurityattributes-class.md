---
title: Classe CSecurityAttributes | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSecurityAttributes
- ATLSECURITY/ATL::CSecurityAttributes
- ATLSECURITY/ATL::CSecurityAttributes::CSecurityAttributes
- ATLSECURITY/ATL::CSecurityAttributes::Set
dev_langs:
- C++
helpviewer_keywords:
- CSecurityAttributes class
ms.assetid: a094880c-52e1-4a28-97ff-752d5869908e
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 24dfba8b6125172cc2d4ff7a32b61da412bfe2be
ms.lasthandoff: 02/24/2017

---
# <a name="csecurityattributes-class"></a>Classe CSecurityAttributes
Questa classe è un thin wrapper per la struttura di attributi di sicurezza.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CSecurityAttributes : public SECURITY_ATTRIBUTES
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityAttributes::CSecurityAttributes](#csecurityattributes)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityAttributes::Set](#set)|Chiamare questo metodo per impostare gli attributi di `CSecurityAttributes` oggetto.|  
  
## <a name="remarks"></a>Note  
 Il **SECURITY_ATTRIBUTES** struttura contiene un [descrittore di sicurezza](http://msdn.microsoft.com/library/windows/desktop/aa379561) utilizzata per la creazione di un oggetto e specifica se l'handle recuperato specificando questa struttura è ereditabile.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [il controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SECURITY_ATTRIBUTES`  
  
 `CSecurityAttributes`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="csecurityattributes"></a>CSecurityAttributes::CSecurityAttributes  
 Costruttore.  
  
```
CSecurityAttributes() throw();
explicit CSecurityAttributes(const CSecurityDesc& rSecurityDescriptor, bool bInheritsHandle = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rSecurityDescriptor`  
 Riferimento a un descrittore di sicurezza.  
  
 `bInheritsHandle`  
 Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.  
  
##  <a name="set"></a>CSecurityAttributes::Set  
 Chiamare questo metodo per impostare gli attributi di `CSecurityAttributes` oggetto.  
  
```
void Set(const CSecurityDesc& rSecurityDescriptor, bool bInheritHandle = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rSecurityDescriptor`  
 Riferimento a un descrittore di sicurezza.  
  
 `bInheritHandle`  
 Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato dal costruttore per inizializzare il `CSecurityAttributes` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560)   
 [descrittore di sicurezza](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di protezione](../../atl/reference/security-global-functions.md)

