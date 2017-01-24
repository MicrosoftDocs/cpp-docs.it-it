---
title: "Utilizzo di setjmp/longjmp | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "longjmp"
  - "setjmp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, setjmp/longjmp (funzioni)"
  - "funzione longjmp nei programmi C++"
  - "setjmp (funzione)"
  - "setjmp (funzione), programmi C++"
  - "SETJMP.H"
  - "SETJMPEX.H"
ms.assetid: 96be8816-f6f4-4567-9a9c-0c3c720e37c5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di setjmp/longjmp
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando [setjmp](../c-runtime-library/reference/setjmp.md) e [longjmp](../c-runtime-library/reference/longjmp.md) vengono utilizzate insieme, offrono un metodo per eseguire `goto`non in locale.  In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni standard di chiamata o restituzione.  
  
> [!CAUTION]
>  Tuttavia, poiché `setjmp` e `longjmp` non supportano la semantica degli oggetti C\+\+, e dato che potrebbero compromettere le prestazioni impedendo l'ottimizzazione delle variabili locali, si consiglia di non utilizzarle nei programmi C\+\+.  Si consiglia di utilizzare invece il costruttore `try`\/`catch`.  
  
 Se si decide di utilizzare `setjmp`\/`longjmp` in un programma C\+\+, includere anche SETJMP.H o SETJMPEX.H, in modo da garantire la corretta interazione tra le funzioni e la gestione delle eccezioni C\+\+.  Se si utilizza [\/EH](../build/reference/eh-exception-handling-model.md) per la compilazione, i distruttori per gli oggetti locali vengono chiamati durante la rimozione dello stack.  Se si utilizza **\/EHs** per la compilazione e una delle funzioni chiama una funzione che utilizza [nothrow](../cpp/nothrow-cpp.md), mentre la funzione che utilizza `nothrow` chiama `longjmp`, la rimozione del distruttore potrebbe non avvenire, a seconda dell'utilità di ottimizzazione.  
  
 Nel codice portabile, quando viene eseguito `goto` non locale che chiama `longjmp`, la corretta distruzione corretta oggetti basati su frame può rivelarsi inaffidabile.  
  
## Vedere anche  
 [Combinazione di eccezioni C \(strutturate\) ed eccezioni C\+\+](../cpp/mixing-c-structured-and-cpp-exceptions.md)