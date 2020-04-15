---
title: CMFCTabDropTarget (classe)
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
ms.openlocfilehash: 83432fdb90fe28214fb1faaf843556deb2f44750
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367348"
---
# <a name="cmfctabdroptarget-class"></a>CMFCTabDropTarget (classe)

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
|[CMFCTabDropTarget::OnDragEnter](#ondragenter)|Chiamato dal framework quando l'utente trascina un oggetto in una finestra a schede. (Overrides [COleDropTarget::OnDragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).)|
|[CMFCTabDropTarget::OnDragLeave](#ondragleave)|Chiamato dal framework quando l'utente trascina un oggetto all'esterno della finestra della scheda che ha lo stato attivo. (Overrides [COleDropTarget::OnDragLeave](../../mfc/reference/coledroptarget-class.md#ondragleave).)|
|[CMFCTabDropTarget::OnDragOver](#ondragover)|Chiamato dal framework quando l'utente trascina un oggetto nella finestra della scheda che ha lo stato attivo. (OverrideS [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover).)|
|[CMFCTabDropTarget::OnDropEx](#ondropex)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse alla fine di un'operazione di trascinamento. (Overrides [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).)|
|[CMFCTabDropTarget::Register](#register)|Registra il controllo come destinazione di un'operazione di trascinamento OLE.|

### <a name="remarks"></a>Osservazioni

Questa classe fornisce il supporto di `CMFCBaseTabCtrl` trascinamento della selezione per la classe. Se l'applicazione inizializza le librerie OLE utilizzando la `CMFCBaseTabCtrl` funzione [AfxOleInit,](ole-initialization.md#afxoleinit) gli oggetti si registrano per le operazioni di trascinamento della selezione.

La `CMFCTabDropTarget` classe estende la classe base rendendo attiva la scheda che si trova sotto il cursore quando si verifica un'operazione di trascinamento. Per ulteriori informazioni sulle operazioni di trascinamento della selezione, vedere [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto `CMFCTabDropTarget` e usare il relativo metodo `Register`.

[!code-cpp[NVC_MFC_RibbonApp#39](../../mfc/reference/codesnippet/cpp/cmfctabdroptarget-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleDropTarget](../../mfc/reference/coledroptarget-class.md)

[CMFCTabDropTargetCMFCDropTarget](../../mfc/reference/cmfctabdroptarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetabctrl.h

## <a name="cmfctabdroptargetondragenter"></a><a name="ondragenter"></a>CMFCTabDropTarget::OnDragEnter

Chiamato dal framework quando l'utente trascina un oggetto in una finestra a schede.

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
|*pWnd (in questo stato di windows*|[in] Non utilizzato.|
|*pDataObject (oggetto PDataObject)*|[in] Puntatore all'oggetto trascinato dall'utente.|
|*dwKeyState*|[in] Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.|
|*Punto*|[in] Posizione del cursore nelle coordinate client.|

### <a name="return-value"></a>Valore restituito

Effetto risultante se il rilascio si verifica nella posizione specificata dal *punto*. Può essere uno o più dei seguenti:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce DROPEFFECT_NONE se il framework della barra degli strumenti non è in modalità di personalizzazione o il formato dati degli Appunti non è disponibile. In caso contrario, `CMFCBaseTabCtrl::OnDragEnter` restituisce il risultato della chiamata con i parametri forniti.

Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati dei dati degli Appunti, vedere [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="cmfctabdroptargetondragleave"></a><a name="ondragleave"></a>CMFCTabDropTarget::OnDragLeave

Chiamato dal framework quando l'utente trascina un oggetto all'esterno della finestra della scheda che ha lo stato attivo.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWnd (in questo stato di windows*|[in] Non utilizzato.|

### <a name="remarks"></a>Osservazioni

Questo metodo `CMFCBaseTabCtrl::OnDragLeave` chiama il metodo per eseguire l'operazione di trascinamento.

## <a name="cmfctabdroptargetondragover"></a><a name="ondragover"></a>CMFCTabDropTarget::OnDragOver

Chiamato dal framework quando l'utente trascina un oggetto nella finestra della scheda che ha lo stato attivo.

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
|*pWnd (in questo stato di windows*|[in] Non utilizzato.|
|*pDataObject (oggetto PDataObject)*|[in] Puntatore all'oggetto trascinato dall'utente.|
|*dwKeyState*|[in] Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.|
|*Punto*|[in] Posizione del puntatore del mouse nelle coordinate client.|

### <a name="return-value"></a>Valore restituito

Effetto risultante se il rilascio si verifica nella posizione specificata dal *punto*. Può essere uno o più dei seguenti:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Osservazioni

Questo metodo rende attiva la scheda che si trova sotto il cursore quando si verifica un'operazione di trascinamento. Restituisce DROPEFFECT_NONE se il framework della barra degli strumenti non è in modalità di personalizzazione o il formato dati degli Appunti non è disponibile. In caso contrario, `CMFCBaseTabCtrl::OnDragOver` restituisce il risultato della chiamata con i parametri forniti.

Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati dei dati degli Appunti, vedere [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="cmfctabdroptargetondropex"></a><a name="ondropex"></a>CMFCTabDropTarget::OnDropEx

Chiamato dal framework quando l'utente rilascia il pulsante del mouse alla fine di un'operazione di trascinamento.

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
|*pWnd (in questo stato di windows*|[in] Non utilizzato.|
|*pDataObject (oggetto PDataObject)*|[in] Puntatore all'oggetto trascinato dall'utente.|
|*DropEffect (effetto drop)*|[in] Operazione di rilascio predefinita.|
|*elenco di rilascio*|[in] Non utilizzato.|
|*Punto*|[in] Posizione del puntatore del mouse nelle coordinate client.|

### <a name="return-value"></a>Valore restituito

Effetto di rilascio risultante. Può essere uno o più dei seguenti:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Osservazioni

Questo metodo `CMFCBaseTabCtrl::OnDrop` chiama se il framework della barra degli strumenti è in modalità di personalizzazione e il formato dati degli Appunti è disponibile. Se la `CMFCBaseTabCtrl::OnDrop` chiamata a restituisce un valore diverso da zero, questo metodo restituisce l'effetto di rilascio predefinito specificato da *dropEffect*. In caso contrario, questo metodo restituisce DROPEFFECT_NONE. Per ulteriori informazioni sugli effetti di rilascio, vedere [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).

Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati dei dati degli Appunti, vedere [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="cmfctabdroptargetregister"></a><a name="register"></a>CMFCTabDropTarget::Register

Registra il controllo come destinazione di un'operazione di trascinamento OLE.

```
BOOL Register(CMFCBaseTabCtrl *pOwner);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pProprietario*|[in] Controllo struttura a schede da registrare come destinazione di rilascio.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [COleDropTarget::Register](../../mfc/reference/coledroptarget-class.md#register) per registrare il controllo per le operazioni di trascinamento della selezione.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Trascinamento della selezione OLE](../../mfc/drag-and-drop-ole.md)
