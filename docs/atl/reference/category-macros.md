---
title: Macro di categoria
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_CATEGORY_MAP
- atlcom/ATL::END_CATEGORY_MAP
- atlcom/ATL::IMPLEMENTED_CATEGORY
- atlcom/ATL::REQUIRED_CATEGORY
ms.assetid: 223578cb-6180-4787-a8d8-ba3787a5d3ee
ms.openlocfilehash: 411e06cc795827eef356018ba427510fd9eb7c06
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497847"
---
# <a name="category-macros"></a>Macro di categoria

Queste macro definiscono le mappe delle categorie.

|||
|-|-|
|[BEGIN_CATEGORY_MAP](#begin_category_map)|Contrassegna l'inizio della mappa delle categorie.|
|[END_CATEGORY_MAP](#end_category_map)|Contrassegna la fine della mappa delle categorie.|
|[IMPLEMENTED_CATEGORY](#implemented_category)|Indica le categorie implementate dall'oggetto COM.|
|[REQUIRED_CATEGORY](#required_category)|Indica le categorie richieste dal contenitore dall'oggetto COM.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_category_map"></a>  BEGIN_CATEGORY_MAP

Contrassegna l'inizio della mappa delle categorie.

```
BEGIN_CATEGORY_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
in Nome della classe che contiene la mappa delle categorie.

### <a name="remarks"></a>Note

La mappa delle categorie viene utilizzata per specificare quali categorie di componenti verrà implementata dalla classe COM e quali categorie sono necessarie dal relativo contenitore.

Aggiungere una voce [IMPLEMENTED_CATEGORY](#implemented_category) alla mappa per ogni categoria implementata dalla classe com. Aggiungere una voce [REQUIRED_CATEGORY](#required_category) alla mappa per ogni categoria che la classe richiede che i client implementino. Contrassegnare la fine della mappa con la macro [END_CATEGORY_MAP](#end_category_map) .

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se alla classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto).

> [!NOTE]
>  ATL utilizza il gestore delle categorie di componenti standard per registrare le categorie di componenti. Se il gestore non è presente nel sistema quando il modulo è registrato, la registrazione ha esito positivo, ma le categorie di componenti non verranno registrate per tale classe.

Per ulteriori informazioni sulle categorie di componenti, vedere [che cosa sono le categorie di componenti e come funzionano](/windows/win32/com/component-categories-and-how-they-work) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

##  <a name="end_category_map"></a>  END_CATEGORY_MAP

Contrassegna la fine della mappa delle categorie.

```
END_CATEGORY_MAP()
```

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_CATEGORY_MAP](#begin_category_map).

##  <a name="implemented_category"></a>  IMPLEMENTED_CATEGORY

Aggiungere una macro IMPLEMENTED_CATEGORY alla [mappa delle categorie](#begin_category_map) del componente per specificare che deve essere registrata come implementazione della categoria identificata dal parametro *CATID* .

```
IMPLEMENTED_CATEGORY(catID)
```

### <a name="parameters"></a>Parametri

*catID*<br/>
in Una costante o una variabile CATId che contiene l'identificatore univoco globale (GUID) per la categoria implementata. L'indirizzo di *CATID* verrà accettato e aggiunto alla mappa. Vedere la tabella seguente per una selezione delle categorie azionarie.

### <a name="remarks"></a>Note

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se alla classe è associata una macro [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) .

I client possono utilizzare le informazioni sulla categoria registrate per la classe per determinarne le funzionalità e i requisiti senza dover creare un'istanza di tale classe.

Per ulteriori informazioni sulle categorie di componenti, vedere [che cosa sono le categorie di componenti e come funzionano](/windows/win32/com/component-categories-and-how-they-work) nel Windows SDK.

### <a name="a-selection-of-stock-categories"></a>Selezione di categorie predefinite

|Descrizione|Simbolo|GUID del registro di sistema|
|-----------------|------------|-------------------|
|Sicurezza per gli script|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|
|Safe per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|
|Contenimento semplice del sito di frame|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|
|Data Binding avanzato|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|
|Controlli senza finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|
|Oggetti compatibili con Internet|Per un elenco di esempio, vedere [oggetti con connessione Internet](/windows/win32/com/internet-aware-objects) nell'Windows SDK.||

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

##  <a name="required_category"></a>REQUIRED_CATEGORY

Aggiungere una macro REQUIRED_CATEGORY alla [mappa delle categorie](#begin_category_map) del componente per specificare che deve essere registrata come richiesta della categoria identificata dal parametro *CATID* .

```
REQUIRED_CATEGORY( catID )
```

### <a name="parameters"></a>Parametri

*catID*<br/>
in Una costante o una variabile CATId che contiene l'identificatore univoco globale (GUID) per la categoria richiesta. L'indirizzo di *CATID* verrà accettato e aggiunto alla mappa. Vedere la tabella seguente per una selezione delle categorie azionarie.

### <a name="remarks"></a>Note

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se alla classe è associata una macro [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) .

I client possono utilizzare le informazioni sulla categoria registrate per la classe per determinarne le funzionalità e i requisiti senza dover creare un'istanza di tale classe. Ad esempio, un controllo può richiedere che un contenitore supporti data binding. Il contenitore può determinare se dispone delle funzionalità necessarie per ospitare il controllo eseguendo una query su Gestione categorie per le categorie richieste da tale controllo. Se il contenitore non supporta una funzionalità obbligatoria, può rifiutare di ospitare l'oggetto COM.

Per ulteriori informazioni sulle categorie di componenti, incluso un elenco di esempio, vedere [che cosa sono le categorie di componenti e come funzionano](/windows/win32/com/component-categories-and-how-they-work) nel Windows SDK.

### <a name="a-selection-of-stock-categories"></a>Selezione di categorie predefinite

|DESCRIZIONE|Simbolo|GUID del registro di sistema|
|-----------------|------------|-------------------|
|Sicurezza per gli script|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|
|Safe per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|
|Contenimento semplice del sito di frame|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|
|Data Binding avanzato|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|
|Controlli senza finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|
|Oggetti compatibili con Internet|Per un elenco di esempio, vedere [oggetti con connessione Internet](/windows/win32/com/internet-aware-objects) nell'Windows SDK.||

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#135](../../atl/codesnippet/cpp/category-macros_2.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
