---
title: "Avviso del compilatore (livello 1) C4606 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4606"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4606"
ms.assetid: c1b45fb6-672b-42eb-9e1c-c67b3e4150d3
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4606
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

avviso \#pragma: 'numero\_avviso' ignorato. Gli avvisi dell'analisi codice non sono associati ai livelli di avviso  
  
 Per gli avvisi dell'analisi codice, con il pragma [warning](../../preprocessor/warning.md) sono supportati solo `error`, `once` e `default`.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4606:  
  
```  
// C4606.cpp  
// compile with: /c /W1  
#pragma warning(1: 6001)   // C4606  
#pragma warning(once: 6001)   // OK  
```