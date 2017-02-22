---
title: "Membro dati FactoryCache::cookie | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::FactoryCache::cookie"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cookie (membro dati)"
ms.assetid: b1bc79af-a896-4e3b-8afa-64733022eddf
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Membro dati FactoryCache::cookie
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] e non si può utilizzare direttamente dal codice.  
  
## Sintassi  
  
```  
union {   
   WINRT_REGISTRATION_COOKIE winrt;  
   DWORD com;   
} cookie;  
```  
  
## Note  
 Contiene un valore che identifica un [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] registrato o un oggetto della classe COM e successivamente viene utilizzato per annullare la registrazione di un oggetto.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura FactoryCache](../windows/factorycache-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)