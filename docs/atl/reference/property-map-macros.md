---
title: Le macro di mapping di proprietà | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- atlcom/ATL::BEGIN_PROP_MAP
- atlcom/ATL::PROP_DATA_ENTRY
- atlcom/ATL::PROP_ENTRY_TYPE
- atlcom/ATL::PROP_ENTRY_TYPE_EX
- atlcom/ATL::PROP_PAGE
- atlcom/ATL::END_PROP_MAP
dev_langs:
- C++
helpviewer_keywords:
- property maps
ms.assetid: 128bc742-2b98-4b97-a243-684dbb83db77
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dfd99fa59fc5e1d97011ac3dba4d16dd222c35b6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="property-map-macros"></a>Macro di mapping di proprietà
Queste macro definiscono i mapping di proprietà e le voci.  
  
|||  
|-|-|  
|[BEGIN_PROP_MAP](#begin_prop_map)|Contrassegna l'inizio della mappa delle proprietà ATL.|  
|[PROP_DATA_ENTRY](#prop_data_entry)|Indica l'extent o dimensioni, di un controllo ActiveX.|  
|[PROP_ENTRY_TYPE](#prop_entry_type)|Immette una descrizione, proprietà DISPID e pagina delle proprietà CLSID il mapping di proprietà.|  
|[PROP_ENTRY_TYPE_EX](#prop_entry_type_ex)|Immette una descrizione della proprietà, proprietà DISPID, CLSID, pagina delle proprietà e `IDispatch` IID nella mappa delle proprietà.|  
|[PROP_PAGE](#prop_page)|Immette una pagina delle proprietà CLSID il mapping di proprietà.|  
|[END_PROP_MAP](#end_prop_map)|Contrassegna la fine della mappa delle proprietà ATL.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="begin_prop_map"></a>BEGIN_PROP_MAP  
 Contrassegna l'inizio del mapping di proprietà dell'oggetto.  
  
```
BEGIN_PROP_MAP(theClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 [in] Specifica la classe che contiene il mapping di proprietà.  
  
### <a name="remarks"></a>Note  
 Il mapping di proprietà archivia le relative proprietà, proprietà DISPID, CLSID, pagina delle proprietà e `IDispatch` IID. Classi [IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md), [IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md), [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), e [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)utilizzare il mapping di proprietà per recuperare e impostare queste informazioni.  
  
 Quando si crea un oggetto con la creazione guidata progetto ATL, la procedura guidata creerà un mapping di proprietà vuoto specificando `BEGIN_PROP_MAP` seguito da [END_PROP_MAP](#end_prop_map).  
  
 `BEGIN_PROP_MAP`non salvare l'extent (vale a dire le dimensioni) di un mapping di proprietà, perché un oggetto utilizzando un mapping di proprietà non potrebbe essere un'interfaccia utente, in modo non avrebbe alcun extent. Se l'oggetto è un controllo ActiveX con un'interfaccia utente, dispone di un extent. In questo caso, è necessario specificare [PROP_DATA_ENTRY](#prop_data_entry) nella mappa proprietà per specificare l'estensione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#103](../../atl/codesnippet/cpp/property-map-macros_1.h)]  
  
##  <a name="prop_data_entry"></a>PROP_DATA_ENTRY  
 Indica l'extent o dimensioni, di un controllo ActiveX.  
  
```
PROP_DATA_ENTRY( szDesc, member, vt)
```    
  
### <a name="parameters"></a>Parametri  
 `szDesc`  
 [in] Descrizione della proprietà.  
  
 `member`  
 [in] Il membro dei dati contenente la misura; ad esempio, `m_sizeExtent`.  
  
 *vt*  
 [in] Specifica il tipo di variante della proprietà.  
  
### <a name="remarks"></a>Note  
 Questa macro fa sì che il membro dati specificato che deve essere mantenuta.  
  
 Quando si crea un controllo ActiveX, la procedura guidata consente di inserire questa macro dopo la macro di mapping di proprietà [BEGIN_PROP_MAP](#begin_prop_map) e prima che la macro di mapping di proprietà [END_PROP_MAP](#end_prop_map).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, l'estensione dell'oggetto ( `m_sizeExtent`) è permanente.  
  
 [!code-cpp[NVC_ATL_Windowing#131](../../atl/codesnippet/cpp/property-map-macros_2.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#132](../../atl/codesnippet/cpp/property-map-macros_3.h)]  
  
##  <a name="prop_entry_type"></a>PROP_ENTRY_TYPE  
 Utilizzare questa macro per immettere una descrizione, proprietà DISPID e pagina delle proprietà CLSID nel mapping di proprietà dell'oggetto.  
  
```
PROP_ENTRY_TYPE( szDesc, dispid, clsid, vt)
```  
  
### <a name="parameters"></a>Parametri  
 `szDesc`  
 [in] Descrizione della proprietà.  
  
 `dispid`  
 [in] DISPID della proprietà.  
  
 `clsid`  
 [in] Il CLSID della pagina delle proprietà associate. Utilizzare il valore speciale `CLSID_NULL` per una proprietà che non dispone di una pagina delle proprietà associate.  
  
 `vt`  
 [in] Il tipo della proprietà.  
  
### <a name="remarks"></a>Note  
 Il `PROP_ENTRY` macro è stata deprecata e non protetti. È stato sostituito con `PROP_ENTRY_TYPE`.  
  
 Il [BEGIN_PROP_MAP](#begin_prop_map) macro contrassegna l'inizio del mapping di proprietà; [END_PROP_MAP](#end_prop_map) macro contrassegna la fine.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [BEGIN_PROP_MAP](#begin_prop_map).  
  
##  <a name="prop_entry_type_ex"></a>PROP_ENTRY_TYPE_EX  
 Simile a [PROP_ENTRY_TYPE](#prop_entry_type), ma è possibile specificare un particolare IID se l'oggetto supporta più interfacce duali.  
  
```
PROP_ENTRY_TYPE_EX( szDesc, dispid, clsid, iidDispatch, vt)
```    
  
### <a name="parameters"></a>Parametri  
 `szDesc`  
 [in] Descrizione della proprietà.  
  
 `dispid`  
 [in] DISPID della proprietà.  
  
 `clsid`  
 [in] Il CLSID della pagina delle proprietà associate. Utilizzare il valore speciale `CLSID_NULL` per una proprietà che non dispone di una pagina delle proprietà associate.  
  
 `iidDispatch`  
 [in] IID dell'interfaccia duale che definisce la proprietà.  
  
 `vt`  
 [in] Il tipo della proprietà.  
  
### <a name="remarks"></a>Note  
 Il `PROP_ENTRY_EX` macro è stata deprecata e non protetti. È stato sostituito con `PROP_ENTRY_TYPE_EX`.  
  
 Il [BEGIN_PROP_MAP](#begin_prop_map) macro contrassegna l'inizio del mapping di proprietà; [END_PROP_MAP](#end_prop_map) macro contrassegna la fine.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente Raggruppa le voci per `IMyDual1` seguito da una voce per `IMyDual2`. Il raggruppamento da un'interfaccia duale migliorerà le prestazioni.  
  
 [!code-cpp[NVC_ATL_Windowing#133](../../atl/codesnippet/cpp/property-map-macros_4.h)]  
  
##  <a name="prop_page"></a>PROP_PAGE  
 Utilizzare questa macro per immettere una pagina delle proprietà CLSID nel mapping di proprietà dell'oggetto.  
  
```
PROP_PAGE(clsid)
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 [in] Il CLSID di una pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 `PROP_PAGE`è simile a [PROP_ENTRY_TYPE](#prop_entry_type), ma non richiede una descrizione della proprietà o un DISPID.  
  
> [!NOTE]
>  Se è già stato immesso un CLSID con `PROP_ENTRY_TYPE` o [PROP_ENTRY_TYPE_EX](#prop_entry_type_ex), non è necessario immettere una voce aggiuntiva con `PROP_PAGE`.  
  
 Il [BEGIN_PROP_MAP](#begin_prop_map) macro contrassegna l'inizio del mapping di proprietà; [END_PROP_MAP](#end_prop_map) macro contrassegna la fine.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#134](../../atl/codesnippet/cpp/property-map-macros_5.h)]  
  
##  <a name="end_prop_map"></a>END_PROP_MAP  
 Contrassegna la fine del mapping di proprietà dell'oggetto.  
  
```
END_PROP_MAP()
```  
  
### <a name="remarks"></a>Note  
 Quando si crea un oggetto con la creazione guidata progetto ATL, la procedura guidata creerà un mapping di proprietà vuoto specificando [BEGIN_PROP_MAP](#begin_prop_map) seguito da `END_PROP_MAP`.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [BEGIN_PROP_MAP](#begin_prop_map).  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
