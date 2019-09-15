---
title: _alloca
ms.date: 11/04/2016
api_name:
- _alloca
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
- _alloca
- alloca
helpviewer_keywords:
- memory allocation, stack
- alloca function
- _alloca function
ms.assetid: 74488eb1-b71f-4515-88e1-cdd03b6f8225
ms.openlocfilehash: 2212f9e40c78932b63eebfc221ad2f07fa3d3f9d
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70943703"
---
# <a name="_alloca"></a>_alloca

Alloca memoria nello stack. Questa funzione è deprecata perché è disponibile una versione più sicura. vedere [_malloca](malloca.md).

## <a name="syntax"></a>Sintassi

```C
void *_alloca(
   size_t size
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Byte da allocare dallo stack.

## <a name="return-value"></a>Valore restituito

La routine **alloca** restituisce un puntatore **void** allo spazio allocato, che è sicuramente allineato per l'archiviazione di qualsiasi tipo di oggetto. Se *size* è 0, **alloca** alloca un elemento di lunghezza zero e restituisce un puntatore valido a tale elemento.

Se lo spazio non può essere allocato viene generata un'eccezione di overflow dello stack. L'eccezione di overflow dello stack non è un'eccezione C++; si tratta di un'eccezione strutturata. Invece di usare la gestione delle eccezioni C++, è necessario usare la [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).

## <a name="remarks"></a>Note

**alloca** alloca i byte di *dimensioni* dallo stack del programma. Lo spazio allocato viene liberato automaticamente al termine della funzione chiamante, non quando l'allocazione passa semplicemente fuori dall'ambito. Non passare quindi il valore del puntatore restituito da **alloca** come argomento a [Free](free.md).

Esistono restrizioni per chiamare in modo esplicito **alloca** in un gestore di eccezioni (eh). Le routine EH eseguite su processori x86 operano nel relativo frame di memoria: Eseguono le attività nello spazio di memoria che non è basato sulla posizione corrente del puntatore dello stack della funzione contenitore. Le implementazioni più comuni includono la gestione delle eccezioni strutturata di Windows NT e le espressioni con clausola catch C++. Pertanto, chiamando in modo esplicito **alloca** in uno degli scenari seguenti, si verifica un errore di programma durante la restituzione alla routine eh chiamante:

- Espressione di filtro eccezioni Windows NT SEH:`__except ( _alloca() )`

- Gestore eccezioni finale SEH Windows NT:`__finally { _alloca() }`

- Espressione della clausola catch EH C++

Tuttavia, **alloca** può essere chiamato direttamente dall'interno di una routine eh o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari eh elencati in precedenza.

> [!IMPORTANT]
> In Windows XP, se **alloca** viene chiamato all'interno di un blocco try/catch, è necessario chiamare [resetstkoflw](resetstkoflw.md) nel blocco catch.

Oltre alle restrizioni precedenti, quando si usa l'opzione[/CLR (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) , non è possibile usare **alloca** nei blocchi **__except** . Per altre informazioni, vedere [/clr Restrictions](../../build/reference/clr-restrictions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_alloca**|\<malloc.h>|

## <a name="example"></a>Esempio

```C
// crt_alloca.c
// This program demonstrates the use of
// _alloca and trapping any exceptions
// that may occur.

#include <windows.h>
#include <stdio.h>
#include <malloc.h>

int main()
{
    int     size = 1000;
    int     errcode = 0;
    void    *pData = NULL;

    // Note: Do not use try/catch for _alloca,
    // use __try/__except, since _alloca throws
    // Structured Exceptions, not C++ exceptions.

    __try {
        // An unbounded _alloca can easily result in a
        // stack overflow.
        // Checking for a size < 1024 bytes is recommended.
        if (size > 0 && size < 1024)
        {
            pData = _alloca( size );
            printf_s( "Allocated %d bytes of stack at 0x%p",
                      size, pData);
        }
        else
        {
            printf_s("Tried to allocate too many bytes.\n");
        }
    }

    // If an exception occured with the _alloca function
    __except( GetExceptionCode() == STATUS_STACK_OVERFLOW )
    {
        printf_s("_alloca failed!\n");

        // If the stack overflows, use this function to restore.
        errcode = _resetstkoflw();
        if (errcode)
        {
            printf_s("Could not reset the stack!\n");
            _exit(1);
        }
    };
}
```

```Output
Allocated 1000 bytes of stack at 0x0012FB50
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
[_resetstkoflw](resetstkoflw.md)<br/>
[_malloca](malloca.md)<br/>
