---
title: "Allineamento dati | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "data.alignment"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "allineamento di dati [C++]"
ms.assetid: 35ac3d2d-a4b3-421b-954f-b7372b1f18e1
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Allineamento dati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le seguenti funzioni runtime di C supportano l'allineamento di dati.  
  
### Routine di allineamento dati  
  
|Routine|Utilizzo|Equivalente .NET Framework|  
|-------------|--------------|--------------------------------|  
|[\_aligned\_free](../c-runtime-library/reference/aligned-free.md)|Libera un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md)o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_free\_dbg](../c-runtime-library/reference/aligned-free-dbg.md)|Libera un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) \(solo debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md)|Alloca memoria su un limite di allineamento specificato.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_malloc\_dbg](../c-runtime-library/reference/aligned-malloc-dbg.md)|Alloca memoria su un limite di allineamento specificato con spazio aggiuntivo per un'intestazione di debug e sovrascrive i buffer \(solo nella versione di debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_msize](../c-runtime-library/reference/aligned-msize.md)|Restituisce la dimensione di un blocco di memoria allocato nell'heap.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_msize\_dbg](../c-runtime-library/reference/aligned-msize-dbg.md)|Restituisce le dimensioni di un blocco di memoria allocato nell'heap \(solo per versione di debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md)|Alloca memoria su un limite di allineamento specificato.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_offset\_malloc\_dbg](../c-runtime-library/reference/aligned-offset-malloc-dbg.md)|Alloca memoria sul limite di allineamento specificato \(solo per versione di debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_offset\_realloc](../c-runtime-library/reference/aligned-offset-realloc.md)|Modifica le dimensioni di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_offset\_realloc\_dbg](../c-runtime-library/reference/aligned-offset-realloc-dbg.md)|Modifica le dimensioni di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) \(versione per il solo debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_offset\_recalloc](../c-runtime-library/reference/aligned-offset-recalloc.md)|Modifica la dimensione di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria a 0.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_offset\_recalloc\_dbg](../c-runtime-library/reference/aligned-offset-recalloc-dbg.md)|Modifica la dimensione di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria a 0 \(solamente versione di debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_realloc](../c-runtime-library/reference/aligned-realloc.md)|Modifica le dimensioni di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_realloc\_dbg](../c-runtime-library/reference/aligned-realloc-dbg.md)|Modifica le dimensioni di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) \(versione per il solo debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_recalloc](../c-runtime-library/reference/aligned-recalloc.md)|Modifica la dimensione di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria a 0.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_aligned\_recalloc\_dbg](../c-runtime-library/reference/aligned-recalloc-dbg.md)|Modifica la dimensione di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria a 0 \(solamente versione di debug\).|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)