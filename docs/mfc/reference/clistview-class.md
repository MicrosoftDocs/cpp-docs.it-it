---
title: CListView (classe)
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
ms.openlocfilehash: 698e37b2853a2ca3698ee0a426c8ded688c99c58
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58776622"
---
# <a name="clistview-class"></a>CListView (classe)

Semplifica l'uso del controllo di riepilogo e dei [CListCtrl](../../mfc/reference/clistctrl-class.md), la classe che incapsula la funzionalità del controllo elenco con l'architettura documento-visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CListView : public CCtrlView
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CListView::CListView](#clistview)|Costruisce un oggetto `CListView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CListView::GetListCtrl](#getlistctrl)|Restituisce il controllo elenco associato alla visualizzazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CListView::RemoveImageList](#removeimagelist)|Rimuove l'elenco di immagini specificato nella visualizzazione elenco.|

## <a name="remarks"></a>Note

Per altre informazioni su questa architettura, vedere la panoramica per il [CView](../../mfc/reference/cview-class.md) classe e i riferimenti incrociati citati non esiste.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CListView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcview.h

##  <a name="clistview"></a>  CListView::CListView

Costruisce un oggetto `CListView`.

```
CListView();
```

##  <a name="getlistctrl"></a>  CListView::GetListCtrl

Chiamare questa funzione membro per ottenere un riferimento al controllo elenco associato alla visualizzazione.

```
CListCtrl& GetListCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento al controllo elenco associato alla visualizzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCListView#7](../../atl/reference/codesnippet/cpp/clistview-class_1.cpp)]

##  <a name="removeimagelist"></a>  CListView::RemoveImageList

Rimuove l'elenco di immagini specificato nella visualizzazione elenco.

```
void RemoveImageList(int nImageList);
```

### <a name="parameters"></a>Parametri

*nImageList*<br/>
Indice a base zero dell'immagine da rimuovere.

## <a name="see-also"></a>Vedere anche

[Esempio MFC ROWLIST](../../overview/visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)
