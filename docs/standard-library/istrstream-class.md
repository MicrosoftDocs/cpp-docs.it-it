---
title: "Classe istrstream | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "istrstream"
  - "std::istrstream"
  - "std.istrstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istrstream (classe)"
ms.assetid: c2d41c75-bd2c-4437-bd77-5939ce1b97af
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe istrstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).  
  
## Sintassi  
  
```  
  
class istrstream : public istream  
  
```  
  
## Note  
 L'oggetto archivia un oggetto della classe `strstreambuf`.  
  
> [!NOTE]
>  Questa classe è deprecata. Si consiglia di utilizzare [istringstream](../Topic/istringstream.md) o [wistringstream](../Topic/wistringstream.md) invece.  
  
### Costruttori  
  
|||  
|-|-|  
|[istrstream](../Topic/istrstream::istrstream.md)|Costruisce un oggetto di tipo `istrstream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[rdbuf](../Topic/istrstream::rdbuf.md)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|  
|[str](../Topic/istrstream::str.md)|Chiamate [freeze](../Topic/strstreambuf::freeze.md), e quindi restituisce un puntatore all'inizio della sequenza controllata.|  
  
## Requisiti  
 **Intestazione:** \<strstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [istream](../Topic/istream.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)