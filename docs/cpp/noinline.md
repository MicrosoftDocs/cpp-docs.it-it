---
title: "noinline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "noinline"
  - "noinline_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], noinline"
  - "noinline __declspec (parola chiave)"
ms.assetid: f259d55b-dec7-4bde-8cf9-14521e4fdc42
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# noinline
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 **\_\_declspec\(noinline\)** indica al compilatore di non incorporare mai una funzione membro specifica \(funzione in una classe\).  
  
 Può essere preferibile non incorporare una funzione se è ridotta e non fondamentale per le prestazioni del codice.  Ovvero se la funzione è di piccole dimensioni e probabilmente non viene chiamata spesso, ad esempio una funzione che gestisce una condizione di errore.  
  
 Tenere presente che se una funzione è contrassegnata `noinline`, la funzione chiamante sarà più ridotta e, pertanto, candidata per l'incorporamento del compilatore.  
  
```  
class X {  
   __declspec(noinline) int mbrfunc() {  
      return 0;   
   }   // will not inline  
};  
```  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [inline, \_\_inline, \_\_forceinline](../misc/inline-inline-forceinline.md)