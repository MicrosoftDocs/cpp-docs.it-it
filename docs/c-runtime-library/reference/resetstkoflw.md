---
title: _resetstkoflw
ms.date: 11/04/2016
apiname:
- _resetstkoflw
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
- resetstkoflw
- _resetstkoflw
helpviewer_keywords:
- resetstkoflw function
- stack overflow
- stack, recovering
- _resetstkoflw function
ms.assetid: 319529cd-4306-4d22-810b-2063f3ad9e14
ms.openlocfilehash: ad8c9b470c33a4c84f46ac7758d368917e7938e0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62357538"
---
# <a name="resetstkoflw"></a>_resetstkoflw

Recupera dall'overflow dello stack.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _resetstkoflw( void );
```

## <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo, zero se ha esito negativo.

## <a name="remarks"></a>Note

Il **resetstkoflw** funzione consente di recuperare da una condizione di overflow dello stack, consentendo un programma di proseguire invece che si verifichi un errore di eccezione irreversibile. Se il **resetstkoflw** funzione non viene chiamata, non esistono alcuna pagina di protezione dopo l'eccezione precedente. La volta successiva che si verifica un overflow dello stack, non verrà generata alcuna eccezione e il processo viene terminato senza avvisi.

Se un thread in un'applicazione causa un'eccezione **EXCEPTION_STACK_OVERFLOW**, il thread ha lasciato il relativo stack in uno stato danneggiato. Ciò si differenzia da altre eccezioni come **EXCEPTION_ACCESS_VIOLATION** o **EXCEPTION_INT_DIVIDE_BY_ZERO**, in cui lo stack non è danneggiato. Lo stack è impostato su un valore arbitrario piccolo quando il programma viene caricato per la prima volta. Lo stack poi cresce su richiesta per soddisfare le esigenze del thread. Ciò viene implementato inserendo una pagina con accesso PAGE_GUARD alla fine dello stack corrente. Per altre informazioni, vedere [Creating Guard Pages](/windows/desktop/Memory/creating-guard-pages) (Creazione di guard page).

Quando il codice porta il puntatore dello stack a puntare a un indirizzo di questa pagina, si verifica un'eccezione e il sistema esegue le tre seguenti cose:

- Rimuove la protezione di PAGE_GUARD nella pagina di protezione in modo che il thread possa leggere e scrivere dati in memoria.

- Alloca una nuova pagina di protezione che è localizzata una pagina sotto l'ultima.

- Riesegue l'istruzione che ha generato l'eccezione.

In questo modo, il sistema può aumentare automaticamente la dimensione dello stack per il thread. Ogni thread in un processo ha una dimensione dello stack massima. La dimensione dello stack viene impostata in fase di compilazione dall'istruzione [/STACK (Allocazioni stack)](../../build/reference/stack-stack-allocations.md) o [STACKSIZE](../../build/reference/stacksize.md) nel file con estensione def per il progetto.

Quando la dimensione dello stack massima viene superata, il sistema esegue le tre cose seguenti:

- Rimuove la protezione di PAGE_GUARD nella pagina di protezione, come descritto in precedenza.

- Tenta di allocare una nuova pagina di protezione sotto l'ultima. Tuttavia, questo ha esito negativo perché la dimensione dello stack massima è stata superata.

- Genera un'eccezione in modo che il thread possa gestirla nel blocco di eccezioni.

Si noti che, a questo punto, lo stack non ha più una pagina di protezione. La volta successiva che il programma aumenta lo stack fino alla fine, in cui deve esserci una pagina di protezione, il programma scrive oltre la fine dello stack e provoca una violazione di accesso.

Chiamare **resetstkoflw** per ripristinare la pagina di protezione ogni volta che viene eseguito il ripristino dopo un'eccezione di overflow dello stack. Questa funzione può essere chiamata dall'interno della parte principale di un' **except** blocco o dall'esterno un' **except** blocco. Tuttavia, esistono alcune limitazioni sui casi in cui deve essere utilizzata. **resetstkoflw** non dovrebbe mai essere chiamato da:

- Un'espressione di filtro.

- Una funzione di filtro.

- Una funzione chiamata da una funzione di filtro.

- Un blocco **catch**.

- Oggetto **finally** blocco.

A questi punti, lo stack non è ancora sufficientemente svuotato.

Le eccezioni di overflow dello stack vengono generate come eccezioni strutturate, non C++ le eccezioni, pertanto **resetstkoflw** non è utile in un normale **catch** bloccarsi, in quanto non rileverà un overflow dello stack eccezione. Tuttavia, se si usa [_set_se_translator](set-se-translator.md) per implementare un convertitore di eccezioni strutturate che genera eccezioni C++ (come nel secondo esempio), per un'eccezione di overflow dello stack viene restituita un'eccezione C++ che può essere gestita da un blocco catch C++.

Non è sicuro chiamare **_resetstkoflw** in un blocco catch C++ che viene raggiunto da un'eccezione generata dalla funzione del convertitore di eccezioni strutturate. In questo caso, lo spazio dello stack non viene liberato e il puntatore dello stack non viene reimpostato fino all'esterno del blocco catch, anche se i distruttori sono stati chiamati per tutti gli oggetti distruttibili prima del blocco catch. Questa funzione non deve essere chiamata finché lo spazio dello stack non è libero e il puntatore dello stack non è stato reimpostato. Pertanto, deve essere chiamata solo dopo l'uscita dal blocco catch. Nel blocco catch è consigliabile utilizzare uno spazio di stack il più piccolo possibile, poiché un overflow dello stack che si verifica nel blocco catch che sta tentando di risolvere un overflow dello stack precedente non è reversibile e il programma può smettere di rispondere dal momento che l'overflow nel blocco catch genera un'eccezione che, a sua volta, è gestita dallo stesso blocco catch.

Esistono situazioni in cui la funzione **_resetstkoflw** può avere esito negativo anche se usata in una posizione corretta, ad esempio in un blocco **__except**. Se, anche dopo la rimozione dello stack, non esiste ancora spazio dello stack sufficiente per eseguire **_resetstkoflw** senza scrivere nell'ultima pagina dello stack, **_resetstkoflw** non riesce a reimpostare l'ultima pagina dello stack come guard page e restituisce 0, a indicare una condizione di errore. Di conseguenza, l'utilizzo sicuro di questa funzione deve includere la verifica del valore restituito anziché supporre che lo stack sia sicuro da utilizzare.

Gestione delle eccezioni strutturate non intercetterà un' **STATUS_STACK_OVERFLOW** eccezione quando l'applicazione viene compilata con **/clr** (vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_resetstkoflw**|\<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** Tutte le versioni del [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo consigliato del **resetstkoflw** (funzione).

```C
// crt_resetstkoflw.c
// Launch program with and without arguments to observe
// the difference made by calling _resetstkoflw.

#include <malloc.h>
#include <stdio.h>
#include <windows.h>

void recursive(int recurse)
{
   _alloca(2000);
   if (recurse)
      recursive(recurse);
}

// Filter for the stack overflow exception.
// This function traps the stack overflow exception, but passes
// all other exceptions through.
int stack_overflow_exception_filter(int exception_code)
{
   if (exception_code == EXCEPTION_STACK_OVERFLOW)
   {
       // Do not call _resetstkoflw here, because
       // at this point, the stack is not yet unwound.
       // Instead, signal that the handler (the __except block)
       // is to be executed.
       return EXCEPTION_EXECUTE_HANDLER;
   }
   else
       return EXCEPTION_CONTINUE_SEARCH;
}

int main(int ac)
{
   int i = 0;
   int recurse = 1, result = 0;

   for (i = 0 ; i < 10 ; i++)
   {
      printf("loop #%d\n", i + 1);
      __try
      {
         recursive(recurse);

      }

      __except(stack_overflow_exception_filter(GetExceptionCode()))
      {
         // Here, it is safe to reset the stack.

         if (ac >= 2)
         {
            puts("resetting stack overflow");
            result = _resetstkoflw();
         }
      }

      // Terminate if _resetstkoflw failed (returned 0)
      if (!result)
         return 3;
   }

   return 0;
}
```

Esempio di output senza argomenti di programma:

```Output
loop #1
```

Il programma non risponde senza eseguire ulteriori iterazioni.

Con argomenti del programma:

```Output
loop #1
resetting stack overflow
loop #2
resetting stack overflow
loop #3
resetting stack overflow
loop #4
resetting stack overflow
loop #5
resetting stack overflow
loop #6
resetting stack overflow
loop #7
resetting stack overflow
loop #8
resetting stack overflow
loop #9
resetting stack overflow
loop #10
resetting stack overflow
```

### <a name="description"></a>Descrizione

L'esempio seguente illustra l'uso consigliato di **resetstkoflw** in un programma in cui le eccezioni strutturate vengono convertite in C++ eccezioni.

### <a name="code"></a>Codice

```cpp
// crt_resetstkoflw2.cpp
// compile with: /EHa
// _set_se_translator requires the use of /EHa
#include <malloc.h>
#include <stdio.h>
#include <windows.h>
#include <eh.h>

class Exception { };

class StackOverflowException : Exception { };

// Because the overflow is deliberate, disable the warning that
// this function will cause a stack overflow.
#pragma warning (disable: 4717)
void CauseStackOverflow (int i)
{
    // Overflow the stack by allocating a large stack-based array
    // in a recursive function.
    int a[10000];
    printf("%d ", i);
    CauseStackOverflow (i + 1);
}

void __cdecl SEHTranslator (unsigned int code, _EXCEPTION_POINTERS*)
{
    // For stack overflow exceptions, throw our own C++
    // exception object.
    // For all other exceptions, throw a generic exception object.
    // Use minimal stack space in this function.
    // Do not call _resetstkoflw in this function.

    if (code == EXCEPTION_STACK_OVERFLOW)
        throw StackOverflowException ( );
    else
        throw Exception( );
}

int main ( )
{
    bool stack_reset = false;
    bool result = false;

    // Set up a function to handle all structured exceptions,
    // including stack overflow exceptions.
    _set_se_translator (SEHTranslator);

    try
    {
        CauseStackOverflow (0);
    }
    catch (StackOverflowException except)
    {
        // Use minimal stack space here.
        // Do not call _resetstkoflw here.
        printf("\nStack overflow!\n");
        stack_reset = true;
    }
    catch (Exception except)
    {
        // Do not call _resetstkoflw here.
        printf("\nUnknown Exception!\n");
    }
    if (stack_reset)
    {
        result = _resetstkoflw();
        // If stack reset failed, terminate the application.
        if (result == 0)
            exit(1);
    }

    void* pv = _alloca(100000);
    printf("Recovered from stack overflow and allocated 100,000 bytes"
           " using _alloca.");

    return 0;
}
```

```Output
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
Stack overflow!
Recovered from stack overflow and allocated 100,000 bytes using _alloca.
```

## <a name="see-also"></a>Vedere anche

[_alloca](alloca.md)<br/>
