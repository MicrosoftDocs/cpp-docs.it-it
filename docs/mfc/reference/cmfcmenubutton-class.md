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
ms.openlocfilehash: 929fc1c8166f249fe3babc724b2c0bcd9cb99676
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369680"
---
# <a name="cmfcmenubutton-class"></a>CMFCMenuButton (classe)

Pulsante che consente di visualizzare un menu di scelta rapida e segnala le selezioni di menu dell'utente.

## <a name="syntax"></a>Sintassi

```
class CMFCMenuButton : public CMFCButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuButton::CMFCMenuButton](#cmfcmenubutton)|Costruisce un oggetto `CMFCMenuButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuButton::PreTranslateMessage](#pretranslatemessage)|Chiamato dal framework per convertire i messaggi della finestra prima che vengano inviati. Esegue l'override di `CMFCButton::PreTranslateMessage`.|
|[CMFCMenuButton::SizeToContent](#sizetocontent)|Modifica le dimensioni del pulsante in base al testo e alle dimensioni dell'immagine.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuButton::m_bOSMenu](#m_bosmenu)|Specifica se visualizzare il menu a comparsa di sistema predefinito o se utilizzare [CContextMenuManager::TrackPopupMenu](../../mfc/reference/ccontextmenumanager-class.md#trackpopupmenu).|
|[CMFCMenuButton::m_bRightArrow](#m_brightarrow)|Specifica se il menu a comparsa verrà visualizzato sotto o a destra del pulsante.|
|[CMFCMenuButton::m_bStayPressed](#m_bstaypressed)|Specifica se il pulsante di menu ne modifica lo stato dopo che l'utente ha rilasciato il pulsante.|
|[CMFCMenuButton::m_hMenu](#m_hmenu)|Handle per il menu di Windows associato.|
|[CMFCMenuButton::m_nMenuResult](#m_nmenuresult)|Identificatore che indica l'elemento selezionato dall'utente dal menu a comparsa.|
|[CMFCMenuButton::m_bDefaultClick](#m_bdefaultclick)| Consenti elaborazione predefinita (su pulsante di testo/immagine).|

## <a name="remarks"></a>Osservazioni

La `CMFCMenuButton` classe è derivata dalla [classe CMFCButton](../../mfc/reference/cmfcbutton-class.md) che è, a sua volta, derivata dalla [classe CButton](../../mfc/reference/cbutton-class.md). Pertanto, è `CMFCMenuButton` possibile utilizzare nel codice `CButton`nello stesso modo in cui si utilizzerebbe .

Quando si `CMFCMenuButton`crea un oggetto , è necessario passare un handle al menu a comparsa associato. Chiamare quindi la `CMFCMenuButton::SizeToContent`funzione . `CMFCMenuButton::SizeToContent`controlla che la dimensione del pulsante sia sufficiente per includere una freccia che punti alla posizione in cui apparirà la finestra pop-up, vale a dire, sotto o a destra del pulsante.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare l'handle del menu associato al pulsante, ridimensionare il pulsante in base alle dimensioni del testo e dell'immagine e impostare il menu a comparsa visualizzato dal framework. Questo frammento di codice fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

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

**Intestazione:** afxmenubutton.h

## <a name="cmfcmenubuttoncmfcmenubutton"></a><a name="cmfcmenubutton"></a>CMFCMenuButton::CMFCMenuButton

Costruisce un nuovo [oggetto CMFCMenuButton.](../../mfc/reference/cmfcmenubutton-class.md)

```
CMFCMenuButton();
```

## <a name="cmfcmenubuttonm_bosmenu"></a><a name="m_bosmenu"></a>CMFCMenuButton::m_bOSMenu

Variabile membro booleana che indica il menu a comparsa visualizzato dal framework.

```
BOOL m_bOSMenu;
```

### <a name="remarks"></a>Osservazioni

Se `m_bOSMenu` è TRUE, il framework `TrackPopupMenu` chiama il metodo ereditato per questo oggetto. In caso contrario, il framework chiama [CContextMenuManager::TrackPopupMenu](../../mfc/reference/ccontextmenumanager-class.md#trackpopupmenu).

## <a name="cmfcmenubuttonm_brightarrow"></a><a name="m_brightarrow"></a>CMFCMenuButton::m_bRightArrow

Variabile membro booleana che indica la posizione del menu a comparsa.

```
BOOL m_bRightArrow;
```

### <a name="remarks"></a>Osservazioni

Quando l'utente preme il pulsante del menu, l'applicazione visualizza un menu a comparsa. Il framework visualizzerà il menu a comparsa sotto il pulsante o a destra del pulsante. Il pulsante ha anche una piccola freccia che indica dove apparirà il menu a comparsa. Se `m_bRightArrow` è TRUE, il framework visualizza il menu a comparsa a destra del pulsante. In caso contrario, viene visualizzato il menu a comparsa sotto il pulsante.

## <a name="cmfcmenubuttonm_bstaypressed"></a><a name="m_bstaypressed"></a>CMFCMenuButton::m_bStayPressed

Variabile membro booleana che indica se il pulsante di menu viene visualizzato premuto mentre l'utente effettua una selezione dal menu a comparsa.

```
BOOL m_bStayPressed;
```

### <a name="remarks"></a>Osservazioni

Se `m_bStayPressed` il membro è FALSE, il pulsante di menu non viene premuto quando l'utente fa clic sul pulsante. In questo caso, il framework visualizza solo il menu a comparsa.

Se `m_bStayPressed` il membro è TRUE, il pulsante di menu viene premuto quando l'utente fa clic sul pulsante. Rimane premuto fino a quando l'utente chiude il menu a comparsa, effettuando una selezione o annullando.

## <a name="cmfcmenubuttonm_hmenu"></a><a name="m_hmenu"></a>CMFCMenuButton::m_hMenu

Handle per il menu associato.

```
HMENU m_hMenu;
```

### <a name="remarks"></a>Osservazioni

Il framework visualizza il menu indicato da questa variabile membro quando l'utente fa clic sul pulsante di menu.

## <a name="cmfcmenubuttonm_nmenuresult"></a><a name="m_nmenuresult"></a>CMFCMenuButton::m_nMenuResult

Un numero intero che indica l'elemento selezionato dall'utente dal menu a comparsa.

```
int m_nMenuResult;
```

### <a name="remarks"></a>Osservazioni

Il valore di questa variabile membro è zero se l'utente annulla il menu senza effettuare una selezione o se si verifica un errore.

## <a name="cmfcmenubuttonm_bdefaultclick"></a><a name="m_bdefaultclick"></a>CMFCMenuButton::m_bDefaultClick

Consente l'elaborazione predefinita di testo o immagini sul pulsante.

```
BOOL  m_bDefaultClick;
```

### <a name="remarks"></a>Osservazioni

L'impostazione di m_bDefaultClick su false fa sì che il pulsante mostri il menu quando si fa clic in un punto qualsiasi del pulsante.

## <a name="cmfcmenubuttonm_nmenuresult"></a><a name="m_nmenuresult"></a>CMFCMenuButton::m_nMenuResult

Un numero intero che indica l'elemento selezionato dall'utente dal menu a comparsa.

```
int m_nMenuResult;
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubuttonpretranslatemessage"></a><a name="pretranslatemessage"></a>CMFCMenuButton::PreTranslateMessage

Chiamato dal framework per convertire i messaggi della finestra prima che vengano inviati.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
[in] Punta a una struttura [MSG](/windows/win32/api/winuser/ns-winuser-msg) che contiene il messaggio da elaborare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato tradotto e non deve essere inviato; 0 se il messaggio non è stato tradotto e deve essere inviato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubuttonsizetocontent"></a><a name="sizetocontent"></a>CMFCMenuButton::SizeToContent

Modifica le dimensioni del pulsante in base alle dimensioni del testo e all'immagine.

```
virtual CSize SizeToContent(BOOL bCalcOnly = FALSE);
```

### <a name="parameters"></a>Parametri

*bCalcolsolo*<br/>
[in] Parametro booleano che indica se questo metodo ridimensiona il pulsante .

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che specifica la nuova dimensione per il pulsante.

### <a name="remarks"></a>Osservazioni

Se si chiama questa funzione e `SizeToContent` *bCalcOnly* è TRUE, calcolerà solo la nuova dimensione del pulsante.

Le nuove dimensioni del pulsante vengono calcolate per adattarsi al testo, all'immagine e alla freccia del pulsante. Il framework aggiunge anche in margini predefiniti di 10 pixel per il bordo orizzontale e 5 pixel per il bordo verticale.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCButton (classe)](../../mfc/reference/cmfcbutton-class.md)
