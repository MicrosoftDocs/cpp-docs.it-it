---
title: Macro di categoria
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_CATEGORY_MAP
- atlcom/ATL::END_CATEGORY_MAP
- atlcom/ATL::IMPLEMENTED_CATEGORY
- atlcom/ATL::REQUIRED_CATEGORY
ms.assetid: 223578cb-6180-4787-a8d8-ba3787a5d3ee
ms.openlocfilehash: 1d8bbae4608aa661bbc612604f7d85855f325f5f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321593"
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

**Intestazione:** atlcom.h

## <a name="begin_category_map"></a><a name="begin_category_map"></a>BEGIN_CATEGORY_MAP

Contrassegna l'inizio della mappa delle categorie.

```
BEGIN_CATEGORY_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
[in] Nome della classe contenente la mappa delle categorie.

### <a name="remarks"></a>Osservazioni

La mappa delle categorie viene utilizzata per specificare le categorie di componenti che verranno implementate dalla classe COM e le categorie necessarie dal relativo contenitore.

Aggiungere [una voce IMPLEMENTED_CATEGORY](#implemented_category) alla mappa per ogni categoria implementata dalla classe COM. Aggiungere una [voce REQUIRED_CATEGORY](#required_category) alla mappa per ogni categoria che la classe richiede l'implementazione dei client. Contrassegnare la fine della mappa con la macro [END_CATEGORY_MAP.](#end_category_map)

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se alla classe è associato un [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o [un OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto).

> [!NOTE]
> ATL utilizza il gestore di categorie di componenti standard per registrare le categorie di componenti. Se il gestore non è presente nel sistema quando il modulo viene registrato, la registrazione ha esito positivo, ma le categorie di componenti non verranno registrate per tale classe.

Per ulteriori informazioni sulle categorie di componenti, vedere Che cosa sono le categorie di componenti [e come funzionano](/windows/win32/com/component-categories-and-how-they-work) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

## <a name="end_category_map"></a><a name="end_category_map"></a>END_CATEGORY_MAP

Contrassegna la fine della mappa delle categorie.

```
END_CATEGORY_MAP()
```

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_CATEGORY_MAP](#begin_category_map).

## <a name="implemented_category"></a><a name="implemented_category"></a>IMPLEMENTED_CATEGORY

Aggiungere una IMPLEMENTED_CATEGORY macro alla mappa delle [categorie](#begin_category_map) del componente per specificare che deve essere registrata come implementazione della categoria identificata dal parametro *catID.*

```
IMPLEMENTED_CATEGORY(catID)
```

### <a name="parameters"></a>Parametri

*Catid*<br/>
[in] Costante o variabile CATID contenente l'identificatore univoco globale (GUID) per la categoria implementata. L'indirizzo di *catID* verrà preso e aggiunto alla mappa. Vedere la tabella seguente per una selezione di categorie di azioni.

### <a name="remarks"></a>Osservazioni

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se alla classe è associata una [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o una macro [di OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto)

I client possono utilizzare le informazioni sulla categoria registrate per la classe per determinarne le funzionalità e i requisiti senza doverne dovevi creare un'istanza.

Per ulteriori informazioni sulle categorie di componenti, vedere Che cosa sono le categorie di componenti [e come funzionano](/windows/win32/com/component-categories-and-how-they-work) in Windows SDK.

### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie di azioni

|Descrizione|Simbolo|GUID del Registro di sistema|
|-----------------|------------|-------------------|
|Sicuro per lo scripting|CATID_SafeForScripting|7DD95801-9882-11CF-9FA9-00AA006C42C4|
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|7DD95802-9882-11CF-9FA9-00AA006C42C4|
|Contenimento del sito Frame semplice|CATID_SimpleFrameControl|157083E0-2368-11cf-87B9-00AA006C8166|
|data binding semplice|CATID_PropertyNotifyControl|157083E1-2368-11cf-87B9-00AA006C8166|
|Associazione dati avanzata|CATID_VBDataBound|157083E2-2368-11cf-87B9-00AA006C8166|
|Controlli senza finestra|CATID_WindowlessObject|1D06B600-3AE3-11cf-87B9-00AA006C8166|
|Oggetti consapevoli di Internet|Per un esempio, vedere [Oggetti in grado di riconoscere Internet](/windows/win32/com/internet-aware-objects) in Windows SDK.||

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

## <a name="required_category"></a><a name="required_category"></a>REQUIRED_CATEGORY

Aggiungere una macro REQUIRED_CATEGORY alla mappa delle [categorie](#begin_category_map) del componente per specificare che deve essere registrata come che richiede la categoria identificata dal parametro *catID.*

```
REQUIRED_CATEGORY( catID )
```

### <a name="parameters"></a>Parametri

*Catid*<br/>
[in] Costante o variabile CATID contenente l'identificatore univoco globale (GUID) per la categoria richiesta. L'indirizzo di *catID* verrà preso e aggiunto alla mappa. Vedere la tabella seguente per una selezione di categorie di azioni.

### <a name="remarks"></a>Osservazioni

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se alla classe è associata una [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) o una macro [di OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto)

I client possono utilizzare le informazioni sulla categoria registrate per la classe per determinarne le funzionalità e i requisiti senza doverne dovevi creare un'istanza. Ad esempio, un controllo può richiedere che un contenitore supporti l'associazione dati. Il contenitore può scoprire se dispone delle funzionalità necessarie per ospitare il controllo eseguendo una query sul gestore di categorie per le categorie richieste da tale controllo. Se il contenitore non supporta una funzionalità richiesta, può rifiutare di ospitare l'oggetto COM.

Per altre informazioni sulle categorie di componenti, incluso un elenco di esempio, vedere Che cosa sono le categorie di componenti [e come funzionano](/windows/win32/com/component-categories-and-how-they-work) in Windows SDK.

### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie di azioni

|Descrizione|Simbolo|GUID del Registro di sistema|
|-----------------|------------|-------------------|
|Sicuro per lo scripting|CATID_SafeForScripting|7DD95801-9882-11CF-9FA9-00AA006C42C4|
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|7DD95802-9882-11CF-9FA9-00AA006C42C4|
|Contenimento del sito Frame semplice|CATID_SimpleFrameControl|157083E0-2368-11cf-87B9-00AA006C8166|
|data binding semplice|CATID_PropertyNotifyControl|157083E1-2368-11cf-87B9-00AA006C8166|
|Associazione dati avanzata|CATID_VBDataBound|157083E2-2368-11cf-87B9-00AA006C8166|
|Controlli senza finestra|CATID_WindowlessObject|1D06B600-3AE3-11cf-87B9-00AA006C8166|
|Oggetti consapevoli di Internet|Per un esempio, vedere [Oggetti in grado di riconoscere Internet](/windows/win32/com/internet-aware-objects) in Windows SDK.||

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#135](../../atl/codesnippet/cpp/category-macros_2.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
