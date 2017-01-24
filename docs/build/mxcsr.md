---
title: "MxCsr | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4f3c229d-0862-4733-acc7-9ed7a0b870ce
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# MxCsr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Lo stato del registro include anche MxCsr.  La convenzione di chiamata divide questo registro in una parte volatile e una parte non volatile.  La parte volatile è costituita dai 6 flag di stato \(MXCSR\[0:5\]\) mentre il resto del registro \(MXCSR\[6:15\]\) è considerato non volatile.  
  
 All'inizio dell'esecuzione del programma, la parte non volatile viene impostata sui seguenti valori standard:  
  
```  
MXCSR[6]         : Denormals are zeros - 0  
MXCSR[7:12]      : Exception masks all 1's (all exceptions masked)  
MXCSR[13:14]   : Rounding  control - 0 (round to nearest)  
MXCSR[15]      : Flush to zero for masked underflow - 0 (off)  
```  
  
 Un chiamato che modifica uno qualsiasi dei campi non volatili in MXCSR deve ripristinare i valori originali prima di restituire il controllo al chiamante.  Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi deve ripristinare i relativi valori standard prima di chiamare un chiamato, a meno che quest'ultimo non si aspetti i valori modificati.  
  
 Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:  
  
-   Quando si utilizzano funzioni definite esplicitamente per modificare i flag MxCsr non volatili.  
  
-   Quando è dimostrato che la violazione di queste regole porta alla creazione di un programma che ha lo stesso comportamento di un programma in cui tali regole non vengono violate, ad esempio tramite un'analisi a livello di intero programma.  
  
 Non è possibile effettuare alcuna assunzione sullo stato della parte volatile di MXCSR in un limite di funzione, a meno che non siano esplicitamente definite nella documentazione di una funzione.  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)