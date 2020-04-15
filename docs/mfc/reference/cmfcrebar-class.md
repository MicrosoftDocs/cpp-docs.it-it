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
ms.openlocfilehash: a07f30fb00dd00e7a6315b8935731ccfc7500843
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361695"
---
# <a name="cmfcrebar-class"></a>Classe CMFCReBar

Un `CMFCReBar` oggetto è una barra di controllo che fornisce informazioni sul layout, la persistenza e lo stato per i controlli dell'armatura.
Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCReBar : public CPane
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCReBar::AddBar](#addbar)|Aggiunge una banda a un'armatura.|
|[CMFCReBar::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|
|[CMFCReBar::CanFloat](#canfloat)|(Esegue l'override di [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|
|[CMFCReBar::Create](#create)|Crea il controllo Rebar e lo `CMFCReBar` associa all'oggetto.|
|[CMFCReBar::EnableDocking (Docking)](#enabledocking)|(OverrideS [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).)|
|[CMFCReBar::GetReBarBandInfoSize](#getrebarbandinfosize)||
|[CMFCReBar::GetReBarCtrl](#getrebarctrl)|Fornisce accesso diretto al controllo comune [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) sottostante.|
|[CMFCReBar::OnShowControlBarMenu](#onshowcontrolbarmenu)|(Esegue l'override di [CPane::OnShowControlBarMenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).)|
|[CMFCReBar::OnToolHitTest](#ontoolhittest)|(Esegue l'override di [CWnd::OnToolHitTest](../../mfc/reference/cwnd-class.md#ontoolhittest).)|
|[CMFCReBar::OnUpdateCmdUI](#onupdatecmdui)|(Overrides [CBasePane::OnUpdateCmdUI](cbasepane-class.md).)|
|[CMFCReBar::SetPaneAlignment](#setpanealignment)|(Esegue l'override di [CBasePane::SetPaneAlignment](../../mfc/reference/cbasepane-class.md#setpanealignment).)|

## <a name="remarks"></a>Osservazioni

Un `CMFCReBar` oggetto può contenere diverse finestre figlio. Sono incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. È possibile ridimensionare l'armatura a livello di codice oppure l'utente può ridimensionare manualmente l'armatura trascinandone la barra gripper. È inoltre possibile impostare lo sfondo di un oggetto Rebar su una bitmap di propria scelta.

Un oggetto Rebar si comporta in modo simile a un oggetto barra degli strumenti. Un controllo Rebar può contenere una o più bande e ogni banda può contenere una barra gripper, una bitmap, un'etichetta di testo e una finestra figlio.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCReBar` . Nell'esempio viene illustrato come creare un controllo Rebar e aggiungervi una banda. La banda funziona come una barra degli strumenti interna. Questo frammento di codice fa parte [dell'esempio Rebar Test](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RebarTest#1](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_1.h)]
[!code-cpp[NVC_MFC_RebarTest#2](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Cobject](../../mfc/reference/cobject-class.md)\
&nbsp;[CCmdTarget (Destinazione comando)](../../mfc/reference/ccmdtarget-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CBasePane (Riquadro di base)](../../mfc/reference/cbasepane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CPane (CPane)](../../mfc/reference/cpane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[- CMFCReBar (Bar)](../../mfc/reference/cmfcrebar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRebar.h

## <a name="cmfcrebaraddbar"></a><a name="addbar"></a>CMFCReBar::AddBar

Aggiunge una banda a un'armatura.

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

*pBar (Barra)*<br/>
[in, out] Puntatore alla finestra figlio che deve essere inserita nell'armatura. L'oggetto di riferimento deve avere lo stile **WS_CHILD** finestra.

*pszText (testo psz)*<br/>
[in] Specifica il testo da visualizzare sull'armatura. Il testo non fa parte della finestra figlio. Piuttosto, viene visualizzato sull'armatura stessa.

*pbmp*<br/>
[in, out] Specifica la bitmap da visualizzare sullo sfondo dell'armatura.

*DwStyle (in stile dwStyle)*<br/>
[in] Contiene lo stile da applicare alla banda. Per un elenco completo degli stili `fStyle` di finca, vedere la descrizione per nella struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) nella documentazione di Windows SDK.

*ClrFore*<br/>
[in] Rappresenta il colore di primo piano dell'armatura.

*ClrIndietro*<br/>
[in] Rappresenta il colore di sfondo dell'armatura.

### <a name="return-value"></a>Valore restituito

TRUESe la banda è stata aggiunta correttamente all'armatura; in caso contrario, FALSE.

## <a name="cmfcrebarcreate"></a><a name="create"></a>CMFCReBar::Create

Crea il controllo Rebar e lo associa all'oggetto [CMFCReBar.](../../mfc/reference/cmfcrebar-class.md)

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
[in, out] Puntatore alla finestra padre di questo controllo Rebar.

*dwCtrlStyle*<br/>
[in] Specifica lo stile per il controllo Rebar. Il valore di stile predefinito è **RBS_BANDBORDERS**, che visualizza linee strette per separare le bande adiacenti nel controllo Rebar. Per un elenco di stili validi, vedere [Stili del controllo Rebar](/windows/win32/Controls/rebar-control-styles) nella documentazione di Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
[in] Stile della finestra del controllo Rebar. Per un elenco degli stili validi, vedere [Stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*nID*<br/>
[in] ID della finestra figlio di Rebar.

### <a name="return-value"></a>Valore restituito

TRUESe l'armatura è stata creata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebargetrebarctrl"></a><a name="getrebarctrl"></a>CMFCReBar::GetReBarCtrl

Fornisce accesso `CReBarCtrl` diretto al controllo `CMFCReBar` comune sottostante per gli oggetti.

```
CReBarCtrl& GetReBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `CReBarCtrl` sottostante.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per sfruttare la funzionalità di controllo comune dell'armatura di Windows durante la personalizzazione dell'armatura.

## <a name="cmfcrebarcalcfixedlayout"></a><a name="calcfixedlayout"></a>CMFCReBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

[in] *bAllunga*<br/>
[in] *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebarcanfloat"></a><a name="canfloat"></a>CMFCReBar::CanFloat

```
virtual BOOL CanFloat() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebarenabledocking"></a><a name="enabledocking"></a>CMFCReBar::EnableDocking (Docking)

```
void EnableDocking(DWORD dwDockStyle);
```

### <a name="parameters"></a>Parametri

[in] *DwDockStyle (stile dwDock)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebargetrebarbandinfosize"></a><a name="getrebarbandinfosize"></a>CMFCReBar::GetReBarBandInfoSize

```
UINT GetReBarBandInfoSize() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebaronshowcontrolbarmenu"></a><a name="onshowcontrolbarmenu"></a>CMFCReBar::OnShowControlBarMenu

```
virtual BOOL OnShowControlBarMenu(CPoint);
```

### <a name="parameters"></a>Parametri

[in] *CPoint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebarontoolhittest"></a><a name="ontoolhittest"></a>CMFCReBar::OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### <a name="parameters"></a>Parametri

[in] *punto*<br/>
[in] *pTI*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebaronupdatecmdui"></a><a name="onupdatecmdui"></a>CMFCReBar::OnUpdateCmdUI

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### <a name="parameters"></a>Parametri

[in] *pTarget (Destinazione)*<br/>
[in] *bDisableIfNoHndler*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcrebarsetpanealignment"></a><a name="setpanealignment"></a>CMFCReBar::SetPaneAlignment

```
virtual void SetPaneAlignment(DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

[in] *dwAllineamento*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CReBarCtrl](../../mfc/reference/crebarctrl-class.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)
