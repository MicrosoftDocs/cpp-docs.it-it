---
title: "CPrivateObjectSecurityDesc Class | Microsoft Docs"
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
  - "ATL.CPrivateObjectSecurityDesc"
  - "ATL::CPrivateObjectSecurityDesc"
  - "CPrivateObjectSecurityDesc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrivateObjectSecurityDesc class"
ms.assetid: 2c4bbb13-bf99-4833-912a-197f6815bb5d
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPrivateObjectSecurityDesc Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un oggetto di descrittore di sicurezza privato dell'oggetto.  
  
## Sintassi  
  
```  
  
class CPrivateObjectSecurityDesc : public CSecurityDesc  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc](../Topic/CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc.md)|Costruttore.|  
|[CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc](../Topic/CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrivateObjectSecurityDesc::ConvertToAutoInherit](../Topic/CPrivateObjectSecurityDesc::ConvertToAutoInherit.md)|Chiamare questo metodo per convertire un descrittore di sicurezza e i relativi elenchi di controllo di accesso \(ACLs\) in un formato la propagazione automatica di supporta le voci ereditabili \(ACEs\) di controllo di accesso.|  
|[CPrivateObjectSecurityDesc::Create](../Topic/CPrivateObjectSecurityDesc::Create.md)|Chiamare questo metodo per allocare e inizializzare un descrittore di sicurezza del relativo automatico per l'oggetto privato creato dal gestore di risorse chiamante.|  
|[CPrivateObjectSecurityDesc::Get](../Topic/CPrivateObjectSecurityDesc::Get.md)|Chiamare questo metodo per recuperare informazioni dal descrittore di sicurezza di un oggetto privato.|  
|[CPrivateObjectSecurityDesc::Set](../Topic/CPrivateObjectSecurityDesc::Set.md)|Chiamare questo metodo per modificare il descrittore di sicurezza di un oggetto privato.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \=](../Topic/CPrivateObjectSecurityDesc::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 Questa classe, derivata da [CSecurityDesc](../../atl/reference/csecuritydesc-class.md), fornisce metodi per creare e gestire il descrittore di sicurezza di un oggetto privato.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CSecurityDesc](../../atl/reference/csecuritydesc-class.md)  
  
 `CPrivateObjectSecurityDesc`  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [SECURITY\_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)   
 [CSecurityDesc Class](../../atl/reference/csecuritydesc-class.md)