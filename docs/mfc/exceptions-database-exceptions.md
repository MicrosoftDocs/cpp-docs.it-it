---
title: "Eccezioni: eccezioni di database | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO [C++], eccezioni"
  - "eccezioni di database [C++]"
  - "database [C++], gestione eccezioni"
  - "codici di errore [C++], gestione eccezioni database"
  - "gestione delle eccezioni [C++], database"
  - "eccezioni [C++], database"
  - "ODBC [C++], eccezioni"
  - "eccezioni ODBC [C++]"
ms.assetid: 28daf260-f824-4be6-aecc-1f859e6dec26
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Eccezioni: eccezioni di database
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come gestire le eccezioni del database.  La maggior parte del materiale in questo articolo è valida se si utilizzano le classi MFC per ODBC \(Open Database Connectivity\) o le classi MFC per oggetti DAO \(Data Access Object\).  Viene esplicitato se del materiale è specifico a un modello o all'altro.  Gli argomenti trattati includono  
  
-   [Approcci alla gestione delle eccezioni](#_core_approaches_to_exception_handling)  
  
-   [Un esempio di gestione delle eccezioni di database](#_core_a_database_exception.2d.handling_example)  
  
##  <a name="_core_approaches_to_exception_handling"></a> Approcci alla gestione delle eccezioni  
 L'approccio è lo stesso sia che si utilizzi DAO sia che si utilizzi ODBC.  
  
 È necessario scrivere sempre gestori delle eccezioni per gestire condizioni eccezionali.  
  
 L'approccio più pragmatico per intercettare le eccezioni del database è testare l'applicazione con gli scenari di eccezione.  Determinare le eccezioni probabili che potrebbero verificarsi per un'operazione nel codice e forzare il verificarsi dell'eccezione.  Esaminare quindi la traccia di output per verificare quale eccezione viene generata, oppure esaminare le informazioni sull'errore restituite nel debugger.  Ciò consente di capire quali codici saranno restituiti per gli scenari di eccezione in uso.  
  
### Codici di errore utilizzati per le eccezioni ODBC  
 Oltre ai codici di ritorno definiti dal framework, con nomi della forma **AFX\_SQL\_ERROR\_XXX**, alcune [CDBExceptions](../mfc/reference/cdbexception-class.md) si basano su codici di ritorno di [ODBC](../data/odbc/odbc-basics.md).  I codici di ritorno per tali eccezioni presentano nomi della forma **SQL\_ERROR\_XXX**.  
  
 I codici di ritorno, sia definiti dal framework sia dall'ODBC, che le classi database possono restituire sono documentati dal membro dati di [m\_nRetCode](../Topic/CDBException::m_nRetCode.md) del classe `CDBException`.  Informazioni aggiuntive sui codici restituiti definiti da ODBC sono disponibili nella *Guida per il programmatore* di ODBC SDK nella libreria MSDN.  
  
### Codici di errore utilizzati per le eccezioni DAO  
 Per le eccezioni DAO sono in genere disponibili maggiori informazioni.  È possibile accedere alle informazioni di errore tramite tre membri dati di un oggetto [CDaoException](../mfc/reference/cdaoexception-class.md) intercettato:  
  
-   [m\_pErrorInfo](../Topic/CDaoException::m_pErrorInfo.md) contiene un puntatore a un oggetto [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md) che incapsula informazioni sugli errori nella raccolta DAO di oggetti di errori associati al database.  
  
-   [m\_nAfxDaoError](../Topic/CDaoException::m_nAfxDaoError.md) contiene un codice di errore esteso dalle classi DAO MFC.  Questi codici di errore, con nomi della forma **AFX\_DAO\_ERROR\_XXX**, sono documentati nel membro dati in `CDaoException`.  
  
-   Se applicabile, [m\_scode](../Topic/CDaoException::m_scode.md) contiene un `SCODE` OLE da DAO.  Tuttavia raramente sarà necessario utilizzare questo codice di errore.  Generalmente ulteriori informazioni sono disponibili negli altri due membri dati.  Vedere il membro dati per ulteriori informazioni sui valori `SCODE`.  
  
 Informazioni aggiuntive sugli errori di DAO, sul tipo di oggetto di errore DAO e sulla raccolta di errori DAO sono disponibili nella classe [CDaoException](../mfc/reference/cdaoexception-class.md).  
  
##  <a name="_core_a_database_exception.2d.handling_example"></a> Un esempio di gestione delle eccezioni di database  
 I tentativi seguenti cercano di costruire un oggetto derivato da [CRecordset](../mfc/reference/crecordset-class.md) nell'heap con l'operatore **new**, dopodiché aprono il recordset \(per un'origine dati ODBC\).  Per un esempio analogo per le classi DAO, vedere "Esempio di eccezione DAO" riportato di seguito.  
  
### Esempio di eccezione ODBC  
 La funzione membro [Open](../Topic/CRecordset::Open.md) potrebbe generare un'eccezione \(di tipo [CDBException](../mfc/reference/cdbexception-class.md) per le classi ODBC\), pertanto in questo codice la chiamata di **Apri** viene posta all'interno di un blocco **try**.  Il successivo blocco **catch** intercetterà una `CDBException`.  È possibile esaminare lo stesso oggetto eccezione, denominato `e`, ma in questo caso è sufficiente sapere che il tentativo di creazione di un recordset non è riuscito.  Il blocco di **catch** visualizzare una finestra di messaggio ed effettua una pulizia eliminando l'oggetto recordset.  
  
 [!code-cpp[NVC_MFCDatabase#36](../mfc/codesnippet/CPP/exceptions-database-exceptions_1.cpp)]  
  
### Esempio di eccezione DAO  
 L'esempio DAO è analogo a quello per ODBC, ma in genere è possibile recuperare più tipi di informazioni.  Anche il codice seguente prova ad aprire un recordset.  Se il tentativo genera un'eccezione, è possibile esaminare un membro dati dell'oggetto eccezione per ottenere informazioni sull'errore.  Come con il precedente esempio ODBC, è probabilmente sufficiente sapere che il tentativo di creazione di un recordset non è riuscito.  
  
 [!code-cpp[NVC_MFCDatabase#37](../mfc/codesnippet/CPP/exceptions-database-exceptions_2.cpp)]  
  
 Questo codice ottiene una messaggio di errore sottoforma di stringa dal membro [m\_pErrorInfo](../Topic/CDaoException::m_pErrorInfo.md) dell'oggetto eccezione.  MFC inserisce i dati in questo membro quando genera l'eccezione.  
  
 Per una descrizione delle informazioni sull'errore restituito da un oggetto `CDaoException`, vedere le classi [CDaoException](../mfc/reference/cdaoexception-class.md) e [CDaoErrorInfo](../mfc/reference/cdaoerrorinfo-structure.md).  
  
 Quando si utilizzano i database Microsoft Jet \(.mdb\) e nella maggior parte dei casi quando si lavora con ODBC, sarà presente un solo oggetto di errore.  Nei rari casi in cui si utilizza un'origine dati ODBC e si verificano più errori, è possibile scorrere in ciclo la raccolta degli errori DAO in base al numero di errori restituiti da [CDaoException::GetErrorCount](../Topic/CDaoException::GetErrorCount.md).  All'interno del ciclo, chiamare ogni volta [CDaoException::GetErrorInfo](../Topic/CDaoException::GetErrorInfo.md) per inserire di nuovo i dati nel membro membro dati `m_pErrorInfo`.  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)