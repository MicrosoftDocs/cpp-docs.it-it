---
title: "Operatori del preprocessore | Microsoft Docs"
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
helpviewer_keywords: 
  - "operatori [C++], preprocessore"
  - "operatori del preprocessore"
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Operatori del preprocessore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quattro operatori specifici del preprocessore vengono utilizzati nel contesto della direttiva `#define` \(vedere il seguente elenco per un riepilogo di ciascun operatore\).  Gli operatori per la creazione di stringhe, caratteri e concatenamenti dei token sono descritti nelle tre sezioni seguenti.  Per informazioni sull'operatore **defined**, vedere [Le direttive \#if, \#elif, \#else e \#endif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).  
  
|Operatore|Azione|  
|---------------|------------|  
|[Operatore per la creazione di stringhe \(\#\)](../preprocessor/stringizing-operator-hash.md)|Racchiude l'argomento corrispondente tra virgolette doppie|  
|[Operatore charizing \(\#@\)](../preprocessor/charizing-operator-hash-at.md)|Racchiude l'argomento corrispondente tra virgolette singole e viene considerato come un carattere \(Microsoft Specific\)|  
|[Operatore di concatenamento dei token \(\#\#\)](../preprocessor/token-pasting-operator-hash-hash.md)|Consente ai token utilizzati come argomenti effettivi di essere concatenati per formare altri token|  
|[Operatore defined](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|Semplifica la scrittura di espressioni composte in alcune direttive macro|  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)   
 [Macro predefinite](../preprocessor/predefined-macros.md)   
 [Riferimenti al preprocessore C\/C\+\+](../preprocessor/c-cpp-preprocessor-reference.md)