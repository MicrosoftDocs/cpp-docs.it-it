---
title: "Classe strstream | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::strstream"
  - "strstream"
  - "std.strstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strstream (classe)"
ms.assetid: 63f3be31-9e36-42b1-9715-a474a5997e2a
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe strstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).  
  
## Sintassi  
  
```  
  
class strstream : public iostream  
  
```  
  
## Note  
 L'oggetto archivia un oggetto della classe `strstreambuf`.  
  
> [!NOTE]
>  Questa classe è deprecata.  Provare a usare [stringstream](../Topic/stringstream.md) o [wstringstream](../Topic/wstringstream.md).  
  
### Costruttori  
  
|||  
|-|-|  
|[strstream](../Topic/strstream::strstream.md)|Costruisce un oggetto di tipo `strstream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[freeze](../Topic/strstream::freeze.md)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|  
|[pcount](../Topic/strstream::pcount.md)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|  
|[rdbuf](../Topic/strstream::rdbuf.md)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|  
|[str](../Topic/strstream::str.md)|Chiamate [freeze](../Topic/strstreambuf::freeze.md), e quindi restituisce un puntatore all'inizio della sequenza controllata.|  
  
## Requisiti  
 **Intestazione:** \<strstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [iostream](../Topic/iostream.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)