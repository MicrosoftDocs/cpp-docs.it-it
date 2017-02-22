---
title: "Classe allocator&lt;void&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "memory/std::allocator<void>"
  - "std::allocator<void>"
  - "std.allocator<void>"
  - "allocator<void>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator<void> (classe)"
ms.assetid: abfb40f5-c600-46a6-b130-f42c6535b2bd
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe allocator&lt;void&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una specializzazione di allocatore della classe modello per immettere `void`, definendo i tipi che hanno significato in questo contesto.  
  
## Sintassi  
  
```  
template<>  
   class allocator<void> {  
   typedef void *pointer;  
   typedef const void *const_pointer;  
   typedef void value_type;  
   template<class Other>  
      struct rebind;  
   allocator( );  
   allocator(  
      const allocator<void>&  
   );  
   template<class Other>  
      allocator(  
         const allocator<Other>&  
      );  
   template<class Other>  
      allocator<void>& operator=(  
         const allocator<Other>&  
      );  
   };  
```  
  
## Note  
 La classe in modo esplicito specializza la classe modello per [allocatore](../standard-library/allocator-class.md) per tipo *vuoto.* I costruttori e operatore di assegnazione si comportano allo stesso modo della classe modello, ma definisce solo i tipi seguenti:  
  
-   [const\_pointer](../Topic/allocator::const_pointer.md).  
  
-   [puntatore](../Topic/allocator::pointer.md).  
  
-   [value\_type](../Topic/allocator::value_type.md).  
  
-   [riassociare](../Topic/allocator::rebind.md), una classe annidata modello.  
  
## Requisiti  
 memoria\<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)