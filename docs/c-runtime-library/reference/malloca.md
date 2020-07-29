---
title: _malloca
ms.date: 11/04/2016
api_name:
- _malloca
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
- malloca
- _malloca
helpviewer_keywords:
- memory allocation, stack
- malloca function
- _malloca function
ms.assetid: 293992df-cfca-4bc9-b313-0a733a6bb936
ms.openlocfilehash: d4604a6e2dfb00502e3c942c9735a077e1632843
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232495"
---
# <a name="_malloca"></a>_malloca

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

La routine **_malloca** restituisce un **`void`** puntatore allo spazio allocato, che è sicuramente allineato in modo adeguato per l'archiviazione di qualsiasi tipo di oggetto. Se *size* è 0, **_malloca** alloca un elemento di lunghezza zero e restituisce un puntatore valido a tale elemento.

Se *size* è maggiore di **_ALLOCA_S_THRESHOLD**, **_malloca** tenta di allocare sull'heap e restituisce un puntatore null se non è possibile allocare lo spazio. Se le *dimensioni* sono minori o uguali a **_ALLOCA_S_THRESHOLD**, **_malloca** tenta di allocare nello stack e viene generata un'eccezione di overflow dello stack se lo spazio non può essere allocato. L'eccezione di overflow dello stack non è un'eccezione C++. si tratta di un'eccezione strutturata. Anziché utilizzare la gestione delle eccezioni C++, è necessario utilizzare la [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md) (SEH) per rilevare questa eccezione.

## <a name="remarks"></a>Osservazioni

**_malloca** alloca i byte di *dimensioni* dallo stack di programmi o dall'heap se la richiesta supera una determinata dimensione in byte fornita da **_ALLOCA_S_THRESHOLD**. La differenza tra **_malloca** e **_alloca** è che **_alloca** alloca sempre nello stack, indipendentemente dalle dimensioni. A differenza **_alloca**, che non richiede o non consente una **chiamata a free per liberare** la memoria così allocata, **_malloca** richiede l'uso di [_freea](freea.md) per liberare memoria. In modalità di debug, **_malloca** alloca sempre memoria dall'heap.

Esistono restrizioni per chiamare in modo esplicito **_malloca** in un gestore di eccezioni (eh). Le routine EH in esecuzione su processori x86 operano nel relativo frame di memoria: eseguono le attività nello spazio di memoria che non è basato sulla posizione corrente del puntatore dello stack della funzione contenitore. Le implementazioni più comuni includono la gestione delle eccezioni strutturata di Windows NT e le espressioni con clausola catch C++. Pertanto, chiamando in modo esplicito **_malloca** in uno degli scenari seguenti, si verifica un errore di programma durante la restituzione alla routine eh chiamante:

- Espressione di filtro eccezioni Windows NT SEH: **`__except`** ( `_malloca ()` )

- Gestore eccezioni finale SEH Windows NT: **`__finally`** { `_malloca ()` }

- Espressione della clausola catch EH C++

Tuttavia, **_malloca** può essere chiamato direttamente dall'interno di una routine eh o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari eh elencati in precedenza.

> [!IMPORTANT]
> In Windows XP, se **_malloca** viene chiamato all'interno di un blocco try/catch, è necessario chiamare [_resetstkoflw](resetstkoflw.md) nel blocco catch.

Oltre alle restrizioni precedenti, quando si usa l'opzione [/CLR (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) , non è possibile usare **_malloca** nei **`__except`** blocchi. Per altre informazioni, vedere [Limitazioni di /clr](../../build/reference/clr-restrictions.md).

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

### <a name="sample-output"></a>Output di esempio

```Output
Enter the number of bytes to allocate using _malloca: 1000
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
[_resetstkoflw](resetstkoflw.md)<br/>
