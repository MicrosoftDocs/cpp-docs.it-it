---
title: "Struct bidirectional_iterator_tag | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "xutility/std::bidirectional_iterator_tag"
  - "std::bidirectional_iterator_tag"
  - "std.bidirectional_iterator_tag"
  - "bidirectional_iterator_tag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bidirectional_iterator_tag (classe)"
  - "bidirectional_iterator_tag (struct)"
ms.assetid: 9ac06066-b8ae-44b6-bee4-b05855f6a31a
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Struct bidirectional_iterator_tag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe che fornisce il tipo restituito dalla funzione di **iterator\_category** che rappresenta un iteratore bidirezionale.  
  
## Sintassi  
  
```  
  
   struct bidirectional_iterator_tag  
: public forward_iterator_tag {};  
```  
  
## Note  
 Le classi del tag di categoria vengono utilizzate come compilazione tag per la selezione dell'algoritmo.  La funzione del modello deve trovare la categoria più specifico dell'argomento di iteratore, può utilizzare l'algoritmo più efficiente in fase di compilazione.  Per ogni iteratore di tipo `Iterator`, il ::\<**iterator\_category** di `iterator_traits``Iterator`\>deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.  
  
 Il tipo è uguale al ::\<**iterator\_category** di **iteratoreIter**\>quando **Iter** descrive un oggetto che può fungere da iteratore bidirezionale.  
  
## Esempio  
 Vedere [random\_access\_iterator\_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di come utilizzare `bidirectional_iterator_tag`.  
  
## Requisiti  
 **Intestazione:** \<iteratore\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Struct forward\_iterator\_tag](../standard-library/forward-iterator-tag-struct.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)