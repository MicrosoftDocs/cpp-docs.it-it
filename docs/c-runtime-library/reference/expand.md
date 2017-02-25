---
title: "_expand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_expand"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_bexpand"
  - "fexpand"
  - "expand"
  - "nexpand"
  - "_fexpand"
  - "_nexpand"
  - "bexpand"
  - "_expand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_expand (funzione)"
  - "expand (funzione)"
  - "blocchi di memoria, modifica delle dimensioni"
ms.assetid: 4ac55410-39c8-45c7-bccd-3f1042ae2ed3
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# _expand
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica la dimensione di un blocco di memoria.  
  
## Sintassi  
  
```  
void *_expand(   
   void *memblock,  
   size_t size   
);  
```  
  
#### Parametri  
 `memblock`  
 Puntatore al blocco di memoria allocato precedentemente.  
  
 `size`  
 Nuova dimensione in byte.  
  
## Valore restituito  
 `_expand` restituisce un puntatore void al blocco di memoria riallocato.  `_expand`, a differenza di `realloc`, non può spostare un blocco per modificare le sue dimensioni.  Pertanto, se vi è memoria sufficiente ad espandere il blocco senza spostarlo, il parametro `memblock` a `_expand` è uguale al valore restituito.  
  
 `_expand` restituisce `NULL` quando viene rilevato un errore durante l'operazione.  Ad esempio, se `_expand` viene utilizzato per ridurre un blocco di memoria, potrebbe rilevare il danneggiamento di un blocco nell'heap oppure un puntatore di blocco non valido e ritorna `NULL`.  
  
 Se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata senza spostarlo, la funzione restituisce `NULL`.  `_expand` non restituisce mai un blocco espanso ad una dimensione minore di quella richiesta.  Se si verifica un errore, `errno` indica la natura dell'errore.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 I valore restituito punta ad uno spazio di memoria che garantisce l'allineamento adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Per controllare la nuova dimensione dell'elemento, utilizzare `_msize`.  Per ottenere un puntatore a un tipo diverso da `void`, utilizzare un cast di tipo sul valore restituito.  
  
## Note  
 La funzione `_expand` cambia la dimensione ad un blocco di memoria precedentemente allocato tentando di espandere o contrarre il blocco senza spostarne la posizione nell'heap.  Il parametro `memblock` punta all'inizio del blocco .  Il parametro `size` fornisce la nuova dimensione del blocco, in byte.  Il contenuto del blocco è invariato fino alla più corta delle nuove e vecchie dimensioni.  `memblock` non deve essere un blocco che è stato liberato.  
  
> [!NOTE]
>  Sulle piattaforme a 64 bit, `_expand` potrebbe non contrarre il blocco se la nuova dimensione è inferiore alla dimensione corrente; in particolare, se il blocco è minore di 16K nella dimensione e quindi allocato nell'heap inferiore di frammentazione , `_expand` lascia invariato il blocco e restituisce `memblock`.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, `_expand` viene identificato come [\_expand\_dbg](../../c-runtime-library/reference/expand-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 Questa funzione convalida i parametri.  Se `memblock` è un puntatore a null, questa funzione richiama un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  Se `size` è maggiore di `_HEAP_MAXREQ`, `errno` è impostato su `ENOMEM` e la funzione restituisce `NULL`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_expand`|\<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_expand.c  
  
#include <stdio.h>  
#include <malloc.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   char *bufchar;  
   printf( "Allocate a 512 element buffer\n" );  
   if( (bufchar = (char *)calloc( 512, sizeof( char ) )) == NULL )  
      exit( 1 );  
   printf( "Allocated %d bytes at %Fp\n",   
         _msize( bufchar ), (void *)bufchar );  
   if( (bufchar = (char *)_expand( bufchar, 1024 )) == NULL )  
      printf( "Can't expand" );  
   else  
      printf( "Expanded block to %d bytes at %Fp\n",   
            _msize( bufchar ), (void *)bufchar );  
   // Free memory   
   free( bufchar );  
   exit( 0 );  
}  
```  
  
  **Allocate a 512 element buffer**  
**Allocated 512 bytes at 002C12BC**  
**Expanded block to 1024 bytes at 002C12BC**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [\_msize](../../c-runtime-library/reference/msize.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)