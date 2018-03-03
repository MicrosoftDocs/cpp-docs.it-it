---
title: 'Eccezioni: Rilascio di oggetti nelle eccezioni | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a422347e319fabbd91f20e0ebf7897865f1ca4c7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exceptions-freeing-objects-in-exceptions"></a>Eccezioni: rilascio di oggetti nelle eccezioni
Questo articolo illustra la necessità e il metodo di rilascio di oggetti quando si verifica un'eccezione. Gli argomenti trattati includono:  
  
-   [Gestione locale delle eccezioni](#_core_handling_the_exception_locally)  
  
-   [Generazione di eccezioni dopo l'eliminazione definitiva di oggetti](#_core_throwing_exceptions_after_destroying_objects)  
  
 Eccezioni generate dal framework o per l'applicazione interrupt normale flusso di programma. Di conseguenza, è molto importante tenere traccia degli oggetti in modo che è possibile eliminare correttamente le nel caso in cui viene generata un'eccezione.  
  
 Esistono due metodi principali per eseguire questa operazione.  
  
-   Gestire le eccezioni in locale tramite la **provare** e **catch** parole chiave, quindi eliminare tutti gli oggetti con un'unica istruzione.  
  
-   Eliminare definitivamente un oggetto di **catch** blocco prima di generare l'eccezione all'esterno del blocco per una ulteriore gestione.  
  
 Questi due approcci sono illustrati di seguito come soluzioni per il seguente esempio problematico:  
  
 [!code-cpp[NVC_MFCExceptions#14](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_1.cpp)]  
  
 Come riportato in precedenza, `myPerson` non verranno eliminati se viene generata un'eccezione da `SomeFunc`. L'esecuzione passa direttamente al gestore di eccezioni esterno successivo, ignorando l'uscita dalla funzione normale e il codice che elimina l'oggetto. Il puntatore all'oggetto esce dall'ambito quando quest'ultima lascia la funzione e la memoria occupata dall'oggetto non potrà essere recuperata fino a quando l'esecuzione del programma. Si tratta di una perdita di memoria; potrebbe essere rilevato tramite la diagnostica della memoria.  
  
##  <a name="_core_handling_the_exception_locally"></a>Gestione locale delle eccezioni  
 Il **try/catch** paradigma fornisce un metodo di programmazione difensiva per evitare perdite di memoria e assicurarsi che gli oggetti vengano eliminati quando si verificano eccezioni. Nell'esempio viene illustrato in precedenza in questo articolo, ad esempio, potrebbe essere riscritto come segue:  
  
 [!code-cpp[NVC_MFCExceptions#15](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_2.cpp)]  
  
 Questo nuovo esempio imposta un gestore di eccezioni per rilevare l'eccezione e gestirla in locale. Chiude normalmente la funzione e quindi Elimina definitivamente l'oggetto. L'aspetto importante di questo esempio è che un contesto per intercettare l'eccezione viene stabilito con il **try/catch** blocchi. Senza un locale per l'eccezione, la funzione potrebbe sapere che un'eccezione è stata generata e non avrebbe la possibilità di chiudere normalmente e l'eliminazione dell'oggetto.  
  
##  <a name="_core_throwing_exceptions_after_destroying_objects"></a>Generazione di eccezioni dopo l'eliminazione definitiva di oggetti  
 Un altro modo per gestire le eccezioni è per passarli al contesto di gestione delle eccezioni esterno successivo. Nel **catch** blocco, è possibile eseguire alcune operazioni di pulitura di oggetti allocati localmente e quindi generare l'eccezione per un'ulteriore elaborazione.  
  
 La funzione di generazione può o non è necessario deallocare gli oggetti degli heap. Se la funzione sempre la deallocazione dell'heap prima di restituire normalmente, quindi la funzione deve inoltre deallocare oggetto heap prima di generare l'eccezione. D'altra parte, se la funzione non deallocati in genere l'oggetto prima della restituzione normalmente, quindi è necessario decidere caso per caso se l'oggetto heap deve essere deallocata.  
  
 Nell'esempio seguente viene allocato in modalità locale di oggetti possono essere eliminati:  
  
 [!code-cpp[NVC_MFCExceptions#16](../mfc/codesnippet/cpp/exceptions-freeing-objects-in-exceptions_3.cpp)]  
  
 Il meccanismo di eccezione dealloca automaticamente oggetti frame. inoltre viene chiamato il distruttore dell'oggetto frame.  
  
 Se si chiamano funzioni che possono generare eccezioni, è possibile utilizzare **try/catch** blocchi per assicurarsi di intercettare le eccezioni e avere la possibilità di eliminare tutti gli oggetti creati. In particolare, tenere presente che molte funzioni MFC possono essere generate eccezioni.  
  
 Per ulteriori informazioni, vedere [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

