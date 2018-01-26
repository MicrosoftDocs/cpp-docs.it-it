---
title: Provare-except Statement | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _abnormal_termination_cpp
- _exception_code_cpp
- EXCEPTION_CONTINUE_SEARCH
- _exception_info
- __except
- EXCEPTION_CONTINUE_EXECUTION
- _exception_code
- __except_cpp
- _exception_info_cpp
- EXCEPTION_EXECUTE_HANDLER
- _abnormal_termination
dev_langs: C++
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
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 24be4e7fd6b4dc95d9964e69943a94ecad947a47
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="try-except-statement"></a>Istruzione try-except

**Sezione specifica Microsoft**  
Il **provare-tranne** istruzione è un'estensione Microsoft c e linguaggi C++ che supporta la gestione delle eccezioni strutturata.  

## <a name="syntax"></a>Sintassi  
  
> **__try**   
> {  
>    codice controllato  
> }  
> **__except** ( *expression* )  
> {  
>    codice del gestore eccezioni  
> }  

## <a name="remarks"></a>Note

Il **provare-tranne** istruzione è un'estensione Microsoft c e linguaggi C++ che consente alle applicazioni di destinazione di ottenere il controllo quando si verificano eventi che generalmente terminano l'esecuzione del programma. Tali eventi vengono chiamati *eccezioni*, e il meccanismo che tratta le eccezioni viene chiamato *gestione delle eccezioni strutturata* (SEH).

Per informazioni correlate, vedere il [istruzione try-finally](../cpp/try-finally-statement.md).

Le eccezioni possono essere basate sull'hardware o basate sul software. Anche quando le applicazioni non possono completamente recuperare le eccezioni hardware o software, la gestione delle eccezioni strutturata consente di visualizzare informazioni sugli errori e intercettare lo stato interno dell'applicazione per diagnosticare il problema. Ciò è particolarmente utile per i problemi saltuari che non possono essere riprodotti facilmente.

> [!NOTE]
> La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C++ e C. Tuttavia, non è progettato in particolare per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, la gestione eccezioni C++ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo. Per i programmi C++, è consigliabile utilizzare il meccanismo di gestione delle eccezioni C++ ([try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md) istruzioni).

L'istruzione composta dopo la clausola `__try` è il corpo o la sezione protetta. L'istruzione composta dopo la clausola `__except` è il gestore dell'eccezione. Il gestore specifica un set di azioni da intraprendere se viene generata un'eccezione durante l'esecuzione del corpo della sezione protetta. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

2. Se non si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continuerà nell'istruzione dopo la clausola `__except`.  

3. Se si verifica un'eccezione durante l'esecuzione della sezione protetta o in qualsiasi routine chiamate dalla sezione protetta, il `__except` *espressione* (chiamata di *filtro* espressione) viene valutata e il valore Determina come viene gestita l'eccezione. Sono disponibili tre valori:

   **EXCEPTION_CONTINUE_EXECUTION (-1)** eccezione viene chiusa. Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.

   **Exception_continue_search (0)** eccezione non viene riconosciuta. Continuare la ricerca dello stack per un gestore, prima per contenere le istruzioni **try-except**, quindi per i gestori con la precedenza successiva più elevata.

   **Exception_execute_handler (1)** l'eccezione viene riconosciuta. Trasferire il controllo al gestore eccezioni eseguendo l'istruzione composta `__except`, quindi continuare l'esecuzione dopo il blocco `__except`.

Poiché l'espressione `__except` viene valutata come un'espressione C, è limitata a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola. Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.

Ogni applicazione può essere associata al proprio gestore di eccezioni.

Non è valido passare a un'istruzione `__try`, ma è valido uscire da una. Il gestore di eccezioni non viene chiamato se un processo viene terminato nel corso dell'esecuzione un **provare-tranne** istruzione.  
  
Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q315937: Procedura: Intercettare l'overflow dello stack nell'applicazione Visual C++.  
  
## <a name="the-leave-keyword"></a>La parola chiave __leave

Il `__leave` parola chiave è valida solo nella sezione protetta di un **provare-tranne** istruzione e il relativo effetto consiste nel passare alla fine della sezione protetta. L'esecuzione continua con la prima istruzione dopo il gestore dell'eccezione.

Oggetto `goto` istruzione può inoltre passare dalla sezione protetta e non le prestazioni a quanto accade un **try-finally** istruzione perché la rimozione dello stack non è presente. Tuttavia, è consigliabile utilizzare la parola chiave `__leave` anziché un'istruzione `goto` perché è meno probabile eseguire un errore di programmazione se la sezione protetta è grande o complessa.

### <a name="structured-exception-handling-intrinsic-functions"></a>Funzioni intrinseche di gestione eccezioni strutturata

Gestione delle eccezioni strutturata fornisce due funzioni intrinseche disponibili per l'utilizzo di **provare-tranne** istruzione: `GetExceptionCode` e `GetExceptionInformation`.

`GetExceptionCode`Restituisce il codice (un intero a 32 bit) dell'eccezione.

La funzione intrinseca `GetExceptionInformation` restituisce un puntatore a una struttura contenente informazioni aggiuntive sull'eccezione. Tramite questo puntatore, è possibile accedere allo stato del computer esistente al momento di un'eccezione hardware. La struttura è la seguente:

```cpp  
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS; 
```  

I tipi di puntatore `PEXCEPTION_RECORD` e `PCONTEXT` sono definiti nel file di inclusione \<Winnt. h >, e `_EXCEPTION_RECORD` e `_CONTEXT` sono definiti nel file di inclusione \<excpt. h >

È possibile utilizzare `GetExceptionCode` all'interno del gestore di eccezioni. Tuttavia, è possibile utilizzare `GetExceptionInformation` solo all'interno di espressione di filtro eccezioni. Le informazioni che indica in genere sono nello stack e non sono più disponibili quando il controllo viene trasferito al gestore di eccezioni.

La funzione intrinseca `AbnormalTermination` è disponibile all'interno di un gestore di terminazione. Restituisce 0 se il corpo del **try-finally** istruzione termina in modo sequenziale. In tutti gli altri casi, restituisce 1.

excpt. h definisce alcuni nomi alternativi per questi intrinseci:

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
  
## <a name="output"></a>Output  
  
```  
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

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
[Strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)   
[Parole chiave](../cpp/keywords-cpp.md)
