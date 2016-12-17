---
title: "Errore del compilatore C3016 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3016"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3016"
ms.assetid: 3423467e-e8bb-4f35-b4db-7925cafa74c1
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3016
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': la variabile di indice nell'istruzione 'for' OpenMP deve avere un tipo integrale firmato  
  
 La variabile di indice nell'istruzione `for` OpenMP deve avere un tipo integrale firmato.  
  
 L'esempio seguente genera l'errore C3016:  
  
```  
// C3016.cpp // compile with: /openmp int main() { #pragma omp parallel { unsigned int i = 0; // Try the following line instead: // int i = 0; #pragma omp for for (i = 0; i <= 10; ++i)   // C3016 { } } }  
```