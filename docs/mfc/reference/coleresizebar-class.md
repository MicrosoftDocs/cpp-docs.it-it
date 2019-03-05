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
ms.openlocfilehash: 631276a065652ec991c4c1b5264e87b7244fb7b9
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57275948"
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
|[COleResizeBar::Create](#create)|Crea e Inizializza una finestra figlia di Windows e la associa al `COleResizeBar` oggetto.|

## <a name="remarks"></a>Note

`COleResizeBar` gli oggetti vengono visualizzati come un [CRectTracker](../../mfc/reference/crecttracker-class.md) con un bordo tratteggiato e outer quadratini di ridimensionamento.

`COleResizeBar` gli oggetti sono in genere incorporato i membri del frame-window oggetti derivati dal [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md) classe.

Per altre informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`COleResizeBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="coleresizebar"></a>  COleResizeBar::COleResizeBar

Costruisce un oggetto `COleResizeBar`.

```
COleResizeBar();
```

### <a name="remarks"></a>Note

Chiamare `Create` per creare l'oggetto barra di ridimensionamento.

##  <a name="create"></a>  COleResizeBar::Create

Crea una finestra figlio e la associa il `COleResizeBar` oggetto.

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
Specifica la [styl okna](../../mfc/reference/styles-used-by-mfc.md#window-styles) attributi.

*nID*<br/>
ID di finestra figlio della barra di ridimensionamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di ridimensionamento è stata creata. in caso contrario 0.

## <a name="see-also"></a>Vedere anche

[MFC Sample SUPERPAD](../../visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)
