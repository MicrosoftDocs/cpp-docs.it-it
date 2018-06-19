---
title: Interfacce dell'oggetto rowset | Documenti Microsoft
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
ms.openlocfilehash: aaed092d0a67c80852216b6342d32820c7028c4b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33112758"
---
# <a name="rowset-object-interfaces"></a>Interfacce dell'oggetto Rowset
Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto set di righe.  
  
|Interfaccia|Obbligatorio?|Implementata dai modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx)|Obbligatorio|Yes|  
|[IColumnsInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx)|Obbligatorio|Yes|  
|[IConvertType](https://msdn.microsoft.com/en-us/library/ms715926.aspx)|Obbligatorio|Yes|  
|[IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx)|Obbligatorio|Yes|  
|[IRowsetInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx)|Obbligatorio|Yes|  
|[IChapteredRowset](https://msdn.microsoft.com/en-us/library/ms718180.aspx)|Facoltativo|No|  
|[IColumnsInfo2](https://msdn.microsoft.com/en-us/library/ms712953.aspx)|Facoltativo|No|  
|[IColumnsRowset](https://msdn.microsoft.com/en-us/library/ms722657.aspx)|Facoltativo|No|  
|[IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Facoltativo|Sì (tramite ATL)|  
|[IDBAsynchStatus](https://msdn.microsoft.com/en-us/library/ms709832.aspx)|Facoltativo|No|  
|[IGetRow](https://msdn.microsoft.com/en-us/library/ms718047.aspx)|Facoltativo|No|  
|[IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx)|Facoltativo|Yes|  
|[IRowsetChapterMember](https://msdn.microsoft.com/en-us/library/ms725430.aspx)|Facoltativo|No|  
|[IRowsetCurrentIndex](https://msdn.microsoft.com/en-us/library/ms709700.aspx)|Facoltativo|No|  
|[IRowsetFind](https://msdn.microsoft.com/en-us/library/ms724221.aspx)|Facoltativo|No|  
|[IRowsetIdentity](https://msdn.microsoft.com/en-us/library/ms715913.aspx)|Facoltativa (ma obbligatoria per i provider di livello 0)|Yes|  
|[IRowsetIndex](https://msdn.microsoft.com/en-us/library/ms719604.aspx)|Facoltativo|No|  
|[IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx)|Facoltativo|Yes|  
|[IRowsetRefresh](https://msdn.microsoft.com/en-us/library/ms714892.aspx)|Facoltativo|No|  
|[IRowsetScroll](https://msdn.microsoft.com/en-us/library/ms712984.aspx)|Facoltativo|No|  
|[IRowsetUpdate](https://msdn.microsoft.com/en-us/library/ms714401.aspx)|Facoltativo|Yes|  
|[IRowsetView](https://msdn.microsoft.com/en-us/library/ms709755.aspx)|Facoltativo|No|  
|[ISupportErrorInfo](https://msdn.microsoft.com/en-us/library/ms715816.aspx)|Facoltativo|Yes|  
|[IRowsetBookmark](https://msdn.microsoft.com/en-us/library/ms714246.aspx)|Facoltativo|No|  
  
 L'oggetto set di righe generato dalla procedura guidata implementa `IAccessor`, `IRowset`, e `IRowsetInfo` tramite l'ereditarietà. Il `IAccessorImpl` associa entrambe le colonne di output. Il `IRowset` interfaccia gestisce dati e recupera righe. Il `IRowsetInfo` interfaccia gestisce le proprietà del set di righe.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)