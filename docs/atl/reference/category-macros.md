---
title: Macro di categoria | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 223578cb-6180-4787-a8d8-ba3787a5d3ee
caps.latest.revision: 17
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
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 26eea5cc8ce8e18af84a9ca89e5ddc94272be44c
ms.lasthandoff: 02/24/2017

---
# <a name="category-macros"></a>Macro di categoria
Queste macro definiscono categoria mappe.  
  
|||  
|-|-|  
|[BEGIN_CATEGORY_MAP](#begin_category_map)|Contrassegna l'inizio della mappa di categoria.|  
|[END_CATEGORY_MAP](#end_category_map)|Contrassegna la fine della mappa di categoria.|  
|[IMPLEMENTED_CATEGORY](#implemented_category)|Indica le categorie che vengono implementate dall'oggetto COM.|  
|[REQUIRED_CATEGORY](#required_category)|Indica le categorie che sono necessari del contenitore per l'oggetto COM.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  

##  <a name="a-namebegincategorymapa--begincategorymap"></a><a name="begin_category_map"></a>BEGIN_CATEGORY_MAP  
 Contrassegna l'inizio della mappa di categoria.  
  
```
BEGIN_CATEGORY_MAP(theClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 [in] Il nome della classe che contiene la mappa di categoria.  
  
### <a name="remarks"></a>Note  
 La mappa di categoria viene utilizzata per specificare quali categorie di componente verrà implementata dalla classe COM e le categorie richiede dal relativo contenitore.  
  
 Aggiungere un [IMPLEMENTED_CATEGORY](#implemented_category) voce alla mappa per ogni categoria implementato dalla classe COM. Aggiungere un [REQUIRED_CATEGORY](#required_category) voce alla mappa di ogni categoria che la classe richiede i client possono implementare. Contrassegnare la fine della mappa con la [END_CATEGORY_MAP](#end_category_map) (macro).  
  
 Le categorie dei componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto).  
  
> [!NOTE]
>  ATL utilizza il gestore di categorie componente standard per registrare le categorie di componenti. Se il servizio di gestione non è presente nel sistema quando il modulo viene registrato, registrazione abbia esito positivo, ma non verranno registrate le categorie di componenti per quella classe.  
  
 Per ulteriori informazioni sulle categorie di componenti, vedere [quali sono le categorie di componenti e come funzionano](http://msdn.microsoft.com/library/windows/desktop/ms694322) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#100;](../../atl/codesnippet/cpp/category-macros_1.h)]  
  
##  <a name="a-nameendcategorymapa--endcategorymap"></a><a name="end_category_map"></a>END_CATEGORY_MAP  
 Contrassegna la fine della mappa di categoria.  
  
```
END_CATEGORY_MAP()
```  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_CATEGORY_MAP](#begin_category_map).  
  
##  <a name="a-nameimplementedcategorya--implementedcategory"></a><a name="implemented_category"></a>IMPLEMENTED_CATEGORY  
 Aggiungere un `IMPLEMENTED_CATEGORY` macro per il componente [mappa delle categorie di](#begin_category_map) per specificare che deve essere registrato come implementare la categoria identificata le `catID` parametro.  
  
```
IMPLEMENTED_CATEGORY(catID)
```  
  
### <a name="parameters"></a>Parametri  
 `catID`  
 [in] Oggetto **CATID** costante o variabile che contiene l'identificatore univoco globale (GUID) per la categoria implementata. L'indirizzo di `catID` verrà rilevato e aggiunto alla mappa. Vedere la tabella seguente per una selezione di categorie predefinite.  
  
### <a name="remarks"></a>Note  
 Le categorie dei componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) (macro).  
  
 Client possono utilizzare le informazioni di categoria registrate per la classe per determinare le funzionalità e requisiti senza dover creare un'istanza.  
  
 Per ulteriori informazioni sulle categorie di componenti, vedere [quali sono le categorie di componenti e come funzionano](http://msdn.microsoft.com/library/windows/desktop/ms694322) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie predefinite  
  
|Descrizione|Simbolo|Registro di sistema GUID|  
|-----------------|------------|-------------------|  
|Protezione da script|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|  
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|  
|Contenuto sito Frame semplice|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|  
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|  
|Associazione dati avanzata|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|  
|Controlli privi di finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|  
|Oggetti compatibili con Internet|Vedere [gli oggetti che supportano Internet](http://msdn.microsoft.com/library/windows/desktop/ms690561) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di esempio.||  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#100;](../../atl/codesnippet/cpp/category-macros_1.h)]  
  
##  <a name="a-namerequiredcategorya--requiredcategory"></a><a name="required_category"></a>REQUIRED_CATEGORY  
 Aggiungere un `REQUIRED_CATEGORY` macro per il componente [mappa delle categorie di](#begin_category_map) per specificare che deve essere registrato in modo che richiedano la categoria identificata le `catID` parametro.  
  
```
REQUIRED_CATEGORY( catID )
```  
  
### <a name="parameters"></a>Parametri  
 `catID`  
 [in] Oggetto **CATID** costante o variabile che contiene l'identificatore univoco globale (GUID) per la categoria necessaria. L'indirizzo di `catID` verrà rilevato e aggiunto alla mappa. Vedere la tabella seguente per una selezione di categorie predefinite.  
  
### <a name="remarks"></a>Note  
 Le categorie dei componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) (macro).  
  
 Client possono utilizzare le informazioni di categoria registrate per la classe per determinare le funzionalità e requisiti senza dover creare un'istanza. Ad esempio, un controllo può richiedere che un contenitore supporta l'associazione dati. Il contenitore può scoprire se dispone di funzionalità necessarie per ospitare il controllo da una query al gestore di categoria per le categorie richiesti da tale controllo. Se il contenitore non supporta una funzionalità necessaria, può rifiutare ospitare l'oggetto COM.  
  
 Per ulteriori informazioni sulle categorie di componenti, incluso un elenco di esempi, vedere [quali sono le categorie di componenti e come funzionano](http://msdn.microsoft.com/library/windows/desktop/ms694322) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie predefinite  
  
|Descrizione|Simbolo|Registro di sistema GUID|  
|-----------------|------------|-------------------|  
|Protezione da script|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|  
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|  
|Contenuto sito Frame semplice|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|  
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|  
|Associazione dati avanzata|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|  
|Controlli privi di finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|  
|Oggetti compatibili con Internet|Vedere [gli oggetti che supportano Internet](http://msdn.microsoft.com/library/windows/desktop/ms690561) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di esempio.||  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#135;](../../atl/codesnippet/cpp/category-macros_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)

