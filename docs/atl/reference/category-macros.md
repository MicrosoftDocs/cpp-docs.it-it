---
title: Macro di categoria
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_CATEGORY_MAP
- atlcom/ATL::END_CATEGORY_MAP
- atlcom/ATL::IMPLEMENTED_CATEGORY
- atlcom/ATL::REQUIRED_CATEGORY
ms.assetid: 223578cb-6180-4787-a8d8-ba3787a5d3ee
ms.openlocfilehash: 9c74b1e8e9fc101ed9b3acd842d38dcdb9eb48f3
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57818492"
---
# <a name="category-macros"></a>Macro di categoria

Queste macro definiscono le mappe di categoria.

|||
|-|-|
|[BEGIN_CATEGORY_MAP](#begin_category_map)|Contrassegna l'inizio della mappa di categoria.|
|[END_CATEGORY_MAP](#end_category_map)|Contrassegna la fine dell'oggetto map di categoria.|
|[IMPLEMENTED_CATEGORY](#implemented_category)|Indica le categorie che vengono implementate dall'oggetto COM.|
|[REQUIRED_CATEGORY](#required_category)|Indica le categorie che sono necessari del contenitore dall'oggetto COM.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_category_map"></a>  BEGIN_CATEGORY_MAP

Contrassegna l'inizio della mappa di categoria.

```
BEGIN_CATEGORY_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
[in] Il nome della classe che contiene la mappa di categoria.

### <a name="remarks"></a>Note

La mappa di categoria viene usata per specificare quali categorie di componenti verrà implementata dalla classe di COM e le categorie in cui è necessario dal relativo contenitore.

Aggiungere un [IMPLEMENTED_CATEGORY](#implemented_category) voce alla mappa per ogni categoria implementata dalla classe COM. Aggiungere un [REQUIRED_CATEGORY](#required_category) voce alla mappa per ogni categoria che la classe richiede che i client possono implementare. Contrassegnare la fine dell'oggetto map con il [END_CATEGORY_MAP](#end_category_map) macro.

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe dispone di un oggetto associato [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) oppure [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) .

> [!NOTE]
>  ATL Usa il responsabile delle categorie componenti standard per registrare le categorie di componenti. Se il gestore non è presente nel sistema quando il modulo viene registrato, registrazione ha esito positivo, ma le categorie di componenti non verranno registrate per tale classe.

Per altre informazioni sulle categorie di componenti, vedere [quali sono le categorie di componenti e come funzionano](/windows/desktop/com/component-categories-and-how-they-work) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

##  <a name="end_category_map"></a>  END_CATEGORY_MAP

Contrassegna la fine dell'oggetto map di categoria.

```
END_CATEGORY_MAP()
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo [BEGIN_CATEGORY_MAP](#begin_category_map).

##  <a name="implemented_category"></a>  IMPLEMENTED_CATEGORY

Aggiungere una macro IMPLEMENTED_CATEGORY al componente [mappa delle categorie](#begin_category_map) per specificare che deve essere registrato come implementare la categoria identificata dalle *catID* parametro.

```
IMPLEMENTED_CATEGORY(catID)
```

### <a name="parameters"></a>Parametri

*catID*<br/>
[in] CATID costante o variabile che contiene l'identificatore univoco globale (GUID) per la categoria implementata. L'indirizzo del *catID* verrà rilevato e aggiunto alla mappa. Vedere la tabella seguente per una selezione di categorie predefinite.

### <a name="remarks"></a>Note

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe dispone di un oggetto associato [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) oppure [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro.

I client possono usare le informazioni sulle categorie registrati per la classe per determinare le funzionalità e requisiti senza dover creare un'istanza.

Per altre informazioni sulle categorie di componenti, vedere [quali sono le categorie di componenti e come funzionano](/windows/desktop/com/component-categories-and-how-they-work) nel SDK di Windows.

### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie predefinite

|Descrizione|Simbolo|Registro di sistema GUID|
|-----------------|------------|-------------------|
|Safe per la creazione di script|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|
|Contenimento del sito con Frame semplice|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|
|Associazione di dati avanzati|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|
|Controlli senza finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|
|Oggetti compatibili con Internet|Visualizzare [oggetti compatibili con Internet](/windows/desktop/com/internet-aware-objects) nel SDK di Windows per un elenco di esempio.||

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

##  <a name="required_category"></a>  REQUIRED_CATEGORY

Aggiungere una macro REQUIRED_CATEGORY al componente [mappa delle categorie](#begin_category_map) per specificare che deve essere registrato in modo che richiedano la categoria identificata dalle *catID* parametro.

```
REQUIRED_CATEGORY( catID )
```

### <a name="parameters"></a>Parametri

*catID*<br/>
[in] CATID costante o variabile che contiene l'identificatore univoco globale (GUID) per la categoria richiesta. L'indirizzo del *catID* verrà rilevato e aggiunto alla mappa. Vedere la tabella seguente per una selezione di categorie predefinite.

### <a name="remarks"></a>Note

Le categorie di componenti elencate nella mappa verranno registrate automaticamente quando il modulo viene registrato se la classe dispone di un oggetto associato [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) oppure [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro.

I client possono usare le informazioni sulle categorie registrati per la classe per determinare le funzionalità e requisiti senza dover creare un'istanza. Ad esempio, un controllo può richiedere che un contenitore supportano il data binding. Il contenitore può scoprire se ha le funzionalità necessarie per ospitare il controllo eseguendo una query di gestione delle categorie per le categorie richieste da tale controllo. Se il contenitore non supporta una funzionalità obbligatoria, può rifiutare ospitare l'oggetto COM.

Per altre informazioni sulle categorie di componenti, incluso un elenco di esempi, vedere [quali sono le categorie di componenti e come funzionano](/windows/desktop/com/component-categories-and-how-they-work) nel SDK di Windows.

### <a name="a-selection-of-stock-categories"></a>Una selezione di categorie predefinite

|Descrizione|Simbolo|Registro di sistema GUID|
|-----------------|------------|-------------------|
|Safe per la creazione di script|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|
|Sicuro per l'inizializzazione|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|
|Contenimento del sito con Frame semplice|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|
|data binding semplice|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|
|Associazione di dati avanzati|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|
|Controlli senza finestra|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|
|Oggetti compatibili con Internet|Visualizzare [oggetti compatibili con Internet](/windows/desktop/com/internet-aware-objects) nel SDK di Windows per un elenco di esempio.||

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#135](../../atl/codesnippet/cpp/category-macros_2.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
