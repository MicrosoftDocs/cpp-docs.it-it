---
title: _expand | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _expand
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
- _bexpand
- fexpand
- expand
- nexpand
- _fexpand
- _nexpand
- bexpand
- _expand
dev_langs:
- C++
helpviewer_keywords:
- memory blocks, changing size
- _expand function
- expand function
ms.assetid: 4ac55410-39c8-45c7-bccd-3f1042ae2ed3
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: b82bcf0de4f17a718389ef358a11a88e9bd999c1
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="expand"></a>_expand
Modifica la dimensione di un blocco di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_expand(   
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
 `_expand` restituisce un puntatore a void al blocco di memoria riallocato. `_expand`, a differenza di `realloc`, non può spostare un blocco per modificarne le dimensioni. Pertanto, se vi è memoria sufficiente per espandere il blocco senza spostarlo, il parametro `memblock` in `_expand` è identico al valore restituito.  
  
 `_expand` restituisce `NULL` quando viene rilevato un errore durante l'operazione. Ad esempio, se `_expand` viene usato per la compattazione di un blocco di memoria, potrebbe rilevare il danneggiamento dell'heap di piccoli blocchi o un puntatore di blocco non valido e restituire `NULL`.  
  
 Se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata senza spostarlo, la funzione restituisce `NULL`. `_expand` non restituisce mai un blocco espanso a dimensioni minori di quelle richieste. Se si verifica un errore, `errno` indica la natura dell'errore. Per altre informazioni su `errno`, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per verificare le nuove dimensioni dell'elemento, usare `_msize`. Per ottenere un puntatore a un tipo diverso da `void`, usare un cast del tipo sul valore restituito.  
  
## <a name="remarks"></a>Note  
 La funzione `_expand` modifica le dimensioni di un blocco di memoria allocato in precedenza cercando di espandere o comprimere il blocco senza spostarne la posizione nell'heap. Il parametro `memblock` punta all'inizio del blocco. Il parametro `size` specifica le nuove dimensioni del blocco, in byte. Il contenuto del blocco rimane invariato fino alla dimensione nuova o alla precedente, a seconda di quale delle due è la più breve. `memblock` non deve essere un blocco liberato.  
  
> [!NOTE]
>  Su piattaforme a 64 bit, `_expand` potrebbe non contrarre il blocco se la nuova dimensione è minore rispetto alla dimensione corrente. In particolare se il blocco è inferiore a 16 KB e quindi allocato nell'heap a bassa frammentazione, `_expand` lascia il blocco invariato e restituisce `memblock`.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime di C, `_expand` viene risolto in [_realloc_dbg](../../c-runtime-library/reference/expand-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).  
  
 Questa funzione convalida i relativi parametri. Se `memblock` è un puntatore Null, questa funzione richiama il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`. Se `size` è maggiore di `_HEAP_MAXREQ`, `errno` è impostato su `ENOMEM` e la funzione restituisce `NULL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_expand`|\<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
Allocate a 512 element buffer  
Allocated 512 bytes at 002C12BC  
Expanded block to 1024 bytes at 002C12BC  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [_msize](../../c-runtime-library/reference/msize.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)
