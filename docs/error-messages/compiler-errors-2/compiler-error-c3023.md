---
title: "Errore del compilatore C3023 | Microsoft Docs"
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
  - "C3023"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3023"
ms.assetid: 89dcce98-3cd7-4931-a50f-87df1d2ebc9b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3023
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'value': rilevato token imprevisto nell'argomento della clausola 'clause' OpenMP  
  
 I valori passati a una clausola non erano validi.  
  
 L'esempio seguente genera l'errore C3023:  
  
```  
// C3023.cpp // compile with: /openmp /link vcomps.lib #include <stdio.h> #include "omp.h" int main() { int i; #pragma omp parallel for schedule(dynamic 10)   // C3023 for (i = 0; i < 10; ++i) ; #pragma omp parallel for schedule(dynamic;10)   // C3023 for (i = 0; i < 10; ++i) ; // OK #pragma omp parallel for schedule(dynamic, 10) for (i = 0; i < 10; ++i) ; }  
```