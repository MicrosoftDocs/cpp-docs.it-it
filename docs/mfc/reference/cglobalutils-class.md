---
title: Classe CGlobalUtils
ms.date: 10/18/2018
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
ms.openlocfilehash: dbac56ea7efca98218133b23657f8508ea6bac28
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752913"
---
# <a name="cglobalutils-class"></a>Classe CGlobalUtils

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

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

## <a name="remarks"></a>Osservazioni

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CGlobalUtils](../../mfc/reference/cglobalutils-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxglobalutils.h

## <a name="cglobalutilsadjustrecttoworkarea"></a><a name="adjustrecttoworkarea"></a>CGlobalUtils::AdjustRectToWorkArea

```cpp
void AdjustRectToworkArea(
    CRect& rect,
    CRect* pRectDelta = NULL);
```

### <a name="parameters"></a>Parametri

[in, out] *rect*<br/>
[in] *pRectDelta*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilscalcexpecteddockedrect"></a><a name="calcexpecteddockedrect"></a>CGlobalUtils::CalcExpectedDockedRect

```cpp
void CalcExpectedDockedRect(
    CPaneContainerManager& barContainerManager,
    CWnd* pWndTodock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### <a name="parameters"></a>Parametri

[in] *BarContainerManager*<br/>

[in] *pWndTodock (in grado di essere insottuolo)*<br/>

[in] *PtMouse*<br/>

[fuori] *rectRisulta*<br/>

[fuori] *bDrawTab*<br/>

[fuori] *ppTargetBar (bar di applicazione)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilscanbeattached"></a><a name="canbeattached"></a>CGlobalUtils::CanBeAttached

```
BOOL CanBeAttached(CWnd* pWnd) const;
```

### <a name="parameters"></a>Parametri

[in] *pWnd (in questo* stato di windows<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilscanpanebeinfloatingmultipaneframewnd"></a><a name="canpanebeinfloatingmultipaneframewnd"></a>CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd

```
BOOL CanPaneBeInFloatingMultiPaneFrameWnd(CWnd* pWnd) const;
```

### <a name="parameters"></a>Parametri

[in] *pWnd (in questo* stato di windows<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilscheckalignment"></a><a name="checkalignment"></a>CGlobalUtils::CheckAlignment

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

[in] *punto*<br/>

[in] *pBar (Barra)*<br/>

[in] *nSensibilità*<br/>

[in] *pDockManager (gestione delle proprietà)*<br/>

[in] *bEdge*<br/>

[fuori] *dwAllineamento*<br/>

[in] *dwEnabledDockBar*<br/>

[in] *LpRectBounds (Limiti di lpRect)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilscyfromstring"></a><a name="cyfromstring"></a>CGlobalUtils::CyFromString

```
BOOL CyFromString(
    CY& cy,
    LPCTSTR psz);
```

### <a name="parameters"></a>Parametri

[fuori] *cy*<br/>

[in] *psz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsdecimalfromstring"></a><a name="decimalfromstring"></a>CGlobalUtils::DecimalFromString

```
BOOL DecimalFromString(
    DECIMAL& decimal,
    LPCTSTR psz);
```

### <a name="parameters"></a>Parametri

[fuori] *decimale*<br/>

[in] *psz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsfliprect"></a><a name="fliprect"></a>CGlobalUtils::FlipRect

```cpp
void FlipRect(
    CRect& rect,
    int nDegrees);
```

### <a name="parameters"></a>Parametri

[in, out] *rect*<br/>
[in] *nGradi*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsforceadjustlayout"></a><a name="forceadjustlayout"></a>CGlobalUtils::ForceAdjustLayout

```cpp
void ForceAdjustLayout(
    CDockingManager* pDockManager,
    BOOL bForce = FALSE,
    BOOL bForceInvisible = FALSE);
```

### <a name="parameters"></a>Parametri

[in, out] *pDockManager (gestione delle proprietà)*<br/>

[in] *bForza*<br/>

[in] *bForzainvisibile*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsgetdockingmanager"></a><a name="getdockingmanager"></a>CGlobalUtils::GetDockingManager

```
CDockingManager* GetDockingManager(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

[in] *pWnd (in questo* stato di windows<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsgetoppositealignment"></a><a name="getoppositealignment"></a>CGlobalUtils::GetOppositeAlignment

```
DWORD GetOppositeAlignment(DWORD dwAlign);
```

### <a name="parameters"></a>Parametri

[in] *dwAlign (informazioni in base al comint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsgetpaneandalignfrompoint"></a><a name="getpaneandalignfrompoint"></a>CGlobalUtils::GetPaneAndAlignFromPoint

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

[in] *BarContainerManager*<br/>

[in] *pt pt*<br/>

[fuori] *ppTargetControlBar (bardial' di controllo)*<br/>

[fuori] *dwAllineamento*<br/>

[fuori] *bTabArea*<br/>

[fuori] *bDidascalia*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsgetwndicon"></a><a name="getwndicon"></a>CGlobalUtils::GetWndIcon

```
HICON GetWndIcon(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

[in] *pWnd (in questo* stato di windows<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilssetnewparent"></a><a name="setnewparent"></a>CGlobalUtils::SetNewParent

```cpp
void SetNewParent(
    CObList& lstControlBars,
    CWnd* pNewParent,
    BOOL bCheckVisibility = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *lstControlBars*<br/>

[in] *pNewParent (informazioni in* due)<br/>

[in] *bCheckVisibility (Controllo)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsstringfromcy"></a><a name="stringfromcy"></a>CGlobalUtils::StringFromCy

```
BOOL StringFromCy(
    CString& str,
    CY& cy);
```

### <a name="parameters"></a>Parametri

[fuori] *str*<br/>

[in] *cy*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cglobalutilsstringfromdecimal"></a><a name="stringfromdecimal"></a>CGlobalUtils::StringFromDecimal

```
BOOL StringFromDecimal(
    CString& str,
    DECIMAL& decimal);
```

### <a name="parameters"></a>Parametri

[fuori] *str*<br/>

[in] *decimale*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
