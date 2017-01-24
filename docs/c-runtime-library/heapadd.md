---
title: "_heapadd | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_heapadd"
apilocation: 
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "heapadd"
  - "_heapadd"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_heapadd (funzione)"
  - "heapadd (funzione)"
  - "host in interfacce [hosting interfaces], aggiunta di memoria"
  - "memoria, aggiunta agli heap"
ms.assetid: 4d691fe2-2763-49f4-afb1-62738b7cd3ff
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _heapadd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge memoria all'heap.  
  
> [!IMPORTANT]
>  Questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.  
  
## Sintassi  
  
```  
int _heapadd(   
   void *memblock,  
   size_t size   
);  
```  
  
#### Parametri  
 `memblock`  
 Puntatore alla memoria heap.  
  
 `size`  
 Dimensione della memoria da aggiungere, in byte.  
  
## Valore restituito  
 Se l'operazione riesce, `_heapadd` restituisce 0; in caso contrario, la funzione restituisce \-1 e imposta `errno` su `ENOSYS`.  
  
 Per altre informazioni su questi e su altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 A partire da Visual C\+\+ versione 4.0, la struttura sottostante dell'heap è stata spostata nelle librerie di runtime C per supportare le nuove funzionalità di debug. Pertanto, `_heapadd` non è più supportato su qualsiasi piattaforma basata sull'API Win32.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_heapadd`|\<malloc.h\>|\<errno.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../c-runtime-library/memory-allocation.md)   
 [free](../c-runtime-library/reference/free.md)   
 [\_heapchk](../c-runtime-library/reference/heapchk.md)   
 [\_heapmin](../c-runtime-library/reference/heapmin.md)   
 [\_heapset](../c-runtime-library/heapset.md)   
 [\_heapwalk](../c-runtime-library/reference/heapwalk.md)   
 [malloc](../c-runtime-library/reference/malloc.md)   
 [realloc](../c-runtime-library/reference/realloc.md)