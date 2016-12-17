---
title: "Struttura atomic_flag | Microsoft Docs"
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
  - "atomic/std::atomic_flag"
dev_langs: 
  - "C++"
ms.assetid: 17f0c2f5-fd39-4a44-873a-b569720a670e
caps.latest.revision: 14
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struttura atomic_flag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto un oggetto che imposta e rimuove atomicamente un flag `bool`.  Le operazioni sui flag atomici sono sempre senza blocco.  
  
## Sintassi  
  
```  
struct atomic_flag;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo atomic\_flag::clear](../Topic/atomic_flag::clear%20Method.md)|Imposta il flag archiviato su `false`.|  
|[Metodo atomic\_flag::test\_and\_set](../Topic/atomic_flag::test_and_set%20Method.md)|Imposta il flag archiviato su `true` e restituisce il valore del contrassegno iniziale.|  
  
## Note  
 Gli oggetti`atomic_flag` possono essere passati alle funzioni non membro [atomic\_flag\_clear](../Topic/atomic_flag_clear%20Function.md), [atomic\_flag\_clear\_explicit](../Topic/atomic_flag_clear_explicit%20Function.md), [atomic\_flag\_test\_and\_set](../Topic/atomic_flag_test_and_set%20Function.md) e [atomic\_flag\_test\_and\_set\_explicit](../Topic/atomic_flag_test_and_set_explicit%20Function.md).  Possono essere inizializzati utilizzando il valore `ATOMIC_FLAG_INIT`.  
  
## Requisiti  
 **Intestazione:** atomico  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<atomic\>](../standard-library/atomic.md)