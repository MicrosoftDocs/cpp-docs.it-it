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
ms.openlocfilehash: 2779e643b15179b0017535fbfbb144f94e1aedbe
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88562012"
---
# <a name="cautohidedocksite-class"></a>Classe CAutoHideDockSite

`CAutoHideDockSite`Estende la [classe CDockSite](../../mfc/reference/cdocksite-class.md) per implementare i riquadri ancorati Nascondi automaticamente.

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
|`CAutoHideDockSite::AllowShowOnPaneMenu`|Indica se l'oggetto `CAutoHideDockSite` viene visualizzato nel menu del riquadro.|
|[CAutoHideDockSite:: CanAcceptPane](#canacceptpane)|Determina se un oggetto del riquadro di base è derivato dalla [classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md).|
|[CAutoHideDockSite::D ockPane](#dockpane)|Ancora un riquadro a questo `CAuotHideDockSite` oggetto.|
|[CAutoHideDockSite:: GetAlignRect](#getalignrect)|Recupera le dimensioni del sito Dock nelle coordinate dello schermo.|
|[CAutoHideDockSite:: RepositionPanes](#repositionpanes)|Ridisegnato il riquadro in `CAutoHideDockSite` con i margini globali e la spaziatura dei pulsanti.|
|[CAutoHideDockSite:: SetOffsetLeft](#setoffsetleft)|Imposta il margine sul lato sinistro della barra di ancoraggio.|
|[CAutoHideDockSite:: SetOffsetRight](#setoffsetright)|Imposta il margine sul lato destro della barra di ancoraggio.|
|[CAutoHideDockSite:: UnSetAutoHideMode](#unsetautohidemode)|Chiama [CMFCAutoHideBar:: UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) per gli oggetti in `CAutoHideDockSite` .|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|Nome|Descrizione|
|[CAutoHideDockSite:: m_nExtraSpace](#m_nextraspace)|Definisce la dimensione dello spazio tra le barre degli strumenti e il bordo della barra di ancoraggio. Questo spazio viene misurato dal bordo sinistro o dal bordo superiore, a seconda dell'allineamento dello spazio di ancoraggio.|

## <a name="remarks"></a>Osservazioni

Quando si chiama [CFrameWndEx:: EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes), il Framework crea automaticamente un `CAutoHideDockSite` oggetto. Nella maggior parte dei casi, non è necessario creare un'istanza o utilizzare direttamente questa classe.

La barra di ancoraggio è il gap tra il lato sinistro del riquadro Dock e il lato sinistro della [classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CDockSite](../../mfc/reference/cdocksite-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un `CAutoHideDockSite` oggetto da un `CMFCAutoHideBar` oggetto e come impostare i margini sinistro e destro della barra di ancoraggio.

[!code-cpp[NVC_MFC_RibbonApp#29](../../mfc/reference/codesnippet/cpp/cautohidedocksite-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxautohidedocksite. h

## <a name="cautohidedocksitecanacceptpane"></a><a name="canacceptpane"></a> CAutoHideDockSite:: CanAcceptPane

Determina se un riquadro di base è un oggetto [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) o derivato da `CMFCAutoHideBar` .

```
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

*pBar*\
in Riquadro di base testato dal Framework.

### <a name="return-value"></a>Valore restituito

TRUE se *pBar* è derivato da `CMFCAutoHideBar` ; In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se un oggetto del riquadro di base è derivato da `CMFCAutoHideBar` , può contenere `CAutoHideDockSite` .

## <a name="cautohidedocksitedockpane"></a><a name="dockpane"></a> CAutoHideDockSite::D ockPane

Ancora un riquadro a questo oggetto [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) .

```
virtual void DockPane(
    CPane* pWnd,
    AFX_DOCK_METHOD dockMethod,
    LPRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

*pWnd*\
in Riquadro ancorato dal Framework.

*dockMethod*\
in Opzioni di ancoraggio per il riquadro.

*lpRect*\
in Rettangolo che specifica i limiti per il riquadro ancorato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non usa il parametro *dockMethod*, che viene fornito per un uso futuro.

Se *lpRect* è null, il framework inserisce il riquadro nel percorso predefinito nel sito di ancoraggio. Se il sito di ancoraggio è orizzontale, il percorso predefinito si trova all'estrema sinistra del sito di ancoraggio. In caso contrario, il percorso predefinito si trova nella parte superiore del sito di ancoraggio.

## <a name="cautohidedocksitegetalignrect"></a><a name="getalignrect"></a> CAutoHideDockSite:: GetAlignRect

Recupera le dimensioni del sito Dock nelle coordinate dello schermo.

```cpp
void GetAlignRect(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

*Rect*\
in Riferimento a un rettangolo. Il metodo archivia le dimensioni del sito dock in questo rettangolo.

### <a name="remarks"></a>Osservazioni

Il rettangolo viene regolato per i margini di offset in modo che non siano inclusi.

## <a name="cautohidedocksitem_nextraspace"></a><a name="m_nextraspace"></a> CAutoHideDockSite:: m_nExtraSpace

Dimensioni dello spazio tra i bordi della [classe CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) e gli oggetti della [classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) .

```
static int m_nExtraSpace;
```

### <a name="remarks"></a>Osservazioni

Quando un oggetto `CMFCAutoHideBar` è ancorato a `CAutoHideDockSite` , non deve occupare l'intero sito di ancoraggio. Questa variabile globale controlla lo spazio aggiuntivo tra il bordo sinistro o superiore di `CMFCAutoHideBar` e il bordo corrispondente `CAutoHideDockSite` . Indica se il bordo superiore o sinistro viene utilizzato dipende dall'allineamento corrente.

## <a name="cautohidedocksitesetoffsetleft"></a><a name="setoffsetleft"></a> CAutoHideDockSite:: SetOffsetLeft

Imposta il margine sul lato sinistro della barra di ancoraggio.

```cpp
void SetOffsetLeft(int nOffset);
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
in Nuovo offset.

### <a name="remarks"></a>Osservazioni

Gli oggetti [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) vengono posizionati in modo statico nell' `CAutoHideDockSite` oggetto. Ciò significa che l'utente non può modificare manualmente la posizione degli `CMFCAutoHideBar` oggetti. Il `SetOffsetLeft` metodo controlla la spaziatura tra il lato sinistro `CMFCAutoHideBar` e il lato sinistro dell'oggetto `CAutoHideDockSite` .

## <a name="cautohidedocksitesetoffsetright"></a><a name="setoffsetright"></a> CAutoHideDockSite:: SetOffsetRight

Imposta il margine sul lato destro della barra di ancoraggio.

```cpp
void SetOffsetRight(int nOffset);
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
in Nuovo offset.

### <a name="remarks"></a>Osservazioni

Gli oggetti [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) vengono posizionati in modo statico nell' `CAutoHideDockSite` oggetto. Ciò significa che l'utente non può modificare manualmente la posizione degli `CMFCAutoHideBar` oggetti. Il `SetOffsetRight` metodo controlla la spaziatura tra il lato destro del `CMFCAutoHideBar` lato destro e destro di `CAutoHideDockSite` .

## <a name="cautohidedocksiterepositionpanes"></a><a name="repositionpanes"></a> CAutoHideDockSite:: RepositionPanes

Ridisegnato i riquadri in [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md).

```
virtual void RepositionPanes(CRect& rectNewClientArea);
```

### <a name="parameters"></a>Parametri

*rectNewClientArea*\
in Valore riservato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non utilizza *rectNewClientArea*. Ridisegnato i riquadri con i margini e la spaziatura dei pulsanti della barra degli strumenti globali.

## <a name="cautohidedocksiteunsetautohidemode"></a><a name="unsetautohidemode"></a> CAutoHideDockSite:: UnSetAutoHideMode

Chiama [CMFCAutoHideBar:: UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) per gli oggetti nel sito di ancoraggio.

```cpp
void UnSetAutoHideMode(CMFCAutoHideBar* pAutoHideToolbar);
```

### <a name="parameters"></a>Parametri

*pAutoHideToolbar*\
in Puntatore a un riquadro oggetto [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) che si trova in `CAutoHideDockSite` .

### <a name="remarks"></a>Osservazioni

Questo metodo cerca la riga che contiene *pAutoHideToolbar*. Chiama `CMFCAutoHideBar.UnSetAutoHideMode` tutti gli `CMFCAutoHideBar` oggetti in tale riga. Se *pAutoHideToolbar* non viene trovato o è null, questo metodo chiama `CMFCAutoHideBar.UnSetAutoHideMode` per tutti gli `CMFCAutoHideBar` oggetti in `CAutoHideDockSite` .

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockSite](../../mfc/reference/cdocksite-class.md)
