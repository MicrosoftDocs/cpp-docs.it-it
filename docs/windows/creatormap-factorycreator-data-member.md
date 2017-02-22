---
title: "Membro dati CreatorMap::factoryCreator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::CreatorMap::factoryCreator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "factoryCreator (membro dati)"
ms.assetid: c9aac363-8f38-4cfd-9605-1e6ac74c5097
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Membro dati CreatorMap::factoryCreator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
HRESULT (*factoryCreator)(  
   unsigned int* currentflags,  
   const CreatorMap* entry,  
   REFIID iidClassFactory,  
 IUnknown** factory);  
```  
  
## Parametri  
 `currentflags`  
 Uno degli enumeratori [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
 `entry`  
 Un CreatorMap.  
  
 `iidClassFactory`  
 L'interfaccia ID della class factory.  
  
 `factory`  
 Quando l'operazione viene completata, l'indirizzo della class factory.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Crea una factory per il CreatorMap specificato.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura CreatorMap](../windows/creatormap-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)