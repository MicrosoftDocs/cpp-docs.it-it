---
title: Istruzione try-except
ms.date: 10/09/2018
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
ms.openlocfilehash: 7d3a92aa8c6d1f77a1795eabde0ae1e575bb5770
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79444121"
---
# <a name="try-except-statement"></a>Istruzione try-except

**Sezione specifica Microsoft**

L'istruzione **try-except** è un'estensione Microsoft per i linguaggi C C++ e che supporta la gestione strutturata delle eccezioni.

## <a name="syntax"></a>Sintassi

> **\_\_provare**<br/>
> {<br/>
> &nbsp;&nbsp;&nbsp;codice &nbsp;//sorvegliato<br/>
> }<br/>
> **\_\_eccetto** ( *Expression* )<br/>
> {<br/>
> &nbsp;&nbsp;&nbsp;codice del gestore di eccezioni &nbsp;//<br/>
> }

## <a name="remarks"></a>Osservazioni

L'istruzione **try-except** è un'estensione Microsoft dei linguaggi C e C++ che consente alle applicazioni di destinazione di ottenere il controllo quando si verificano eventi che interrompono normalmente l'esecuzione del programma. Tali eventi vengono chiamati *eccezioni*e il meccanismo che gestisce le eccezioni viene definito SEH ( *Structured Exception Handling* ).

Per informazioni correlate, vedere l' [istruzione try-finally](../cpp/try-finally-statement.md).

Le eccezioni possono essere basate sull'hardware o basate sul software. Anche quando le applicazioni non possono completamente recuperare le eccezioni hardware o software, la gestione delle eccezioni strutturata consente di visualizzare informazioni sugli errori e intercettare lo stato interno dell'applicazione per diagnosticare il problema. Ciò è particolarmente utile per i problemi saltuari che non possono essere riprodotti facilmente.

> [!NOTE]
> La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C++ e C. Tuttavia, non è progettato in particolare per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, la gestione eccezioni C++ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo. Per C++ i programmi, si consiglia di utilizzare il C++ meccanismo di gestione delle eccezioni (istruzioni[try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md) ).

L'istruzione composta dopo la clausola **__try** è il corpo o la sezione protetta. L'istruzione composta dopo la clausola **__except** è il gestore di eccezioni. Il gestore specifica un set di azioni da intraprendere se viene generata un'eccezione durante l'esecuzione del corpo della sezione protetta. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

1. Se non si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continua in corrispondenza dell'istruzione dopo la clausola **__except** .

1. Se si verifica un'eccezione durante l'esecuzione della sezione protetta o nelle routine chiamate dalla sezione protetta, l' *espressione* **__except** (denominata espressione di *filtro* ) viene valutata e il valore determina come viene gestita l'eccezione. I tre valori possibili sono:

   - EXCEPTION_CONTINUE_EXECUTION eccezione (-1) viene rilasciata. Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.

   - L'eccezione EXCEPTION_CONTINUE_SEARCH (0) non è riconosciuta. Continuare la ricerca dello stack per un gestore, prima per contenere le istruzioni **try-except**, quindi per i gestori con la precedenza successiva più elevata.

   - EXCEPTION_EXECUTE_HANDLER (1) viene riconosciuta un'eccezione. Trasferire il controllo al gestore di eccezioni eseguendo l' **__except** istruzione composta, quindi continuare l'esecuzione dopo il blocco di **__except** .

Poiché l'espressione **__except** viene valutata come un'espressione C, è limitata a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola. Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.

Ogni applicazione può essere associata al proprio gestore di eccezioni.

Non è consentito passare a un'istruzione **__try** , ma è possibile uscire da una. Il gestore di eccezioni non viene chiamato se un processo viene terminato durante l'esecuzione di un'istruzione **try-except** .

Per compatibilità con le versioni precedenti, **_try**, **_except**e **_leave** sono sinonimi **di __try**, **__except**e **__leave** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

### <a name="the-__leave-keyword"></a>La parola chiave __leave

La parola chiave **__leave** è valida solo all'interno della sezione protetta di un'istruzione **try-except** e l'effetto è quello di passare alla fine della sezione protetta. L'esecuzione continua con la prima istruzione dopo il gestore dell'eccezione.

Un'istruzione **goto** può anche uscire dalla sezione sorvegliata e non comporta un peggioramento delle prestazioni come in un'istruzione **try-finally** perché la rimozione dello stack non viene eseguita. È tuttavia consigliabile usare la parola chiave **__leave** anziché un'istruzione **goto** perché è meno probabile che si crei un errore di programmazione se la sezione sorvegliata è di grandi dimensioni o complessa.

### <a name="structured-exception-handling-intrinsic-functions"></a>Funzioni intrinseche di gestione eccezioni strutturata

La gestione strutturata delle eccezioni fornisce due funzioni intrinseche disponibili per l'utilizzo con l'istruzione **try-except** : `GetExceptionCode` e `GetExceptionInformation`.

`GetExceptionCode` restituisce il codice (un intero a 32 bit) dell'eccezione.

La funzione intrinseca `GetExceptionInformation` restituisce un puntatore a una struttura contenente informazioni aggiuntive sull'eccezione. Tramite questo puntatore, è possibile accedere allo stato del computer esistente al momento di un'eccezione hardware. La struttura è analoga alla seguente:

```cpp
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
```

I tipi di puntatore `PEXCEPTION_RECORD` e `PCONTEXT` sono definiti nel file di inclusione \<Winnt. h > e `_EXCEPTION_RECORD` e `_CONTEXT` sono definiti nel file di inclusione \<excpt. h >

È possibile utilizzare `GetExceptionCode` all'interno del gestore di eccezioni. Tuttavia, è possibile utilizzare `GetExceptionInformation` solo nell'espressione di filtro eccezioni. Le informazioni che indica in genere sono nello stack e non sono più disponibili quando il controllo viene trasferito al gestore di eccezioni.

La funzione intrinseca `AbnormalTermination` è disponibile all'interno di un gestore di terminazione. Restituisce 0 se il corpo dell'istruzione **try-finally** termina in sequenza. In tutti gli altri casi, restituisce 1.

excpt. h definisce alcuni nomi alternativi per queste funzioni intrinseche:

`GetExceptionCode` equivale a `_exception_code`

`GetExceptionInformation` equivale a `_exception_info`

`AbnormalTermination` equivale a `_abnormal_termination`

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
