---
title: "Macro InspectableClass | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::InspectableClass"
dev_langs: 
  - "C++"
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Macro InspectableClass
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Imposta il nome e il livello di attendibilità di classe di runtime.  
  
## Sintassi  
  
```cpp  
  
InspectableClass(  
   runtimeClassName,   
   trustLevel)  
  
```  
  
#### Parametri  
 `runtimeClassName`  
 Il nome testuale completo della classe runtime.  
  
 `trustLevel`  
 Uno dei valori enumerati di [TrustLevel](http://msdn.microsoft.com/library/br224625.aspx).  
  
## Note  
 La macro `InspectableClass` può essere utilizzata solo con i tipi [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
## Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)