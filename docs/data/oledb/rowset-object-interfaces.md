---
description: 'Altre informazioni su: interfacce oggetto set di righe'
title: Interfacce per oggetti Rowset
ms.date: 10/24/2018
helpviewer_keywords:
- interfaces, OLE DB
- OLE DB, interfaces
- rowset objects [OLE DB]
- OLE DB provider templates, object interfaces
- interfaces, list of
ms.assetid: 0d7a5d48-2fe4-434f-a84b-157c1fdc3494
ms.openlocfilehash: fc7cbb0ee7c15cc7414144334018afc93888da01
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316856"
---
# <a name="rowset-object-interfaces"></a>Interfacce per oggetti Rowset

Nella tabella seguente vengono illustrate le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto set di righe.

|Interfaccia|Necessaria?|Implementato da modelli di OLE DB?|
|---------------|---------------|--------------------------------------|
|[IAccessor](/previous-versions/windows/desktop/ms719672(v=vs.85))|Obbligatorio|Sì|
|[IColumnsInfo](/previous-versions/windows/desktop/ms724541(v=vs.85))|Obbligatorio|Sì|
|[IConvertType](/previous-versions/windows/desktop/ms715926(v=vs.85))|Obbligatorio|Sì|
|[IRowset](/previous-versions/windows/desktop/ms720986(v=vs.85))|Obbligatorio|Sì|
|[IRowsetInfo](/previous-versions/windows/desktop/ms724541(v=vs.85))|Obbligatorio|Sì|
|[IChapteredRowset](/previous-versions/windows/desktop/ms718180(v=vs.85))|Facoltativo|No|
|[IColumnsInfo2](/previous-versions/windows/desktop/ms712953(v=vs.85))|Facoltativo|No|
|[IColumnsRowset](/previous-versions/windows/desktop/ms722657(v=vs.85))|Facoltativo|No|
|[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Facoltativo|Sì (tramite ATL)|
|[IDBAsynchStatus](/previous-versions/windows/desktop/ms709832(v=vs.85))|Facoltativo|No|
|[IGetRow](/previous-versions/windows/desktop/ms718047(v=vs.85))|Facoltativo|No|
|[IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85))|Facoltativo|Sì|
|[IRowsetChapterMember](/previous-versions/windows/desktop/ms725430(v=vs.85))|Facoltativo|No|
|[IRowsetCurrentIndex](/previous-versions/windows/desktop/ms709700(v=vs.85))|Facoltativo|No|
|[IRowsetFind](/previous-versions/windows/desktop/ms724221(v=vs.85))|Facoltativo|No|
|[IRowsetIdentity](/previous-versions/windows/desktop/ms715913(v=vs.85))|Facoltativo (ma obbligatorio per i provider di livello 0)|Sì|
|[IRowsetIndex](/previous-versions/windows/desktop/ms719604(v=vs.85))|Facoltativo|No|
|[IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85))|Facoltativo|Sì|
|[IRowsetRefresh](/previous-versions/windows/desktop/ms714892(v=vs.85))|Facoltativo|No|
|[IRowsetScroll](/previous-versions/windows/desktop/ms712984(v=vs.85))|Facoltativo|No|
|[IRowsetUpdate](/previous-versions/windows/desktop/ms714401(v=vs.85))|Facoltativo|Sì|
|[IRowsetView](/previous-versions/windows/desktop/ms709755(v=vs.85))|Facoltativo|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816(v=vs.85))|Facoltativo|Sì|
|[IRowsetBookmark](/previous-versions/windows/desktop/ms714246(v=vs.85))|Facoltativo|No|

L'oggetto set di righe generato dalla procedura guidata implementa `IAccessor` , `IRowset` e `IRowsetInfo` tramite l'ereditarietà. `IAccessorImpl`Associa entrambe le colonne di output. L' `IRowset` interfaccia gestisce il recupero di righe e dati. L' `IRowsetInfo` interfaccia gestisce le proprietà del set di righe.

## <a name="see-also"></a>Vedi anche

[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
