---
title: "Security Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ACL object global functions"
  - "security IDs [C++]"
  - "SIDs [C++], modifying SID objects"
ms.assetid: 6a584bfe-16b7-47f4-8439-9c789c41567a
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Security Global Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzioni consentono il supporto per modificare gli oggetti ACL e di SID.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlGetDacl](../Topic/AtlGetDacl.md)|Chiamare la funzione per recuperare le informazioni di \(DACL\) dell'elenco di controllo di accesso discrezionale di un oggetto specificato.|  
|[AtlSetDacl](../Topic/AtlSetDacl.md)|Chiamare la funzione per impostare le informazioni di \(DACL\) dell'elenco di controllo di accesso discrezionale di un oggetto specificato.|  
|[AtlGetGroupSid](../Topic/AtlGetGroupSid.md)|Chiamare questa funzione per recuperare l'id di sicurezza \(SID\) del gruppo di un oggetto.|  
|[AtlSetGroupSid](../Topic/AtlSetGroupSid.md)|Chiamare la funzione per impostare l'id di sicurezza \(SID\) del gruppo di un oggetto.|  
|[AtlGetOwnerSid](../Topic/AtlGetOwnerSid.md)|Chiamare questa funzione per recuperare l'id di sicurezza \(SID\) proprietario di un oggetto.|  
|[AtlSetOwnerSid](../Topic/AtlSetOwnerSid.md)|Chiamare la funzione per impostare l'id di sicurezza \(SID\) proprietario di un oggetto.|  
|[AtlGetSacl](../Topic/AtlGetSacl.md)|Chiamare la funzione per recuperare le informazioni di \(SACL\) dell'elenco di controllo di accesso di sistema di un oggetto specificato.|  
|[AtlSetSacl](../Topic/AtlSetSacl.md)|Chiamare la funzione per impostare le informazioni di \(SACL\) dell'elenco di controllo di accesso di sistema di un oggetto specificato.|  
|[AtlGetSecurityDescriptor](../Topic/AtlGetSecurityDescriptor.md)|Chiamare questa funzione per recuperare il descrittore di sicurezza per un oggetto specificato.|  
  
## Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)