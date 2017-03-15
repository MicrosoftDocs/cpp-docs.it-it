---
title: "Errore del compilatore C3045 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3045"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3045"
ms.assetid: 9351ba3e-3d3f-455f-ac90-a810fa9fd947
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3045
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Prevista un'istruzione composta dopo la direttiva 'sections' OpenMP seguente. '{' mancante  
  
 Un blocco di codice delimitato da parentesi graffe deve seguire una direttiva [sections](../../parallel/openmp/reference/sections-openmp.md).  
  
 L'esempio seguente genera l'errore C3045:  
  
```  
// C3045.cpp // compile with: /openmp /c #include "omp.h" int main() { int n2 = 2, n3 = 3; #pragma omp parallel { ++n2; #pragma omp sections ++n2;   // C3045 #pragma omp sections   // OK { ++n3; } } }  
```