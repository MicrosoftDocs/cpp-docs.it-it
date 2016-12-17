---
title: "FpCsr | Microsoft Docs"
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
ms.assetid: dff95d5d-7589-4432-82db-64b459c24352
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# FpCsr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Lo stato del registro include anche la parola di controllo FPU x87.  Nella convenzione di chiamata viene specificato che questo registro deve essere non volatile.  
  
 All'inizio dell'esecuzione del programma, il registro della parola di controllo FPU x87 viene impostato sui seguenti valori standard:  
  
```  
FPCSR[0:6]: Exception masks all 1's (all exceptions masked)  
FPCSR[7]: Reserved – 0  
FPCSR[8:9]: Precision Control – 10B (double precision)  
FPCSR[10:11]: Rounding  control - 0 (round to nearest)  
FPCSR[12]: Infinity control – 0 (not used)  
```  
  
 Un chiamato che modifica uno qualsiasi dei campi in FPCSR deve ripristinare i valori originali prima di restituire il controllo al chiamante.  Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi deve ripristinare i relativi valori standard prima di chiamare un chiamato, a meno che quest'ultimo non si aspetti i valori modificati.  
  
 Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:  
  
1.  Quando si utilizzano funzioni definite esplicitamente per modificare i flag FpCsr non volatili.  
  
2.  Quando è dimostrato che la violazione di queste regole porta alla creazione di un programma che ha lo stesso comportamento di un programma in cui tali regole non vengono violate, ad esempio tramite un'analisi a livello di intero programma.  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)