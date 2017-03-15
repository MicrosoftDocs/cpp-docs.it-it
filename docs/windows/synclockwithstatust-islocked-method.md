---
title: "Metodo SyncLockWithStatusT::IsLocked | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsLocked (metodo)"
ms.assetid: e1b75b7b-c145-471a-aa5d-71abf31f5990
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo SyncLockWithStatusT::IsLocked
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
bool IsLocked() const;  
```  
  
## Note  
 Indica se l'oggetto SyncLockWithStatusT corrente possiede una risorsa; ovvero, l'oggetto SyncLockWithStatusT è *locked*.  
  
## Valore restituito  
 **true** se l'oggetto SyncLockWithStatusT è bloccato; **false** in caso contrario.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## Vedere anche  
 [Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)