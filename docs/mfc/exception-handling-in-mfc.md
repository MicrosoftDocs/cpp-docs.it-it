---
description: 'Altre informazioni su: gestione delle eccezioni in MFC'
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
ms.openlocfilehash: 097f2bf635526769253ef81d5381be82605ab118
ms.sourcegitcommit: 6183207b11575d7b44ebd7c18918e916a0d8c63d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/06/2021
ms.locfileid: "97951554"
---
# <a name="exception-handling-in-mfc"></a>Gestione delle eccezioni in MFC

In questo articolo vengono illustrati i meccanismi di gestione delle eccezioni disponibili in MFC. Sono disponibili due meccanismi:

- Eccezioni C++, disponibili in MFC versione 3,0 e successive

- Macro di eccezioni MFC, disponibili nelle versioni MFC 1,0 e successive

Se si sta scrivendo una nuova applicazione utilizzando MFC, è necessario utilizzare il meccanismo C++. È possibile usare il meccanismo basato su macro se l'applicazione esistente usa già questo meccanismo in maniera estensiva.

È possibile convertire facilmente il codice esistente per utilizzare le eccezioni C++ anziché le macro di eccezioni MFC. I vantaggi della conversione del codice e delle linee guida per questa operazione sono descritti nell'articolo [eccezioni: conversione da macro eccezioni MFC](exceptions-converting-from-mfc-exception-macros.md).

Se un'applicazione è già stata sviluppata usando le macro di eccezioni MFC, è possibile continuare a usare queste macro nel codice esistente, usando le eccezioni C++ nel nuovo codice. L'articolo [eccezioni: modifiche alle macro delle eccezioni nella versione 3,0](exceptions-changes-to-exception-macros-in-version-3-0.md) fornisce linee guida per questa operazione.

> [!NOTE]
> Per abilitare la gestione delle eccezioni C++ nel codice, selezionare Abilita eccezioni C++ nella pagina generazione codice nella cartella C/C++ della finestra di dialogo [pagine delle proprietà](../build/reference/property-pages-visual-cpp.md) del progetto oppure usare l'opzione del compilatore [/EHsc](../build/reference/eh-exception-handling-model.md) .

Questo articolo include gli argomenti seguenti:

- [Quando utilizzare le eccezioni](#_core_when_to_use_exceptions)

- [Supporto delle eccezioni MFC](#_core_mfc_exception_support)

- [Ulteriori informazioni sulle eccezioni](#_core_further_reading_about_exceptions)

## <a name="when-to-use-exceptions"></a><a name="_core_when_to_use_exceptions"></a> Quando usare le eccezioni

Quando una funzione viene chiamata durante l'esecuzione del programma, possono verificarsi tre categorie di risultati: esecuzione normale, esecuzione errata o esecuzione anomala. Ogni categoria è descritta di seguito.

- Esecuzione normale

   La funzione può essere eseguita normalmente e restituire. Alcune funzioni restituiscono un codice risultato al chiamante, che indica il risultato della funzione. I codici di risultato possibili sono definiti rigorosamente per la funzione e rappresentano l'intervallo dei possibili risultati della funzione. Il codice risultato può indicare l'esito positivo o negativo oppure può indicare un particolare tipo di errore che rientra nell'intervallo normale di aspettative. Ad esempio, una funzione di stato file può restituire un codice che indica che il file non esiste. Si noti che il termine "codice errore" non viene usato perché un codice risultato rappresenta uno dei molti risultati previsti.

- Esecuzione errata

   Il chiamante commette un errore nel passaggio di argomenti alla funzione o chiama la funzione in un contesto non appropriato. Questa situazione causa un errore e deve essere rilevata da un'asserzione durante lo sviluppo del programma. Per ulteriori informazioni sulle asserzioni, vedere [asserzioni C/C++](/visualstudio/debugger/c-cpp-assertions).

- Esecuzione anomala

   L'esecuzione anomala include situazioni in cui le condizioni al di fuori del controllo del programma, ad esempio gli errori di memoria insufficiente o di I/O, influiscono sul risultato della funzione. Le situazioni anomale devono essere gestite tramite l'intercettazione e la generazione di eccezioni.

L'utilizzo delle eccezioni è particolarmente appropriato per l'esecuzione anomala.

## <a name="mfc-exception-support"></a><a name="_core_mfc_exception_support"></a> Supporto delle eccezioni MFC

Se si usano direttamente le eccezioni C++ o si usano le macro di eccezioni MFC, si userà la [classe CException](reference/cexception-class.md) o `CException` gli oggetti derivati da che possono essere generati dal Framework o dall'applicazione.

Nella tabella seguente vengono illustrate le eccezioni predefinite fornite da MFC.

|Exception (classe)|Significato|
|---------------------|-------------|
|[Classe CMemoryException](reference/cmemoryexception-class.md)|Memoria insufficiente|
|[CFileexception (classe)](reference/cfileexception-class.md)|Eccezione file|
|[Classe CArchiveException](reference/carchiveexception-class.md)|Eccezione di archiviazione/serializzazione|
|[Classe CNotSupportedException](reference/cnotsupportedexception-class.md)|Risposta alla richiesta di un servizio non supportato|
|[Classe CResourceException](reference/cresourceexception-class.md)|Eccezione di allocazione risorse Windows|
|[Classe CDaoException](reference/cdaoexception-class.md)|Eccezioni di database (classi DAO)|
|[Classe CDBException](reference/cdbexception-class.md)|Eccezioni di database (classi ODBC)|
|[COleexception (classe)](reference/coleexception-class.md)|OLE (eccezioni)|
|[Classe COleDispatchException](reference/coledispatchexception-class.md)|Eccezioni dispatch (automazione)|
|[Classe CUserException](reference/cuserexception-class.md)|Eccezione che avvisa l'utente con una finestra di messaggio, quindi genera una [classe CException](reference/cexception-class.md) generica|

A partire dalla versione 3.0, MCF utilizza le eccezioni C++, ma supporta ancora le precedenti macro di gestione delle eccezioni, che sono simili, nella forma, alle eccezioni C++. Sebbene per la creazione di nuovi programmi non sia consigliato utilizzare tali macro, le stesse sono ancora supportate per garantire la compatibilità con le versioni precedenti. Nei programmi che già utilizzano le macro, è possibile usare liberamente anche le eccezioni C++. Durante la pre-elaborazione, le macro restituiscono le parole chiave di gestione delle eccezioni definite nell'implementazione MSVC del linguaggio C++ a partire dalla versione Visual C++ 2,0. È possibile lasciare le macro di gestione delle eccezioni esistenti al loro posto, quando si inizia a utilizzare le eccezioni C++. Per informazioni sulla combinazione di macro e la gestione delle eccezioni C++ e sulla conversione di codice obsoleto per l'uso del nuovo meccanismo, vedere gli articoli [eccezioni: utilizzo di macro MFC ed eccezioni c++](exceptions-using-mfc-macros-and-cpp-exceptions.md) ed [eccezioni: conversione da macro di eccezioni MFC](exceptions-converting-from-mfc-exception-macros.md). Le macro delle eccezioni MFC precedenti, se ancora utilizzate, restituiscono parole chiave delle eccezioni C++. Vedere [eccezioni: modifiche alle macro delle eccezioni nella versione 3,0](exceptions-changes-to-exception-macros-in-version-3-0.md). MFC non supporta direttamente i gestori di eccezioni strutturate (SEH) di Windows NT, come descritto in [gestione delle eccezioni strutturata](/windows/win32/debug/structured-exception-handling).

## <a name="further-reading-about-exceptions"></a><a name="_core_further_reading_about_exceptions"></a> Ulteriori informazioni sulle eccezioni

Negli articoli seguenti viene illustrato l'utilizzo della libreria MFC per la gestione delle eccezioni:

- [Eccezioni: rilevamento ed eliminazione di eccezioni](exceptions-catching-and-deleting-exceptions.md)

- [Eccezioni: esame del contenuto delle eccezioni](exceptions-examining-exception-contents.md)

- [Eccezioni: rilascio di oggetti nelle eccezioni](exceptions-freeing-objects-in-exceptions.md)

- [Eccezioni: generazione di eccezioni da funzioni personalizzate](exceptions-throwing-exceptions-from-your-own-functions.md)

- [Eccezioni: eccezioni di database](exceptions-database-exceptions.md)

- [Eccezioni: eccezioni OLE](exceptions-ole-exceptions.md)

Negli articoli seguenti vengono confrontate le macro di eccezioni MFC con le parole chiave dell'eccezione C++ e viene illustrato come è possibile adattare il codice:

- [Eccezioni: modifiche alle macro delle eccezioni nella versione 3,0](exceptions-changes-to-exception-macros-in-version-3-0.md)

- [Eccezioni: conversione da macro di eccezioni MFC](exceptions-converting-from-mfc-exception-macros.md)

- [Eccezioni: utilizzo di macro MFC ed eccezioni C++](exceptions-using-mfc-macros-and-cpp-exceptions.md)

## <a name="see-also"></a>Vedere anche

[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)
