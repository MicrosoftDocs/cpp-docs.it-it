---
title: Classe CSecurityAttributes | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 47b0058cba19ac804c2d996052e9a5ec2df68bc5
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208948"
---
# <a name="csecurityattributes-class"></a>Classe CSecurityAttributes
Questa classe è un wrapper sottile per la struttura di attributi di sicurezza.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
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
|[CSecurityAttributes:: set](#set)|Chiamare questo metodo per impostare gli attributi del `CSecurityAttributes` oggetto.|  
  
## <a name="remarks"></a>Note  
 Il `SECURITY_ATTRIBUTES` struttura contiene una [descrittore di sicurezza](/windows/desktop/api/winnt/ns-winnt-_security_descriptor) utilizzata per la creazione di un oggetto e specifica se l'handle recuperato specificando questa struttura è ereditabile.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SECURITY_ATTRIBUTES`  
  
 `CSecurityAttributes`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="csecurityattributes"></a>  CSecurityAttributes::CSecurityAttributes  
 Costruttore.  
  
```
CSecurityAttributes() throw();
explicit CSecurityAttributes(const CSecurityDesc& rSecurityDescriptor, bool bInheritsHandle = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *rSecurityDescriptor*  
 Riferimento a un descrittore di sicurezza.  
  
 *bInheritsHandle*  
 Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.  
  
##  <a name="set"></a>  CSecurityAttributes:: set  
 Chiamare questo metodo per impostare gli attributi del `CSecurityAttributes` oggetto.  
  
```
void Set(const CSecurityDesc& rSecurityDescriptor, bool bInheritHandle = false) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *rSecurityDescriptor*  
 Riferimento a un descrittore di sicurezza.  
  
 *bInheritHandle*  
 Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato dal costruttore per inizializzare il `CSecurityAttributes` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560)   
 [descrittore di sicurezza](/windows/desktop/api/winnt/ns-winnt-_security_descriptor)   
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
