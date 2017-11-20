---
title: Utilizzo di visualizzazioni di Record OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE DB record views
- COleDBRecordView class, overview
- rowsets, record views
- record views, record view objects
- OLE DB, record views
- MFC, record views
ms.assetid: 1cd3e595-ce08-43d8-a0a9-d03b5d3e24ce
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c4e57f320c8b207e7b1c8721ab25744cd1f128bc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-ole-db-record-views"></a>Utilizzo delle visualizzazioni di record OLE DB
Se si desidera visualizzare i dati di set di righe OLE DB in un'applicazione MFC, è necessario utilizzare la classe MFC [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md). Creare un oggetto visualizzazione di record da `COleDBRecordView` consente di visualizzare i record del database nei controlli MFC. La visualizzazione di record è direttamente connessa a un oggetto OLE DB Rowset creato da una visualizzazione di form finestra di dialogo di `CRowset` classe modello. Ottenere un handle all'oggetto set di righe è semplice:  
  
```  
COleDBRecordView myRecordView;  
...  
// CProductAccessor is a user record class  
CRowset<CAccessor<CProductAccessor>> myRowSet = myRecordView.OnGetRowset();  
```  
  
 La vista visualizza i campi del `CRowset` oggetto nei controlli della finestra di dialogo. Il `COleDBRecordView` oggetto utilizza Dialog Data Exchange (DDX) e le funzionalità di spostamento incorporata `CRowset` (**MoveFirst**, `MoveNext`, `MovePrev`, e `MoveLast`) per automatizzare lo spostamento dei dati tra i controlli sul form e i campi del set di righe. `COleDBRecordView`tiene traccia della posizione dell'utente nel set di righe in modo che la visualizzazione di record può aggiornare l'interfaccia utente e fornisce un [OnMove](../../mfc/reference/coledbrecordview-class.md#onmove) metodo per aggiornare il record corrente prima di passare a un altro.  
  
 È possibile utilizzare le funzioni DDX con **COleDbRecordView** per ottenere i dati direttamente dal recordset del database e visualizzarlo in un controllo di finestra di dialogo. È consigliabile utilizzare il **DDX _\***  metodi (ad esempio `DDX_Text`), non il **DDX_Field\***  funzioni (ad esempio `DDX_FieldText`) con **COleDbRecordView** .  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzando funzioni di accesso](../../data/oledb/using-accessors.md)   
 [Classe COleDBRecordView](../../mfc/reference/coledbrecordview-class.md)