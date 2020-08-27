---
title: Istruzione try-except (C)
description: Microsoft C/C++ implementa la gestione delle eccezioni strutturata (SEH) utilizzando un'estensione del linguaggio di istruzione try-except.
ms.date: 08/24/2020
helpviewer_keywords:
- try-except keyword [C]
- structured exception handling, try-except
- try-catch keyword [C]
- __try keyword [C]
- __except keyword [C]
- __except keyword [C], in try-except
- try-catch keyword [C], try-except keyword [C]
ms.assetid: f76db9d1-fc78-417f-b71f-18e545fc01c3
ms.openlocfilehash: e327150431fef3384f2b98940939444b2e6d96ea
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898719"
---
# <a name="try-except-statement-c"></a>Istruzione try-except (C)

**Specifiche di Microsoft**

L' `try-except` istruzione è un'estensione Microsoft del linguaggio C che consente alle applicazioni di ottenere il controllo di un programma quando si verificano eventi che normalmente terminano l'esecuzione. Tali eventi vengono chiamati eccezioni e il meccanismo che tratta le eccezioni viene chiamato gestione delle eccezioni strutturate.

Le eccezioni possono essere basate su hardware o software. Anche quando le applicazioni non possono recuperare completamente le eccezioni hardware o software, la gestione strutturata delle eccezioni rende possibile la registrazione e la visualizzazione delle informazioni sugli errori. È utile per intercettare lo stato interno dell'applicazione per facilitare la diagnosi del problema. In particolare, è utile per i problemi intermittenti che non sono facili da riprodurre.

## <a name="syntax"></a>Sintassi

> *`try-except-statement`*:\
> &emsp;**`__try`** *`compound-statement`* **`__except (`**  *`expression`*  **`)`** *`compound-statement`*

L'istruzione composta dopo la **`__try`** clausola è la *sezione protetta*. L'istruzione composta dopo la **`__except`** clausola è il *gestore di eccezioni*. Il gestore specifica un set di azioni da intraprendere se viene generata un'eccezione durante l'esecuzione della sezione protetta. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

1. Se non si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continua in corrispondenza dell'istruzione dopo la **`__except`** clausola.

1. Se si verifica un'eccezione durante l'esecuzione della sezione protetta o nelle routine chiamate dalla sezione protetta, l' **`__except`** espressione viene valutata. Il valore restituito determina come viene gestita l'eccezione. I tre valori possibili sono:

   - `EXCEPTION_CONTINUE_SEARCH`: L'eccezione non è riconosciuta. Continuare la ricerca dello stack per un gestore, innanzitutto per le `try-except` istruzioni contenitore, quindi per i gestori con la precedenza più alta.

   - `EXCEPTION_CONTINUE_EXECUTION`: L'eccezione viene riconosciuta ma è stata rilasciata. Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.

   - `EXCEPTION_EXECUTE_HANDLER` L'eccezione viene riconosciuta. Trasferire il controllo al gestore eccezioni eseguendo l' **`__except`** istruzione composta, quindi continuare l'esecuzione nel punto in cui si è verificata l'eccezione.

Poiché l' **`__except`** espressione viene valutata come un'espressione C, è limitata a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola. Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.

> [!NOTE]
> La gestione strutturata delle eccezioni funziona con i file di origine C e C++. Tuttavia, non è progettato in modo specifico per C++. Per i programmi C++ portabili, è consigliabile utilizzare la gestione delle eccezioni C++ anziché la gestione strutturata delle eccezioni. Inoltre, il meccanismo di gestione delle eccezioni di C++ è molto più flessibile, in quanto è in grado di gestire eccezioni di qualsiasi tipo. Per ulteriori informazioni, vedere [gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md) in *riferimenti al linguaggio C++*.

Ogni routine in un'applicazione può essere associata al proprio gestore eccezioni. L' **`__except`** espressione viene eseguita nell'ambito del **`__try`** corpo. Ha accesso a tutte le variabili locali dichiarate in tale posizione.

La **`__leave`** parola chiave è valida all'interno di un `try-except` blocco di istruzioni. L'effetto di **`__leave`** è di passare alla fine del `try-except` blocco. L'esecuzione riprende dopo la fine del gestore eccezioni. Sebbene sia **`goto`** possibile utilizzare un'istruzione per ottenere lo stesso risultato, un' **`goto`** istruzione causa la rimozione dello stack. L' **`__leave`** istruzione è più efficiente perché non comporta la rimozione dello stack.

L'uscita da un' `try-except` istruzione mediante la `longjmp` funzione di runtime viene considerata una terminazione anomala. Non è consentito passare a un' **`__try`** istruzione, ma è lecito saltarne una. Il gestore di eccezioni non viene chiamato se un processo viene terminato durante l'esecuzione di un' `try-except` istruzione.

## <a name="example"></a>Esempio

Di seguito è riportato un esempio di un gestore di eccezioni e di un gestore di terminazione. Per ulteriori informazioni sui gestori di terminazione, vedere l' [ `try-finally` istruzione (C)](../c-language/try-finally-statement-c.md).

```C
.
.
.
puts("hello");
__try {
   puts("in try");
   __try {
      puts("in try");
      RAISE_AN_EXCEPTION();
   } __finally {
      puts("in finally");
   }
} __except( puts("in filter"), EXCEPTION_EXECUTE_HANDLER ) {
   puts("in except");
}
puts("world");
```

Di seguito è riportato l'output dell'esempio, con il commento aggiunto a destra:

```Output
hello
in try              /* fall into try                        */
in try              /* fall into nested try                 */
in filter           /* execute filter; returns 1 so accept  */
in finally          /* unwind nested finally                */
in except           /* transfer control to selected handler */
world               /* flow out of handler                  */
```

**FINE specifica di Microsoft**

## <a name="see-also"></a>Vedere anche

[`try-except` istruzione (C++)](../cpp/try-except-statement.md)
