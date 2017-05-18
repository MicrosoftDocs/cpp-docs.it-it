---
title: Snap-In oggetto macro | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 4e9850c0-e395-4929-86c9-584a81828053
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 13823feb06e7fecb2e81a01f3c88e3664de01d30
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="snap-in-object-macros"></a>Oggetto macro snap-In
Queste macro forniscono il supporto per le estensioni di snap-in.  
  
|||  
|-|-|  
|[BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map)|Contrassegna l'inizio della classe mappa dati estensione dello snap-in per un oggetto Snap-In.|  
|[BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map)|Contrassegna l'inizio della mappa della barra degli strumenti per un oggetto Snap-In.|  
|[END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map)|Contrassegna la fine della classe mappa dati estensione dello snap-in per un oggetto Snap-In.|  
|[END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map)|Contrassegna la fine della mappa della barra degli strumenti per un oggetto Snap-In.|  
|[EXTENSION_SNAPIN_DATACLASS](#extension_snapin_dataclass)|Crea un membro dati per la classe di dati dell'estensione di snap-in.|  
|[EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry)|Genera una classe di dati di estensione dello snap-nella mappa classe di dati dell'estensione dello snap-in dell'oggetto Snap-In.|  
|[SNAPINMENUID](#snapinmenuid)|Dichiara l'ID del menu di scelta rapida utilizzato dall'oggetto Snap-In.|  
|[SNAPINTOOLBARID_ENTRY](#snapintoolbarid_entry)|Entra in una barra degli strumenti nella mappa della barra degli strumenti dell'oggetto Snap-In.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsnap.h 
   
##  <a name="begin_extension_snapin_nodeinfo_map"></a>BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP  
 Contrassegna l'inizio del mapping di classe di dati di estensione dello snap-in.  
  
```
BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP(classname)
```  
  
### <a name="parameters"></a>Parametri  
 *ClassName*  
 [in] Il nome della classe di dati di estensione dello snap-in.  
  
### <a name="remarks"></a>Note  
 Avviare la mappa di estensione dello snap-in con il `BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP` (macro), aggiungere le voci per ognuno dei tipi di dati di estensione dello snap-in con il [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) (macro) e completare la mappa con la [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) (macro).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#105; NVC_ATL_Windowing](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]  
  
##  <a name="begin_snapintoolbarid_map"></a>BEGIN_SNAPINTOOLBARID_MAP  
 Dichiara l'inizio della mappa di ID della barra degli strumenti per l'oggetto Snap-In.  
  
```
BEGIN_SNAPINTOOLBARID_MAP(_class)
```  
  
### <a name="parameters"></a>Parametri  
 `_class`  
 [in] Specifica la classe di oggetto Snap-In.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#106; NVC_ATL_Windowing](../../atl/codesnippet/cpp/snap-in-object-macros_2.h)]  
  
##  <a name="end_extension_snapin_nodeinfo_map"></a>END_EXTENSION_SNAPIN_NODEINFO_MAP  
 Contrassegna la fine del mapping di classe di dati di estensione dello snap-in.  
  
```
END_EXTENSION_SNAPIN_NODEINFO_MAP()
```  
  
### <a name="remarks"></a>Note  
 Avviare la mappa di estensione dello snap-in con il [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) (macro), aggiungere le voci per ognuno dei tipi di dati snap-in di estensione con la [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) (macro) e completare la mappa con la `END_EXTENSION_SNAPIN_NODEINFO_MAP` (macro).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).  
  
##  <a name="end_snapintoolbarid_map"></a>END_SNAPINTOOLBARID_MAP  
 Dichiara la fine della mappa di ID della barra degli strumenti per l'oggetto Snap-In.  
  
```
END_SNAPINTOOLBARID_MAP( _class )
```  
  
### <a name="parameters"></a>Parametri  
 `_class`  
 [in] Specifica la classe di oggetto Snap-In.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).  
  
##  <a name="extension_snapin_dataclass"></a>EXTENSION_SNAPIN_DATACLASS  
 Aggiunge un membro dati per la classe di dati di estensione dello snap-in per un **ISnapInItemImpl**-classe derivata.  
  
```
EXTENSION_SNAPIN_DATACLASS(dataClass )
```  
  
### <a name="parameters"></a>Parametri  
 `dataClass`  
 [in] La classe di dati dell'estensione di snap-in.  
  
### <a name="remarks"></a>Note  
 Questa classe deve inoltre essere inserita in una mappa di classe di dati di estensione dello snap-in. Avviare il mapping di classe dei dati di estensione dello snap-in con il [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) (macro), aggiungere le voci per ognuno dei tipi di dati di estensione dello snap-in con il [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) (macro) e completare la mappa con la [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) (macro).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#105; NVC_ATL_Windowing](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]  
  
##  <a name="extension_snapin_nodeinfo_entry"></a>EXTENSION_SNAPIN_NODEINFO_ENTRY  
 Aggiunge una classe di dati di estensione dello snap-in per il mapping di classe dei dati di estensione dello snap-in.  
  
```
EXTENSION_SNAPIN_NODEINFO_ENTRY( dataClass )
```  
  
### <a name="parameters"></a>Parametri  
 `dataClass`  
 [in] La classe di dati dell'estensione di snap-in.  
  
### <a name="remarks"></a>Note  
 Avviare il mapping di classe dei dati di estensione dello snap-in con il [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) (macro), aggiungere le voci per ognuno dei tipi di dati di estensione dello snap-in con il `EXTENSION_SNAPIN_NODEINFO_ENTRY` (macro) e completare la mappa con la [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) (macro).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).  
  
##  <a name="snapinmenuid"></a>SNAPINMENUID  
 Utilizzare questa macro per dichiarare la risorsa di menu di contesto dell'oggetto Snap-In.  
  
```
SNAPINMENUID( id )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identifica il menu di scelta rapida dell'oggetto Snap-In.  
  
##  <a name="snapintoolbarid_entry"></a>SNAPINTOOLBARID_ENTRY  
 Utilizzare questa macro per immettere un ID della barra degli strumenti nella mappa di ID della barra degli strumenti dell'oggetto Snap-In.  
  
```
SNAPINTOOLBARID_ENTRY( id )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identifica il controllo barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Il [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map) macro contrassegna l'inizio della mappa di ID della barra degli strumenti; il [END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map) macro contrassegna la fine.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)

