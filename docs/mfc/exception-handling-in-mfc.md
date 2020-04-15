---
title: Gestione delle eccezioni in MFC
ms.date: 11/19/2019
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
ms.openlocfilehash: d339ec98dabc6cb24fc7106c4c7238cd6a14a71b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365527"
---
# <a name="exception-handling-in-mfc"></a>Gestione delle eccezioni in MFC

In questo articolo vengono illustrati i meccanismi di gestione delle eccezioni disponibili in MFC. Sono disponibili due meccanismi:

- Eccezioni in C, disponibile in MFC versione 3.0 e successive

- Le macro di eccezione MFC, disponibili nelle versioni 1.0 e successive di MFC

Se si sta scrivendo una nuova applicazione utilizzando MFC, è necessario utilizzare il meccanismo di C . È possibile utilizzare il meccanismo basato su macro se l'applicazione esistente utilizza già ampiamente tale meccanismo.

È possibile convertire facilmente il codice esistente in modo da utilizzare le eccezioni c'è invece delle macro di eccezioni MFC. I vantaggi della conversione del codice e le linee guida per eseguire questa operazione sono descritti nell'articolo [Eccezioni: conversione da macro](../mfc/exceptions-converting-from-mfc-exception-macros.md)di eccezioni MFC .

Se è già stata sviluppata un'applicazione utilizzando le macro di eccezione MFC, è possibile continuare a utilizzare queste macro nel codice esistente, mentre si utilizzano le eccezioni C . L'articolo [Eccezioni: modifiche alle macro di eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md) fornisce linee guida per eseguire questa operazione.

> [!NOTE]
> Per abilitare la gestione delle eccezioni in C, selezionare Abilita eccezioni C, nella pagina Generazione codice nella cartella C/C, della finestra di dialogo [Pagine delle proprietà](../build/reference/property-pages-visual-cpp.md) del progetto, oppure utilizzare l'opzione del compilatore [/EHsc.](../build/reference/eh-exception-handling-model.md)

Questo articolo include gli argomenti seguenti:

- [Quando utilizzare le eccezioni](#_core_when_to_use_exceptions)

- [Supporto delle eccezioni MFC](#_core_mfc_exception_support)

- [Ulteriori informazioni sulle eccezioni](#_core_further_reading_about_exceptions)

## <a name="when-to-use-exceptions"></a><a name="_core_when_to_use_exceptions"></a>Quando utilizzare le eccezioniWhen to Use Exceptions

Quando una funzione viene chiamata durante l'esecuzione del programma, possono verificarsi tre categorie di risultati: esecuzione normale, esecuzione errata o esecuzione anomala. Ogni categoria è descritta di seguito.

- Esecuzione normale

   La funzione può essere eseguita normalmente e restituire. Alcune funzioni restituiscono un codice di risultato al chiamante, che indica il risultato della funzione. I possibili codici risultato sono rigorosamente definiti per la funzione e rappresentano l'intervallo di possibili risultati della funzione. Il codice risultato può indicare l'esito positivo o negativo o può anche indicare un particolare tipo di errore che rientra nell'intervallo normale delle aspettative. Ad esempio, una funzione di stato del file può restituire un codice che indica che il file non esiste. Si noti che il termine "codice di errore" non viene utilizzato perché un codice di risultato rappresenta uno dei molti risultati previsti.

- Esecuzione errata

   Il chiamante commette un errore nel passaggio di argomenti alla funzione o chiama la funzione in un contesto non appropriato. Questa situazione causa un errore e deve essere rilevata da un'asserzione durante lo sviluppo del programma. (Per ulteriori informazioni sulle asserzioni, vedere [Asserzioni C/C](/visualstudio/debugger/c-cpp-assertions)

- Esecuzione anomala

   L'esecuzione anomala include situazioni in cui condizioni esterne al controllo del programma, ad esempio memoria insufficiente o errori di I/O, influenzano il risultato della funzione. Le situazioni anomale devono essere gestite intercettando e generando eccezioni.

L'utilizzo delle eccezioni è particolarmente appropriato per l'esecuzione anomala.

## <a name="mfc-exception-support"></a><a name="_core_mfc_exception_support"></a>Supporto delle eccezioni MFC

Sia che si utilizzino direttamente le eccezioni di C, sia che `CException`si utilizzino le macro delle eccezioni MFC, si utilizzeranno la [classe CException](../mfc/reference/cexception-class.md) o gli oggetti derivati che possono essere generati dal framework o dall'applicazione.

Nella tabella seguente vengono illustrate le eccezioni predefinite fornite da MFC.

|Exception (classe)|Significato|
|---------------------|-------------|
|[Classe CMemoryException](../mfc/reference/cmemoryexception-class.md)|Memoria insufficiente|
|[Classe CFileException](../mfc/reference/cfileexception-class.md)|Eccezione file|
|[Classe CArchiveException](../mfc/reference/carchiveexception-class.md)|Eccezione di archiviazione/serializzazione|
|[Classe CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md)|Risposta alla richiesta di servizio non supportato|
|[Classe CResourceException](../mfc/reference/cresourceexception-class.md)|Eccezione di allocazione delle risorse di Windows|
|[Classe CDaoException](../mfc/reference/cdaoexception-class.md)|Eccezioni di database (classi DAO)|
|[Classe CDBException](../mfc/reference/cdbexception-class.md)|Eccezioni di database (classi ODBC)|
|[Classe COleException](../mfc/reference/coleexception-class.md)|OLE (eccezioni)|
|[Classe COleDispatchException](../mfc/reference/coledispatchexception-class.md)|Eccezioni di invio (automazione)|
|[Classe CUserException](../mfc/reference/cuserexception-class.md)|Eccezione che avvisa l'utente con una finestra di messaggio, quindi genera una [classe CException](../mfc/reference/cexception-class.md) genericaException|

A partire dalla versione 3.0, MCF utilizza le eccezioni C++, ma supporta ancora le precedenti macro di gestione delle eccezioni, che sono simili, nella forma, alle eccezioni C++. Sebbene per la creazione di nuovi programmi non sia consigliato utilizzare tali macro, le stesse sono ancora supportate per garantire la compatibilità con le versioni precedenti. Nei programmi che già utilizzano le macro, è possibile usare liberamente anche le eccezioni C++. Durante l'elaborazione, le macro restituiscono le parole chiave di gestione delle eccezioni definite nell'implementazione MSVC del linguaggio C . È possibile lasciare le macro di gestione delle eccezioni esistenti al loro posto, quando si inizia a utilizzare le eccezioni C++. Per informazioni sulla combinazione di macro e gestione delle eccezioni di C, nonché sulla conversione di codice precedente per l'utilizzo del nuovo meccanismo, vedere gli articoli [Eccezioni: utilizzo](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) delle macro MFC e delle eccezioni ed [eccezioni](../mfc/exceptions-converting-from-mfc-exception-macros.md)di C. Le macro delle eccezioni MFC precedenti, se ancora utilizzate, restituiscono parole chiave delle eccezioni C++. Vedere [Eccezioni: modifiche alle macro di eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md). MFC non supporta direttamente i gestori eccezioni strutturati (SEH) di Windows NT, come descritto in [Gestione delle eccezioni strutturata](/windows/win32/debug/structured-exception-handling).

## <a name="further-reading-about-exceptions"></a><a name="_core_further_reading_about_exceptions"></a>Ulteriori informazioni sulle eccezioni

Negli articoli seguenti viene illustrato l'utilizzo della libreria MFC per la gestione delle eccezioni:

- [Eccezioni: rilevamento ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md)

- [Eccezioni: esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md)

- [Eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md)

- [Eccezioni: generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md)

- [Eccezioni: eccezioni di database](../mfc/exceptions-database-exceptions.md)

- [Eccezioni: eccezioni OLE](../mfc/exceptions-ole-exceptions.md)

Negli articoli seguenti vengono confrontate le macro di eccezioni MFC con le parole chiave dell'eccezione di C, e viene illustrato come adattare il codice:

- [Eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md)

- [Eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md)

- [Eccezioni: utilizzo di macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md)

## <a name="see-also"></a>Vedere anche

[Procedure consigliate moderne per la gestione delle eccezioni e degli errori in C](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Procedura: creare classi di eccezioni personalizzateHow Do I: Create my Own Custom Exception Classes](https://go.microsoft.com/fwlink/p/?linkid=128045)
