---
title: SQL
ms.date: 11/04/2016
helpviewer_keywords:
- database classes [C++], SQL statements
- SQL [C++]
- SQL [C++], ODBC
- ODBC [C++], SQL implementation
ms.assetid: e3923bc4-b317-4e0b-afd8-3cd403eb0faf
ms.openlocfilehash: c9ea15520f98a86f8af7c278bfc77463689a4606
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50576817"
---
# <a name="sql"></a>SQL

SQL (Structured Query Language) è un modo per comunicare con un database relazionale che consente di definire, query, modificare e controllare i dati. Usando la sintassi SQL, è possibile costruire un'istruzione che estrae i record in base ai criteri specificati.

> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere il confronto di Microsoft Jet motore di Database SQL e ANSI SQL nella Guida di DAO.

Le istruzioni SQL iniziano con un verbo di parola chiave, ad esempio **CREATE** oppure **seleziona**. SQL è un linguaggio molto potente. una singola istruzione può influire su un'intera tabella.

Esistono molte versioni di SQL, ognuna sviluppate con uno specifico DBMS presente. Le classi di database MFC riconoscono un set di istruzioni SQL che corrisponde a X / Open e bozza di specifica SQL accesso gruppo comuni applicazioni ambiente (CAE) SQL (1991). Per informazioni sulla sintassi di queste istruzioni, vedere l'appendice C nel *SDK di ODBC* *riferimento per programmatori* sul CD di MSDN Library.

Questo argomento viene illustrato:

- [La relazione tra ODBC e SQL](#_core_open_database_connectivity_.28.odbc.29).

- [Le parole chiave SQL più comuni usate dalle classi di database](#_core_the_database_classes).

- [Come le classi di database usano SQL](#_core_how_the_database_classes_use_sql).

##  <a name="_core_open_database_connectivity_.28.odbc.29"></a> Open Database Connectivity (ODBC)

Le classi di database vengono implementate con ODBC, che Usa SQL in un'interfaccia a livello di chiamata, invece di incorporare i comandi SQL nel codice. ODBC Usa SQL per comunicare con un [zdroj dat](../../data/odbc/data-source-odbc.md) tramite i driver ODBC. Questi driver interpretano il codice SQL e viene convertito, se necessario, per l'uso con un formato particolare database, ad esempio Microsoft Access. Per altre informazioni sull'utilizzo di ODBC in SQL, vedere [ODBC](../../data/odbc/odbc-basics.md) e il SDK di ODBC *riferimento per programmatori* sul CD di MSDN Library.

##  <a name="_core_the_database_classes"></a> Classi di database

Le classi di database sono progettate per consentono di modificare e aggiornare i dati in un oggetto esistente [zdroj dat](../../data/odbc/data-source-odbc.md). Il [Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md), il [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) (accessibili tramite **Aggiungi classe**), e le classi di database creano la maggior parte delle istruzioni SQL per l'utente.

Le classi di database usano una parte di SQL noto come Data Manipulation Language (DML). Questi comandi consentono di utilizzare tutta o parte dell'origine dati, aggiungere nuovi record, modificare i record ed eliminare record. Nella tabella seguente sono elencate le parole chiave SQL più comuni e i modi in cui le classi di database usano.

### <a name="some-common-sql-keywords"></a>Alcune parole chiave SQL comuni

|La parola chiave SQL|Usano le procedure guidate e le classi di database|
|-----------------|---------------------------------------------|
|**SELECT**|Per identificare quali tabelle e colonne nell'origine dati devono essere utilizzati.|
|**WHERE**|Per applicare un filtro che consente di limitare la selezione.|
|**ORDER BY**|Per applicare un ordinamento per il recordset.|
|**INSERT**|Per aggiungere nuovi record a un set di record.|
|**DELETE**|Per eliminare i record da un recordset.|
|**AGGIORNAMENTO**|Per modificare i campi di un record.|

Inoltre, le classi di database riconoscono ODBC **CHIAMARE** istruzioni, che è possibile usare per chiamare una query predefinita (o stored procedure) su alcune origini dati. Il driver di database ODBC interpreta queste istruzioni e sostituisce il comando appropriato per ogni sistema DBMS.

> [!NOTE]
>  Non tutto il supporto di DBMS **CHIAMARE** istruzioni.

Se le classi sia in grado di riconoscere un'istruzione fornita dall'utente in `CRecordset::Open`, viene interpretato come un nome di tabella.

Per una spiegazione del modo in cui il framework crea istruzioni SQL, vedere [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

Database SQL di usano i tipi di dati simili a quelle utilizzate in C e C++. Per una descrizione di queste analogie, vedere [SQL: tipi di dati C++ (ODBC) e SQL](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).

È possibile trovare altre informazioni su SQL, incluso un elenco di istruzioni SQL supportate, tipi di dati, la grammatica SQL principale e un elenco delle pubblicazioni consigliate su SQL, nelle *SDK di ODBC* *di riferimento per programmatori*  sul CD di MSDN Library.

##  <a name="_core_how_the_database_classes_use_sql"></a> Come le classi di Database usano SQL

Il recordset che è derivare dalle classi di database ODBC per comunicare con un'origine dati, e ODBC recupera i record dall'origine dati mediante l'invio di istruzioni SQL. In questo argomento illustra la relazione tra le classi di database e SQL.

Un recordset crea un'istruzione SQL compilando le parti di un'istruzione SQL in un `CString`. La stringa viene costruita come una **seleziona** istruzione che restituisce un set di record.

Quando il recordset chiamate ODBC per l'invio di un'istruzione SQL per l'origine dati, gestione Driver ODBC restituisce l'istruzione al driver ODBC e driver lo invia al sistema DBMS sottostante. Il sistema DBMS restituisce un set di risultati di record e il driver ODBC restituisce i record per l'applicazione. Le classi di database consentono l'accesso al programma il set di risultati in una classe C++ indipendente dai tipi derivati da `CRecordset`.

Gli argomenti seguenti forniscono altre informazioni sulla modalità di utilizzo di classi di database SQL:

- [SQL: Personalizzazione istruzione SQL del Recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md)

- [SQL: tipi di dati SQL e C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)

- [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)