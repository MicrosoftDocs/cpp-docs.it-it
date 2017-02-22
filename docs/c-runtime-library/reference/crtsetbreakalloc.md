---
title: "_CrtSetBreakAlloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetBreakAlloc"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CrtSetBreakAlloc"
  - "_CrtSetBreakAlloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtSetBreakAlloc (funzione)"
  - "CrtSetBreakAlloc (funzione)"
ms.assetid: 33bfc6af-a9ea-405b-a29f-1c2d4d9880a1
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _CrtSetBreakAlloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta un punto di interruzione su un numero di ordine di allocazione dell'oggetto \(solo versione di debug\).  
  
## Sintassi  
  
```  
  
long _CrtSetBreakAlloc(     long lBreakAlloc  );  
```  
  
#### Parametri  
 *lBreakAlloc*  
 Numero di ordine di allocazione per il quale impostare il punto di interruzione.  
  
## Valore restituito  
 Restituisce il precedente numero di ordine di allocazione dell'oggetto che presentava un punto di interruzione impostato.  
  
## Note  
 `_CrtSetBreakAlloc` consente a un'applicazione di eseguire il rilevamento della perdita di memoria eseguendo l'interruzione in un punto specifico dell'allocazione di memoria e risalendo all'origine della richiesta.  La funzione usa il numero di ordine di allocazione dell'oggetto assegnato al blocco di memoria al momento dell'allocazione nell'heap.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetBreakAlloc` vengono rimosse durante la pre\-elaborazione.  
  
 Il numero di ordine di allocazione dell'oggetto è archiviato nel campo *lRequest* della struttura **\_CrtMemBlockHeader**, definito in Crtdbg.h.  Quando le informazioni relative a un blocco di memoria vengono restituite da una delle funzioni di dump del debug, tale numero viene racchiuso tra parentesi graffe, ad esempio {36}.  
  
 Per altre informazioni su come usare `_CrtSetBreakAlloc` con altre funzioni di gestione della memoria, vedere [Rilevare le richieste di allocazione dell'heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Track_Heap_Allocation_Requests).  Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtSetBreakAlloc`|\<crtdbg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_setbrkal.c  
// compile with: -D_DEBUG /MTd -Od -Zi -W3 /c /link -verbose:lib -debug  
  
/*  
 * In this program, a call is made to the _CrtSetBreakAlloc routine  
 * to verify that the debugger halts program execution when it reaches  
 * a specified allocation number.  
 */  
  
#include <malloc.h>  
#include <crtdbg.h>  
  
int main( )  
{  
        long allocReqNum;  
        char *my_pointer;  
  
        /*   
         * Allocate "my_pointer" for the first  
         * time and ensure that it gets allocated correctly  
         */  
        my_pointer = malloc(10);  
        _CrtIsMemoryBlock(my_pointer, 10, &allocReqNum, NULL, NULL);  
  
        /*   
         * Set a breakpoint on the allocation request  
         * number for "my_pointer"  
         */  
        _CrtSetBreakAlloc(allocReqNum+2);  
  
        /*   
         * Alternate freeing and reallocating "my_pointer"  
         * to verify that the debugger halts program execution  
         * when it reaches the allocation request  
         */  
        free(my_pointer);  
        my_pointer = malloc(10);  
        free(my_pointer);  
        my_pointer = malloc(10);  
        free(my_pointer);  
}  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)