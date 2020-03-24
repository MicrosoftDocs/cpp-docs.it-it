---
title: 'SQL: esecuzione di chiamate SQL dirette (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- SQL, direct calls from ODBC
- SQL, calling directly from ODBC
- ODBC, SQL calls
- SQL calls
- direct SQL calls from ODBC
ms.assetid: 091988d2-f5a5-4c2d-aa09-8779a9fb9607
ms.openlocfilehash: 9240a227cdc4004d1e6e2b7ac26946ca233b71ec
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212628"
---
# <a name="sql-making-direct-sql-calls-odbc"></a>SQL: esecuzione di chiamate SQL dirette (ODBC)

In questo argomento:

- Quando usare le chiamate dirette a SQL.

- [Modalità di effettuare chiamate SQL dirette all'origine dati](#_core_making_direct_sql_function_calls).

> [!NOTE]
>  Queste informazioni sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC, vedere l'argomento "confronto tra Microsoft Jet motore di database SQL e ANSI SQL" nella Guida di DAO.

##  <a name="when-to-call-sql-directly"></a><a name="_core_when_to_call_sql_directly"></a>Quando chiamare direttamente SQL

Per creare nuove tabelle, eliminare (eliminare) tabelle, modificare le tabelle esistenti, creare indici ed eseguire altre funzioni SQL che modificano lo schema dell' [origine dati (ODBC)](../../data/odbc/data-source-odbc.md) , è necessario eseguire un'istruzione SQL direttamente nell'origine dati mediante DDL (Database Definition Language). Quando si utilizza una procedura guidata per creare un recordset per una tabella (in fase di progettazione), è possibile scegliere quali colonne della tabella rappresentare nel recordset. Questo non consente le colonne che l'utente o un altro utente dell'origine dati aggiunge alla tabella in un secondo momento, dopo la compilazione del programma. Le classi di database non supportano direttamente DDL, ma è comunque possibile scrivere codice per associare una nuova colonna al recordset in modo dinamico, in fase di esecuzione. Per informazioni su come eseguire questa associazione, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

È possibile utilizzare il sistema DBMS stesso per modificare lo schema o un altro strumento che consente di eseguire funzioni DDL. È inoltre possibile utilizzare le chiamate di funzione ODBC per l'invio di istruzioni SQL, ad esempio la chiamata a una query predefinita (stored procedure) che non restituisce record.

##  <a name="making-direct-sql-function-calls"></a><a name="_core_making_direct_sql_function_calls"></a>Esecuzione di chiamate di funzione SQL dirette

È possibile eseguire direttamente una chiamata SQL utilizzando un oggetto [classe CDatabase](../../mfc/reference/cdatabase-class.md) . Configurare la stringa dell'istruzione SQL (in genere in un `CString`) e passarla alla funzione membro [CDatabase:: ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql) dell'oggetto `CDatabase`. Se si utilizzano chiamate di funzione ODBC per inviare un'istruzione SQL che in genere restituisce record, i record vengono ignorati.

## <a name="see-also"></a>Vedere anche

[SQL](../../data/odbc/sql.md)
