---
title: "Gestione delle eccezioni in MFC | Microsoft Docs"
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
  - "esecuzione anomala di programmi [C++]"
  - "eccezioni archivio [C++]"
  - "asserzioni [C++], Quando utilizzare le eccezioni"
  - "automazione [C++], eccezioni"
  - "gestione delle eccezioni di C++, abilitazione"
  - "gestione delle eccezioni di C++, MFC (applicazioni)"
  - "gestione delle eccezioni di C++, tipi"
  - "librerie di classi [C++], supporto delle eccezioni"
  - "DAO [C++], eccezioni"
  - "eccezioni di database [C++]"
  - "gestione errori [C++], eccezioni"
  - "errori [C++], rilevate da asserzioni"
  - "gestione delle eccezioni [C++], MFC"
  - "macro eccezioni [C++]"
  - "eccezioni [C++], macro MFC e parole chiave C++"
  - "chiamate di funzione, risultati"
  - "parole chiave [C++], gestione eccezioni"
  - "macro [C++], gestione eccezioni"
  - "macro [C++], macro eccezioni MFC"
  - "memoria [C++], eccezioni relative a memoria insufficiente"
  - "MFC [C++], eccezioni"
  - "eccezioni ODBC [C++]"
  - "eccezioni OLE [C++], gestione eccezioni MFC"
  - "eccezioni relative a memoria insufficiente [C++]"
  - "eccezioni predefinite [C++]"
  - "richieste per servizi non supportati"
  - "eccezione di allocazione risorse"
  - "risorse [C++], allocazione"
  - "serializzazione [C++], eccezioni"
  - "Windows [C++], eccezioni di allocazione risorse"
ms.assetid: 0926627d-2ba7-44a6-babe-d851a4a2517c
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione delle eccezioni in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo spiega i meccanismi di gestione delle eccezioni disponibili in MFC.  Sono disponibili due meccanismi:  
  
-   Le eccezioni C\+\+, disponibili nelle versioni di MFC 3,0 e successive  
  
-   Le macro di eccezione MFC, disponibili in MFC versione 1,0 e successive  
  
 Se si sta scrivendo una nuova applicazione che utilizza MFC, è necessario utilizzare il meccanismo di C\+\+.  È possibile utilizzare il meccanismo basato su macro se l'applicazione esistente utilizza già tale meccanismo in modo esteso.  
  
 È possibile convertire facilmente il codice esistente per utilizzare le eccezioni C\+\+ anziché le macro di eccezione MFC.  I vantaggi del convertire il codice e le linee guida per eseguire tale operazione sono descritti nell'articolo [Eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md).  
  
 Se è già stata sviluppata un'applicazione utilizzando le macro di eccezione MFC, è possibile continuare ad utilizzare queste macro nel codice esistente, mentre si utilizzano le eccezioni C\+\+ nel nuovo codice.  L'articolo [Eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md) fornisce indicazioni per farlo.  
  
> [!NOTE]
>  Per attivare la gestione delle eccezioni C\+\+ nel codice, selezionare Abilita Eccezioni C\+\+ nella pagina Generazione Codice nella cartella C\/C\+\+ della finestra di dialogo [Pagine delle proprietà](../ide/property-pages-visual-cpp.md) del progetto o utilizzare l'opzione del compilatore \/GX.  L'impostazione predefinita è \/GX–, ovvero disabilita la gestione delle eccezioni.  
  
 Questo articolo tratta i seguenti argomenti:  
  
-   [Quando utilizzare le eccezioni](#_core_when_to_use_exceptions)  
  
-   [Supporto delle eccezioni MFC](#_core_mfc_exception_support)  
  
-   [Ulteriori informazioni sulle eccezioni](#_core_further_reading_about_exceptions)  
  
##  <a name="_core_when_to_use_exceptions"></a> Quando Utilizzare le Eccezioni  
 Tre categorie di risultati possono verificarsi quando una funzione viene chiamata durante l'esecuzione del programma: esecuzione normale, esecuzione con errori o esecuzione anomala.  Ogni categoria viene descritta di seguito.  
  
-   Esecuzione normale  
  
     La funzione può eseguire normalmente e ritornare.  Alcune funzioni restituiscono un codice di risultato al chiamante, il che indica il risultato della funzione.  I codici possibili risultati vengono definiti rigidamente per la funzione e rappresentano l'intervallo dei risultati possibili della funzione.  Il codice risultante può indicare l'esito positivo o negativo o può anche indicare un particolare tipo di errore che è nell'intervallo normale delle aspettative.  Ad esempio, una funzione di stato file può restituire un codice che indica che il file non esiste.  Tenere presente che il termine "codice di errore" non è utilizzato perché un codice di risultato rappresenta uno dei risultati previsti.  
  
-   Esecuzione erronea  
  
     Il chiamante esegue qualche errore nel passare gli argomenti alla funzione o chiama la funzione in un contesto non appropriato.  Questa situazione causa un errore e deve essere rilevata da un'asserzione durante lo sviluppo del programma. \(Per ulteriori informazioni sulle asserzioni, vedere [Asserzioni C\/C\+\+](../Topic/C-C++%20Assertions.md).\)  
  
-   Esecuzione anomala  
  
     L'esecuzione anomala include situazioni dove le condizioni esterne al controllo del programma, ad esempio memoria insufficiente o errori di I\/O, influenzano il risultato della funzione.  Le situazioni anomale devono essere gestite rilevando e generando eccezioni.  
  
 L'utilizzo di eccezioni è particolarmente adatto per l'esecuzione anomala.  
  
##  <a name="_core_mfc_exception_support"></a> Supporto delle Eccezioni MFC  
 Se si utilizzano direttamente le eccezioni C\+\+ oppure le macro di eccezione MFC, verranno utilizzati oggetti derivati da [CException Class](../mfc/reference/cexception-class.md) o `CException` che possono essere generati dal framework o dall'applicazione.  
  
 La tabella seguente mostra le eccezioni predefinite fornite da MFC.  
  
|Classe dell'eccezione|Significato|  
|---------------------------|-----------------|  
|[CMemoryException Class](../mfc/reference/cmemoryexception-class.md)|Memoria insufficiente|  
|[CFileException Class](../mfc/reference/cfileexception-class.md)|Eccezione file|  
|[CArchiveException Class](../mfc/reference/carchiveexception-class.md)|Eccezione Archiviazione\/Serializzazione|  
|[CNotSupportedException Class](../mfc/reference/cnotsupportedexception-class.md)|Risposta a richiesta per servizio non supportato|  
|[CResourceException Class](../mfc/reference/cresourceexception-class.md)|Eccezione di allocazione risorse Windows|  
|[CDaoException Class](../mfc/reference/cdaoexception-class.md)|Eccezioni di database \(classi DAO\)|  
|[CDBException Class](../mfc/reference/cdbexception-class.md)|Eccezioni di database \(classi ODBC\)|  
|[COleException Class](../mfc/reference/coleexception-class.md)|Eccezioni OLE|  
|[COleDispatchException Class](../mfc/reference/coledispatchexception-class.md)|Eccezioni dispatch \(automazione\)|  
|[CUserException Class](../mfc/reference/cuserexception-class.md)|L'eccezione che avvisa l'utente con una finestra di messaggio, quindi genera un [CException Class](../mfc/reference/cexception-class.md) generico|  
  
> [!NOTE]
>  MFC supporta sia le eccezioni C\+\+ che le macro di eccezione MFC.  MFC non supporta direttamente i gestori eccezioni strutturati di Windows NT \(SEH\), come illustrato in [Gestione eccezioni strutturate](http://msdn.microsoft.com/library/windows/desktop/ms680657).  
  
##  <a name="_core_further_reading_about_exceptions"></a> Ulteriori Informazioni Sulle Eccezioni  
 Gli articoli seguenti illustrano l'utilizzo della libreria MFC per la gestione delle eccezione:  
  
-   [Eccezioni: rilevamento ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md)  
  
-   [Eccezioni: esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md)  
  
-   [Eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md)  
  
-   [Eccezioni: generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md)  
  
-   [Eccezioni: eccezioni di database](../mfc/exceptions-database-exceptions.md)  
  
-   [Eccezioni: eccezioni OLE](../mfc/exceptions-ole-exceptions.md)  
  
 Gli articoli seguenti confrontano le macro di eccezione MFC con le parole chiave delle eccezioni C\+\+ e spiegano come è possibile adattare il codice:  
  
-   [Eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md)  
  
-   [Eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md)  
  
-   [Eccezioni: utilizzo di macro MFC ed eccezioni C\+\+](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md)  
  
## Vedere anche  
 [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md)   
 [Come Faccio a: Creare le proprie classi di eccezione personalizzate?](http://go.microsoft.com/fwlink/?LinkId=128045)