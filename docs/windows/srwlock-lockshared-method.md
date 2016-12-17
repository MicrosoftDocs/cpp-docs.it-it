---
title: "Metodo SRWLock::LockShared | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockShared"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LockShared (metodo)"
ms.assetid: 9d826a5c-b6a2-4430-ac85-d5753cbca889
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo SRWLock::LockShared
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Acquisisce un oggetto SRWLock in modalità condivisa.  
  
## Sintassi  
  
```  
SyncLockShared LockShared();  
  
static SyncLockShared LockShared(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### Parametri  
 `lock`  
 Puntatore a un oggetto SRWLock .  
  
## Valore restituito  
 Un oggetto SRWLock in modalità condivisa.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)