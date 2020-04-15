---
title: 'Eccezioni: eccezioni di database'
ms.date: 09/17/2019
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
ms.openlocfilehash: 894960338a7e8c293054ade00e0cdf3295648bb7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366620"
---
# <a name="exceptions-database-exceptions"></a>Eccezioni: eccezioni di database

In questo articolo viene illustrato come gestire le eccezioni di database. La maggior parte del materiale in questo articolo si applica se si utilizzano le classi MFC per Open Database Connectivity (ODBC) o le classi MFC per Data Access Objects (DAO). Il materiale specifico dell'uno o dell'altro modello è contrassegnato in modo esplicito. Gli argomenti includono:

- [Approcci alla gestione delle eccezioni](#_core_approaches_to_exception_handling)

- [Esempio di gestione delle eccezioni del database](#_core_a_database_exception.2d.handling_example)

## <a name="approaches-to-exception-handling"></a><a name="_core_approaches_to_exception_handling"></a>Approcci alla gestione delle eccezioni

L'approccio è lo stesso sia che si lavori con DAO (obsoleto) o ODBC.

È sempre necessario scrivere gestori di eccezioni per gestire condizioni eccezionali.

L'approccio più pragmatico per intercettare le eccezioni del database consiste nel testare l'applicazione con scenari di eccezione. Determinare le eccezioni probabili che potrebbero verificarsi per un'operazione nel codice e forzare l'eccezione. Esaminare quindi l'output di traccia per vedere quale eccezione viene generata o esaminare le informazioni sull'errore restituito nel debugger. In questo modo è possibile sapere quali codici restituiti verranno visualizzati per gli scenari di eccezione in uso.

### <a name="error-codes-used-for-odbc-exceptions"></a>Codici di errore utilizzati per le eccezioni ODBCError Codes Used for ODBC Exceptions

Oltre ai codici restituiti definiti dal framework, che hanno nomi nel formato **AFX_SQL_ERROR_XXX**, alcune [CDBExceptions](../mfc/reference/cdbexception-class.md) sono basate sui codici restituiti [ODBC.](../data/odbc/odbc-basics.md) I codici restituiti per tali eccezioni hanno nomi nel formato **SQL_ERROR_XXX**.

I codici restituiti, sia definiti dal framework che definiti da ODBC, [m_nRetCode](../mfc/reference/cdbexception-class.md#m_nretcode) che possono `CDBException`essere restituiti dalle classi di database sono documentati nel membro dati m_nRetCode della classe . Ulteriori informazioni sui codici restituiti definiti da ODBC sono disponibili in ODBC SDK *Programmer's Reference* in MSDN Library.

### <a name="error-codes-used-for-dao-exceptions"></a>Codici di errore utilizzati per le eccezioni DAOError Codes Used for DAO Exceptions

Per le eccezioni DAO, sono in genere disponibili ulteriori informazioni. È possibile accedere alle informazioni sugli errori tramite tre membri dati di un oggetto CDaoException intercettato:You can access error information through three data members of a caught [CDaoException](../mfc/reference/cdaoexception-class.md) object:

- [m_pErrorInfo](../mfc/reference/cdaoexception-class.md#m_perrorinfo) contiene un puntatore a un [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md) oggetto che incapsula informazioni sull'errore nella raccolta di DAO di oggetti di errore associati al database.

- [m_nAfxDaoError](../mfc/reference/cdaoexception-class.md#m_nafxdaoerror) contiene un codice di errore esteso dalle classi DAO MFC. Questi codici di errore, che **AFX_DAO_ERROR_XXX**hanno nomi nel formato AFX_DAO_ERROR_XXX `CDaoException`, sono documentati sotto il membro dati in .

- [m_scode](../mfc/reference/cdaoexception-class.md#m_scode) contiene un OLE **SCODE** da DAO, se applicabile. Raramente sarà necessario utilizzare questo codice di errore, tuttavia. In genere sono disponibili ulteriori informazioni negli altri due membri dati. Vedere il membro dati per ulteriori informazioni sui valori **SCODE.**

Ulteriori informazioni sugli errori DAO, il tipo di oggetto DAO Error e l'insieme DAO Errors sono disponibili nella classe [CDaoException](../mfc/reference/cdaoexception-class.md).

## <a name="a-database-exception-handling-example"></a><a name="_core_a_database_exception.2d.handling_example"></a>Esempio di gestione delle eccezioni del databaseA Database Exception-Handling Example

Nell'esempio seguente si tenta di costruire un [CRecordset](../mfc/reference/crecordset-class.md)-oggetto derivato nell'heap con l'operatore **new** e quindi aprire il recordset (per un'origine dati ODBC). Per un esempio simile per le classi DAO, vedere "DAO Exception Example" di seguito.

### <a name="odbc-exception-example"></a>Esempio di eccezione ODBC

Il [Open](../mfc/reference/crecordset-class.md#open) funzione membro potrebbe generare un'eccezione (di tipo [CDBException](../mfc/reference/cdbexception-class.md) per le classi ODBC), pertanto questo codice racchiude la `Open` chiamata con un blocco **try.** Il blocco **catch** successivo `CDBException`catturerà un oggetto . È possibile esaminare l'oggetto eccezione stesso, denominato `e`, ma in questo caso è sufficiente sapere che il tentativo di creare un recordset non è riuscito. Il blocco **catch** visualizza una finestra di messaggio e pulisce eliminando l'oggetto recordset.

[!code-cpp[NVC_MFCDatabase#36](../mfc/codesnippet/cpp/exceptions-database-exceptions_1.cpp)]

### <a name="dao-exception-example"></a>Esempio di eccezione DAO

L'esempio DAO è simile all'esempio per ODBC, ma in genere è possibile recuperare più tipi di informazioni. Il codice seguente tenta inoltre di aprire un recordset. Se tale tentativo genera un'eccezione, è possibile esaminare un membro dati dell'oggetto eccezione per informazioni sull'errore. Come nell'esempio ODBC precedente, è probabilmente sufficiente per sapere che il tentativo di creare un recordset non è riuscito.

[!code-cpp[NVC_MFCDatabase#37](../mfc/codesnippet/cpp/exceptions-database-exceptions_2.cpp)]

Questo codice ottiene una stringa di messaggio di errore dal [m_pErrorInfo](../mfc/reference/cdaoexception-class.md#m_perrorinfo) membro dell'oggetto eccezione. MFC riempie questo membro quando genera l'eccezione.

Per una descrizione delle informazioni sull'errore restituite da un `CDaoException` oggetto, vedere le classi [CDaoException](../mfc/reference/cdaoexception-class.md) e [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md).

Quando si lavora con database Microsoft Jet (mdb) e nella maggior parte dei casi quando si lavora con ODBC, sarà presente un solo oggetto errore. Nel raro caso in cui si utilizza un'origine dati ODBC e si verificano più errori, è possibile scorrere l'insieme Errors di DAO in base al numero di errori restituiti da [CDaoException::GetErrorCount](../mfc/reference/cdaoexception-class.md#geterrorcount). Ogni volta che nel ciclo, chiamare [CDaoException::GetErrorInfo](../mfc/reference/cdaoexception-class.md#geterrorinfo) per riempire nuovamente il `m_pErrorInfo` membro dati.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
