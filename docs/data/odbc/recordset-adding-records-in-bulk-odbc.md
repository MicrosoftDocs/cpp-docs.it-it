---
title: 'Recordset: Aggiunta di record di massa (ODBC) | Documenti Microsoft'
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
- ODBC recordsets, adding records
- recordsets, adding records
- bulk record additions to recordsets
ms.assetid: 4685f656-14b9-4f10-a1c5-147b2b89a0b4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 251d2fa4b7c28c1458fdc5643c9b17c53ba1b0ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-adding-records-in-bulk-odbc"></a>Recordset: aggiunta di massa di record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 MFC [CRecordset](../../mfc/reference/crecordset-class.md) classe dispone di una nuova ottimizzazione che migliora l'efficienza quando si aggiungono nuovi record in massa a una tabella.  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Una nuova opzione per il **dwOptions** parametro per il [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) funzione membro, **denominata optimizeBulkAdd**, migliora le prestazioni quando si aggiungono più record consecutivamente senza chiamare **Requery** o **Chiudi**. Solo i campi modificati prima del primo **aggiornamento** chiamata sono contrassegnati come dirty per successive `AddNew` / **aggiornamento** chiamate.  
  
 Se si usano le classi di database per sfruttare il **:: SQLSetPos** funzione API ODBC per l'aggiunta, modifica, e l'eliminazione di record, questa ottimizzazione è necessaria.  
  
 Se è stata caricata la libreria di cursori ODBC o il driver ODBC non supporta l'aggiunta, modifica ed eliminazione tramite **:: SQLSetPos**, questa ottimizzazione dovrebbe migliorare bulk aggiungere delle prestazioni. Per attivare questa ottimizzazione, impostare il **dwOptions** parametro il **aprire** chiamata per il recordset al seguente:  
  
```  
appendOnly | optimizeBulkAdd  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)   
 [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)