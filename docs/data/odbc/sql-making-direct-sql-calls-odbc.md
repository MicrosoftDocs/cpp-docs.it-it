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
ms.openlocfilehash: e2421e047d217fdc7a138509385399fa37d36a1f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374505"
---
# <a name="sql-making-direct-sql-calls-odbc"></a>SQL: esecuzione di chiamate SQL dirette (ODBC)

In questo argomento:

- Quando utilizzare chiamate SQL dirette.

- [Modalità di effettuare chiamate SQL dirette all'origine dati](#_core_making_direct_sql_function_calls).

> [!NOTE]
> Queste informazioni sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC, vedere l'argomento "Confronto di Microsoft Jet Database Engine SQL e ANSI SQL" nella Guida in linea daO.

## <a name="when-to-call-sql-directly"></a><a name="_core_when_to_call_sql_directly"></a>Quando chiamare direttamente SQLWhen to Call SQL Directly

Per creare nuove tabelle, eliminare (eliminare) tabelle, modificare le tabelle esistenti, creare indici ed eseguire altre funzioni SQL che modificano lo schema [dell'origine dati (ODBC, Data Source),](../../data/odbc/data-source-odbc.md) è necessario eseguire un'istruzione SQL direttamente nell'origine dati utilizzando DDL (Database Definition Language). Quando si utilizza una procedura guidata per creare un recordset per una tabella (in fase di progettazione), è possibile scegliere le colonne della tabella da rappresentare nel recordset. In questo modo non vengono consentite le colonne aggiunte successivamente dall'utente o da un altro utente dell'origine dati, dopo la compilazione del programma. Le classi di database non supportano direttamente DDL, ma è comunque possibile scrivere codice per associare una nuova colonna al recordset in modo dinamico, in fase di esecuzione. Per informazioni su come eseguire questa associazione, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

È possibile utilizzare il DBMS stesso per modificare lo schema o un altro strumento che consente di eseguire funzioni DDL. È inoltre possibile utilizzare le chiamate di funzione ODBC per l'invio di istruzioni SQL, ad esempio la chiamata di una query predefinita (stored procedure) che non restituisce record.

## <a name="making-direct-sql-function-calls"></a><a name="_core_making_direct_sql_function_calls"></a>Esecuzione di chiamate di funzioni SQL dirette

È possibile eseguire direttamente una chiamata SQL utilizzando un [CDatabase classe](../../mfc/reference/cdatabase-class.md) oggetto. Impostare la stringa dell'istruzione `CString`SQL (in genere in un ) e `CDatabase` passarla alla funzione membro [CDatabase::ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql) dell'oggetto. Se si utilizzano chiamate di funzione ODBC per inviare un'istruzione SQL che normalmente restituisce record, i record vengono ignorati.

## <a name="see-also"></a>Vedere anche

[SQL](../../data/odbc/sql.md)
