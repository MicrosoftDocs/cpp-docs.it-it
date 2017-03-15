---
title: "Cenni preliminari sulle istruzioni C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istruzioni, C++"
ms.assetid: e56996b2-b846-4b99-ac94-ac72fffc5ec7
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cenni preliminari sulle istruzioni C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le istruzioni di C\+\+ vengono eseguite in sequenza, tranne quando un'istruzione di espressione, un'istruzione di selezione, un'istruzione di iterazione o un'istruzione di salto modifica in modo specifico tale sequenza.  
  
 Le istruzioni possono essere dei seguenti tipi:  
  
```  
  
        labeled-statement  
expression-statement  
compound-statement  
selection-statement  
iteration-statement  
jump-statement  
declaration-statement  
try-throw-catch  
```  
  
 Nella maggior parte dei casi, la sintassi dell'istruzione C\+\+ è identica a quella ANSI C.  La differenza principale tra le due è che in C, le dichiarazioni sono valide solo all'inizio di un blocco; mentre C\+\+ consente di aggiungere *declaration\-statement*, che rimuove in modo efficace questa restrizione.  Ciò consente di immettere variabili in un punto del programma in cui un valore di inizializzazione precalcolato può essere calcolato.  
  
 La dichiarazione di variabili all'interno di blocchi consente inoltre di esercitare controllo preciso sull'ambito e la durata di tali variabili.  
  
 Gli argomenti sulle istruzioni descrivono le seguenti parole chiave C\+\+:  
  
|||||  
|-|-|-|-|  
|[break](../cpp/break-statement-cpp.md)|[else](../cpp/if-else-statement-cpp.md)|[\_\_if\_exists](../cpp/if-exists-statement.md)|[\_\_try](../cpp/structured-exception-handling-c-cpp.md)|  
|[case](../cpp/switch-statement-cpp.md)|[\_\_except](../cpp/structured-exception-handling-c-cpp.md)|[\_\_if\_not\_exists](../cpp/if-not-exists-statement.md)|[try](../cpp/try-throw-and-catch-statements-cpp.md)|  
|[catch](../cpp/try-throw-and-catch-statements-cpp.md)|[for](../cpp/for-statement-cpp.md)|[\_\_leave](../c-language/try-finally-statement-c.md)|[while](../cpp/while-statement-cpp.md)|  
|[continue](../cpp/continue-statement-cpp.md)|[goto](../cpp/goto-statement-cpp.md)|[return](../cpp/return-statement-cpp.md)||  
|[default](../cpp/switch-statement-cpp.md)|[\_\_finally](../cpp/structured-exception-handling-c-cpp.md)|[switch](../cpp/switch-statement-cpp.md)||  
|[do](../cpp/do-while-statement-cpp.md)|[if](../cpp/if-else-statement-cpp.md)|[throw](../cpp/try-throw-and-catch-statements-cpp.md)||  
  
## Vedere anche  
 [Istruzioni](../cpp/statements-cpp.md)