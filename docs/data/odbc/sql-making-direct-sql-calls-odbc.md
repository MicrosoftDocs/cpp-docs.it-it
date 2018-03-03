---
title: 'SQL: Esecuzione di chiamate SQL dirette (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- SQL, direct calls from ODBC
- SQL, calling directly from ODBC
- ODBC, SQL calls
- SQL calls
- direct SQL calls from ODBC
ms.assetid: 091988d2-f5a5-4c2d-aa09-8779a9fb9607
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4c5debd5017c2c9c9cad240f831fdf6e02be98ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="sql-making-direct-sql-calls-odbc"></a>SQL: esecuzione di chiamate SQL dirette (ODBC)
Questo argomento viene illustrato:  
  
-   Quando utilizzare SQL dirette chiama.  
  
-   [Consente di rendere diretta SQL chiama all'origine dati](#_core_making_direct_sql_function_calls).  
  
> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere l'argomento "Confronto del Database del motore SQL e ANSI SQL di Microsoft Jet" nella Guida di DAO.  
  
##  <a name="_core_when_to_call_sql_directly"></a>Quando eseguire chiamate SQL dirette  
 Per creare nuove tabelle, (delete) o modificare tabelle esistenti, creare indici ed eseguire altre funzioni SQL che modificano il [origine dati (ODBC)](../../data/odbc/data-source-odbc.md) dello schema, è necessario eseguire un'istruzione SQL direttamente all'origine dati utilizzando i Database Definition Language (DDL). Quando si utilizza una procedura guidata per creare un recordset per una tabella (in fase di progettazione), è possibile scegliere quali colonne della tabella per rappresentare nel recordset. Questo non è consentita per le colonne è un altro utente o dell'origine dati aggiunta alla tabella in un secondo momento, dopo la compilazione del programma. Le classi di database non supportano direttamente DDL, ma è comunque possibile scrivere codice per associare una nuova colonna per il recordset in modo dinamico in fase di esecuzione. Per informazioni su come effettuare l'associazione, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
 È possibile utilizzare il sistema DBMS per modificare lo schema o un altro strumento che consente di eseguire funzioni DDL. È anche possibile utilizzare chiamate di funzione ODBC per l'invio di istruzioni SQL, quali la chiamata di una query predefinita (stored procedure) che non restituisce i record.  
  
##  <a name="_core_making_direct_sql_function_calls"></a>Esecuzione di chiamate di funzione SQL dirette  
 È possibile eseguire direttamente una chiamata SQL utilizzando un [CDatabase (classe)](../../mfc/reference/cdatabase-class.md) oggetto. Impostare la stringa dell'istruzione SQL (in genere in un `CString`) e passarlo al [CDatabase:: ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql) funzione membro del `CDatabase` oggetto. Se si utilizzano chiamate di funzione ODBC per inviare un'istruzione SQL che restituisce i record in genere, i record vengono ignorati.  
  
## <a name="see-also"></a>Vedere anche  
 [SQL](../../data/odbc/sql.md)