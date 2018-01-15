---
title: 'Eccezioni: Eccezioni di Database | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e853f2bd6f57c7ccc63e802f013661efb85d9796
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exceptions-database-exceptions"></a>Eccezioni: eccezioni di database
In questo articolo viene illustrato come gestire le eccezioni di database. La maggior parte del materiale in questo articolo si applica se si lavora con le classi MFC per Open Database Connectivity (ODBC) o le classi MFC per oggetti DAO (Data Access). Verrà esplicitamente contrassegnato come materiale specifico a uno o l'altro modello. Gli argomenti trattati includono:  
  
-   [Approcci per la gestione delle eccezioni](#_core_approaches_to_exception_handling)  
  
-   [Un esempio di gestione delle eccezioni di database](#_core_a_database_exception.2d.handling_example)  
  
##  <a name="_core_approaches_to_exception_handling"></a>Approcci per la gestione delle eccezioni  
 Se si lavora con DAO o ODBC, l'approccio è lo stesso.  
  
 È necessario scrivere sempre i gestori di eccezioni per gestire le condizioni eccezionali.  
  
 Il metodo più pratico per intercettare le eccezioni di database è per testare l'applicazione con gli scenari di eccezione. Determinare le probabilità eccezioni che possono verificarsi per un'operazione nel codice e forzare la generazione dell'eccezione. Quindi esaminare l'output di traccia per vedere l'eccezione viene generata, o le informazioni di errore restituito nel debugger. Questo consente di sapere che restituiscono codici che verrà visualizzato per gli scenari di eccezione in uso.  
  
### <a name="error-codes-used-for-odbc-exceptions"></a>Codici di errore utilizzati per le eccezioni di ODBC  
 Oltre a restituire i codici definiti dal framework, che hanno il formato dei nomi **AFX_SQL_ERROR_XXX**, alcune [eccezioni CDBExceptions](../mfc/reference/cdbexception-class.md) si basano [ODBC](../data/odbc/odbc-basics.md) codici restituiti. I codici restituiti per tali eccezioni sono il formato dei nomi **SQL_ERROR_XXX**.  
  
 I codici restituiti, definite dal framework sia definite da ODBC, ovvero che le classi di database possono restituire sono documentati nel [membro dati m_nRetCode](../mfc/reference/cdbexception-class.md#m_nretcode) membro dati della classe `CDBException`. Ulteriori informazioni sui codici restituiti, definito da ODBC sono disponibile nel SDK di ODBC *di riferimento per programmatori* in MSDN Library.  
  
### <a name="error-codes-used-for-dao-exceptions"></a>Codici di errore utilizzati per le eccezioni di DAO  
 Per le eccezioni di DAO, sono in genere disponibili ulteriori informazioni. È possibile accedere a informazioni sugli errori tramite i tre membri dati di un elemento intercettato [CDaoException](../mfc/reference/cdaoexception-class.md) oggetto:  
  
-   [m_pErrorInfo](../mfc/reference/cdaoexception-class.md#m_perrorinfo) contiene un puntatore a un [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md) oggetto che incapsula le informazioni di errore nella raccolta di DAO di oggetti di errore associati al database.  
  
-   [m_nAfxDaoError](../mfc/reference/cdaoexception-class.md#m_nafxdaoerror) contiene un codice di errore esteso dalle classi DAO MFC. Questi codici di errore, che hanno il formato dei nomi **AFX_DAO_ERROR_XXX**, sono documentati nel membro dati in `CDaoException`.  
  
-   [m_scode](../mfc/reference/cdaoexception-class.md#m_scode) contiene OLE `SCODE` da DAO, se applicabile. Raramente è necessario usare questo codice di errore, tuttavia. In genere ulteriori informazioni sono disponibili in altri membri di dati di due. Vedere il membro dei dati per altre informazioni sulle `SCODE` valori.  
  
 Informazioni aggiuntive sugli errori, il tipo di oggetto errore DAO e la raccolta di errori di DAO DAO sono disponibili nella classe [CDaoException](../mfc/reference/cdaoexception-class.md).  
  
##  <a name="_core_a_database_exception.2d.handling_example"></a>Un esempio di gestione delle eccezioni di Database  
 Nell'esempio seguente si tenta di costruire un [CRecordset](../mfc/reference/crecordset-class.md)-oggetto sull'heap con derivato il **nuova** operatore e quindi aprire il recordset (per un'origine dati ODBC). Per un esempio simile per le classi DAO, vedere "Esempio di eccezione DAO" riportata di seguito.  
  
### <a name="odbc-exception-example"></a>Esempio di eccezione ODBC  
 Il [aprire](../mfc/reference/crecordset-class.md#open) funzione membro potrebbe generare un'eccezione (di tipo [CDBException](../mfc/reference/cdbexception-class.md) per le classi ODBC), pertanto questo codice tra parentesi quadre di **aprire** chiamata con un **provare**  blocco. Le successive **catch** blocco intercetterà un `CDBException`. È possibile esaminare l'oggetto eccezione stesso, denominato `e`, ma in questo caso è sufficiente sapere che non è riuscito il tentativo di creare un oggetto recordset. Il **catch** viene visualizzato un messaggio di blocco e pulitura, eliminando l'oggetto recordset.  
  
 [!code-cpp[NVC_MFCDatabase#36](../mfc/codesnippet/cpp/exceptions-database-exceptions_1.cpp)]  
  
### <a name="dao-exception-example"></a>Esempio di eccezione DAO  
 L'esempio DAO è simile all'esempio per ODBC, ma in genere, è possibile recuperare più tipi di informazioni. Il codice seguente tenta anche di aprire un oggetto recordset. Se il tentativo genera un'eccezione, è possibile esaminare un membro dati di oggetto dell'eccezione per informazioni sull'errore. Come con il precedente esempio ODBC, è sufficiente sapere che non è riuscito il tentativo di creare un oggetto recordset.  
  
 [!code-cpp[NVC_MFCDatabase#37](../mfc/codesnippet/cpp/exceptions-database-exceptions_2.cpp)]  
  
 Il codice ottiene la stringa di un messaggio di errore dal [m_pErrorInfo](../mfc/reference/cdaoexception-class.md#m_perrorinfo) membro dell'oggetto eccezione. Questo membro viene compilato MFC quando viene generata l'eccezione.  
  
 Per una descrizione delle informazioni sull'errore restituite da un `CDaoException` , vedere le classi [CDaoException](../mfc/reference/cdaoexception-class.md) e [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md).  
  
 Quando si lavora con database Microsoft Jet (mdb) e nella maggior parte dei casi quando si lavora con ODBC, saranno presenti un solo oggetto errore. Nel raro caso quando si utilizza un'origine dati ODBC e sono presenti più errori, è possibile eseguire un ciclo in base al numero di errori restituiti dalla raccolta di errori DAO [CDaoException:: GetErrorCount](../mfc/reference/cdaoexception-class.md#geterrorcount). Ogni volta che il ciclo, chiamare [CDaoException:: GetErrorInfo](../mfc/reference/cdaoexception-class.md#geterrorinfo) per ricaricare la `m_pErrorInfo` (membro dati).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

