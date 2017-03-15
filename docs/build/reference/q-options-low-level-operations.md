---
title: "Opzioni /Q (Operazioni di basso livello) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/q"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Q (opzione del compilatore) [C++]"
  - "-Q (opzione del compilatore) [C++]"
  - "/Q (opzione del compilatore) [C++]"
ms.assetid: 9fa738b9-630a-4bde-bc87-bdfa30552be4
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Opzioni /Q (Operazioni di basso livello)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare le opzioni del compilatore **\/Q** per effettuare le seguenti operazioni del compilatore di basso livello:  
  
-   [\/Qfast\_transcendentals \(forzare funzioni trascendenti veloci\)](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md): genera funzioni trascendenti veloci.  
  
-   [\/QIfist \(Elimina \_ftol\)](../../build/reference/qifist-suppress-ftol.md): elimina `_ftol` quando è necessario eseguire a una conversione da un tipo a virgola mobile a un tipo intero \(solo x86\).  
  
-   [\/Qimprecise\_fwaits \(rimuovere comandi fwait all'interno dei blocchi try\)](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): rimuove i comandi `fwait` all'interno dei blocchi `try`.  
  
-   [\/Qpar \(Parallelizzazione automatica\)](../../build/reference/qpar-auto-parallelizer.md): Abilita la parallelizzazione automatica dei cicli contrassegnati con la direttiva [\#pragma loop\(\)](../../preprocessor/loop.md).  
  
-   [\/Qvec\-report \(livello di segnalazione parallelizzazione automatica\)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md): Abilita livelli di segnalazione per la parallelizzazione automatica.  
  
-   [\/Qsafe\_fp\_loads](../../build/reference/qsafe-fp-loads.md): Elimina le ottimizzazioni per i caricamenti dei registri a virgola mobile e per gli spostamenti tra la memoria e i registri MMX.  
  
-   [\/Qvec\-report \(livello di segnalazione vettorizzazione automatica\)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md): Abilita livelli di segnalazione per la vettorizzazione automatica.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)