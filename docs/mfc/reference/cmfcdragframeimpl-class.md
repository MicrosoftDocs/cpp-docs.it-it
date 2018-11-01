---
title: Classe CMFCDragFrameImpl
ms.date: 10/18/2018
f1_keywords:
- CMFCDragFrameImpl
helpviewer_keywords:
- CMFCDragFrameImpl class [MFC]
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
ms.openlocfilehash: 2769b52e03d8d3de14fdbf431279dd9226323b0c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50640700"
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

[in] *bClearInternalRects*<br/>

### <a name="remarks"></a>Note

##  <a name="init"></a>  CMFCDragFrameImpl::Init

```
void Init(CWnd* pDraggedWnd);
```

### <a name="parameters"></a>Parametri

[in] *pDraggedWnd*<br/>

### <a name="remarks"></a>Note

##  <a name="movedragframe"></a>  CMFCDragFrameImpl::MoveDragFrame

```
void MoveDragFrame(BOOL bForceMove = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *bForceMove*<br/>

### <a name="remarks"></a>Note

##  <a name="placetabpredocking"></a>  CMFCDragFrameImpl::PlaceTabPreDocking

```
void PlaceTabPreDocking(
    CBaseTabbedPane* pTabbedBar,
    BOOL bFirstTime);

void PlaceTabPreDocking(CWnd* pCBarToPlaceOn);
```

### <a name="parameters"></a>Parametri

[in] *pTabbedBar*<br/>

[in] *bFirstTime*<br/>

[in] *pCBarToPlaceOn*<br/>

### <a name="remarks"></a>Note

##  <a name="removetabpredocking"></a>  CMFCDragFrameImpl::RemoveTabPreDocking

```
void RemoveTabPreDocking(CDockablePane* pOldTargetBar = NULL);
```

### <a name="parameters"></a>Parametri

[in] *pOldTargetBar*<br/>

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