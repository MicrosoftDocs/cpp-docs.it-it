---
title: "Errore del compilatore C3053 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3053"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3053"
ms.assetid: ab9a25f3-e341-4f6e-8e69-069b4a963a64
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3053
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'symbol': 'threadprivate' è valido solo per elementi di dati globali o statici  
  
 I simboli passati a [threadprivate](../../parallel/openmp/reference/threadprivate.md) devono essere globali o statici.  
  
 L'esempio seguente genera l'errore C3053:  
  
```  
// C3053.cpp // compile with: /openmp void Test() { int x, y; #pragma omp threadprivate(x, y)   // C3053 #pragma omp parallel copyin(x, y) { x = y; } }  
```  
  
 Possibile soluzione:  
  
```  
// C3053b.cpp // compile with: /openmp /LD int x, y; #pragma omp threadprivate(x, y) void Test() { #pragma omp parallel copyin(x, y) { x = y; } }  
```