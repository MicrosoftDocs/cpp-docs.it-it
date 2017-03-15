---
title: "Struttura CreatorMap | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::CreatorMap"
  - "implements/Microsoft::WRL::Details::CreatorMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreatorMap (struttura)"
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Struttura CreatorMap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] e non si può utilizzare direttamente dal codice.  
  
## Sintassi  
  
```  
struct CreatorMap;  
```  
  
## Note  
 Contiene informazioni su come inizializzare, eseguire e annullare la registrazione degli oggetti.  
  
 CreatorMap contiene le seguenti informazioni:  
  
-   Come inizializzare, eseguire e annullare la registrazione degli oggetti.  
  
-   Come confrontare i dati di attivazione da una factory [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] classica o COM.  
  
-   Informazioni sulla cache della factory e nome del server per un'interfaccia.  
  
## Membri  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati CreatorMap::activationId](../windows/creatormap-activationid-data-member.md)|Rappresenta un ID dell' oggetto identificato da un ID della classe COM classica o il nome [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].|  
|[Membro dati CreatorMap::factoryCache](../windows/creatormap-factorycache-data-member.md)|Archivia il puntatore alla factory cache per il CreatorMap.|  
|[Membro dati CreatorMap::factoryCreator](../windows/creatormap-factorycreator-data-member.md)|Crea una factory per il CreatorMap specificato.|  
|[Membro dati CreatorMap::serverName](../windows/creatormap-servername-data-member.md)|Archivia il nome del server per il CreatorMap.|  
  
## Gerarchia di ereditarietà  
 `CreatorMap`  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)