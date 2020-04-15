---
title: Classe CMFCTasksPaneTask
ms.date: 11/19/2018
f1_keywords:
- CMFCTasksPaneTask
- AFXTASKSPANE/CMFCTasksPaneTask
- AFXTASKSPANE/CMFCTasksPaneTask::CMFCTasksPaneTask
- AFXTASKSPANE/CMFCTasksPaneTask::SetACCData
- AFXTASKSPANE/CMFCTasksPaneTask::m_bAutoDestroyWindow
- AFXTASKSPANE/CMFCTasksPaneTask::m_bIsBold
- AFXTASKSPANE/CMFCTasksPaneTask::m_dwUserData
- AFXTASKSPANE/CMFCTasksPaneTask::m_hwndTask
- AFXTASKSPANE/CMFCTasksPaneTask::m_nIcon
- AFXTASKSPANE/CMFCTasksPaneTask::m_nWindowHeight
- AFXTASKSPANE/CMFCTasksPaneTask::m_pGroup
- AFXTASKSPANE/CMFCTasksPaneTask::m_rect
- AFXTASKSPANE/CMFCTasksPaneTask::m_strName
- AFXTASKSPANE/CMFCTasksPaneTask::m_uiCommandID
helpviewer_keywords:
- CMFCTasksPaneTask [MFC], CMFCTasksPaneTask
- CMFCTasksPaneTask [MFC], SetACCData
- CMFCTasksPaneTask [MFC], m_bAutoDestroyWindow
- CMFCTasksPaneTask [MFC], m_bIsBold
- CMFCTasksPaneTask [MFC], m_dwUserData
- CMFCTasksPaneTask [MFC], m_hwndTask
- CMFCTasksPaneTask [MFC], m_nIcon
- CMFCTasksPaneTask [MFC], m_nWindowHeight
- CMFCTasksPaneTask [MFC], m_pGroup
- CMFCTasksPaneTask [MFC], m_rect
- CMFCTasksPaneTask [MFC], m_strName
- CMFCTasksPaneTask [MFC], m_uiCommandID
ms.assetid: c5a7513b-cd8f-4e2e-b16f-650e1fe30954
ms.openlocfilehash: 49fccdf161da7deb1fd88a12a107df40bafdae92
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375872"
---
# <a name="cmfctaskspanetask-class"></a>Classe CMFCTasksPaneTask

La `CMFCTasksPaneTask` classe è una classe helper che rappresenta le attività per il controllo riquadro attività ( [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)). L'oggetto attività rappresenta un elemento nel gruppo di attività ( [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)). Ogni attività può avere un comando eseguito dal framework quando un utente fa clic sull'attività e un'icona visualizzata a sinistra del nome dell'attività.

## <a name="syntax"></a>Sintassi

```
class CMFCTasksPaneTask : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTasksPaneTask::CMFCTasksPaneTask](#cmfctaskspanetask)|Crea e inizializza un oggetto `CMFCTasksPaneTask`.|
|`CMFCTasksPaneTask::~CMFCTasksPaneTask`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTasksPaneTask::SetACCData](#setaccdata)|Determina i dati di accessibilità per l'attività corrente.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCTasksPaneTask::m_bAutoDestroyWindow](#m_bautodestroywindow)|Determina se la finestra dell'attività viene eliminata automaticamente.|
|[CMFCTasksPaneTask::m_bIsBold](#m_bisbold)|Determina se il framework disegna un'etichetta dell'attività in grassetto.|
|[CMFCTasksPaneTask::m_dwUserData](#m_dwuserdata)|Contiene dati definiti dall'utente che il framework associa all'attività. Impostare su zero se all'attività non sono associati dati.|
|[CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)|Un handle per la finestra dell'attività.|
|[CMFCTasksPaneTask::m_nIcon](#m_nicon)|Indice nell'elenco immagini dell'immagine visualizzata dal framework accanto all'attività.|
|[CMFCTasksPaneTask::m_nWindowHeight](#m_nwindowheight)|Altezza della finestra attività. Se l'attività non dispone di una finestra delle attività, questo valore è zero.|
|[CMFCTasksPaneTask::m_pGroup](#m_pgroup)|Puntatore all'attività `CMFCTasksPaneTaskGroup` a cui appartiene questa attività.|
|[CMFCTasksPaneTask::m_rect](#m_rect)|Specifica il rettangolo di delimitazione dell'attività.|
|[CMFCTasksPaneTask::m_strName](#m_strname)|Nome dell'attività.|
|[CMFCTasksPaneTask::m_uiCommandID](#m_uicommandid)|Specifica l'ID di comando del comando eseguito dal framework quando l'utente fa clic sull'attività. Se questo valore non è un ID di comando valido, l'attività viene considerata come un'etichetta semplice.|

## <a name="remarks"></a>Osservazioni

Nella figura seguente viene illustrato un gruppo di attività che contiene tre attività:The following illustration shows a task group that contains three tasks:

![Gruppo di attività, espanso](../../mfc/reference/media/nexttaskgrpexpand.png "Gruppo di attività espanso")

> [!NOTE]
> Se un'attività non dispone di un ID di comando valido, viene considerata come un'etichetta semplice.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxTasksPane.h

## <a name="cmfctaskspanetaskcmfctaskspanetask"></a><a name="cmfctaskspanetask"></a>CMFCTasksPaneTask::CMFCTasksPaneTask

Crea e inizializza un oggetto `CMFCTasksPaneTask`.

```
CMFCTasksPaneTask(
    CMFCTasksPaneTaskGroup* pGroup,
    LPCTSTR lpszName,
    int nIcon,
    UINT uiCommandID,
    DWORD dwUserData = 0,
    HWND hwndTask = NULL,
    BOOL bAutoDestroyWindow = FALSE,
    int nWindowHeight = 0);
```

### <a name="parameters"></a>Parametri

*pGruppo*<br/>
Specifica il [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) a cui appartiene l'attività.

*lpszName*<br/>
Specifica il nome dell'attività.

*nIcona*<br/>
Specifica l'indice dell'immagine dell'attività nell'elenco immagini.

*uiCommandID (idComando)*<br/>
Specifica l'ID di comando del comando che viene eseguito quando si fa clic sull'attività.

*dwUserData (dati utente)*<br/>
Dati definiti dall'utente.

*hwndTask (in seguito a un oggetto hwndTask*<br/>
Specifica l'handle per la finestra delle attività.

*bAutoDestroyWindow*<br/>
Se TRUE, la finestra dell'attività verrà eliminata automaticamente.

*nFinestraAltezza*<br/>
Specifica l'altezza della finestra delle attività.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctaskspanetaskm_bautodestroywindow"></a><a name="m_bautodestroywindow"></a>CMFCTasksPaneTask::m_bAutoDestroyWindow

Determina se la finestra dell'attività viene eliminata automaticamente.

```
BOOL m_bAutoDestroyWindow;
```

### <a name="remarks"></a>Osservazioni

Impostare su TRUE per specificare che la finestra [dell'attività ( CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)) deve essere eliminata automaticamente; in caso contrario, FALSE.

## <a name="cmfctaskspanetaskm_bisbold"></a><a name="m_bisbold"></a>CMFCTasksPaneTask::m_bIsBold

Determina se un'etichetta di attività viene disegnata in grassetto.

```
BOOL m_bIsBold;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro su TRUE per visualizzare il testo in grassetto per l'etichetta dell'attività.

## <a name="cmfctaskspanetaskm_dwuserdata"></a><a name="m_dwuserdata"></a>CMFCTasksPaneTask::m_dwUserData

Contiene i dati definiti dall'utente associati all'attività. Impostare su zero se all'attività non sono associati dati.

```
DWORD m_dwUserData;
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfctaskspanetaskm_hwndtask"></a><a name="m_hwndtask"></a>CMFCTasksPaneTask::m_hwndTask

Un handle per la finestra dell'attività.

```
HWND m_hwndTask;
```

### <a name="remarks"></a>Osservazioni

Per aggiungere una finestra delle attività, chiamare [CMFCTasksPane::AddWindow](../../mfc/reference/cmfctaskspane-class.md#addwindow).

## <a name="cmfctaskspanetaskm_nicon"></a><a name="m_nicon"></a>CMFCTasksPaneTask::m_nIcon

Posizione di indice in un elenco immagini che identifica un'immagine visualizzata accanto all'attività specificata.

```
int m_nIcon;
```

### <a name="remarks"></a>Osservazioni

L'elenco immagini viene impostato da [CMFCTasksPane::SetIconsList](../../mfc/reference/cmfctaskspane-class.md#seticonslist).

Impostare su `m_nIcon` -1 se si desidera visualizzare l'attività senza un'immagine.

## <a name="cmfctaskspanetaskm_nwindowheight"></a><a name="m_nwindowheight"></a>CMFCTasksPaneTask::m_nWindowHeight

Altezza della finestra attività. Se l'attività non dispone di una finestra delle attività, questo valore è zero.

```
int m_nWindowHeight;
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfctaskspanetaskm_pgroup"></a><a name="m_pgroup"></a>CMFCTasksPaneTask::m_pGroup

Puntatore al [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) a cui appartiene questa attività.

```
CMFCTasksPaneTaskGroup* m_pGroup;
```

### <a name="remarks"></a>Osservazioni

Ogni attività deve avere un gruppo padre. Per aggiungere gruppi a un riquadro attività, chiamare [CMFCTasksPane::AddGroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).

## <a name="cmfctaskspanetaskm_rect"></a><a name="m_rect"></a>CMFCTasksPaneTask::m_rect

Specifica il rettangolo di delimitazione dell'attività.

```
CRect m_rect;
```

### <a name="remarks"></a>Osservazioni

Questo valore viene calcolato dal framework quando viene disegnata l'attività.

## <a name="cmfctaskspanetaskm_strname"></a><a name="m_strname"></a>CMFCTasksPaneTask::m_strName

Nome dell'attività.

```
CString m_strName;
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfctaskspanetaskm_uicommandid"></a><a name="m_uicommandid"></a>CMFCTasksPaneTask::m_uiCommandID

Specifica l'ID di comando del comando che viene eseguito quando l'utente fa clic sull'attività. Se questo valore non è un ID di comando valido, l'attività viene considerata come un'etichetta semplice.

```
UINT m_uiCommandID;
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfctaskspanetasksetaccdata"></a><a name="setaccdata"></a>CMFCTasksPaneTask::SetACCData

Determina i dati di accessibilità per l'attività corrente.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
[in] Rappresenta la finestra padre dell'attività corrente.

*data*<br/>
[fuori] Oggetto di `CAccessibilityData` tipo popolato con i dati di accessibilità dell'attività corrente.

### <a name="return-value"></a>Valore restituito

TRUESe il parametro *data* è stato popolato correttamente con i dati di accessibilità dell'attività corrente. in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
