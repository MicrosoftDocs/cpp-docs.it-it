---
description: 'Altre informazioni su: classe CMFCPropertyGridToolTipCtrl'
title: Classe CMFCPropertyGridToolTipCtrl
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
ms.openlocfilehash: 5e560d09756be99c00257c351b58223b37a6b5da
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289881"
---
# <a name="cmfcpropertygridtooltipctrl-class"></a>Classe CMFCPropertyGridToolTipCtrl

Implementa un controllo ToolTip usato dalla [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md) per visualizzare le descrizioni comandi.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridToolTipCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|-|-|
|[CMFCPropertyGridToolTipCtrl:: CMFCPropertyGridToolTipCtrl](#cmfcpropertygridtooltipctrl)|Costruisce un oggetto `CMFCPropertyGridToolTipCtrl`.|
|`CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|-|-|
|[CMFCPropertyGridToolTipCtrl:: create](#create)|Crea una finestra per il controllo ToolTip.|
|[CMFCPropertyGridToolTipCtrl::D ttiva](#deactivate)|Disattiva e nasconde il controllo ToolTip.|
|[CMFCPropertyGridToolTipCtrl:: GetLastRect](#getlastrect)|Restituisce le coordinate dell'ultima posizione del controllo ToolTip.|
|[CMFCPropertyGridToolTipCtrl:: Hide](#hide)|Nasconde il controllo ToolTip.|
|`CMFCPropertyGridToolTipCtrl::PreTranslateMessage`|Usato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per tradurre i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCPropertyGridToolTipCtrl:: SetTextMargin](#settextmargin)|Imposta la spaziatura tra il testo della descrizione comando e il bordo della finestra della descrizione comando.|
|[CMFCPropertyGridToolTipCtrl:: Track](#track)|Visualizza il controllo ToolTip.|

## <a name="remarks"></a>Commenti

Le descrizioni comandi vengono visualizzate quando il puntatore viene posizionato su un nome di proprietà. La classe [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md) Visualizza una descrizione comando in modo che sia facilmente leggibile dall'utente. In genere, la posizione di una descrizione comando è determinata dalla posizione del puntatore. Utilizzando questa classe, la descrizione comando viene visualizzata sul nome della proprietà ed è simile all'estensione della proprietà naturale, in modo che il nome della proprietà sia completamente visibile.

MFC crea automaticamente questo controllo e lo usa nella [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCPropertyGridToolTipCtrl` classe e come visualizzare il controllo ToolTip.

[!code-cpp[NVC_MFC_RibbonApp#23](../../mfc/reference/codesnippet/cpp/cmfcpropertygridtooltipctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridtooltipctrl. h

## <a name="cmfcpropertygridtooltipctrlcmfcpropertygridtooltipctrl"></a><a name="cmfcpropertygridtooltipctrl"></a> CMFCPropertyGridToolTipCtrl:: CMFCPropertyGridToolTipCtrl

Costruisce un oggetto `CMFCPropertyGridToolTipCtrl`.

```
CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl();
```

## <a name="cmfcpropertygridtooltipctrlcreate"></a><a name="create"></a> CMFCPropertyGridToolTipCtrl:: create

Crea una finestra per il controllo ToolTip.

```
BOOL Create(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla finestra padre.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra è stata creata correttamente; in caso contrario, FALSE.

## <a name="cmfcpropertygridtooltipctrldeactivate"></a><a name="deactivate"></a> CMFCPropertyGridToolTipCtrl::D ttiva

Disattiva e nasconde il controllo ToolTip.

```cpp
void Deactivate();
```

### <a name="remarks"></a>Commenti

Questo metodo imposta l'ultima posizione e il testo su valori vuoti, in modo che le chiamate future a [CMFCPropertyGridToolTipCtrl:: Track](#track) visualizzino la descrizione comando.

## <a name="cmfcpropertygridtooltipctrlgetlastrect"></a><a name="getlastrect"></a> CMFCPropertyGridToolTipCtrl:: GetLastRect

Restituisce le coordinate dell'ultima posizione del controllo ToolTip.

```cpp
void GetLastRect(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
out Contiene l'ultima posizione del controllo ToolTip.

## <a name="cmfcpropertygridtooltipctrlhide"></a><a name="hide"></a> CMFCPropertyGridToolTipCtrl:: Hide

Nasconde il controllo ToolTip.

```cpp
void Hide();
```

## <a name="cmfcpropertygridtooltipctrlsettextmargin"></a><a name="settextmargin"></a> CMFCPropertyGridToolTipCtrl:: SetTextMargin

Imposta la spaziatura tra il testo della descrizione comando e il bordo della finestra della descrizione comando.

```cpp
void SetTextMargin(int nTextMargin);
```

### <a name="parameters"></a>Parametri

*nTextMargin*<br/>
in Specifica la spaziatura tra il testo del controllo ToolTip e il bordo della finestra della descrizione comando. Il valore predefinito è 10 pixel.

## <a name="cmfcpropertygridtooltipctrltrack"></a><a name="track"></a> CMFCPropertyGridToolTipCtrl:: Track

Visualizza il controllo ToolTip.

```cpp
void Track(
    CRect rect,
    const CString& strText);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Specifica la posizione e le dimensioni del controllo ToolTip.

*strText*<br/>
in Specifica il testo da visualizzare nella descrizione comando.

### <a name="remarks"></a>Commenti

Questo metodo Visualizza il controllo ToolTip in corrispondenza della posizione e delle dimensioni specificate da *Rect*. Se la posizione, le dimensioni e il testo non sono stati modificati dall'ultima volta in cui è stato chiamato il metodo, questo metodo non ha alcun effetto.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
