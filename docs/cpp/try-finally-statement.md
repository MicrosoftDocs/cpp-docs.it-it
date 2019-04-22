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
ms.openlocfilehash: d2a1c63f686b46aad4e174c86895f6f9fc00d260
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58778338"
---
# <a name="try-finally-statement"></a>Istruzione try-finally

**Sezione specifica Microsoft**

La sintassi seguente vengono descritte le **try-finally** istruzione:

> **\_\_try**<br/>
> {<br/>
> &nbsp;&nbsp;&nbsp;&nbsp;codice controllato<br/>
> }<br/>
> **\_\_Infine**<br/>
> {<br/>
> &nbsp;&nbsp;&nbsp;&nbsp;codice di terminazione<br/>
> }<br/>

## <a name="grammar"></a>Grammatica

*try-finally-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\_\_try** *compound-statement* **\_\_finally** *compound-statement*

Il **try-finally** istruzione è un'estensione Microsoft ai linguaggi C e C++ che consente alle applicazioni di destinazione di garantire l'esecuzione del codice di pulizia quando l'esecuzione di un blocco di codice viene interrotta. La pulizia è costituita da attività quali la deallocazione della memoria, la chiusura dei file e il rilascio di handle di file. Il **try-finally** istruzione è particolarmente utile per restituiscono le routine che presentano vari punti in cui viene eseguito un controllo per un errore che potrebbe causare prematuro dalla routine.

Per informazioni correlate e un esempio di codice, vedere [try-except Statement](../cpp/try-except-statement.md). Per altre informazioni sull'eccezione strutturata in generale, vedere [Structured Exception Handling](../cpp/structured-exception-handling-c-cpp.md). Per altre informazioni sulla gestione delle eccezioni nelle applicazioni gestite con C++/CLI, vedere [gestione delle eccezioni in /clr](../extensions/exception-handling-cpp-component-extensions.md).

> [!NOTE]
> La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C++ e C. Tuttavia, non è progettato in particolare per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, la gestione eccezioni C++ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo. Per i programmi C++, è consigliabile usare il meccanismo di gestione delle eccezioni C++ ([try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md) istruzioni).

L'istruzione composta dopo la **try** clausola è la sezione protetta. L'istruzione composta dopo la **finally** clausola è il gestore di terminazione. Il gestore specifica un set di azioni che vengono eseguite quando la sezione protetta viene terminata, indipendentemente dal fatto che tale sezione venga terminata da un'eccezione (terminazione anomala) o da un passaggio standard (terminazione normale).

Il controllo raggiunge un' **try** istruzione per l'esecuzione sequenziale semplice (passaggio). Quando il controllo entra la **try**, il gestore associato diventa attivo. Se il flusso di controllo raggiunge la fine del blocco try, l'esecuzione continua come segue:

1. Il gestore terminazioni viene richiamato.

1. Al termine dell'esecuzione il gestore terminazioni, l'esecuzione continua dopo il **finally** istruzione. Indipendentemente da come la sezione protetta viene terminata (ad esempio, tramite un **goto** all'esterno del corpo protetto o un' **restituire** istruzione), il gestore terminazioni viene eseguito *prima di* il flusso di controllo venga spostato all'esterno della sezione protetta.

   Oggetto **finally** istruzione non blocca la ricerca di un gestore di eccezioni appropriato.

Se si verifica un'eccezione di **try** blocco, il sistema operativo deve trovare un gestore per l'eccezione o il programma avrà esito negativo. Se viene trovato un gestore, tutti i **finally** vengono eseguiti blocchi e l'esecuzione viene ripresa nel gestore.

Si supponga ad esempio che una serie di chiamate di funzione colleghi la funzione A alla funzione D, come illustrato di seguito. Ogni funzione dispone di un gestore di terminazione. Se un'eccezione viene generata nella funzione D e gestita in A, i gestori di terminazione vengono chiamati nell'ordine indicato come il sistema rimuove lo stack: D, C, B.

![Ordine di terminazione&#45;esecuzione del gestore](../cpp/media/vc38cx1.gif "ordine di terminazione&#45;esecuzione del gestore") <br/>
Ordine di terminazione esecuzione del gestore

> [!NOTE]
> Il comportamento di try-finally è diverso da alcuni altri linguaggi che supportano l'utilizzo di **infine**, ad esempio c#.  Un unico **try** potrebbe essere, ma non entrambi, dei **finally** e **except**.  Se entrambi devono essere utilizzati insieme, un'istruzione try-except deve racchiudere l'istruzione try-finally interna.  Sono diverse anche le regole che specificano quando viene eseguito ciascun blocco.

Per garantire la compatibilità con versioni precedenti **try**, **finally**, e **Leave** sono sinonimi per **try**, **_ infine**, e **Leave** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

## <a name="the-leave-keyword"></a>La parola chiave __leave

Il **Leave** parola chiave è valida solo all'interno della sezione protetta di un **try-finally** istruzione e relativo effetto è il passaggio alla fine della sezione protetta. L'esecuzione continua con la prima istruzione nel gestore di terminazione.

Oggetto **goto** istruzione può inoltre uscire dalla sezione protetta, ma comporta una riduzione delle prestazioni perché richiama la rimozione dello stack. Il **Leave** istruzione risulta più efficiente perché non comporta la rimozione dello stack.

## <a name="abnormal-termination"></a>Terminazione anomala

Uscita da un **try-finally** istruzione tramite il [longjmp](../c-runtime-library/reference/longjmp.md) funzione di runtime viene considerata una terminazione anomala. Non è consentito passare a un **try** istruzione, ma uno uscire. Tutti i **finally** istruzioni attive tra il punto di partenza (terminazione normale delle **try** blocco) e la destinazione (il **except** di blocco gestisce l'eccezione) deve essere eseguito. Si tratta di una rimozione locale.

Se un **provare** blocco viene terminato in anticipo per qualsiasi motivo, includendo un salto dal blocco, il sistema esegue associato **infine** blocco come parte del processo di rimozione dello stack. In questi casi, il [AbnormalTermination](/windows/desktop/Debug/abnormaltermination) funzione restituisce **true** se chiamato dall'interno la **infine** bloccare; in caso contrario, restituisce **false**.

Il gestore terminazioni non viene chiamato se un processo viene terminato nel corso dell'esecuzione di un **try-finally** istruzione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Sintassi del gestore di terminazione](/windows/desktop/Debug/termination-handler-syntax)