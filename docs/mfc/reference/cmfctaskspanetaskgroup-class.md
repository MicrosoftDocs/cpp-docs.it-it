---
title: Classe CMFCTasksPaneTaskGroup
ms.date: 11/19/2018
f1_keywords:
- CMFCTasksPaneTaskGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::SetACCData
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsBottom
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsCollapsed
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsSpecial
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_lstTasks
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_rect
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_rectGroup
- AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_strName
helpviewer_keywords:
- CMFCTasksPaneTaskGroup [MFC], CMFCTasksPaneTaskGroup
- CMFCTasksPaneTaskGroup [MFC], SetACCData
- CMFCTasksPaneTaskGroup [MFC], m_bIsBottom
- CMFCTasksPaneTaskGroup [MFC], m_bIsCollapsed
- CMFCTasksPaneTaskGroup [MFC], m_bIsSpecial
- CMFCTasksPaneTaskGroup [MFC], m_lstTasks
- CMFCTasksPaneTaskGroup [MFC], m_rect
- CMFCTasksPaneTaskGroup [MFC], m_rectGroup
- CMFCTasksPaneTaskGroup [MFC], m_strName
ms.assetid: 2111640b-a46e-4b27-b033-29e88632b86a
ms.openlocfilehash: 4c24eba646bede462a5f3cfb85715278cfa7daee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366261"
---
# <a name="cmfctaskspanetaskgroup-class"></a>Classe CMFCTasksPaneTaskGroup

La `CMFCTasksPaneTaskGroup` classe è una classe helper utilizzata dal [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) controllo. Gli oggetti di tipo `CMFCTasksPaneTaskGroup` rappresentano un *gruppo di attività*. Il gruppo di attività è un elenco di elementi visualizzato dal framework in una casella separata dotata di un pulsante di compressione. La casella può avere una didascalia facoltativa (nome del gruppo). Se un gruppo viene compresso, l'elenco di attività non è visibile.

## <a name="syntax"></a>Sintassi

```
class CMFCTasksPaneTaskGroup : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup](#cmfctaskspanetaskgroup)|Costruisce un oggetto `CMFCTasksPaneTaskGroup`.|
|`CMFCTasksPaneTaskGroup::~CMFCTasksPaneTaskGroup`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup::SetACCData](#setaccdata)|Determina i dati di accessibilità per il gruppo di attività corrente.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup::m_bIsBottom](#m_bisbottom)|Determina se il gruppo di attività è allineato alla parte inferiore del controllo riquadro attività.|
|[CMFCTasksPaneTaskGroup::m_bIsCollapsed](#m_biscollapsed)|Determina se il gruppo di attività è compresso.|
|[CMFCTasksPaneTaskGroup::m_bIsSpecial](#m_bisspecial)|Determina se il gruppo di attività è *speciale.* Il framework visualizza didascalie speciali in un colore diverso.|
|[CMFCTasksPaneTaskGroup::m_lstTasks](#m_lsttasks)|Contiene l'elenco interno delle attività.|
|[CMFCTasksPaneTaskGroup::m_rect](#m_rect)|Specifica il rettangolo di delimitazione della didascalia del gruppo.|
|[CMFCTasksPaneTaskGroup::m_rectGroup](#m_rectgroup)|Specifica il rettangolo di delimitazione del gruppo.|
|[CMFCTasksPaneTaskGroup::m_strName](#m_strname)|Specifica il nome del gruppo.|

## <a name="remarks"></a>Osservazioni

La figura seguente mostra un gruppo di attività espanso:The following illustration shows an expanded task group:

![Gruppo di attività, espanso](../../mfc/reference/media/nexttaskgrpexpand.png "Gruppo di attività espanso")

Nella figura seguente viene illustrato un gruppo di attività compresso:The following illustration shows a collapsed task group:

![Gruppo di attività compresso](../../mfc/reference/media/nexttaskgrpcollapse.png "Gruppo di attività compresso")

Nella figura seguente viene illustrato un gruppo di attività senza didascalia:

![Gruppo di attività senza didascalia](../../mfc/reference/media/nexttaskgrpnocapt.png "Gruppo di attività senza didascalia")

Nella figura seguente vengono illustrati due gruppi di attività. Il primo gruppo di attività viene `m_bIsSpecial` contrassegnato come speciale impostando il flag su TRUE, mentre il secondo gruppo di attività non è speciale. Si noti come la didascalia per il primo gruppo di attività sia più scura del secondo gruppo di attività:

![Gruppo di attività speciale](../../mfc/reference/media/nexttaskgrpspecial.png "Gruppo di attività speciale")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxTasksPane.h

## <a name="cmfctaskspanetaskgroupcmfctaskspanetaskgroup"></a><a name="cmfctaskspanetaskgroup"></a>CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup

Costruisce un oggetto `CMFCTasksPaneTaskGroup`.

```
CMFCTasksPaneTaskGroup(
    LPCTSTR lpszName,
    BOOL bIsBottom,
    BOOL bIsSpecial=FALSE,
    BOOL bIsCollapsed=FALSE,
    CMFCTasksPanePropertyPage* pPage=NULL,
    HICON hIcon=NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Specifica il nome del gruppo nella didascalia del gruppo.

*bIsBottom (In basso)*<br/>
Specifica se il gruppo è allineato alla parte inferiore del controllo riquadro attività.

*bIsSpecial*<br/>
Specifica se il gruppo è designato come *speciale* e, di conseguenza, se la didascalia del gruppo viene riempita con un colore diverso.

*bComcompresso*<br/>
Specifica se il gruppo è compresso.

*pPagina*<br/>
Specifica la pagina delle proprietà a cui appartiene questo gruppo di attività.

*hIcon*<br/>
Specifica l'icona visualizzata nella didascalia del gruppo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctaskspanetaskgroupm_bisbottom"></a><a name="m_bisbottom"></a>CMFCTasksPaneTaskGroup::m_bIsBottom

Determina se il gruppo di attività è allineato alla parte inferiore del controllo riquadro attività.

```
BOOL m_bIsBottom;
```

### <a name="remarks"></a>Osservazioni

Solo un gruppo può essere allineato alla parte inferiore del controllo riquadro attività. Questo gruppo di attività deve essere aggiunto per ultimo. Per ulteriori informazioni, vedere [CMFCTasksPane::AddGroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).

## <a name="cmfctaskspanetaskgroupm_biscollapsed"></a><a name="m_biscollapsed"></a>CMFCTasksPaneTaskGroup::m_bIsCollapsed

Determina se il gruppo di attività è compresso.

```
BOOL m_bIsCollapsed;
```

### <a name="remarks"></a>Osservazioni

È possibile abilitare o disabilitare la possibilità di comprimere gruppi nel riquadro attività chiamando [CMFCTasksPane::EnableGroupCollapse](../../mfc/reference/cmfctaskspane-class.md#enablegroupcollapse).

## <a name="cmfctaskspanetaskgroupm_bisspecial"></a><a name="m_bisspecial"></a>CMFCTasksPaneTaskGroup::m_bIsSpecial

Determina se il gruppo di attività è *speciale* e se la didascalia per un gruppo di attività speciale deve essere identificata da un colore diverso.

```
BOOL m_bIsSpecial;
```

### <a name="remarks"></a>Osservazioni

Se l'applicazione utilizza il tema `m_bIsSpecial` visivo di Windows `DrawThemeBackground` XP ed è FALSE, il framework chiama con il flag EBP_NORMALGROUPBACKGROUND. Se `m_bIsSpecial` è TRUE, `DrawThemeBackground` il framework chiama con il flag di EBP_SPECIALGROUPBACKGROUND.

## <a name="cmfctaskspanetaskgroupm_lsttasks"></a><a name="m_lsttasks"></a>CMFCTasksPaneTaskGroup::m_lstTasks

Contiene l'elenco interno delle attività.

```
CObList m_lstTasks;
```

### <a name="remarks"></a>Osservazioni

Per riempire questo elenco, chiamare [CMFCTasksPane::AddTask](../../mfc/reference/cmfctaskspane-class.md#addtask).

## <a name="cmfctaskspanetaskgroupm_rect"></a><a name="m_rect"></a>CMFCTasksPaneTaskGroup::m_rect

Specifica il rettangolo di delimitazione della didascalia del gruppo.

```
CRect m_rect;
```

### <a name="remarks"></a>Osservazioni

Questo valore viene calcolato automaticamente dal framework.

## <a name="cmfctaskspanetaskgroupm_rectgroup"></a><a name="m_rectgroup"></a>CMFCTasksPaneTaskGroup::m_rectGroup

Specifica il rettangolo di delimitazione del gruppo.

```
CRect m_rectGroup;
```

### <a name="remarks"></a>Osservazioni

Questo valore viene calcolato automaticamente dal framework.

## <a name="cmfctaskspanetaskgroupm_strname"></a><a name="m_strname"></a>CMFCTasksPaneTaskGroup::m_strName

Specifica il nome del gruppo.

```
CString m_strName;
```

### <a name="remarks"></a>Osservazioni

Se questo valore è vuoto, la didascalia del gruppo non viene visualizzata e il gruppo non può essere compresso.

## <a name="cmfctaskspanetaskgroupsetaccdata"></a><a name="setaccdata"></a>CMFCTasksPaneTaskGroup::SetACCData

Determina i dati di accessibilità per il gruppo di attività corrente.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
[in] Rappresenta la finestra padre del gruppo di attività corrente.

*data*<br/>
[fuori] Oggetto di `CAccessibilityData` tipo popolato con i dati di accessibilità del gruppo di attività corrente.

### <a name="return-value"></a>Valore restituito

TRUESe il parametro *data* è stato popolato correttamente con i dati di accessibilità del gruppo di attività corrente. in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCTasksPane (classe)](../../mfc/reference/cmfctaskspane-class.md)<br/>
[Classe CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
