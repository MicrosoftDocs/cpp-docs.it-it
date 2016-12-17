---
title: "Eccezioni: rilascio di oggetti nelle eccezioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distruzione di oggetti"
  - "gestione eccezioni, distruzione di oggetti"
  - "rilascio di oggetti"
  - "gestione locale delle eccezioni"
  - "perdite di memoria, causate da eccezioni"
  - "generazione di eccezioni, dopo la distruzione"
  - "generazione di eccezioni, rilascio di oggetti nelle eccezioni"
  - "gestione eccezioni try-catch, distruzione di oggetti"
ms.assetid: 3b14b4ee-e789-4ed2-b8e3-984950441d97
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezioni: rilascio di oggetti nelle eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene sia richiesta e il metodo di liberare degli oggetti quando si verifica un'eccezione.  Gli argomenti trattati includono  
  
-   [Gestione dell'eccezione in locale](#_core_handling_the_exception_locally)  
  
-   [Generazione di eccezioni dopo avere eliminato gli oggetti](#_core_throwing_exceptions_after_destroying_objects)  
  
 Le eccezioni generate dal framework o dall'applicazione interrompere il normale flusso di programma.  Pertanto, è molto importante tenere traccia di chiusura degli oggetti in modo da poterli correttamente automatizzati è nel caso venga generata un'eccezione.  
  
 Esistono due metodi principali per questo scopo.  
  
-   Le eccezioni in locale utilizzando le parole chiave di **Catch** e di **Prova**, quindi elimina tutti gli oggetti con un'istruzione.  
  
-   Eliminare qualsiasi oggetto nel blocco di **Catch** prima di generare un'eccezione all'esterno del blocco per operazioni di gestione.  
  
 Questi due approcci vengono illustrati in soluzioni all'esempio seguente problematico:  
  
 [!code-cpp[NVC_MFCExceptions#14](../mfc/codesnippet/CPP/exceptions-freeing-objects-in-exceptions_1.cpp)]  
  
 Come riportato in precedenza, `myPerson` non verrà eliminato se viene generata un'eccezione da `SomeFunc`.  L'esecuzione passa direttamente al gestore eccezioni esterno seguente, ignorando exit function normale e il codice che elimina l'oggetto.  Il puntatore all'oggetto dall'ambito quando l'eccezione della funzione e la memoria occupata dall'oggetto non sarà recuperata mai finché il programma.  Si tratta di una perdita di memoria; viene rilevata utilizzando la diagnostica della memoria.  
  
##  <a name="_core_handling_the_exception_locally"></a> Gestione dell'eccezione in locale  
 Il paradigma di **try\/catch** fornisce un metodo di programmazione difensivo per evitare la perdita di memoria e assicurarsi che gli oggetti vengono eliminati quando è generata un'eccezione.  Ad esempio, l'esempio riportato in precedenza in questo articolo potrebbe essere riscritto come segue:  
  
 [!code-cpp[NVC_MFCExceptions#15](../mfc/codesnippet/CPP/exceptions-freeing-objects-in-exceptions_2.cpp)]  
  
 Questo nuovo esempio configura un gestore di eccezioni per rilevare l'eccezione e per gestirla localmente.  Quindi uscire dalla funzione normalmente e elimina l'oggetto.  L'aspetto importante di questo esempio è che un contesto per rilevare l'eccezione viene stabilito con blocchi **try\/catch**.  Senza un frame locale di eccezione, la funzione non saprebbe mai che un'eccezione è stata generata e non avrebbe avuto la probabilità chiudere normalmente e distruggere l'oggetto.  
  
##  <a name="_core_throwing_exceptions_after_destroying_objects"></a> Generazione di eccezioni dopo avere eliminato gli oggetti  
 Un altro modo per gestire le eccezioni è di passarli al contesto esterno seguente per la gestione delle eccezioni.  Nel blocco di **Catch**, è possibile eseguire una certa pulitura degli oggetti allocati in locale e quindi generare l'eccezione attiva per l'ulteriore elaborazione.  
  
 La funzione che genera può avere l'esigenza di rimuovere gli oggetti dell'heap.  Se la funzione rilascia sempre l'oggetto dell'heap prima di restituire nel caso normale, la funzione deve inoltre possibile eliminare l'oggetto dell'heap prima di generare un'eccezione.  Di altra parte, se la funzione normalmente non rilascia l'oggetto prima di restituire nel caso normale, è necessario decidere caso per caso se l'oggetto dell'heap deve essere rilasciato.  
  
 Nell'esempio seguente viene illustrato quanto gli oggetti allocati localmente possono essere puliti:  
  
 [!code-cpp[NVC_MFCExceptions#16](../mfc/codesnippet/CPP/exceptions-freeing-objects-in-exceptions_3.cpp)]  
  
 Il meccanismo di eccezione viene rilasciata automaticamente dagli oggetti frame; il distruttore dell'oggetto frame viene chiamato.  
  
 Se si chiama le funzioni che possono generare eccezioni, è possibile utilizzare i blocchi **try\/catch** per assicurarsi di rilevare le eccezioni e avere una probabilità distruggere tutti gli oggetti creati.  In particolare, tenere presente che molte funzioni MFC possono generare eccezioni.  
  
 Per ulteriori informazioni, vedere [Eccezioni: Rilevazione e l'eliminazione delle eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)