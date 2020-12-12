---
description: 'Altre informazioni su: classe CListView'
title: Classe CListView
ms.date: 11/04/2016
f1_keywords:
- CListView
- AFXCVIEW/CListView
- AFXCVIEW/CListView::CListView
- AFXCVIEW/CListView::GetListCtrl
- AFXCVIEW/CListView::RemoveImageList
helpviewer_keywords:
- CListView [MFC], CListView
- CListView [MFC], GetListCtrl
- CListView [MFC], RemoveImageList
ms.assetid: 7626bdb2-a1b8-4eab-b631-6743710a8432
ms.openlocfilehash: 5576a0997c84e8f5639911a1120a6645e720a7cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259565"
---
# <a name="clistview-class"></a>Classe CListView

Semplifica l'utilizzo del controllo elenco e di [CListCtrl](../../mfc/reference/clistctrl-class.md), la classe che incapsula la funzionalità di controllo elenco, con l'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CListView : public CCtrlView
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CListView:: CListView](#clistview)|Costruisce un oggetto `CListView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CListView:: GetListCtrl](#getlistctrl)|Restituisce il controllo elenco associato alla visualizzazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CListView:: RemoveImageList](#removeimagelist)|Rimuove l'elenco di immagini specificato dalla visualizzazione elenco.|

## <a name="remarks"></a>Commenti

Per ulteriori informazioni su questa architettura, vedere la panoramica della classe [CView](../../mfc/reference/cview-class.md) e i riferimenti incrociati citati.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CListView`

## <a name="requirements"></a>Requisiti

**Intestazione:** Afxcview. h

## <a name="clistviewclistview"></a><a name="clistview"></a> CListView:: CListView

Costruisce un oggetto `CListView`.

```
CListView();
```

## <a name="clistviewgetlistctrl"></a><a name="getlistctrl"></a> CListView:: GetListCtrl

Chiamare questa funzione membro per ottenere un riferimento al controllo elenco associato alla visualizzazione.

```
CListCtrl& GetListCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento al controllo elenco associato alla visualizzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCListView#7](../../atl/reference/codesnippet/cpp/clistview-class_1.cpp)]

## <a name="clistviewremoveimagelist"></a><a name="removeimagelist"></a> CListView:: RemoveImageList

Rimuove l'elenco di immagini specificato dalla visualizzazione elenco.

```cpp
void RemoveImageList(int nImageList);
```

### <a name="parameters"></a>Parametri

*nImageList*<br/>
Indice in base zero dell'immagine da rimuovere.

## <a name="see-also"></a>Vedi anche

[ROWLIST di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)
