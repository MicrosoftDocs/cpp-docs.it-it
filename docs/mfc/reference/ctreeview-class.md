---
title: Classe CTreeView
ms.date: 11/04/2016
f1_keywords:
- CTreeView
- AFXCVIEW/CTreeView
- AFXCVIEW/CTreeView::CTreeView
- AFXCVIEW/CTreeView::GetTreeCtrl
helpviewer_keywords:
- CTreeView [MFC], CTreeView
- CTreeView [MFC], GetTreeCtrl
ms.assetid: 5df583a6-d69f-42ca-9d8d-57e04558afff
ms.openlocfilehash: 2ef93152c83d3bbec2b89ada0596ee612b24701b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373299"
---
# <a name="ctreeview-class"></a>Classe CTreeView

Semplifica l'utilizzo del controllo struttura ad albero e di [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), la classe che incapsula la funzionalità del controllo struttura ad albero, con l'architettura di visualizzazione documento di MFC.

## <a name="syntax"></a>Sintassi

```
class CTreeView : public CCtrlView
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTreeView::CTreeView](#ctreeview)|Costruisce un oggetto `CTreeView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTreeView::GetTreeCtrl](#gettreectrl)|Restituisce il controllo struttura ad albero associato alla visualizzazione.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni su questa architettura, vedere i cenni preliminari per la classe [CView](../../mfc/reference/cview-class.md) e i riferimenti incrociati citati.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CTreeView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcview.h

## <a name="ctreeviewctreeview"></a><a name="ctreeview"></a>CTreeView::CTreeView

Costruisce un oggetto `CTreeView`.

```
CTreeView();
```

## <a name="ctreeviewgettreectrl"></a><a name="gettreectrl"></a>CTreeView::GetTreeCtrl

Restituisce un riferimento al controllo struttura ad albero associato alla visualizzazione.

```
CTreeCtrl& GetTreeCtrl() const;
```

## <a name="see-also"></a>Vedere anche

[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)
