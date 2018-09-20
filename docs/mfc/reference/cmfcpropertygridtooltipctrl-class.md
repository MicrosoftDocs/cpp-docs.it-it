---
title: Classe CMFCPropertyGridToolTipCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyGridToolTipCtrl [MFC], CMFCPropertyGridToolTipCtrl
- CMFCPropertyGridToolTipCtrl [MFC], Create
- CMFCPropertyGridToolTipCtrl [MFC], Deactivate
- CMFCPropertyGridToolTipCtrl [MFC], GetLastRect
- CMFCPropertyGridToolTipCtrl [MFC], Hide
- CMFCPropertyGridToolTipCtrl [MFC], SetTextMargin
- CMFCPropertyGridToolTipCtrl [MFC], Track
ms.assetid: 84b436e5-6695-4da0-9569-1a875e087711
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ea84af41178316085a903d2663ded74ee57c99a1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46389746"
---
# <a name="cmfcpropertygridtooltipctrl-class"></a>Classe CMFCPropertyGridToolTipCtrl

Implementa una descrizione comando del controllo che il [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md) viene usato per visualizzare le descrizioni comandi.

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
|[CMFCPropertyGridToolTipCtrl::Create](#create)|Crea una finestra per il controllo tooltip.|
|[CMFCPropertyGridToolTipCtrl::Deactivate](#deactivate)|Disattiva e nasconde il controllo tooltip.|
|[CMFCPropertyGridToolTipCtrl::GetLastRect](#getlastrect)|Restituisce le coordinate dell'ultima posizione del controllo tooltip.|
|[CMFCPropertyGridToolTipCtrl::Hide](#hide)|Nasconde il controllo tooltip.|
|`CMFCPropertyGridToolTipCtrl::PreTranslateMessage`|Utilizzato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati al [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage) funzioni di Windows. Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCPropertyGridToolTipCtrl::SetTextMargin](#settextmargin)|Imposta la spaziatura tra il testo della descrizione comando e il bordo di finestra della descrizione comando.|
|[CMFCPropertyGridToolTipCtrl::Track](#track)|Visualizza il controllo tooltip.|

## <a name="remarks"></a>Note

Le descrizioni comandi vengono visualizzate quando il puntatore è posizionato su un nome di proprietà. Il [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md) classe visualizza una descrizione comando in modo che risulti facilmente leggibile dall'utente. In genere, la posizione di una descrizione comandi è determinata dalla posizione del puntatore. Utilizzando questa classe, la descrizione comando viene visualizzato sopra il nome della proprietà ed è simile all'estensione di proprietà naturale, in modo che il nome della proprietà è completamente visibile.

MFC crea questo controllo e lo Usa nella automaticamente il [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCPropertyGridToolTipCtrl` classe e su come visualizzare il controllo tooltip.

[!code-cpp[NVC_MFC_RibbonApp#23](../../mfc/reference/codesnippet/cpp/cmfcpropertygridtooltipctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridtooltipctrl.h

##  <a name="cmfcpropertygridtooltipctrl"></a>  CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl

Costruisce un oggetto `CMFCPropertyGridToolTipCtrl`.

```
CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl();
```

##  <a name="create"></a>  CMFCPropertyGridToolTipCtrl::Create

Crea una finestra per il controllo tooltip.

```
BOOL Create(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
[in] Puntatore alla finestra padre.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra è stata creata con successo; in caso contrario, FALSE.

##  <a name="deactivate"></a>  CMFCPropertyGridToolTipCtrl::Deactivate

Disattiva e nasconde il controllo tooltip.

```
void Deactivate();
```

### <a name="remarks"></a>Note

Questo metodo imposta la posizione e testo ultimo i valori vuoti, in modo che le chiamate successive al [CMFCPropertyGridToolTipCtrl::Track](#track) visualizzare la descrizione comando.

##  <a name="getlastrect"></a>  CMFCPropertyGridToolTipCtrl::GetLastRect

Restituisce le coordinate dell'ultima posizione del controllo tooltip.

```
void GetLastRect(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[out] Contiene l'ultima posizione del controllo tooltip.

##  <a name="hide"></a>  CMFCPropertyGridToolTipCtrl::Hide

Nasconde il controllo tooltip.

```
void Hide();
```

##  <a name="settextmargin"></a>  CMFCPropertyGridToolTipCtrl::SetTextMargin

Imposta la spaziatura tra il testo della descrizione comando e il bordo di finestra della descrizione comando.

```
void SetTextMargin(int nTextMargin);
```

### <a name="parameters"></a>Parametri

*nTextMargin*<br/>
[in] Specifica la spaziatura tra il bordo di finestra della descrizione comando e il testo del controllo tooltip. Il valore predefinito è 10 pixel.

##  <a name="track"></a>  CMFCPropertyGridToolTipCtrl::Track

Visualizza il controllo tooltip.

```
void Track(
    CRect rect,
    const CString& strText);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in] Specifica la posizione e dimensioni del controllo tooltip.

*strText*<br/>
[in] Specifica il testo da visualizzare nella descrizione comando.

### <a name="remarks"></a>Note

Questo metodo visualizza il controllo tooltip in posizione e dimensioni specificato dalla *rect*. Se la posizione, dimensione e testo non sono stati modificati dall'ultima volta in che questo metodo è stato chiamato, questo metodo non ha effetto.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
