---
description: 'Ulteriori informazioni su: Recordset: aggiunta di record in blocco (ODBC)'
title: 'Recordset: aggiunta di massa di record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC recordsets, adding records
- recordsets, adding records
- bulk record additions to recordsets
ms.assetid: 4685f656-14b9-4f10-a1c5-147b2b89a0b4
ms.openlocfilehash: 5cb47fc8e96a38b2e5cc6c83cf464f28f2a85aaf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340398"
---
# <a name="recordset-adding-records-in-bulk-odbc"></a>Recordset: aggiunta di massa di record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

La classe [CRECORDSET](../../mfc/reference/crecordset-class.md) MFC offre una nuova ottimizzazione che migliora l'efficienza quando si aggiungono nuovi record in blocco a una tabella.

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di righe bulk, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Una nuova opzione per il parametro *dwOptions* per la funzione membro [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) , `optimizeBulkAdd` , migliora le prestazioni quando si aggiungono più record consecutivamente senza `Requery` chiamare o `Close` . Solo i campi che sono Dirty prima della prima `Update` chiamata vengono contrassegnati come Dirty per le `AddNew` / `Update` chiamate successive.

Questa ottimizzazione non è necessaria se si utilizzano le classi di database per sfruttare la `::SQLSetPos` funzione API ODBC per l'aggiunta, la modifica e l'eliminazione di record.

Se la libreria di cursori ODBC viene caricata o il driver ODBC non supporta l'aggiunta, la modifica e l'eliminazione tramite `::SQLSetPos` , questa ottimizzazione dovrebbe migliorare le prestazioni di aggiunta in blocco. Per attivare questa ottimizzazione, impostare il parametro *dwOptions* nella chiamata del `Open` Recordset a quanto segue:

```
appendOnly | optimizeBulkAdd
```

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)<br/>
[Recordset: blocco di record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
