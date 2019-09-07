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
ms.openlocfilehash: 8eab2ddfc778900b53d77105f1d8215a2c095e9f
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70741565"
---
# <a name="coleipframewnd-class"></a>Classe COleIPFrameWnd

Base per la finestra di modifica sul posto dell'applicazione.

## <a name="syntax"></a>Sintassi

```
class COleIPFrameWnd : public CFrameWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleIPFrameWnd::COleIPFrameWnd](#coleipframewnd)|Costruisce un oggetto `COleIPFrameWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleIPFrameWnd::OnCreateControlBars](#oncreatecontrolbars)|Chiamata eseguita dal framework quando un elemento viene attivato per la modifica sul posto.|
|[COleIPFrameWnd::RepositionFrame](#repositionframe)|Chiamato dal Framework per riposizionare la finestra di modifica sul posto.|

## <a name="remarks"></a>Note

Questa classe crea e posiziona le barre di controllo all'interno della finestra del documento dell'applicazione contenitore. Gestisce inoltre le notifiche generate da un oggetto [COleResizeBar](../../mfc/reference/coleresizebar-class.md) incorporato quando l'utente ridimensiona la finestra di modifica sul posto.

Per ulteriori informazioni sull'utilizzo `COleIPFrameWnd`di, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`COleIPFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="coleipframewnd"></a>COleIPFrameWnd:: COleIPFrameWnd

Costruisce un `COleIPFrameWnd` oggetto e inizializza le informazioni sullo stato sul posto, archiviate in una struttura di tipo OLEINPLACEFRAMEINFO.

```
COleIPFrameWnd();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [OLEINPLACEFRAMEINFO](/windows/win32/api/oleidl/ns-oleidl-oleinplaceframeinfo) nel Windows SDK.

##  <a name="oncreatecontrolbars"></a>COleIPFrameWnd:: OnCreateControlBars

Il Framework chiama la `OnCreateControlBars` funzione quando un elemento viene attivato per la modifica sul posto.

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
Puntatore alla finestra a livello di documento del contenitore. Può essere NULL se il contenitore è un'applicazione SDI.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire qualsiasi elaborazione speciale necessaria quando vengono create le barre di controllo.

##  <a name="repositionframe"></a>COleIPFrameWnd:: RepositionFrame

Il Framework chiama la `RepositionFrame` funzione membro per disporre le barre di controllo e riposizionare la finestra di modifica sul posto in modo che sia visibile.

```
virtual void RepositionFrame(
    LPCRECT lpPosRect,
    LPCRECT lpClipRect);
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a una `RECT` struttura o a `CRect` un oggetto contenente le coordinate della posizione corrente della finestra cornice sul posto, in pixel, rispetto all'area client.

*lpClipRect*<br/>
Puntatore a una `RECT` struttura o a `CRect` un oggetto che contiene le coordinate del rettangolo di ritaglio corrente della finestra cornice sul posto, in pixel, rispetto all'area client.

### <a name="remarks"></a>Note

Il layout delle barre di controllo nella finestra del contenitore è diverso da quello eseguito da una finestra cornice non OLE. La finestra cornice non OLE calcola le posizioni delle barre di controllo e di altri oggetti da una determinata dimensione della finestra cornice, come in una chiamata a [CFrameWnd:: RecalcLayout](../../mfc/reference/cframewnd-class.md#recalclayout). L'area client rimane invariata dopo la sottrazione dello spazio per le barre di controllo e altri oggetti. Una `COleIPFrameWnd` finestra, d'altra parte, posiziona le barre degli strumenti in base a una determinata area client. In altre parole, `CFrameWnd::RecalcLayout` funziona "dall'esterno del," mentre `COleIPFrameWnd::RepositionFrame` funziona "dall'interno verso l'esterno".

## <a name="see-also"></a>Vedere anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)
