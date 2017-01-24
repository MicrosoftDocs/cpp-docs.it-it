---
title: "Errore del compilatore C3043 | Microsoft Docs"
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
  - "C3043"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3043"
ms.assetid: 0ef55e63-e82b-48eb-9d44-690950ac34c6
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3043
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la direttiva 'critical' OpenMP non può essere annidata in una direttiva 'critical' con lo stesso nome  
  
 Una direttiva [critical](../../parallel/openmp/reference/critical.md) non può essere annidata in una direttiva `critical` che usa lo stesso nome.  
  
 L'esempio seguente genera l'errore C3043:  
  
```  
// C3043.cpp // compile with: /openmp /c #include "omp.h" int main() { int n1 = 1, n2 = 2, n3 = 3; #pragma omp parallel { ++n2; #pragma omp critical(MyTest) { ++n2; #pragma omp critical(MyTest)   // C3043 // try the following line instead // #pragma omp critical(MyTest2) { ++n3; } } } }  
```