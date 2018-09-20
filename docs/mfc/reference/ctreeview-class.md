---
title: Classe CTreeView | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CTreeView
- AFXCVIEW/CTreeView
- AFXCVIEW/CTreeView::CTreeView
- AFXCVIEW/CTreeView::GetTreeCtrl
dev_langs:
- C++
helpviewer_keywords:
- CTreeView [MFC], CTreeView
- CTreeView [MFC], GetTreeCtrl
ms.assetid: 5df583a6-d69f-42ca-9d8d-57e04558afff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a760e567718ad7a485ebe469903c7cbd566daccc
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46375398"
---
# <a name="ctreeview-class"></a>Classe CTreeView

Semplifica l'uso del controllo albero e dei [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), la classe che incapsula la funzionalità del controllo albero con l'architettura documento-visualizzazione di MFC.

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
|[CTreeView:: GetTreeCtrl](#gettreectrl)|Restituisce il controllo albero associato alla visualizzazione.|

## <a name="remarks"></a>Note

Per altre informazioni su questa architettura, vedere la panoramica per il [CView](../../mfc/reference/cview-class.md) classe e i riferimenti incrociati citati non esiste.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CTreeView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcview.h

##  <a name="ctreeview"></a>  CTreeView::CTreeView

Costruisce un oggetto `CTreeView`.

```
CTreeView();
```

##  <a name="gettreectrl"></a>  CTreeView:: GetTreeCtrl

Restituisce un riferimento al controllo albero associato alla visualizzazione.

```
CTreeCtrl& GetTreeCtrl() const;
```

## <a name="see-also"></a>Vedere anche

[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md)
