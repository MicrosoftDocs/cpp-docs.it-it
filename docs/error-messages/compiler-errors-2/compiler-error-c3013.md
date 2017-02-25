---
title: "Errore del compilatore C3013 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3013"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3013"
ms.assetid: f896777d-27e6-4b6d-baab-1567317f3374
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3013
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'clause': la clausola può apparire una sola volta nella direttiva 'directive' OpenMP  
  
 Una clausola compare due volte nella stessa direttiva. Eliminare un'occorrenza della clausola.  
  
 L'esempio seguente genera l'errore C3013:  
  
```  
// C3013.cpp // compile with: /openmp int main() { int a, b, c, x, y, z; #pragma omp parallel shared(a,b,c) private(x) #pragma omp for nowait private(x) nowait   // C3013 // The previous line generates C3013, with two nowait clauses // try the following line instead: // #pragma omp for nowait private(x) for (a = 0 ; a < 10 ; ++a) { } }  
```