---
title: "Metodo AsyncBase::FireProgress | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::FireProgress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FireProgress (metodo)"
ms.assetid: 4512bef6-0ebc-4465-9b8a-4c9dfa82084c
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::FireProgress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Richiama il gestore eventi dello stato di avanzamento corrente.  
  
## Sintassi  
  
```  
void FireProgress(  
   const typename ProgressTraits::Arg2Type arg  
);  
```  
  
#### Parametri  
 `arg`  
 Il metodo del gestore di eventi da richiamare.  
  
## Note  
 `ProgressTraits` è derivata da [Struttura ArgTraitsHelper](../windows/argtraitshelper-structure.md).  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)