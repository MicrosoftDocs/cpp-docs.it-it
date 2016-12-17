---
title: "Struct output_iterator_tag | Microsoft Docs"
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
  - "std::output_iterator_tag"
  - "output_iterator_tag"
  - "xutility/std::output_iterator_tag"
  - "std.output_iterator_tag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "output_iterator_tag (classe)"
  - "output_iterator_tag (struct)"
ms.assetid: c23a4331-b069-4fa0-9c3a-1c9be7095553
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct output_iterator_tag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe che restituisce un tipo restituito per una funzione **iterator\_category** che rappresenta un iteratore di output.  
  
## Sintassi  
  
```  
  
struct output_iterator_tag {};  
  
```  
  
## Note  
 Le classi di tag di categoria vengono utilizzate come tag per la selezione algoritmo di compilazione. La funzione di modello deve trovare la categoria più specifica del relativo argomento iteratore in modo da poter utilizzare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, `iterator_traits`\<`Iterator`\>**:: iterator\_category** deve essere definito per il tag di categoria specifico che descrive il comportamento dell'iteratore.  
  
 Il tipo è identico **iteratore**\<**Iter**\>**:: iterator\_category** quando **Iter** descrive un oggetto che può essere utilizzato come un iteratore di output.  
  
 Questo tag non è con parametri sul `value_type` o `difference_type` per l'iteratore, come con altri tag iteratore, perché gli iteratori di output non sono uno un `value_type` o `difference_type`.  
  
## Esempio  
 Vedere [iterator\_traits](../standard-library/iterator-traits-struct.md) o [random\_access\_iterator\_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di come utilizzare **iterator\_tag**s.  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)