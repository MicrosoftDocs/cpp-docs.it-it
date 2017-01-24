---
title: "Recordset: aggiunta di massa di record (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggiunte di massa di record a recordset"
  - "recordset ODBC, aggiunta di record"
  - "recordset, aggiunta di record"
ms.assetid: 4685f656-14b9-4f10-a1c5-147b2b89a0b4
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: aggiunta di massa di record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Per la classe [CRecordset](../../mfc/reference/crecordset-class.md) MFC è disponibile una nuova ottimizzazione che consente di migliorare le prestazioni quando si effettua l'aggiunta di massa di nuovi record a una tabella.  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si utilizza il recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Una nuova opzione per il parametro **dwOptions** passato alla funzione membro [CRecordset::Open](../Topic/CRecordset::Open.md), denominata **optimizeBulkAdd**, consente di migliorare le prestazioni quando si aggiungono più record consecutivamente senza chiamare **Requery** o **Close**.  Solo i campi modificati prima della prima chiamata a **Update** sono contrassegnati come modificati per le successive chiamate a `AddNew`\/**Update**.  
  
 Se si utilizzano le classi di database per usufruire della funzione dell'API ODBC **::SQLSetPos** per l'aggiunta, la modifica e l'eliminazione di record, questa ottimizzazione non è necessaria.  
  
 Se è caricata la libreria di cursori ODBC o il driver ODBC non supporta l'aggiunta, la modifica e l'eliminazione tramite **::SQLSetPos**, questa ottimizzazione dovrebbe migliorare le prestazioni per le operazioni di aggiunta di massa.  Per attivare questa ottimizzazione, impostare il parametro **dwOptions** nella chiamata a **Open** per il recordset su:  
  
```  
appendOnly | optimizeBulkAdd  
```  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: aggiunta, aggiornamento ed eliminazione di record \(ODBC\)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)   
 [Recordset: blocco dei record \(ODBC\)](../../data/odbc/recordset-locking-records-odbc.md)