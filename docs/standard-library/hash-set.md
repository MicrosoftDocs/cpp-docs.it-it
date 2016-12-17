---
title: "&lt;hash_set&gt; | Microsoft Docs"
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
  - "<hash_set>"
  - "std.<hash_set>"
  - "std::<hash_set>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_set (intestazione)"
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
caps.latest.revision: 22
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;hash_set&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questa intestazione è obsoleta. L'alternativa è [\<unordered\_set\>](../standard-library/unordered-set.md).  
  
 Definisce le classi modello del contenitore hash\_set e hash\_multiset e i rispettivi modelli di supporto.  
  
## Sintassi  
  
```  
  
#include <hash_set>  
  
```  
  
## Note  
 In Visual C\+\+ .NET 2003 i membri dei file di intestazione [\<hash\_map\>](../standard-library/hash-map.md) e [\<hash\_set\>](#vclrfhash_set_header_file) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per ulteriori informazioni, vedere [lo spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
### Operatori  
  
|Versione di hash\_set|Versione di hash\_multiset|Descrizione|  
|---------------------------|--------------------------------|-----------------|  
|[operator\!\= \(hash\_set\)](../Topic/operator!=%20\(hash_set\).md)|[operator\!\= \(hash\_multiset\)](../Topic/operator!=%20\(hash_multiset\).md)|Verifica se l'oggetto hash\_set o hash\_multiset a sinistra dell'operatore non è uguale all'oggetto hash\_set o hash\_multiset a destra.|  
|[operator\=\= \(hash\_set\)](http://msdn.microsoft.com/it-it/791b95bd-f917-4716-aea6-add50badbfac)|[operator\=\= \(hash\_multiset\)](http://msdn.microsoft.com/it-it/cfa9aa0c-d5f6-403a-9441-35c2a4cee0fb)|Verifica se l'oggetto hash\_set o hash\_multiset a sinistra dell'operatore è uguale all'oggetto hash\_set o hash\_multiset a destra.|  
  
### Funzioni di modello specializzate  
  
|Versione di hash\_set|Versione di hash\_multiset|Descrizione|  
|---------------------------|--------------------------------|-----------------|  
|[swap \(hash\_set\)](../Topic/swap%20\(hash_set\).md)|[swap \(hash\_multiset\)](../Topic/swap%20\(hash_multiset\).md)|Scambia gli elementi di due oggetti hash\_set o hash\_multiset.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe hash\_compare](../standard-library/hash-compare-class.md)|Descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, hash\_map, hash\_multimap, hash\_set o hash\_multiset, come oggetto del parametro **Traits** predefinito per l'ordinamento e l'hashing degli elementi contenuti.|  
|[Classe hash\_set](../standard-library/hash-set-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|  
|[Classe hash\_multiset](../standard-library/hash-multiset-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)