---
title: Macro di categoria | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlGetHexValue
- atlbase/ATL::AtlGetVersion
- atlenc/ATL::AtlHexDecode
- atlenc/ATL::AtlHexDecodeGetRequiredLength
- atlenc/ATL::AtlHexEncode
- atlenc/ATL::AtlHexEncodeGetRequiredLength
- atlenc/ATL::AtlHexValue
- atlenc/ATL::BEncode
- atlenc/ATL::BEncodeGetRequiredLength
- atlenc/ATL::EscapeXML
- atlenc/ATL::GetExtendedChars
- atlenc/ATL::IsExtendedChar
- atlenc/ATL::QEncode
- atlenc/ATL::QEncodeGetRequiredLength
- atlenc/ATL::QPDecode
- atlenc/ATL::QPDecodeGetRequiredLength
- atlenc/ATL::QPEncode
- atlenc/ATL::QPEncodeGetRequiredLength
- atlenc/ATL::UUDecode
- atlenc/ATL::UUDecodeGetRequiredLength
- atlenc/ATL::UUEncode
- atlenc/ATL::UUEncodeGetRequiredLength
dev_langs:
- C++
ms.assetid: 223578cb-6180-4787-a8d8-ba3787a5d3ee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b1eba97ef5253041752d4b8abfcd6ea7300b8492
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="category-macros"></a>Macro di categoria
Queste macro definiscono le mappe di categoria.  
  
|||  
|-|-|  
|[BEGIN_CATEGORY_MAP](#begin_category_map)|Contrassegna l'inizio della mappa di categoria.|  
|[END_CATEGORY_MAP](#end_category_map)|Contrassegna la fine della mappa di categoria.|  
|[IMPLEMENTED_CATEGORY](#implemented_category)|Indica le categorie che vengono implementate dall'oggetto COM.|  
|[REQUIRED_CATEGORY](#required_category)|Indica le categorie che sono necessarie del contenitore per l'oggetto COM.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  

##  <a name="begin_category_map"></a>  BEGIN_CATEGORY_MAP  
 Contrassegna l'inizio della mappa di categoria.  
  
```
BEGIN_CATEGORY_MAP(theClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 [in] Il nome della classe che contiene la mappa di categoria.  
  
### <a name="remarks"></a>Note  
 La mappa di categoria viene utilizzata per specificare quali categorie di componenti verrà implementata la classe COM e le categorie richiede dal relativo contenitore.  
  
 Aggiungere un [IMPLEMENTED_CATEGORY](#implemented_category) voce alla mappa per ogni categoria implementata dalla classe COM. Aggiungere un [REQUIRED_CATEGORY](#required_category) voce alla mappa di ogni categoria che la classe richiede che i client possono implementare. Contrassegnare la fine della mappa con la [END_CATEGORY_MAP](#end_category_map) (macro).  
  
 Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) .  
  
> [!NOTE]
>  ATL Usa il responsabile delle categorie componenti standard per registrare le categorie di componenti. Se il gestore non è presente nel sistema quando il modulo è registrato, registrazione ha esito positivo, ma le categorie di componenti non verranno registrate per tale classe.  
  
 Per ulteriori informazioni sulle categorie di componenti, vedere [quali sono le categorie di componenti e come funzionano](http://msdn.microsoft.com/library/windows/desktop/ms694322) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]  
  
##  <a name="end_category_map"></a>  END_CATEGORY_MAP  
 Contrassegna la fine della mappa di categoria.  
  
```
END_CATEGORY_MAP()
```  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [BEGIN_CATEGORY_MAP](#begin_category_map).  
  
##  <a name="implemented_category"></a>  IMPLEMENTED_CATEGORY  
 Aggiungere un `IMPLEMENTED_CATEGORY` macro per il componente [mappa categoria](#begin_category_map) per specificare che deve essere registrato come la categoria identificata dall'implementazione di `catID` parametro.  
  
```
IMPLEMENTED_CATEGORY(catID)
```  
  
### <a name="parameters"></a>Parametri  
 `catID`  
 [in] Oggetto **CATID** costante o variabile che contiene l'identificatore univoco globale (GUID) per la categoria implementata. L'indirizzo del `catID` verranno eseguite e verranno aggiunti alla mappa. Vedere la tabella seguente per una selezione di categorie predefinite.  
  
### <a name="remarks"></a>Note  
 Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro.  
  
 I client possono usare le informazioni di categoria registrate per la classe per determinare le funzionalità e requisiti senza dover creare un'istanza.  
  
 Per ulteriori informazioni sulle categorie di componenti, vedere [quali sono le categorie di componenti e come funzionano](http://msdn.microsoft.com/library/windows/desktop/ms694322) in Windows SDK.  
  
### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie predefinite  
  
|Descrizione|Simbolo|Registro di sistema GUID|  
|-----------------|------------|-------------------|  
|Safe per lo Scripting|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|  
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|  
|Frame semplice contenimento di un sito|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|  
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|  
|Associazione di dati avanzati|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|  
|Controlli senza finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|  
|Oggetti compatibili con Internet|Vedere [gli oggetti che supportano Internet](http://msdn.microsoft.com/library/windows/desktop/ms690561) in Windows SDK per un elenco di esempio.||  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]  
  
##  <a name="required_category"></a>  REQUIRED_CATEGORY  
 Aggiungere un `REQUIRED_CATEGORY` macro per il componente [mappa categoria](#begin_category_map) per specificare che deve essere registrato in modo che richiedano la categoria identificata il `catID` parametro.  
  
```
REQUIRED_CATEGORY( catID )
```  
  
### <a name="parameters"></a>Parametri  
 `catID`  
 [in] Oggetto **CATID** costante o variabile che contiene l'identificatore univoco globale (GUID) per la categoria richiesta. L'indirizzo del `catID` verranno eseguite e verranno aggiunti alla mappa. Vedere la tabella seguente per una selezione di categorie predefinite.  
  
### <a name="remarks"></a>Note  
 Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro.  
  
 I client possono usare le informazioni di categoria registrate per la classe per determinare le funzionalità e requisiti senza dover creare un'istanza. Ad esempio, un controllo potrebbe richiedere un contenitore che supportano l'associazione dati. Il contenitore può scoprire se ha le funzionalità necessarie per ospitare il controllo eseguendo una query la gestione di categoria per le categorie di richieste da tale controllo. Se il contenitore non supporta funzionalità obbligatoria, può rifiutare ospitare l'oggetto COM.  
  
 Per ulteriori informazioni sulle categorie di componenti, incluso un elenco di esempio, vedere [quali sono le categorie di componenti e come funzionano](http://msdn.microsoft.com/library/windows/desktop/ms694322) in Windows SDK.  
  
### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie predefinite  
  
|Descrizione|Simbolo|Registro di sistema GUID|  
|-----------------|------------|-------------------|  
|Safe per lo Scripting|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|  
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|  
|Frame semplice contenimento di un sito|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|  
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|  
|Associazione di dati avanzati|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|  
|Controlli senza finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|  
|Oggetti compatibili con Internet|Vedere [gli oggetti che supportano Internet](http://msdn.microsoft.com/library/windows/desktop/ms690561) in Windows SDK per un elenco di esempio.||  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#135](../../atl/codesnippet/cpp/category-macros_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
