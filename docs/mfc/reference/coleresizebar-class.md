---
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
ms.openlocfilehash: beb0c37b6ac23310b7d5c8506fbdaf677dd74d8d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376159"
---
# <a name="coleresizebar-class"></a>Classe COleResizeBar

Tipo di barra di controllo che supporta il ridimensionamento di elementi OLE sul posto.

## <a name="syntax"></a>Sintassi

```
class COleResizeBar : public CControlBar
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleResizeBar::COleResizeBar](#coleresizebar)|Costruisce un oggetto `COleResizeBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleResizeBar::Creare](#create)|Crea e inizializza una finestra figlio di `COleResizeBar` Windows e la associa all'oggetto.|

## <a name="remarks"></a>Osservazioni

`COleResizeBar`Gli oggetti vengono visualizzati come [CRectTracker](../../mfc/reference/crecttracker-class.md) con un bordo tratteggiato e quadratini di ridimensionamento esterni.

`COleResizeBar`gli oggetti sono in genere membri incorporati di oggetti finestra cornice derivati dalla [Classe COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md) .

Per ulteriori informazioni, vedere l'articolo [Attivazione](../../mfc/activation-cpp.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[Ccontrolbar](../../mfc/reference/ccontrolbar-class.md)

`COleResizeBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coleresizebarcoleresizebar"></a><a name="coleresizebar"></a>COleResizeBar::COleResizeBar

Costruisce un oggetto `COleResizeBar`.

```
COleResizeBar();
```

### <a name="remarks"></a>Osservazioni

Chiamare `Create` per creare l'oggetto barra di ridimensionamento.

## <a name="coleresizebarcreate"></a><a name="create"></a>COleResizeBar::Creare

Crea una finestra figlio e `COleResizeBar` la associa all'oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,
    UINT nID = AFX_IDW_RESIZE_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre della barra di ridimensionamento.

*DwStyle (in stile dwStyle)*<br/>
Specifica gli attributi di stile della [finestra.](../../mfc/reference/styles-used-by-mfc.md#window-styles)

*nID*<br/>
ID della finestra figlio della barra di ridimensionamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di ridimensionamento è stata creata; in caso contrario 0.

## <a name="see-also"></a>Vedere anche

[Esempio MFC SUPERPAD](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)
