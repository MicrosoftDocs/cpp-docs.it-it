---
title: "Errore del compilatore C3040 | Microsoft Docs"
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
  - "C3040"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3040"
ms.assetid: 29e857ac-74f0-4ec6-becf-9026e38c160e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3040
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': il tipo di variabile nella clausola 'reduction' incompatibile con l'operatore di riduzione 'operator'  
  
 Una variabile in una clausola [reduction](../../parallel/openmp/reference/reduction.md) non può essere usata con l'operatore di riduzione.  
  
 L'esempio seguente genera l'errore C3040:  
  
```  
// C3040.cpp // compile with: /openmp /c #include "omp.h" double d; int main() { #pragma omp parallel reduction(&:d)   // C3040 ; #pragma omp parallel reduction(-:d)  // OK ; }  
```