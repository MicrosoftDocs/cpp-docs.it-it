---
title: Istruzione try-except
description: Il riferimento di Microsoft C' per il __try e __except istruzioni di gestione delle eccezioni strutturate.
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
ms.openlocfilehash: 132edf7cc9819637fafa3947686972d311924b99
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366229"
---
# <a name="try-except-statement"></a>Istruzione try-except

L'istruzione **try-except** è un'estensione Microsoft che supporta la gestione delle eccezioni strutturata nei linguaggi C e C. Questa estensione è **specifica di Microsoft**.

## <a name="syntax"></a>Sintassi

> **\_\_Provare**<br/>
> {<br/>
> &nbsp;&nbsp;&nbsp;&nbsp;codice custodito<br/>
> }<br/>
> except ( *espressione* ) ** \_ \_**<br/>
> {<br/>
> &nbsp;&nbsp;&nbsp;&nbsp;codice del gestore eccezioni<br/>
> }

## <a name="remarks"></a>Osservazioni

L'istruzione **try-except** è un'estensione Microsoft per i linguaggi C e C. Consente alle applicazioni di destinazione di ottenere il controllo quando si verificano eventi che normalmente terminano l'esecuzione del programma. Tali eventi sono *denominati eccezioni strutturate*o *eccezioni* brevi. Il meccanismo che gestisce queste eccezioni è denominato *gestione delle eccezioni strutturata* (SEH).

Per informazioni correlate, vedere [l'istruzione try-finally](../cpp/try-finally-statement.md).

Le eccezioni possono essere basate su hardware o su software. La gestione delle eccezioni strutturata è utile anche quando le applicazioni non possono eseguire il ripristino completo da eccezioni hardware o software. SEH consente di visualizzare le informazioni sugli errori e di intercettare lo stato interno dell'applicazione per diagnosticare il problema. È particolarmente utile per problemi intermittenti che non sono facili da riprodurre.

> [!NOTE]
> La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C++ e C. Tuttavia, non è specificamente progettato per c.. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, la gestione eccezioni C++ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo. Per i programmi in C, è consigliabile usare la gestione delle eccezioni nativa di C, [try, catch e throw.](../cpp/try-throw-and-catch-statements-cpp.md)

L'istruzione composta dopo la clausola **__try** è il *corpo* o la sezione *sorvegliata.* L'espressione **__except** è nota anche come espressione di *filtro.* Il valore determina la modalità di gestione dell'eccezione. L'istruzione composta dopo la clausola **__except** è il gestore di eccezioni. Il gestore specifica le azioni da eseguire se viene generata un'eccezione durante l'esecuzione della sezione del corpo. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

1. Se non si verifica alcuna eccezione durante l'esecuzione della sezione sorvegliata, l'esecuzione continua in corrispondenza dell'istruzione successiva alla clausola **__except.**

1. Se si verifica un'eccezione durante l'esecuzione della sezione sguardiata o in qualsiasi routine chiamata dalla sezione sguardi, viene valutata l'espressione **__except.** I tre valori possibili sono:

   - `EXCEPTION_CONTINUE_EXECUTION`(-1) L'eccezione è stata ignorata. Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.

   - `EXCEPTION_CONTINUE_SEARCH`(0) L'eccezione non è riconosciuta. Continuare la ricerca dello stack per un gestore, prima per contenere le istruzioni **try-except**, quindi per i gestori con la precedenza successiva più elevata.

   - `EXCEPTION_EXECUTE_HANDLER`(1) L'eccezione è riconosciuta. Trasferire il controllo al gestore eccezioni eseguendo l'istruzione composta **__except,** quindi continuare l'esecuzione dopo il blocco **di __except.**

**L'espressione __except** viene valutata come espressione C.The expression is evaluated as a C expression. È limitato a un singolo valore, all'operatore di espressione condizionale o all'operatore virgola. Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.

Ogni applicazione può essere associata al proprio gestore di eccezioni.

Non è valido saltare in **un'istruzione __try,** ma valido per saltare fuori di uno. Il gestore di eccezioni non viene chiamato se un processo viene terminato durante l'esecuzione di un'istruzione **try-except.**

Per compatibilità con le versioni precedenti, **_try**, **_except**e **_leave** sono sinonimi di **__try,** **__except**e **__leave,** a meno che non venga specificata l'opzione del compilatore [ \(/-As Disable).](../build/reference/za-ze-disable-language-extensions.md)

### <a name="the-__leave-keyword"></a>La parola chiave __leave

La parola chiave **__leave** è valida solo all'interno della sezione guarded di un'istruzione **try-except** e il suo effetto è quello di passare alla fine della sezione sguardata. L'esecuzione continua con la prima istruzione dopo il gestore dell'eccezione.

Un'istruzione **goto** può anche saltare fuori dalla sezione sorvegliata e non riduce le prestazioni come avviene in un'istruzione **try-finally.** Questo perché lo srotolamento dello stack non si verifica. Tuttavia, si consiglia di utilizzare il **__leave** parola chiave anziché **un'istruzione goto.** Il motivo è che è meno probabile che si commetta un errore di programmazione se la sezione custodita è grande o complessa.

### <a name="structured-exception-handling-intrinsic-functions"></a>Funzioni intrinseche di gestione eccezioni strutturata

La gestione delle eccezioni strutturata fornisce due funzioni intrinseche disponibili per l'utilizzo con l'istruzione **try-except:** [GetExceptionCode](/windows/win32/Debug/getexceptioncode) e [GetExceptionInformation](/windows/win32/Debug/getexceptioninformation).

`GetExceptionCode`restituisce il codice (un numero intero a 32 bit) dell'eccezione.

La funzione `GetExceptionInformation` intrinseca restituisce un puntatore a una struttura [EXCEPTION_POINTERS](/windows/win32/api/winnt/ns-winnt-exception_pointers) contenente informazioni aggiuntive sull'eccezione. Tramite questo puntatore, è possibile accedere allo stato del computer esistente al momento di un'eccezione hardware. La struttura è analoga alla seguente:

```cpp
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
```

I tipi `PEXCEPTION_RECORD` `PCONTEXT` puntatore e sono \<definiti nel file `_EXCEPTION_RECORD` di `_CONTEXT` inclusione winnt.h> e sono definiti nel file \<di inclusione excpt.h>

È possibile `GetExceptionCode` utilizzare all'interno del gestore di eccezioni. Tuttavia, è `GetExceptionInformation` possibile utilizzare solo all'interno dell'espressione di filtro eccezione. Le informazioni a cui punta sono in genere nello stack e non sono più disponibili quando il controllo viene trasferito al gestore eccezioni.

La funzione [intrinseca AbnormalTermination](/windows/win32/Debug/abnormaltermination) è disponibile all'interno di un gestore di terminazione. Restituisce 0 se il corpo dell'istruzione **try-finally** termina in sequenza. In tutti gli altri casi, restituisce 1.

\<excpt.h definisce> alcuni nomi alternativi per queste funzioni intrinseche:

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

[Scrittura di un gestore eccezioniWriting an exception handler](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
