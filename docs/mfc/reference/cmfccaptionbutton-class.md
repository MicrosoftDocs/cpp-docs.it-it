---
title: Classe CMFCCaptionButton
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
ms.openlocfilehash: 4fa9d6a57cb2ee70e9da7853954241955d724a5c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50604291"
---
# <a name="cmfccaptionbutton-class"></a>Classe CMFCCaptionButton

Il `CMFCCaptionButton` classe implementa un pulsante che viene visualizzato nella barra del titolo per un riquadro ancorato o una finestra con mini-cornice. In genere, il framework crea automaticamente pulsanti della barra del titolo.

## <a name="syntax"></a>Sintassi

```
class CMFCCaptionButton : public CObject
```

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionButton::CMFCCaptionButton](#cmfccaptionbutton)|Costruisce un oggetto CMFCCaptionButton.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionButton::GetHit](#gethit)|Restituisce il comando rappresentato dal pulsante.|
|[CMFCCaptionButton::GetIconID](#geticonid)|Restituisce l'ID immagine associato al pulsante.|
|[CMFCCaptionButton::GetRect](#getrect)|Restituisce il rettangolo occupato dal pulsante.|
|[CMFCCaptionButton::GetSize](#getsize)|Restituisce la larghezza e altezza del pulsante.|
|[CMFCCaptionButton::IsMiniFrameButton](#isminiframebutton)|Indica se l'altezza della barra del titolo è impostata su dimensioni del mini.|
|[CMFCCaptionButton::Move](#move)|Imposta la posizione di disegno di pulsante e Mostra lo stato della finestra.|
|[CMFCCaptionButton::OnDraw](#ondraw)|Disegna il pulsante della didascalia.|
|[CMFCCaptionButton::SetMiniFrameButton](#setminiframebutton)|Imposta la dimensione minima della barra del titolo.|

## <a name="remarks"></a>Note

È possibile derivare una classe dalla classe [classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) e usare il metodo protetto, `AddButton`, per aggiungere pulsanti a una finestra con mini frame.

CPaneFrameWnd.h definisce gli ID di comando per due tipi di pulsanti di didascalia:

- AFX_CAPTION_BTN_PIN, che consente di visualizzare un pulsante del blocco quando il riquadro ancorato supporta la modalità Nascondi automaticamente.

- AFX_CAPTION_BTN_CLOSE, che visualizza un' **Chiudi** dopo che il riquadro può essere chiusa o nascosto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCCaptionButton` dell'oggetto e impostare la dimensione minima della barra del titolo.

[!code-cpp[NVC_MFC_RibbonApp#43](../../mfc/reference/codesnippet/cpp/cmfccaptionbutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCaptionButton](../../mfc/reference/cmfccaptionbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcaptionbutton.h

##  <a name="cmfccaptionbutton"></a>  CMFCCaptionButton::CMFCCaptionButton

Costruisce un oggetto `CMFCCaptionButton`.

```
CMFCCaptionButton();

CMFCCaptionButton(
    UINT nHit,
    BOOL bLeftAlign = FALSE);
```

### <a name="parameters"></a>Parametri

*nHit*<br/>
[in] Il comando associato al pulsante.

*bLeftAlign*<br/>
[in] Specifica se il pulsante è allineato a sinistra.

Nella tabella seguente sono elencati i valori possibili per il *nHit* parametro.

|Valore|Comando|
|-----------|-------------|
|AFX_HTCLOSE|Pulsante Chiudi.|
|HTMINBUTTON|Pulsante Riduci a icona.|
|HTMAXBUTTON|Pulsante di ingrandimento.|
|AFX_HTLEFTBUTTON|Pulsante freccia sinistra.|
|AFX_HTRIGHTBUTTON|Pulsante freccia destra.|
|AFX_HTMENU|Verso il basso sul pulsante di menu freccia.|
|HTNOWHERE|Il valore predefinito. non rappresenta nessun comando.|

### <a name="remarks"></a>Note

Per impostazione predefinita, i pulsanti di didascalia non sono associati a un comando.

Didascalia pulsanti sono allineati nel destra o sinistra.

##  <a name="gethit"></a>  CMFCCaptionButton::GetHit

Restituisce il comando rappresentato dal pulsante.

```
UINT GetHit() const;
```

### <a name="return-value"></a>Valore restituito

Il comando rappresentato dal pulsante.

La tabella seguente elenca i possibili valori restituiti.

|Valore|Comando|
|-----------|-------------|
|AFX_HTCLOSE|Pulsante Chiudi.|
|HTMINBUTTON|Pulsante Riduci a icona.|
|HTMAXBUTTON|Pulsante di ingrandimento.|
|AFX_HTLEFTBUTTON|Pulsante freccia sinistra.|
|AFX_HTRIGHTBUTTON|Pulsante freccia destra.|
|AFX_HTMENU|Verso il basso sul pulsante di menu freccia.|
|HTNOWHERE|Il valore predefinito. non rappresenta nessun comando.|

##  <a name="geticonid"></a>  CMFCCaptionButton::GetIconID

Restituisce l'ID immagine associato al pulsante.

```
virtual CMenuImages::IMAGES_IDS GetIconID(
    BOOL bHorz,
    BOOL bMaximized = FALSE) const;
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
[in] TRUE per ID; di immagini freccia sinistra o destra FALSE per verso l'alto o verso il basso gli ID immagine della freccia.

*bMaximized*<br/>
[in] TRUE per un ID di immagine di ingrandimento. FALSE per un ID di immagine Riduci a icona.

### <a name="return-value"></a>Valore restituito

L'ID immagine.

### <a name="remarks"></a>Note

I parametri specificano gli ID immagine per la riduzione a icona o ottimizzare i pulsanti di didascalia.

##  <a name="getrect"></a>  CMFCCaptionButton::GetRect

Restituisce il rettangolo occupato dal pulsante.

```
virtual CRect GetRect() const;
```

### <a name="return-value"></a>Valore restituito

Il rettangolo che rappresenta la posizione del pulsante.

### <a name="remarks"></a>Note

Se non è possibile visualizzare il pulsante, la dimensione restituita è 0.

##  <a name="getsize"></a>  CMFCCaptionButton::GetSize

Restituisce la larghezza e altezza del pulsante.

```
static CSize GetSize();
```

### <a name="return-value"></a>Valore restituito

Le dimensioni esterne del pulsante.

### <a name="remarks"></a>Note

Le dimensioni restituite includono bordo e il margine di pulsante.

##  <a name="isminiframebutton"></a>  CMFCCaptionButton::IsMiniFrameButton

Indica se l'altezza della barra del titolo è impostata su dimensioni del mini.

```
BOOL IsMiniFrameButton() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la didascalia è impostata su dimensioni del mini; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="move"></a>  CMFCCaptionButton::Move

Imposta la posizione di disegno di pulsante e Mostra lo stato della finestra.

```
void Move(
    const CPoint& ptTo,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

*ptTo*<br/>
[in] Nuova posizione.

*bHide*<br/>
[in] Indica se mostrare il pulsante.

##  <a name="ondraw"></a>  CMFCCaptionButton::OnDraw

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

*bActive*<br/>
[in] Indica se disegnare un'immagine del pulsante attivo.

*bHorz*<br/>
[in] Riservato per uso in una classe derivata.

*bMaximized*<br/>
[in] Indica se disegnare un'immagine del pulsante ingrandita.

*bDisattivato*<br/>
[in] Indica se disegnare un'immagine del pulsante abilitata.

### <a name="remarks"></a>Note

Il *bMaximized* parametro viene usato quando il pulsante è un Ingrandisci o pulsante Riduci a icona.

##  <a name="setminiframebutton"></a>  CMFCCaptionButton::SetMiniFrameButton

Imposta la dimensione minima della barra del titolo.

```
void SetMiniFramebutton(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bSet*<br/>
[in] TRUE per altezza della barra del titolo mini; FALSE per altezza della barra del titolo predefinito.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)
