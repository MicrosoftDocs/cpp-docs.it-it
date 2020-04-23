---
title: CAutoHideDockSite (classe)
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
ms.openlocfilehash: 1f23729ced02a151c6186bdcc72cb8938416be46
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753004"
---
# <a name="cautohidedocksite-class"></a>CAutoHideDockSite (classe)

Il `CAutoHideDockSite` estende il [CDockSite classe](../../mfc/reference/cdocksite-class.md) per implementare automaticamente nascondere i riquadri di ancoraggio.

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
|`CAutoHideDockSite::AllowShowOnPaneMenu`|Indica se `CAutoHideDockSite` l'oggetto viene visualizzato nel menu del riquadro.|
|[CAutoHideDockSite::CanAcceptPane](#canacceptpane)|Determina se un oggetto riquadro di base è derivato dalla [classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md).|
|[CAutoHideDockSite::DockPane](#dockpane)|Ancora un riquadro `CAuotHideDockSite` a questo oggetto.|
|[CAutoHideDockSite::GetAlignRect](#getalignrect)|Recupera le dimensioni del sito di ancoraggio in coordinate dello schermo.|
|[CAutoHideDockSite::RepositionPanes](#repositionpanes)|Ridisegna il `CAutoHideDockSite` riquadro in base ai margini globali e alla spaziatura dei pulsanti.|
|[CAutoHideDockSite::SetOffsetLeft](#setoffsetleft)|Imposta il margine sul lato sinistro della barra di ancoraggio.|
|[CAutoHideDockSite::SetOffsetRight](#setoffsetright)|Imposta il margine sul lato destro della barra di ancoraggio.|
|[CAutoHideDockSite::UnSetAutoHideMode](#unsetautohidemode)|Chiama [CMFCAutoHideBar::UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) per `CAutoHideDockSite`gli oggetti in .|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|Nome|Descrizione|
|[CAutoHideDockSite::m_nExtraSpace](#m_nextraspace)|Definisce la dimensione dello spazio tra le barre degli strumenti e il bordo della barra di ancoraggio. Questo spazio viene misurato dal bordo sinistro o dal bordo superiore, a seconda dell'allineamento per lo spazio di ancoraggio.|

## <a name="remarks"></a>Osservazioni

Quando si chiama [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes), `CAutoHideDockSite` il framework crea automaticamente un oggetto . Nella maggior parte dei casi, non è necessario creare un'istanza o utilizzare direttamente questa classe.

La barra di ancoraggio è lo spazio tra il lato sinistro del riquadro di ancoraggio e il lato sinistro della [classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CDockSite](../../mfc/reference/cdocksite-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene `CAutoHideDockSite` illustrato come `CMFCAutoHideBar` recuperare un oggetto da un oggetto e come impostare i margini sinistro e destro della barra di ancoraggio.

[!code-cpp[NVC_MFC_RibbonApp#29](../../mfc/reference/codesnippet/cpp/cautohidedocksite-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxautohidedocksite.h

## <a name="cautohidedocksitecanacceptpane"></a><a name="canacceptpane"></a>CAutoHideDockSite::CanAcceptPane

Determina se un riquadro di base è un `CMFCAutoHideBar` [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) oggetto o derivato da .

```
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pBar (Barra)*|[in] Riquadro di base testato dal framework.|

### <a name="return-value"></a>Valore restituito

TRUESe *pBar* è `CMFCAutoHideBar`derivato da ; FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Se un oggetto riquadro `CMFCAutoHideBar`base è `CAutoHideDockSite`derivato da , può contenere un file .

## <a name="cautohidedocksitedockpane"></a><a name="dockpane"></a>CAutoHideDockSite::DockPane

Ancora un riquadro a questo [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) oggetto.

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
|*pWnd (in questo stato di windows*|[in] Riquadro ancorato dal framework.|
|*dockMethod*|[in] Opzioni di ancoraggio per il riquadro.|
|*Lprect*|[in] Rettangolo che specifica i limiti per il riquadro ancorato.|

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non utilizza il parametro *dockMethod*, fornito per un utilizzo futuro.

Se *lpRect* è NULL, il framework inserisce il riquadro nella posizione predefinita nel sito di ancoraggio. Se il sito di ancoraggio è orizzontale, la posizione predefinita si trova all'estrema sinistra del sito di ancoraggio. In caso contrario, la posizione predefinita si trova nella parte superiore del sito di ancoraggio.

## <a name="cautohidedocksitegetalignrect"></a><a name="getalignrect"></a>CAutoHideDockSite::GetAlignRect

Recupera le dimensioni del sito di ancoraggio in coordinate dello schermo.

```cpp
void GetAlignRect(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*Rect*|[in] Riferimento a un rettangolo. Il metodo memorizza le dimensioni del sito di ancoraggio in questo rettangolo.|

### <a name="remarks"></a>Osservazioni

Il rettangolo viene regolato per i margini di offset in modo che non vengano inclusi.

## <a name="cautohidedocksitem_nextraspace"></a><a name="m_nextraspace"></a>CAutoHideDockSite::m_nExtraSpace

La dimensione dello spazio tra i bordi della [classe CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) e [CMFCAutoHideBar Class](../../mfc/reference/cmfcautohidebar-class.md) oggetti.

```
static int m_nExtraSpace;
```

### <a name="remarks"></a>Osservazioni

Quando `CMFCAutoHideBar` un oggetto è `CAutoHideDockSite`ancorato a un oggetto , non deve occupare l'intero sito di banchina. Questa variabile globale controlla lo spazio aggiuntivo tra `CMFCAutoHideBar` il `CAutoHideDockSite` bordo sinistro o superiore del bordo e corrispondente. L'utilizzo del bordo superiore o sinistro dipende dall'allineamento corrente.

## <a name="cautohidedocksitesetoffsetleft"></a><a name="setoffsetleft"></a>CAutoHideDockSite::SetOffsetLeft

Imposta il margine sul lato sinistro della barra di ancoraggio.

```cpp
void SetOffsetLeft(int nOffset);
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
[in] Nuovo offset.

### <a name="remarks"></a>Osservazioni

[CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) gli oggetti sono posizionati in modo statico sull'oggetto. `CAutoHideDockSite` Ciò significa che l'utente `CMFCAutoHideBar` non può modificare manualmente la posizione degli oggetti. Il `SetOffsetLeft` metodo controlla la spaziatura tra il `CMFCAutoHideBar` lato sinistro `CAutoHideDockSite`del lato sinistro e il lato sinistro dell'oggetto .

## <a name="cautohidedocksitesetoffsetright"></a><a name="setoffsetright"></a>CAutoHideDockSite::SetOffsetRight

Imposta il margine sul lato destro della barra di ancoraggio.

```cpp
void SetOffsetRight(int nOffset);
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
[in] Nuovo offset.

### <a name="remarks"></a>Osservazioni

[CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) gli oggetti sono posizionati in modo statico sull'oggetto. `CAutoHideDockSite` Ciò significa che l'utente non `CMFCAutoHideBar` può modificare manualmente la posizione degli oggetti. Il `SetOffsetRight` metodo controlla la spaziatura tra il `CMFCAutoHideBar` lato destro `CAutoHideDockSite`tra il lato destro e il lato destro dell'oggetto .

## <a name="cautohidedocksiterepositionpanes"></a><a name="repositionpanes"></a>CAutoHideDockSite::RepositionPanes

Ridisegna i riquadri nel [cAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md).

```
virtual void RepositionPanes(CRect& rectNewClientArea);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*rectNewClientArea*|[in] Valore riservato.|

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non utilizza *rectNewClientArea*. Ridisegna i riquadri con i margini globali della barra degli strumenti e la spaziatura dei pulsanti.

## <a name="cautohidedocksiteunsetautohidemode"></a><a name="unsetautohidemode"></a>CAutoHideDockSite::UnSetAutoHideMode

Chiama [CMFCAutoHideBar::UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) per gli oggetti nel sito di ancoraggio.

```cpp
void UnSetAutoHideMode(CMFCAutoHideBar* pAutoHideToolbar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pAutoHideToolbar*|[in] Puntatore a un [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) riquadro degli oggetti che si trova sul `CAutoHideDockSite`.|

### <a name="remarks"></a>Osservazioni

Questo metodo cerca la riga che contiene *pAutoHideToolbar*. `CMFCAutoHideBar.UnSetAutoHideMode` Richiede tutti gli `CMFCAutoHideBar` oggetti su quella riga. Se *pAutoHideToolbar* non viene trovato o è `CMFCAutoHideBar.UnSetAutoHideMode` NULL, `CMFCAutoHideBar` questo `CAutoHideDockSite`metodo chiama per tutti gli oggetti in .

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CDockSite Class](../../mfc/reference/cdocksite-class.md)
