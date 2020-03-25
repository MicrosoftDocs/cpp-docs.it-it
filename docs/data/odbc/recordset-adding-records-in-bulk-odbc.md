---
title: 'Recordset: aggiunta di massa di record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC recordsets, adding records
- recordsets, adding records
- bulk record additions to recordsets
ms.assetid: 4685f656-14b9-4f10-a1c5-147b2b89a0b4
ms.openlocfilehash: f561cb0275933a973e97ef0518148e81e14a0234
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213018"
---
# <a name="recordset-adding-records-in-bulk-odbc"></a>Recordset: aggiunta di massa di record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

La classe [CRECORDSET](../../mfc/reference/crecordset-class.md) MFC offre una nuova ottimizzazione che migliora l'efficienza quando si aggiungono nuovi record in blocco a una tabella.

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di righe bulk, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Una nuova opzione per il parametro *dwOptions* per la funzione membro [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) , `optimizeBulkAdd`, migliora le prestazioni quando si aggiungono più record consecutivamente senza chiamare `Requery` o `Close`. Solo i campi che sono Dirty prima della prima chiamata di `Update` vengono contrassegnati come Dirty per le chiamate successive `AddNew`/`Update`.

Questa ottimizzazione non è necessaria se si utilizzano le classi di database per sfruttare la `::SQLSetPos` funzione API ODBC per l'aggiunta, la modifica e l'eliminazione di record.

Se la libreria di cursori ODBC viene caricata o il driver ODBC non supporta l'aggiunta, la modifica e l'eliminazione tramite `::SQLSetPos`, questa ottimizzazione dovrebbe migliorare le prestazioni di aggiunta bulk. Per attivare questa ottimizzazione, impostare il parametro *dwOptions* nella chiamata `Open` per il recordset come riportato di seguito:

```
appendOnly | optimizeBulkAdd
```

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)<br/>
[Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
