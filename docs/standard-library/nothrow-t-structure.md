---
title: "Struttura nothrow_t | Microsoft Docs"
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
  - "nothrow_t"
  - "std.nothrow_t"
  - "std::nothrow_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nothrow_t (classe)"
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struttura nothrow_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La struttura viene utilizzato come parametro di funzione operator new per indicare che la funzione deve restituire un puntatore null per segnalare un errore di allocazione, invece di un'eccezione.  
  
## Sintassi  
  
```  
struct std::nothrow_t {};  
```  
  
## Note  
 La struttura consente al compilatore di selezionare la versione corretta del costruttore.  [nothrow](../Topic/nothrow%20\(%3Cnew%3E\).md) è sinonimo di oggetti di tipo `std::nothrow_t`.  
  
## Esempio  
 Vedere [operatore new](../Topic/operator%20new%20\(%3Cnew%3E\).md) e [operatori new &#91;&#93;](../Topic/operator%20new\(%3Cnew%3E\).md) per esempi di come `std::nothrow_t` viene utilizzato come parametro di funzione.  
  
## Requisiti  
 **Intestazione:** \<nuovo\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)