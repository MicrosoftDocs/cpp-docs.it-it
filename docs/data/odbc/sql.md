---
title: "SQL | Microsoft Docs"
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
  - "classi di database [C++], SQL (istruzioni)"
  - "ODBC [C++], implementazione SQL"
  - "SQL [C++]"
  - "SQL [C++], ODBC"
ms.assetid: e3923bc4-b317-4e0b-afd8-3cd403eb0faf
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# SQL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

SQL \(SQL\) è un modo per comunicare con un database relazionale e consente di definire, l'esecuzione di query, modificare e controllare i dati.  Mediante la sintassi SQL è possibile creare un'istruzione che estrae i record in base a criteri specificati.  
  
> [!NOTE]
>  Queste informazioni si riferiscono alle classi ODBC MFC.  Se si utilizzano le classi DAO di MFC, confrontare la sintassi SQL del modulo di gestione di database Microsoft Jet e quella ANSI consultando la Guida di DAO.  
  
 Le istruzioni SQL iniziano con una parola chiave rappresentata da un verbo, ad esempio **CREATE** o **SELECT**.  SQL è un linguaggio estremamente potente, in quanto una singola istruzione può interessare un'intera tabella.  
  
 Esistono molte versioni di SQL, ciascuna sviluppata tenendo conto di uno specifico DBMS.  Le classi di database MFC riconoscono un insieme di istruzioni corrispondente alla bozza di specifica SQL X\/Open e CAE \(Common Applications Environment\) di SQL Access Group \(1991\).  Per informazioni sulla sintassi di queste istruzioni, vedere l'appendice C in *ODBC SDK* *Programmer's Reference* nel CD di MSDN Library.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Open Database Connectivity \(ODBC\)](#_core_open_database_connectivity_.28.odbc.29).  
  
-   [Classi di database](#_core_the_database_classes).  
  
-   [Utilizzo delle istruzioni SQL nelle classi di database](#_core_how_the_database_classes_use_sql).  
  
##  <a name="_core_open_database_connectivity_.28.odbc.29"></a> Open Database Connectivity \(ODBC\)  
 Le classi di database vengono implementate mediante ODBC, che utilizza il linguaggio SQL in un'interfaccia a livello di chiamata anziché incorporare i comandi SQL nel codice.  ODBC utilizza SQL per comunicare con un'[origine dati](../../data/odbc/data-source-odbc.md) tramite i driver ODBC.  Questi driver interpretano e traducono, se necessario, le istruzioni SQL, in modo che sia possibile utilizzarle con uno specifico formato di database, quale Microsoft Access.  Per ulteriori informazioni sull'utilizzo di SQL in ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md) e ODBC SDK *Programmer's Reference* nel CD di MSDN Library.  
  
##  <a name="_core_the_database_classes"></a> Classi di database  
 Le classi di database consentono di modificare e aggiornare i dati in un'[origine dati](../../data/odbc/data-source-odbc.md) esistente.  La [Creazione guidata applicazioni MFC](../../mfc/reference/database-support-mfc-application-wizard.md), la [Creazione guidata consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md), a cui è possibile accedere tramite il comando **Aggiungi classe**, e le classi di database creano automaticamente la maggior parte delle istruzioni SQL.  
  
 Le classi di database utilizzano una parte del linguaggio SQL conosciuta come DML \(Data Manipulation Language\).  Questi comandi consentono di utilizzare tutta o una parte dell'origine dati, aggiungere nuovi record, modificare ed eliminare record esistenti.  Nella tabella riportata di seguito sono elencate le parole chiave SQL più comuni e il relativo utilizzo nelle classi di database.  
  
### Alcune parole chiave SQL comuni  
  
|Parola chiave SQL|Utilizzo nelle classi di database e nelle procedure guidate|  
|-----------------------|-----------------------------------------------------------------|  
|**SELECT**|Per identificare le tabelle e le colonne dell'origine dati da utilizzare.|  
|**WHERE**|Per applicare un filtro che limiti la selezione.|  
|**ORDER BY**|Per applicare un criterio di ordinamento al recordset.|  
|**INS**|Per aggiungere nuovi record a un recordset.|  
|**DELETE**|Per eliminare record da un recordset.|  
|**UPDATE**|Per modificare i campi di un record.|  
  
 Le classi di database riconoscono inoltre le istruzioni ODBC **CALL**, che è possibile utilizzare per chiamare una query già definita \(o stored procedure\) in alcune origini dati.  Il driver del database ODBC interpreta queste istruzioni e sostituisce il comando appropriato per ciascun DBMS.  
  
> [!NOTE]
>  Non tutti i DBMS supportano le istruzioni **CALL**.  
  
 Se le classi non sono in grado di riconoscere un'istruzione fornita dall'utente in `CRecordset::Open`, tale istruzione verrà interpretata come il nome di una tabella.  
  
 Per una spiegazione sulla creazione delle istruzioni SQL nel framework, vedere [Recordset: selezione dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md).  
  
 I database SQL utilizzano tipi di dati simili a quelli utilizzati in C e C\+\+.  Per una descrizione di tali somiglianze, vedere [SQL: tipi di dati SQL e C\+\+ \(ODBC\)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).  
  
 È possibile ottenere ulteriori informazioni sulle istruzioni SQL, compreso un elenco delle istruzioni SQL supportate, i tipi di dati, la sintassi di base SQL e un elenco delle pubblicazioni consigliate su SQL in *ODBC SDK* *Programmer's Reference* nel CD di MSDN Library.  
  
##  <a name="_core_how_the_database_classes_use_sql"></a> Utilizzo delle istruzioni SQL nelle classi di database  
 I recordset derivati dalle classi di database comunicano con un'origine dati mediante ODBC, che, a sua volta, recupera i record dall'origine dati inviando istruzioni SQL.  In questo argomento viene illustrata la relazione tra le classi di database e SQL.  
  
 Un recordset crea un'istruzione SQL compilando gli elementi di un'istruzione SQL in una `CString`.  La stringa viene creata come un'istruzione **SELECT** che restituisce un insieme di record.  
  
 Quando il recordset chiama ODBC per inviare un'istruzione SQL all'origine dati, Gestione driver ODBC passa l'istruzione al driver ODBC che la invia al DBMS sottostante.  Il DBMS restituisce come risultato un insieme di record e il driver ODBC restituisce i record all'applicazione.  Le classi di database consentono al programma di accedere al gruppo di risultati in una classe C\+\+ indipendente dai tipi derivata da `CRecordset`.  
  
 Negli argomenti riportati di seguito vengono fornite ulteriori informazioni sulla modalità di utilizzo delle istruzioni SQL nelle classi di database.  
  
-   [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md)  
  
-   [SQL: tipi di dati SQL e C\+\+ \(ODBC\)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)  
  
-   [SQL: esecuzione di chiamate SQL dirette \(ODBC\)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)