---
title: "Errore del compilatore C3044 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3044"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3044"
ms.assetid: 9f3e25b2-4676-49ab-97bf-6c88cd0fa377
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3044
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'section': consentita solo se annidata direttamente in una direttiva 'sections' OpenMP  
  
 Il compilatore ha trovato una direttiva `section` usata in modo non corretto. Per altre informazioni, vedere [sections](../../parallel/openmp/reference/sections-openmp.md).  
  
 L'esempio seguente genera l'errore C3044:  
  
```  
// C3044.cpp // compile with: /openmp /c #include "omp.h" int main() { int n2 = 2, n3 = 3; #pragma omp parallel { ++n2; #pragma omp sections { ++n2; } #pragma omp section   // C3044 { ++n3; } } #pragma omp parallel { ++n2; #pragma omp sections { #pragma omp section   // OK { ++n3; } } } }  
```