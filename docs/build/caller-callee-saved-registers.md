---
title: "Registri salvati dal chiamante o dal chiamato | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 0533bd4b-d6bb-4ce1-8201-495e16870cbb
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Registri salvati dal chiamante o dal chiamato
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I registri RAX, RCX, RDX, R8, R9, R10 e R11 sono considerati volatili e si deve quindi presupporre che vengano cancellati dopo una chiamata di funzione \(se non diversamente dimostrato da un'analisi, ad esempio l'ottimizzazione dell'intero programma\).  
  
 I registri RBX, RBP, RDI, RSI, RSP, R12, R13, R14 e R15 sono considerati non volatili e devono quindi essere salvati e ripristinati dalle funzioni che utilizzano tali registri.  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)