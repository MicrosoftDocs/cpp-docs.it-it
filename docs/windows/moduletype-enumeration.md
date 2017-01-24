---
title: "Enumerazione ModuleType | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ModuleType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ModuleType (enumerazione)"
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Enumerazione ModuleType
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica se un modulo deve supportare un server in\-process o un server out\-of\-process.  
  
## Sintassi  
  
```  
enum ModuleType;  
```  
  
## Membri  
  
### Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`InProc`|Un in\-process server.|  
|`OutOfProc`|Un out\-process server.|  
|`DisableCaching`|Disabilitare il meccanismo di memorizzazione nella cache sul Modulo.|  
|`InProcDisableCaching`|Combinazione di `InProc` e `DisableCaching`.|  
|`OutOfProcDisableCaching`|Combinazione di `OutOfProc` e `DisableCaching`.|  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)