---
title: "Informazioni sui tipi di runtime | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RTTI (opzione del compilatore)"
  - "runtime, controllo di tipo"
  - "controlli runtime, controllo di tipo"
  - "informazioni sui tipi di runtime"
  - "informazioni sui tipi, controllo dei tipi di runtime"
ms.assetid: becbd0e5-0439-4c61-854f-8a74f7160c54
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Informazioni sui tipi di runtime
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le informazioni sui tipi in fase di esecuzione \(RTTI\) sono un meccanismo che consente di determinare il tipo di un oggetto durante l'esecuzione del programma.  RTTI è stato aggiunto al linguaggio C\+\+ perché molti fornitori di librerie di classi stavano implementando questa funzionalità per conto proprio.  Questa situazione ha provocato incompatibilità tra le librerie.  Pertanto, è diventato evidente che erano necessario fornire supporto per le informazioni sui tipi in fase di esecuzione a livello di linguaggio.  
  
 Per maggiore chiarezza, la discussione di RTTI si limita quasi completamente ai puntatori.  Tuttavia, i concetti illustrati sono applicabili anche ai riferimenti.  
  
 Esistono tre elementi principali del linguaggio C\+\+ per eseguire informazioni sui tipi in fase di esecuzione:  
  
-   L'operatore [dynamic\_cast](../cpp/dynamic-cast-operator.md).  
  
     Utilizzato per la conversione dei tipi polimorfici.  
  
-   L'operatore [typeid](../cpp/typeid-operator.md).  
  
     Utilizzato per l'identificazione del tipo esatto di un oggetto.  
  
-   La classe [type\_info](../cpp/type-info-class.md).  
  
     Utilizzata per conservare le informazioni sul tipo restituite dall'operatore `typeid`.  
  
## Vedere anche  
 [Cast](../cpp/casting.md)