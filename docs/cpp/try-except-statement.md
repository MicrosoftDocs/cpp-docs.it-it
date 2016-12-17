---
title: "Istruzione try-except | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_abnormal_termination_cpp"
  - "_exception_code_cpp"
  - "EXCEPTION_CONTINUE_SEARCH"
  - "_exception_info"
  - "__except"
  - "EXCEPTION_CONTINUE_EXECUTION"
  - "_exception_code"
  - "__except_cpp"
  - "_exception_info_cpp"
  - "EXCEPTION_EXECUTE_HANDLER"
  - "_abnormal_termination"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__try (parola chiave) [C++]"
  - "_abnormal_termination (parola chiave) [C++]"
  - "_exception_code (parola chiave) [C++]"
  - "_exception_info (parola chiave) [C++]"
  - "EXCEPTION_CONTINUE_EXECUTION (macro)"
  - "EXCEPTION_CONTINUE_SEARCH (macro)"
  - "EXCEPTION_EXECUTE_HANDLER (macro)"
  - "GetExceptionCode (funzione)"
  - "try-catch (parola chiave) [C++], try-except (parola chiave) [C++]"
  - "try-except (parola chiave) [C++]"
ms.assetid: 30d60071-ea49-4bfb-a8e6-7a420de66381
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione try-except
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Di seguito è riportata la sintassi dell'istruzione try\-except:  
  
## Sintassi  
  
```  
  
      __try   
{  
   // guarded code  
}  
__except ( expression )  
{  
   // exception handler code  
}  
```  
  
## Note  
 L'istruzione **try\-except** è un'estensione Microsoft dei linguaggi C e C\+\+ che consentono alle applicazioni di destinazione di ottenere il controllo quando si verificano gli eventi che generalmente terminano l'esecuzione del programma.  Tali eventi vengono chiamati eccezioni e il meccanismo che tratta le eccezioni viene chiamato gestione delle eccezioni strutturate.  
  
 Per informazioni correlate, vedere l'[istruzione try\-finally](../cpp/try-finally-statement.md).  
  
 Le eccezioni possono essere basate sull'hardware o basate sul software.  Anche quando le applicazioni non possono completamente recuperare le eccezioni hardware o software, la gestione delle eccezioni strutturata consente di visualizzare informazioni sugli errori e intercettare lo stato interno dell'applicazione per diagnosticare il problema.  Ciò è particolarmente utile per i problemi saltuari che non possono essere riprodotti facilmente.  
  
> [!NOTE]
>  La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C\+\+ e C.  Tuttavia, non è progettato in particolare per C\+\+.  È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C\+\+.  Inoltre, la gestione eccezioni C\+\+ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo.  Per i programmi C\+\+, si consiglia di utilizzare il meccanismo di gestione delle eccezioni C\+\+ \(istruzioni [try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md)\).  
  
 L'istruzione composta dopo la clausola `__try` è il corpo o la sezione protetta.  L'istruzione composta dopo la clausola `__except` è il gestore dell'eccezione.  Il gestore specifica un set di azioni da intraprendere se viene generata un'eccezione durante l'esecuzione del corpo della sezione protetta.  L'esecuzione procede nel modo seguente:  
  
1.  La sezione protetta viene eseguita.  
  
2.  Se non si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continuerà nell'istruzione dopo la clausola `__except`.  
  
3.  Se si verifica un'eccezione durante l'esecuzione della sezione protetta o nelle routine chiamata dalla sezione protetta, `__except` *expression*\(chiamata espressione *filter*\) viene valutata e il valore determina come viene gestita l'eccezione.  Vi sono tre valori:  
  
     **EXCEPTION\_CONTINUE\_EXECUTION \(–1\)** L'eccezione viene chiusa.  Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.  
  
     **EXCEPTION\_CONTINUE\_SEARCH \(0\)** L'eccezione non viene riconosciuta.  Continuare la ricerca dello stack per un gestore, anzitutto per contenere le istruzioni **try\-except**, quindi per i gestori con la precedenza successiva più elevata.  
  
     **EXCEPTION\_EXECUTE\_HANDLER \(1\)** L'eccezione è riconosciuta.  Trasferire il controllo al gestore eccezioni eseguendo l'istruzione composta `__except`, quindi continuare l'esecuzione dopo il blocco `__except`.  
  
 Poiché l'espressione \_\_**except** viene valutata come un'espressione di tipo C, è limitata a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola.  Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.  
  
 Ogni applicazione può essere associata al proprio gestore di eccezioni.  
  
 Non è valido passare a un'istruzione `__try`, ma è valido uscire da una.  Il gestore dell'eccezione non viene chiamato se un processo viene terminato nel corso dell'esecuzione di un'istruzione **try\-except**.  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q315937: Procedura: Intercettare l'overflow dello stack nell'applicazione Visual C\+\+.  
  
## La parola chiave \_\_leave  
 La parola chiave `__leave` è valida solo nella sezione protetta di un'istruzione `try-except` e consente di passare alla fine della sezione protetta.  L'esecuzione continua con la prima istruzione dopo il gestore dell'eccezione.  
  
 Un'istruzione `goto` può inoltre uscire dalla sezione protetta e ciò non comporta una riduzione delle prestazioni come in un'istruzione `try-finally` poiché non si verifica la rimozione dello stack.  Tuttavia, è consigliabile utilizzare la parola chiave `__leave` anziché un'istruzione `goto` perché è meno probabile eseguire un errore di programmazione se la sezione protetta è grande o complessa.  
  
### Funzioni intrinseche di gestione eccezioni strutturata  
 La gestione eccezioni strutturata fornisce inoltre due funzioni intrinseche disponibili per l'utilizzo con l'istruzione **try\-except**: **GetExceptionCode** e **GetExceptionInformation**.  
  
 **GetExceptionCode** restituisce il codice \(un numero intero a 32 bit\) dell'eccezione.  
  
 La funzione intrinseca **GetExceptionInformation** restituisce un puntatore a una struttura che contiene altre informazioni sull'eccezione.  Tramite questo puntatore, è possibile accedere allo stato del computer esistente al momento di un'eccezione hardware.  La struttura è la seguente:  
  
```  
struct _EXCEPTION_POINTERS {  
      EXCEPTION_RECORD *ExceptionRecord,  
      CONTEXT *ContextRecord }  
```  
  
 I tipi di puntatore \_**EXCEPTION\_RECORD** e \_**CONTEXT** sono definiti nel file di inclusione EXCPT.H.  
  
 È possibile utilizzare **GetExceptionCode** all'interno del gestore di eccezioni.  Tuttavia, è possibile utilizzare **GetExceptionInformation** solo all'interno dell'espressione di filtro eccezioni.  Le informazioni che indica in genere sono nello stack e non sono più disponibili quando il controllo viene trasferito al gestore di eccezioni.  
  
 La funzione intrinseca **AbnormalTermination** è disponibile in un gestore di terminazione.  Restituisce 0 se il corpo dell'istruzione `try-finally` termina in sequenza.  In tutti gli altri casi, restituisce 1.  
  
 EXCPT.H definisce alcuni nomi alternativi per questi intrinseci:  
  
 **GetExceptionCode** è equivalente a \_exception\_code  
  
 **GetExceptionInformation** è equivalente a \_exception\_info  
  
 **AbnormalTermination** è equivalente a \_abnormal\_termination  
  
## Esempio  
 `// exceptions_try_except_Statement.cpp`  
  
 `// Example of try-except and try-finally statements`  
  
 `#include <stdio.h>`  
  
 `#include <windows.h> // for EXCEPTION_ACCESS_VIOLATION`  
  
 `#include <excpt.h>`  
  
 `int filter(unsigned int code, struct _EXCEPTION_POINTERS *ep) {`  
  
 `puts("in filter.");`  
  
 `if (code == EXCEPTION_ACCESS_VIOLATION) {`  
  
 `puts("caught AV as expected.");`  
  
 `return EXCEPTION_EXECUTE_HANDLER;`  
  
 `}`  
  
 `else {`  
  
 `puts("didn't catch AV, unexpected.");`  
  
 `return EXCEPTION_CONTINUE_SEARCH;`  
  
 `};`  
  
 `}`  
  
 `int main()`  
  
 `{`  
  
 `int* p = 0x00000000;   // pointer to NULL`  
  
 `puts("hello");`  
  
 `__try{`  
  
 `puts("in try");`  
  
 `__try{`  
  
 `puts("in try");`  
  
 `*p = 13;    // causes an access violation exception;`  
  
 `}__finally{`  
  
 `puts("in finally. termination: ");`  
  
 `puts(AbnormalTermination() ? "\tabnormal" : "\tnormal");`  
  
 `}`  
  
 `}__except(filter(GetExceptionCode(), GetExceptionInformation())){`  
  
 `puts("in except");`  
  
 `}`  
  
 `puts("world");`  
  
 `}`  
  
## Output  
  
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
  
## Vedere anche  
 [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)