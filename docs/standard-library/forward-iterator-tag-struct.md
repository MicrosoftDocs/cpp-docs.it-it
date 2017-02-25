---
title: "Struct forward_iterator_tag | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.forward_iterator_tag"
  - "forward_iterator_tag"
  - "std::forward_iterator_tag"
  - "xutility/std::forward_iterator_tag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "forward_iterator_tag (classe)"
  - "forward_iterator_tag (struct)"
ms.assetid: 68b633ac-b135-4e9e-837d-14248a262ec5
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Struct forward_iterator_tag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe che fornisce il tipo restituito dalla funzione di **iterator\_category** che rappresenta un iteratore avanti.  
  
## Sintassi  
  
```  
  
   struct forward_iterator_tag  
: public input_iterator_tag {};  
```  
  
## Note  
 Le classi del tag di categoria vengono utilizzate come compilazione tag per la selezione dell'algoritmo.  La funzione del modello deve verificare qual è la categoria più specifico dell'argomento di iteratore in modo da poter utilizzare l'algoritmo più efficiente in fase di compilazione.  Per ogni iteratore di tipo `Iterator`, `iterator_traits`\<`Iterator`\>**::iterator\_category** deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.  
  
 Il tipo è lo stesso di **iteratore**\<**Iter**\>**::iterator\_category** quando **Iter** descrive un oggetto che può fungere da iteratore avanti.  
  
## Esempio  
 Vedere [iterator\_traits](../standard-library/iterator-traits-struct.md) o [random\_access\_iterator\_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di come utilizzare **iterator\_tag**S.  
  
## Requisiti  
 **Intestazione:** \<iteratore\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Struct input\_iterator\_tag](../standard-library/input-iterator-tag-struct.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)