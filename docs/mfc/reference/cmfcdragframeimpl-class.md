---
title: Classe CMFCDragFrameImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCDragFrameImpl
dev_langs:
- C++
helpviewer_keywords:
- CMFCDragFrameImpl class [MFC]
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8cf56cec1a9b09a9176577fa7fce58a853a1d3aa
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433998"
---
# <a name="cmfcdragframeimpl-class"></a>Classe CMFCDragFrameImpl

Il `CMFCDragFrameImpl` classe consente di disegnare il rettangolo di trascinamento visualizzato quando l'utente trascina un riquadro in modalità di ancoraggio standard.
Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCDragFrameImpl
```

## <a name="remarks"></a>Note

Un oggetto di questa classe viene incorporato in ogni [classe CPane](../../mfc/reference/cpane-class.md) oggetto. Di conseguenza, ogni riquadro che utilizza il `CanFloat` metodo visualizza un rettangolo di trascinamento quando l'utente trascina.

È possibile controllare lo spessore del rettangolo di trascinamento utilizzando [AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](afx-global-data-structure.md#m_ndragframethicknessfloat) e [AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](afx-global-data-structure.md#m_ndragframethicknessdock).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCDragFrameImpl](../../mfc/reference/cmfcdragframeimpl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdragframeimpl.h

##  <a name="enddrawdragframe"></a>  CMFCDragFrameImpl::EndDrawDragFrame


```
void EndDrawDragFrame(BOOL bClearInternalRects = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *bClearInternalRects*

### <a name="remarks"></a>Note

##  <a name="init"></a>  CMFCDragFrameImpl::Init


```
void Init(CWnd* pDraggedWnd);
```

### <a name="parameters"></a>Parametri

[in] *pDraggedWnd*

### <a name="remarks"></a>Note

##  <a name="movedragframe"></a>  CMFCDragFrameImpl::MoveDragFrame


```
void MoveDragFrame(BOOL bForceMove = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *bForceMove*

### <a name="remarks"></a>Note

##  <a name="placetabpredocking"></a>  CMFCDragFrameImpl::PlaceTabPreDocking


```
void PlaceTabPreDocking(
    CBaseTabbedPane* pTabbedBar,
    BOOL bFirstTime);

void PlaceTabPreDocking(CWnd* pCBarToPlaceOn);
```

### <a name="parameters"></a>Parametri

*pTabbedBar*<br/>
[in] [in] *bFirstTime* [in] *pCBarToPlaceOn*

### <a name="remarks"></a>Note

##  <a name="removetabpredocking"></a>  CMFCDragFrameImpl::RemoveTabPreDocking


```
void RemoveTabPreDocking(CDockablePane* pOldTargetBar = NULL);
```

### <a name="parameters"></a>Parametri

[in] *pOldTargetBar*

### <a name="remarks"></a>Note

##  <a name="resetstate"></a>  CMFCDragFrameImpl::ResetState


```
void ResetState();
```

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPane](../../mfc/reference/cpane-class.md)