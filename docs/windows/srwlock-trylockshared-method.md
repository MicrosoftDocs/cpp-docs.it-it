---
title: "Metodo SRWLock::TryLockShared | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockShared"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TryLockShared (metodo)"
ms.assetid: 10cc198d-39a0-4d18-aa78-706744948668
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo SRWLock::TryLockShared
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tenta di acquisire un oggetto SRWLock in modalità condivisa per l'oggetto SRWLock corrente o specificato.  
  
## Sintassi  
  
```  
WRL_NOTHROW SyncLockShared TryLockShared();  
WRL_NOTHROW static SyncLockShared TryLockShared(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### Parametri  
 `lock`  
 Puntatore a un oggetto SRWLock .  
  
## Valore restituito  
 Se l'operazione riesce, un oggetto SRWLock in modalità condivisa e il thread chiamante ha la proprietà del blocco.  In caso contrario, un oggetto SRWLock dello stato non è valido.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)