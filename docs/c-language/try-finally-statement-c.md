---
title: Istruzione try-finally (C)
description: Microsoft C/C++ implementa la gestione delle eccezioni strutturata (SEH) utilizzando un'estensione del linguaggio di istruzione try-finally.
ms.date: 08/24/2020
helpviewer_keywords:
- try-finally keyword [C]
- __finally keyword [C], try-finally statement syntax
- __finally keyword [C]
- structured exception handling, try-finally
ms.assetid: 514400c1-c322-4bf3-9e48-3047240b8a82
ms.openlocfilehash: 6f9cf901ed0a82b355880225c902ec4fc3e1082b
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898708"
---
# <a name="try-finally-statement-c"></a>Istruzione try-finally (C)

**Specifiche di Microsoft**

L'istruzione `try-finally` è un'estensione Microsoft del linguaggio C che consente alle applicazioni di garantire l'esecuzione del codice di pulizia quando l'esecuzione di un blocco di codice viene interrotta. La pulizia è costituita da attività quali la deallocazione della memoria, la chiusura dei file e il rilascio di handle di file. L'istruzione `try-finally` è particolarmente utile per le routine che presentano vari punti in cui viene eseguito un controllo per verificare la presenza di un errore che potrebbe causare la restituzione prematura dalla routine.

> *`try-finally-statement`*:\
> &emsp;**`__try`** *`compound-statement`* **`__finally`** *`compound-statement`*

L'istruzione composta dopo la **`__try`** clausola è la sezione protetta. L'istruzione composta dopo la **`__finally`** clausola è il gestore di terminazione. Il gestore specifica un set di azioni che vengono eseguite quando la sezione protetta viene chiusa. Non è importante se la sezione protetta viene chiusa da un'eccezione (terminazione anomala) o dal passaggio standard (terminazione normale).

Il controllo raggiunge un' **`__try`** istruzione mediante un'esecuzione sequenziale semplice (passaggio). Quando il controllo entra nell' **`__try`** istruzione, il relativo gestore associato diventa attivo. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

1. Il gestore terminazioni viene richiamato.

1. Al termine del gestore terminazioni, l'esecuzione continua dopo l' **`__finally`** istruzione. Indipendentemente dal modo in cui termina la sezione protetta, ad esempio tramite un' **`goto`** istruzione all'esterno del corpo sorvegliato o tramite un' **`return`** istruzione, il gestore terminazioni viene eseguito prima che il flusso di controllo venga spostato all'esterno della sezione protetta.

La **`__leave`** parola chiave è valida all'interno di un `try-finally` blocco di istruzioni. L'effetto di **`__leave`** è di passare alla fine del `try-finally` blocco. Il gestore terminazioni viene eseguito immediatamente. Sebbene sia **`goto`** possibile utilizzare un'istruzione per ottenere lo stesso risultato, un' **`goto`** istruzione causa la rimozione dello stack. L' **`__leave`** istruzione è più efficiente perché non comporta la rimozione dello stack.

L'uscita da un' `try-finally` istruzione mediante un' **`return`** istruzione o la `longjmp` funzione di runtime viene considerata una terminazione anomala. Non è consentito passare a un' **`__try`** istruzione, ma è lecito uscire da un'istruzione. **`__finally`** Devono essere eseguite tutte le istruzioni attive tra il punto di partenza e la destinazione. Viene chiamato *rimozione locale*.

Il gestore terminazioni non viene chiamato se un processo viene terminato durante l'esecuzione di un' `try-finally` istruzione.

> [!NOTE]
> La gestione strutturata delle eccezioni funziona con i file di origine C e C++. Tuttavia, non è progettato in modo specifico per C++. Per i programmi C++ portabili, è consigliabile utilizzare la gestione delle eccezioni C++ anziché la gestione strutturata delle eccezioni. Inoltre, il meccanismo di gestione delle eccezioni di C++ è molto più flessibile, in quanto è in grado di gestire eccezioni di qualsiasi tipo. Per ulteriori informazioni, vedere [gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md) in *riferimenti al linguaggio C++*.

Vedere l'esempio relativo all' [ `try-except` istruzione](../c-language/try-except-statement-c.md) per visualizzare il `try-finally` funzionamento dell'istruzione.

**FINE specifica di Microsoft**

## <a name="see-also"></a>Vedere anche

[`try-finally` istruzione (C++)](../cpp/try-finally-statement.md)
