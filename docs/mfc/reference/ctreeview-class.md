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
ms.openlocfilehash: fec8379a3944d981672754274f50dd4e60f71b61
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78883993"
---
# <a name="ctreeview-class"></a>Classe CTreeView

Semplifica l'uso del controllo albero e di [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), la classe che incapsula la funzionalità di controllo struttura ad albero, con l'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CTreeView : public CCtrlView
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTreeView:: CTreeView](#ctreeview)|Costruisce un oggetto `CTreeView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTreeView:: GetTreeCtrl](#gettreectrl)|Restituisce il controllo albero associato alla visualizzazione.|

## <a name="remarks"></a>Osservazioni

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

##  <a name="ctreeview"></a>CTreeView:: CTreeView

Costruisce un oggetto `CTreeView`.

```
CTreeView();
```

##  <a name="gettreectrl"></a>CTreeView:: GetTreeCtrl

Restituisce un riferimento al controllo struttura ad albero associato alla visualizzazione.

```
CTreeCtrl& GetTreeCtrl() const;
```

## <a name="see-also"></a>Vedere anche

[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)
