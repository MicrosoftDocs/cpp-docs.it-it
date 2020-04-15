---
title: Classe CMFCVisualManagerVS2005
ms.date: 11/04/2016
f1_keywords:
- CMFCVisualManagerVS2005
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetDockingTabsBordersSize
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetMDITabsBordersSize
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetPropertyGridGroupColor
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetTabFrameColors
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::HasOverlappedAutoHideButtons
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawAutoHideButtonBorder
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawCaptionButton
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawPaneCaption
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawSeparator
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawTab
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawToolBoxFrame
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnEraseTabsArea
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnFillAutoHideButtonBackground
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnFillHighlightedArea
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnFillMiniFrameCaption
- AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnUpdateSystemColors
helpviewer_keywords:
- CMFCVisualManagerVS2005 [MFC], GetDockingTabsBordersSize
- CMFCVisualManagerVS2005 [MFC], GetMDITabsBordersSize
- CMFCVisualManagerVS2005 [MFC], GetPropertyGridGroupColor
- CMFCVisualManagerVS2005 [MFC], GetTabFrameColors
- CMFCVisualManagerVS2005 [MFC], HasOverlappedAutoHideButtons
- CMFCVisualManagerVS2005 [MFC], OnDrawAutoHideButtonBorder
- CMFCVisualManagerVS2005 [MFC], OnDrawCaptionButton
- CMFCVisualManagerVS2005 [MFC], OnDrawPaneCaption
- CMFCVisualManagerVS2005 [MFC], OnDrawSeparator
- CMFCVisualManagerVS2005 [MFC], OnDrawTab
- CMFCVisualManagerVS2005 [MFC], OnDrawToolBoxFrame
- CMFCVisualManagerVS2005 [MFC], OnEraseTabsArea
- CMFCVisualManagerVS2005 [MFC], OnFillAutoHideButtonBackground
- CMFCVisualManagerVS2005 [MFC], OnFillHighlightedArea
- CMFCVisualManagerVS2005 [MFC], OnFillMiniFrameCaption
- CMFCVisualManagerVS2005 [MFC], OnUpdateSystemColors
ms.assetid: ea39b9ae-327e-4a51-bce7-dc84c78f005b
ms.openlocfilehash: b92077ecf4670dd5395296327c767ee3c7b848ba
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319912"
---
# <a name="cmfcvisualmanagervs2005-class"></a>Classe CMFCVisualManagerVS2005

`CMFCVisualManagerVS2005`conferisce a un'applicazione un aspetto di Microsoft Visual Studio 2005.

## <a name="syntax"></a>Sintassi

```
class CMFCVisualManagerVS2005 : public CMFCVisualManagerOffice2003
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCVisualManagerVS2005::GetDockingTabsBordersSize](#getdockingtabsborderssize)|Il framework chiama questo metodo quando disegna un riquadro ancorato e a schede. (Esegue l'override di [CMFCVisualManager::GetDockingTabsBordersSize](../../mfc/reference/cmfcvisualmanager-class.md#getdockingtabsborderssize).)|
|[CMFCVisualManagerVS2005::GetMDITabsBordersSize](#getmditabsborderssize)|Il framework chiama questo metodo per determinare la dimensione del bordo di una finestra MDITabs prima di disegnare la finestra. (Esegue l'override di [CMFCVisualManager::GetMDITabsBordersSize](../../mfc/reference/cmfcvisualmanager-class.md#getmditabsborderssize).)|
|[CMFCVisualManagerVS2005::GetPropertyGridGroupColor](#getpropertygridgroupcolor)|(Esegue l'override [di CMFCVisualManagerOffice2003::GetPropertyGridGroupColor](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#getpropertygridgroupcolor).)|
|[CMFCVisualManagerVS2005::GetTabFrameColors](#gettabframecolors)|(Esegue l'override di [CMFCVisualManagerOffice2003::GetTabFrameColors](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#gettabframecolors).)|
|[CMFCVisualManagerVS2005::HasOverlappedAutoHideButtons](#hasoverlappedautohidebuttons)|Restituisce un valore che indica se i pulsanti Nascondi automaticamente si sovrappongono nel gestore visualizzazione corrente. (Overrides [CMFCVisualManager::HasOverlappedAutoHideButtons](../../mfc/reference/cmfcvisualmanager-class.md#hasoverlappedautohidebuttons).)|
|[CMFCVisualManagerVS2005::OnDrawAutoHideButtonBorder](#ondrawautohidebuttonborder)|(Esegue l'override [di CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawautohidebuttonborder).)|
|[CMFCVisualManagerVS2005::OnDrawCaptionButton](#ondrawcaptionbutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawCaptionButton`.|
|[CMFCVisualManagerVS2005::DidascaliaDi22005::OnDrawPaneCaption](#ondrawpanecaption)|(Esegue l'override [di CMFCVisualManagerOffice2003::OnDrawPaneCaption](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawpanecaption).)|
|[CMFCVisualManagerVS2005::OnDrawSeparator](#ondrawseparator)|(Esegue l'override di [CMFCVisualManagerOffice2003::OnDrawSeparator](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawseparator).)|
|[CMFCVisualManagerVS2005::OnDrawTab](#ondrawtab)|(Esegue l'override di [CMFCVisualManagerOffice2003::OnDrawTab](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawtab).)|
|[CMFCVisualManagerVS2005::OnDrawToolBoxFrame](#ondrawtoolboxframe)|(Esegue l'override di [CMFCVisualManager::OnDrawToolBoxFrame.)](../../mfc/reference/cmfcvisualmanager-class.md#ondrawtoolboxframe)|
|[CMFCVisualManagerVS2005::OnEraseTabsArea](#onerasetabsarea)|(Esegue l'override [di CMFCVisualManagerOffice2003::OnEraseTabsArea](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onerasetabsarea).)|
|[CMFCVisualManagerVS2005::OnFillAutoHideButtonBackground](#onfillautohidebuttonbackground)|(Esegue l'override [di CMFCVisualManagerOffice2003::OnFillAutoHideButtonBackground](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onfillautohidebuttonbackground).)|
|[CMFCVisualManagerVS2005::OnFillHighlightedArea](#onfillhighlightedarea)|(Esegue l'override [di CMFCVisualManagerOffice2003::OnFillHighlightedArea](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onfillhighlightedarea).)|
|[CMFCVisualManagerVS2005::OnFillMiniFrameCaption](#onfillminiframecaption)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption`.|
|[CMFCVisualManagerVS2005::OnUpdateSystemColors](#onupdatesystemcolors)|(Esegue l'override di [CMFCVisualManagerOffice2003::OnUpdateSystemColors](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onupdatesystemcolors).)|

## <a name="remarks"></a>Osservazioni

Utilizzare la classe CMFCVisualManagerVS2005 per modificare l'aspetto visivo dell'applicazione in modo che sia simile a quello di Microsoft Visual Studio 2005.

Tutti i membri di questa classe sono funzioni virtuali derivate dal predecessore di questa classe, [Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il gestore visualizzazione VS 2005. Questo frammento di codice fa parte [dell'esempio Desktop Alert Demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#9](../../mfc/reference/codesnippet/cpp/cmfcvisualmanagervs2005-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)

[CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)

[CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)

[CMFCVisualManagerOffice2003](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)

[CMFCVisualManagerVS2005](../../mfc/reference/cmfcvisualmanagervs2005-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxvisualmanagervs2005.h

## <a name="cmfcvisualmanagervs2005getdockingtabsborderssize"></a><a name="getdockingtabsborderssize"></a>CMFCVisualManagerVS2005::GetDockingTabsBordersSize

```
virtual int GetDockingTabsBordersSize();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005getmditabsborderssize"></a><a name="getmditabsborderssize"></a>CMFCVisualManagerVS2005::GetMDITabsBordersSize

```
virtual int GetMDITabsBordersSize();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005getpropertygridgroupcolor"></a><a name="getpropertygridgroupcolor"></a>CMFCVisualManagerVS2005::GetPropertyGridGroupColor

```
virtual COLORREF GetPropertyGridGroupColor(CMFCPropertyGridCtrl* pPropList);
```

### <a name="parameters"></a>Parametri

[in] *pPropList (elenco di oggetti)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005gettabframecolors"></a><a name="gettabframecolors"></a>CMFCVisualManagerVS2005::GetTabFrameColors

```
virtual void GetTabFrameColors(
    const CMFCBaseTabCtrl* pTabWnd,
    COLORREF& clrDark,
    COLORREF& clrBlack,
    COLORREF& clrHighlight,
    COLORREF& clrFace,
    COLORREF& clrDarkShadow,
    COLORREF& clrLight,
    CBrush*& pbrFace,
    CBrush*& pbrBlack);
```

### <a name="parameters"></a>Parametri

[in] *pTabWnd (in cui* è stato sottolineato in questo>)<br/>
[in] *ClrDark (informazioni in* base al tramont<br/>
[in] *clrBlack (clrBlack)*<br/>
[in] *clrHighlight*<br/>
[in] *ClrFace*<br/>
[in] *ClrDarkShadow*<br/>
[in] *ClrLight*<br/>
[in] *pbrFace (pbrFace)*<br/>
[in] *pbrNero*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005hasoverlappedautohidebuttons"></a><a name="hasoverlappedautohidebuttons"></a>CMFCVisualManagerVS2005::HasOverlappedAutoHideButtons

```
virtual BOOL HasOverlappedAutoHideButtons() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005ondrawautohidebuttonborder"></a><a name="ondrawautohidebuttonborder"></a>CMFCVisualManagerVS2005::OnDrawAutoHideButtonBorder

```
virtual void OnDrawAutoHideButtonBorder(
    CDC* pDC,
    CRect rectBounds,
    CRect rectBorderSize,
    CMFCAutoHideButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *rectBounds (limiti di rettida)*<br/>
[in] *rectBorderSize (dimensioni di confine)*<br/>
[in] *pButton (Pulsante)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005ondrawcaptionbutton"></a><a name="ondrawcaptionbutton"></a>CMFCVisualManagerVS2005::OnDrawCaptionButton

```
virtual void OnDrawCaptionButton(
    CDC* pDC,
    CMFCCaptionButton* pButton,
    BOOL bActive,
    BOOL bHorz,
    BOOL bMaximized,
    BOOL bDisabled,
    int nImageID = -1);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *pButton (Pulsante)*<br/>
[in] *bAttivo*<br/>
[in] *bHorz*<br/>
[in] *bIngranditto*<br/>
[in] *bDisabilitato*<br/>
[in] *nImageID (ID immagine)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005ondrawpanecaption"></a><a name="ondrawpanecaption"></a>CMFCVisualManagerVS2005::DidascaliaDi22005::OnDrawPaneCaption

```
virtual COLORREF OnDrawPaneCaption(
    CDC* pDC,
    CDockablePane* pBar,
    BOOL bActive,
    CRect rectCaption,
    CRect rectButtons);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *pBar (Barra)*<br/>
[in] *bAttivo*<br/>
[in] *didascalia retta*<br/>
[in] *rectButton*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005ondrawseparator"></a><a name="ondrawseparator"></a>CMFCVisualManagerVS2005::OnDrawSeparator

```
virtual void OnDrawSeparator(
    CDC* pDC,
    CBasePane* pBar,
    CRect rect,
    BOOL bIsHoriz);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *pBar (Barra)*<br/>
[in] *rect*<br/>
[in] *bIsHoriz*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005ondrawtab"></a><a name="ondrawtab"></a>CMFCVisualManagerVS2005::OnDrawTab

```
virtual void OnDrawTab(
    CDC* pDC,
    CRect rectTab,
    int iTab,
    BOOL bIsActive,
    const CMFCBaseTabCtrl* pTabWnd);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *RectTab (scheda retta)*<br/>
[in] *iTab*<br/>
[in] *bIsAttivo*<br/>
[in] *pTabWnd (in cui* è stato sottolineato in questo>)<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005ondrawtoolboxframe"></a><a name="ondrawtoolboxframe"></a>CMFCVisualManagerVS2005::OnDrawToolBoxFrame

```
virtual void OnDrawToolBoxFrame(
    CDC* pDC,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *rect*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005onerasetabsarea"></a><a name="onerasetabsarea"></a>CMFCVisualManagerVS2005::OnEraseTabsArea

```
virtual void OnEraseTabsArea(
    CDC* pDC,
    CRect rect,
    const CMFCBaseTabCtrl* pTabWnd);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *pTabWnd (in cui* è stato sottolineato in questo>)<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005onfillautohidebuttonbackground"></a><a name="onfillautohidebuttonbackground"></a>CMFCVisualManagerVS2005::OnFillAutoHideButtonBackground

```
virtual void OnFillAutoHideButtonBackground(
    CDC* pDC,
    CRect rect,
    CMFCAutoHideButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *pButton (Pulsante)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005onfillhighlightedarea"></a><a name="onfillhighlightedarea"></a>CMFCVisualManagerVS2005::OnFillHighlightedArea

```
virtual void OnFillHighlightedArea(
    CDC* pDC,
    CRect rect,
    CBrush* pBrush,
    CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *pPennello*<br/>
[in] *pButton (Pulsante)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005onfillminiframecaption"></a><a name="onfillminiframecaption"></a>CMFCVisualManagerVS2005::OnFillMiniFrameCaption

```
virtual COLORREF OnFillMiniFrameCaption(
    CDC* pDC,
    CRect rectCaption,
    CPaneFrameWnd* pFrameWnd,
    BOOL bActive);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *didascalia retta*<br/>
[in] *pFrameWnd (inframe)*<br/>
[in] *bAttivo*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcvisualmanagervs2005onupdatesystemcolors"></a><a name="onupdatesystemcolors"></a>CMFCVisualManagerVS2005::OnUpdateSystemColors

```
virtual void OnUpdateSystemColors();
```

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCVisualManager (classe)](../../mfc/reference/cmfcvisualmanager-class.md)<br/>
[CMFCVisualManagerOfficeXP Classe](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)<br/>
[Classe CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)<br/>
[CMFCVisualManagerOffice2003 Classe](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)
