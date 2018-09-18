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
ms.openlocfilehash: 87b8b6893c8fdd04374919ceff1d28a61bc315e5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024665"
---
# <a name="rowset-object-interfaces"></a>Interfacce dell'oggetto Rowset

Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto set di righe.  
  
|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IAccessor](/previous-versions/windows/desktop/ms719672\(v=vs.85\))|Obbligatorio|Yes|  
|[IColumnsInfo](/previous-versions/windows/desktop/ms724541\(v=vs.85\))|Obbligatorio|Yes|  
|[IConvertType](/previous-versions/windows/desktop/ms715926\(v=vs.85\))|Obbligatorio|Yes|  
|[IRowset](/previous-versions/windows/desktop/ms720986\(v=vs.85\))|Obbligatorio|Yes|  
|[IRowsetInfo](/previous-versions/windows/desktop/ms724541\(v=vs.85\))|Obbligatorio|Yes|  
|[IChapteredRowset](/previous-versions/windows/desktop/ms718180\(v=vs.85\))|Facoltativo|No|  
|[IColumnsInfo2](/previous-versions/windows/desktop/ms712953\(v=vs.85\))|Facoltativo|No|  
|[IColumnsRowset](/previous-versions/windows/desktop/ms722657\(v=vs.85\))|Facoltativo|No|  
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Facoltativo|Sì (tramite la libreria ATL)|  
|[IDBAsynchStatus](/previous-versions/windows/desktop/ms709832\(v=vs.85\))|Facoltativo|No|  
|[IGetRow](/previous-versions/windows/desktop/ms718047\(v=vs.85\))|Facoltativo|No|  
|[IRowsetChange](/previous-versions/windows/desktop/ms715790\(v=vs.85\))|Facoltativo|Yes|  
|[IRowsetChapterMember](/previous-versions/windows/desktop/ms725430\(v=vs.85\))|Facoltativo|No|  
|[IRowsetCurrentIndex](/previous-versions/windows/desktop/ms709700\(v=vs.85\))|Facoltativo|No|  
|[IRowsetFind](/previous-versions/windows/desktop/ms724221\(v=vs.85\))|Facoltativo|No|  
|[IRowsetIdentity](/previous-versions/windows/desktop/ms715913\(v=vs.85\))|Facoltativo (ma obbligatorio per i provider di livello 0)|Yes|  
|[IRowsetIndex](/previous-versions/windows/desktop/ms719604\(v=vs.85\))|Facoltativo|No|  
|[IRowsetLocate](/previous-versions/windows/desktop/ms721190\(v=vs.85\))|Facoltativo|Yes|  
|[IRowsetRefresh](/previous-versions/windows/desktop/ms714892\(v=vs.85\))|Facoltativo|No|  
|[IRowsetScroll](/previous-versions/windows/desktop/ms712984\(v=vs.85\))|Facoltativo|No|  
|[IRowsetUpdate](/previous-versions/windows/desktop/ms714401\(v=vs.85\))|Facoltativo|Yes|  
|[IRowsetView](/previous-versions/windows/desktop/ms709755\(v=vs.85\))|Facoltativo|No|  
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816\(v=vs.85\))|Facoltativo|Yes|  
|[IRowsetBookmark](/previous-versions/windows/desktop/ms714246\(v=vs.85\))|Facoltativo|No|  
  
L'oggetto set di righe generate dalla procedura guidata implementi `IAccessor`, `IRowset`, e `IRowsetInfo` attraverso l'ereditarietà. Il `IAccessorImpl` associa entrambe le colonne di output. Il `IRowset` interfaccia gestisce operazioni di recupero righe e i dati. Il `IRowsetInfo` interfaccia gestisce le proprietà del set di righe.  
  
## <a name="see-also"></a>Vedere anche  

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)