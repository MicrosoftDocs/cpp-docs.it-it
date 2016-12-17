---
title: "Classe basic_istringstream | Microsoft Docs"
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
  - "std::basic_istringstream"
  - "sstream/std::basic_istringstream"
  - "basic_istringstream"
  - "std.basic_istringstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_istringstream (classe)"
ms.assetid: 1d5bb4b5-793d-4833-98e5-14676c451915
caps.latest.revision: 19
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_istringstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<**Elem**, **Tr**, `Alloc`\>.  
  
## Sintassi  
  
```  
  
        template <  
   class Elem,   
   class Tr = char_traits<Elem>,   
   class Alloc = allocator<Elem>   
>  
   class basic_istringstream : public basic_istream<Elem, Tr>  
```  
  
#### Parametri  
 `Alloc`  
 Classe Allocator.  
  
 `Elem`  
 Tipo di elemento di base della stringa.  
  
 *Tr*  
 Tratti di carattere specializzati sull'elemento di base della stringa.  
  
## Note  
 La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<**Elem**, **Tr**, `Alloc`\>, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore della classe `Alloc`.  L'oggetto archivia un oggetto della classe basic\_stringbuf\<**Elem**, **Tr**, `Alloc`\>.  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_istringstream](../Topic/basic_istringstream::basic_istringstream.md)|Costruisce un oggetto di tipo `basic_istringstream`.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/basic_istringstream::allocator_type.md)|Il tipo è un sinonimo del parametro di modello `Alloc`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[rdbuf](../Topic/basic_istringstream::rdbuf.md)|Restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` a [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<`Elem`, `Tr`, `Alloc`\>.|  
|[str](../Topic/basic_istringstream::str.md)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|  
|[swap](../Topic/basic_istringstream::swap.md)|Scambia i valori in questo oggetto `basic_istringstream` con quelli dell'oggetto fornito.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/basic_istringstream::operator=.md)|Assegna i valori a questo oggetto `basic_istringstream` dal parametro dell'oggetto.|  
  
## Requisiti  
 **Intestazione:** \<sstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)