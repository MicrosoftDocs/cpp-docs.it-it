---
title: "Classe ostrstream | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.oststream"
  - "oststream"
  - "std::oststream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ostrstream (classe)"
ms.assetid: e2e34679-b266-4728-a8e1-8eda5d400e46
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe ostrstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).  
  
## Sintassi  
  
```  
  
class ostrstream : public ostream  
  
```  
  
## Note  
 L'oggetto archivia un oggetto della classe `strstreambuf`.  
  
> [!NOTE]
>  Questa classe è deprecata.  Provare a usare [ostringstream](../Topic/ostringstream.md) o [wostringstream](../Topic/wostringstream.md).  
  
### Costruttori  
  
|||  
|-|-|  
|[ostrstream](../Topic/ostrstream::ostrstream.md)|Costruisce un oggetto di tipo `ostrstream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[freeze](../Topic/ostrstream::freeze.md)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|  
|[pcount](../Topic/ostrstream::pcount.md)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|  
|[rdbuf](../Topic/ostrstream::rdbuf.md)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|  
|[str](../Topic/ostrstream::str.md)|Chiamate [freeze](../Topic/strstreambuf::freeze.md), e quindi restituisce un puntatore all'inizio della sequenza controllata.|  
  
## Requisiti  
 **Intestazione:** \<strstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [ostream](../Topic/ostream.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)