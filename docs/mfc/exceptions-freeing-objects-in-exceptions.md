---
title: 'Eccezioni: rilascio di oggetti nelle eccezioni'
ms.date: 11/04/2016
helpviewer_keywords:
- throwing exceptions [MFC], freeing objects in exceptions
- local exception handling
- memory leaks, caused by exception
- try-catch exception handling [MFC], destroying objects
- destroying objects [MFC]
- freeing objects [MFC]
- throwing exceptions [MFC], after destroying
- exception handling [MFC], destroying objects
ms.assetid: 3b14b4ee-e789-4ed2-b8e3-984950441d97
ms.openlocfilehash: 49c7c6b0481f90baa23609c1bb1596deda49f7bd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371994"
---
# <a name="exceptions-freeing-objects-in-exceptions"></a>Eccezioni: rilascio di oggetti nelle eccezioni

In questo articolo viene illustrata la necessità e il metodo di liberazione di oggetti quando si verifica un'eccezione. Gli argomenti includono:

- [Gestione dell'eccezione in locale](#_core_handling_the_exception_locally)

- [Generazione di eccezioni dopo l'eliminazione di oggetti](#_core_throwing_exceptions_after_destroying_objects)

Le eccezioni generate dal framework o dall'applicazione interrompono il normale flusso del programma. Pertanto, è molto importante tenere traccia degli oggetti in modo che sia possibile eliminarli correttamente nel caso in cui venga generata un'eccezione.

Esistono due metodi principali per eseguire questa operazione.

- Gestire le eccezioni in locale utilizzando le parole chiave **try** e **catch,** quindi eliminare tutti gli oggetti con un'istruzione .

- Eliminare qualsiasi oggetto nel blocco **catch** prima di generare l'eccezione all'esterno del blocco per un'ulteriore gestione.

Questi due approcci sono illustrati di seguito come soluzioni per il seguente esempio problematico:

[!code-cpp[NVC_MFCExceptions#14](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_1.cpp)]

Come scritto `myPerson` in precedenza, non verrà `SomeFunc`eliminato se viene generata un'eccezione da . L'esecuzione passa direttamente al gestore di eccezioni esterno successivo, ignorando l'uscita della funzione normale e il codice che elimina l'oggetto. Il puntatore all'oggetto esce dall'ambito quando l'eccezione esce dalla funzione e la memoria occupata dall'oggetto non verrà mai recuperata finché il programma è in esecuzione. Si tratta di una perdita di memoria; sarebbe stato rilevato utilizzando la diagnostica della memoria.

## <a name="handling-the-exception-locally"></a><a name="_core_handling_the_exception_locally"></a>Gestione dell'eccezione in locale

Il paradigma **try/catch** fornisce un metodo di programmazione difensivo per evitare perdite di memoria e garantire che gli oggetti vengano eliminati quando si verificano eccezioni. Ad esempio, l'esempio illustrato in precedenza in questo articolo potrebbe essere riscritto come segue:For example, the example shown earlier in this article could be rewritten as follows:

[!code-cpp[NVC_MFCExceptions#15](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_2.cpp)]

Questo nuovo esempio imposta un gestore di eccezioni per intercettare l'eccezione e gestirla localmente. Quindi esce dalla funzione normalmente e distrugge l'oggetto. L'aspetto importante di questo esempio è che un contesto per intercettare l'eccezione viene stabilito con i blocchi **try/catch.** Senza un frame di eccezioni locale, la funzione non saprebbe mai che un'eccezione è stata generata e non avrebbe la possibilità di uscire normalmente ed eliminare l'oggetto.

## <a name="throwing-exceptions-after-destroying-objects"></a><a name="_core_throwing_exceptions_after_destroying_objects"></a>Generazione di eccezioni dopo l'eliminazione di oggetti

Un altro modo per gestire le eccezioni consiste nel passarle al contesto di gestione delle eccezioni esterno successivo. Nel blocco **catch,** è possibile eseguire alcune operazioni di pulizia degli oggetti allocati localmente e quindi generare l'eccezione per un'ulteriore elaborazione.

La funzione di generazione può o non può essere necessario deallocare gli oggetti heap. Se la funzione dealloca sempre l'oggetto heap prima di restituire nel caso normale, la funzione deve anche deallocare l'oggetto heap prima di generare l'eccezione. D'altra parte, se la funzione normalmente non dealloca l'oggetto prima della restituzione nel caso normale, è necessario decidere caso per caso se l'oggetto heap deve essere deallocato.

Nell'esempio seguente viene illustrato come pulire gli oggetti allocati localmente:The following example shows how locally allocated objects can be cleaned:

[!code-cpp[NVC_MFCExceptions#16](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_3.cpp)]

Il meccanismo delle eccezioni dealloca automaticamente gli oggetti frame; viene chiamato anche il distruttore dell'oggetto frame.

Se si chiamano funzioni che possono generare eccezioni, è possibile utilizzare i blocchi **try/catch** per assicurarsi di intercettare le eccezioni e di eliminare tutti gli oggetti creati. In particolare, tenere presente che molte funzioni MFC possono generare eccezioni.

Per ulteriori informazioni, vedere [eccezioni: intercettazione ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
