---
title: try-except Statement | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4d490f6bfb411f5ab0147e614813f8ff2bd084ce
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943311"
---
# <a name="try-except-statement"></a>Istruzione try-except

**Sezione specifica Microsoft**  
Il **try-tranne** istruzione è un'estensione Microsoft C e linguaggi di C++ che supporta la gestione delle eccezioni strutturata.  

## <a name="syntax"></a>Sintassi  
  
> **__try**   
> {  
>    codice controllato  
> }  
> **except** ( *espressione* )  
> {  
>    codice del gestore eccezioni  
> }  

## <a name="remarks"></a>Note

Il **try-tranne** istruzione è un'estensione Microsoft C e linguaggi di C++ che consente alle applicazioni di destinazione di ottenere il controllo quando si verificano eventi che generalmente terminano l'esecuzione del programma. Tali eventi vengono chiamati *eccezioni*, e viene chiamato il meccanismo che gestisce le eccezioni *gestione delle eccezioni strutturata* (SEH).

Per informazioni correlate, vedere la [istruzione try-finally](../cpp/try-finally-statement.md).

Le eccezioni possono essere basate sull'hardware o basate sul software. Anche quando le applicazioni non possono completamente recuperare le eccezioni hardware o software, la gestione delle eccezioni strutturata consente di visualizzare informazioni sugli errori e intercettare lo stato interno dell'applicazione per diagnosticare il problema. Ciò è particolarmente utile per i problemi saltuari che non possono essere riprodotti facilmente.

> [!NOTE]
> La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C++ e C. Tuttavia, non è progettato in particolare per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, la gestione eccezioni C++ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo. Per i programmi C++, è consigliabile usare il meccanismo di gestione delle eccezioni C++ ([try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md) istruzioni).

L'istruzione composta dopo la **try** clausola è il corpo o la sezione protetta. L'istruzione composta dopo la **except** clausola è il gestore di eccezioni. Il gestore specifica un set di azioni da intraprendere se viene generata un'eccezione durante l'esecuzione del corpo della sezione protetta. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

2. Se si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continua in corrispondenza dell'istruzione dopo il **except** clausola.  

3. Se si verifica un'eccezione durante l'esecuzione della sezione protetta o nelle routine chiamate dalla sezione protetta, il **except** *expression* (chiamato il *filtro* espressione) viene valutata e il valore determina come viene gestita l'eccezione. Sono disponibili tre valori:

   EXCEPTION_CONTINUE_EXECUTION (-1) eccezione viene chiusa. Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.

   Exception_continue_search (0) eccezione non viene riconosciuta. Continuare la ricerca dello stack per un gestore, prima per contenere le istruzioni **try-except**, quindi per i gestori con la precedenza successiva più elevata.

   Exception_execute_handler (1) l'eccezione viene riconosciuta. Trasferire il controllo al gestore eccezioni eseguendo il **except** istruzione composta, quindi continuare l'esecuzione dopo il **except** blocco.

Poiché il **except** espressione viene valutata come un'espressione C, è limitata a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola. Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.

Ogni applicazione può essere associata al proprio gestore di eccezioni.

Non è valido passare a un **try** istruzione, ma è valido uscire da uno. Il gestore di eccezioni non viene chiamato se un processo viene terminato nel corso dell'esecuzione una **try-tranne** istruzione.  
  
Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q315937: Procedura: Intercettare l'overflow dello stack nell'applicazione Visual C++.  
  
## <a name="the-leave-keyword"></a>La parola chiave __leave

Il **Leave** parola chiave è valida solo all'interno della sezione protetta di un **provare-tranne** istruzione e relativo effetto è il passaggio alla fine della sezione protetta. L'esecuzione continua con la prima istruzione dopo il gestore dell'eccezione.

Oggetto **goto** istruzione può inoltre uscire dalla sezione protetta e non le prestazioni, come accade in un **try-finally** istruzione perché la rimozione dello stack non è presente. Tuttavia, è consigliabile usare la **Leave** parola chiave anziché un **goto** istruzione perché si è meno probabile eseguire un errore di programmazione se la sezione protetta è grande o complessa.

### <a name="structured-exception-handling-intrinsic-functions"></a>Funzioni intrinseche di gestione eccezioni strutturata

Gestione eccezioni strutturata fornisce due funzioni intrinseche disponibili da usare con il **try-tranne** istruzione: `GetExceptionCode` e `GetExceptionInformation`.

`GetExceptionCode` Restituisce il codice (un numero intero a 32 bit) dell'eccezione.

La funzione intrinseca `GetExceptionInformation` restituisce un puntatore a una struttura contenente informazioni aggiuntive sull'eccezione. Tramite questo puntatore, è possibile accedere allo stato del computer esistente al momento di un'eccezione hardware. La struttura è la seguente:

```cpp  
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS; 
```  

I tipi di puntatori `PEXCEPTION_RECORD` e `PCONTEXT` sono definiti nel file di inclusione \<Winnt. h >, e `_EXCEPTION_RECORD` e `_CONTEXT` sono definiti nel file di inclusione \<excpt. h >

È possibile usare `GetExceptionCode` all'interno del gestore di eccezioni. Tuttavia, è possibile usare `GetExceptionInformation` solo all'interno dell'espressione di filtro eccezioni. Le informazioni che indica in genere sono nello stack e non sono più disponibili quando il controllo viene trasferito al gestore di eccezioni.

La funzione intrinseca `AbnormalTermination` è disponibile all'interno di un gestore di terminazione. Restituisce 0 se il corpo del **try-finally** istruzione termina in modo sequenziale. In tutti gli altri casi, restituisce 1.

excpt. h definisce alcuni nomi alternativi per questi intrinseci:

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
  
## <a name="output"></a>Output  
  
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

[La scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)   
[Parole chiave](../cpp/keywords-cpp.md)
