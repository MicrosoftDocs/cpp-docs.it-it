---
title: Classe CGlobalUtils | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CGlobalUtils
- AFXGLOBALUTILS/CGlobalUtils
- AFXGLOBALUTILS/CGlobalUtils::AdjustRectToWorkArea
- AFXGLOBALUTILS/CGlobalUtils::CalcExpectedDockedRect
- AFXGLOBALUTILS/CGlobalUtils::CanBeAttached
- AFXGLOBALUTILS/CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
- AFXGLOBALUTILS/CGlobalUtils::CheckAlignment
- AFXGLOBALUTILS/CGlobalUtils::CyFromString
- AFXGLOBALUTILS/CGlobalUtils::DecimalFromString
- AFXGLOBALUTILS/CGlobalUtils::FlipRect
- AFXGLOBALUTILS/CGlobalUtils::ForceAdjustLayout
- AFXGLOBALUTILS/CGlobalUtils::GetDockingManager
- AFXGLOBALUTILS/CGlobalUtils::GetOppositeAlignment
- AFXGLOBALUTILS/CGlobalUtils::GetPaneAndAlignFromPoint
- AFXGLOBALUTILS/CGlobalUtils::GetWndIcon
- AFXGLOBALUTILS/CGlobalUtils::SetNewParent
- AFXGLOBALUTILS/CGlobalUtils::StringFromCy
- AFXGLOBALUTILS/CGlobalUtils::StringFromDecimal
dev_langs:
- C++
helpviewer_keywords:
- CGlobalUtils [MFC], AdjustRectToWorkArea
- CGlobalUtils [MFC], CalcExpectedDockedRect
- CGlobalUtils [MFC], CanBeAttached
- CGlobalUtils [MFC], CanPaneBeInFloatingMultiPaneFrameWnd
- CGlobalUtils [MFC], CheckAlignment
- CGlobalUtils [MFC], CyFromString
- CGlobalUtils [MFC], DecimalFromString
- CGlobalUtils [MFC], FlipRect
- CGlobalUtils [MFC], ForceAdjustLayout
- CGlobalUtils [MFC], GetDockingManager
- CGlobalUtils [MFC], GetOppositeAlignment
- CGlobalUtils [MFC], GetPaneAndAlignFromPoint
- CGlobalUtils [MFC], GetWndIcon
- CGlobalUtils [MFC], SetNewParent
- CGlobalUtils [MFC], StringFromCy
- CGlobalUtils [MFC], StringFromDecimal
ms.assetid: 2c5bd1a6-f80c-4e79-a476-b4ceebabfb2f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 42436a885b194e0270bc9956514f4ff0de9c7461
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46445893"
---
# <a name="cglobalutils-class"></a>Classe CGlobalUtils

Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CGlobalUtils
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGlobalUtils::AdjustRectToWorkArea](#adjustrecttoworkarea)||
|[CGlobalUtils::CalcExpectedDockedRect](#calcexpecteddockedrect)||
|[CGlobalUtils::CanBeAttached](#canbeattached)||
|[CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd](#canpanebeinfloatingmultipaneframewnd)||
|[CGlobalUtils::CheckAlignment](#checkalignment)||
|[CGlobalUtils::CyFromString](#cyfromstring)||
|[CGlobalUtils::DecimalFromString](#decimalfromstring)||
|[CGlobalUtils::FlipRect](#fliprect)||
|[CGlobalUtils::ForceAdjustLayout](#forceadjustlayout)||
|[CGlobalUtils::GetDockingManager](#getdockingmanager)||
|[CGlobalUtils::GetOppositeAlignment](#getoppositealignment)||
|[CGlobalUtils::GetPaneAndAlignFromPoint](#getpaneandalignfrompoint)||
|[CGlobalUtils::GetWndIcon](#getwndicon)||
|[CGlobalUtils::SetNewParent](#setnewparent)||
|[CGlobalUtils::StringFromCy](#stringfromcy)||
|[CGlobalUtils::StringFromDecimal](#stringfromdecimal)||

## <a name="remarks"></a>Note

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CGlobalUtils](../../mfc/reference/cglobalutils-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxglobalutils. h

##  <a name="adjustrecttoworkarea"></a>  CGlobalUtils::AdjustRectToWorkArea

```
void AdjustRectToworkArea(
    CRect& rect,
    CRect* pRectDelta = NULL);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in, out] [in] *pRectDelta*

### <a name="remarks"></a>Note

##  <a name="calcexpecteddockedrect"></a>  CGlobalUtils::CalcExpectedDockedRect


```
void CalcExpectedDockedRect(
    CPaneContainerManager& barContainerManager,
    CWnd* pWndTodock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### <a name="parameters"></a>Parametri

*barContainerManager*<br/>
[in] [in] *pWndTodock*
*ptMouse*<br/>
[in] [out] *rectResult*
*bDrawTab*<br/>
[out] [out] *ppTargetBar*

### <a name="remarks"></a>Note

##  <a name="canbeattached"></a>  CGlobalUtils::CanBeAttached


```
BOOL CanBeAttached(CWnd* pWnd) const;
```

### <a name="parameters"></a>Parametri

[in] *pWnd*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="canpanebeinfloatingmultipaneframewnd"></a>  CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd


```
BOOL CanPaneBeInFloatingMultiPaneFrameWnd(CWnd* pWnd) const;
```

### <a name="parameters"></a>Parametri

[in] *pWnd*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="checkalignment"></a>  CGlobalUtils::CheckAlignment


```
BOOL CheckAlignment(
    CPoint point,
    CBasePane* pBar,
    int nSensitivity,
    const CDockingManager* pDockManager,
    BOOL bOuterEdge,
    DWORD& dwAlignment,
    DWORD dwEnabledDockBars = CBRS_ALIGN_ANY,
    LPCRECT lpRectBounds = NULL) const;
```

### <a name="parameters"></a>Parametri

*punto*<br/>
[in] [in] *pBar*
*nSensitivity*<br/>
[in] [in] *pDockManager*
*bOuterEdge*<br/>
[in] [out] *dwAlignment*
*dwEnabledDockBars*<br/>
[in] [in] *lpRectBounds*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="cyfromstring"></a>  CGlobalUtils::CyFromString


```
BOOL CyFromString(
    CY& cy,
    LPCTSTR psz);
```

### <a name="parameters"></a>Parametri

*CY*<br/>
[out] [in] *psz*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="decimalfromstring"></a>  CGlobalUtils::DecimalFromString


```
BOOL DecimalFromString(
    DECIMAL& decimal,
    LPCTSTR psz);
```

### <a name="parameters"></a>Parametri

*decimal*<br/>
[out] [in] *psz*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="fliprect"></a>  CGlobalUtils::FlipRect


```
void FlipRect(
    CRect& rect,
    int nDegrees);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in, out] [in] *nDegrees*

### <a name="remarks"></a>Note

##  <a name="forceadjustlayout"></a>  CGlobalUtils::ForceAdjustLayout


```
void ForceAdjustLayout(
    CDockingManager* pDockManager,
    BOOL bForce = FALSE,
    BOOL bForceInvisible = FALSE);
```

### <a name="parameters"></a>Parametri

*pDockManager*<br/>
[in, out] [in] *bForce* [in] *bForceInvisible*

### <a name="remarks"></a>Note

##  <a name="getdockingmanager"></a>  CGlobalUtils::GetDockingManager


```
CDockingManager* GetDockingManager(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

[in] *pWnd*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getoppositealignment"></a>  CGlobalUtils::GetOppositeAlignment


```
DWORD GetOppositeAlignment(DWORD dwAlign);
```

### <a name="parameters"></a>Parametri

[in] *dwAlign*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getpaneandalignfrompoint"></a>  CGlobalUtils::GetPaneAndAlignFromPoint


```
BOOL GetPaneAndAlignFromPoint(
    CPaneContainerManager& barContainerManager,
    CPoint pt,
    CDockablePane** ppTargetControlBar,
    DWORD& dwAlignment,
    BOOL& bTabArea,
    BOOL& bCaption);
```

### <a name="parameters"></a>Parametri

*barContainerManager*<br/>
[in] [in] *pt*
*ppTargetControlBar*<br/>
[out] [out] *dwAlignment*
*bTabArea*<br/>
[out] [out] *bCaption*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getwndicon"></a>  CGlobalUtils::GetWndIcon


```
HICON GetWndIcon(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

[in] *pWnd*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="setnewparent"></a>  CGlobalUtils::SetNewParent


```
void SetNewParent(
    CObList& lstControlBars,
    CWnd* pNewParent,
    BOOL bCheckVisibility = TRUE);
```

### <a name="parameters"></a>Parametri

*lstControlBars*<br/>
[in] [in] *pNewParent* [in] *bCheckVisibility*

### <a name="remarks"></a>Note

##  <a name="stringfromcy"></a>  CGlobalUtils::StringFromCy


```
BOOL StringFromCy(
    CString& str,
    CY& cy);
```

### <a name="parameters"></a>Parametri

*str*<br/>
[out] [in] *cy*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="stringfromdecimal"></a>  CGlobalUtils::StringFromDecimal


```
BOOL StringFromDecimal(
    CString& str,
    DECIMAL& decimal);
```

### <a name="parameters"></a>Parametri

*str*<br/>
[out] [in] *decimale*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
