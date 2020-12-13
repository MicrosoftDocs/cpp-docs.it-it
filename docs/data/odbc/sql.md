---
description: 'Altre informazioni su: SQL'
title: SQL
ms.date: 05/09/2019
helpviewer_keywords:
- database classes [C++], SQL statements
- SQL [C++]
- SQL [C++], ODBC
- ODBC [C++], SQL implementation
ms.assetid: e3923bc4-b317-4e0b-afd8-3cd403eb0faf
ms.openlocfilehash: 01a559b959d0f9a8c37f13a79855d55c5890f20e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333907"
---
# <a name="sql"></a>SQL

SQL (Structured Query Language) è un modo per comunicare con un database relazionale che consente di definire, interrogare, modificare e controllare i dati. Usando la sintassi SQL, è possibile costruire un'istruzione che estrae i record in base ai criteri specificati.

> [!NOTE]
> Queste informazioni sono valide per le classi ODBC MFC. Se si usano le classi DAO MFC, vedere l'argomento relativo al confronto tra Microsoft Jet Database Engine SQL e SQL ANSI nella Guida di DAO.

Le istruzioni SQL iniziano con un verbo parola chiave, come **CREATE** o **SELECT**. SQL è un linguaggio molto potente: una singola istruzione può influire su un'intera tabella.

Esistono molte versioni di SQL, ognuna sviluppata con per uno specifico sistema di gestione di database. Le classi di database MFC riconoscono un set di istruzioni SQL che corrisponde alla bozza di specifica SQL X/Open e SQL Access Group Common Applications Environment (CAE) del 1991. Per informazioni sulla sintassi di queste istruzioni, vedere Appendice C nella documentazione [di riferimento per programmatori ODBC](/sql/odbc/reference/odbc-programmer-s-reference) .

In questo argomento:

- [La relazione tra ODBC e SQL](#_core_open_database_connectivity_.28.odbc.29).

- [Le parole chiave SQL più comuni usate dalle classi di database](#_core_the_database_classes).

- [Modalità di utilizzo di SQL da parte delle classi di database](#_core_how_the_database_classes_use_sql).

## <a name="open-database-connectivity-odbc"></a><a name="_core_open_database_connectivity_.28.odbc.29"></a> Open Database Connectivity (ODBC)

Le classi di database sono implementate con ODBC, che usa SQL in un'interfaccia a livello di chiamata, invece di incorporare i comandi SQL nel codice. ODBC usa SQL per comunicare con un'[origine dati](../../data/odbc/data-source-odbc.md) tramite i driver ODBC. Questi driver interpretano il codice SQL e, se necessario, lo convertono per l'uso con un particolare formato di database, ad esempio Microsoft Access. Per ulteriori informazioni sull'utilizzo di SQL in ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md) e la documentazione [di riferimento per programmatori ODBC](/sql/odbc/reference/odbc-programmer-s-reference) .

## <a name="database-classes"></a><a name="_core_the_database_classes"></a> Classi di database

> [!NOTE]
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

Le classi di database sono progettate per consentire di modificare e aggiornare i dati in un'[origine dati](../../data/odbc/data-source-odbc.md) esistente. La [Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md), la [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) (accessibile tramite **Aggiungi classe**) e le classi di database creano automaticamente la maggior parte delle istruzioni SQL.

Le classi di database usano una parte di SQL denominata Data Manipulation Language (DML). Questi comandi consentono di usare un'origine dati (interamente o in parte), aggiungere nuovi record, modificare record ed eliminare record. Nella tabella seguente sono elencate le parole chiave SQL più comuni e i modi in cui vengono usate dalle classi di database.

### <a name="some-common-sql-keywords"></a>Parole chiave SQL comuni

|Parola chiave SQL|Viene usata da procedure guidate e classi di database|
|-----------------|---------------------------------------------|
|**SELECT**|Per identificare le tabelle e le colonne nell'origine dati da usare.|
|**WHERE**|Per applicare un filtro che restringe la selezione.|
|**ORDER BY**|Per applicare un ordinamento al recordset.|
|**INSERT**|Per aggiungere nuovi record a un recordset.|
|**DELETE**|Per eliminare record da un recordset.|
|**UPDATE**|Per modificare i campi di un record.|

Inoltre, le classi di database riconoscono le istruzioni ODBC **CALL**, che è possibile usare per chiamare una query predefinita (o stored procedure) su alcune origini dati. Il driver di database ODBC interpreta queste istruzioni e sostituisce il comando appropriato per ogni sistema di gestione di database.

> [!NOTE]
> Non tutti i sistemi di gestione di database supportano le istruzioni **CALL**.

Se le classi non sono in grado di riconoscere un'istruzione fornita dall'utente in `CRecordset::Open`, questa viene interpretata come un nome di tabella.

Per una spiegazione del modo in cui il Framework crea istruzioni SQL, vedere [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

I database SQL usano tipi di dati simili a quelli usati in C e C++. Per una descrizione di queste analogie, vedere [SQL: tipi di dati SQL e C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).

Per ulteriori informazioni su SQL, tra cui un elenco di istruzioni SQL supportate, tipi di dati, grammatica SQL core e un elenco di lettura delle pubblicazioni consigliate su SQL, vedere la documentazione di [Microsoft SQL](/sql/) .

## <a name="how-the-database-classes-use-sql"></a><a name="_core_how_the_database_classes_use_sql"></a> In che modo le classi di database usano SQL

I recordset derivati dalle classi di database usano ODBC per comunicare con un'origine dati e ODBC recupera i record dall'origine dati mediante l'invio di istruzioni SQL. In questo argomento viene illustrata la relazione tra le classi di database e SQL.

Un recordset costruisce un'istruzione SQL assemblando le parti di un'istruzione SQL in un oggetto `CString`. La stringa viene costruita come un'istruzione **SELECT** che restituisce un set di record.

Quando il recordset chiama ODBC per l'invio di un'istruzione SQL all'origine dati, Gestione driver ODBC passa l'istruzione al driver ODBC e driver la invia al sistema di gestione di database sottostante. Il sistema di gestione di database restituisce un set di risultati composto da record e il driver ODBC restituisce i record all'applicazione. Le classi di database consentono al programma di accedere ai set di risultati in una classe C++ indipendente dai tipi derivata da `CRecordset`.

Gli argomenti seguenti forniscono altre informazioni sul modo in cui SQL viene usato dalle classi di database:

- [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md)

- [SQL: tipi di dati SQL e C++ (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md)

- [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)

## <a name="see-also"></a>Vedi anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
