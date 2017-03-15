---
title: "SQL: esecuzione di chiamate SQL dirette (ODBC) | Microsoft Docs"
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
  - "chiamate dirette SQL da ODBC"
  - "ODBC, chiamate SQL"
  - "chiamate SQL"
  - "SQL, chiamate dirette da ODBC"
  - "SQL, chiamate dirette da ODBC"
ms.assetid: 091988d2-f5a5-4c2d-aa09-8779a9fb9607
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# SQL: esecuzione di chiamate SQL dirette (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono fornite informazioni su:  
  
-   Quando eseguire chiamate SQL dirette  
  
-   [Esecuzione di chiamate dirette alle funzioni SQL](#_core_making_direct_sql_function_calls)  
  
> [!NOTE]
>  Queste informazioni si riferiscono alle classi ODBC MFC.  Se si utilizzano le classi DAO di MFC, vedere l'argomento relativo al confronto tra la sintassi SQL del modulo di gestione di database Microsoft Jet e quella ANSI nella Guida di DAO.  
  
##  <a name="_core_when_to_call_sql_directly"></a> Quando eseguire chiamate SQL dirette  
 Per creare nuove tabelle, eliminare o modificare tabelle esistenti, creare indici ed eseguire altre funzioni SQL che modifichino lo schema dell'[Origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md), è necessario inviare direttamente un'istruzione SQL all'origine dati tramite DDL \(Database Definition Language\).  Quando si crea un recordset per una tabella in fase di progettazione mediante una procedura guidata, è possibile scegliere le colonne della tabella da rappresentare nel recordset.  Questa operazione non è consentita per le colonne aggiunte alla tabella in un secondo momento da un utente dell'origine dati, dopo la compilazione del programma.  Le classi di database infatti non supportano direttamente DDL, anche se è comunque possibile scrivere codice per l'associazione dinamica di una nuova colonna al recordset in fase di esecuzione.  Per informazioni su come effettuare l'associazione, vedere [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
 È possibile utilizzare lo stesso DBMS per modificare lo schema oppure un altro strumento che consenta di eseguire le funzioni DDL.  È inoltre possibile utilizzare le chiamate alle funzioni ODBC per l'invio delle istruzioni SQL, ad esempio la chiamata a una query già definita \(stored procedure\) che non restituisce record.  
  
##  <a name="_core_making_direct_sql_function_calls"></a> Esecuzione di chiamate dirette alle funzioni SQL  
 È possibile eseguire una chiamata SQL diretta mediante un oggetto [CDatabase Class](../../mfc/reference/cdatabase-class.md).  È necessario impostare la stringa dell'istruzione SQL, in genere in `CString`\) e passarla nella funzione membro [CDatabase::ExecuteSQL](../Topic/CDatabase::ExecuteSQL.md) dell'oggetto `CDatabase`.  Se si utilizzano chiamate a funzioni ODBC per l'invio di un'istruzione SQL che in genere restituisce record, tali record vengono ignorati.  
  
## Vedere anche  
 [SQL](../../data/odbc/sql.md)