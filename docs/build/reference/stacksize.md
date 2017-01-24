---
title: "STACKSIZE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "STACKSIZE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STACKSIZE (istruzione) file .def"
ms.assetid: 4d8c79bd-1cb4-4e4d-90f2-b5a7a4d20e7a
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# STACKSIZE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di impostare la dimensione in byte dello stack.  
  
```  
STACKSIZE reserve[,commit]  
```  
  
## Note  
 Un metodo equivalente per impostare lo stack consiste nell'uso dell'opzione [Stack Allocations](../../build/reference/stack-stack-allocations.md) \(\/STACK\).  Per informazioni dettagliate sugli argomenti *reserve* e `commit`, vedere la documentazione relativa all'opzione.  
  
 Questa opzione non ha alcun effetto sulle DLL.  
  
## Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)