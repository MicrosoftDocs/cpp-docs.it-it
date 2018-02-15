---
title: _CrtSetBreakAlloc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _CrtSetBreakAlloc
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
- CrtSetBreakAlloc
- _CrtSetBreakAlloc
dev_langs:
- C++
helpviewer_keywords:
- CrtSetBreakAlloc function
- _CrtSetBreakAlloc function
ms.assetid: 33bfc6af-a9ea-405b-a29f-1c2d4d9880a1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ed018b75c9feb7b06cf572d9e60d0a92248b6e47
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="crtsetbreakalloc"></a>_CrtSetBreakAlloc
Imposta un punto di interruzione su un numero di ordine di allocazione dell'oggetto (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      long _CrtSetBreakAlloc(   
   long lBreakAlloc   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *lBreakAlloc*  
 Numero di ordine di allocazione per il quale impostare il punto di interruzione.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il precedente numero di ordine di allocazione dell'oggetto che presentava un punto di interruzione impostato.  
  
## <a name="remarks"></a>Note  
 `_CrtSetBreakAlloc` consente a un'applicazione di eseguire il rilevamento della perdita di memoria eseguendo l'interruzione in un punto specifico dell'allocazione di memoria e risalendo all'origine della richiesta. La funzione usa il numero di ordine di allocazione dell'oggetto assegnato al blocco di memoria al momento dell'allocazione nell'heap. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetBreakAlloc` vengono rimosse durante la pre-elaborazione.  
  
 Il numero di ordine di allocazione dell'oggetto è archiviato nel campo *lRequest* della struttura**_CrtMemBlockHeader**, definito in Crtdbg.h. Quando le informazioni relative a un blocco di memoria vengono restituite da una delle funzioni di dump del debug, tale numero viene racchiuso tra parentesi graffe, ad esempio {36}.  
  
 Per informazioni su come usare `_CrtSetBreakAlloc` con altre funzioni di gestione della memoria, vedere [Tracking Heap Allocation Requests](/visualstudio/debugger/crt-debug-heap-details) (Rilevamento di richieste di allocazione di heap). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtSetBreakAlloc`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)