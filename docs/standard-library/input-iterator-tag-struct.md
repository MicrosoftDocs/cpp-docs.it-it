---
title: "Struct input_iterator_tag | Microsoft Docs"
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
  - "input_iterator_tag"
  - "std.input_iterator_tag"
  - "std::input_iterator_tag"
  - "xutility/std::input_iterator_tag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "input_iterator_tag (classe)"
  - "input_iterator_tag (struct)"
ms.assetid: ad68a4c6-f315-4ce1-8b74-c1fc71bd1577
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct input_iterator_tag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe che fornisce il tipo restituito dalla funzione di **iterator\_category** che rappresenta un iteratore di input.  
  
## Sintassi  
  
```  
  
struct input_iterator_tag {};  
  
```  
  
## Note  
 Le classi del tag di categoria vengono utilizzate come compilazione tag per la selezione dell'algoritmo.  La funzione del modello deve trovare la categoria più specifico dell'argomento di iteratore in modo da poter utilizzare l'algoritmo più efficiente in fase di compilazione.  Per ogni iteratore di tipo `Iterator`, `iterator_traits`\<`Iterator`\>**::iterator\_category** deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.  
  
 Il tipo è lo stesso di **iteratore**\<**Iter**\>**::iterator\_category** quando **Iter** descrive un oggetto che può fungere da iteratore di input.  
  
## Esempio  
 Vedere [iterator\_traits](../standard-library/iterator-traits-struct.md) o [random\_access\_iterator\_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di come utilizzare **iterator\_tag**S.  
  
## Requisiti  
 **Intestazione:** \<iteratore\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)