---
title: "setjmp/longjump | Microsoft Docs"
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
ms.assetid: b0e21902-095d-4198-8f9a-b6326525721a
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# setjmp/longjump
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si include setjmpex.h o setjmp.h, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) o [longjmp](../c-runtime-library/reference/longjmp.md) causeranno l'esecuzione di una procedura di rimozione in cui vengono richiamati i distruttori e le clausole finally.  Questo comportamento differisce da quello dei processori x86, in cui l'inclusione di setjmp.h non causa la chiamata dei distruttori e delle clausole finally.  
  
 Una chiamata a `setjmp` mantiene il puntatore corrente dello stack, i registri non volatili e i registri MxCsr.  Le chiamate a `longjmp` restituiscono il sito di chiamata `setjmp` più recente e reimpostano il puntatore dello stack, i registri non volatili e i registri MxCsr sullo stato esistente al momento dell'ultima chiamata a `setjmp`.  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)