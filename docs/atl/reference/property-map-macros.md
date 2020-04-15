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
ms.openlocfilehash: 56fdb02939a99e396b9000705753e2475b80f6dc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326097"
---
# <a name="property-map-macros"></a>Macro della mappa delle proprietà

Queste macro definiscono le mappe delle proprietà e le voci.

|||
|-|-|
|[BEGIN_PROP_MAP](#begin_prop_map)|Contrassegna l'inizio della mappa delle proprietà ATL.|
|[PROP_DATA_ENTRY](#prop_data_entry)|Indica l'estensione, o dimensioni, di un controllo ActiveX.|
|[PROP_ENTRY_TYPE](#prop_entry_type)|Immette una descrizione della proprietà, un DISPID della proprietà e il CLSID della pagina delle proprietà nella mappa delle proprietà.|
|[PROP_ENTRY_TYPE_EX](#prop_entry_type_ex)|Immette una descrizione della proprietà, un DISPID della `IDispatch` proprietà, il CLSID della pagina delle proprietà e l'IID nella mappa delle proprietà.|
|[PROP_PAGE](#prop_page)|Immette una pagina delle proprietà CLSID nella mappa delle proprietà.|
|[END_PROP_MAP](#end_prop_map)|Contrassegna la fine della mappa delle proprietà ATL.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="begin_prop_map"></a><a name="begin_prop_map"></a>BEGIN_PROP_MAP

Contrassegna l'inizio della mappa delle proprietà dell'oggetto.

```
BEGIN_PROP_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
[in] Specifica la classe contenente la mappa delle proprietà.

### <a name="remarks"></a>Osservazioni

Nella mappa delle proprietà sono archiviate le descrizioni delle proprietà, `IDispatch` i DISPID delle proprietà, i CLSID e gli IID della pagina delle proprietà. Le classi [IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md), [IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md), [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)e [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) utilizzano la mappa delle proprietà per recuperare e impostare queste informazioni.

Quando si crea un oggetto con la Creazione guidata progetto ATL, la procedura guidata creerà una mappa delle proprietà vuota specificando BEGIN_PROP_MAP seguito da [END_PROP_MAP](#end_prop_map).

BEGIN_PROP_MAP non salva l'estensione (ovvero le dimensioni) di una mappa delle proprietà, perché un oggetto che utilizza una mappa delle proprietà potrebbe non avere un'interfaccia utente, pertanto non avrebbe alcuna estensione. Se l'oggetto è un controllo ActiveX con un'interfaccia utente, ha un'estensione. In questo caso, è necessario specificare [PROP_DATA_ENTRY](#prop_data_entry) nella mappa delle proprietà per fornire l'estensione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#103](../../atl/codesnippet/cpp/property-map-macros_1.h)]

## <a name="prop_data_entry"></a><a name="prop_data_entry"></a>PROP_DATA_ENTRY

Indica l'estensione, o dimensioni, di un controllo ActiveX.

```
PROP_DATA_ENTRY( szDesc, member, vt)
```

### <a name="parameters"></a>Parametri

*szDesc*<br/>
[in] Descrizione della proprietà.

*Membro*<br/>
[in] Il membro dati contenente l'estensione; ad esempio, `m_sizeExtent`.

*vt*<br/>
[in] Specifica il tipo VARIANT della proprietà.

### <a name="remarks"></a>Osservazioni

Questa macro fa sì che il membro dati specificato per essere persistente.

Quando si crea un controllo ActiveX, la procedura guidata inserisce questa macro dopo la macro della mappa delle proprietà [BEGIN_PROP_MAP](#begin_prop_map) e prima della macro della mappa delle proprietà [END_PROP_MAP](#end_prop_map).

### <a name="example"></a>Esempio

Nell'esempio seguente, l'estensione`m_sizeExtent`dell'oggetto ( ) viene mantenuta.

[!code-cpp[NVC_ATL_Windowing#131](../../atl/codesnippet/cpp/property-map-macros_2.h)]

[!code-cpp[NVC_ATL_Windowing#132](../../atl/codesnippet/cpp/property-map-macros_3.h)]

## <a name="prop_entry_type"></a><a name="prop_entry_type"></a>PROP_ENTRY_TYPE

Utilizzare questa macro per immettere una descrizione della proprietà, un DISPID di proprietà e un CLSID della pagina delle proprietà nella mappa delle proprietà dell'oggetto.

```
PROP_ENTRY_TYPE( szDesc, dispid, clsid, vt)
```

### <a name="parameters"></a>Parametri

*szDesc*<br/>
[in] Descrizione della proprietà.

*Dispid*<br/>
[in] DISPID della proprietà.

*clsid*<br/>
[in] CLSID della pagina delle proprietà associata. Utilizzare il valore speciale CLSID_NULL per una proprietà a cui non è associata una pagina delle proprietà.

*vt*<br/>
[in] Tipo della proprietà.

### <a name="remarks"></a>Osservazioni

La macro PROP_ENTRY non è sicura e deprecata. È stato sostituito con PROP_ENTRY_TYPE.

La macro [BEGIN_PROP_MAP](#begin_prop_map) contrassegna l'inizio della mappa delle proprietà; la macro [END_PROP_MAP](#end_prop_map) segna la fine.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_PROP_MAP](#begin_prop_map).

## <a name="prop_entry_type_ex"></a><a name="prop_entry_type_ex"></a>PROP_ENTRY_TYPE_EX

Simile a [PROP_ENTRY_TYPE](#prop_entry_type), ma consente di specificare un particolare IID se l'oggetto supporta più interfacce duali.

```
PROP_ENTRY_TYPE_EX( szDesc, dispid, clsid, iidDispatch, vt)
```

### <a name="parameters"></a>Parametri

*szDesc*<br/>
[in] Descrizione della proprietà.

*Dispid*<br/>
[in] DISPID della proprietà.

*clsid*<br/>
[in] CLSID della pagina delle proprietà associata. Utilizzare il valore speciale CLSID_NULL per una proprietà a cui non è associata una pagina delle proprietà.

*iidDispatch*<br/>
[in] IID dell'interfaccia duale che definisce la proprietà.

*vt*<br/>
[in] Tipo della proprietà.

### <a name="remarks"></a>Osservazioni

La macro PROP_ENTRY_EX non è sicura e deprecata. È stato sostituito con PROP_ENTRY_TYPE_EX.

La macro [BEGIN_PROP_MAP](#begin_prop_map) contrassegna l'inizio della mappa delle proprietà; la macro [END_PROP_MAP](#end_prop_map) segna la fine.

### <a name="example"></a>Esempio

Nell'esempio riportato `IMyDual1` di seguito vengono `IMyDual2`gruppo le voci per seguite da una voce per . Il raggruppamento per doppia interfaccia migliorerà le prestazioni.

[!code-cpp[NVC_ATL_Windowing#133](../../atl/codesnippet/cpp/property-map-macros_4.h)]

## <a name="prop_page"></a><a name="prop_page"></a>PROP_PAGE

Utilizzare questa macro per immettere un CLSID della pagina delle proprietà nella mappa delle proprietà dell'oggetto.

```
PROP_PAGE(clsid)
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] CLSID di una pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

PROP_PAGE è simile a [PROP_ENTRY_TYPE](#prop_entry_type), ma non richiede una descrizione di proprietà o DISPID.

> [!NOTE]
> Se è già stato immesso un CLSID con PROP_ENTRY_TYPE o [PROP_ENTRY_TYPE_EX](#prop_entry_type_ex), non è necessario inserire un'ulteriore voce con PROP_PAGE.

La macro [BEGIN_PROP_MAP](#begin_prop_map) contrassegna l'inizio della mappa delle proprietà; la macro [END_PROP_MAP](#end_prop_map) segna la fine.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#134](../../atl/codesnippet/cpp/property-map-macros_5.h)]

## <a name="end_prop_map"></a><a name="end_prop_map"></a>END_PROP_MAP

Contrassegna la fine della mappa delle proprietà dell'oggetto.

```
END_PROP_MAP()
```

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto con la Creazione guidata progetto ATL, la procedura guidata creerà una mappa delle proprietà vuota specificando [BEGIN_PROP_MAP](#begin_prop_map) seguito da END_PROP_MAP.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_PROP_MAP](#begin_prop_map).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
