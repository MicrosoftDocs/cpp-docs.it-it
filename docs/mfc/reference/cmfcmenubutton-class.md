---
title: CMFCMenuButton (classe)
ms.date: 07/15/2019
f1_keywords:
- CMFCMenuButton
- AFXMENUBUTTON/CMFCMenuButton
- AFXMENUBUTTON/CMFCMenuButton::CMFCMenuButton
- AFXMENUBUTTON/CMFCMenuButton::PreTranslateMessage
- AFXMENUBUTTON/CMFCMenuButton::SizeToContent
- AFXMENUBUTTON/CMFCMenuButton::m_bOSMenu
- AFXMENUBUTTON/CMFCMenuButton::m_bRightArrow
- AFXMENUBUTTON/CMFCMenuButton::m_bStayPressed
- AFXMENUBUTTON/CMFCMenuButton::m_hMenu
- AFXMENUBUTTON/CMFCMenuButton::m_nMenuResult
- AFXMENUBUTTON/CMFCMenuButton::m_bDefaultClick
helpviewer_keywords:
- CMFCMenuButton [MFC], CMFCMenuButton
- CMFCMenuButton [MFC], PreTranslateMessage
- CMFCMenuButton [MFC], SizeToContent
- CMFCMenuButton [MFC], m_bOSMenu
- CMFCMenuButton [MFC], m_bRightArrow
- CMFCMenuButton [MFC], m_bStayPressed
- CMFCMenuButton [MFC], m_hMenu
- CMFCMenuButton [MFC], m_nMenuResult
- CMFCMenuButton [MFC], m_bDefaultClick
ms.assetid: 53d3d459-1e5a-47c5-8b7f-2e61f6af5187
ms.openlocfilehash: 2f8ef341d7f460ed6b0ec23cb8a490842eb67cbc
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743269"
---
# <a name="cmfcmenubutton-class"></a>CMFCMenuButton (classe)

Pulsante che consente di visualizzare un menu di scelta rapida e segnala le selezioni di menu dell'utente.

## <a name="syntax"></a>Sintassi

```
class CMFCMenuButton : public CMFCButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuButton:: CMFCMenuButton](#cmfcmenubutton)|Costruisce un oggetto `CMFCMenuButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuButton::PreTranslateMessage](#pretranslatemessage)|Chiamata eseguita dal Framework per tradurre i messaggi della finestra prima che vengano inviati. Esegue l'override di `CMFCButton::PreTranslateMessage`.|
|[CMFCMenuButton:: SizeToContent](#sizetocontent)|Modifica le dimensioni del pulsante in base alle dimensioni del testo e dell'immagine.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuButton:: m_bOSMenu](#m_bosmenu)|Consente di specificare se visualizzare il menu di scelta rapida di sistema predefinito o di utilizzare [CContextMenuManager:: TrackPopupMenu](../../mfc/reference/ccontextmenumanager-class.md#trackpopupmenu).|
|[CMFCMenuButton:: m_bRightArrow](#m_brightarrow)|Specifica se il menu di scelta rapida verrà visualizzato sotto o a destra del pulsante.|
|[CMFCMenuButton:: m_bStayPressed](#m_bstaypressed)|Specifica se il pulsante di menu cambia il proprio stato dopo che l'utente rilascia il pulsante.|
|[CMFCMenuButton:: m_hMenu](#m_hmenu)|Handle per il menu di Windows collegato.|
|[CMFCMenuButton:: m_nMenuResult](#m_nmenuresult)|Identificatore che indica quale elemento selezionato dall'utente dal menu di scelta rapida.|
|[CMFCMenuButton:: m_bDefaultClick](#m_bdefaultclick)| Consente l'elaborazione predefinita (su testo/immagine del pulsante).|

## <a name="remarks"></a>Osservazioni

La `CMFCMenuButton` classe è derivata dalla [classe CMFCButton](../../mfc/reference/cmfcbutton-class.md) , che a sua volta deriva dalla classe [CButton](../../mfc/reference/cbutton-class.md). Pertanto, è possibile utilizzare `CMFCMenuButton` nel codice nello stesso modo in cui si utilizza `CButton` .

Quando si crea un oggetto `CMFCMenuButton` , è necessario passare un handle al menu popup associato. Successivamente, chiamare la funzione `CMFCMenuButton::SizeToContent` . `CMFCMenuButton::SizeToContent` Verifica che le dimensioni del pulsante siano sufficienti per includere una freccia che punta alla posizione in cui verrà visualizzata la finestra popup, ovvero sotto o a destra del pulsante.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare l'handle del menu collegato al pulsante, ridimensionare il pulsante in base alle dimensioni del testo e dell'immagine e impostare il menu popup visualizzato dal Framework. Questo frammento di codice fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#38](../../mfc/reference/codesnippet/cpp/cmfcmenubutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#39](../../mfc/reference/codesnippet/cpp/cmfcmenubutton-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

[CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmenubutton. h

## <a name="cmfcmenubuttoncmfcmenubutton"></a><a name="cmfcmenubutton"></a> CMFCMenuButton:: CMFCMenuButton

Costruisce un nuovo oggetto [CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md) .

```
CMFCMenuButton();
```

## <a name="cmfcmenubuttonm_bosmenu"></a><a name="m_bosmenu"></a> CMFCMenuButton:: m_bOSMenu

Variabile membro booleana che indica il menu popup visualizzato dal Framework.

```
BOOL m_bOSMenu;
```

### <a name="remarks"></a>Osservazioni

Se `m_bOSMenu` è true, il Framework chiama il `TrackPopupMenu` metodo ereditato per questo oggetto. In caso contrario, il Framework chiama [CContextMenuManager:: TrackPopupMenu](../../mfc/reference/ccontextmenumanager-class.md#trackpopupmenu).

## <a name="cmfcmenubuttonm_brightarrow"></a><a name="m_brightarrow"></a> CMFCMenuButton:: m_bRightArrow

Variabile membro booleana che indica la posizione del menu di scelta rapida.

```
BOOL m_bRightArrow;
```

### <a name="remarks"></a>Osservazioni

Quando l'utente preme il pulsante di menu, l'applicazione visualizza un menu a comparsa. Il Framework visualizzerà il menu a comparsa sotto il pulsante o a destra del pulsante. Il pulsante ha anche una piccola freccia che indica la posizione in cui verrà visualizzato il menu di scelta rapida. Se `m_bRightArrow` è true, il Framework Visualizza il menu a comparsa a destra del pulsante. In caso contrario, viene visualizzato il menu di scelta rapida sotto il pulsante.

## <a name="cmfcmenubuttonm_bstaypressed"></a><a name="m_bstaypressed"></a> CMFCMenuButton:: m_bStayPressed

Variabile membro booleana che indica se il pulsante di menu appare premuto mentre l'utente effettua una selezione dal menu a comparsa.

```
BOOL m_bStayPressed;
```

### <a name="remarks"></a>Osservazioni

Se il `m_bStayPressed` membro è false, il pulsante di menu non viene premuto quando utilizza il pulsante del mouse. In questo caso, il Framework Visualizza solo il menu a comparsa.

Se il `m_bStayPressed` membro è true, il pulsante di menu viene premuto quando l'utente fa clic sul pulsante. Rimane premuto fino a quando l'utente non chiude il menu popup, effettuando una selezione o l'annullamento.

## <a name="cmfcmenubuttonm_hmenu"></a><a name="m_hmenu"></a> CMFCMenuButton:: m_hMenu

Handle per il menu associato.

```
HMENU m_hMenu;
```

### <a name="remarks"></a>Osservazioni

Il Framework Visualizza il menu indicato da questa variabile membro quando l'utente fa clic sul pulsante di menu.

## <a name="cmfcmenubuttonm_nmenuresult"></a><a name="m_nmenuresult"></a> CMFCMenuButton:: m_nMenuResult

Intero che indica l'elemento selezionato dall'utente dal menu di scelta rapida.

```
int m_nMenuResult;
```

### <a name="remarks"></a>Osservazioni

Il valore di questa variabile membro è zero se l'utente annulla il menu senza effettuare una selezione o se si verifica un errore.

## <a name="cmfcmenubuttonm_bdefaultclick"></a><a name="m_bdefaultclick"></a> CMFCMenuButton:: m_bDefaultClick

Consente l'elaborazione predefinita di testo o immagini sul pulsante.

```
BOOL  m_bDefaultClick;
```

### <a name="remarks"></a>Osservazioni

Impostando m_bDefaultClick su false, il pulsante Visualizza il menu quando si fa clic in un punto qualsiasi del pulsante.

## <a name="cmfcmenubuttonpretranslatemessage"></a><a name="pretranslatemessage"></a> CMFCMenuButton::P reTranslateMessage

Chiamata eseguita dal Framework per tradurre i messaggi della finestra prima che vengano inviati.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
in Punta a una struttura [msg](/windows/win32/api/winuser/ns-winuser-msg) che contiene il messaggio da elaborare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato convertito e non deve essere inviato. 0 se il messaggio non è stato convertito e deve essere inviato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubuttonsizetocontent"></a><a name="sizetocontent"></a> CMFCMenuButton:: SizeToContent

Modifica le dimensioni del pulsante in base alle dimensioni del testo e alla dimensione dell'immagine.

```
virtual CSize SizeToContent(BOOL bCalcOnly = FALSE);
```

### <a name="parameters"></a>Parametri

*bCalcOnly*<br/>
in Parametro booleano che indica se questo metodo ridimensiona il pulsante.

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica le nuove dimensioni per il pulsante.

### <a name="remarks"></a>Osservazioni

Se si chiama questa funzione e *bCalcOnly* è true, `SizeToContent` calcolerà solo le nuove dimensioni del pulsante.

La nuova dimensione del pulsante viene calcolata per adattarsi al testo del pulsante, all'immagine e alla freccia. Il Framework aggiunge anche margini predefiniti di 10 pixel per il bordo orizzontale e 5 pixel per il bordo verticale.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCButton](../../mfc/reference/cmfcbutton-class.md)
