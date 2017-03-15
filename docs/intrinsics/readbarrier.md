---
title: "_ReadBarrier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_ReadBarrier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ReadBarrier (intrinseco)"
ms.assetid: f9e54a92-61bc-4f55-8195-b8932065a796
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 25
---
# _ReadBarrier
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Limita le ottimizzazioni del compilatore che possono riordinare le operazioni di accesso alla memoria nel punto della chiamata.  
  
> [!CAUTION]
>  Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate.  Per la comunicazione tra thread, usare meccanismi come [atomic\_thread\_fence](../Topic/atomic_thread_fence%20Function.md) e [std::atomic\<T\>](../standard-library/atomic.md), definiti nella [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md).  Per l'accesso hardware, usare l'opzione del compilatore [\/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) con la parola chiave [volatile](../cpp/volatile-cpp.md).  
  
## Sintassi  
  
```  
void _ReadBarrier(void);  
```  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`_ReadBarrier`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 La funzione intrinseca `_ReadBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)