---
title: "Errore del compilatore C3031 | Microsoft Docs"
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
  - "C3031"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3031"
ms.assetid: 7e621e7e-eda7-45b5-8836-29599cd05255
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3031
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': la variabile nella clausola 'reduction' deve avere un tipo aritmetico scalare  
  
 Una variabile di tipo errato è stata passata a una clausola reduction.  
  
 L'esempio seguente genera l'errore C3031:  
  
```  
// C3031.cpp // compile with: /openmp /link vcomps.lib #include <stdio.h> #include "omp.h" typedef struct { int n; } Incomplete; extern Incomplete inc; int i = 9; int main() { #pragma omp parallel reduction(+: inc)   // C3031 ; #pragma omp parallel reduction(+: i)     // OK ; }  
```