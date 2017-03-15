---
title: "Errore del compilatore C3035 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3035"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3035"
ms.assetid: af34fad2-2b45-42d0-a9ff-04eab3e91c37
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3035
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la direttiva 'ordered' OpenMP deve essere associata direttamente a una direttiva 'for' o 'parallel for' con la clausola 'ordered'  
  
 Una clausola ordered non è stata creata nel formato corretto.  
  
 L'esempio seguente genera l'errore C3035:  
  
```  
// C3035.cpp // compile with: /openmp /link vcomps.lib int main() { int n = 0, x, i; #pragma omp parallel private(n) { #pragma omp ordered   // C3035 // Try the following line instead: // #pragma omp for ordered for (i = 0 ; i < 10 ; ++i) ; } }  
```