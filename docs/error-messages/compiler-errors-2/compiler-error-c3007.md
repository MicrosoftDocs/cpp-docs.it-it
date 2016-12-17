---
title: "Errore del compilatore C3007 | Microsoft Docs"
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
  - "C3007"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3007"
ms.assetid: e415ef42-bdc9-4f32-8198-5e25b289a089
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3007
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'arg': la clausola nella direttiva 'directive' OpenMP non accetta un argomento  
  
 È stato specificato un argomento in una direttiva OpenMP che non accetta argomenti.  
  
 L'esempio seguente genera l'errore C3007:  
  
```  
// C3007.c // compile with: /openmp int main() { #pragma omp parallel for ordered(2)   // C3007 }  
```