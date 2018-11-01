---
title: Interfacce dell'oggetto Rowset
ms.date: 10/24/2018
helpviewer_keywords:
- interfaces, OLE DB
- OLE DB, interfaces
- rowset objects [OLE DB]
- OLE DB provider templates, object interfaces
- interfaces, list of
ms.assetid: 0d7a5d48-2fe4-434f-a84b-157c1fdc3494
ms.openlocfilehash: 739c7d94e5df2d5edddc00bd3ae2703e07435c23
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50641012"
---
# <a name="rowset-object-interfaces"></a>Interfacce dell'oggetto Rowset

Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto set di righe.

|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|
|---------------|---------------|--------------------------------------|
|[IAccessor](/previous-versions/windows/desktop/ms719672)|Obbligatorio|Yes|
|[IColumnsInfo](/previous-versions/windows/desktop/ms724541)|Obbligatorio|Yes|
|[IConvertType](/previous-versions/windows/desktop/ms715926)|Obbligatorio|Yes|
|[IRowset](/previous-versions/windows/desktop/ms720986)|Obbligatorio|Yes|
|[IRowsetInfo](/previous-versions/windows/desktop/ms724541)|Obbligatorio|Yes|
|[IChapteredRowset](/previous-versions/windows/desktop/ms718180)|Facoltativo|No|
|[IColumnsInfo2](/previous-versions/windows/desktop/ms712953)|Facoltativo|No|
|[IColumnsRowset](/previous-versions/windows/desktop/ms722657)|Facoltativo|No|
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Facoltativo|Sì (tramite la libreria ATL)|
|[IDBAsynchStatus](/previous-versions/windows/desktop/ms709832)|Facoltativo|No|
|[IGetRow](/previous-versions/windows/desktop/ms718047)|Facoltativo|No|
|[IRowsetChange](/previous-versions/windows/desktop/ms715790)|Facoltativo|Yes|
|[IRowsetChapterMember](/previous-versions/windows/desktop/ms725430)|Facoltativo|No|
|[IRowsetCurrentIndex](/previous-versions/windows/desktop/ms709700)|Facoltativo|No|
|[IRowsetFind](/previous-versions/windows/desktop/ms724221)|Facoltativo|No|
|[IRowsetIdentity](/previous-versions/windows/desktop/ms715913)|Facoltativo (ma obbligatorio per i provider di livello 0)|Yes|
|[IRowsetIndex](/previous-versions/windows/desktop/ms719604)|Facoltativo|No|
|[IRowsetLocate](/previous-versions/windows/desktop/ms721190)|Facoltativo|Yes|
|[IRowsetRefresh](/previous-versions/windows/desktop/ms714892)|Facoltativo|No|
|[IRowsetScroll](/previous-versions/windows/desktop/ms712984)|Facoltativo|No|
|[IRowsetUpdate](/previous-versions/windows/desktop/ms714401)|Facoltativo|Yes|
|[IRowsetView](/previous-versions/windows/desktop/ms709755)|Facoltativo|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816)|Facoltativo|Yes|
|[IRowsetBookmark](/previous-versions/windows/desktop/ms714246)|Facoltativo|No|

L'oggetto set di righe generate dalla procedura guidata implementi `IAccessor`, `IRowset`, e `IRowsetInfo` attraverso l'ereditarietà. Il `IAccessorImpl` associa entrambe le colonne di output. Il `IRowset` interfaccia gestisce operazioni di recupero righe e i dati. Il `IRowsetInfo` interfaccia gestisce le proprietà del set di righe.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
