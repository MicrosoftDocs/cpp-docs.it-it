---
description: 'Altre informazioni su: classe CTreeView'
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
ms.openlocfilehash: 3e50f912f03d5214e8ec238844b3288691a4f326
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318520"
---
# <a name="ctreeview-class"></a>Classe CTreeView

Semplifica l'uso del controllo albero e di [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), la classe che incapsula la funzionalità di controllo struttura ad albero, con l'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CTreeView : public CCtrlView
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CTreeView:: CTreeView](#ctreeview)|Costruisce un oggetto `CTreeView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTreeView:: GetTreeCtrl](#gettreectrl)|Restituisce il controllo albero associato alla visualizzazione.|

## <a name="remarks"></a>Commenti

Per ulteriori informazioni su questa architettura, vedere la panoramica della classe [CView](../../mfc/reference/cview-class.md) e i riferimenti incrociati citati.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CTreeView`

## <a name="requirements"></a>Requisiti

**Intestazione:** Afxcview. h

## <a name="ctreeviewctreeview"></a><a name="ctreeview"></a> CTreeView:: CTreeView

Costruisce un oggetto `CTreeView`.

```
CTreeView();
```

## <a name="ctreeviewgettreectrl"></a><a name="gettreectrl"></a> CTreeView:: GetTreeCtrl

Restituisce un riferimento al controllo struttura ad albero associato alla visualizzazione.

```
CTreeCtrl& GetTreeCtrl() const;
```

## <a name="see-also"></a>Vedi anche

[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md)
