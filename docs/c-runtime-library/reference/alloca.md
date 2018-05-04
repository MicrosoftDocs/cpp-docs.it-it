---
title: _alloca | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _alloca
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
- _alloca
- alloca
dev_langs:
- C++
helpviewer_keywords:
- memory allocation, stack
- alloca function
- _alloca function
ms.assetid: 74488eb1-b71f-4515-88e1-cdd03b6f8225
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fdc595d33bdc5ce464df1aed86cf885e5673ddc9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="alloca"></a>_alloca

Alloca memoria nello stack. Questa funzione è deprecata poiché è disponibile una versione più sicura; vedere [malloca](malloca.md).

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

Il **alloca** routine restituisce un **void** puntatore per lo spazio allocato, che è assolutamente corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Se *dimensioni* è 0, **alloca** alloca un elemento di lunghezza zero e restituisce un puntatore valido a tale elemento.

Se lo spazio non può essere allocato viene generata un'eccezione di overflow dello stack. L'eccezione di overflow dello stack non è un'eccezione C++; si tratta di un'eccezione strutturata. Invece di usare la gestione delle eccezioni C++, è necessario usare la [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).

## <a name="remarks"></a>Note

**alloca** alloca *dimensioni* byte dallo stack di programma. Lo spazio allocato viene liberato automaticamente al termine della funzione chiamante (ma non quando l'allocazione semplicemente diventa esterno all'ambito). Pertanto, non passare il valore del puntatore restituito da **alloca** come argomento al [libero](free.md).

Esistono restrizioni per chiamare in modo esplicito **alloca** in un gestore di eccezioni (EH). Le routine EH in esecuzione su processori x86 operano nel relativo frame di memoria: eseguono le attività nello spazio di memoria che non è basato sulla posizione corrente del puntatore dello stack della funzione contenitore. Le implementazioni più comuni includono la gestione delle eccezioni strutturata di Windows NT e le espressioni con clausola catch C++. Pertanto, in modo esplicito, la chiamata **alloca** in uno dei seguenti scenari genera un errore di programma durante la restituzione alla routine EH chiamante:

- Espressione di filtro eccezioni di Windows NT SEH: `__except ( _alloca() )`

- Gestore di eccezioni finale di Windows NT SEH: `__finally { _alloca() }`

- Espressione della clausola catch EH C++

Tuttavia, **alloca** può essere chiamato direttamente all'interno di una routine EH o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari EH elencati in precedenza.

> [!IMPORTANT]
> In Windows XP, se **alloca** viene chiamato all'interno di un blocco try/catch, è necessario chiamare [resetstkoflw](resetstkoflw.md) nel blocco catch.

Oltre alle restrizioni menzionate sopra, quando si utilizza il[/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) opzione **alloca** non può essere utilizzato **except** blocchi. Per altre informazioni, vedere [/clr Restrictions](../../build/reference/clr-restrictions.md).

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
