---
description: 'Altre informazioni su: eccezioni: eccezioni di database'
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
ms.openlocfilehash: 3e45f887d51b4b81196cd08d11f426f4ee6d4481
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290648"
---
# <a name="exceptions-database-exceptions"></a>Eccezioni: eccezioni di database

Questo articolo illustra come gestire le eccezioni del database. La maggior parte del materiale contenuto in questo articolo si applica indipendentemente dal fatto che si stiano utilizzando le classi MFC per Open Database Connectivity (ODBC) o le classi MFC per DAO (Data Access Objects). Il materiale specifico di un oggetto o di un altro modello è contrassegnato in modo esplicito. Gli argomenti includono:

- [Approcci alla gestione delle eccezioni](#_core_approaches_to_exception_handling)

- [Esempio di gestione delle eccezioni del database](#_core_a_database_exception.2d.handling_example)

## <a name="approaches-to-exception-handling"></a><a name="_core_approaches_to_exception_handling"></a> Approcci alla gestione delle eccezioni

L'approccio è lo stesso se si utilizza DAO (obsoleto) o ODBC.

È necessario scrivere sempre gestori di eccezioni per gestire condizioni eccezionali.

L'approccio più pragmatico per intercettare le eccezioni del database consiste nel testare l'applicazione con scenari di eccezione. Determinare le eccezioni probabili che possono verificarsi per un'operazione nel codice e forzare l'eccezione. Esaminare quindi l'output di traccia per verificare quale eccezione viene generata o esaminare le informazioni di errore restituite nel debugger. In questo modo è possibile sapere quali codici restituiti verranno visualizzati per gli scenari di eccezione in uso.

### <a name="error-codes-used-for-odbc-exceptions"></a>Codici di errore utilizzati per le eccezioni ODBC

Oltre ai codici restituiti definiti dal Framework, che hanno nomi del modulo **AFX_SQL_ERROR_XXX**, alcuni [CDBException](reference/cdbexception-class.md) sono basati sui codici restituiti [ODBC](../data/odbc/odbc-basics.md) . I codici restituiti per tali eccezioni hanno nomi nel formato **SQL_ERROR_XXX**.

I codici restituiti, sia definiti dal Framework che definiti da ODBC, che possono essere restituiti dalle classi di database sono documentati sotto il membro dati [m_nRetCode](reference/cdbexception-class.md#m_nretcode) della classe `CDBException` . Ulteriori informazioni sui codici restituiti definiti da ODBC sono disponibili in [ODBC Programmer ' s Reference](/sql/odbc/reference/odbc-programmer-s-reference).

### <a name="error-codes-used-for-dao-exceptions"></a>Codici di errore utilizzati per le eccezioni DAO

Per le eccezioni DAO, sono in genere disponibili altre informazioni. È possibile accedere alle informazioni sugli errori tramite tre membri dati di un oggetto [CDaoException](reference/cdaoexception-class.md) rilevato:

- [m_pErrorInfo](reference/cdaoexception-class.md#m_perrorinfo) contiene un puntatore a un oggetto [CDaoErrorInfo](reference/cdaoerrorinfo-structure.md) che incapsula le informazioni sull'errore nella raccolta di oggetti Error di DAO associata al database.

- [m_nAfxDaoError](reference/cdaoexception-class.md#m_nafxdaoerror) contiene un codice di errore esteso delle classi DAO MFC. Questi codici di errore, che hanno nomi di form **AFX_DAO_ERROR_XXX**, sono documentati sotto il membro dati in `CDaoException` .

- [m_scode](reference/cdaoexception-class.md#m_scode) contiene un valore OLE **SCODE** da DAO, se applicabile. Tuttavia, raramente è necessario usare questo codice di errore. In genere altre informazioni sono disponibili negli altri due membri dati. Per ulteriori informazioni sui valori di **SCODE** , vedere il membro dati.

Ulteriori informazioni sugli errori DAO, il tipo di oggetto errore DAO e la raccolta di errori DAO sono disponibili nella classe [CDaoException](reference/cdaoexception-class.md).

## <a name="a-database-exception-handling-example"></a><a name="_core_a_database_exception.2d.handling_example"></a> Esempio di database Exception-Handling

Nell'esempio seguente viene effettuato un tentativo di costruire un oggetto derivato da [CRecordset](reference/crecordset-class.md)nell'heap con l' **`new`** operatore, quindi viene aperto il recordset (per un'origine dati ODBC). Per un esempio simile per le classi DAO, vedere "esempio di eccezione DAO" riportata di seguito.

### <a name="odbc-exception-example"></a>Esempio di eccezione ODBC

La funzione membro [Open](reference/crecordset-class.md#open) potrebbe generare un'eccezione (di tipo [CDBException](reference/cdbexception-class.md) per le classi ODBC), pertanto questo codice racchiude la `Open` chiamata con un **`try`** blocco. Il blocco successivo rileverà **`catch`** un oggetto `CDBException` . È possibile esaminare l'oggetto eccezione, denominato `e` , ma in questo caso è sufficiente capire che il tentativo di creare un recordset non è riuscito. Il **`catch`** blocco Visualizza una finestra di messaggio e si pulisce eliminando l'oggetto recordset.

[!code-cpp[NVC_MFCDatabase#36](codesnippet/cpp/exceptions-database-exceptions_1.cpp)]

### <a name="dao-exception-example"></a>Esempio di eccezione DAO

L'esempio di DAO è simile all'esempio per ODBC, ma in genere è possibile recuperare più tipi di informazioni. Il codice seguente tenta anche di aprire un recordset. Se il tentativo genera un'eccezione, è possibile esaminare un membro dati dell'oggetto eccezione per ottenere informazioni sull'errore. Come per l'esempio ODBC precedente, probabilmente è sufficiente che il tentativo di creare un recordset non sia riuscito.

[!code-cpp[NVC_MFCDatabase#37](codesnippet/cpp/exceptions-database-exceptions_2.cpp)]

Questo codice ottiene una stringa del messaggio di errore dal membro [m_pErrorInfo](reference/cdaoexception-class.md#m_perrorinfo) dell'oggetto eccezione. MFC compila questo membro quando genera l'eccezione.

Per una descrizione delle informazioni sull'errore restituite da un `CDaoException` oggetto, vedere le classi [CDaoException](reference/cdaoexception-class.md) e [CDaoErrorInfo](reference/cdaoerrorinfo-structure.md).

Quando si utilizzano i database di Microsoft Jet (MDB) e, nella maggior parte dei casi, quando si utilizza ODBC, sarà presente un solo oggetto Error. Nel rari casi in cui si utilizza un'origine dati ODBC e si verificano più errori, è possibile eseguire il ciclo tramite la raccolta di errori di DAO in base al numero di errori restituiti da [CDaoException:: GetErrorCount](reference/cdaoexception-class.md#geterrorcount). Ogni volta che si utilizza il ciclo, chiamare [CDaoException:: GetErrorInfo](reference/cdaoexception-class.md#geterrorinfo) per ricaricare il `m_pErrorInfo` membro dati.

## <a name="see-also"></a>Vedi anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)
