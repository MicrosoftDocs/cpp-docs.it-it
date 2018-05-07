---
title: SQL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- database classes [C++], SQL statements
- SQL [C++]
- SQL [C++], ODBC
- ODBC [C++], SQL implementation
ms.assetid: e3923bc4-b317-4e0b-afd8-3cd403eb0faf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: df1563d8bb3d53bb405fbb0d89b2b26cc964bd44
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="sql"></a>SQL
SQL (Structured Query Language) è un modo per comunicare con un database relazionale che consente di definire, query, modificare e controllare i dati. Utilizzando la sintassi SQL, è possibile costruire un'istruzione che estrae i record in base ai criteri specificati.  
  
> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere il confronto di Database di gestione Microsoft Jet ANSI SQL e la Guida di DAO.  
  
 Istruzioni SQL iniziano con un verbo di parola chiave, ad esempio **crea** o **selezionare**. SQL è un linguaggio molto potente. una singola istruzione può influire su un'intera tabella.  
  
 Esistono molte versioni di SQL, ciascuna sviluppata con un determinato DBMS presente. Le classi di database MFC riconoscono un set di istruzioni SQL che corrisponde alla X / Open e bozza di specifica SQL SQL accesso gruppo comuni applicazioni ambiente CAE () (1991). Per informazioni sulla sintassi di queste istruzioni, vedere l'appendice C nel *ODBC SDK* *di riferimento per programmatori* sul CD di MSDN Library.  
  
 Questo argomento viene illustrato:  
  
-   [La relazione tra ODBC e SQL](#_core_open_database_connectivity_.28.odbc.29).  
  
-   [Le parole chiave SQL più comuni utilizzate dalle classi di database](#_core_the_database_classes).  
  
-   [Come le classi di database usano SQL](#_core_how_the_database_classes_use_sql).  
  
##  <a name="_core_open_database_connectivity_.28.odbc.29"></a> Open Database Connectivity (ODBC)  
 Le classi di database vengono implementate con ODBC, che utilizza SQL in un'interfaccia a livello di chiamata anziché incorporare i comandi SQL nel codice. Utilizzo di ODBC SQL per comunicare con un [origine dati](../../data/odbc/data-source-odbc.md) tramite driver ODBC. Questi driver interpretano l'istruzione SQL e viene convertito, se necessario, per l'utilizzo con un formato di database specifico, ad esempio Microsoft Access. Per ulteriori informazioni sull'utilizzo di ODBC in SQL, vedere [ODBC](../../data/odbc/odbc-basics.md) e il SDK di ODBC *di riferimento per programmatori* sul CD di MSDN Library.  
  
##  <a name="_core_the_database_classes"></a> Classi di database  
 Le classi di database sono progettate per consentire di modificare e aggiornare i dati in un oggetto esistente [origine dati](../../data/odbc/data-source-odbc.md). Il [Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md), [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) (tramite **Aggiungi classe**), e le classi di database costruire la maggior parte delle istruzioni SQL per l'utente.  
  
 Le classi di database utilizzano una parte di SQL, noto come Data Manipulation Language (DML). Questi comandi consentono di utilizzare tutta o parte dell'origine dati, aggiungere nuovi record, record di modifica ed eliminare record. Nella tabella seguente sono elencate le parole chiave SQL più comuni e le modalità con le classi di database utilizzano.  
  
### <a name="some-common-sql-keywords"></a>Alcune parole chiave SQL comuni  
  
|La parola chiave SQL|Utilizzano le procedure guidate e le classi di database|  
|-----------------|---------------------------------------------|  
|**SELECT**|Per identificare quali tabelle e colonne nell'origine dati devono essere utilizzati.|  
|**WHERE**|Per applicare un filtro che consente di limitare la selezione.|  
|**ORDER BY**|Per applicare un ordinamento per il recordset.|  
|**INSERIMENTO**|Per aggiungere nuovi record di un recordset.|  
|**ELIMINARE**|Per eliminare i record da un oggetto recordset.|  
|**AGGIORNAMENTO**|Per modificare i campi di un record.|  
  
 Inoltre, le classi di database riconoscono ODBC **CHIAMARE** istruzioni, è possibile utilizzare per chiamare una query già definita (o una stored procedure) su alcune origini dati. Il driver di database ODBC interpreta queste istruzioni e sostituisce il comando appropriato per ogni sistema DBMS.  
  
> [!NOTE]
>  Non tutti i DBMS supportano **CHIAMARE** istruzioni.  
  
 Se le classi sia in grado di riconoscere un'istruzione fornita dall'utente in `CRecordset::Open`, viene interpretato come un nome di tabella.  
  
 Per una spiegazione del modo il framework crea istruzioni SQL, vedere [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).  
  
 Database SQL utilizzano tipi di dati simili a quelle utilizzate in C e C++. Per una discussione su queste analogie, vedere [SQL: tipi di dati C++ (ODBC) e SQL](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).  
  
 È possibile trovare altre informazioni su SQL, incluso un elenco di istruzioni SQL supportate, i tipi di dati, la sintassi di base SQL e un elenco delle pubblicazioni consigliate su SQL, il *ODBC SDK* *di riferimento per programmatori*  sul CD di MSDN Library.  
  
##  <a name="_core_how_the_database_classes_use_sql"></a> Utilizzano di SQL le classi di Database  
 I recordset derivati dalle classi di database utilizzano ODBC per comunicare con un'origine dati ODBC recupera i record dall'origine dati mediante l'invio di istruzioni SQL. Questo argomento illustra la relazione tra le classi di database e SQL.  
  
 Un recordset crea un'istruzione SQL compilando le parti di un'istruzione SQL in un `CString`. La stringa viene creata come un **selezionare** istruzione che restituisce un set di record.  
  
 Quando il recordset chiama ODBC per inviare un'istruzione SQL per l'origine dati, gestione Driver ODBC passa l'istruzione per il driver ODBC e il driver invia al sistema DBMS sottostante. Il sistema DBMS restituisce un set di risultati di record e il driver ODBC restituisce i record per l'applicazione. Le classi di database consentono l'accesso al programma il set di risultati in una classe C++ indipendente dai tipi derivati da `CRecordset`.  
  
 Gli argomenti seguenti forniscono ulteriori informazioni sulla modalità di utilizzo di classi di database SQL:  
  
-   [SQL: Personalizzazione istruzione SQL del Recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md)  
  
-   [SQL: tipi di dati SQL e C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)  
  
-   [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)