---
title: "Struttura FactoryCache | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::FactoryCache"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FactoryCache (struttura)"
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Struttura FactoryCache
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] e non si può utilizzare direttamente dal codice.  
  
## Sintassi  
  
```  
struct FactoryCache;  
```  
  
## Note  
 Contiene la posizione della class factory e un valore che identifica un oggetto registrato wrt o di classe COM.  
  
## Membri  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati FactoryCache::cookie](../windows/factorycache-cookie-data-member.md)|Contiene un valore che identifica un [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] registrato o un oggetto della classe COM e successivamente viene utilizzato per annullare la registrazione di un oggetto.|  
|[Membro dati FactoryCache::factory](../windows/factorycache-factory-data-member.md)|Punta a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] o una factory di classe COM.|  
  
## Gerarchia di ereditarietà  
 `FactoryCache`  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)