---
title: CMFCDropDownFrame (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCDropDownFrame
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::Create
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::GetParentMenuBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::GetParentPopupMenu
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::RecalcLayout
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::SetAutoDestroy
helpviewer_keywords:
- CMFCDropDownFrame [MFC], Create
- CMFCDropDownFrame [MFC], GetParentMenuBar
- CMFCDropDownFrame [MFC], GetParentPopupMenu
- CMFCDropDownFrame [MFC], RecalcLayout
- CMFCDropDownFrame [MFC], SetAutoDestroy
ms.assetid: 09ff81a9-de00-43ec-9df9-b626f7728c4b
ms.openlocfilehash: a5e95efe1880f1177490d55988ca1fe42c606b15
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367546"
---
# <a name="cmfcdropdownframe-class"></a>CMFCDropDownFrame (classe)

Fornisce la funzionalità della finestra cornice a discesa alle barre degli strumenti a discesa e ai pulsanti della barra degli strumenti a discesa.

## <a name="syntax"></a>Sintassi

```
class CMFCDropDownFrame : public CMiniFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCDropDownFrame::CMFCDropDownFrame`|Costruttore predefinito.|
|`CMFCDropDownFrame::~CMFCDropDownFrame`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCDropDownFrame::Create](#create)|Crea un oggetto `CMFCDropDownFrame`.|
|`CMFCDropDownFrame::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCDropDownFrame::GetParentMenuBar](#getparentmenubar)|Recupera la barra dei menu padre del riquadro a discesa.|
|[CMFCDropDownFrame::GetParentPopupMenu](#getparentpopupmenu)|Recupera il menu a comparsa principale del riquadro a discesa.|
|`CMFCDropDownFrame::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCDropDownFrame::RecalcLayoutCMFCDropDownFrame::RecalcLayout](#recalclayout)|Riposiziona il riquadro a discesa.|
|[CMFCDropDownFrame::SetAutoDestroy](#setautodestroy)|Imposta se la finestra della barra degli strumenti a discesa figlio viene distrutta automaticamente.|

### <a name="remarks"></a>Osservazioni

Questa classe non è destinata a essere utilizzata direttamente dal codice.

Il framework utilizza questa classe per `CMFCDropDownToolbar` `CMFCDropDownToolbarButton` fornire il comportamento del frame alle classi e . Per ulteriori informazioni su queste classi, vedere [CMFCDropDownToolBar (classe)](../../mfc/reference/cmfcdropdowntoolbar-class.md) e [CMFCDropDownToolbarButton (classe).](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCDropDownFrame` recuperare `CFrameWnd` un puntatore a un oggetto da una classe e come impostare la finestra della barra degli strumenti a discesa figlio per essere eliminata automaticamente.

[!code-cpp[NVC_MFC_RibbonApp#36](../../mfc/reference/codesnippet/cpp/cmfcdropdownframe-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)

[CMFCDropDownFrame](../../mfc/reference/cmfcdropdownframe-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdropdowntoolbar.h

## <a name="cmfcdropdownframecreate"></a><a name="create"></a>CMFCDropDownFrame::Create

Crea un oggetto `CMFCDropDownFrame`.

```
virtual BOOL Create(
    CWnd* pWndParent,
    int x,
    int y,
    CMFCDropDownToolBar* pWndOriginToolbar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWndParent (padre di pWndParent)*|[in] Finestra padre del frame a discesa.|
|*X*|[in] Coordinata orizzontale dello schermo per la posizione del riquadro in basso.|
|*Y*|[in] Coordinata verticale dello schermo per la posizione del riquadro in basso.|
|*PWndOriginToolbar*|[in] Barra degli strumenti con i pulsanti a discesa utilizzati da questo metodo per popolare il nuovo oggetto frame a discesa.|

### <a name="return-value"></a>Valore restituito

TRUESe il frame a discesa è stato creato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama il metodo [CMiniFrameWnd::CreateEx](../../mfc/reference/cminiframewnd-class.md#createex) di base per creare la finestra cornice a discesa con lo stile WS_POPUP. La finestra cornice a discesa viene visualizzata in corrispondenza delle coordinate dello schermo specificate. Questo metodo ha esito negativo se il [CMiniFrameWnd::CreateEx](../../mfc/reference/cminiframewnd-class.md#createex) metodo restituisce FALSE.

La `CMFCDropDownFrame` classe crea una `CMFCDropDownToolBar` copia del parametro fornito. Questo metodo copia le immagini dei `pWndOriginToolbar` pulsanti `m_pWndOriginToolbar` e gli stati dei pulsanti dal parametro al membro dati.

## <a name="cmfcdropdownframegetparentmenubar"></a><a name="getparentmenubar"></a>CMFCDropDownFrame::GetParentMenuBar

Recupera la barra dei menu padre del riquadro a discesa.

```
CMFCMenuBar* GetParentMenuBar() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla barra dei menu padre del frame a discesa oppure NULL se il frame non ha un elemento padre.

### <a name="remarks"></a>Osservazioni

Questo metodo recupera la barra dei menu padre dal pulsante padre. Questo metodo restituisce NULL se il frame a discesa non dispone di alcun pulsante padre o il pulsante padre non dispone di alcuna barra dei menu padre.

## <a name="cmfcdropdownframegetparentpopupmenu"></a><a name="getparentpopupmenu"></a>CMFCDropDownFrame::GetParentPopupMenu

Recupera il menu a comparsa principale del riquadro a discesa.

```
CMFCDropDownFrame* GetParentPopupMenu() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al menu a discesa padre del frame a discesa oppure NULL se il frame non ha un elemento padre.

### <a name="remarks"></a>Osservazioni

Questo metodo recupera il menu padre dal pulsante padre. Questo metodo restituisce NULL se il frame a discesa non dispone di alcun pulsante padre o il pulsante padre non dispone di alcun menu padre.

## <a name="cmfcdropdownframerecalclayout"></a><a name="recalclayout"></a>CMFCDropDownFrame::RecalcLayoutCMFCDropDownFrame::RecalcLayout

Riposiziona il riquadro a discesa.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*bNotifica*|[in] Non utilizzato.|

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando viene creato il frame a discesa o la finestra padre viene ridimensionata. Questo metodo calcola la posizione e le dimensioni del riquadro a discesa utilizzando la posizione e le dimensioni della finestra padre.

## <a name="cmfcdropdownframesetautodestroy"></a><a name="setautodestroy"></a>CMFCDropDownFrame::SetAutoDestroy

Imposta se la finestra della barra degli strumenti a discesa figlio viene distrutta automaticamente.

```
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoDistruggi*<br/>
[in] TRUE per eliminare automaticamente la finestra della barra degli strumenti a discesa associata; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se *bAutoDestroy* è TRUE, il `CMFCDropDownFrame` distruttore elimina la finestra della barra degli strumenti a discesa associata. Il valore predefinito è TRUE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)<br/>
[CMFCDropDownToolbarButton (classe)](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)
