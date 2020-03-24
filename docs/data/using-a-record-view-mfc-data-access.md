---
title: Uso di una visualizzazione di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views, customizing default code
ms.assetid: 91f2828f-0666-4273-ae28-e4703fd98521
ms.openlocfilehash: 611ddfd755eec84d4f2572a50c18802f988c5c3d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209027"
---
# <a name="using-a-record-view--mfc-data-access"></a>Uso di una visualizzazione di record (accesso ai dati MFC)

Questo argomento illustra come personalizzare il codice predefinito per le visualizzazioni di record fornito dalla procedura guidata. In genere, si vuole vincolare la selezione dei record con un [filtro](../data/odbc/recordset-filtering-records-odbc.md) o [parametri](../data/odbc/recordset-parameterizing-a-recordset-odbc.md), ad esempio [ordinare](../data/odbc/recordset-sorting-records-odbc.md) i record, personalizzare l'istruzione SQL.

L'uso di `CRecordView` è molto simile all'uso di [CFormView](../mfc/reference/cformview-class.md). L'approccio di base consiste nell'usare la visualizzazione di record per visualizzare ed eventualmente aggiornare i record di un solo recordset. Oltre a questo, potrebbe essere necessario utilizzare anche altri recordset, come descritto in visualizzazioni di [record: compilazione di una casella di riepilogo da un secondo recordset](../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).

## <a name="see-also"></a>Vedere anche

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)
