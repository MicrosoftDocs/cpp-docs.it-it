---
title: Classe CAutoHideDockSite
ms.date: 11/04/2016
f1_keywords:
- CAutoHideDockSite
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::CanAcceptPane
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::DockPane
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::GetAlignRect
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::RepositionPanes
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::SetOffsetLeft
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::SetOffsetRight
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::UnSetAutoHideMode
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::m_nExtraSpace
helpviewer_keywords:
- CAutoHideDockSite [MFC], CanAcceptPane
- CAutoHideDockSite [MFC], DockPane
- CAutoHideDockSite [MFC], GetAlignRect
- CAutoHideDockSite [MFC], RepositionPanes
- CAutoHideDockSite [MFC], SetOffsetLeft
- CAutoHideDockSite [MFC], SetOffsetRight
- CAutoHideDockSite [MFC], UnSetAutoHideMode
- CAutoHideDockSite [MFC], m_nExtraSpace
ms.assetid: 2a0f6bec-c369-4ab7-977d-564e7946ebad
ms.openlocfilehash: f24827e2dc1f4d1131f5b63aebeb0e2b09bc2281
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57302962"
---
# <a name="cautohidedocksite-class"></a>Classe CAutoHideDockSite

Il `CAutoHideDockSite` estende la [classe CDockSite](../../mfc/reference/cdocksite-class.md) per implementare riquadri di ancoraggio nascosti automaticamente.

## <a name="syntax"></a>Sintassi

```
class CAutoHideDockSite : public CDockSite
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CAutoHideDockSite::CAutoHideDockSite`|Costruisce un oggetto `CAutoHideDockSite`.|
|`CAutoHideDockSite::~CAutoHideDockSite`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|`CAutoHideDockSite::AllowShowOnPaneMenu`|Indica se il `CAutoHideDockSite` viene visualizzato nel menu del riquadro.|
|[CAutoHideDockSite::CanAcceptPane](#canacceptpane)|Determina se un oggetto di base di riquadro è derivato dal [classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md).|
|[CAutoHideDockSite::DockPane](#dockpane)|Un riquadro viene ancorato a questo `CAuotHideDockSite` oggetto.|
|[CAutoHideDockSite::GetAlignRect](#getalignrect)|Recupera la dimensione del sito di ancoraggio in coordinate dello schermo.|
|[CAutoHideDockSite::RepositionPanes](#repositionpanes)|Ridisegna il riquadro nel `CAutoHideDockSite` con la globali margini e spaziatura del pulsante.|
|[CAutoHideDockSite::SetOffsetLeft](#setoffsetleft)|Imposta il margine a sinistra della barra ancorabile.|
|[CAutoHideDockSite::SetOffsetRight](#setoffsetright)|Imposta il margine a destra della barra ancorabile.|
|[CAutoHideDockSite::UnSetAutoHideMode](#unsetautohidemode)|Le chiamate [CMFCAutoHideBar::UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) per gli oggetti di `CAutoHideDockSite`.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|nome|Descrizione|
|[CAutoHideDockSite::m_nExtraSpace](#m_nextraspace)|Definisce le dimensioni dello spazio tra le barre degli strumenti e il bordo della barra ancorabile. Questo spazio viene misurato dal bordo sinistro o il bordo superiore, a seconda dell'allineamento per lo spazio di ancoraggio.|

## <a name="remarks"></a>Note

Quando si chiama [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes), il framework crea automaticamente un `CAutoHideDockSite` oggetto. Nella maggior parte dei casi, non è necessario creare un'istanza o usare questa classe direttamente.

Barra ancorabile è lo spazio tra il lato sinistro del riquadro dock e il lato sinistro della [classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CDockSite](../../mfc/reference/cdocksite-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un `CAutoHideDockSite` dell'oggetto da un `CMFCAutoHideBar` oggetto e su come impostare i margini sinistro e destro della barra ancorabile.

[!code-cpp[NVC_MFC_RibbonApp#29](../../mfc/reference/codesnippet/cpp/cautohidedocksite-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxautohidedocksite.h

##  <a name="canacceptpane"></a>  CAutoHideDockSite::CanAcceptPane

Determina se un riquadro di base è un [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) dell'oggetto o derivato da `CMFCAutoHideBar`.

```
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pBar*|[in] Nel riquadro di base che il framework di test.|

### <a name="return-value"></a>Valore restituito

TRUE se *pBar* è derivato da `CMFCAutoHideBar`; FALSE in caso contrario.

### <a name="remarks"></a>Note

Se un oggetto di base di riquadro è derivato da `CMFCAutoHideBar`, che può contenere un `CAutoHideDockSite`.

##  <a name="dockpane"></a>  CAutoHideDockSite::DockPane

Un riquadro viene ancorato a questo [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) oggetto.

```
virtual void DockPane(
    CPane* pWnd,
    AFX_DOCK_METHOD dockMethod,
    LPRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWnd*|[in] Il riquadro in cui il framework viene ancorato.|
|*dockMethod*|[in] Opzioni per il riquadro di ancoraggio.|
|*lpRect*|[in] Un rettangolo che specifica i limiti del riquadro ancorato.|

### <a name="remarks"></a>Note

L'implementazione predefinita non usa il parametro *dockMethod*, che viene fornito per un uso futuro.

Se *lpRect* è NULL, il framework inserisce il riquadro nel percorso predefinito nel sito di ancoraggio. Se il sito di ancoraggio è orizzontale, il percorso predefinito è all'estrema sinistra del sito di ancoraggio. In caso contrario, il percorso predefinito è nella parte superiore del sito di ancoraggio.

##  <a name="getalignrect"></a>  CAutoHideDockSite::GetAlignRect

Recupera la dimensione del sito di ancoraggio in coordinate dello schermo.

```
void GetAlignRect(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*rect*|[in] Un riferimento a un rettangolo. Il metodo consente di memorizzare la dimensione del sito di ancoraggio nel rettangolo.|

### <a name="remarks"></a>Note

Il rettangolo viene regolato per i margini di offset, in modo che non sono inclusi.

##  <a name="m_nextraspace"></a>  CAutoHideDockSite::m_nExtraSpace

Le dimensioni dello spazio tra i bordi del [classe CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) e il [classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) oggetti.

```
static int m_nExtraSpace;
```

### <a name="remarks"></a>Note

Quando un `CMFCAutoHideBar` bloccata in una `CAutoHideDockSite`, non deve occupare il sito di ancoraggio intero. Questa variabile globale controlla lo spazio aggiuntivo tra il bordo sinistro o superiore del `CMFCAutoHideBar` e le corrispondenti `CAutoHideDockSite` edge. Indica se il bordo superiore o sinistro dipende dall'allineamento corrente.

##  <a name="setoffsetleft"></a>  CAutoHideDockSite::SetOffsetLeft

Imposta il margine a sinistra della barra ancorabile.

```
void SetOffsetLeft(int nOffset);
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
[in] Nuovo offset.

### <a name="remarks"></a>Note

[CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) gli oggetti vengono posizionati in modo statico nel `CAutoHideDockSite` oggetto. Ciò significa che l'utente non è possibile modificare manualmente il percorso del `CMFCAutoHideBar` oggetti. Il `SetOffsetLeft` metodo consente di controllare la spaziatura tra il lato sinistro all'estrema sinistra `CMFCAutoHideBar` e il lato sinistro del `CAutoHideDockSite`.

##  <a name="setoffsetright"></a>  CAutoHideDockSite::SetOffsetRight

Imposta il margine a destra della barra ancorabile.

```
void SetOffsetRight(int nOffset);
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
[in] Nuovo offset.

### <a name="remarks"></a>Note

[CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) gli oggetti vengono posizionati in modo statico nel `CAutoHideDockSite` oggetto. Ciò significa che l'utente non è possibile modificare manualmente il percorso del `CMFCAutoHideBar` oggetti. Il `SetOffsetRight` metodo consente di controllare la spaziatura tra il lato destro all'estrema destra `CMFCAutoHideBar` e il lato destro del `CAutoHideDockSite`.

##  <a name="repositionpanes"></a>  CAutoHideDockSite::RepositionPanes

Consente di ricreare i riquadri nel [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md).

```
virtual void RepositionPanes(CRect& rectNewClientArea);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*rectNewClientArea*|[in] Un valore riservato.|

### <a name="remarks"></a>Note

L'implementazione predefinita non usa *rectNewClientArea*. Ridisegna i riquadri con i margini della barra degli strumenti globale e spaziatura del pulsante.

##  <a name="unsetautohidemode"></a>  CAutoHideDockSite::UnSetAutoHideMode

Le chiamate [CMFCAutoHideBar::UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) per gli oggetti nel sito di ancoraggio.

```
void UnSetAutoHideMode(CMFCAutoHideBar* pAutoHideToolbar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pAutoHideToolbar*|[in] Un puntatore a un [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) riquadro degli oggetti che si trova nel `CAutoHideDockSite`.|

### <a name="remarks"></a>Note

Questo metodo cerca la riga che contiene *pAutoHideToolbar*. Viene chiamato `CMFCAutoHideBar.UnSetAutoHideMode` per tutte le `CMFCAutoHideBar` gli oggetti in tale riga. Se *pAutoHideToolbar* non viene trovato o è NULL, questo metodo chiama `CMFCAutoHideBar.UnSetAutoHideMode` per tutti i `CMFCAutoHideBar` gli oggetti nel `CAutoHideDockSite`.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockSite](../../mfc/reference/cdocksite-class.md)
