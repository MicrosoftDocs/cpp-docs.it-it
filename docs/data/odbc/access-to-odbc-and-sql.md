---
title: "Accesso a ODBC e SQL | Microsoft Docs"
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
  - "chiamate API [C++], chiamata diretta di DAO o ODBC"
  - "ODBC [C++], funzioni API"
  - "funzioni API ODBC [C++]"
  - "funzioni API ODBC [C++], chiamata da MFC"
  - "SQL [C++], chiamata di funzioni API ODBC"
  - "API Windows [C++], chiamata da MFC"
ms.assetid: 5613d7dc-00b7-4646-99ae-1116c05c52b4
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Accesso a ODBC e SQL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria MFC include molte chiamate all'API di Windows, ma consente comunque di eseguire chiamate dirette a qualsiasi funzione API di Windows.  Le classi di database forniscono la stessa flessibilità in relazione alle funzioni dell'API ODBC.  Le classi di database nascondono la complessità delle classi ODBC e consentono di chiamare direttamente le funzioni dell'API ODBC da qualsiasi posizione all'interno del programma.  
  
 In modo analogo, le classi di database non richiedono un uso continuo di [SQL](../../data/odbc/sql.md), anche se è possibile utilizzare SQL direttamente, se lo si desidera.  Quando si apre un recordset, è possibile personalizzare gli oggetti recordset passando un'istruzione SQL personalizzata o impostando parti dell'istruzione predefinita.  È inoltre possibile eseguire chiamate SQL dirette mediante la funzione membro [ExecuteSQL](../Topic/CDatabase::ExecuteSQL.md) della classe [CDatabase](../../mfc/reference/cdatabase-class.md).  
  
 Per ulteriori informazioni, vedere [ODBC: chiamata diretta delle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) e [SQL: esecuzione di chiamate SQL dirette \(ODBC\)](../../data/odbc/sql-making-direct-sql-calls-odbc.md).  
  
## Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)