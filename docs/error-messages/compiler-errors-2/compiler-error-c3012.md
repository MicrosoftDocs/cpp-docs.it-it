---
title: "Errore del compilatore C3012 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3012"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3012"
ms.assetid: cc7040b1-b3fb-4da6-a474-877914d30332
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3012
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'intrinsic': funzione intrinseca non consentita direttamente in un'area parallela  
  
 Una funzione [intrinseca del compilatore](../../intrinsics/compiler-intrinsics.md) non è consentita in un'area `omp``parallel`.  
  
 L'esempio seguente genera l'errore C3012:  
  
```  
// C3012.cpp // compile with: /openmp #ifdef __cplusplus extern "C" { #endif void* _ReturnAddress(); #ifdef __cplusplus } #endif int main() { _ReturnAddress();   // OK #pragma omp parallel { _ReturnAddress();   // C3012 } }  
```