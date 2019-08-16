---
title: Gestione delle eccezioni in MFC
ms.date: 11/04/2016
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
ms.openlocfilehash: e8c0f1feba566ef9b961edcfacb9124830f9851d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508626"
---
# <a name="exception-handling-in-mfc"></a>Gestione delle eccezioni in MFC

In questo articolo vengono illustrati i meccanismi di gestione delle eccezioni disponibili in MFC. Sono disponibili due meccanismi:

- C++eccezioni, disponibili nella versione MFC 3,0 e successive

- Macro di eccezioni MFC, disponibili nelle versioni MFC 1,0 e successive

Se si sta scrivendo una nuova applicazione utilizzando MFC, è necessario utilizzare il C++ meccanismo. È possibile usare il meccanismo basato su macro se l'applicazione esistente usa già questo meccanismo in maniera estensiva.

È possibile convertire facilmente il codice esistente in C++ modo da utilizzare le eccezioni anziché le macro di eccezioni MFC. I vantaggi della conversione del codice e delle linee guida per questa operazione sono descritti [nell'articolo eccezioni: Conversione da macro](../mfc/exceptions-converting-from-mfc-exception-macros.md)di eccezioni MFC.

Se un'applicazione è già stata sviluppata usando le macro di eccezioni MFC, è possibile continuare a usare queste macro nel codice esistente, usando C++ le eccezioni nel nuovo codice. Eccezioni degli [articoli: Le modifiche apportate alle macro](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md) di eccezioni nella versione 3,0 forniscono linee guida per questa operazione.

> [!NOTE]
>  Per abilitare C++ la gestione delle eccezioni nel codice, selezionare C++ Abilita eccezioni nella pagina generazione codice nella cartella C/C++ della finestra di dialogo [pagine delle proprietà](../build/reference/property-pages-visual-cpp.md) del progetto oppure usare l'opzione del compilatore [/EHsc](../build/reference/eh-exception-handling-model.md) .

Questo articolo descrive gli argomenti seguenti:

- [Quando usare le eccezioni](#_core_when_to_use_exceptions)

- [Supporto delle eccezioni MFC](#_core_mfc_exception_support)

- [Ulteriori informazioni sulle eccezioni](#_core_further_reading_about_exceptions)

##  <a name="_core_when_to_use_exceptions"></a>Quando usare le eccezioni

Quando una funzione viene chiamata durante l'esecuzione del programma, possono verificarsi tre categorie di risultati: esecuzione normale, esecuzione errata o esecuzione anomala. Ogni categoria è descritta di seguito.

- Esecuzione normale

   La funzione può essere eseguita normalmente e restituire. Alcune funzioni restituiscono un codice risultato al chiamante, che indica il risultato della funzione. I codici di risultato possibili sono definiti rigorosamente per la funzione e rappresentano l'intervallo dei possibili risultati della funzione. Il codice risultato può indicare l'esito positivo o negativo oppure può indicare un particolare tipo di errore che rientra nell'intervallo normale di aspettative. Ad esempio, una funzione di stato file può restituire un codice che indica che il file non esiste. Si noti che il termine "codice errore" non viene usato perché un codice risultato rappresenta uno dei molti risultati previsti.

- Esecuzione errata

   Il chiamante commette un errore nel passaggio di argomenti alla funzione o chiama la funzione in un contesto non appropriato. Questa situazione causa un errore e deve essere rilevata da un'asserzione durante lo sviluppo del programma. Per ulteriori informazioni sulle asserzioni, vedere [C/C++ asserzioni](/visualstudio/debugger/c-cpp-assertions).

- Esecuzione anomala

   L'esecuzione anomala include situazioni in cui le condizioni al di fuori del controllo del programma, ad esempio gli errori di memoria insufficiente o di I/O, influiscono sul risultato della funzione. Le situazioni anomale devono essere gestite tramite l'intercettazione e la generazione di eccezioni.

L'utilizzo delle eccezioni è particolarmente appropriato per l'esecuzione anomala.

##  <a name="_core_mfc_exception_support"></a>Supporto delle eccezioni MFC

Se si usano direttamente C++ le eccezioni o si usano le macro di eccezioni MFC, si useranno la `CException` [classe CException](../mfc/reference/cexception-class.md) o gli oggetti derivati da che possono essere generati dal Framework o dall'applicazione.

Nella tabella seguente vengono illustrate le eccezioni predefinite fornite da MFC.

|Exception (classe)|Significato|
|---------------------|-------------|
|[Classe CMemoryException](../mfc/reference/cmemoryexception-class.md)|Memoria insufficiente|
|[Classe CFileException](../mfc/reference/cfileexception-class.md)|Eccezione file|
|[Classe CArchiveException](../mfc/reference/carchiveexception-class.md)|Eccezione di archiviazione/serializzazione|
|[Classe CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md)|Risposta alla richiesta di un servizio non supportato|
|[Classe CResourceException](../mfc/reference/cresourceexception-class.md)|Eccezione di allocazione risorse Windows|
|[Classe CDaoException](../mfc/reference/cdaoexception-class.md)|Eccezioni di database (classi DAO)|
|[Classe CDBException](../mfc/reference/cdbexception-class.md)|Eccezioni di database (classi ODBC)|
|[Classe COleException](../mfc/reference/coleexception-class.md)|OLE (eccezioni)|
|[Classe COleDispatchException](../mfc/reference/coledispatchexception-class.md)|Eccezioni dispatch (automazione)|
|[Classe CUserException](../mfc/reference/cuserexception-class.md)|Eccezione che avvisa l'utente con una finestra di messaggio, quindi genera una [classe CException](../mfc/reference/cexception-class.md) generica|

> [!NOTE]
>  MFC supporta sia C++ le eccezioni sia le macro di eccezioni MFC. MFC non supporta direttamente i gestori di eccezioni strutturate (SEH) di Windows NT, come descritto in [gestione delle eccezioni strutturata](/windows/win32/debug/structured-exception-handling).

##  <a name="_core_further_reading_about_exceptions"></a>Ulteriori informazioni sulle eccezioni

Negli articoli seguenti viene illustrato l'utilizzo della libreria MFC per la gestione delle eccezioni:

- [Eccezioni: intercettazione ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md)

- [Eccezioni: esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md)

- [Eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md)

- [Eccezioni: generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md)

- [Eccezioni: eccezioni del database](../mfc/exceptions-database-exceptions.md)

- [Eccezioni: eccezioni OLE](../mfc/exceptions-ole-exceptions.md)

Negli articoli seguenti vengono confrontate le macro di C++ eccezioni MFC con le parole chiave di eccezione e viene illustrato come è possibile adattare il codice:

- [Eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md)

- [Eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md)

- [Eccezioni: uso di macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md)

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)<br/>
[Procedura: Creare classi di eccezioni personalizzate](https://go.microsoft.com/fwlink/p/?linkid=128045)
