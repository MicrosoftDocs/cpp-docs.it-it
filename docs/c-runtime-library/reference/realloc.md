---
title: realloc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: realloc
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _brealloc
- _nrealloc
- realloc
- _frealloc
dev_langs: C++
helpviewer_keywords:
- _brealloc function
- realloc function
- nrealloc function
- frealloc function
- _nrealloc function
- memory blocks, reallocating
- memory, reallocating
- _frealloc function
- reallocate memory blocks
ms.assetid: 2b2239de-810b-4b11-9438-32ab0a244185
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 525b0f0877471b5bfd6d9fa16551b21908f229a6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="realloc"></a>realloc
Riallocare blocchi di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *realloc(  
   void *memblock,  
   size_t size   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `memblock`  
 Puntatore al blocco di memoria allocato in precedenza.  
  
 `size`  
 Nuova dimensione in byte.  
  
## <a name="return-value"></a>Valore restituito  
 `realloc` restituisce un puntatore `void` al blocco di memoria riallocato (e possibilmente spostato).  
  
 Se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata, il blocco originale rimane invariato e viene restituito `NULL`.  
  
 Se `size` è zero, il blocco puntato da `memblock` viene liberato; il valore restituito è `NULL` e `memblock` punta a un blocco liberato.  
  
 Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da `void`, usare un cast del tipo sul valore restituito.  
  
## <a name="remarks"></a>Note  
 La funzione `realloc` modifica la dimensione di un blocco di memoria allocato. L'argomento `memblock` punta all'inizio del blocco di memoria. Se `memblock` è `NULL`, `realloc` si comporta allo stesso modo di `malloc` e alloca un nuovo blocco di `size` byte. Se `memblock` non è `NULL`, deve essere un puntatore restituito da una precedente chiamata a `calloc`, `malloc` o `realloc`.  
  
 L'argomento `size` fornisce la nuova dimensione del blocco, in byte. Il contenuto del blocco rimane invariato fino alla più breve dimensione, tra la nuova e la precedente, anche se il nuovo blocco può trovarsi in una posizione diversa. Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, non è garantito che il puntatore restituito da `realloc` sia il puntatore passato tramite l'argomento `memblock`. `realloc` non azzera la nuova memoria allocata in caso di crescita del buffer.  
  
 `realloc` imposta `errno` su `ENOMEM` se l'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 `realloc` chiama `malloc` per usare la funzione [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) di C++ per impostare la nuova modalità del gestore. La nuova modalità del gestore indica se, in caso di errore, `malloc` deve chiamare la routine del nuovo gestore come impostato da [set_new_handler](../../c-runtime-library/reference/set-new-handler.md). Per impostazione predefinita, `malloc` non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando `realloc` non riesce ad allocare memoria, `malloc` chiami la routine del nuovo gestore, come fa l'operatore `new` quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma o collegarsi a NEWMODE.OBJ (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, `realloc` viene risolto in [_realloc_dbg](../../c-runtime-library/reference/realloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).  
  
 `realloc` è contrassegnato come `__declspec(noalias)` e `__declspec(restrict)` e questo garantisce che la funzione non modifichi le variabili globali e il puntatore restituito non venga associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`realloc`|\<stdlib.h> e \<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_realloc.c  
// This program allocates a block of memory for  
// buffer and then uses _msize to display the size of that  
// block. Next, it uses realloc to expand the amount of  
// memory used by buffer and then calls _msize again to  
// display the new amount of memory allocated to buffer.  
  
#include <stdio.h>  
#include <malloc.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   long *buffer, *oldbuffer;  
   size_t size;  
  
   if( (buffer = (long *)malloc( 1000 * sizeof( long ) )) == NULL )  
      exit( 1 );  
  
   size = _msize( buffer );  
   printf_s( "Size of block after malloc of 1000 longs: %u\n", size );  
  
   // Reallocate and show new size:  
   oldbuffer = buffer;     // save pointer in case realloc fails  
   if( (buffer = realloc( buffer, size + (1000 * sizeof( long )) ))   
        ==  NULL )  
   {  
      free( oldbuffer );  // free original block  
      exit( 1 );  
   }  
   size = _msize( buffer );  
   printf_s( "Size of block after realloc of 1000 more longs: %u\n",   
            size );  
  
   free( buffer );  
   exit( 0 );  
}  
```  
  
```Output  
Size of block after malloc of 1000 longs: 4000  
Size of block after realloc of 1000 more longs: 8000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)