---
title: Classe COleIPFrameWnd
ms.date: 11/04/2016
f1_keywords:
- COleIPFrameWnd
- AFXOLE/COleIPFrameWnd
- AFXOLE/COleIPFrameWnd::COleIPFrameWnd
- AFXOLE/COleIPFrameWnd::OnCreateControlBars
- AFXOLE/COleIPFrameWnd::RepositionFrame
helpviewer_keywords:
- COleIPFrameWnd [MFC], COleIPFrameWnd
- COleIPFrameWnd [MFC], OnCreateControlBars
- COleIPFrameWnd [MFC], RepositionFrame
ms.assetid: 24abb2cb-826c-4dda-a287-d8a8900a5763
ms.openlocfilehash: 34388e635ba89d732ae3993074a2c8268e2289a3
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58779612"
---
# <a name="coleipframewnd-class"></a>Classe COleIPFrameWnd

Base per la finestra di modifica sul posto dell'applicazione.

## <a name="syntax"></a>Sintassi

```
class COleIPFrameWnd : public CFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleIPFrameWnd::COleIPFrameWnd](#coleipframewnd)|Costruisce un oggetto `COleIPFrameWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleIPFrameWnd::OnCreateControlBars](#oncreatecontrolbars)|Chiamato dal framework quando un elemento viene attivato per la modifica sul posto.|
|[COleIPFrameWnd::RepositionFrame](#repositionframe)|Chiamato dal framework per riposizionare la finestra di modifica sul posto.|

## <a name="remarks"></a>Note

Questa classe crea e le posizioni delle barre nella finestra del documento dell'applicazione contenitore di controllo. Gestisce anche le notifiche generate da un embedded [COleResizeBar](../../mfc/reference/coleresizebar-class.md) quando l'utente ridimensiona la finestra di modifica sul posto dell'oggetto.

Per altre informazioni sull'uso `COleIPFrameWnd`, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`COleIPFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="coleipframewnd"></a>  COleIPFrameWnd::COleIPFrameWnd

Costruisce un `COleIPFrameWnd` dell'oggetto e inizializza le informazioni sullo stato sul posto, che viene archiviate in una struttura oleinplaceframeinfo che typu.

```
COleIPFrameWnd();
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [oleinplaceframeinfo che](/windows/desktop/api/oleidl/ns-oleidl-tagoifi) nel SDK di Windows.

##  <a name="oncreatecontrolbars"></a>  COleIPFrameWnd::OnCreateControlBars

Il framework chiama il `OnCreateControlBars` corretto quando un elemento viene attivato per la modifica sul posto.

```
virtual BOOL OnCreateControlBars(
    CWnd* pWndFrame,
    CWnd* pWndDoc);

virtual BOOL OnCreateControlBars(
    CFrameWnd* pWndFrame,
    CFrameWnd* pWndDoc);
```

### <a name="parameters"></a>Parametri

*pWndFrame*<br/>
Puntatore alla finestra cornice dell'applicazione contenitore.

*pWndDoc*<br/>
Puntatore alla finestra del contenitore a livello di documento. Può essere NULL se il contenitore è un'applicazione SDI.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione riesce; in caso contrario, 0.

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire qualsiasi elaborazione speciale necessario quando vengono create le barre di controllo.

##  <a name="repositionframe"></a>  COleIPFrameWnd::RepositionFrame

Il framework chiama il `RepositionFrame` funzione membro per definire il layout delle barre di controllo e il riposizionamento la finestra di modifica sul posto in modo che tutto è visibile.

```
virtual void RepositionFrame(
    LPCRECT lpPosRect,
    LPCRECT lpClipRect);
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a un `RECT` struttura o un `CRect` contenente finestra cornice posizione coordinate correnti della finestra, in pixel, relativo all'area client.

*lpClipRect*<br/>
Puntatore a un `RECT` struttura o un `CRect` contenente finestra cornice corrente rettangolo di ridimensionamento coordinate della finestra, in pixel, relativo all'area client.

### <a name="remarks"></a>Note

Layout delle barre di controllo nella finestra del contenitore è diverso da che eseguita da una finestra cornice non OLE. La finestra cornice non OLE calcola le posizioni delle barre di controllo e altri oggetti da una dimensione determinata frame-window, come in una chiamata a [RecalcLayout](../../mfc/reference/cframewnd-class.md#recalclayout). L'area client è ciò che rimane dopo che viene sottratto spazio per le barre di controllo e altri oggetti. Oggetto `COleIPFrameWnd` finestra, d'altra parte, posiziona le barre degli strumenti in conformità con un'area client specificato. In altre parole, `CFrameWnd::RecalcLayout` funziona "dall'esterno," mentre `COleIPFrameWnd::RepositionFrame` funziona "dall'interno verso l'esterno."

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)
