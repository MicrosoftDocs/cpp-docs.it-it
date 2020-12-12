---
description: 'Altre informazioni su: classe CMFCDragFrameImpl'
title: Classe CMFCDragFrameImpl
ms.date: 10/18/2018
f1_keywords:
- CMFCDragFrameImpl
helpviewer_keywords:
- CMFCDragFrameImpl class [MFC]
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
ms.openlocfilehash: 9885b750ace86d11ca573f23c7ee1c03d8926921
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294054"
---
# <a name="cmfcdragframeimpl-class"></a>Classe CMFCDragFrameImpl

La `CMFCDragFrameImpl` classe disegna il rettangolo di trascinamento visualizzato quando l'utente trascina un riquadro nella modalità di ancoraggio standard.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCDragFrameImpl
```

## <a name="remarks"></a>Osservazioni

Un oggetto di questa classe è incorporato in ogni oggetto della [classe CPane](../../mfc/reference/cpane-class.md) . Quindi, ogni riquadro che usa il `CanFloat` Metodo Visualizza un rettangolo di trascinamento quando viene trascinato dall'utente.

È possibile controllare lo spessore del rettangolo di trascinamento usando [AFX_GLOBAL_DATA:: m_nDragFrameThicknessFloat](afx-global-data-structure.md#m_ndragframethicknessfloat) e [AFX_GLOBAL_DATA:: m_nDragFrameThicknessDock](afx-global-data-structure.md#m_ndragframethicknessdock).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCDragFrameImpl](../../mfc/reference/cmfcdragframeimpl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdragframeimpl. h

## <a name="cmfcdragframeimplenddrawdragframe"></a><a name="enddrawdragframe"></a> CMFCDragFrameImpl:: EndDrawDragFrame

```cpp
void EndDrawDragFrame(BOOL bClearInternalRects = TRUE);
```

### <a name="parameters"></a>Parametri

in *bClearInternalRects*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdragframeimplinit"></a><a name="init"></a> CMFCDragFrameImpl:: init

```cpp
void Init(CWnd* pDraggedWnd);
```

### <a name="parameters"></a>Parametri

in *pDraggedWnd*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdragframeimplmovedragframe"></a><a name="movedragframe"></a> CMFCDragFrameImpl:: MoveDragFrame

```cpp
void MoveDragFrame(BOOL bForceMove = FALSE);
```

### <a name="parameters"></a>Parametri

in *bForceMove*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdragframeimplplacetabpredocking"></a><a name="placetabpredocking"></a> CMFCDragFrameImpl::P laceTabPreDocking

```cpp
void PlaceTabPreDocking(
    CBaseTabbedPane* pTabbedBar,
    BOOL bFirstTime);

void PlaceTabPreDocking(CWnd* pCBarToPlaceOn);
```

### <a name="parameters"></a>Parametri

in *pTabbedBar*<br/>

in *bFirstTime*<br/>

in *pCBarToPlaceOn*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdragframeimplremovetabpredocking"></a><a name="removetabpredocking"></a> CMFCDragFrameImpl:: RemoveTabPreDocking

```cpp
void RemoveTabPreDocking(CDockablePane* pOldTargetBar = NULL);
```

### <a name="parameters"></a>Parametri

in *pOldTargetBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdragframeimplresetstate"></a><a name="resetstate"></a> CMFCDragFrameImpl:: ResetState

```cpp
void ResetState();
```

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPane](../../mfc/reference/cpane-class.md)
