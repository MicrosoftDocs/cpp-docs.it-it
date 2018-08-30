---
title: Gestione delle eccezioni in MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 14887f5d85fc6c1a3fcd83474240c68c90ca2991
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43200767"
---
# <a name="exception-handling-in-mfc"></a>Gestione delle eccezioni in MFC
Questo articolo illustra i meccanismi di gestione delle eccezioni disponibili in MFC. Sono disponibili due meccanismi:  
  
-   Eccezioni C++, disponibile in versione MFC 3.0 e versioni successive  
  
-   La macro eccezioni MFC, disponibile nelle versioni MFC 1.0 e versioni successive  
  
 Se si sta scrivendo una nuova applicazione utilizzando MFC, è consigliabile usare il meccanismo di C++. Se l'applicazione esistente già tale meccanismo fa ampio uso, è possibile usare il meccanismo di macro.  
  
 È possibile convertire facilmente il codice esistente per l'uso delle eccezioni C++ anziché le macro di eccezioni MFC. Vantaggi della conversione del codice e linee guida per questa operazione sono descritti nell'articolo [eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md).  
  
 Se è già stata sviluppata un'applicazione che usa la macro eccezioni MFC, è possibile continuare a usare queste macro nel codice esistente, le eccezioni C++ nel nuovo codice. L'articolo [eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md) offre linee guida per questa operazione.  
  
> [!NOTE]
>  Per abilitare la gestione del codice delle eccezioni C++, selezionare Abilita eccezioni C++ nella pagina generazione di codice nella cartella del progetto C/C++ [pagine delle proprietà](../ide/property-pages-visual-cpp.md) finestra di dialogo oppure utilizzare il [/EHsc](../build/reference/eh-exception-handling-model.md) opzione del compilatore.  
  
 Questo articolo illustra gli argomenti seguenti:  
  
-   [Quando utilizzare le eccezioni](#_core_when_to_use_exceptions)  
  
-   [Supporto delle eccezioni MFC](#_core_mfc_exception_support)  
  
-   [Altre informazioni sulle eccezioni](#_core_further_reading_about_exceptions)  
  
##  <a name="_core_when_to_use_exceptions"></a> Quando utilizzare le eccezioni  
 Tre categorie di risultati possono verificarsi quando una funzione viene chiamata durante l'esecuzione del programma: l'esecuzione normale, l'esecuzione errata o esecuzione anomala. Ogni categoria è descritto di seguito.  
  
-   Esecuzione normale  
  
     La funzione può essere eseguita normalmente e restituire. Alcune funzioni restituiscono un codice di risultato al chiamante, che indica il risultato della funzione. I codici di risultato possibili sono rigorosamente definiti per la funzione e rappresentano l'intervallo di possibili risultati della funzione. Il codice del risultato può indicare l'esito positivo o negativo oppure può indicare un particolare tipo di errore che è compreso nell'intervallo normale delle aspettative. Ad esempio, una funzione sullo stato dei file può restituire un codice che indica che il file non esiste. Si noti che il termine "codice di errore" non viene utilizzato perché un codice risultato rappresenta uno dei molti risultati previsti.  
  
-   Esecuzione errata  
  
     Il chiamante non commette errori per passare gli argomenti alla funzione o chiama la funzione in un contesto non appropriato. Questa situazione provoca un errore e deve essere rilevato tramite un'asserzione durante lo sviluppo di programmi. (Per altre informazioni sulle asserzioni, vedere [asserzioni C/C++](/visualstudio/debugger/c-cpp-assertions).)  
  
-   Esecuzione anomala  
  
     Esecuzione anomala include situazioni in cui le condizioni di fuori di controllo del programma, ad esempio memoria insufficiente o errori dei / o, stanno influenzando il risultato della funzione. Situazioni anomale devono essere gestite dall'intercettazione e la generazione di eccezioni.  
  
 Utilizzo di eccezioni è particolarmente appropriato per l'esecuzione anomala.  
  
##  <a name="_core_mfc_exception_support"></a> Supporto delle eccezioni MFC  
 Se si usano direttamente le eccezioni di C++ o la macro eccezioni MFC, si utilizzeranno [classe CException](../mfc/reference/cexception-class.md) o `CException`-derivati gli oggetti che possono essere generati dal framework o dall'applicazione.  
  
 Nella tabella seguente mostra le eccezioni predefinite fornite da MFC.  
  
|Exception (classe)|Significato|  
|---------------------|-------------|  
|[Classe CMemoryException](../mfc/reference/cmemoryexception-class.md)|Memoria insufficiente|  
|[Classe CFileException](../mfc/reference/cfileexception-class.md)|Eccezione di file|  
|[Classe CArchiveException](../mfc/reference/carchiveexception-class.md)|Eccezione di archivio/serializzazione|  
|[Classe CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md)|Risposta alla richiesta di servizio non supportato|  
|[Classe CResourceException](../mfc/reference/cresourceexception-class.md)|Eccezione di allocazione di risorse di Windows|  
|[Classe CDaoException](../mfc/reference/cdaoexception-class.md)|Eccezioni del database (classi DAO)|  
|[Classe CDBException](../mfc/reference/cdbexception-class.md)|Eccezioni del database (le classi ODBC)|  
|[Classe COleException](../mfc/reference/coleexception-class.md)|OLE (eccezioni)|  
|[Classe COleDispatchException](../mfc/reference/coledispatchexception-class.md)|Eccezioni di dispatch (automazione)|  
|[Classe CUserException](../mfc/reference/cuserexception-class.md)|Eccezione che avvisa l'utente con una finestra di messaggio, quindi genera un oggetto generico [CException (classe)](../mfc/reference/cexception-class.md)|  
  
> [!NOTE]
>  MFC supporta sia le eccezioni C++ e le macro di eccezioni MFC. MFC non supporta direttamente i gestori di eccezioni di Windows NT strutturata (SEH), come descritto nella [Structured Exception Handling](https://msdn.microsoft.com/library/windows/desktop/ms680657).  
  
##  <a name="_core_further_reading_about_exceptions"></a> Ulteriori informazioni sulle eccezioni  
 Gli articoli seguenti illustrano l'uso della libreria MFC per la gestione delle eccezioni:  
  
-   [Eccezioni: rilevamento ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md)  
  
-   [Eccezioni: esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md)  
  
-   [Eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md)  
  
-   [Eccezioni: generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md)  
  
-   [Eccezioni: eccezioni di database](../mfc/exceptions-database-exceptions.md)  
  
-   [Eccezioni: eccezioni OLE](../mfc/exceptions-ole-exceptions.md)  
  
 Gli articoli seguenti confrontano le macro di eccezioni MFC con le parole chiave delle eccezioni C++ e viene illustrato come adattare il codice:  
  
-   [Eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md)  
  
-   [Eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md)  
  
-   [Eccezioni: uso di macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)   
 [Procedura: creazione di una classi di eccezioni personalizzate](http://go.microsoft.com/fwlink/p/?linkid=128045)

