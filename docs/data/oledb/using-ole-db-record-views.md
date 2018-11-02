---
title: Utilizzo delle visualizzazioni di record OLE DB
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB record views
- COleDBRecordView class, overview
- rowsets, record views
- record views, record view objects
- OLE DB, record views
- MFC, record views
ms.assetid: 1cd3e595-ce08-43d8-a0a9-d03b5d3e24ce
ms.openlocfilehash: 631e78e1a397ec360b1f3b2d94d7340e96925e23
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50582712"
---
# <a name="using-ole-db-record-views"></a>Utilizzo delle visualizzazioni di record OLE DB

Se si desidera visualizzare i dati di set di righe OLE DB in un'applicazione MFC, utilizzare la classe MFC [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md). Creare un oggetto di visualizzazione di record da `COleDBRecordView` consente di visualizzare i record del database nei controlli MFC. La visualizzazione di record è una visualizzazione di form di finestra di dialogo direttamente connessa a un oggetto di righe OLE DB creato dal `CRowset` classe modello. Ottenere un handle all'oggetto set di righe è semplice:

```cpp
COleDBRecordView myRecordView;
...
// CProductAccessor is a user record class
CRowset<CAccessor<CProductAccessor>> myRowSet = myRecordView.OnGetRowset();
```

La visualizzazione Mostra i campi del `CRowset` oggetto nei controlli della finestra di dialogo. Il `COleDBRecordView` Dialog Data Exchange (DDX) utilizzata dall'oggetto e le funzionalità di esplorazione integrate `CRowset` (`MoveFirst`, `MoveNext`, `MovePrev`, e `MoveLast`) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del set di righe. `COleDBRecordView` tiene traccia della posizione dell'utente nel set di righe in modo che la visualizzazione di record è possibile aggiornare l'interfaccia utente e fornisce un' [OnMove](../../mfc/reference/coledbrecordview-class.md#onmove) metodo per l'aggiornamento del record corrente prima di passare a un altro.

È possibile usare le funzioni DDX con `COleDbRecordView` per ottenere i dati direttamente dal set di record di database e visualizzarlo in un controllo di finestra di dialogo. Usare la **DDX _** <strong>\*</strong> metodi (ad esempio `DDX_Text`), non il **DDX_Field** <strong>\*</strong> funzioni ( ad esempio `DDX_FieldText`) con `COleDbRecordView`.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Classe COleDBRecordView](../../mfc/reference/coledbrecordview-class.md)<br/>
