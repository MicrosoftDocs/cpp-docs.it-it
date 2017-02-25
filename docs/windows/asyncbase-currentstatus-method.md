---
title: "Metodo AsyncBase::CurrentStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::CurrentStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CurrentStatus (metodo)"
ms.assetid: 26ee4c4a-6525-4a5f-b49c-3ca40c365eb6
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::CurrentStatus
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene lo stato dell'operazione asincrona corrente.  
  
## Sintassi  
  
```  
inline void CurrentStatus(  
   Details::AsyncStatusInternal *status  
);  
```  
  
#### Parametri  
 `status`  
 La posizione in cui questa operazione archivia lo stato corrente.  
  
## Note  
 Questo operazione è thread\-safe.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)   
 [Enumerazione AsyncStatusInternal](../windows/asyncstatusinternal-enumeration.md)