---
title: Uso di una visualizzazione di Record (accesso ai dati MFC) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- record views, customizing default code
ms.assetid: 91f2828f-0666-4273-ae28-e4703fd98521
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4107b5e19020843fa50495153841ebcba64301ad
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46077685"
---
# <a name="using-a-record-view--mfc-data-access"></a>Uso di una visualizzazione di record (accesso ai dati MFC)

Questo argomento illustra come personalizzare il codice predefinito per le visualizzazioni di record fornito dalla procedura guidata. In genere, si desidera vincolare la selezione di record con un [filtro](../data/odbc/recordset-filtering-records-odbc.md) oppure [parametri](../data/odbc/recordset-parameterizing-a-recordset-odbc.md), eventualmente [sort](../data/odbc/recordset-sorting-records-odbc.md) i record e personalizzare l'istruzione SQL.  
  
Usando `CRecordView` è analogo a quello tramite [CFormView](../mfc/reference/cformview-class.md). L'approccio di base consiste nell'usare la visualizzazione di record per visualizzare ed eventualmente aggiornare i record di un solo recordset. Tuttavia, si potrebbe voler usare anche, come descritto in altri recordset [visualizzazioni di Record: la compilazione di una casella di riepilogo da un secondo Recordset](../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).  
  
## <a name="see-also"></a>Vedere anche  

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)