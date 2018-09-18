---
title: 'SQL: Esecuzione di chiamate SQL dirette (ODBC) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- SQL, direct calls from ODBC
- SQL, calling directly from ODBC
- ODBC, SQL calls
- SQL calls
- direct SQL calls from ODBC
ms.assetid: 091988d2-f5a5-4c2d-aa09-8779a9fb9607
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: edc43ce4fdbd838630d94f93ec018b246a0d5af4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068494"
---
# <a name="sql-making-direct-sql-calls-odbc"></a>SQL: esecuzione di chiamate SQL dirette (ODBC)

Questo argomento viene illustrato:  
  
- Quando usare SQL dirette chiama.  
  
- [Come creare indirizzare SQL chiama nell'origine dati](#_core_making_direct_sql_function_calls).  
  
> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere l'argomento "Confronto di Microsoft Jet motore di Database SQL e ANSI SQL" nella Guida di DAO.  
  
##  <a name="_core_when_to_call_sql_directly"></a> Quando chiamare direttamente SQL  

Per creare nuove tabelle, eliminare (Elimina) tabelle, modificare le tabelle esistenti, creare indici ed eseguire altre funzioni SQL che modificano il [origine dati (ODBC)](../../data/odbc/data-source-odbc.md) dello schema, è necessario eseguire un'istruzione SQL direttamente all'origine dati con Database Definition Language (DDL). Quando si usa una procedura guidata per creare un set di record per una tabella (in fase di progettazione), è possibile scegliere quali colonne della tabella per essere rappresentato nel set di record. Ciò non consente le colonne si o un altro utente dell'origine dati aggiunte alla tabella in un secondo momento, dopo la compilazione del programma. Le classi di database non supportano DDL direttamente, ma è comunque possibile scrivere codice per associare una nuova colonna del recordset in modo dinamico in fase di esecuzione. Per informazioni su come effettuare questa associazione, vedere [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
È possibile utilizzare il sistema DBMS per modificare lo schema o un altro strumento che consente di eseguire operazioni DDL. È anche possibile usare chiamate di funzione ODBC per l'invio di istruzioni SQL, ad esempio chiamare una query predefinita (stored procedure) che non restituisce i record.  
  
##  <a name="_core_making_direct_sql_function_calls"></a> Esecuzione di chiamate di funzione SQL dirette  

È possibile eseguire direttamente una chiamata SQL utilizzando un [CDatabase (classe)](../../mfc/reference/cdatabase-class.md) oggetto. Impostare la stringa dell'istruzione SQL (in genere in un `CString`) e passarlo al [CDatabase:: ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql) funzione membro del `CDatabase` oggetto. Se si usano chiamate di funzione ODBC per inviare un'istruzione SQL che restituisce in genere i record, i record vengono ignorati.  
  
## <a name="see-also"></a>Vedere anche  

[SQL](../../data/odbc/sql.md)