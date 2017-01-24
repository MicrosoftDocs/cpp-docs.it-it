---
title: "Metodo SRWLock::LockExclusive | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockExclusive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LockExclusive (metodo)"
ms.assetid: f361b672-fca6-45cc-a9b4-310cc0d23fdc
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo SRWLock::LockExclusive
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Acquisisce un oggetto SRWLock in modalità esclusiva.  
  
## Sintassi  
  
```  
SyncLockExclusive LockExclusive();  
  
static SyncLockExclusive LockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### Parametri  
 `lock`  
 Puntatore a un oggetto SRWLock .  
  
## Valore restituito  
 Un oggetto SRWLock in modalità esclusiva.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)