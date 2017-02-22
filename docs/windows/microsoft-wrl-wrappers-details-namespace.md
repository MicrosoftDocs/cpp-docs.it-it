---
title: "Spazio dei nomi Microsoft::WRL::Wrappers::Details | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details"
  - "internal/Microsoft::WRL::Details"
  - "async/Microsoft::WRL::Details"
  - "corewrappers/Microsoft::WRL::Wrappers::Details"
  - "client/Microsoft::WRL::Details"
  - "module/Microsoft::WRL::Details"
  - "event/Microsoft::WRL::Details"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Details (spazio dei nomi)"
ms.assetid: 6d3f04ac-9b53-4a82-a188-a85309ec34a4
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Spazio dei nomi Microsoft::WRL::Wrappers::Details
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
namespace Microsoft::WRL::Wrappers::Details;  
```  
  
## Membri  
  
### Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe SyncLockT](../windows/synclockt-class.md)|Rappresenta un tipo che può accettare solo proprietà in esclusiva o condivise di una risorsa.|  
|[Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)|Rappresenta un tipo che può accettare solo proprietà in esclusiva o condivise di una risorsa.|  
  
### Metodi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo CompareStringOrdinal](../windows/comparestringordinal-method.md)|Confronta due oggetti `HSTRING` specificati e restituisce un intero che ne indica la posizione relativa in un ordinamento.|  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)