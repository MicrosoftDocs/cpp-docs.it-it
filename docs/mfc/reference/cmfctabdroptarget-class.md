---
title: Classe CMFCTabDropTarget
ms.date: 11/04/2016
f1_keywords:
- CMFCTabDropTarget
- AFXBASETABCTRL/CMFCTabDropTarget
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragEnter
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragLeave
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragOver
- AFXBASETABCTRL/CMFCTabDropTarget::OnDropEx
- AFXBASETABCTRL/CMFCTabDropTarget::Register
helpviewer_keywords:
- CMFCTabDropTarget [MFC], OnDragEnter
- CMFCTabDropTarget [MFC], OnDragLeave
- CMFCTabDropTarget [MFC], OnDragOver
- CMFCTabDropTarget [MFC], OnDropEx
- CMFCTabDropTarget [MFC], Register
ms.assetid: 9777b7b6-10da-4c4b-b1d1-7ea795b0f1cb
ms.openlocfilehash: 8b24d7679edfaab4d4eeb6d59770f30cd4253580
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62252984"
---
# <a name="cmfctabdroptarget-class"></a>Classe CMFCTabDropTarget

Fornisce il meccanismo di comunicazione tra un controllo struttura a schede e le librerie OLE.

## <a name="syntax"></a>Sintassi

```
class CMFCTabDropTarget : public COleDropTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCTabDropTarget::CMFCTabDropTarget`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCTabDropTarget::OnDragEnter](#ondragenter)|Chiamato dal framework quando l'utente trascina un oggetto in una finestra scheda. (Esegue l'override [COleDropTarget::OnDragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).)|
|[CMFCTabDropTarget::OnDragLeave](#ondragleave)|Chiamato dal framework quando l'utente trascina un oggetto fuori dalla finestra scheda con lo stato attivo. (Esegue l'override [COleDropTarget::OnDragLeave](../../mfc/reference/coledroptarget-class.md#ondragleave).)|
|[CMFCTabDropTarget::OnDragOver](#ondragover)|Chiamato dal framework quando l'utente trascina un oggetto sulla finestra scheda con lo stato attivo. (Esegue l'override [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover).)|
|[CMFCTabDropTarget::OnDropEx](#ondropex)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse la fine di un'operazione di trascinamento. (Esegue l'override [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).)|
|[CMFCTabDropTarget::Register](#register)|Registra il controllo che può essere la destinazione di un'operazione di trascinamento e rilascio OLE.|

### <a name="remarks"></a>Note

Questa classe fornisce il supporto di trascinamento e rilascio per il `CMFCBaseTabCtrl` classe. Se l'applicazione consente di inizializzare le librerie OLE utilizzando la [AfxOleInit](ole-initialization.md#afxoleinit) funzione `CMFCBaseTabCtrl` oggetti registrano per le operazioni di trascinamento e rilascio.

Il `CMFCTabDropTarget` classe estende la classe di base, rendendo la scheda che è sotto il cursore quando si attiva un'operazione di trascinamento. Per altre informazioni sulle operazioni di trascinamento e rilascio, vedere [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto `CMFCTabDropTarget` e usare il relativo metodo `Register`.

[!code-cpp[NVC_MFC_RibbonApp#39](../../mfc/reference/codesnippet/cpp/cmfctabdroptarget-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleDropTarget](../../mfc/reference/coledroptarget-class.md)

[CMFCTabDropTarget](../../mfc/reference/cmfctabdroptarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetabctrl.h

##  <a name="ondragenter"></a>  CMFCTabDropTarget::OnDragEnter

Chiamato dal framework quando l'utente trascina un oggetto in una finestra scheda.

```
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWnd*|[in] Non usato.|
|*pDataObject*|[in] Un puntatore all'oggetto che l'utente trascina.|
|*dwKeyState*|[in] Contiene lo stato dei tasti di modifica. Questa è una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.|
|*point*|[in] La posizione del cursore nelle coordinate del client.|

### <a name="return-value"></a>Valore restituito

L'effetto risultante in caso di trascinamento in corrispondenza della posizione specificata da *puntare*. Può trattarsi di uno o più delle seguenti operazioni:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Note

Questo metodo restituisce DROPEFFECT_NONE se il framework della barra degli strumenti non è in modalità di personalizzazione o il formato di dati degli Appunti non è disponibile. In caso contrario, restituisce il risultato della chiamata al metodo `CMFCBaseTabCtrl::OnDragEnter` con i parametri forniti.

Per altre informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per altre informazioni sui formati di dati negli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

##  <a name="ondragleave"></a>  CMFCTabDropTarget::OnDragLeave

Chiamato dal framework quando l'utente trascina un oggetto fuori dalla finestra scheda con lo stato attivo.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWnd*|[in] Non usato.|

### <a name="remarks"></a>Note

Questo metodo chiama il `CMFCBaseTabCtrl::OnDragLeave` metodo per eseguire l'operazione di trascinamento.

##  <a name="ondragover"></a>  CMFCTabDropTarget::OnDragOver

Chiamato dal framework quando l'utente trascina un oggetto sulla finestra scheda con lo stato attivo.

```
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWnd*|[in] Non usato.|
|*pDataObject*|[in] Un puntatore all'oggetto che l'utente trascina.|
|*dwKeyState*|[in] Contiene lo stato dei tasti di modifica. Questa è una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.|
|*point*|[in] La posizione del puntatore del mouse, nelle coordinate del client.|

### <a name="return-value"></a>Valore restituito

L'effetto risultante in caso di trascinamento in corrispondenza della posizione specificata da *puntare*. Può trattarsi di uno o più delle seguenti operazioni:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Note

Questo metodo rende la scheda che è sotto il cursore quando si attiva un'operazione di trascinamento. Restituisce DROPEFFECT_NONE se il framework della barra degli strumenti non è in modalità di personalizzazione o il formato di dati degli Appunti non è disponibile. In caso contrario, restituisce il risultato della chiamata al metodo `CMFCBaseTabCtrl::OnDragOver` con i parametri forniti.

Per altre informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per altre informazioni sui formati di dati negli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

##  <a name="ondropex"></a>  CMFCTabDropTarget::OnDropEx

Chiamato dal framework quando l'utente rilascia il pulsante del mouse la fine di un'operazione di trascinamento.

```
virtual DROPEFFECT OnDropEx(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DROPEFFECT dropEffect,
    DROPEFFECT dropList,
    CPoint point);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWnd*|[in] Non usato.|
|*pDataObject*|[in] Un puntatore all'oggetto che l'utente trascina.|
|*dropEffect*|[in] L'operazione di eliminazione predefinito.|
|*dropList*|[in] Non usato.|
|*point*|[in] La posizione del puntatore del mouse, nelle coordinate del client.|

### <a name="return-value"></a>Valore restituito

L'effetto risultante. Può trattarsi di uno o più delle seguenti operazioni:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Note

Questo metodo chiama `CMFCBaseTabCtrl::OnDrop` se il framework della barra degli strumenti è in modalità di personalizzazione e il formato di dati degli Appunti è disponibile. Se la chiamata a `CMFCBaseTabCtrl::OnDrop` restituisce un valore diverso da zero, questo metodo restituisce l'effetto di rilascio predefinito specificato dal *dropEffect*. In caso contrario, questo metodo restituisce DROPEFFECT_NONE. Per altre informazioni sugli effetti di trascinamento, vedere [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).

Per altre informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per altre informazioni sui formati di dati negli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

##  <a name="register"></a>  CMFCTabDropTarget::Register

Registra il controllo che può essere la destinazione di un'operazione di trascinamento e rilascio OLE.

```
BOOL Register(CMFCBaseTabCtrl *pOwner);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pOwner*|[in] Controllo scheda da registrare come destinazione di rilascio.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo chiama [COleDropTarget::Register](../../mfc/reference/coledroptarget-class.md#register) per registrare il controllo per le operazioni di trascinamento e rilascio.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md)
