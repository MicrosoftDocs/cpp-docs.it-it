---
title: "CSecurityAttributes Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSecurityAttributes"
  - "ATL::CSecurityAttributes"
  - "CSecurityAttributes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSecurityAttributes class"
ms.assetid: a094880c-52e1-4a28-97ff-752d5869908e
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSecurityAttributes Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper sottile per la struttura di attributi di sicurezza.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CSecurityAttributes : public SECURITY_ATTRIBUTES  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityAttributes::CSecurityAttributes](../Topic/CSecurityAttributes::CSecurityAttributes.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityAttributes::Set](../Topic/CSecurityAttributes::Set.md)|Chiamare questo metodo per impostare gli attributi dell'oggetto `CSecurityAttributes`.|  
  
## Note  
 La struttura **SECURITY\_ATTRIBUTES** contiene [descrittore di sicurezza](http://msdn.microsoft.com/library/windows/desktop/aa379561) utilizzato per la creazione di un oggetto e specifica se l'handle recuperate specificando questa struttura sono ereditabili.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 `SECURITY_ATTRIBUTES`  
  
 `CSecurityAttributes`  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio di sicurezza](../../top/visual-cpp-samples.md)   
 [SECURITY\_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560)   
 [security descriptor](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)