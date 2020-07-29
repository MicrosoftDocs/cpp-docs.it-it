---
title: Istruzione try-finally (C)
ms.date: 11/04/2016
helpviewer_keywords:
- try-finally keyword [C]
- __finally keyword [C], try-finally statement syntax
- __finally keyword [C]
- structured exception handling, try-finally
ms.assetid: 514400c1-c322-4bf3-9e48-3047240b8a82
ms.openlocfilehash: b800daa7689cef769ce3a3b070c957f18e8794c9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213710"
---
# <a name="try-finally-statement-c"></a>Istruzione try-finally (C)

**Specifico di Microsoft**

L'istruzione `try-finally` è un'estensione Microsoft del linguaggio C che consente alle applicazioni di garantire l'esecuzione del codice di pulizia quando l'esecuzione di un blocco di codice viene interrotta. La pulizia è costituita da attività quali la deallocazione della memoria, la chiusura dei file e il rilascio di handle di file. L'istruzione `try-finally` è particolarmente utile per le routine che presentano vari punti in cui viene eseguito un controllo per verificare la presenza di un errore che potrebbe causare la restituzione prematura dalla routine.

*try-finally-statement*: **__try**  *compound-statement*

**`__finally`**  *compound-statement*

L'istruzione composta dopo la clausola `__try` è la sezione protetta. L'istruzione composta dopo la **`__finally`** clausola è il gestore di terminazione. Il gestore specifica un set di azioni che vengono eseguite quando la sezione protetta viene terminata, indipendentemente dal fatto che tale terminazione avvenga tramite un'eccezione (terminazione anomala) o un passaggio standard (terminazione normale).

Il controllo raggiunge un'istruzione `__try` tramite l'esecuzione sequenziale semplice (passaggio). Quando il controllo entra nell'istruzione `__try`, il relativo gestore associato diventa attivo. L'esecuzione procede nel modo seguente:

1. La sezione protetta viene eseguita.

1. Il gestore terminazioni viene richiamato.

1. Al termine del gestore terminazioni, l'esecuzione continua dopo l' **`__finally`** istruzione. Indipendentemente dal modo in cui termina la sezione protetta, ad esempio tramite un' **`goto`** istruzione all'esterno del corpo sorvegliato o tramite un' **`return`** istruzione, il gestore terminazioni viene eseguito prima che il flusso di controllo venga spostato all'esterno della sezione protetta.

Il ** `__leave** keyword is valid within a ` ` statement block. The effect of **` __leave try-finally** consiste nel passare alla fine del `try-finally` blocco. Il gestore terminazioni viene eseguito immediatamente. Sebbene sia **`goto`** possibile utilizzare un'istruzione per ottenere lo stesso risultato, un' **`goto`** istruzione causa la rimozione dello stack. L'istruzione **' __leave** è più efficiente perché non comporta la rimozione dello stack.

L'uscita da un' `try-finally` istruzione mediante un' **`return`** istruzione o la `longjmp` funzione di runtime viene considerata una terminazione anomala. Il passaggio a un'istruzione `__try` non è un'operazione valida, mentre uscire da un'istruzione è consentito. **`__finally`** Devono essere eseguite tutte le istruzioni attive tra il punto di partenza e la destinazione. Questo procedimento è denominato "rimozione locale."

Il gestore terminazioni non viene chiamato se un processo viene terminato durante l'esecuzione di un'istruzione `try-finally`.

> [!NOTE]
> La gestione strutturata delle eccezioni funziona con i file di origine C e C++. Tuttavia, non è progettato in particolare per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, il meccanismo di gestione delle eccezioni di C++ è molto più flessibile, in quanto è in grado di gestire eccezioni di qualsiasi tipo.

> [!NOTE]
> Per i programmi C++, è necessario utilizzare la gestione delle eccezioni C++ anziché la gestione delle eccezioni strutturata. Per altre informazioni, vedere [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md) in *Riferimenti al linguaggio C++*.

Vedere l'esempio relativo all'[istruzione try-except](../c-language/try-except-statement-c.md) per vedere come funziona l'istruzione `try-finally`.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Istruzione try-finally](../cpp/try-finally-statement.md)
