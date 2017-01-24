---
title: "Metodo CriticalSection::TryLock | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::TryLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TryLock (metodo)"
ms.assetid: 504bb87c-2cd0-4f54-b458-b3efb9789053
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo CriticalSection::TryLock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tenta di entrare in una sezione critica senza bloccarsi.  Se la chiamata ha esito positivo, il thread chiamante assume la proprietà della sezione critica.  
  
## Sintassi  
  
```  
SyncLock TryLock();  
  
static SyncLock TryLock(  
   _In_ CRITICAL_SECTION* cs  
);  
```  
  
#### Parametri  
 `cs`  
 Un oggetto sezione critica definito dall'utente.  
  
## Valore restituito  
 Un valore diverso da zero se la sezione critica viene immessa correttamente o il thread corrente già proprietario della sezione critica.  Zero se un altro thread è già proprietario della sezione critica.  
  
## Note  
 La prima funzione **TryLock** influisce sull'oggetto sezione critica corrente.  La seconda funzione **TryLock** influisce su una sezione critica definita dall'utente.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)