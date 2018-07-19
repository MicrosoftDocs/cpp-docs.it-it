---
title: Macro della mappa proprietà | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5ba1b79e7e8deb3997af58a2b0917e7e03347953
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37882520"
---
# <a name="property-map-macros"></a>Macro della mappa proprietà
Queste macro definiscono mappe delle proprietà e le voci.  
  
|||  
|-|-|  
|[BEGIN_PROP_MAP](#begin_prop_map)|Contrassegna l'inizio della mappa delle proprietà ATL.|  
|[PROP_DATA_ENTRY](#prop_data_entry)|Indica l'extent o dimensioni, di un controllo ActiveX.|  
|[PROP_ENTRY_TYPE](#prop_entry_type)|Immette una proprietà, proprietà DISPID, pagina descrizione e proprietà CLSID il mapping di proprietà.|  
|[PROP_ENTRY_TYPE_EX](#prop_entry_type_ex)|Entra in una descrizione della proprietà, proprietà DISPID, CLSID, pagina delle proprietà e `IDispatch` IID nella mappa delle proprietà.|  
|[PROP_PAGE](#prop_page)|Immette una pagina delle proprietà CLSID il mapping di proprietà.|  
|[END_PROP_MAP](#end_prop_map)|Contrassegna la fine della mappa delle proprietà ATL.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="begin_prop_map"></a>  BEGIN_PROP_MAP  
 Contrassegna l'inizio della mappa di proprietà dell'oggetto.  
  
```
BEGIN_PROP_MAP(theClass)
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 [in] Specifica la classe che contiene il mapping di proprietà.  
  
### <a name="remarks"></a>Note  
 Il mapping di proprietà archivia le relative proprietà, proprietà DISPID, CLSID, pagina delle proprietà e `IDispatch` IID. Le classi [IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md), [IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md), [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), e [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)usare il mapping di proprietà per recuperare e impostare queste informazioni.  
  
 Quando si crea un oggetto con la creazione guidata progetto ATL, la procedura guidata creerà un mapping di proprietà vuoto specificando BEGIN_PROP_MAP rovesciate [END_PROP_MAP](#end_prop_map).  
  
 Non salva BEGIN_PROP_MAP out extent (vale a dire, le dimensioni) di una mappa delle proprietà, perché un oggetto usando un mapping di proprietà non può avere un'interfaccia utente, in modo che non avrebbe alcuna misura. Se l'oggetto è un controllo ActiveX con un'interfaccia utente, avrà un extent. In questo caso, è necessario specificare [PROP_DATA_ENTRY](#prop_data_entry) in Mappa proprietà per specificare l'ambito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#103](../../atl/codesnippet/cpp/property-map-macros_1.h)]  
  
##  <a name="prop_data_entry"></a>  PROP_DATA_ENTRY  
 Indica l'extent o dimensioni, di un controllo ActiveX.  
  
```
PROP_DATA_ENTRY( szDesc, member, vt)
```    
  
### <a name="parameters"></a>Parametri  
 *szDesc*  
 [in] La descrizione della proprietà.  
  
 *Membro*  
 [in] Il membro dati che contiene l'ambito; ad esempio, `m_sizeExtent`.  
  
 *vt*  
 [in] Specifica il tipo di variante della proprietà.  
  
### <a name="remarks"></a>Note  
 Questa macro determina il membro dati specificato che deve essere mantenuta.  
  
 Quando si crea un controllo ActiveX, la procedura guidata consente di inserire questa macro dopo la macro della mappa di proprietà [BEGIN_PROP_MAP](#begin_prop_map) e prima la macro della mappa proprietà [END_PROP_MAP](#end_prop_map).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, l'extent di oggetto (`m_sizeExtent`) è permanente.  
  
 [!code-cpp[NVC_ATL_Windowing#131](../../atl/codesnippet/cpp/property-map-macros_2.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#132](../../atl/codesnippet/cpp/property-map-macros_3.h)]  
  
##  <a name="prop_entry_type"></a>  PROP_ENTRY_TYPE  
 Usare questa macro per immettere una descrizione e proprietà DISPID proprietà pagina delle proprietà CLSID nel mapping di proprietà dell'oggetto.  
  
```
PROP_ENTRY_TYPE( szDesc, dispid, clsid, vt)
```  
  
### <a name="parameters"></a>Parametri  
 *szDesc*  
 [in] La descrizione della proprietà.  
  
 *DISPID*  
 [in] DISPID della proprietà.  
  
 *clsid*  
 [in] Il CLSID della pagina delle proprietà associate. Usare il valore speciale CLSID_NULL per una proprietà che non dispone di una pagina delle proprietà associate.  
  
 *vt*  
 [in] Il tipo della proprietà.  
  
### <a name="remarks"></a>Note  
 La macro PROP_ENTRY è stato deprecato e non sicuri. È stata sostituita con PROP_ENTRY_TYPE.  
  
 Il [BEGIN_PROP_MAP](#begin_prop_map) macro contrassegna l'inizio di mapping della proprietà; la [END_PROP_MAP](#end_prop_map) macro contrassegna la fine.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [BEGIN_PROP_MAP](#begin_prop_map).  
  
##  <a name="prop_entry_type_ex"></a>  PROP_ENTRY_TYPE_EX  
 Simile a [PROP_ENTRY_TYPE](#prop_entry_type), ma consente di specificare un particolare IID se l'oggetto supporta più interfacce duali.  
  
```
PROP_ENTRY_TYPE_EX( szDesc, dispid, clsid, iidDispatch, vt)
```    
  
### <a name="parameters"></a>Parametri  
 *szDesc*  
 [in] La descrizione della proprietà.  
  
 *DISPID*  
 [in] DISPID della proprietà.  
  
 *clsid*  
 [in] Il CLSID della pagina delle proprietà associate. Usare il valore speciale CLSID_NULL per una proprietà che non dispone di una pagina delle proprietà associate.  
  
 *iidDispatch*  
 [in] IID dell'interfaccia duale che definisce la proprietà.  
  
 *vt*  
 [in] Il tipo della proprietà.  
  
### <a name="remarks"></a>Note  
 La macro PROP_ENTRY_EX è deprecato e non sicuri. È stato sostituito con PROP_ENTRY_TYPE_EX.  
  
 Il [BEGIN_PROP_MAP](#begin_prop_map) macro contrassegna l'inizio di mapping della proprietà; la [END_PROP_MAP](#end_prop_map) macro contrassegna la fine.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente Raggruppa le voci relative `IMyDual1` seguita da una voce per `IMyDual2`. Raggruppamento in base a un'interfaccia duale migliorerà le prestazioni.  
  
 [!code-cpp[NVC_ATL_Windowing#133](../../atl/codesnippet/cpp/property-map-macros_4.h)]  
  
##  <a name="prop_page"></a>  PROP_PAGE  
 Usare questa macro per immettere una pagina delle proprietà CLSID nel mapping di proprietà dell'oggetto.  
  
```
PROP_PAGE(clsid)
```  
  
### <a name="parameters"></a>Parametri  
 *clsid*  
 [in] Il CLSID di una pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 È simile a PROP_PAGE [PROP_ENTRY_TYPE](#prop_entry_type), ma non richiede una descrizione della proprietà o il DISPID.  
  
> [!NOTE]
>  Se è già stato inserito un CLSID con PROP_ENTRY_TYPE oppure [PROP_ENTRY_TYPE_EX](#prop_entry_type_ex), non è necessario apportare una voce aggiuntiva con PROP_PAGE.  
  
 Il [BEGIN_PROP_MAP](#begin_prop_map) macro contrassegna l'inizio di mapping della proprietà; la [END_PROP_MAP](#end_prop_map) macro contrassegna la fine.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#134](../../atl/codesnippet/cpp/property-map-macros_5.h)]  
  
##  <a name="end_prop_map"></a>  END_PROP_MAP  
 Contrassegna la fine del mapping di proprietà dell'oggetto.  
  
```
END_PROP_MAP()
```  
  
### <a name="remarks"></a>Note  
 Quando si crea un oggetto con la creazione guidata progetto ATL, la procedura guidata creerà un mapping di proprietà vuoto, specificando [BEGIN_PROP_MAP](#begin_prop_map) seguita da END_PROP_MAP.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [BEGIN_PROP_MAP](#begin_prop_map).  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
