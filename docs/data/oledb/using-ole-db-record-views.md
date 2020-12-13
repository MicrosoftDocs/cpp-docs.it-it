---
description: 'Altre informazioni su: uso delle visualizzazioni di record OLE DB'
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
ms.openlocfilehash: 8230ba118038852f81159d21a51165b7448a26aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332464"
---
# <a name="using-ole-db-record-views"></a>Utilizzo delle visualizzazioni di record OLE DB

Se si desidera visualizzare OLE DB i dati dei set di righe in un'applicazione MFC, utilizzare la classe MFC [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md). Un oggetto visualizzazione di record creato da `COleDBRecordView` consente di visualizzare i record del database nei controlli MFC. La visualizzazione dei record è una visualizzazione del form della finestra di dialogo connessa direttamente a un OLE DB oggetto set di righe creato dalla `CRowset` classe modello. Il recupero di un handle per l'oggetto set di righe è semplice:

```cpp
COleDBRecordView myRecordView;
...
// CProductAccessor is a user record class
CRowset<CAccessor<CProductAccessor>> myRowSet = myRecordView.OnGetRowset();
```

La vista consente di visualizzare i campi dell' `CRowset` oggetto nei controlli della finestra di dialogo. L' `COleDBRecordView` oggetto utilizza il DDX (Dialog Data Exchange) e la funzionalità di spostamento incorporata in `CRowset` ( `MoveFirst` , `MoveNext` , `MovePrev` e `MoveLast` ) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del set di righe. `COleDBRecordView` tiene traccia della posizione dell'utente nel set di righe in modo che la visualizzazione dei record possa aggiornare l'interfaccia utente e fornisca un metodo [OnMove](../../mfc/reference/coledbrecordview-class.md#onmove) per aggiornare il record corrente prima di passare a un altro.

È possibile utilizzare le funzioni DDX con `COleDbRecordView` per ottenere i dati direttamente dal recordset del database e visualizzarli in un controllo finestra di dialogo. Usare i metodi **DDX_** <strong>\*</strong> (ad esempio `DDX_Text` ), non le funzioni **DDX_Field** <strong>\*</strong> (ad esempio `DDX_FieldText` ) con `COleDbRecordView` .

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Classe COleDBRecordView](../../mfc/reference/coledbrecordview-class.md)<br/>
