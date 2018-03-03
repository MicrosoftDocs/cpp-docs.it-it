---
title: Gestione delle eccezioni in MFC | Documenti Microsoft
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
- DAO [MFC], exceptions
- assertions [MFC], When to use exceptions
- exception handling [MFC], MFC
- resource allocation exception
- resources [MFC], allocating
- keywords [MFC], exception handling
- errors [MFC], detected by assertions
- ODBC exceptions [MFC]
- serialization [MFC], exceptions
- Automation [MFC], exceptions
- exception macros [MFC]
- predefined exceptions [MFC]
- C++ exception handling [MFC], enabling
- C++ exception handling [MFC], MFC applications
- requests for unsupported services [MFC]
- database exceptions [MFC]
- archive exceptions [MFC]
- MFC, exceptions
- C++ exception handling [MFC], types of
- macros [MFC], exception handling
- abnormal program execution [MFC]
- OLE exceptions [MFC], MFC exception handling
- error handling [MFC], exceptions and
- class libraries [MFC], exception support
- exceptions [MFC], MFC macros vs. C++ keywords
- memory [MFC], out-of-memory exceptions
- Windows [MFC], resource allocation exceptions
- macros [MFC], MFC exception macros
- function calls [MFC], results
- out-of-memory exceptions [MFC]
ms.assetid: 0926627d-2ba7-44a6-babe-d851a4a2517c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 544130f27fb01d0d29652087351c8a5bbc5bd5c7
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="exception-handling-in-mfc"></a>Gestione delle eccezioni in MFC
Questo articolo illustra i meccanismi di gestione delle eccezioni disponibili in MFC. Sono disponibili i due meccanismi:  
  
-   Eccezioni C++, disponibili in MFC versione 3.0 e versioni successive  
  
-   La macro eccezioni MFC, disponibili nelle versioni MFC 1.0 e versioni successive  
  
 Se si sta scrivendo una nuova applicazione che utilizza MFC, è necessario utilizzare il meccanismo di C++. Se l'applicazione esistente già fa ampio uso tale meccanismo, è possibile utilizzare il meccanismo di macro.  
  
 È possibile convertire facilmente il codice esistente per utilizzare le eccezioni C++ anziché la macro eccezioni MFC. Vantaggi della conversione del codice e le linee guida per questa operazione sono descritti nell'articolo [eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md).  
  
 Se è già stato sviluppato un'applicazione utilizzando la macro eccezioni MFC, è possibile continuare a usare queste macro nel codice esistente, le eccezioni C++ nel nuovo codice. L'articolo [eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md) fornisce linee guida per questa operazione.  
  
> [!NOTE]
>  Per attivare eccezioni C++ nel codice, selezionare Abilita eccezioni C++ nella pagina generazione di codice nella cartella C/C++ del progetto [pagine delle proprietà](../ide/property-pages-visual-cpp.md) la finestra di dialogo oppure utilizzare l'opzione del compilatore /GX. Il valore predefinito è /GX-, che disabilita la gestione delle eccezioni.  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
-   [Quando utilizzare le eccezioni](#_core_when_to_use_exceptions)  
  
-   [Supporto delle eccezioni MFC](#_core_mfc_exception_support)  
  
-   [Ulteriori informazioni sulle eccezioni](#_core_further_reading_about_exceptions)  
  
##  <a name="_core_when_to_use_exceptions"></a>Quando utilizzare le eccezioni  
 Tre categorie di risultati possono verificarsi quando una funzione viene chiamata durante l'esecuzione del programma: esecuzione normale, esecuzione errati o esecuzione anomala. Ogni categoria è descritta di seguito.  
  
-   Esecuzione normale  
  
     La funzione può eseguire normalmente e restituire. Alcune funzioni restituiscono un codice di risultato per il chiamante, che indica il risultato della funzione. Codici di risultato possibili sono strettamente definiti per la funzione e rappresentano la gamma dei possibili risultati della funzione. Il codice può indicare l'esito positivo o negativo oppure può indicare un particolare tipo di errore che è compreso nell'intervallo normale delle aspettative. Ad esempio, una funzione sullo stato dei file può restituire un codice che indica che il file non esiste. Si noti che poiché un codice di risultato rappresenta uno dei risultati previsti non viene utilizzato il termine "codice di errore".  
  
-   Esecuzione non corretti  
  
     Il chiamante commette passare gli argomenti alla funzione o chiama la funzione in un contesto non appropriato. Questa situazione provoca un errore e dovrebbero essere rilevato da un'asserzione durante lo sviluppo di programmi. (Per ulteriori informazioni sulle asserzioni, vedere [asserzioni C/C++](/visualstudio/debugger/c-cpp-assertions).)  
  
-   Esecuzione anomala  
  
     Esecuzione anomala include situazioni in cui influenzano condizioni esterne al controllo del programma, ad esempio memoria insufficiente o errori dei / o, il risultato della funzione. Situazioni anomale devono essere gestite intercettando e generazione di eccezioni.  
  
 Utilizzo di eccezioni è particolarmente adatta per l'esecuzione anomala.  
  
##  <a name="_core_mfc_exception_support"></a>Supporto delle eccezioni MFC  
 Se si utilizzano direttamente le eccezioni di C++ o la macro eccezioni MFC, si utilizzeranno [CException (classe)](../mfc/reference/cexception-class.md) o `CException`-derivati gli oggetti che possono essere generati dal framework o dall'applicazione.  
  
 La tabella seguente illustra le eccezioni predefinite fornite da MFC.  
  
|Exception (classe)|Significato|  
|---------------------|-------------|  
|[Classe CMemoryException](../mfc/reference/cmemoryexception-class.md)|Esaurimento della memoria|  
|[Classe CFileException](../mfc/reference/cfileexception-class.md)|Eccezione di file|  
|[Classe CArchiveException](../mfc/reference/carchiveexception-class.md)|Eccezione di archiviazione/serializzazione|  
|[Classe CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md)|Risposta alla richiesta di servizio non supportato|  
|[Classe CResourceException](../mfc/reference/cresourceexception-class.md)|Eccezione di allocazione di risorse di Windows|  
|[Classe CDaoException](../mfc/reference/cdaoexception-class.md)|Eccezioni di database (le classi DAO)|  
|[Classe CDBException](../mfc/reference/cdbexception-class.md)|Eccezioni di database (le classi ODBC)|  
|[Classe COleException](../mfc/reference/coleexception-class.md)|OLE (eccezioni)|  
|[Classe COleDispatchException](../mfc/reference/coledispatchexception-class.md)|Eccezioni dispatch (automazione)|  
|[Classe CUserException](../mfc/reference/cuserexception-class.md)|Eccezione che avvisa l'utente con una finestra di messaggio, quindi genera un oggetto generico [CException (classe)](../mfc/reference/cexception-class.md)|  
  
> [!NOTE]
>  MFC supporta sia le eccezioni C++ e le macro eccezioni MFC. MFC supporta direttamente i gestori di eccezioni di Windows NT strutturata (SEH), come descritto in [Structured Exception Handling](http://msdn.microsoft.com/library/windows/desktop/ms680657).  
  
##  <a name="_core_further_reading_about_exceptions"></a>Ulteriori informazioni sulle eccezioni  
 Gli articoli seguenti viene illustrato come usare la libreria MFC per la gestione di eccezione:  
  
-   [Eccezioni: rilevamento ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md)  
  
-   [Eccezioni: esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md)  
  
-   [Eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md)  
  
-   [Eccezioni: generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md)  
  
-   [Eccezioni: eccezioni di database](../mfc/exceptions-database-exceptions.md)  
  
-   [Eccezioni: eccezioni OLE](../mfc/exceptions-ole-exceptions.md)  
  
 Gli articoli seguenti confrontano le macro eccezioni MFC con le parole chiave delle eccezioni C++ e illustrano come adattare il codice:  
  
-   [Eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md)  
  
-   [Eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md)  
  
-   [Eccezioni: uso di macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)   
 [Procedura: creazione di classi di eccezione personalizzate personale](http://go.microsoft.com/fwlink/p/?linkid=128045)

