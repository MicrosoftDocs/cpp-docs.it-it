---
title: "Classe basic_ostringstream | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "basic_ostringstream"
  - "std.basic_ostringstream"
  - "sstream/std::basic_ostringstream"
  - "std::basic_ostringstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ostringstream (classe)"
ms.assetid: aea699f7-350f-432a-acca-adbae7b483fb
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe basic_ostringstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<**Elem**, **Tr**, `Alloc`\>.  
  
## Sintassi  
  
```  
  
        template <  
   class Elem,   
   class Tr = char_traits<Elem>,   
   class Alloc = allocator<Elem>   
>  
   class basic_ostringstream : public basic_ostream<Elem, Tr>  
```  
  
#### Parametri  
 `Alloc`  
 Classe Allocator.  
  
 `Elem`  
 Tipo di elemento di base della stringa.  
  
 *Tr*  
 Tratti di carattere specializzati sull'elemento di base della stringa.  
  
## Note  
 La classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore di classe `Alloc`.  L'oggetto archivia un oggetto della classe basic\_stringbuf\<**Elem**, **Tr**, `Alloc`\>.  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_ostringstream](../Topic/basic_ostringstream::basic_ostringstream.md)|Costruisce un oggetto di tipo `basic_ostringstream`.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/basic_ostringstream::allocator_type.md)|Il tipo è un sinonimo del parametro di modello `Alloc`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[rdbuf](../Topic/basic_ostringstream::rdbuf.md)|Restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` a [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<`Elem`, `Tr`, `Alloc`\>.|  
|[str](../Topic/basic_ostringstream::str.md)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|  
  
## Requisiti  
 **Intestazione:** \<sstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)