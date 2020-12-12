---
description: 'Altre informazioni su: classe CMFCCaptionButton'
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
ms.openlocfilehash: 6c3c1cbeea4a548f2951276b3ad43cb598cf22a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327749"
---
# <a name="cmfccaptionbutton-class"></a>Classe CMFCCaptionButton

La `CMFCCaptionButton` classe implementa un pulsante visualizzato sulla barra del titolo per un riquadro ancorato o una finestra con mini-cornice. In genere, il framework crea automaticamente pulsanti della barra del titolo.

## <a name="syntax"></a>Sintassi

```
class CMFCCaptionButton : public CObject
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|Nome|Description|
|----------|-----------------|
|[CMFCCaptionButton:: CMFCCaptionButton](#cmfccaptionbutton)|Costruisce un oggetto CMFCCaptionButton.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCCaptionButton:: GetHit](#gethit)|Restituisce il comando rappresentato dal pulsante.|
|[CMFCCaptionButton:: GetIconID](#geticonid)|Restituisce l'ID immagine associato al pulsante.|
|[CMFCCaptionButton:: GetRect](#getrect)|Restituisce il rettangolo occupato dal pulsante.|
|[CMFCCaptionButton:: GetSize](#getsize)|Restituisce la larghezza e l'altezza del pulsante.|
|[CMFCCaptionButton:: IsMiniFrameButton](#isminiframebutton)|Indica se l'altezza della barra del titolo è impostata su mini dimensioni.|
|[CMFCCaptionButton:: Move](#move)|Imposta il percorso di estrazione del pulsante e lo stato di visualizzazione della finestra.|
|[CMFCCaptionButton:: onpare](#ondraw)|Disegna il pulsante della didascalia.|
|[CMFCCaptionButton:: SetMiniFrameButton](#setminiframebutton)|Imposta la dimensione minima della barra del titolo.|

## <a name="remarks"></a>Commenti

È possibile derivare una classe dalla [classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) e usare il metodo protetto, `AddButton` , per aggiungere pulsanti didascalia a una finestra con mini-cornice.

CPaneFrameWnd. h definisce gli ID comando per due tipi di pulsanti didascalia:

- AFX_CAPTION_BTN_PIN, che consente di visualizzare un pulsante pin quando il riquadro di ancoraggio supporta la modalità Nascondi automaticamente.

- AFX_CAPTION_BTN_CLOSE, che visualizza un pulsante **Chiudi** quando il riquadro può essere chiuso o nascosto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCCaptionButton` oggetto e impostare le dimensioni mini della barra del titolo.

[!code-cpp[NVC_MFC_RibbonApp#43](../../mfc/reference/codesnippet/cpp/cmfccaptionbutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCaptionButton](../../mfc/reference/cmfccaptionbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcaptionbutton. h

## <a name="cmfccaptionbuttoncmfccaptionbutton"></a><a name="cmfccaptionbutton"></a> CMFCCaptionButton:: CMFCCaptionButton

Costruisce un oggetto `CMFCCaptionButton`.

```
CMFCCaptionButton();

CMFCCaptionButton(
    UINT nHit,
    BOOL bLeftAlign = FALSE);
```

### <a name="parameters"></a>Parametri

*nHit*<br/>
in Comando associato al pulsante.

*bLeftAlign*<br/>
in Specifica se il pulsante è allineato a sinistra.

Nella tabella seguente sono elencati i valori possibili per il parametro *nHit* .

|Valore|Comando|
|-----------|-------------|
|AFX_HTCLOSE|Pulsante Chiudi.|
|HTMINBUTTON|Pulsante Riduci a icona.|
|HTMAXBUTTON|Pulsante Ingrandisci.|
|AFX_HTLEFTBUTTON|Pulsante freccia sinistra.|
|AFX_HTRIGHTBUTTON|Pulsante freccia destra.|
|AFX_HTMENU|Pulsante di menu freccia giù.|
|HTNOWHERE|Valore predefinito. non rappresenta alcun comando.|

### <a name="remarks"></a>Commenti

Per impostazione predefinita, i pulsanti didascalia non sono associati a un comando.

I pulsanti della didascalia sono allineati a destra o a sinistra.

## <a name="cmfccaptionbuttongethit"></a><a name="gethit"></a> CMFCCaptionButton:: GetHit

Restituisce il comando rappresentato dal pulsante.

```
UINT GetHit() const;
```

### <a name="return-value"></a>Valore restituito

Comando rappresentato dal pulsante.

Nella tabella seguente sono elencati i valori restituiti possibili.

|Valore|Comando|
|-----------|-------------|
|AFX_HTCLOSE|Pulsante Chiudi.|
|HTMINBUTTON|Pulsante Riduci a icona.|
|HTMAXBUTTON|Pulsante Ingrandisci.|
|AFX_HTLEFTBUTTON|Pulsante freccia sinistra.|
|AFX_HTRIGHTBUTTON|Pulsante freccia destra.|
|AFX_HTMENU|Pulsante di menu freccia giù.|
|HTNOWHERE|Valore predefinito. non rappresenta alcun comando.|

## <a name="cmfccaptionbuttongeticonid"></a><a name="geticonid"></a> CMFCCaptionButton:: GetIconID

Restituisce l'ID immagine associato al pulsante.

```
virtual CMenuImages::IMAGES_IDS GetIconID(
    BOOL bHorz,
    BOOL bMaximized = FALSE) const;
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
in TRUE per gli ID dell'immagine della freccia sinistra o destra; FALSE per gli ID dell'immagine della freccia verso l'alto o verso il basso.

*bMaximized*<br/>
in TRUE per un ID immagine ottimizzato; FALSE per un ID immagine ridotta a icona.

### <a name="return-value"></a>Valore restituito

ID immagine.

### <a name="remarks"></a>Commenti

I parametri specificano gli ID immagine per ridurre o ingrandire i pulsanti della didascalia.

## <a name="cmfccaptionbuttongetrect"></a><a name="getrect"></a> CMFCCaptionButton:: GetRect

Restituisce il rettangolo occupato dal pulsante.

```
virtual CRect GetRect() const;
```

### <a name="return-value"></a>Valore restituito

Rettangolo che rappresenta la posizione del pulsante.

### <a name="remarks"></a>Commenti

Se il pulsante non è visibile, le dimensioni restituite sono pari a 0.

## <a name="cmfccaptionbuttongetsize"></a><a name="getsize"></a> CMFCCaptionButton:: GetSize

Restituisce la larghezza e l'altezza del pulsante.

```
static CSize GetSize();
```

### <a name="return-value"></a>Valore restituito

Dimensioni esterne del pulsante.

### <a name="remarks"></a>Commenti

Le dimensioni restituite includono il margine e il bordo del pulsante.

## <a name="cmfccaptionbuttonisminiframebutton"></a><a name="isminiframebutton"></a> CMFCCaptionButton:: IsMiniFrameButton

Indica se l'altezza della barra del titolo è impostata su mini dimensioni.

```
BOOL IsMiniFrameButton() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la didascalia è impostata su mini dimensioni; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfccaptionbuttonmove"></a><a name="move"></a> CMFCCaptionButton:: Move

Imposta il percorso di estrazione del pulsante e lo stato di visualizzazione della finestra.

```cpp
void Move(
    const CPoint& ptTo,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

*ptTo*<br/>
in Nuova posizione.

*bHide*<br/>
in Indica se visualizzare il pulsante.

## <a name="cmfccaptionbuttonondraw"></a><a name="ondraw"></a> CMFCCaptionButton:: onpare

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
in Puntatore a un contesto di dispositivo per il pulsante.

*bActive*<br/>
in Indica se creare un'immagine del pulsante attivo.

*bHorz*<br/>
in Riservato per l'utilizzo in una classe derivata.

*bMaximized*<br/>
in Indica se creare un'immagine del pulsante ingrandita.

*bDisabled*<br/>
in Indica se creare un'immagine del pulsante abilitata.

### <a name="remarks"></a>Commenti

Il parametro *bMaximized* viene usato quando il pulsante è un pulsante Ingrandisci o Riduci a icona.

## <a name="cmfccaptionbuttonsetminiframebutton"></a><a name="setminiframebutton"></a> CMFCCaptionButton:: SetMiniFrameButton

Imposta la dimensione minima della barra del titolo.

```cpp
void SetMiniFramebutton(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bSet*<br/>
in TRUE per l'altezza della barra del titolo mini; FALSE per l'altezza predefinita della barra del titolo.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)
