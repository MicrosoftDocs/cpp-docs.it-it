---
title: "Metodo SRWLock::TryLockExclusive | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TryLockExclusive (metodo)"
ms.assetid: 661e8b19-3058-4511-8742-c9fbb90412c7
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo SRWLock::TryLockExclusive
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tenta di acquisire un oggetto SRWLock in modalità esclusiva per l'oggetto SRWLock corrente o specificato.  Se la chiamata ha esito positivo, il thread chiamante assume la proprietà del blocco.  
  
## Sintassi  
  
```  
SyncLockExclusive TryLockExclusive();  
  
static SyncLockExclusive TryLockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### Parametri  
 `lock`  
 Puntatore a un oggetto SRWLock .  
  
## Valore restituito  
 Se l'operazione riesce, un oggetto SRWLock in modalità esclusiva e il thread chiamante ha la proprietà del blocco.  In caso contrario, un oggetto SRWLock dello stato non è valido.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)