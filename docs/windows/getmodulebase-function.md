---
title: "Funzione GetModuleBase | Microsoft Docs"
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
  - "implements/Microsoft::WRL::GetModuleBase"
dev_langs: 
  - "C++"
ms.assetid: 123d3b14-2eaf-4e02-8dcd-b6567917c6a6
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione GetModuleBase
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera un puntatore [ModuleBase](../windows/modulebase-class.md) che consente di incrementare o decrementare il conteggio dei riferimenti di un oggetto [RuntimeClass](../windows/runtimeclass-class.md).  
  
## Sintassi  
  
```cpp  
inline Details::ModuleBase* GetModuleBase() throw()  
```  
  
## Valore restituito  
 Un puntatore a un oggetto `ModuleBase`.  
  
## Note  
 Questa funzione viene utilizzata internamente per incrementare o decrementare i conteggi di riferimento a un oggetto.  
  
 È possibile utilizzare questa funzione per controllare i conteggi dei riferimenti chiamando [ModuleBase::IncrementObjectCount](../windows/modulebase-incrementobjectcount-method.md) e [ModuleBase::DecrementObjectCount](../windows/modulebase-decrementobjectcount-method.md).  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)