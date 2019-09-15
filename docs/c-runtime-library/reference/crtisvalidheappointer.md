---
title: _CrtIsValidHeapPointer
ms.date: 11/04/2016
api_name:
- _CrtIsValidHeapPointer
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
- CrtlsValidHeapPointer
- _CrtIsValidHeapPointer
helpviewer_keywords:
- _CrtIsValidHeapPointer function
- CrtIsValidHeapPointer function
ms.assetid: caf597ce-1b05-4764-9f37-0197a982bec5
ms.openlocfilehash: 9a8746eb2da90ac5515d92113b977011a4647fe6
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70942390"
---
# <a name="_crtisvalidheappointer"></a>_CrtIsValidHeapPointer

Verifica che un puntatore specificato sia nell'heap allocato da alcune librerie di runtime del linguaggio C , ma non necessariamente dalla libreria CRT del chiamante. Nelle versioni di CRT precedenti a Visual Studio 2010, verifica che il puntatore specificato sia nell'heap locale (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtIsValidHeapPointer(
   const void *userData
);
```

### <a name="parameters"></a>Parametri

*userData*<br/>
Puntatore all'inizio di un blocco di memoria allocata.

## <a name="return-value"></a>Valore restituito

**_CrtIsValidHeapPointer** restituisce true se il puntatore specificato si trova nell'heap condiviso da tutte le istanze della libreria CRT. Nelle versioni di CRT precedenti a Visual Studio 2010, restituisce TRUE se il puntatore specificato è nell'heap locale. In caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Note

Non è consigliabile usare questa funzione. A partire dalla libreria CRT di Visual Studio 2010, tutte le librerie CRT condividono un heap del sistema operativo, ovvero l'*heap del processo*. La funzione **_CrtIsValidHeapPointer** segnala se il puntatore è stato allocato in un heap CRT, ma non è stato allocato dalla libreria CRT del chiamante. Ad esempio, si prenda in considerazione un blocco allocato usando la versione di Visual Studio 2010 della libreria CRT. Se la funzione **_CrtIsValidHeapPointer** esportata dalla versione di Visual Studio 2012 della libreria CRT verifica il puntatore, restituisce true. Non è più una verifica utile. Nelle versioni della libreria CRT precedenti a Visual Studio 2010, la funzione viene usata per assicurare che un indirizzo di memoria specifico sia presente nell'heap locale. L'heap locale fa riferimento all'heap creato e gestito tramite una determinata istanza della libreria di runtime del linguaggio C. Se una libreria a collegamento dinamico (DLL) contiene un collegamento statico alla libreria di runtime, dispone della propria istanza dell'heap di runtime e di conseguenza il proprio heap, indipendentemente dall'heap locale dell'applicazione. Quando _ [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtIsValidHeapPointer** vengono rimosse durante la pre-elaborazione.

Dato che la funzione restituisce TRUE o FALSE, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. Nel seguente esempio si verifica un errore di asserzione se l'indirizzo specificato non si trova all'interno dell'heap locale.

```C
_ASSERTE( _CrtIsValidHeapPointer( userData ) );
```

Per altre informazioni su come usare **_CrtIsValidHeapPointer** con altre funzioni di debug e macro, vedere [macro per la creazione di report](/visualstudio/debugger/macros-for-reporting). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtIsValidHeapPointer**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come verificare se la memoria è valida quando viene usata con le librerie di runtime del linguaggio C precedenti a Visual Studio 2010. Questo esempio viene fornito per gli utenti di codice della libreria CRT legacy.

```C
// crt_isvalid.c
// This program allocates a block of memory using _malloc_dbg
// and then tests the validity of this memory by calling
// _CrtIsMemoryBlock,_CrtIsValidPointer, and _CrtIsValidHeapPointer.

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <crtdbg.h>

#define  TRUE   1
#define  FALSE  0

int main( void )
{
    char *my_pointer;

    // Call _malloc_dbg to include the filename and line number
    // of our allocation request in the header information
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

```Output
my_pointer has read and write accessibility.
my_pointer is within the local heap.
```

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
