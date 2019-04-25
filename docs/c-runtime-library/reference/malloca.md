---
title: _malloca
ms.date: 11/04/2016
apiname:
- _malloca
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
- malloca
- _malloca
helpviewer_keywords:
- memory allocation, stack
- malloca function
- _malloca function
ms.assetid: 293992df-cfca-4bc9-b313-0a733a6bb936
ms.openlocfilehash: 22a63002c900d69e8a7706a54acedf0b4b4f6376
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156876"
---
# <a name="malloca"></a>_malloca

Alloca memoria nello stack. Questa è una versione di [_alloca](alloca.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
void *_malloca(
   size_t size
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Byte da allocare dallo stack.

## <a name="return-value"></a>Valore restituito

Il **malloca** routine restituisce un **void** puntatore allo spazio allocato, che è assolutamente corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Se *dimensioni* è 0, **malloca** alloca un elemento di lunghezza zero e restituisce un puntatore valido a tale elemento.

Se *dimensioni* è maggiore di quella **_ALLOCA_S_THRESHOLD**, quindi **malloca** tenta di allocare nell'heap e restituisce un puntatore null se non è possibile allocare spazio. Se *dimensioni* è minore o uguale a **_ALLOCA_S_THRESHOLD**, quindi **malloca** tenta di allocare nello stack e un'eccezione di overflow dello stack viene generato se non è lo spazio allocato. L'eccezione di overflow dello stack non è un'eccezione C++; è un'eccezione strutturata. Invece di usare la gestione delle eccezioni C++, è necessario utilizzare [Structured Exception Handling](../../cpp/structured-exception-handling-c-cpp.md) (SEH) per rilevare questa eccezione.

## <a name="remarks"></a>Note

**malloca** alloca *dimensioni* byte di stack del programma o dell'heap se la richiesta supera una determinata dimensione in byte fornito dal **_ALLOCA_S_THRESHOLD**. La differenza tra **malloca** e **alloca** è quello **alloca** alloca sempre nello stack, indipendentemente dalle dimensioni. A differenza **alloca**, che non richiede o consente una chiamata a **gratuita** per liberare la memoria allocata in questo modo, **malloca** richiede l'uso di [freea](freea.md)per liberare la memoria. Nella modalità di debug **malloca** alloca sempre la memoria dall'heap.

Esistono alcune restrizioni per chiamare in modo esplicito **malloca** in un gestore di eccezioni (EH, Exception HANDLING). Routine EH in esecuzione su processori x86 operano nel relativo frame di memoria: Eseguono le attività nello spazio di memoria che non si basa sulla posizione corrente del puntatore dello stack della funzione contenitore. Le implementazioni più comuni includono la gestione delle eccezioni strutturata di Windows NT e le espressioni con clausola catch C++. Pertanto, chiamare in modo esplicito **malloca** in uno dei seguenti scenari genera un errore di programma durante la restituzione alla routine EH chiamante:

- Espressione di filtro eccezioni di Windows NT SEH: **except** (`_malloca ()` )

- Gestore di eccezioni finale di Windows NT SEH: **finally** {`_malloca ()` }

- Espressione della clausola catch EH C++

Tuttavia **malloca** può essere chiamato direttamente dall'interno di una routine EH o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari EH elencati in precedenza.

> [!IMPORTANT]
> In Windows XP, se **malloca** viene chiamato all'interno di un blocco try/catch, è necessario chiamare [resetstkoflw](resetstkoflw.md) nel blocco catch.

Oltre alle restrizioni menzionate sopra, quando si usa la [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) opzione **malloca** non può essere utilizzato nella **except** blocchi. Per altre informazioni, vedere [/clr Restrictions](../../build/reference/clr-restrictions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_malloca**|\<malloc.h>|

## <a name="example"></a>Esempio

```C
// crt_malloca_simple.c
#include <stdio.h>
#include <malloc.h>

void Fn()
{
   char * buf = (char *)_malloca( 100 );
   // do something with buf
   _freea( buf );
}

int main()
{
   Fn();
}
```

## <a name="example"></a>Esempio

```C
// crt_malloca_exception.c
// This program demonstrates the use of
// _malloca and trapping any exceptions
// that may occur.

#include <windows.h>
#include <stdio.h>
#include <malloc.h>

int main()
{
    int     size;
    int     numberRead = 0;
    int     errcode = 0;
    void    *p = NULL;
    void    *pMarker = NULL;

    while (numberRead == 0)
    {
        printf_s("Enter the number of bytes to allocate "
                 "using _malloca: ");
        numberRead = scanf_s("%d", &size);
    }

    // Do not use try/catch for _malloca,
    // use __try/__except, since _malloca throws
    // Structured Exceptions, not C++ exceptions.

    __try
    {
        if (size > 0)
        {
            p =  _malloca( size );
        }
        else
        {
            printf_s("Size must be a positive number.");
        }
        _freea( p );
    }

    // Catch any exceptions that may occur.
    __except( GetExceptionCode() == STATUS_STACK_OVERFLOW )
    {
        printf_s("_malloca failed!\n");

        // If the stack overflows, use this function to restore.
        errcode = _resetstkoflw();
        if (errcode)
        {
            printf("Could not reset the stack!");
            _exit(1);
        }
    };
}
```

### <a name="input"></a>Input

```Input
1000
```

### <a name="sample-output"></a>Esempio di output

```Output
Enter the number of bytes to allocate using _malloca: 1000
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
[_resetstkoflw](resetstkoflw.md)<br/>
