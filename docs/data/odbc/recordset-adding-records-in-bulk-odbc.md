---
title: 'Recordset: aggiunta di massa di record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC recordsets, adding records
- recordsets, adding records
- bulk record additions to recordsets
ms.assetid: 4685f656-14b9-4f10-a1c5-147b2b89a0b4
ms.openlocfilehash: 5a6a627054cd2e90420ac66a9e56e570f29d281e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594662"
---
# <a name="recordset-adding-records-in-bulk-odbc"></a>Recordset: aggiunta di massa di record (ODBC)

Questo argomento si applica alle classi ODBC MFC.

MFC [CRecordset](../../mfc/reference/crecordset-class.md) classe dispone di una nuova soluzione di ottimizzazione che consente di migliorare l'efficienza quando si aggiungono nuovi record in blocco a una tabella.

> [!NOTE]
> In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Una nuova opzione per la *dwOptions* parametro per il [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) funzione membro, `optimizeBulkAdd`, migliora le prestazioni quando si aggiungono più record consecutivamente senza chiamare `Requery` o `Close`. Solo i campi che vengono modificati prima del primo `Update` chiamata sono contrassegnati come dirty per successive `AddNew` / `Update` chiamate.

Se si usano le classi di database per poter sfruttare il `::SQLSetPos` funzione API ODBC per l'aggiunta, modifica, e l'eliminazione di record, questa ottimizzazione non è necessaria.

Se viene caricata la libreria di cursori ODBC o il driver ODBC non supporta l'aggiunta, modifica ed eliminazione tramite `::SQLSetPos`, questa ottimizzazione migliorano le operazioni bulk aggiungere delle prestazioni. Per abilitare questa ottimizzazione, impostare il *dwOptions* parametro nel `Open` chiamare per il recordset al seguente:

```
appendOnly | optimizeBulkAdd
```

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)<br/>
[Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)