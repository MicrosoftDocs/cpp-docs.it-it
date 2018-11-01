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
ms.openlocfilehash: 6e03d46a2600458f3107efa6e0b6b0d643c9b160
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50442471"
---
# <a name="exceptions-freeing-objects-in-exceptions"></a>Eccezioni: rilascio di oggetti nelle eccezioni

Questo articolo illustra la necessità e il metodo di rilascio di oggetti quando si verifica un'eccezione. Gli argomenti trattati includono:

- [Gestione locale delle eccezioni](#_core_handling_the_exception_locally)

- [Generazione di eccezioni dopo l'eliminazione definitiva di oggetti](#_core_throwing_exceptions_after_destroying_objects)

Eccezioni generate dal framework o per il flusso di programma normale interrupt dell'applicazione. Di conseguenza, è molto importante tenere traccia degli oggetti in modo che è possibile eliminare correttamente di esse nel caso in cui viene generata un'eccezione.

Esistono due metodi principali per eseguire questa operazione.

- Gestire le eccezioni in locale usando il **provare** e **catch** parole chiave, quindi eliminare tutti gli oggetti con un'unica istruzione.

- Eliminare definitivamente un oggetto di **catch** blocco prima che venga generata l'eccezione all'esterno del blocco per la gestione aggiuntiva.

Questi due approcci sono illustrati di seguito come soluzioni alle problematiche al seguente:

[!code-cpp[NVC_MFCExceptions#14](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_1.cpp)]

Come scritto in precedenza, `myPerson` non verrà eliminato se viene generata un'eccezione da `SomeFunc`. L'esecuzione passa direttamente al gestore di eccezioni esterno successivo, ignorando l'uscita dalla funzione normale e il codice che elimina l'oggetto. Il puntatore all'oggetto esce dall'ambito quando quest'ultima lascia la funzione e la memoria occupata dall'oggetto mai essere ripristinata fino a quando l'esecuzione del programma. Si tratta di una perdita di memoria; sarebbe essere rilevato mediante la diagnostica della memoria.

##  <a name="_core_handling_the_exception_locally"></a> Gestione locale delle eccezioni

Il **try/catch** paradigma fornisce un metodo di programmazione difensivo per evitare perdite di memoria e per garantire che gli oggetti vengono eliminati definitivamente quando si verificano eccezioni. Nell'esempio illustrato in precedenza in questo articolo, ad esempio, potrebbe essere riscritto come segue:

[!code-cpp[NVC_MFCExceptions#15](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_2.cpp)]

Questo nuovo esempio configura un gestore di eccezioni per intercettare l'eccezione e gestirla in locale. Viene chiuso normalmente la funzione e quindi distrugge l'oggetto. L'aspetto importante di questo esempio consiste nel fatto che un contesto per intercettare l'eccezione viene stabilito con il **try/catch** blocchi. Senza un frame di eccezione locale, la funzione non saprà mai che un'eccezione è stata generata l'eccezione e non avrà la possibilità di chiudere normalmente e l'eliminazione dell'oggetto.

##  <a name="_core_throwing_exceptions_after_destroying_objects"></a> Generazione di eccezioni dopo l'eliminazione definitiva di oggetti

Un altro per gestire le eccezioni consiste nel passare il contesto di gestione delle eccezioni esterno successivo. Nel **catch** blocco, è possibile eseguire alcune operazioni di pulitura degli oggetti allocati in locale e quindi generare l'eccezione per un'ulteriore elaborazione.

La funzione generando un'eccezione può o non è necessario deallocare oggetti dell'heap. Se la funzione di deallocazione sempre l'oggetto heap prima di restituire in una situazione normale, quindi la funzione deve inoltre deallocare l'oggetto heap prima che venga generata l'eccezione. D'altra parte, se la funzione non deallocati in genere l'oggetto prima di restituire in una situazione normale, quindi è necessario decidere caso per caso se l'oggetto heap deve essere deallocata.

L'esempio seguente mostra come in locale allocati gli oggetti può essere pulito:

[!code-cpp[NVC_MFCExceptions#16](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_3.cpp)]

Il meccanismo delle eccezioni automaticamente dealloca oggetti frame. viene inoltre chiamato il distruttore dell'oggetto frame.

Se si chiamano funzioni che possono generare eccezioni, è possibile usare **try/catch** blocchi per assicurarsi di intercettare le eccezioni e avere la possibilità di eliminare tutti gli oggetti creati. In particolare, tenere presente che molte funzioni MFC possono generare eccezioni.

Per altre informazioni, vedere [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

