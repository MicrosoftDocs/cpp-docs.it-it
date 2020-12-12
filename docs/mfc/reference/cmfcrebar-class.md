---
description: 'Altre informazioni su: classe CMFCReBar'
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
ms.openlocfilehash: fcfad39ddb9c5f3bdacc5a06ebb65d22bc8c7a4d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289829"
---
# <a name="cmfcrebar-class"></a>Classe CMFCReBar

Un `CMFCReBar` oggetto è una barra di controllo che fornisce informazioni di layout, persistenza e stato per i controlli Rebar.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCReBar : public CPane
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCReBar:: AddBar](#addbar)|Aggiunge una banda a un controllo Rebar.|
|[CMFCReBar:: CalcFixedLayout](#calcfixedlayout)|Esegue l'override di [CBasePane:: CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).|
|[CMFCReBar:: CanFloat](#canfloat)|Esegue l'override di [CBasePane:: CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).|
|[CMFCReBar:: create](#create)|Crea il controllo Rebar e lo collega all' `CMFCReBar` oggetto.|
|[CMFCReBar:: EnableDocking](#enabledocking)|Esegue l'override di [CBasePane:: EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).|
|[CMFCReBar:: GetReBarBandInfoSize](#getrebarbandinfosize)||
|[CMFCReBar:: GetReBarCtrl](#getrebarctrl)|Fornisce accesso diretto al controllo comune [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) sottostante.|
|[CMFCReBar:: OnShowControlBarMenu](#onshowcontrolbarmenu)|Esegue l'override di [CPane:: OnShowControlBarMenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).|
|[CMFCReBar:: OnToolHitTest](#ontoolhittest)|Esegue l'override di [CWnd:: OnToolHitTest](../../mfc/reference/cwnd-class.md#ontoolhittest).|
|[CMFCReBar:: OnUpdateCmdUI](#onupdatecmdui)|Esegue l'override di [CBasePane:: OnUpdateCmdUI](cbasepane-class.md).|
|[CMFCReBar:: SetPaneAlignment](#setpanealignment)|Esegue l'override di [CBasePane:: SetPaneAlignment](../../mfc/reference/cbasepane-class.md#setpanealignment).|

## <a name="remarks"></a>Commenti

Un `CMFCReBar` oggetto può contenere una varietà di finestre figlio. Sono incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. È possibile ridimensionare il controllo Rebar a livello di codice oppure l'utente può ridimensionare manualmente il controllo rebar trascinando la barra del controllo. È inoltre possibile impostare lo sfondo di un oggetto Rebar su una bitmap di propria scelta.

Un oggetto Rebar si comporta in modo analogo a un oggetto della barra degli strumenti. Un controllo Rebar può contenere una o più bande, ognuna delle quali può contenere una barra di pinza, una bitmap, un'etichetta di testo e una finestra figlio.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCReBar` . Nell'esempio viene illustrato come creare un controllo Rebar e aggiungervi una banda. La banda funge da barra degli strumenti interna. Questo frammento di codice fa parte dell' [esempio di test del controllo Rebar](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RebarTest#1](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_1.h)]
[!code-cpp[NVC_MFC_RebarTest#2](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)\
&nbsp;[CCmdTarget](../../mfc/reference/ccmdtarget-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;└ &nbsp; [CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CBasePane](../../mfc/reference/cbasepane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CPane](../../mfc/reference/cpane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CMFCReBar](../../mfc/reference/cmfcrebar-class.md) └

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRebar. h

## <a name="cmfcrebaraddbar"></a><a name="addbar"></a> CMFCReBar:: AddBar

Aggiunge una banda a un controllo Rebar.

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
[in, out] Puntatore alla finestra figlio da inserire nel controllo Rebar. L'oggetto a cui si fa riferimento deve avere lo stile della finestra **WS_CHILD** .

*pszText*<br/>
in Specifica il testo da visualizzare nel controllo Rebar. Il testo non fa parte della finestra figlio. Viene invece visualizzato sul rebar stesso.

*PBMP*<br/>
[in, out] Specifica la bitmap da visualizzare sullo sfondo del controllo Rebar.

*dwStyle*<br/>
in Contiene lo stile da applicare alla banda. Per un elenco completo degli stili delle bande, vedere la descrizione di `fStyle` nella struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) nella documentazione di Windows SDK.

*clrFore*<br/>
in Rappresenta il colore di primo piano del controllo Rebar.

*clrBack*<br/>
in Rappresenta il colore di sfondo del controllo Rebar.

### <a name="return-value"></a>Valore restituito

TRUE se la banda è stata aggiunta correttamente al controllo Rebar; in caso contrario, FALSE.

## <a name="cmfcrebarcreate"></a><a name="create"></a> CMFCReBar:: create

Crea il controllo Rebar e lo connette all'oggetto [CMFCReBar](../../mfc/reference/cmfcrebar-class.md) .

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
[in, out] Puntatore alla finestra padre di questo controllo Rebar.

*dwCtrlStyle*<br/>
in Specifica lo stile per il controllo Rebar. Il valore di stile predefinito è **RBS_BANDBORDERS**, che visualizza le linee strette per separare le bande adiacenti sul controllo Rebar. Per un elenco di stili validi, vedere [stili di controllo Rebar](/windows/win32/Controls/rebar-control-styles) nella documentazione di Windows SDK.

*dwStyle*<br/>
in Stile della finestra del controllo Rebar. Per un elenco di stili validi, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*nID*<br/>
in ID della finestra figlio del controllo Rebar.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo Rebar è stato creato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcrebargetrebarctrl"></a><a name="getrebarctrl"></a> CMFCReBar:: GetReBarCtrl

Fornisce accesso diretto al `CReBarCtrl` controllo comune sottostante per `CMFCReBar` gli oggetti.

```
CReBarCtrl& GetReBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all' `CReBarCtrl` oggetto sottostante.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per sfruttare la funzionalità di controllo comune del rebar di Windows durante la personalizzazione del controllo Rebar.

## <a name="cmfcrebarcalcfixedlayout"></a><a name="calcfixedlayout"></a> CMFCReBar:: CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

in *bStretch*<br/>
in *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcrebarcanfloat"></a><a name="canfloat"></a> CMFCReBar:: CanFloat

```
virtual BOOL CanFloat() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcrebarenabledocking"></a><a name="enabledocking"></a> CMFCReBar:: EnableDocking

```cpp
void EnableDocking(DWORD dwDockStyle);
```

### <a name="parameters"></a>Parametri

in *dwDockStyle*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcrebargetrebarbandinfosize"></a><a name="getrebarbandinfosize"></a> CMFCReBar:: GetReBarBandInfoSize

```
UINT GetReBarBandInfoSize() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcrebaronshowcontrolbarmenu"></a><a name="onshowcontrolbarmenu"></a> CMFCReBar:: OnShowControlBarMenu

```
virtual BOOL OnShowControlBarMenu(CPoint);
```

### <a name="parameters"></a>Parametri

[in] *CPoint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcrebarontoolhittest"></a><a name="ontoolhittest"></a> CMFCReBar:: OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### <a name="parameters"></a>Parametri

in *punto* di<br/>
in *PTI*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcrebaronupdatecmdui"></a><a name="onupdatecmdui"></a> CMFCReBar:: OnUpdateCmdUI

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### <a name="parameters"></a>Parametri

in *PTarget*<br/>
in *bDisableIfNoHndler*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcrebarsetpanealignment"></a><a name="setpanealignment"></a> CMFCReBar:: SetPaneAlignment

```
virtual void SetPaneAlignment(DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

in *dwAlignment*<br/>

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CReBarCtrl](../../mfc/reference/crebarctrl-class.md)<br/>
[Classe CPane](../../mfc/reference/cpane-class.md)
