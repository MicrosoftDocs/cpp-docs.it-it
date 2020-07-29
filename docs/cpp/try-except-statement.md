---
title: Istruzione try-except
description: Il riferimento a Microsoft C++ alla __try e __except le istruzioni di gestione delle eccezioni strutturate.
ms.date: 04/03/2020
f1_keywords:
- _abnormal_termination_cpp
- _exception_code_cpp
- _exception_info
- __except
- _except
- _exception_code
- __except_cpp
- _exception_info_cpp
helpviewer_keywords:
- __try keyword [C++]
- EXCEPTION_CONTINUE_EXECUTION macro
- EXCEPTION_CONTINUE_SEARCH macro
- EXCEPTION_EXECUTE_HANDLER macro
- GetExceptionCode function
- try-catch keyword [C++], try-except keyword [C++]
- _exception_code keyword [C++]
- try-except keyword [C++]
- _exception_info keyword [C++]
- _abnormal_termination keyword [C++]
ms.assetid: 30d60071-ea49-4bfb-a8e6-7a420de66381
ms.openlocfilehash: 6d0ed9cfa290ab83693ee248da5bebae6f91de57
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87185697"
---
# <a name="try-except-statement"></a>Istruzione try-except

L'istruzione **try-except** è un'estensione Microsoft che supporta la gestione strutturata delle eccezioni nei linguaggi C e C++. Questa estensione è **specifica di Microsoft**.

## <a name="syntax"></a>Sintassi

> **\_\_provare**\
> {\
> &nbsp;&nbsp;&nbsp;&nbsp;codice sorvegliato \
> }\
> ** \_ \_ except** ( *espressione* ) \
> {\
> &nbsp;&nbsp;&nbsp;&nbsp;codice gestore eccezioni \
> }

## <a name="remarks"></a>Osservazioni

L'istruzione **try-except** è un'estensione Microsoft dei linguaggi C e C++. Consente alle applicazioni di destinazione di ottenere il controllo quando si verificano eventi che in genere terminano l'esecuzione del programma. Tali eventi sono denominati *eccezioni strutturate*o *eccezioni* per brevità. Il meccanismo che gestisce queste eccezioni è denominato SEH ( *Structured Exception Handling* ).

Per informazioni correlate, vedere l' [istruzione try-finally](../cpp/try-finally-statement.md).

Le eccezioni possono essere basate sull'hardware o sul software. La gestione strutturata delle eccezioni è utile anche quando le applicazioni non possono recuperare completamente le eccezioni hardware o software. SEH consente di visualizzare informazioni sugli errori e intercettare lo stato interno dell'applicazione per facilitare la diagnosi del problema. È particolarmente utile per i problemi intermittenti che non sono facili da riprodurre.

> [!NOTE]
> La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C++ e C. Tuttavia, non è progettato in modo specifico per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, la gestione eccezioni C++ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo. Per i programmi C++, è consigliabile usare la gestione delle eccezioni C++ nativa: istruzioni [try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md) .

L'istruzione composta dopo la clausola **__try** è il *corpo* o la sezione *protetta* . L' **`__except`** espressione è nota anche come espressione di *filtro* . Il valore determina come viene gestita l'eccezione. L'istruzione composta dopo la **`__except`** clausola è il gestore di eccezioni. Il gestore specifica le azioni da intraprendere se viene generata un'eccezione durante l'esecuzione della sezione del corpo. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

1. Se non si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continua in corrispondenza dell'istruzione dopo la **`__except`** clausola.

1. Se si verifica un'eccezione durante l'esecuzione della sezione protetta o nelle routine chiamate dalla sezione protetta, l' **`__except`** espressione viene valutata. I tre valori possibili sono:

   - `EXCEPTION_CONTINUE_EXECUTION`(-1) L'eccezione viene rilasciata. Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.

   - `EXCEPTION_CONTINUE_SEARCH`(0) l'eccezione non è riconosciuta. Continuare la ricerca dello stack per un gestore, prima per contenere le istruzioni **try-except**, quindi per i gestori con la precedenza successiva più elevata.

   - `EXCEPTION_EXECUTE_HANDLER`(1) l'eccezione è riconosciuta. Trasferire il controllo al gestore eccezioni eseguendo l' **`__except`** istruzione composta, quindi continuare l'esecuzione dopo il **`__except`** blocco.

L' **`__except`** espressione viene valutata come un'espressione C. È limitato a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola. Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.

Ogni applicazione può essere associata al proprio gestore di eccezioni.

Non è consentito passare a un'istruzione **__try** , ma è possibile uscire da una. Il gestore di eccezioni non viene chiamato se un processo viene terminato durante l'esecuzione di un'istruzione **try-except** .

Per compatibilità con le versioni precedenti, **_try**, **_except**e **_leave** sono sinonimi per **__try**, e a **`__except`** **`__leave`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

### <a name="the-__leave-keyword"></a>La parola chiave __leave

La **`__leave`** parola chiave è valida solo all'interno della sezione protetta di un'istruzione **try-except** e l'effetto è quello di passare alla fine della sezione protetta. L'esecuzione continua con la prima istruzione dopo il gestore dell'eccezione.

Un' **`goto`** istruzione può anche uscire dalla sezione sorvegliata e non comporta un peggioramento delle prestazioni in un'istruzione **try-finally** . Questo perché la rimozione dello stack non viene eseguita. Tuttavia, si consiglia di utilizzare la **`__leave`** parola chiave anziché un' **`goto`** istruzione. Il motivo è che è meno probabile che si crei un errore di programmazione se la sezione sorvegliata è di grandi dimensioni o complessa.

### <a name="structured-exception-handling-intrinsic-functions"></a>Funzioni intrinseche di gestione eccezioni strutturata

La gestione strutturata delle eccezioni fornisce due funzioni intrinseche disponibili per l'utilizzo con l'istruzione **try-except** : [GetExceptionCode](/windows/win32/Debug/getexceptioncode) e [GetExceptionInformation](/windows/win32/Debug/getexceptioninformation).

`GetExceptionCode`Restituisce il codice (un intero a 32 bit) dell'eccezione.

La funzione intrinseca `GetExceptionInformation` restituisce un puntatore a una struttura [EXCEPTION_POINTERS](/windows/win32/api/winnt/ns-winnt-exception_pointers) contenente informazioni aggiuntive sull'eccezione. Tramite questo puntatore, è possibile accedere allo stato del computer esistente al momento di un'eccezione hardware. La struttura è analoga alla seguente:

```cpp
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
```

I tipi di puntatore `PEXCEPTION_RECORD` e `PCONTEXT` sono definiti nel file di inclusione e \<winnt.h> `_EXCEPTION_RECORD` e `_CONTEXT` sono definiti nel file di inclusione\<excpt.h>

È possibile utilizzare `GetExceptionCode` all'interno del gestore di eccezioni. Tuttavia, è possibile usare `GetExceptionInformation` solo all'interno dell'espressione di filtro eccezioni. Le informazioni a cui fa riferimento sono generalmente nello stack e non sono più disponibili quando il controllo viene trasferito al gestore di eccezioni.

La funzione intrinseca [AbnormalTermination](/windows/win32/Debug/abnormaltermination) è disponibile all'interno di un gestore di terminazione. Restituisce 0 se il corpo dell'istruzione **try-finally** termina in sequenza. In tutti gli altri casi, restituisce 1.

\<excpt.h>definisce alcuni nomi alternativi per queste funzioni intrinseche:

`GetExceptionCode`equivale a`_exception_code`

`GetExceptionInformation`equivale a`_exception_info`

`AbnormalTermination`equivale a`_abnormal_termination`

## <a name="example"></a>Esempio

```cpp
// exceptions_try_except_Statement.cpp
// Example of try-except and try-finally statements
#include <stdio.h>
#include <windows.h> // for EXCEPTION_ACCESS_VIOLATION
#include <excpt.h>

int filter(unsigned int code, struct _EXCEPTION_POINTERS *ep)
{
    puts("in filter.");
    if (code == EXCEPTION_ACCESS_VIOLATION)
    {
        puts("caught AV as expected.");
        return EXCEPTION_EXECUTE_HANDLER;
    }
    else
    {
        puts("didn't catch AV, unexpected.");
        return EXCEPTION_CONTINUE_SEARCH;
    };
}

int main()
{
    int* p = 0x00000000;   // pointer to NULL
    puts("hello");
    __try
    {
        puts("in try");
        __try
        {
            puts("in try");
            *p = 13;    // causes an access violation exception;
        }
        __finally
        {
            puts("in finally. termination: ");
            puts(AbnormalTermination() ? "\tabnormal" : "\tnormal");
        }
    }
    __except(filter(GetExceptionCode(), GetExceptionInformation()))
    {
        puts("in except");
    }
    puts("world");
}
```

### <a name="output"></a>Output

```Output
hello
in try
in try
in filter.
caught AV as expected.
in finally. termination:
        abnormal
in except
world
```

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
