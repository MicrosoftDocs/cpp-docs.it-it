---
description: 'Altre informazioni su: Snap-In macro oggetto'
title: Macro oggetto Snap-In
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
ms.openlocfilehash: d775c1d5f66f16fb63b9a7adeda2bc8e74046acf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157685"
---
# <a name="snap-in-object-macros"></a>Macro oggetto Snap-In

Queste macro forniscono supporto per le estensioni di snap-in.

|Nome|Description|
|-|-|
|[BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map)|Contrassegna l'inizio della mappa delle classi di dati dell'estensione di snap-in per un oggetto Snap-In.|
|[BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map)|Contrassegna l'inizio della mappa della barra degli strumenti per un oggetto Snap-In.|
|[END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map)|Contrassegna la fine della mappa delle classi di dati dell'estensione di snap-in per un oggetto Snap-In.|
|[END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map)|Contrassegna la fine della mappa della barra degli strumenti per un oggetto Snap-In.|
|[EXTENSION_SNAPIN_DATACLASS](#extension_snapin_dataclass)|Crea un membro dati per la classe di dati dell'estensione dello snap-in.|
|[EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry)|Immette una classe di dati di estensione dello snap-in nella mappa delle classi di dati dell'estensione dello snap-in dell'oggetto Snap-In.|
|[SNAPINMENUID](#snapinmenuid)|Dichiara l'ID del menu di scelta rapida utilizzato dall'oggetto Snap-In.|
|[SNAPINTOOLBARID_ENTRY](#snapintoolbarid_entry)|Inserisce una barra degli strumenti nella mappa della barra degli strumenti dell'oggetto Snap-In.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsnap. h

## <a name="begin_extension_snapin_nodeinfo_map"></a><a name="begin_extension_snapin_nodeinfo_map"></a> BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP

Contrassegna l'inizio della mappa della classe di dati dell'estensione dello snap-in.

```
BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP(classname)
```

### <a name="parameters"></a>Parametri

*ClassName*<br/>
in Nome della classe di dati dell'estensione dello snap-in.

### <a name="remarks"></a>Commenti

Avviare la mappa dell'estensione dello snap-in con la macro BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP, aggiungere voci per ogni tipo di dati dell'estensione dello snap-in con la macro [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) e completare la mappa con la macro [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

## <a name="begin_snapintoolbarid_map"></a><a name="begin_snapintoolbarid_map"></a> BEGIN_SNAPINTOOLBARID_MAP

Dichiara l'inizio della mappa ID della barra degli strumenti per l'oggetto Snap-In.

```
BEGIN_SNAPINTOOLBARID_MAP(_class)
```

### <a name="parameters"></a>Parametri

*_class*<br/>
in Specifica la classe di oggetti Snap-In.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#106](../../atl/codesnippet/cpp/snap-in-object-macros_2.h)]

## <a name="end_extension_snapin_nodeinfo_map"></a><a name="end_extension_snapin_nodeinfo_map"></a> END_EXTENSION_SNAPIN_NODEINFO_MAP

Contrassegna la fine della mappa della classe di dati dell'estensione dello snap-in.

```
END_EXTENSION_SNAPIN_NODEINFO_MAP()
```

### <a name="remarks"></a>Commenti

Avviare la mappa dell'estensione dello snap-in con la macro [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) , aggiungere voci per ognuno dei tipi di dati dello snap-in di estensione con la macro [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) e completare la mappa con la macro END_EXTENSION_SNAPIN_NODEINFO_MAP.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

## <a name="end_snapintoolbarid_map"></a><a name="end_snapintoolbarid_map"></a> END_SNAPINTOOLBARID_MAP

Dichiara la fine della mappa ID della barra degli strumenti per l'oggetto Snap-In.

```
END_SNAPINTOOLBARID_MAP( _class )
```

### <a name="parameters"></a>Parametri

*_class*<br/>
in Specifica la classe di oggetti Snap-In.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

## <a name="extension_snapin_dataclass"></a><a name="extension_snapin_dataclass"></a> EXTENSION_SNAPIN_DATACLASS

Aggiunge un membro dati alla classe di dati dell'estensione dello snap-in per una classe derivata da **ISnapInItemImpl**.

```
EXTENSION_SNAPIN_DATACLASS(dataClass )
```

### <a name="parameters"></a>Parametri

*dataClass*<br/>
in Classe di dati dell'estensione dello snap-in.

### <a name="remarks"></a>Commenti

Questa classe deve essere immessa anche in una mappa delle classi di dati dell'estensione di snap-in. Avviare il mapping delle classi di dati dell'estensione di snap-in con la macro [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) , aggiungere voci per ogni tipo di dati dell'estensione dello snap-in con la macro [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) e completare la mappa con la macro [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

## <a name="extension_snapin_nodeinfo_entry"></a><a name="extension_snapin_nodeinfo_entry"></a> EXTENSION_SNAPIN_NODEINFO_ENTRY

Aggiunge una classe di dati di estensione dello snap-in alla mappa della classe di dati dell'estensione dello snap-in.

```
EXTENSION_SNAPIN_NODEINFO_ENTRY( dataClass )
```

### <a name="parameters"></a>Parametri

*dataClass*<br/>
in Classe di dati dell'estensione dello snap-in.

### <a name="remarks"></a>Commenti

Avviare il mapping delle classi di dati dell'estensione di snap-in con la macro [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) , aggiungere voci per ogni tipo di dati dell'estensione dello snap-in con la macro EXTENSION_SNAPIN_NODEINFO_ENTRY e completare la mappa con la macro [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) .

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

## <a name="snapinmenuid"></a><a name="snapinmenuid"></a> SNAPINMENUID

Usare questa macro per dichiarare la risorsa del menu di scelta rapida dell'oggetto Snap-In.

```
SNAPINMENUID( id )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identifica il menu di scelta rapida dell'oggetto Snap-In.

## <a name="snapintoolbarid_entry"></a><a name="snapintoolbarid_entry"></a> SNAPINTOOLBARID_ENTRY

Utilizzare questa macro per immettere un ID della barra degli strumenti nella mappa ID della barra degli strumenti dell'oggetto Snap-In.

```
SNAPINTOOLBARID_ENTRY( id )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identifica il controllo Toolbar.

### <a name="remarks"></a>Commenti

La macro [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map) contrassegna l'inizio della mappa ID della barra degli strumenti; la macro [END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map) contrassegna la fine.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

## <a name="see-also"></a>Vedi anche

[Macro](../../atl/reference/atl-macros.md)
