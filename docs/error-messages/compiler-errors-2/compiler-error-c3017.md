---
title: "Errore del compilatore C3017 | Microsoft Docs"
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
  - "C3017"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3017"
ms.assetid: 12ab2c2a-d0d2-4900-9cbf-39be0af590dd
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3017
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il formato del test di terminazione nell'istruzione 'for' OpenMP non è valido  
  
 È necessario che sia specificato in modo completo ed esplicito un ciclo `for` in un'istruzione OpenMP.  
  
 L'esempio seguente genera l'errore C3017:  
  
```  
// C3017.cpp // compile with: /openmp int main() { int i = 0, j = 10; #pragma omp parallel { #pragma omp for for (i = 0; i; ++i)   // C3017 // Try the following line instead: // for (i = 0; i < 10; ++i) ; } }  
```