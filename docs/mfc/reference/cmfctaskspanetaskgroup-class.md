---
description: 'Altre informazioni su: classe CMFCTasksPaneTaskGroup'
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
ms.openlocfilehash: 6b09923c70ad6208b1b029e6ad555c22cd4c771f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254703"
---
# <a name="cmfctaskspanetaskgroup-class"></a>Classe CMFCTasksPaneTaskGroup

La `CMFCTasksPaneTaskGroup` classe è una classe helper utilizzata dal controllo [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) . Gli oggetti di tipo `CMFCTasksPaneTaskGroup` rappresentano un *gruppo di attività*. Il gruppo di attività è un elenco di elementi visualizzato dal framework in una casella separata dotata di un pulsante di compressione. La casella può avere una didascalia facoltativa (nome del gruppo). Se un gruppo viene compresso, l'elenco di attività non è visibile.

## <a name="syntax"></a>Sintassi

```
class CMFCTasksPaneTaskGroup : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup:: CMFCTasksPaneTaskGroup](#cmfctaskspanetaskgroup)|Costruisce un oggetto `CMFCTasksPaneTaskGroup`.|
|`CMFCTasksPaneTaskGroup::~CMFCTasksPaneTaskGroup`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup:: SetACCData](#setaccdata)|Determina i dati di accessibilità per il gruppo di attività corrente.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup:: m_bIsBottom](#m_bisbottom)|Determina se il gruppo di attività è allineato alla parte inferiore del controllo del riquadro attività.|
|[CMFCTasksPaneTaskGroup:: m_bIsCollapsed](#m_biscollapsed)|Determina se il gruppo di attività è compresso.|
|[CMFCTasksPaneTaskGroup:: m_bIsSpecial](#m_bisspecial)|Determina se il gruppo di attività è *speciale.* Il Framework Visualizza didascalie speciali con un colore diverso.|
|[CMFCTasksPaneTaskGroup:: m_lstTasks](#m_lsttasks)|Contiene l'elenco interno di attività.|
|[CMFCTasksPaneTaskGroup:: m_rect](#m_rect)|Specifica il rettangolo di delimitazione della didascalia del gruppo.|
|[CMFCTasksPaneTaskGroup:: m_rectGroup](#m_rectgroup)|Specifica il rettangolo di delimitazione del gruppo.|
|[CMFCTasksPaneTaskGroup:: m_strName](#m_strname)|Specifica il nome del gruppo.|

## <a name="remarks"></a>Commenti

Nella figura seguente viene illustrato un gruppo di attività espanso:

![Gruppo di attività, espanso](../../mfc/reference/media/nexttaskgrpexpand.png "Gruppo di attività espanso")

Nella figura seguente viene illustrato un gruppo di attività compresso:

![Gruppo di attività compresso](../../mfc/reference/media/nexttaskgrpcollapse.png "Gruppo di attività compresso")

Nella figura seguente viene illustrato un gruppo di attività senza una didascalia:

![Gruppo di attività senza didascalia](../../mfc/reference/media/nexttaskgrpnocapt.png "Gruppo di attività senza didascalia")

Nella figura seguente vengono illustrati due gruppi di attività. Il primo gruppo di attività viene contrassegnato come speciale impostando il `m_bIsSpecial` flag su true, mentre il secondo gruppo di attività non è speciale. Si noti che la didascalia del primo gruppo di attività è più scura del secondo gruppo di attività:

![Gruppo di attività speciale](../../mfc/reference/media/nexttaskgrpspecial.png "Gruppo di attività speciale")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxTasksPane. h

## <a name="cmfctaskspanetaskgroupcmfctaskspanetaskgroup"></a><a name="cmfctaskspanetaskgroup"></a> CMFCTasksPaneTaskGroup:: CMFCTasksPaneTaskGroup

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

*bIsBottom*<br/>
Specifica se il gruppo è allineato alla parte inferiore del controllo del riquadro attività.

*bIsSpecial*<br/>
Specifica se il gruppo viene designato come *speciale* e, di conseguenza, se la didascalia del gruppo viene riempita con un colore diverso.

*bIsCollapsed*<br/>
Specifica se il gruppo è compresso.

*paginaf*<br/>
Specifica la pagina delle proprietà a cui appartiene questo gruppo di attività.

*hIcon*<br/>
Specifica l'icona visualizzata nella didascalia del gruppo.

### <a name="remarks"></a>Commenti

## <a name="cmfctaskspanetaskgroupm_bisbottom"></a><a name="m_bisbottom"></a> CMFCTasksPaneTaskGroup:: m_bIsBottom

Determina se il gruppo di attività è allineato alla parte inferiore del controllo del riquadro attività.

```
BOOL m_bIsBottom;
```

### <a name="remarks"></a>Commenti

Solo un gruppo può essere allineato alla parte inferiore del controllo del riquadro attività. È necessario aggiungere il gruppo di attività per ultimo. Per ulteriori informazioni, vedere [CMFCTasksPane:: addgroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).

## <a name="cmfctaskspanetaskgroupm_biscollapsed"></a><a name="m_biscollapsed"></a> CMFCTasksPaneTaskGroup:: m_bIsCollapsed

Determina se il gruppo di attività è compresso.

```
BOOL m_bIsCollapsed;
```

### <a name="remarks"></a>Commenti

È possibile abilitare o disabilitare la possibilità di comprimere i gruppi nel riquadro attività chiamando [CMFCTasksPane:: EnableGroupCollapse](../../mfc/reference/cmfctaskspane-class.md#enablegroupcollapse).

## <a name="cmfctaskspanetaskgroupm_bisspecial"></a><a name="m_bisspecial"></a> CMFCTasksPaneTaskGroup:: m_bIsSpecial

Determina se il gruppo di attività è *speciale* e se la didascalia di un gruppo di attività speciale deve essere identificata da un colore diverso.

```
BOOL m_bIsSpecial;
```

### <a name="remarks"></a>Commenti

Se l'applicazione usa il tema visuale Windows XP e `m_bIsSpecial` è false, il Framework chiama `DrawThemeBackground` con il flag EBP_NORMALGROUPBACKGROUND. Se `m_bIsSpecial` è true, il Framework chiama `DrawThemeBackground` con il flag di EBP_SPECIALGROUPBACKGROUND.

## <a name="cmfctaskspanetaskgroupm_lsttasks"></a><a name="m_lsttasks"></a> CMFCTasksPaneTaskGroup:: m_lstTasks

Contiene l'elenco interno di attività.

```
CObList m_lstTasks;
```

### <a name="remarks"></a>Commenti

Per compilare questo elenco, chiamare [CMFCTasksPane:: AddTask](../../mfc/reference/cmfctaskspane-class.md#addtask).

## <a name="cmfctaskspanetaskgroupm_rect"></a><a name="m_rect"></a> CMFCTasksPaneTaskGroup:: m_rect

Specifica il rettangolo di delimitazione della didascalia del gruppo.

```
CRect m_rect;
```

### <a name="remarks"></a>Commenti

Questo valore viene calcolato automaticamente dal Framework.

## <a name="cmfctaskspanetaskgroupm_rectgroup"></a><a name="m_rectgroup"></a> CMFCTasksPaneTaskGroup:: m_rectGroup

Specifica il rettangolo di delimitazione del gruppo.

```
CRect m_rectGroup;
```

### <a name="remarks"></a>Commenti

Questo valore viene calcolato automaticamente dal Framework.

## <a name="cmfctaskspanetaskgroupm_strname"></a><a name="m_strname"></a> CMFCTasksPaneTaskGroup:: m_strName

Specifica il nome del gruppo.

```
CString m_strName;
```

### <a name="remarks"></a>Commenti

Se questo valore è vuoto, la didascalia del gruppo non viene visualizzata e non è possibile comprimere il gruppo.

## <a name="cmfctaskspanetaskgroupsetaccdata"></a><a name="setaccdata"></a> CMFCTasksPaneTaskGroup:: SetACCData

Determina i dati di accessibilità per il gruppo di attività corrente.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
in Rappresenta la finestra padre del gruppo di attività corrente.

*data*<br/>
out Oggetto di tipo `CAccessibilityData` popolato con i dati di accessibilità del gruppo di attività corrente.

### <a name="return-value"></a>Valore restituito

TRUE se il parametro *dati* è stato popolato correttamente con i dati di accessibilità del gruppo di attività corrente. in caso contrario, FALSE.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)<br/>
[Classe CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
