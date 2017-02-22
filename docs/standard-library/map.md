---
title: "&lt; map &gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<map>"
  - "std.<map>"
  - "<map>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "map (intestazione)"
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# &lt; map &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le classi del modello del contenitore map e multimap e i relativi modelli di supporto.  
  
## Sintassi  
  
```  
  
#include <map>  
  
```  
  
## Membri  
  
### Operatori  
  
|Versione map|Versione multimap|Descrizione|  
|------------------|-----------------------|-----------------|  
|[operator\!\= \(map\)](../Topic/operator!=%20\(map\).md)|[operator\!\= \(multimap\)](../Topic/operator!=%20\(multimap\).md)|Verifica se l'oggetto map o multimap a sinistra dell'operatore non è uguale all'oggetto map o multimap a destra.|  
|[operator\< \(map\)](../Topic/operator==%20\(map\).md)|[operator\< \(multimap\)](../Topic/operator==%20\(multimap\).md)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore dell'oggetto map o multimap a destra.|  
|[operator\<\= \(map\)](../Topic/operator%3C%20\(map\).md)|[operator\<\= \(multimap\)](../Topic/operator%3C%20\(multimap\).md)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore o uguale all'oggetto map o multimap a destra.|  
|[operator\=\= \(map\)](../Topic/operator%3C=%20\(map\).md)|[operator\=\= \(multimap\)](../Topic/operator%3C=%20\(multimap\).md)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è uguale all'oggetto map o multimap a destra.|  
|[operator\> \(map\)](../Topic/operator%3E%20\(map\).md)|[operator\> \(multimap\)](../Topic/operator%3E%20\(multimap\).md)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore dell'oggetto map o multimap a destra.|  
|[operator\>\= \(map\)](../Topic/operator%3E=%20\(map\).md)|[operator\>\= \(multimap\)](../Topic/operator%3E=%20\(multimap\).md)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore o uguale all'oggetto map o multimap a destra.|  
  
### Funzioni di modello specializzate  
  
|Versione map|Versione multimap|Descrizione|  
|------------------|-----------------------|-----------------|  
|[swap \(map\)](../Topic/swap%20\(map\).md)|[swap \(multimap\)](../Topic/swap%20\(multimap\).md)|Scambia gli elementi di due oggetti map o multimap.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe value\_compare](../standard-library/value-compare-class-map.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto map confrontando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto map.|  
|[Classe map](../standard-library/map-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati.|  
|[Classe multimap](../standard-library/multimap-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati e le chiavi non necessitano di valori univoci.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)