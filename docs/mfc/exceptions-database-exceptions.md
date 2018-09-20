---
title: 'Eccezioni: Eccezioni di Database | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DAO [MFC], exceptions
- exceptions [MFC], database
- exception handling [MFC], databases
- ODBC exceptions [MFC]
- ODBC [MFC], exceptions
- database exceptions [MFC]
- databases [MFC], exception handling
- error codes [MFC], database exception handling
ms.assetid: 28daf260-f824-4be6-aecc-1f859e6dec26
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 804e93c45e4fb4d95b097c78d20df6a252626a36
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46387367"
---
# <a name="exceptions-database-exceptions"></a>Eccezioni: eccezioni di database

Questo articolo illustra come gestire le eccezioni di database. La maggior parte del materiale in questo articolo si applica se si lavora con le classi MFC per Open Database Connectivity (ODBC) o le classi MFC per oggetti DAO (Data Access). Materiale specifici di uno o l'altro modello è contrassegnato in modo esplicito. Gli argomenti trattati includono:

- [Approcci alla gestione delle eccezioni](#_core_approaches_to_exception_handling)

- [Un esempio di gestione delle eccezioni di database](#_core_a_database_exception.2d.handling_example)

##  <a name="_core_approaches_to_exception_handling"></a> Approcci alla gestione delle eccezioni

L'approccio non cambiano se si lavora con DAO o ODBC.

È sempre consigliabile scrivere gestori di eccezioni per gestire le condizioni eccezionali.

Il metodo più pratico per intercettare le eccezioni di database consiste nel testare l'applicazione con gli scenari di eccezione. Determinare le eccezioni probabile che possono verificarsi per un'operazione nel codice e forzare la generazione dell'eccezione. Quindi esaminare l'output di traccia per vedere l'eccezione viene generata un'eccezione oppure esaminare le informazioni di errore restituito nel debugger. Ciò consente di sapere che restituiscono codici che verrà visualizzato per gli scenari di eccezione in uso.

### <a name="error-codes-used-for-odbc-exceptions"></a>Codici di errore utilizzati per le eccezioni di ODBC

Oltre ai codici restituiti definiti dal framework, che hanno il formato dei nomi **AFX_SQL_ERROR_XXX**, per alcuni [CDBException](../mfc/reference/cdbexception-class.md) dipendono [ODBC](../data/odbc/odbc-basics.md) codici restituiti. I codici restituiti per le eccezioni di questo tipo hanno il formato dei nomi **SQL_ERROR_XXX**.

I codici restituiti, ovvero definiti dal framework sia definite da ODBC, ovvero che le classi di database possono restituire sono documentati nel [membro dati m_nRetCode](../mfc/reference/cdbexception-class.md#m_nretcode) membro dati della classe `CDBException`. Ulteriori informazioni sui codici restituiti definito da ODBC sono disponibili nel SDK di ODBC *di riferimento per programmatori* in MSDN Library.

### <a name="error-codes-used-for-dao-exceptions"></a>Codici di errore utilizzati per le eccezioni di DAO

Per le eccezioni di DAO, ulteriori informazioni sono in genere disponibili. È possibile accedere a informazioni sugli errori tramite tre membri dati di un elemento intercettato [CDaoException](../mfc/reference/cdaoexception-class.md) oggetto:

- [m_pErrorInfo](../mfc/reference/cdaoexception-class.md#m_perrorinfo) contiene un puntatore a un [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md) oggetto che incapsula informazioni sull'errore nella raccolta del DAO di oggetti di errore associati al database.

- [m_nAfxDaoError](../mfc/reference/cdaoexception-class.md#m_nafxdaoerror) contiene un codice di errore esteso dalle classi DAO MFC. Questi codici di errore, che hanno il formato dei nomi **AFX_DAO_ERROR_XXX**, sono documentati sotto il membro dati in `CDaoException`.

- [m_scode](../mfc/reference/cdaoexception-class.md#m_scode) contiene un oggetto OLE **SCODE** da DAO, se applicabile. Raramente è necessario comunque a funzionare con questo codice di errore. In genere ulteriori informazioni sono disponibili nei membri di altri due dati. Visualizzare il membro dati per altre informazioni **SCODE** valori.

Sono disponibili nella classe informazioni aggiuntive sugli errori, il tipo di oggetto DAO errore e la raccolta di errori di DAO DAO [CDaoException](../mfc/reference/cdaoexception-class.md).

##  <a name="_core_a_database_exception.2d.handling_example"></a> Un esempio di gestione delle eccezioni di Database

Nell'esempio seguente tenta di costruire una [CRecordset](../mfc/reference/crecordset-class.md)-oggetto nell'heap con derivato il **nuove** operatore e quindi aprire il set di record (per un'origine dati ODBC). Per un esempio simile per le classi DAO, vedere "Esempio di eccezione DAO" riportata di seguito.

### <a name="odbc-exception-example"></a>Esempio di eccezione ODBC

Il [Open](../mfc/reference/crecordset-class.md#open) funzione membro è stato possibile generare un'eccezione (di tipo [CDBException](../mfc/reference/cdbexception-class.md) per le classi ODBC), pertanto questo codice tra parentesi quadre i `Open` chiamata con un **provare** blocco. Le successive **intercettare** blocco rileverà un `CDBException`. È possibile esaminare l'oggetto eccezione, chiamato `e`, ma in questo caso è sufficiente sapere che non è riuscito il tentativo di creare un set di record. Il **catch** blocco consente di visualizzare una finestra di messaggio e pulitura, eliminando l'oggetto recordset.

[!code-cpp[NVC_MFCDatabase#36](../mfc/codesnippet/cpp/exceptions-database-exceptions_1.cpp)]

### <a name="dao-exception-example"></a>Esempio di eccezione DAO

L'esempio DAO è simile a quello per ODBC, ma in genere è possibile recuperare più tipi di informazioni. Il codice seguente tenta anche di aprire un set di record. Se tale tentativo genera un'eccezione, è possibile esaminare un membro di dati dell'oggetto eccezione per le informazioni sull'errore. Come con il precedente esempio di ODBC, probabilmente è sufficiente sapere che non è riuscito il tentativo di creare un set di record.

[!code-cpp[NVC_MFCDatabase#37](../mfc/codesnippet/cpp/exceptions-database-exceptions_2.cpp)]

Questo codice ottiene una stringa di messaggio di errore dal [m_pErrorInfo](../mfc/reference/cdaoexception-class.md#m_perrorinfo) membro dell'oggetto eccezione. Quando viene generata l'eccezione, MFC viene compilato questo membro.

Per una discussione le informazioni sull'errore restituito da una `CDaoException` oggetti, vedere le classi [CDaoException](../mfc/reference/cdaoexception-class.md) e [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md).

Quando si lavora con database Microsoft Jet (mdb) e nella maggior parte dei casi quando si lavora con ODBC, esisterà un solo oggetto di errore. Nel raro caso quando si usa un'origine dati ODBC e sono presenti più errori, è possibile scorrere in ciclo raccolta di errori del DAO in base al numero di errori restituiti da [CDaoException:: GetErrorCount](../mfc/reference/cdaoexception-class.md#geterrorcount). Ogni fase del ciclo, chiamare [CDaoException:: GetErrorInfo](../mfc/reference/cdaoexception-class.md#geterrorinfo) per ricaricare il `m_pErrorInfo` (membro dati).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

