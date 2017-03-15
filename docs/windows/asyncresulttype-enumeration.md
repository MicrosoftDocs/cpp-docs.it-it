---
title: "Enumerazione AsyncResultType | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncResultType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsyncResultType (enumerazione)"
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Enumerazione AsyncResultType
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il tipo di risultato restituito dal metodo GetResults\(\).  
  
## Sintassi  
  
```  
enum AsyncResultType;  
```  
  
## Membri  
  
### Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`MultipleResults`|Un più set di più risultati, che sono presentati progressivamente tra lo stato iniziale e prima che Close\(\) venga chiamato.|  
|`SingleResult`|Un singolo risultato, che viene presentato dopo che si verifica l'evento di completamento.|  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)