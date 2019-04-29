---
title: Classe CMFCReBar
ms.date: 11/04/2016
f1_keywords:
- CMFCReBar
- AFXREBAR/CMFCReBar
- AFXREBAR/CMFCReBar::AddBar
- AFXREBAR/CMFCReBar::CalcFixedLayout
- AFXREBAR/CMFCReBar::CanFloat
- AFXREBAR/CMFCReBar::Create
- AFXREBAR/CMFCReBar::EnableDocking
- AFXREBAR/CMFCReBar::GetReBarBandInfoSize
- AFXREBAR/CMFCReBar::GetReBarCtrl
- AFXREBAR/CMFCReBar::OnShowControlBarMenu
- AFXREBAR/CMFCReBar::OnToolHitTest
- AFXREBAR/CMFCReBar::OnUpdateCmdUI
- AFXREBAR/CMFCReBar::SetPaneAlignment
helpviewer_keywords:
- CMFCReBar [MFC], AddBar
- CMFCReBar [MFC], CalcFixedLayout
- CMFCReBar [MFC], CanFloat
- CMFCReBar [MFC], Create
- CMFCReBar [MFC], EnableDocking
- CMFCReBar [MFC], GetReBarBandInfoSize
- CMFCReBar [MFC], GetReBarCtrl
- CMFCReBar [MFC], OnShowControlBarMenu
- CMFCReBar [MFC], OnToolHitTest
- CMFCReBar [MFC], OnUpdateCmdUI
- CMFCReBar [MFC], SetPaneAlignment
ms.assetid: 02a60e29-6224-49c1-9e74-e0a7d9f8d023
ms.openlocfilehash: 7776bf504d502feee8ef51949b8adc8e44f94c8e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410135"
---
# <a name="cmfcrebar-class"></a>Classe CMFCReBar

Oggetto `CMFCReBar` oggetto è una barra di controllo che fornisce layout, persistenza e le informazioni sullo stato per i controlli rebar.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.
## <a name="syntax"></a>Sintassi

```
class CMFCReBar : public CPane
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCReBar::AddBar](#addbar)|Aggiunge una banda di un controllo rebar.|
|[CMFCReBar::CalcFixedLayout](#calcfixedlayout)|(Esegue l'override [cbasepane:: Calcfixedlayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|
|[CMFCReBar::CanFloat](#canfloat)|(Esegue l'override [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|
|[CMFCReBar::Create](#create)|Crea il controllo rebar e lo collega al `CMFCReBar` oggetto.|
|[CMFCReBar::EnableDocking](#enabledocking)|(Esegue l'override [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).)|
|[CMFCReBar::GetReBarBandInfoSize](#getrebarbandinfosize)||
|[CMFCReBar::GetReBarCtrl](#getrebarctrl)|Fornisce accesso diretto alla sottostante [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) controllo comune.|
|[CMFCReBar::OnShowControlBarMenu](#onshowcontrolbarmenu)|(Esegue l'override [cpane:: Onshowcontrolbarmenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).)|
|[CMFCReBar::OnToolHitTest](#ontoolhittest)|(Esegue l'override [CWnd::OnToolHitTest](../../mfc/reference/cwnd-class.md#ontoolhittest).)|
|[CMFCReBar::OnUpdateCmdUI](#onupdatecmdui)|(Esegue l'override [CBasePane::OnUpdateCmdUI](cbasepane-class.md).)|
|[CMFCReBar::SetPaneAlignment](#setpanealignment)|(Esegue l'override [CBasePane::SetPaneAlignment](../../mfc/reference/cbasepane-class.md#setpanealignment).)|

## <a name="remarks"></a>Note

Oggetto `CMFCReBar` oggetto può contenere una varietà di finestre figlio. Ciò include le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. È possibile ridimensionare il controllo rebar a livello di codice, o l'utente può ridimensionare manualmente il controllo rebar trascinando la barra gripper. È anche possibile impostare lo sfondo di un oggetto rebar in una bitmap di propria scelta.

Un oggetto rebar si comporta in modo analogo a un oggetto della barra degli strumenti. Un controllo rebar può contenere uno o più bande, e ogni fuori banda può contenere una barra gripper, una bitmap, un'etichetta di testo e una finestra figlio.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCReBar` . Nell'esempio viene illustrato come creare un controllo rebar e aggiungervi una fuori banda. La banda funziona come una barra degli strumenti interno. Questo frammento di codice fa parte di [Rebar campione](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RebarTest#1](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_1.h)]
[!code-cpp[NVC_MFC_RebarTest#2](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CMFCReBar](../../mfc/reference/cmfcrebar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRebar.h

##  <a name="addbar"></a>  CMFCReBar::AddBar

Aggiunge una banda di un controllo rebar.

```
BOOL AddBar(
    CWnd* pBar,
    LPCTSTR pszText = NULL,
    CBitmap* pbmp = NULL,
    DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP);

BOOL AddBar(
    CWnd* pBar,
    COLORREF clrFore,
    COLORREF clrBack,
    LPCTSTR pszText = NULL,
    DWORD dwStyle = RBBS_GRIPPERALWAYS);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in, out] Puntatore alla finestra figlio che deve essere inserito nel controllo rebar. L'oggetto di riferimento deve avere il **WS_CHILD** stile della finestra.

*pszText*<br/>
[in] Specifica il testo da visualizzare sul controllo rebar. Il testo non fa parte della finestra figlio. Piuttosto, viene visualizzato nel controllo rebar stesso.

*pbmp*<br/>
[in, out] Specifica la bitmap da visualizzare sullo sfondo del controllo rebar.

*dwStyle*<br/>
[in] Contiene lo stile da applicare di fuori banda. Per un elenco completo degli stili fuori banda, vedere la descrizione per la `fStyle` nella [REBARBANDINFO](/windows/desktop/api/commctrl/ns-commctrl-tagrebarbandinfoa) struttura nella documentazione di Windows SDK.

*clrFore*<br/>
[in] Rappresenta il colore di primo piano del controllo rebar.

*clrBack*<br/>
[in] Rappresenta il colore di sfondo del controllo rebar.

### <a name="return-value"></a>Valore restituito

TRUE se la banda è stato aggiunto al controllo rebar; in caso contrario, FALSE.

##  <a name="create"></a>  CMFCReBar::Create

Crea il controllo rebar e lo collega al [CMFCReBar](../../mfc/reference/cmfcrebar-class.md) oggetto.

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
[in, out] Puntatore alla finestra padre di questo controllo rebar.

*dwCtrlStyle*<br/>
[in] Specifica lo stile del controllo rebar. Il valore di stile di visualizzazione predefinito è **RBS_BANDBORDERS**, che consente di visualizzare limitare le righe per separare le bande adiacenti nel controllo rebar. Per un elenco degli stili validi, vedere [stili del controllo Rebar](/windows/desktop/Controls/rebar-control-styles) nella documentazione di Windows SDK.

*dwStyle*<br/>
[in] Lo stile della finestra del controllo rebar. Per un elenco degli stili validi, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*nID*<br/>
[in] ID finestra figlio del controllo rebar

### <a name="return-value"></a>Valore restituito

TRUE se il controllo rebar è stato creato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="getrebarctrl"></a>  CMFCReBar::GetReBarCtrl

Fornisce accesso diretto alla `CReBarCtrl` il controllo comune sottostante per `CMFCReBar` oggetti.

```
CReBarCtrl& GetReBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto sottostante `CReBarCtrl` oggetto.

### <a name="remarks"></a>Note

Chiamare questo metodo per sfruttare la funzionalità controllo comune rebar di Windows quando si personalizza il controllo rebar.

##  <a name="calcfixedlayout"></a>  CMFCReBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

[in] *bStretch*<br/>
[in] *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="canfloat"></a>  CMFCReBar::CanFloat

```
virtual BOOL CanFloat() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="enabledocking"></a>  CMFCReBar::EnableDocking

```
void EnableDocking(DWORD dwDockStyle);
```

### <a name="parameters"></a>Parametri

[in] *dwDockStyle*<br/>

### <a name="remarks"></a>Note

##  <a name="getrebarbandinfosize"></a>  CMFCReBar::GetReBarBandInfoSize

```
UINT GetReBarBandInfoSize() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onshowcontrolbarmenu"></a>  CMFCReBar::OnShowControlBarMenu

```
virtual BOOL OnShowControlBarMenu(CPoint);
```

### <a name="parameters"></a>Parametri

[in] *CPoint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="ontoolhittest"></a>  CMFCReBar::OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### <a name="parameters"></a>Parametri

[in] *point*<br/>
[in] *pTI*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onupdatecmdui"></a>  CMFCReBar::OnUpdateCmdUI

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### <a name="parameters"></a>Parametri

[in] *pTarget*<br/>
[in] *bDisableIfNoHndler*<br/>

### <a name="remarks"></a>Note

##  <a name="setpanealignment"></a>  CMFCReBar::SetPaneAlignment

```
virtual void SetPaneAlignment(DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

[in] *dwAlignment*<br/>

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CReBarCtrl](../../mfc/reference/crebarctrl-class.md)<br/>
[Classe CPane](../../mfc/reference/cpane-class.md)
