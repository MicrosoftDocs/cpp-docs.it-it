---
title: "Errore del compilatore C3029 | Microsoft Docs"
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
  - "C3029"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3029"
ms.assetid: 655eb04d-504a-468d-8c0c-bda1e5f297b7
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3029
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': può apparire solo una volta nelle clausole di condivisione dati di una direttiva OpenMP  
  
 Un simbolo è stato usato più volte in una o più clausole di una direttiva. Il simbolo può essere usato solo una volta nella direttiva.  
  
 L'esempio seguente genera l'errore C3029:  
  
```  
// C3029.cpp // compile with: /openmp /link vcomps.lib #include "omp.h" int g_i; int main() { int i, x; #pragma omp parallel reduction(+ : x, x)   // C3029 ; #pragma omp parallel reduction(+ : x)   // OK ; #pragma omp parallel private(x) reduction(+ : x)   // C3029 ; #pragma omp parallel reduction(+ : x)   // OK ; }  
```