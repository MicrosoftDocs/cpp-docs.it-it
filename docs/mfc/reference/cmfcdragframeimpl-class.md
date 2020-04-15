---
title: CMFCDragFrameImpl (classe)
ms.date: 10/18/2018
f1_keywords:
- CMFCDragFrameImpl
helpviewer_keywords:
- CMFCDragFrameImpl class [MFC]
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
ms.openlocfilehash: a2f6f558d6b4452ca06429c7e3017b7c575c6676
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367555"
---
# <a name="cmfcdragframeimpl-class"></a>CMFCDragFrameImpl (classe)

La `CMFCDragFrameImpl` classe disegna il rettangolo di trascinamento che viene visualizzato quando l'utente trascina un riquadro nella modalità dock standard.
Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCDragFrameImpl
```

## <a name="remarks"></a>Osservazioni

Un oggetto di questa classe è incorporato in ogni [CPane Class](../../mfc/reference/cpane-class.md) oggetto. Pertanto, ogni riquadro che utilizza il `CanFloat` metodo visualizza un rettangolo di trascinamento quando l'utente lo trascina.

È possibile controllare lo spessore del rettangolo di trascinamento utilizzando [AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](afx-global-data-structure.md#m_ndragframethicknessfloat) e [AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](afx-global-data-structure.md#m_ndragframethicknessdock).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCDragFrameImpl](../../mfc/reference/cmfcdragframeimpl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdragframeimpl.h

## <a name="cmfcdragframeimplenddrawdragframe"></a><a name="enddrawdragframe"></a>CMFCDragFrameImpl::EndDrawDragFrame

```
void EndDrawDragFrame(BOOL bClearInternalRects = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *bClearInternalRects*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdragframeimplinit"></a><a name="init"></a>CMFCDragFrameImpl::Init

```
void Init(CWnd* pDraggedWnd);
```

### <a name="parameters"></a>Parametri

[in] *pDraggedWnd (in stato di insacito*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdragframeimplmovedragframe"></a><a name="movedragframe"></a>CMFCDragFrameImpl::MoveDragFrame

```
void MoveDragFrame(BOOL bForceMove = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *bForzaSpostare*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdragframeimplplacetabpredocking"></a><a name="placetabpredocking"></a>CMFCDragFrameImpl::PlaceTabPreDocking

```
void PlaceTabPreDocking(
    CBaseTabbedPane* pTabbedBar,
    BOOL bFirstTime);

void PlaceTabPreDocking(CWnd* pCBarToPlaceOn);
```

### <a name="parameters"></a>Parametri

[in] *pTabbedBar*<br/>

[in] *bPrimotempo*<br/>

[in] *pCBarToPlaceOn (informazioni in stato inbantto)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdragframeimplremovetabpredocking"></a><a name="removetabpredocking"></a>CMFCDragFrameImpl::RemoveTabPreDocking (CMFCDragFrameImpl::RemoveTabPreDocking)

```
void RemoveTabPreDocking(CDockablePane* pOldTargetBar = NULL);
```

### <a name="parameters"></a>Parametri

[in] *pOldTargetBar (oggetto di unoggetto*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdragframeimplresetstate"></a><a name="resetstate"></a>CMFCDragFrameImpl::ResetState

```
void ResetState();
```

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)
