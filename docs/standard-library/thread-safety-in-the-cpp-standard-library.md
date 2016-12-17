---
title: "Sicurezza dei thread nella libreria standard C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "libreria C++ standard, thread-safe"
  - "thread-safe"
  - "thread-safe, Libreria di modelli standard"
ms.assetid: 9351c8fb-4539-4728-b0e9-226e2ac4284b
caps.latest.revision: 21
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Sicurezza dei thread nella libreria standard C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le regole di sicurezza dei thread seguenti sono applicabili a tutte le classi nella Libreria C\+\+ standard, inclusa `shared_ptr`, come illustrato di seguito.  Sono a volte disponibili maggiori garanzie, ad esempio, gli oggetti iostream standard, come illustrato di seguito, e tipi destinati in modo specifico al multithreading, come quelli disponibili in [\<atomic\>](../standard-library/atomic.md).  
  
 Un oggetto è is thread\-safe per la lettura da più thread.  Ad esempio, dato un oggetto A, è possibile leggere in modo sicuro A contemporaneamente dal thread 1 e dal thread 2.  
  
 Se un thread scrive in un oggetto, tutte le operazioni di lettura e scrittura in quell'oggetto nello stesso thread o in altri thread dovranno essere protette.  Ad esempio, dato un oggetto A, se il thread 1 scrive in A, sarà necessario impedire al thread 2 di leggere o scrivere in A.  
  
 È possibile leggere e scrivere in modo sicuro nell'istanza di un tipo anche se un altro thread sta leggendo o scrivendo in un'istanza diversa dello stesso tipo.  Ad esempio, dati gli oggetti A e B dello stesso tipo, le operazioni di scrittura in A nel thread 1 e le operazioni di lettura di B nel thread 2 saranno sicure.  
  
## shared\_ptr  
 Più thread possono leggere e scrivere contemporaneamente in diversi oggetti [shared\_ptr](../standard-library/shared-ptr-class.md), anche se gli oggetti sono copie che condividono la proprietà.  
  
## iostream  
 Gli oggetti iostream standard `cin`, `cout`, `cerr`, `clog`, `wcin`, `wcout`, `wcerr` e `wclog` seguono le stesse regole specificate per le altre classi, con l'eccezione seguente: è possibile scrivere in modo sicuro in un oggetto da più thread.  Ad esempio, il thread 1 può scrivere in [cout](../Topic/cout.md) contemporaneamente al thread 2.  Ciò può tuttavia provocare una mescolanza nell'output dei due thread.  
  
> [!NOTE]
>  La lettura da un buffer del flusso non è considerata un'operazione di lettura,  ma un'operazione di scrittura, poiché lo stato della classe viene modificato.  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)