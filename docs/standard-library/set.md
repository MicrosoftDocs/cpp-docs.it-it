---
title: "&lt;set&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.<set>"
  - "std::<set>"
  - "<set>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set (intestazione)"
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;set&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le classi modello del contenitore set e multiset e i rispettivi modelli di supporto.  
  
## Sintassi  
  
```  
  
#include <set>  
  
```  
  
## Membri  
  
### Operatori  
  
|Versione set|Versione multiset|Descrizione|  
|------------------|-----------------------|-----------------|  
|[operator\!\= \(set\)](../Topic/operator!=%20\(set\).md)|[operator\!\= \(multiset\)](../Topic/operator!=%20\(multiset\).md)|Verifica se l'oggetto set o multiset a sinistra dell'operatore non è uguale all'oggetto set o multiset a destra.|  
|[operator\< \(set\)](../Topic/operator%3C%20\(set\).md)|[operator\< \(multiset\)](../Topic/operator%3C%20\(multiset\).md)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore dell'oggetto set o multiset a destra.|  
|[operator\<\= \(set\)](../Topic/operator%3C=%20\(set\).md)|[operator\<\= \(multiset\)](../Topic/operator%3C=%20\(multiset\).md)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore o uguale all'oggetto set o multiset a destra.|  
|[operator\=\= \(set\)](../Topic/operator==%20\(set\).md)|[operator\=\= \(multiset\)](../Topic/operator==%20\(multiset\).md)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è uguale all'oggetto set o multiset a destra.|  
|[operator\> \(set\)](../Topic/operator%3E%20\(set\).md)|[operator\> \(multiset\)](../Topic/operator%3E%20\(multiset\).md)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore dell'oggetto set o multiset a destra.|  
|[operator\>\= \(set\)](../Topic/operator%3E=%20\(set\).md)|[operator\>\= \(multiset\)](../Topic/operator%3E=%20\(multiset\).md)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore o uguale all'oggetto set o multiset a destra.|  
  
### Funzioni di modello specializzate  
  
|Versione set|Versione multiset|Descrizione|  
|------------------|-----------------------|-----------------|  
|[swap \(set\)](../Topic/swap%20\(set\).md)|[swap \(multiset\)](../Topic/swap%20\(multiset\).md)|Scambia gli elementi di due set o multiset.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe set](../standard-library/set-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|  
|[Classe multiset](../standard-library/multiset-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti devono essere univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)