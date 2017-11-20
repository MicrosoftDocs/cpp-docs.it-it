---
title: Utilizzo di una visualizzazione di Record (accesso ai dati MFC) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: record views, customizing default code
ms.assetid: 91f2828f-0666-4273-ae28-e4703fd98521
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4d37f40169330fe878eee326628bd26bef9ca8d8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-a-record-view--mfc-data-access"></a>Uso di una visualizzazione di record (accesso ai dati MFC)
Questo argomento illustra come personalizzare il codice predefinito per le visualizzazioni di record fornito dalla procedura guidata. In genere, si desidera limitare la selezione di record con un [filtro](../data/odbc/recordset-filtering-records-odbc.md) o [parametri](../data/odbc/recordset-parameterizing-a-recordset-odbc.md), eventualmente [ordinamento](../data/odbc/recordset-sorting-records-odbc.md) i record e personalizzare l'istruzione SQL.  
  
 Utilizzando `CRecordView` è molto simile all'utilizzo [CFormView](../mfc/reference/cformview-class.md). L'approccio di base consiste nell'usare la visualizzazione di record per visualizzare ed eventualmente aggiornare i record di un solo recordset. Tuttavia, si potrebbe voler utilizzare altri recordset, come illustrato [visualizzazioni di Record: inserimento di una casella di riepilogo da un secondo Recordset](../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)   
 [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)