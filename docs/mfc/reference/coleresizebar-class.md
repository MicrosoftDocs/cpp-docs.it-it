---
description: 'Altre informazioni su: classe COleResizeBar'
title: Classe COleResizeBar
ms.date: 11/04/2016
f1_keywords:
- COleResizeBar
- AFXOLE/COleResizeBar
- AFXOLE/COleResizeBar::COleResizeBar
- AFXOLE/COleResizeBar::Create
helpviewer_keywords:
- COleResizeBar [MFC], COleResizeBar
- COleResizeBar [MFC], Create
ms.assetid: 56a708d9-28c5-4eb0-9404-77b688d91c63
ms.openlocfilehash: bdd97e854257e2f858b52ed45f4066b26c71394d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226714"
---
# <a name="coleresizebar-class"></a>Classe COleResizeBar

Tipo di barra di controllo che supporta il ridimensionamento di elementi OLE sul posto.

## <a name="syntax"></a>Sintassi

```
class COleResizeBar : public CControlBar
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleResizeBar:: COleResizeBar](#coleresizebar)|Costruisce un oggetto `COleResizeBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleResizeBar:: create](#create)|Crea e Inizializza una finestra figlio di Windows e la associa all' `COleResizeBar` oggetto.|

## <a name="remarks"></a>Commenti

`COleResizeBar` gli oggetti vengono visualizzati come [CRectTracker](../../mfc/reference/crecttracker-class.md) con un bordo tratteggiato e un handle di ridimensionamento esterno.

`COleResizeBar` gli oggetti sono in genere membri incorporati di oggetti della finestra cornice derivati dalla classe [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md) .

Per ulteriori informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`COleResizeBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="coleresizebarcoleresizebar"></a><a name="coleresizebar"></a> COleResizeBar:: COleResizeBar

Costruisce un oggetto `COleResizeBar`.

```
COleResizeBar();
```

### <a name="remarks"></a>Commenti

Chiamare `Create` per creare l'oggetto della barra di ridimensionamento.

## <a name="coleresizebarcreate"></a><a name="create"></a> COleResizeBar:: create

Crea una finestra figlio e la associa all' `COleResizeBar` oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,
    UINT nID = AFX_IDW_RESIZE_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra padre della barra di ridimensionamento.

*dwStyle*<br/>
Specifica gli attributi di [stile della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) .

*nID*<br/>
ID della finestra figlio della barra di ridimensionamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata creata la barra di ridimensionamento. in caso contrario, 0.

## <a name="see-also"></a>Vedi anche

[SUPERPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)
