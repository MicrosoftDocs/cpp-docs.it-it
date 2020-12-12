---
description: 'Altre informazioni su: _CrtSetBreakAlloc'
title: _CrtSetBreakAlloc
ms.date: 11/04/2016
api_name:
- _CrtSetBreakAlloc
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- CrtSetBreakAlloc
- _CrtSetBreakAlloc
helpviewer_keywords:
- CrtSetBreakAlloc function
- _CrtSetBreakAlloc function
ms.assetid: 33bfc6af-a9ea-405b-a29f-1c2d4d9880a1
ms.openlocfilehash: 07db47aa23fe95e86b3341813137643b81f57fbc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319599"
---
# <a name="_crtsetbreakalloc"></a>_CrtSetBreakAlloc

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

## <a name="remarks"></a>Commenti

**_CrtSetBreakAlloc** consente a un'applicazione di eseguire il rilevamento delle perdite di memoria suddividendo in un punto specifico dell'allocazione di memoria e risalendo all'origine della richiesta. La funzione usa il numero di ordine di allocazione dell'oggetto assegnato al blocco di memoria al momento dell'allocazione nell'heap. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtSetBreakAlloc** vengono rimosse durante la pre-elaborazione.

Il numero di ordine di allocazione dell'oggetto è archiviato nel campo *lRequest* della struttura **_CrtMemBlockHeader**, definito in Crtdbg.h. Quando le informazioni relative a un blocco di memoria vengono restituite da una delle funzioni di dump del debug, questo numero è racchiuso tra parentesi graffe, ad esempio {36} .

Per altre informazioni su come usare **_CrtSetBreakAlloc** con altre funzioni di gestione della memoria, vedere [rilevamento delle richieste di allocazione dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtSetBreakAlloc**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
