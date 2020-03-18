---
title: Macro della mappa delle proprietà
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_PROP_MAP
- atlcom/ATL::PROP_DATA_ENTRY
- atlcom/ATL::PROP_ENTRY_TYPE
- atlcom/ATL::PROP_ENTRY_TYPE_EX
- atlcom/ATL::PROP_PAGE
- atlcom/ATL::END_PROP_MAP
helpviewer_keywords:
- property maps
ms.assetid: 128bc742-2b98-4b97-a243-684dbb83db77
ms.openlocfilehash: 1e2e7235dd924467d9d5e0613a704fedf8340ae4
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417523"
---
# <a name="property-map-macros"></a>Macro della mappa delle proprietà

Queste macro definiscono le mappe delle proprietà e le voci.

|||
|-|-|
|[BEGIN_PROP_MAP](#begin_prop_map)|Contrassegna l'inizio della mappa delle proprietà ATL.|
|[PROP_DATA_ENTRY](#prop_data_entry)|Indica l'extent o le dimensioni di un controllo ActiveX.|
|[PROP_ENTRY_TYPE](#prop_entry_type)|Immette una descrizione della proprietà, un DISPID della proprietà e una pagina delle proprietà CLSID nel mapping della proprietà.|
|[PROP_ENTRY_TYPE_EX](#prop_entry_type_ex)|Immette una descrizione della proprietà, il DISPID della proprietà, il CLSID della pagina delle proprietà e l'IID `IDispatch` nel mapping delle proprietà.|
|[PROP_PAGE](#prop_page)|Immette una pagina delle proprietà CLSID nel mapping della proprietà.|
|[END_PROP_MAP](#end_prop_map)|Contrassegna la fine della mappa delle proprietà ATL.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_prop_map"></a>BEGIN_PROP_MAP

Contrassegna l'inizio della mappa delle proprietà dell'oggetto.

```
BEGIN_PROP_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
in Specifica la classe che contiene la mappa della proprietà.

### <a name="remarks"></a>Osservazioni

La mappa delle proprietà archivia le descrizioni delle proprietà, i DISPID delle proprietà, i CLSID della pagina delle proprietà e `IDispatch` IID. Le classi [IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md), [IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md), [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)e [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) usano la mappa delle proprietà per recuperare e impostare queste informazioni.

Quando si crea un oggetto con la creazione guidata progetto ATL, la procedura guidata creerà una mappa delle proprietà vuota specificando BEGIN_PROP_MAP seguito da [END_PROP_MAP](#end_prop_map).

BEGIN_PROP_MAP non salva l'extent, ovvero le dimensioni, di una mappa delle proprietà, perché un oggetto che usa una mappa delle proprietà potrebbe non avere un'interfaccia utente, quindi non avrebbe alcun extent. Se l'oggetto è un controllo ActiveX con un'interfaccia utente, presenta un extent. In questo caso, è necessario specificare [PROP_DATA_ENTRY](#prop_data_entry) nella mappa delle proprietà per fornire l'extent.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#103](../../atl/codesnippet/cpp/property-map-macros_1.h)]

##  <a name="prop_data_entry"></a>PROP_DATA_ENTRY

Indica l'extent o le dimensioni di un controllo ActiveX.

```
PROP_DATA_ENTRY( szDesc, member, vt)
```

### <a name="parameters"></a>Parametri

*szDesc*<br/>
in Descrizione della proprietà.

*membro*<br/>
in Membro dati contenente l'extent; ad esempio, `m_sizeExtent`.

*vt*<br/>
in Specifica il tipo VARIANT della proprietà.

### <a name="remarks"></a>Osservazioni

Questa macro fa in modo che il membro dati specificato venga reso permanente.

Quando si crea un controllo ActiveX, la procedura guidata inserisce questa macro dopo la macro della mappa delle proprietà [BEGIN_PROP_MAP](#begin_prop_map) e prima della macro della mappa delle proprietà [END_PROP_MAP](#end_prop_map).

### <a name="example"></a>Esempio

Nell'esempio seguente, l'ambito dell'oggetto (`m_sizeExtent`) viene salvato in modo permanente.

[!code-cpp[NVC_ATL_Windowing#131](../../atl/codesnippet/cpp/property-map-macros_2.h)]

[!code-cpp[NVC_ATL_Windowing#132](../../atl/codesnippet/cpp/property-map-macros_3.h)]

##  <a name="prop_entry_type"></a>PROP_ENTRY_TYPE

Usare questa macro per immettere una descrizione della proprietà, un DISPID della proprietà e un CLSID della pagina delle proprietà nella mappa delle proprietà dell'oggetto.

```
PROP_ENTRY_TYPE( szDesc, dispid, clsid, vt)
```

### <a name="parameters"></a>Parametri

*szDesc*<br/>
in Descrizione della proprietà.

*DISPID*<br/>
in DISPID della proprietà.

*CLSID*<br/>
in CLSID della pagina delle proprietà associata. Usare il valore speciale CLSID_NULL per una proprietà a cui non è associata una pagina delle proprietà.

*vt*<br/>
in Tipo della proprietà.

### <a name="remarks"></a>Osservazioni

La macro PROP_ENTRY non era protetta e deprecata. È stata sostituita con PROP_ENTRY_TYPE.

La macro [BEGIN_PROP_MAP](#begin_prop_map) contrassegna l'inizio della mappa delle proprietà; la macro [END_PROP_MAP](#end_prop_map) contrassegna la fine.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_PROP_MAP](#begin_prop_map).

##  <a name="prop_entry_type_ex"></a>PROP_ENTRY_TYPE_EX

Simile a [PROP_ENTRY_TYPE](#prop_entry_type), ma consente di specificare un IID particolare se l'oggetto supporta più interfacce duali.

```
PROP_ENTRY_TYPE_EX( szDesc, dispid, clsid, iidDispatch, vt)
```

### <a name="parameters"></a>Parametri

*szDesc*<br/>
in Descrizione della proprietà.

*DISPID*<br/>
in DISPID della proprietà.

*CLSID*<br/>
in CLSID della pagina delle proprietà associata. Usare il valore speciale CLSID_NULL per una proprietà a cui non è associata una pagina delle proprietà.

*iidDispatch*<br/>
in IID dell'interfaccia duale che definisce la proprietà.

*vt*<br/>
in Tipo della proprietà.

### <a name="remarks"></a>Osservazioni

La macro PROP_ENTRY_EX non era protetta e deprecata. È stata sostituita con PROP_ENTRY_TYPE_EX.

La macro [BEGIN_PROP_MAP](#begin_prop_map) contrassegna l'inizio della mappa delle proprietà; la macro [END_PROP_MAP](#end_prop_map) contrassegna la fine.

### <a name="example"></a>Esempio

Nell'esempio seguente vengono raggruppate le voci per `IMyDual1` seguite da una voce per `IMyDual2`. Il raggruppamento per interfaccia duale consente di migliorare le prestazioni.

[!code-cpp[NVC_ATL_Windowing#133](../../atl/codesnippet/cpp/property-map-macros_4.h)]

##  <a name="prop_page"></a>PROP_PAGE

Utilizzare questa macro per immettere un CLSID della pagina delle proprietà nella mappa delle proprietà dell'oggetto.

```
PROP_PAGE(clsid)
```

### <a name="parameters"></a>Parametri

*CLSID*<br/>
in CLSID di una pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

PROP_PAGE è simile a [PROP_ENTRY_TYPE](#prop_entry_type), ma non richiede una descrizione della proprietà o un DISPID.

> [!NOTE]
>  Se è già stato immesso un CLSID con PROP_ENTRY_TYPE o [PROP_ENTRY_TYPE_EX](#prop_entry_type_ex), non è necessario effettuare una voce aggiuntiva con PROP_PAGE.

La macro [BEGIN_PROP_MAP](#begin_prop_map) contrassegna l'inizio della mappa delle proprietà; la macro [END_PROP_MAP](#end_prop_map) contrassegna la fine.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#134](../../atl/codesnippet/cpp/property-map-macros_5.h)]

##  <a name="end_prop_map"></a>END_PROP_MAP

Contrassegna la fine della mappa delle proprietà dell'oggetto.

```
END_PROP_MAP()
```

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto con la creazione guidata progetto ATL, la procedura guidata creerà una mappa delle proprietà vuota specificando [BEGIN_PROP_MAP](#begin_prop_map) seguito da END_PROP_MAP.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_PROP_MAP](#begin_prop_map).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
