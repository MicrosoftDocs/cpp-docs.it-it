---
title: CMFCPropertyGridToolTipCtrl (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Create
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Deactivate
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::GetLastRect
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Hide
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::SetTextMargin
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Track
helpviewer_keywords:
- CMFCPropertyGridToolTipCtrl [MFC], CMFCPropertyGridToolTipCtrl
- CMFCPropertyGridToolTipCtrl [MFC], Create
- CMFCPropertyGridToolTipCtrl [MFC], Deactivate
- CMFCPropertyGridToolTipCtrl [MFC], GetLastRect
- CMFCPropertyGridToolTipCtrl [MFC], Hide
- CMFCPropertyGridToolTipCtrl [MFC], SetTextMargin
- CMFCPropertyGridToolTipCtrl [MFC], Track
ms.assetid: 84b436e5-6695-4da0-9569-1a875e087711
ms.openlocfilehash: fc5d6d99c326fba7020e8c5040c3bf28d09f8f0a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754125"
---
# <a name="cmfcpropertygridtooltipctrl-class"></a>CMFCPropertyGridToolTipCtrl (classe)

Implementa un controllo descrizione comandi che il [CMFCPropertyGridCtrl classe](../../mfc/reference/cmfcpropertygridctrl-class.md) utilizza per visualizzare le descrizioni comandi.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridToolTipCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl](#cmfcpropertygridtooltipctrl)|Costruisce un oggetto `CMFCPropertyGridToolTipCtrl`.|
|`CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCPropertyGridToolTipCtrl::Create](#create)|Crea una finestra per il controllo descrizione comando.|
|[CMFCPropertyGridToolTipCtrl::Deattivazione](#deactivate)|Disattiva e nasconde il controllo descrizione comando.|
|[CMFCPropertyGridToolTipCtrl::GetLastRect](#getlastrect)|Restituisce le coordinate dell'ultima posizione del controllo descrizione comandi.|
|[CMFCPropertyGridToolTipCtrl::Hide](#hide)|Nasconde il controllo descrizione comando.|
|`CMFCPropertyGridToolTipCtrl::PreTranslateMessage`|Utilizzato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCPropertyGridToolTipCtrl::SetTextMargin](#settextmargin)|Imposta la spaziatura tra il testo della descrizione comando e il bordo della finestra della descrizione comandi.|
|[CMFCPropertyGridToolTipCtrl::Track](#track)|Visualizza il controllo descrizione comando.|

## <a name="remarks"></a>Osservazioni

Le descrizioni comandi vengono visualizzate quando il puntatore viene posizionato sul nome di una proprietà. Il [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md) classe visualizza una descrizione comando in modo che sia facilmente leggibile dall'utente. In genere, la posizione di una descrizione comandi è determinata dalla posizione del puntatore. Utilizzando questa classe, la descrizione comando viene visualizzata sopra il nome della proprietà ed è simile all'estensione della proprietà naturale, in modo che il nome della proprietà sia completamente visibile.

MFC crea automaticamente questo controllo e lo utilizza nella [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCPropertyGridToolTipCtrl` costruire un oggetto della classe e come visualizzare il controllo descrizione comandi.

[!code-cpp[NVC_MFC_RibbonApp#23](../../mfc/reference/codesnippet/cpp/cmfcpropertygridtooltipctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridtooltipctrl.h

## <a name="cmfcpropertygridtooltipctrlcmfcpropertygridtooltipctrl"></a><a name="cmfcpropertygridtooltipctrl"></a>CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl

Costruisce un oggetto `CMFCPropertyGridToolTipCtrl`.

```
CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl();
```

## <a name="cmfcpropertygridtooltipctrlcreate"></a><a name="create"></a>CMFCPropertyGridToolTipCtrl::Create

Crea una finestra per il controllo descrizione comando.

```
BOOL Create(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla finestra padre.

### <a name="return-value"></a>Valore restituito

TRUESe la finestra è stata creata correttamente. in caso contrario, FALSE.

## <a name="cmfcpropertygridtooltipctrldeactivate"></a><a name="deactivate"></a>CMFCPropertyGridToolTipCtrl::Deattivazione

Disattiva e nasconde il controllo descrizione comando.

```cpp
void Deactivate();
```

### <a name="remarks"></a>Osservazioni

Questo metodo imposta l'ultima posizione e il testo su valori vuoti, in modo che le chiamate future a [CMFCPropertyGridToolTipCtrl::Track](#track) visualizzare la descrizione comando.

## <a name="cmfcpropertygridtooltipctrlgetlastrect"></a><a name="getlastrect"></a>CMFCPropertyGridToolTipCtrl::GetLastRect

Restituisce le coordinate dell'ultima posizione del controllo descrizione comandi.

```cpp
void GetLastRect(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[fuori] Contiene l'ultima posizione del controllo descrizione comando.

## <a name="cmfcpropertygridtooltipctrlhide"></a><a name="hide"></a>CMFCPropertyGridToolTipCtrl::Hide

Nasconde il controllo descrizione comando.

```cpp
void Hide();
```

## <a name="cmfcpropertygridtooltipctrlsettextmargin"></a><a name="settextmargin"></a>CMFCPropertyGridToolTipCtrl::SetTextMargin

Imposta la spaziatura tra il testo della descrizione comando e il bordo della finestra della descrizione comandi.

```cpp
void SetTextMargin(int nTextMargin);
```

### <a name="parameters"></a>Parametri

*nTestoMargin*<br/>
[in] Specifica la spaziatura tra il testo del controllo descrizione comandi e il bordo della finestra della descrizione comandi. Il valore predefinito è 10 pixel.

## <a name="cmfcpropertygridtooltipctrltrack"></a><a name="track"></a>CMFCPropertyGridToolTipCtrl::Track

Visualizza il controllo descrizione comando.

```cpp
void Track(
    CRect rect,
    const CString& strText);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in] Specifica la posizione e le dimensioni del controllo descrizione comandi.

*strText (testo str)*<br/>
[in] Specifica il testo da visualizzare nella descrizione comando.

### <a name="remarks"></a>Osservazioni

Questo metodo visualizza il controllo descrizione comando nella posizione e nelle dimensioni specificate da *rect*. Se la posizione, le dimensioni e il testo non sono stati modificati dall'ultima volta che questo metodo è stato chiamato, questo metodo non ha alcun effetto.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
