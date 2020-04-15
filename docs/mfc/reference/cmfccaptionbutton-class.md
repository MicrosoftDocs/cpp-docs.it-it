---
title: CMFCCaptionButton (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCCaptionButton
- AFXCAPTIONBUTTON/CMFCCaptionButton
- AFXCAPTIONBUTTON/CMFCCaptionButton::CMFCCaptionButton
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetHit
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetIconID
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetRect
- AFXCAPTIONBUTTON/CMFCCaptionButton::GetSize
- AFXCAPTIONBUTTON/CMFCCaptionButton::IsMiniFrameButton
- AFXCAPTIONBUTTON/CMFCCaptionButton::Move
- AFXCAPTIONBUTTON/CMFCCaptionButton::OnDraw
- AFXCAPTIONBUTTON/CMFCCaptionButton::SetMiniFrameButton
helpviewer_keywords:
- CMFCCaptionButton [MFC], CMFCCaptionButton
- CMFCCaptionButton [MFC], GetHit
- CMFCCaptionButton [MFC], GetIconID
- CMFCCaptionButton [MFC], GetRect
- CMFCCaptionButton [MFC], GetSize
- CMFCCaptionButton [MFC], IsMiniFrameButton
- CMFCCaptionButton [MFC], Move
- CMFCCaptionButton [MFC], OnDraw
- CMFCCaptionButton [MFC], SetMiniFrameButton
ms.assetid: c5774b38-c0dd-414a-9ede-3b2f78f233ec
ms.openlocfilehash: fb47e4373bf53e66dd4af17c89fe2f761858fbfd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367750"
---
# <a name="cmfccaptionbutton-class"></a>CMFCCaptionButton (classe)

La `CMFCCaptionButton` classe implementa un pulsante visualizzato nella barra del titolo per un riquadro ancorato o una finestra cornice mini. In genere, il framework crea automaticamente pulsanti della barra del titolo.

## <a name="syntax"></a>Sintassi

```
class CMFCCaptionButton : public CObject
```

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionButton::CMFCCaptionButton](#cmfccaptionbutton)|Costruisce un CMFCCaptionButton oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionButton::GetHit](#gethit)|Restituisce il comando rappresentato dal pulsante.|
|[CMFCCaptionButton::GetIconID](#geticonid)|Restituisce l'ID immagine associato al pulsante.|
|[CMFCCaptionButton::GetRect](#getrect)|Restituisce il rettangolo occupato dal pulsante.|
|[CMFCCaptionButton::GetSize](#getsize)|Restituisce la larghezza e l'altezza del pulsante.|
|[CMFCCaptionButton::IsMiniFrameButton](#isminiframebutton)|Indica se l'altezza della barra del titolo è impostata su dimensioni ridotte.|
|[CMFCCaptionButton::Spostamento](#move)|Imposta la posizione di disegno del pulsante e lo stato di visualizzazione della finestra.|
|[CMFCCaptionButton::OnDraw](#ondraw)|Disegna il pulsante della didascalia.|
|[CMFCCaptionButton::SetMiniFrameButton](#setminiframebutton)|Imposta la dimensione mini della barra del titolo.|

## <a name="remarks"></a>Osservazioni

È possibile derivare una classe dalla [classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) e utilizzare il metodo protetto , `AddButton`per aggiungere pulsanti di didascalia a una finestra cornice mini.

CPaneFrameWnd.h definisce gli ID di comando per due tipi di pulsanti di didascalia:

- AFX_CAPTION_BTN_PIN, che visualizza un pulsante di spostamento quando il riquadro ancorato supporta la modalità Nascondi automaticamente.

- AFX_CAPTION_BTN_CLOSE, che visualizza un pulsante **Chiudi** quando il riquadro può essere chiuso o nascosto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene `CMFCCaptionButton` illustrato come costruire un oggetto e impostare le dimensioni mini della barra del titolo.

[!code-cpp[NVC_MFC_RibbonApp#43](../../mfc/reference/codesnippet/cpp/cmfccaptionbutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCaptionButton](../../mfc/reference/cmfccaptionbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcaptionbutton.h

## <a name="cmfccaptionbuttoncmfccaptionbutton"></a><a name="cmfccaptionbutton"></a>CMFCCaptionButton::CMFCCaptionButton

Costruisce un oggetto `CMFCCaptionButton`.

```
CMFCCaptionButton();

CMFCCaptionButton(
    UINT nHit,
    BOOL bLeftAlign = FALSE);
```

### <a name="parameters"></a>Parametri

*nHit (Hit)*<br/>
[in] Comando associato al pulsante.

*bLeftAlign*<br/>
[in] Specifica se il pulsante è allineato a sinistra.

Nella tabella seguente sono elencati i valori possibili per il parametro *nHit.*

|Valore|Comando|
|-----------|-------------|
|AFX_HTCLOSE|Pulsante Chiudi.|
|TASTO HTML|Pulsante Riduci a icona.|
|TASTO HTMAXBUTTON|Pulsante Ingrandisci.|
|AFX_HTLEFTBUTTON|Pulsante freccia SINISTRA.|
|AFX_HTRIGHTBUTTON|Pulsante freccia destra.|
|AFX_HTMENU|Pulsante del menu freccia giù.|
|HTNOWHERE|Il valore predefinito; rappresenta nessun comando.|

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, i pulsanti della didascalia non sono associati a un comando.

I pulsanti delle didascalie sono allineati a destra o a sinistra.

## <a name="cmfccaptionbuttongethit"></a><a name="gethit"></a>CMFCCaptionButton::GetHit

Restituisce il comando rappresentato dal pulsante.

```
UINT GetHit() const;
```

### <a name="return-value"></a>Valore restituito

Comando rappresentato dal pulsante.

Nella tabella seguente sono elencati i possibili valori restituiti.

|Valore|Comando|
|-----------|-------------|
|AFX_HTCLOSE|Pulsante Chiudi.|
|TASTO HTML|Pulsante Riduci a icona.|
|TASTO HTMAXBUTTON|Pulsante Ingrandisci.|
|AFX_HTLEFTBUTTON|Pulsante freccia SINISTRA.|
|AFX_HTRIGHTBUTTON|Pulsante freccia destra.|
|AFX_HTMENU|Pulsante del menu freccia giù.|
|HTNOWHERE|Il valore predefinito; rappresenta nessun comando.|

## <a name="cmfccaptionbuttongeticonid"></a><a name="geticonid"></a>CMFCCaptionButton::GetIconID

Restituisce l'ID immagine associato al pulsante.

```
virtual CMenuImages::IMAGES_IDS GetIconID(
    BOOL bHorz,
    BOOL bMaximized = FALSE) const;
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
[in] TRUE per gli URL dell'immagine con freccia sinistra o destra; FALSE per gli ID immagine freccia verso l'alto o verso il basso.

*bIngranditto*<br/>
[in] TRUE per un ID immagine di ingrandimento; FALSE per un ID immagine ridotto a icona.

### <a name="return-value"></a>Valore restituito

ID dell'immagine.

### <a name="remarks"></a>Osservazioni

I parametri specificano gli ID immagine per ridurre a icona o ingrandire i pulsanti della didascalia.

## <a name="cmfccaptionbuttongetrect"></a><a name="getrect"></a>CMFCCaptionButton::GetRect

Restituisce il rettangolo occupato dal pulsante.

```
virtual CRect GetRect() const;
```

### <a name="return-value"></a>Valore restituito

Rettangolo che rappresenta la posizione del pulsante.

### <a name="remarks"></a>Osservazioni

Se non è possibile visualizzare il pulsante, la dimensione restituita è 0.

## <a name="cmfccaptionbuttongetsize"></a><a name="getsize"></a>CMFCCaptionButton::GetSize

Restituisce la larghezza e l'altezza del pulsante.

```
static CSize GetSize();
```

### <a name="return-value"></a>Valore restituito

Dimensioni esterne del pulsante.

### <a name="remarks"></a>Osservazioni

La dimensione restituita include il margine e il bordo del pulsante.

## <a name="cmfccaptionbuttonisminiframebutton"></a><a name="isminiframebutton"></a>CMFCCaptionButton::IsMiniFrameButton

Indica se l'altezza della barra del titolo è impostata su dimensioni ridotte.

```
BOOL IsMiniFrameButton() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la didascalia è impostata su dimensioni ridotte; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccaptionbuttonmove"></a><a name="move"></a>CMFCCaptionButton::Spostamento

Imposta la posizione di disegno del pulsante e lo stato di visualizzazione della finestra.

```
void Move(
    const CPoint& ptTo,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

*ptTo*<br/>
[in] La nuova posizione.

*bHide*<br/>
[in] Se visualizzare il pulsante.

## <a name="cmfccaptionbuttonondraw"></a><a name="ondraw"></a>CMFCCaptionButton::OnDraw

Disegna il pulsante della didascalia.

```
virtual void OnDraw(
    CDC* pDC,
    BOOL bActive,
    BOOL bHorz = TRUE,
    BOOL bMaximized = TRUE,
    BOOL bDisabled = FALSE);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo per il pulsante.

*bAttivo*<br/>
[in] Se disegnare un'immagine del pulsante attivo.

*bHorz*<br/>
[in] Riservato per l'utilizzo in una classe derivata.

*bIngranditto*<br/>
[in] Se disegnare un'immagine del pulsante ingrandita.

*bDisabilitato*<br/>
[in] Se disegnare un'immagine del pulsante abilitato.

### <a name="remarks"></a>Osservazioni

Il *bMaximized* parametro viene utilizzato quando il pulsante è un pulsante di ingrandimento o riduzione a icona.

## <a name="cmfccaptionbuttonsetminiframebutton"></a><a name="setminiframebutton"></a>CMFCCaptionButton::SetMiniFrameButton

Imposta la dimensione mini della barra del titolo.

```
void SetMiniFramebutton(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bImpostazione*<br/>
[in] TRUE per l'altezza della barra del titolo mini; FALSE per l'altezza predefinita della barra del titolo.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
