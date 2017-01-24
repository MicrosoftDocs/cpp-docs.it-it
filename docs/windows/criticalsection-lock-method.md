---
title: "Metodo CriticalSection::Lock | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::Lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Lock (metodo)"
ms.assetid: 37cb184c-e13c-49ef-b6a0-13908a956414
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo CriticalSection::Lock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attendere la proprietà dell'oggetto sezione critica specificato.  La funzione termina quando il thread chiamante concede la proprietà.  
  
## Sintassi  
  
```  
SyncLock Lock();  
  
   static SyncLock Lock(  
   _In_ CRITICAL_SECTION* cs  
);  
```  
  
#### Parametri  
 `cs`  
 Un oggetto sezione critica definito dall'utente.  
  
## Valore restituito  
 Un oggetto di blocco che può essere utilizzato per sbloccare la sezione critica corrente.  
  
## Note  
 La prima funzione **Lock** influisce sull'oggetto sezione critica corrente.  La seconda funzione **Lock** influisce su una sezione critica definita dall'utente.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)