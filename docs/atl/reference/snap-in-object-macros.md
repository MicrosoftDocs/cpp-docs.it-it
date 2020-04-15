---
title: Macro di oggetti snap-in
ms.date: 11/04/2016
f1_keywords:
- atlsnap/ATL::BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP
- atlsnap/ATL::BEGIN_SNAPINTOOLBARID_MAP
- atlsnap/ATL::END_EXTENSION_SNAPIN_NODEINFO_MAP
- atlsnap/ATL::END_SNAPINTOOLBARID_MAP
- atlsnap/ATL::EXTENSION_SNAPIN_DATACLASS
- atlsnap/ATL::EXTENSION_SNAPIN_NODEINFO_ENTRY
- atlsnap/ATL::SNAPINMENUID
- atlsnap/ATL::SNAPINTOOLBARID_ENTRY
ms.assetid: 4e9850c0-e395-4929-86c9-584a81828053
ms.openlocfilehash: 6a57cdb3c9b6a4448bc954ff754ac9b18fa0b393
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325864"
---
# <a name="snap-in-object-macros"></a>Macro di oggetti snap-in

Queste macro forniscono il supporto per le estensioni snap-in.

|||
|-|-|
|[BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map)|Contrassegna l'inizio della mappa delle classi di dati dell'estensione dello snap-in per un oggetto Snap-In.|
|[BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map)|Contrassegna l'inizio della mappa della barra degli strumenti per un oggetto Snap-In.|
|[END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map)|Contrassegna la fine della mappa delle classi di dati dell'estensione dello snap-in per un oggetto Snap-In.|
|[END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map)|Contrassegna la fine della mappa della barra degli strumenti per un oggetto Snap-In.|
|[EXTENSION_SNAPIN_DATACLASS](#extension_snapin_dataclass)|Crea un membro dati per la classe di dati dell'estensione dello snap-in.|
|[EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry)|Immette una classe di dati di estensione snap-in nella mappa delle classi di dati di estensione dello snap-in dell'oggetto Snap-In.|
|[SNAPINMENUID](#snapinmenuid)|Dichiara l'ID del menu di scelta rapida utilizzato dall'oggetto Snap-In.|
|[SNAPINTOOLBARID_ENTRY](#snapintoolbarid_entry)|Consente di accedere a una barra degli strumenti nella mappa della barra degli strumenti dell'oggetto Snap-In.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsnap.h

## <a name="begin_extension_snapin_nodeinfo_map"></a><a name="begin_extension_snapin_nodeinfo_map"></a>BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP

Contrassegna l'inizio della mappa delle classi di dati dell'estensione dello snap-in.

```
BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP(classname)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
[in] Nome della classe di dati dell'estensione dello snap-in.

### <a name="remarks"></a>Osservazioni

Iniziare la mappa delle estensioni dello snap-in con la macro BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP, aggiungere voci per ogni tipo di dati dell'estensione dello snap-in con la macro [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) e completare la mappa con la macro [END_EXTENSION_SNAPIN_NODEINFO_MAP.](#end_extension_snapin_nodeinfo_map)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

## <a name="begin_snapintoolbarid_map"></a><a name="begin_snapintoolbarid_map"></a>BEGIN_SNAPINTOOLBARID_MAP

Dichiara l'inizio della mappa ID della barra degli strumenti per l'oggetto Snap-In.

```
BEGIN_SNAPINTOOLBARID_MAP(_class)
```

### <a name="parameters"></a>Parametri

*_class*<br/>
[in] Specifica la classe di oggetti Snap-In.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#106](../../atl/codesnippet/cpp/snap-in-object-macros_2.h)]

## <a name="end_extension_snapin_nodeinfo_map"></a><a name="end_extension_snapin_nodeinfo_map"></a>END_EXTENSION_SNAPIN_NODEINFO_MAP

Contrassegna la fine della mappa delle classi di dati dell'estensione dello snap-in.

```
END_EXTENSION_SNAPIN_NODEINFO_MAP()
```

### <a name="remarks"></a>Osservazioni

Iniziare la mappa delle estensioni dello snap-in con la macro [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP,](#begin_extension_snapin_nodeinfo_map) aggiungere voci per ogni tipo di dati dello snap-in di estensione con la macro [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) e completare la mappa con la macro END_EXTENSION_SNAPIN_NODEINFO_MAP.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

## <a name="end_snapintoolbarid_map"></a><a name="end_snapintoolbarid_map"></a>END_SNAPINTOOLBARID_MAP

Dichiara la fine della mappa ID della barra degli strumenti per l'oggetto Snap-In.

```
END_SNAPINTOOLBARID_MAP( _class )
```

### <a name="parameters"></a>Parametri

*_class*<br/>
[in] Specifica la classe di oggetti Snap-In.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

## <a name="extension_snapin_dataclass"></a><a name="extension_snapin_dataclass"></a>EXTENSION_SNAPIN_DATACLASS

Aggiunge un membro dati alla classe di dati di estensione dello snap-in per una classe derivata da **ISnapInItemImpl.**

```
EXTENSION_SNAPIN_DATACLASS(dataClass )
```

### <a name="parameters"></a>Parametri

*DataClass (classe Data)*<br/>
[in] Classe di dati dell'estensione dello snap-in.

### <a name="remarks"></a>Osservazioni

Questa classe deve essere immessa anche in una mappa della classe di dati di estensione snap-in. Iniziare la mappa delle classi di dati dell'estensione dello snap-in con la macro [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP,](#begin_extension_snapin_nodeinfo_map) aggiungere voci per ogni tipo di dati dell'estensione dello snap-in con la macro [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) e completare la mappa con la macro [END_EXTENSION_SNAPIN_NODEINFO_MAP.](#end_extension_snapin_nodeinfo_map)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

## <a name="extension_snapin_nodeinfo_entry"></a><a name="extension_snapin_nodeinfo_entry"></a>EXTENSION_SNAPIN_NODEINFO_ENTRY

Aggiunge una classe di dati di estensione snap-in al mapping della classe di dati dell'estensione dello snap-in.

```
EXTENSION_SNAPIN_NODEINFO_ENTRY( dataClass )
```

### <a name="parameters"></a>Parametri

*DataClass (classe Data)*<br/>
[in] Classe di dati dell'estensione dello snap-in.

### <a name="remarks"></a>Osservazioni

Iniziare la mappa delle classi di dati dell'estensione dello snap-in con la macro [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP,](#begin_extension_snapin_nodeinfo_map) aggiungere voci per ogni tipo di dati dell'estensione dello snap-in con la macro EXTENSION_SNAPIN_NODEINFO_ENTRY e completare la mappa con la macro [END_EXTENSION_SNAPIN_NODEINFO_MAP.](#end_extension_snapin_nodeinfo_map)

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

## <a name="snapinmenuid"></a><a name="snapinmenuid"></a>SNAPINMENUID

Utilizzare questa macro per dichiarare la risorsa del menu di scelta rapida dell'oggetto Snap-In.

```
SNAPINMENUID( id )
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] Identifica il menu di scelta rapida dell'oggetto Snap-In.

## <a name="snapintoolbarid_entry"></a><a name="snapintoolbarid_entry"></a>SNAPINTOOLBARID_ENTRY

Utilizzare questa macro per immettere un ID barra degli strumenti nella mappa ID barra degli strumenti dell'oggetto Snap-In.

```
SNAPINTOOLBARID_ENTRY( id )
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] Identifica il controllo barra degli strumenti.

### <a name="remarks"></a>Osservazioni

La macro [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map) contrassegna l'inizio della mappa id della barra degli strumenti; la macro [END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map) segna la fine.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
