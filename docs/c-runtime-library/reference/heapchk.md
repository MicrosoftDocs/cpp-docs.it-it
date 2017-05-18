---
title: _heapchk | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _heapchk
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
- _heapchk
- heapchk
dev_langs:
- C++
helpviewer_keywords:
- debugging [CRT], heap-related problems
- consistency checking of heaps
- heapchk function
- heaps, checking consistency
- _heapchk function
ms.assetid: 859619a5-1e35-4f02-9e09-11d9fa266ec0
caps.latest.revision: 13
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
ms.openlocfilehash: 0b10e9ee3f80de6795d401faef68c82511b4ff44
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="heapchk"></a>_heapchk
Esegue verifiche della coerenza sull'heap.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _heapchk( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 `_heapchk` restituisce una delle costanti manifeste di tipo Integer seguenti definite in Malloc.h.  
  
 `_HEAPBADBEGIN`  
 Le informazioni di intestazione iniziali non sono valide o non è possibile trovarle.  
  
 `_HEAPBADNODE`  
 È stato trovato un nodo non valido o l'heap è danneggiato.  
  
 `_HEAPBADPTR`  
 Il puntatore nell'heap non è valido.  
  
 `_HEAPEMPTY`  
 L'heap non è stato inizializzato.  
  
 `_HEAPOK`  
 L'heap risulta coerente.  
  
 Inoltre, se si verifica un errore, `_heapchk` imposta `errno` su `ENOSYS`.  
  
## <a name="remarks"></a>Note  
 La funzione `_heapchk` è utile per eseguire il debug di problemi relativi all'heap tramite il controllo della coerenza minima dell'heap. Se il sistema operativo non supporta `_heapchk` (ad esempio, Windows 98), la funzione restituisce `_HEAPOK` e imposta `errno` su `ENOSYS`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_heapchk`|\<malloc.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_heapchk.c  
// This program checks the heap for  
// consistency and prints an appropriate message.  
  
#include <malloc.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int  heapstatus;  
   char *buffer;  
  
   // Allocate and deallocate some memory  
   if( (buffer = (char *)malloc( 100 )) != NULL )  
      free( buffer );  
  
   // Check heap status  
   heapstatus = _heapchk();  
   switch( heapstatus )  
   {  
   case _HEAPOK:  
      printf(" OK - heap is fine\n" );  
      break;  
   case _HEAPEMPTY:  
      printf(" OK - heap is empty\n" );  
      break;  
   case _HEAPBADBEGIN:  
      printf( "ERROR - bad start of heap\n" );  
      break;  
   case _HEAPBADNODE:  
      printf( "ERROR - bad node in heap\n" );  
      break;  
   }  
}  
```  
  
```Output  
OK - heap is fine  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [_heapadd](../../c-runtime-library/heapadd.md)   
 [_heapmin](../../c-runtime-library/reference/heapmin.md)   
 [_heapset](../../c-runtime-library/heapset.md)   
 [_heapwalk](../../c-runtime-library/reference/heapwalk.md)
