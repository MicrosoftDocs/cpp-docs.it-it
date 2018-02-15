---
title: _CrtIsValidHeapPointer | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _CrtIsValidHeapPointer
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
apitype: DLLExport
f1_keywords:
- CrtlsValidHeapPointer
- _CrtIsValidHeapPointer
dev_langs:
- C++
helpviewer_keywords:
- _CrtIsValidHeapPointer function
- CrtIsValidHeapPointer function
ms.assetid: caf597ce-1b05-4764-9f37-0197a982bec5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4f888466e0b1625f93c4e1cf66fab0bb85678094
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="crtisvalidheappointer"></a>_CrtIsValidHeapPointer
Verifica che un puntatore specificato sia nell'heap allocato da alcune librerie di runtime del linguaggio C , ma non necessariamente dalla libreria CRT del chiamante. Nelle versioni di CRT precedenti a Visual Studio 2010, verifica che il puntatore specificato sia nell'heap locale (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _CrtIsValidHeapPointer(   
   const void *userData   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `userData`  
 Puntatore all'inizio di un blocco di memoria allocata.  
  
## <a name="return-value"></a>Valore restituito  
 `_CrtIsValidHeapPointer` restituisce TRUE se il puntatore è nell'heap locale condiviso da tutte le istanze della libreria CRT. Nelle versioni di CRT precedenti a Visual Studio 2010, restituisce TRUE se il puntatore specificato è nell'heap locale. In caso contrario, la funzione restituisce FALSE.  
  
## <a name="remarks"></a>Note  
 Non è consigliabile usare questa funzione. A partire dalla libreria CRT di Visual Studio 2010, tutte le librerie CRT condividono un heap del sistema operativo, ovvero l'*heap del processo*. La funzione `_CrtIsValidHeapPointer` indica se un puntatore sia allocato in un heap CRT, ma non che il puntatore era allocato dalla libreria CRT del chiamante. Ad esempio, si prenda in considerazione un blocco allocato usando la versione di Visual Studio 2010 della libreria CRT. Se la funzione `_CrtIsValidHeapPointer` esportata dalla versione di Visual Studio 2012 della libreria CRT verifica il puntatore, restituisce TRUE. Non è più una verifica utile. Nelle versioni della libreria CRT precedenti a Visual Studio 2010, la funzione viene usata per assicurare che un indirizzo di memoria specifico sia presente nell'heap locale. L'heap locale fa riferimento all'heap creato e gestito tramite una determinata istanza della libreria di runtime del linguaggio C.  Se una libreria a collegamento dinamico (DLL) contiene un collegamento statico alla libreria di runtime, dispone della propria istanza dell'heap di runtime e di conseguenza il proprio heap, indipendentemente dall'heap locale dell'applicazione. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtIsValidHeapPointer` vengono rimosse durante la pre-elaborazione.  
  
 Dato che la funzione restituisce TRUE o FALSE, può essere passata a una delle macro [_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. Nel seguente esempio si verifica un errore di asserzione se l'indirizzo specificato non si trova all'interno dell'heap locale.  
  
```  
_ASSERTE( _CrtIsValidHeapPointer( userData ) );  
```  
  
 Per informazioni su come usare `_CrtIsValidHeapPointer` con altre funzioni di debug e macro, vedere [Macros for Reporting](/visualstudio/debugger/macros-for-reporting) (Macro per la creazione di report). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtIsValidHeapPointer`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come verificare se la memoria è valida quando viene usata con le librerie di runtime del linguaggio C precedenti a Visual Studio 2010. Questo esempio viene fornito per gli utenti di codice della libreria CRT legacy.  
  
```  
// crt_isvalid.c  
/*  
 * This program allocates a block of memory using _malloc_dbg  
 * and then tests the validity of this memory by calling   
 * _CrtIsMemoryBlock,_CrtIsValidPointer, and _CrtIsValidHeapPointer.  
 */  
  
#include <stdio.h>  
#include <string.h>  
#include <malloc.h>  
#include <crtdbg.h>  
  
#define  TRUE   1  
#define  FALSE  0  
  
int main( void )  
{  
        char *my_pointer;  
  
        /*   
         * Call _malloc_dbg to include the filename and line number  
         * of our allocation request in the header information  
         */  
        my_pointer = (char *)_malloc_dbg( sizeof(char) * 10,   
        _NORMAL_BLOCK, __FILE__, __LINE__ );  
  
        // Ensure that the memory got allocated correctly  
        _CrtIsMemoryBlock((const void *)my_pointer, sizeof(char) * 10,   
        NULL, NULL, NULL );  
  
         // Test for read/write accessibility  
        if (_CrtIsValidPointer((const void *)my_pointer,   
        sizeof(char) * 10, TRUE))  
                printf("my_pointer has read and write accessibility.\n");  
        else  
                printf("my_pointer only has read access.\n");  
  
        // Make sure my_pointer is within the local heap  
        if (_CrtIsValidHeapPointer((const void *)my_pointer))  
                printf("my_pointer is within the local heap.\n");  
        else  
                printf("my_pointer is not located within the local"  
                       " heap.\n");  
  
        free(my_pointer);  
}  
```  
  
## <a name="output"></a>Output  
  
```  
my_pointer has read and write accessibility.  
my_pointer is within the local heap.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)