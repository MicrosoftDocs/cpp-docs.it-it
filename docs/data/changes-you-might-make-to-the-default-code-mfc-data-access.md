---
title: "Modifiche che &#232; possibile apportare al codice predefinito (accesso ai dati MFC) | Microsoft Docs"
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
  - "visualizzazioni di record [C++], personalizzazione di codice predefinito"
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Modifiche che &#232; possibile apportare al codice predefinito (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) fornisce una classe recordset che seleziona tutti i record in una singola tabella.  È possibile modificare questo comportamento in uno o più dei modi seguenti:  
  
-   Impostare un filtro o un criterio di ordinamento per il recordset.  Eseguire questa operazione in `OnInitialUpdate` dopo la costruzione dell'oggetto recordset ma prima della chiamata alla funzione membro **Open**.  Per altre informazioni, vedere [Recordset: applicazioni di filtri ai record \(ODBC\)](../data/odbc/recordset-filtering-records-odbc.md) e [Recordset: ordinamento dei record \(ODBC\)](../data/odbc/recordset-sorting-records-odbc.md).  
  
-   Applicare i parametri al recordset.  Specificare il valore effettivo dei parametri di runtime dopo il filtro.  Per altre informazioni, vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../data/odbc/recordset-parameterizing-a-recordset-odbc.md)  
  
-   Passare una stringa SQL personalizzata alla funzione membro [Open](../Topic/CRecordset::Open.md).  Per una descrizione di ciò che è possibile effettuare con questa tecnica, vedere [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md).  
  
## Vedere anche  
 [Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)