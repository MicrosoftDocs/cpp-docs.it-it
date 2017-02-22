---
title: "Struct iterator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "iterator"
  - "std::iterator"
  - "std.iterator"
  - "xutility/std::iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iterator (classe)"
  - "iterator (struct)"
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Struct iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una struttura di base vuoto utilizzato per assicurarsi che una classe definita dall'utente di iteratore funzioni correttamente con **iterator\_trait**S.  
  
## Sintassi  
  
```  
template<class Category, class Type, class Distance = ptrdiff_t  
    class Pointer = Type*, class Reference = Type&>  
    struct iterator {  
        typedef Category iterator_category;  
        typedef Type value_type;  
        typedef Distance difference_type;  
        typedef Distance distance_type;  
        typedef Pointer pointer;  
        typedef Reference reference;  
    };  
```  
  
## Note  
 La struttura del modello funge da tipo di base per tutti gli iteratori.  Definisce i tipi di membri  
  
-   `iterator_category` \(sinonimo del parametro di template `Category`\).  
  
-   `value_type` \(sinonimo del parametro di template **Tipo**\).  
  
-   `difference_type` \(sinonimo del parametro di template `Distance`\).  
  
-   `distance_type` \(sinonimo del parametro di template `Distance`\)  
  
-   `pointer` \(sinonimo del parametro di template `Pointer`\).  
  
-   `reference` \(sinonimo del parametro di template `Reference`\).  
  
 Si noti che `value_type` non deve essere un tipo costante anche se i punti di **pointer** a un oggetto const consente di **Tipo** e di riferimento definisce un oggetto const consente di **Tipo**.  
  
## Esempio  
 Vedere [iterator\_traits](../standard-library/iterator-traits-struct.md) per un esempio di come dichiarare e utilizzare i tipi nella classe base dell'iteratore.  
  
## Requisiti  
 iteratore\<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)