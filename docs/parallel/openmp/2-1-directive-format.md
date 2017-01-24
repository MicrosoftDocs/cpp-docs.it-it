---
title: "2.1 Directive Format | Microsoft Docs"
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
ms.assetid: 918b6445-d35e-4176-9565-b045be941b4d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.1 Directive Format
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La sintassi di una direttiva di OpenMP è specificata modo dalla grammatica in [Appendice C\#](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)e semplicemente accento come segue:  
  
```  
#pragma omp directive-name  [clause[ [,] clause]...] new-line  
```  
  
 Ogni direttiva inizia con  **omp \#pragma**, per ridurre la possibilità che il conflitto con altre \(estensioni del fornitore o non\-OpenMP e OpenMP\) direttive pragma con lo stesso nome.  Il resto della direttiva seguendo convenzioni di standard di C\+\+ e c\# per le direttive del compilatore.  In particolare, lo spazio vuoto può essere utilizzato prima e dopo **\#**e talvolta dello spazio vuoto deve essere utilizzato per separare le parole in una direttiva.  Seguire i token di pre\-elaborazione **omp \#pragma** essere conforme alla macro sostituzione.  
  
 Le direttive viene fatta distinzione tra maiuscole e minuscole.  L'ordine in cui le clausole vengono visualizzati nelle direttive non è significativo.  Le clausole sulle direttive possono essere ripetute in base alle necessità ma restrizioni elencate nella descrizione di ogni clausola.  se *variabile\-elenco* viene visualizzato in una clausola, deve specificare solo le variabili.  Solo uno *direttiva\-nome* è possibile specificare per direttiva.  Ad esempio, la seguente direttiva non è consentita:  
  
```  
/* ERROR - multiple directive names not allowed */  
#pragma omp parallel barrier  
```  
  
 Una direttiva di OpenMP si applica al massimo a un'istruzione successivo, che deve essere un blocco strutturato.