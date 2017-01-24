---
title: "Errore del compilatore C3033 | Microsoft Docs"
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
  - "C3033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3033"
ms.assetid: 8628b6bb-a650-4ed2-af13-57acd2f7ddbb
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3033
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': la variabile nella clausola 'clause' non può avere un tipo const  
  
 I valori passati a determinate clausole non possono essere variabili `const`.  
  
 L'esempio seguente genera l'errore C3033:  
  
```  
// C3033.cpp // compile with: /openmp /link vcomps.lib int main() { const int val = 1; int val2 = 1; #pragma omp parallel reduction(+ : val)   // C3033 ; #pragma omp parallel reduction(+ : val2)   // OK ; }  
```