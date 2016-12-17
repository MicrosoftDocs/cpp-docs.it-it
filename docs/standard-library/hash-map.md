---
title: "&lt;hash_map&gt; | Microsoft Docs"
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
  - "std.<hash_map>"
  - "<hash_map>"
  - "std::<hash_map>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_map (intestazione)"
ms.assetid: 0765708a-a668-42a2-9800-654c857bdcc2
caps.latest.revision: 27
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;hash_map&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questa intestazione è obsoleta. L'alternativa è [\<unordered\_map\>](../standard-library/unordered-map.md).  
  
 Definisce le classi del modello del contenitore hash\_map e hash\_multimap e i relativi modelli di supporto.  
  
 In Visual C\+\+ .NET 2003 i membri dei file di intestazione [\<hash\_map\>](#vclrfhash_map_header_file) e [\<hash\_set\>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
## Sintassi  
  
```  
  
#include <hash_map>  
  
```  
  
### Operatori  
  
|Versione hash\_map|Versione hash\_multimap|Descrizione|  
|------------------------|-----------------------------|-----------------|  
|[operator\!\= \(hash\_map\)](../Topic/operator!=%20\(hash_map\).md)|[operator\!\= \(hash\_multimap\)](../Topic/operator!=%20\(hash_multimap\).md)|Verifica se l'oggetto hash\_map o hash\_multimap a sinistra dell'operatore non è uguale all'oggetto hash\_map o hash\_multimap a destra.|  
|[operator\=\= \(hash\_map\)](http://msdn.microsoft.com/it-it/f933cb1c-934d-43f5-aa9e-0b325eb95b85)|[operator\=\= \(hash\_multimap\)](http://msdn.microsoft.com/it-it/3fa378b1-0250-4e3f-a130-dc14103fc5e9)|Verifica se l'oggetto hash\_map o hash\_multimap a sinistra dell'operatore è uguale all'oggetto hash\_map o hash\_multimap a destra.|  
  
### Funzioni di modello specializzate  
  
|Versione hash\_map|Versione hash\_multimap|Descrizione|  
|------------------------|-----------------------------|-----------------|  
|[swap \(hash\_map\)](../Topic/hash_map::swap.md)|[swap \(hash\_multimap\)](../Topic/hash_multimap::swap.md)|Scambia gli elementi di due oggetti hash\_map o hash\_multimap.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe hash\_compare](../standard-library/hash-compare-class.md)|Descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, hash\_map, hash\_multimap, hash\_set o hash\_multiset, come oggetto del parametro **Traits** predefinito per l'ordinamento e l'hashing degli elementi contenuti.|  
|[Classe value\_compare](../standard-library/value-compare-class.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto hash\_map comparando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto hash\_map.|  
|[Classe hash\_map](../standard-library/hash-map-class.md)|Usata per archiviare e recuperare rapidamente i dati da una raccolta in cui ogni elemento è una coppia che ha una chiave di ordinamento con valore univoco e un valore di dati associato.|  
|[Classe hash\_multimap](../standard-library/hash-multimap-class.md)|Usata per archiviare e recuperare rapidamente i dati da una raccolta in cui ogni elemento è una coppia con una chiave di ordinamento il cui valore non deve essere univoco e un valore di dati associato.|  
  
## Requisiti  
 **Intestazione:** \<hash\_map\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)