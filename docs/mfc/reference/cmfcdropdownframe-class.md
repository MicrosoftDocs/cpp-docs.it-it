---
title: Classe CMFCDropDownFrame
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
ms.openlocfilehash: 62bab0fbde364406f35edb959abb6e55a9125504
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88840739"
---
# <a name="cmfcdropdownframe-class"></a>Classe CMFCDropDownFrame

Fornisce la funzionalità della finestra cornice a discesa per le barre degli strumenti a discesa e i pulsanti della barra degli strumenti a discesa.

## <a name="syntax"></a>Sintassi

```
class CMFCDropDownFrame : public CMiniFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|-|-|
|`CMFCDropDownFrame::CMFCDropDownFrame`|Costruttore predefinito.|
|`CMFCDropDownFrame::~CMFCDropDownFrame`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|-|-|
|[CMFCDropDownFrame:: create](#create)|Crea un oggetto `CMFCDropDownFrame`.|
|`CMFCDropDownFrame::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCDropDownFrame:: GetParentMenuBar](#getparentmenubar)|Recupera la barra dei menu padre del frame a discesa.|
|[CMFCDropDownFrame:: GetParentPopupMenu](#getparentpopupmenu)|Recupera il menu popup padre del frame a discesa.|
|`CMFCDropDownFrame::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCDropDownFrame:: RecalcLayout](#recalclayout)|Riposiziona il frame a discesa.|
|[CMFCDropDownFrame:: SetAutoDestroy](#setautodestroy)|Imposta un valore che indica se la finestra della barra degli strumenti a discesa figlio viene distrutta automaticamente.|

### <a name="remarks"></a>Osservazioni

Questa classe non è destinata a essere utilizzata direttamente dal codice.

Il Framework usa questa classe per fornire il comportamento del frame `CMFCDropDownToolbar` alle `CMFCDropDownToolbarButton` classi e. Per ulteriori informazioni su queste classi, vedere [classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md) e [classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CMFCDropDownFrame` oggetto da una `CFrameWnd` classe e come impostare la finestra della barra degli strumenti a discesa figlio in modo che venga distrutta automaticamente.

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

## <a name="cmfcdropdownframecreate"></a><a name="create"></a> CMFCDropDownFrame:: create

Crea un oggetto `CMFCDropDownFrame`.

```
virtual BOOL Create(
    CWnd* pWndParent,
    int x,
    int y,
    CMFCDropDownToolBar* pWndOriginToolbar);
```

### <a name="parameters"></a>Parametri

*pWndParent*\
in Finestra padre del frame a discesa.

*x*\
in Coordinata orizzontale dello schermo per la posizione del frame di discesa.

*y*\
in Coordinata verticale dello schermo per la posizione del frame di discesa.

*pWndOriginToolbar*\
in Barra degli strumenti che contiene i pulsanti a discesa utilizzati da questo metodo per popolare il nuovo oggetto cornice a discesa.

### <a name="return-value"></a>Valore restituito

TRUE se il frame a discesa è stato creato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama il metodo [CMiniFrameWnd:: CreateEx](../../mfc/reference/cminiframewnd-class.md#createex) di base per creare la finestra cornice a discesa con lo stile WS_POPUP. La finestra cornice a discesa viene visualizzata in corrispondenza delle coordinate dello schermo specificate. Questo metodo ha esito negativo se il metodo [CMiniFrameWnd:: CreateEx](../../mfc/reference/cminiframewnd-class.md#createex) restituisce false.

La `CMFCDropDownFrame` classe crea una copia del parametro fornito `CMFCDropDownToolBar` . Questo metodo copia le immagini dei pulsanti e gli Stati dei pulsanti dal `pWndOriginToolbar` parametro al `m_pWndOriginToolbar` membro dati.

## <a name="cmfcdropdownframegetparentmenubar"></a><a name="getparentmenubar"></a> CMFCDropDownFrame:: GetParentMenuBar

Recupera la barra dei menu padre del frame a discesa.

```
CMFCMenuBar* GetParentMenuBar() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla barra dei menu padre del frame a discesa oppure NULL se il frame non ha un elemento padre.

### <a name="remarks"></a>Osservazioni

Questo metodo recupera la barra dei menu padre dal pulsante padre. Questo metodo restituisce NULL se il frame a discesa non dispone di un pulsante padre o se il pulsante padre non dispone di una barra dei menu padre.

## <a name="cmfcdropdownframegetparentpopupmenu"></a><a name="getparentpopupmenu"></a> CMFCDropDownFrame:: GetParentPopupMenu

Recupera il menu popup padre del frame a discesa.

```
CMFCDropDownFrame* GetParentPopupMenu() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al menu a discesa padre del frame a discesa oppure NULL se il frame non ha un elemento padre.

### <a name="remarks"></a>Osservazioni

Questo metodo recupera il menu padre dal pulsante padre. Questo metodo restituisce NULL se il frame a discesa non dispone di un pulsante padre o se il pulsante padre non dispone di un menu padre.

## <a name="cmfcdropdownframerecalclayout"></a><a name="recalclayout"></a> CMFCDropDownFrame:: RecalcLayout

Riposiziona il frame a discesa.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

*bNotify*\
[in] Non utilizzato.

### <a name="remarks"></a>Osservazioni

Il Framework chiama questo metodo quando viene creato il frame a discesa oppure la finestra padre viene ridimensionata. Questo metodo calcola la posizione e le dimensioni del frame a discesa utilizzando la posizione e le dimensioni della finestra padre.

## <a name="cmfcdropdownframesetautodestroy"></a><a name="setautodestroy"></a> CMFCDropDownFrame:: SetAutoDestroy

Imposta un valore che indica se la finestra della barra degli strumenti a discesa figlio viene distrutta automaticamente.

```cpp
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoDestroy*<br/>
in TRUE per eliminare automaticamente la finestra della barra degli strumenti a discesa associata; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se *bAutoDestroy* è true, il `CMFCDropDownFrame` distruttore Elimina la finestra della barra degli strumenti a discesa associata. Il valore predefinito è TRUE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)<br/>
[Classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)
