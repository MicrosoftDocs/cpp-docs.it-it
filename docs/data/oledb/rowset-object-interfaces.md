---
title: Interfacce dell'oggetto rowset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- interfaces, OLE DB
- OLE DB, interfaces
- rowset objects [OLE DB]
- OLE DB provider templates, object interfaces
- interfaces, list of
ms.assetid: 0d7a5d48-2fe4-434f-a84b-157c1fdc3494
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e8a1a5f5256087a8869426489fe01250b16fc598
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39340511"
---
# <a name="rowset-object-interfaces"></a>Interfacce dell'oggetto Rowset
Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto set di righe.  
  
|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IAccessor](https://msdn.microsoft.com/library/ms719672.aspx)|Obbligatorio|Yes|  
|[IColumnsInfo](https://msdn.microsoft.com/library/ms724541.aspx)|Obbligatorio|Yes|  
|[IConvertType](https://msdn.microsoft.com/library/ms715926.aspx)|Obbligatorio|Yes|  
|[IRowset](https://msdn.microsoft.com/library/ms720986.aspx)|Obbligatorio|Yes|  
|[IRowsetInfo](https://msdn.microsoft.com/library/ms724541.aspx)|Obbligatorio|Yes|  
|[IChapteredRowset](https://msdn.microsoft.com/library/ms718180.aspx)|Facoltativo|No|  
|[IColumnsInfo2](https://msdn.microsoft.com/library/ms712953.aspx)|Facoltativo|No|  
|[IColumnsRowset](https://msdn.microsoft.com/library/ms722657.aspx)|Facoltativo|No|  
|[IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Facoltativo|Sì (tramite la libreria ATL)|  
|[IDBAsynchStatus](https://msdn.microsoft.com/library/ms709832.aspx)|Facoltativo|No|  
|[IGetRow](https://msdn.microsoft.com/library/ms718047.aspx)|Facoltativo|No|  
|[IRowsetChange](https://msdn.microsoft.com/library/ms715790.aspx)|Facoltativo|Yes|  
|[IRowsetChapterMember](https://msdn.microsoft.com/library/ms725430.aspx)|Facoltativo|No|  
|[IRowsetCurrentIndex](https://msdn.microsoft.com/library/ms709700.aspx)|Facoltativo|No|  
|[IRowsetFind](https://msdn.microsoft.com/library/ms724221.aspx)|Facoltativo|No|  
|[IRowsetIdentity](https://msdn.microsoft.com/library/ms715913.aspx)|Facoltativo (ma obbligatorio per i provider di livello 0)|Yes|  
|[IRowsetIndex](https://msdn.microsoft.com/library/ms719604.aspx)|Facoltativo|No|  
|[IRowsetLocate](https://msdn.microsoft.com/library/ms721190.aspx)|Facoltativo|Yes|  
|[IRowsetRefresh](https://msdn.microsoft.com/library/ms714892.aspx)|Facoltativo|No|  
|[IRowsetScroll](https://msdn.microsoft.com/library/ms712984.aspx)|Facoltativo|No|  
|[IRowsetUpdate](https://msdn.microsoft.com/library/ms714401.aspx)|Facoltativo|Yes|  
|[IRowsetView](https://msdn.microsoft.com/library/ms709755.aspx)|Facoltativo|No|  
|[ISupportErrorInfo](https://msdn.microsoft.com/library/ms715816.aspx)|Facoltativo|Yes|  
|[IRowsetBookmark](https://msdn.microsoft.com/library/ms714246.aspx)|Facoltativo|No|  
  
 L'oggetto set di righe generate dalla procedura guidata implementi `IAccessor`, `IRowset`, e `IRowsetInfo` attraverso l'ereditarietà. Il `IAccessorImpl` associa entrambe le colonne di output. Il `IRowset` interfaccia gestisce operazioni di recupero righe e i dati. Il `IRowsetInfo` interfaccia gestisce le proprietà del set di righe.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)