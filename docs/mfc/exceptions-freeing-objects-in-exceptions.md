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
ms.openlocfilehash: e4fafd12d22f6ff7635380e139f60c110a193d9d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622817"
---
# <a name="exceptions-freeing-objects-in-exceptions"></a>Eccezioni: rilascio di oggetti nelle eccezioni

Questo articolo illustra la necessità e il metodo di liberare oggetti quando si verifica un'eccezione. Gli argomenti includono:

- [Gestione dell'eccezione localmente](#_core_handling_the_exception_locally)

- [Generazione di eccezioni dopo l'eliminazione di oggetti](#_core_throwing_exceptions_after_destroying_objects)

Le eccezioni generate dal Framework o dall'applicazione interrompono il normale flusso di programma. Pertanto, è molto importante tenere traccia degli oggetti in modo che sia possibile eliminarli correttamente qualora venga generata un'eccezione.

Sono disponibili due metodi principali per eseguire questa operazione.

- Gestire le eccezioni localmente usando le parole chiave **try** e **catch** , quindi eliminare tutti gli oggetti con un'istruzione.

- Eliminare definitivamente tutti gli oggetti nel blocco **catch** prima di generare l'eccezione all'esterno del blocco per una gestione aggiuntiva.

Questi due approcci sono illustrati di seguito come soluzioni per l'esempio problematico seguente:

[!code-cpp[NVC_MFCExceptions#14](codesnippet/cpp/exceptions-freeing-objects-in-exceptions_1.cpp)]

Come scritto in precedenza, `myPerson` non verrà eliminato se viene generata un'eccezione da `SomeFunc` . L'esecuzione passa direttamente al gestore di eccezioni esterno successivo, ignorando l'uscita normale della funzione e il codice che elimina l'oggetto. Il puntatore all'oggetto esce dall'ambito quando l'eccezione lascia la funzione e la memoria occupata dall'oggetto non verrà mai recuperata finché il programma è in esecuzione. Si tratta di una perdita di memoria; viene rilevata utilizzando la diagnostica della memoria.

## <a name="handling-the-exception-locally"></a><a name="_core_handling_the_exception_locally"></a>Gestione dell'eccezione localmente

Il paradigma **try/catch** fornisce un metodo di programmazione difensiva per evitare perdite di memoria e garantire che gli oggetti vengano eliminati definitivamente quando si verificano eccezioni. Ad esempio, l'esempio illustrato in precedenza in questo articolo può essere riscritto come segue:

[!code-cpp[NVC_MFCExceptions#15](codesnippet/cpp/exceptions-freeing-objects-in-exceptions_2.cpp)]

Questo nuovo esempio configura un gestore di eccezioni per intercettare l'eccezione e gestirla localmente. Chiude quindi la funzione normalmente ed Elimina l'oggetto. L'aspetto importante di questo esempio è che un contesto per intercettare l'eccezione viene stabilito con i blocchi **try/catch** . Senza un frame di eccezione locale, la funzione non saprà mai che è stata generata un'eccezione e non ha la possibilità di uscire normalmente ed eliminare l'oggetto.

## <a name="throwing-exceptions-after-destroying-objects"></a><a name="_core_throwing_exceptions_after_destroying_objects"></a>Generazione di eccezioni dopo l'eliminazione di oggetti

Un altro modo per gestire le eccezioni consiste nel passarli al contesto di gestione delle eccezioni esterno successivo. Nel blocco **catch** è possibile eseguire alcune operazioni di pulizia degli oggetti allocati localmente e quindi generare l'eccezione in per un'ulteriore elaborazione.

La funzione di generazione potrebbe non essere in grado di deallocare gli oggetti heap. Se la funzione dealloca sempre l'oggetto heap prima di restituire nel caso normale, la funzione deve anche deallocare l'oggetto heap prima di generare l'eccezione. D'altra parte, se la funzione non esegue in genere la deallocazione dell'oggetto prima di restituire nel caso normale, è necessario decidere caso per caso se l'oggetto heap deve essere deallocato.

Nell'esempio seguente viene illustrato come è possibile pulire gli oggetti allocati localmente:

[!code-cpp[NVC_MFCExceptions#16](codesnippet/cpp/exceptions-freeing-objects-in-exceptions_3.cpp)]

Il meccanismo di eccezione dealloca automaticamente gli oggetti frame; viene chiamato anche il distruttore dell'oggetto frame.

Se si chiamano funzioni che possono generare eccezioni, è possibile usare blocchi **try/catch** per assicurarsi di intercettare le eccezioni e avere la possibilità di eliminare tutti gli oggetti creati. In particolare, tenere presente che molte funzioni MFC possono generare eccezioni.

Per altre informazioni, vedere [Exceptions: catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)
