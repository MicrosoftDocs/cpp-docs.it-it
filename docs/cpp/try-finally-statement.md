---
title: Istruzione try-finally
ms.date: 11/19/2018
f1_keywords:
- __try
- _try
- __leave_cpp
- __leave
- __finally_cpp
- __try_cpp
- __finally
- _finally
helpviewer_keywords:
- __try keyword [C++]
- __finally keyword [C++]
- __leave keyword [C++]
- try-catch keyword [C++], try-finally keyword
- try-finally keyword [C++]
- __finally keyword [C++], try-finally statement syntax
- __leave keyword [C++], try-finally statement
- structured exception handling [C++], try-finally
ms.assetid: 826e0347-ddfe-4f6e-a7bc-0398e0edc7c2
ms.openlocfilehash: 17f7fb415303ab74f588a2205bc9430127091e96
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825896"
---
# <a name="try-finally-statement"></a>Istruzione try-finally

**Specifico di Microsoft**

Nella sintassi seguente viene descritta l'istruzione **try-finally** :

> **\_\_provare**<br/>
> {\
> &nbsp;&nbsp;&nbsp;&nbsp;codice sorvegliato \
> }\
> **\_\_Infine**\
> {\
> &nbsp;&nbsp;&nbsp;&nbsp;codice di terminazione \
> }

## <a name="grammar"></a>Grammatica

*try-finally-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;try Compound *-* **statement \_ \_** *-Statement* ** \_ \_**

L'istruzione **try-finally** è un'estensione Microsoft dei linguaggi C e C++ che consente alle applicazioni di destinazione di garantire l'esecuzione del codice di pulizia quando l'esecuzione di un blocco di codice viene interrotta. La pulizia è costituita da attività quali la deallocazione della memoria, la chiusura dei file e il rilascio di handle di file. L'istruzione **try-finally** è particolarmente utile per le routine che presentano diverse posizioni in cui viene effettuato un controllo per un errore che può causare un ritorno prematuro dalla routine.

Per informazioni correlate e un esempio di codice, vedere [istruzione try-except](../cpp/try-except-statement.md). Per ulteriori informazioni sulla gestione delle eccezioni strutturata in generale, vedere [gestione delle eccezioni strutturata](../cpp/structured-exception-handling-c-cpp.md). Per ulteriori informazioni sulla gestione delle eccezioni nelle applicazioni gestite con C++/CLI, vedere [gestione delle eccezioni in/CLR](../extensions/exception-handling-cpp-component-extensions.md).

> [!NOTE]
> La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C++ e C. Tuttavia, non è progettato in particolare per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, la gestione eccezioni C++ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo. Per i programmi C++, è consigliabile usare il meccanismo di gestione delle eccezioni C++ (istruzioni[try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md) ).

L'istruzione composta dopo la clausola **__try** è la sezione protetta. L'istruzione composta dopo la clausola **__finally** è il gestore di terminazione. Il gestore specifica un set di azioni che vengono eseguite quando la sezione protetta viene terminata, indipendentemente dal fatto che tale sezione venga terminata da un'eccezione (terminazione anomala) o da un passaggio standard (terminazione normale).

Il controllo raggiunge un'istruzione **__try** dall'esecuzione sequenziale semplice (passaggio). Quando il controllo entra nel **__try**, il gestore associato diventa attivo. Se il flusso di controllo raggiunge la fine del blocco try, l'esecuzione continua come segue:

1. Il gestore terminazioni viene richiamato.

1. Al termine del gestore terminazioni, l'esecuzione continua dopo l'istruzione **__finally** . Indipendentemente dal modo in cui la sezione protetta termina (ad esempio, tramite un **goto** fuori dal corpo sorvegliato o un'istruzione **Return** ), il gestore terminazioni viene eseguito *prima* che il flusso di controllo venga spostato all'esterno della sezione protetta.

   Un'istruzione **__finally** non blocca la ricerca di un gestore di eccezioni appropriato.

Se si verifica un'eccezione nel blocco **__try** , il sistema operativo deve trovare un gestore per l'eccezione o il programma avrà esito negativo. Se viene trovato un gestore, vengono eseguiti tutti i blocchi **__finally** e l'esecuzione riprende nel gestore.

Si supponga ad esempio che una serie di chiamate di funzione colleghi la funzione A alla funzione D, come illustrato di seguito. Ogni funzione dispone di un gestore di terminazione. Se un'eccezione viene generata nella funzione D e gestita in A, i gestori di terminazione, man mano che il sistema rimuove lo stack, vengono chiamati nell'ordine seguente: D, C, B.

![Ordine di chiusura dell'esecuzione del gestore&#45;](../cpp/media/vc38cx1.gif "Ordine di chiusura dell'esecuzione del gestore&#45;") <br/>
Ordine di terminazione esecuzione del gestore

> [!NOTE]
> Il comportamento di try-finally è diverso da altri linguaggi che supportano l'uso di **finally**, ad esempio C#.  Una singola **__try** può includere, ma non entrambi, **__finally** e **__except**.  Se entrambi devono essere utilizzati insieme, un'istruzione try-except deve racchiudere l'istruzione try-finally interna.  Sono diverse anche le regole che specificano quando viene eseguito ciascun blocco.

Per compatibilità con le versioni precedenti, **_try**, **_finally**e **_leave** sono sinonimi **di __try**, **__finally**e **__leave** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="the-__leave-keyword"></a>La parola chiave __leave

La parola chiave **__leave** è valida solo all'interno della sezione protetta di un'istruzione **try-finally** e l'effetto è quello di passare alla fine della sezione protetta. L'esecuzione continua con la prima istruzione nel gestore di terminazione.

Un'istruzione **goto** può anche uscire dalla sezione sorvegliata, ma peggiora le prestazioni perché richiama la rimozione dello stack. L'istruzione **__leave** è più efficiente perché non causa la rimozione dello stack.

## <a name="abnormal-termination"></a>Terminazione anomala

L'uscita da un'istruzione **try-finally** utilizzando la funzione di runtime [longjmp](../c-runtime-library/reference/longjmp.md) viene considerata una terminazione anomala. Non è consentito passare a un'istruzione **__try** , ma è lecito uscire da una. Devono essere eseguite tutte le istruzioni **__finally** attive tra il punto di partenza (terminazione normale del blocco di **__try** ) e la destinazione (il blocco **__except** che gestisce l'eccezione). Si tratta di una rimozione locale.

Se un blocco **try** viene terminato prematuramente per qualsiasi motivo, incluso un salto fuori dal blocco, il sistema esegue il blocco **finally** associato come parte del processo di rimozione dello stack. In questi casi, la funzione [AbnormalTermination](/windows/win32/Debug/abnormaltermination) restituisce **true** se viene chiamata dall'interno del blocco **finally** . in caso contrario, restituisce **false**.

Il gestore terminazioni non viene chiamato se un processo viene terminato durante l'esecuzione di un'istruzione **try-finally** .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Sintassi del gestore di terminazione](/windows/win32/Debug/termination-handler-syntax)
