---
title: _CrtSetBreakAlloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 32e8fedcd70d0e901c63cd5e794773451f436326
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="crtsetbreakalloc"></a>_CrtSetBreakAlloc

Imposta un punto di interruzione su un numero di ordine di allocazione dell'oggetto (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
long _CrtSetBreakAlloc(
   long lBreakAlloc
);
```

### <a name="parameters"></a>Parametri

*lBreakAlloc*<br/>
Numero di ordine di allocazione per il quale impostare il punto di interruzione.

## <a name="return-value"></a>Valore restituito

Restituisce il precedente numero di ordine di allocazione dell'oggetto che presentava un punto di interruzione impostato.

## <a name="remarks"></a>Note

**CrtSetBreakAlloc** consente a un'applicazione eseguire il rilevamento di perdite di memoria tramite l'interruzione in un punto specifico dell'allocazione di memoria e risalendo all'origine della richiesta. La funzione usa il numero di ordine di allocazione dell'oggetto assegnato al blocco di memoria al momento dell'allocazione nell'heap. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetBreakAlloc** vengono rimosse durante la pre-elaborazione.

Il numero di ordine di allocazione dell'oggetto è archiviato nel campo *lRequest* della struttura **_CrtMemBlockHeader**, definito in Crtdbg.h. Quando vengono restituite informazioni relative a un blocco di memoria da una delle funzioni di dump di debug, questo numero viene racchiuso tra parentesi graffe, ad esempio {36}.

Per ulteriori informazioni sul **CrtSetBreakAlloc** può essere utilizzato con altre funzioni di gestione della memoria, vedere [rilevamento delle richieste di allocazione Heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtSetBreakAlloc**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
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

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
