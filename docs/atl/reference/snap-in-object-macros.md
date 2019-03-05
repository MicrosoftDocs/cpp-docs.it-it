---
title: Macro di oggetti snap-In
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
ms.openlocfilehash: b75dd04bed4895d722939d1bf9c0a6dfff2126e0
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57292599"
---
# <a name="snap-in-object-macros"></a>Macro di oggetti snap-In

Queste macro forniscono il supporto per le estensioni lo snap-in.

|||
|-|-|
|[BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map)|Contrassegna l'inizio della mappa di classe dei dati di estensione dello snap-in per un oggetto Snap-In.|
|[BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map)|Contrassegna l'inizio della mappa della barra degli strumenti per un oggetto Snap-In.|
|[END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map)|Contrassegna la fine della mappa di classe dei dati di estensione dello snap-in per un oggetto Snap-In.|
|[END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map)|Contrassegna la fine della mappa della barra degli strumenti per un oggetto Snap-In.|
|[EXTENSION_SNAPIN_DATACLASS](#extension_snapin_dataclass)|Crea un membro dati per la classe di dati dell'estensione lo snap-in.|
|[EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry)|Entra in una classe di dati di estensione dello snap-nella mappa di classe dell'estensione dello snap-in dati dell'oggetto Snap-In.|
|[SNAPINMENUID](#snapinmenuid)|Dichiara l'ID del menu di scelta rapida utilizzate dall'oggetto Snap-In.|
|[SNAPINTOOLBARID_ENTRY](#snapintoolbarid_entry)|Immette una barra degli strumenti mappa sulla barra degli strumenti dell'oggetto Snap-In.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsnap.h

##  <a name="begin_extension_snapin_nodeinfo_map"></a>  BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP

Contrassegna l'inizio del mapping di classe di dati di estensione dello snap-in.

```
BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP(classname)
```

### <a name="parameters"></a>Parametri

*nomeclasse*<br/>
[in] Il nome della classe di dati di estensione dello snap-in.

### <a name="remarks"></a>Note

Avviare la mappa di snap-in di estensione con la macro BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP, aggiungere le voci per ognuno dei tipi di dati di estensione dello snap-in con il [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) (macro) e completare la mappa con il [ END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) macro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

##  <a name="begin_snapintoolbarid_map"></a>  BEGIN_SNAPINTOOLBARID_MAP

Dichiara l'inizio della mappa di ID della barra degli strumenti per l'oggetto Snap-In.

```
BEGIN_SNAPINTOOLBARID_MAP(_class)
```

### <a name="parameters"></a>Parametri

*_class*<br/>
[in] Specifica la classe di oggetti Snap-In.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#106](../../atl/codesnippet/cpp/snap-in-object-macros_2.h)]

##  <a name="end_extension_snapin_nodeinfo_map"></a>  END_EXTENSION_SNAPIN_NODEINFO_MAP

Contrassegna la fine del mapping di classe di dati di estensione dello snap-in.

```
END_EXTENSION_SNAPIN_NODEINFO_MAP()
```

### <a name="remarks"></a>Note

Avviare la mappa di estensione dello snap-in con il [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) macro, aggiungere le voci per ognuno dei tipi di dati lo snap-in di estensione con il [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) (macro), e completare la mappa con la macro END_EXTENSION_SNAPIN_NODEINFO_MAP.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

##  <a name="end_snapintoolbarid_map"></a>  END_SNAPINTOOLBARID_MAP

Dichiara la fine dell'oggetto map di ID della barra degli strumenti per l'oggetto Snap-In.

```
END_SNAPINTOOLBARID_MAP( _class )
```

### <a name="parameters"></a>Parametri

*_class*<br/>
[in] Specifica la classe di oggetti Snap-In.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

##  <a name="extension_snapin_dataclass"></a>  EXTENSION_SNAPIN_DATACLASS

Aggiunge un membro dati per la classe di dati di estensione dello snap-in per un **ISnapInItemImpl**-classe derivata.

```
EXTENSION_SNAPIN_DATACLASS(dataClass )
```

### <a name="parameters"></a>Parametri

*dataClass*<br/>
[in] La classe di dati dell'estensione lo snap-in.

### <a name="remarks"></a>Note

Questa classe deve anche essere immesso in una mappa di classe di dati di estensione dello snap-in. Avviare il mapping di classe dei dati di estensione dello snap-in con il [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) macro, aggiungere le voci per ognuno dei tipi di dati di estensione dello snap-in con il [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry)(macro) e completare la mappa con il [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) macro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

##  <a name="extension_snapin_nodeinfo_entry"></a>  EXTENSION_SNAPIN_NODEINFO_ENTRY

Aggiunge una classe di dati di estensione dello snap-in per il mapping di classe di snap-in di estensione dei dati.

```
EXTENSION_SNAPIN_NODEINFO_ENTRY( dataClass )
```

### <a name="parameters"></a>Parametri

*dataClass*<br/>
[in] La classe di dati dell'estensione lo snap-in.

### <a name="remarks"></a>Note

Avviare il mapping di classe dei dati di estensione dello snap-in con il [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) macro, aggiungere le voci per ognuno dei tipi di dati di estensione dello snap-in con la macro EXTENSION_SNAPIN_NODEINFO_ENTRY e completare la mappa con il [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) macro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

##  <a name="snapinmenuid"></a>  SNAPINMENUID

Usare questa macro per dichiarare la risorsa di menu di scelta rapida dell'oggetto Snap-In.

```
SNAPINMENUID( id )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identifica il menu di scelta rapida dell'oggetto Snap-In.

##  <a name="snapintoolbarid_entry"></a>  SNAPINTOOLBARID_ENTRY

Usare questa macro per immettere l'ID della barra degli strumenti nella mappa di ID dell'oggetto Snap-In Strumenti.

```
SNAPINTOOLBARID_ENTRY( id )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identifica il controllo della barra degli strumenti.

### <a name="remarks"></a>Note

Il [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map) macro contrassegna l'inizio della mappa ID della barra degli strumenti; gli [END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map) macro contrassegna la fine.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
