---
title: Classe CMFCColorPickerCtrl
ms.date: 11/19/2018
f1_keywords:
- CMFCColorPickerCtrl
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::CMFCColorPickerCtrl
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetColor
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetHLS
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetHue
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetLuminance
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetSaturation
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SelectCellHexagon
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetColor
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetHLS
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetHue
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetLuminance
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetLuminanceBarWidth
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetOriginalColor
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetPalette
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetSaturation
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetType
- AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::DrawCursor
helpviewer_keywords:
- CMFCColorPickerCtrl [MFC], CMFCColorPickerCtrl
- CMFCColorPickerCtrl [MFC], GetColor
- CMFCColorPickerCtrl [MFC], GetHLS
- CMFCColorPickerCtrl [MFC], GetHue
- CMFCColorPickerCtrl [MFC], GetLuminance
- CMFCColorPickerCtrl [MFC], GetSaturation
- CMFCColorPickerCtrl [MFC], SelectCellHexagon
- CMFCColorPickerCtrl [MFC], SetColor
- CMFCColorPickerCtrl [MFC], SetHLS
- CMFCColorPickerCtrl [MFC], SetHue
- CMFCColorPickerCtrl [MFC], SetLuminance
- CMFCColorPickerCtrl [MFC], SetLuminanceBarWidth
- CMFCColorPickerCtrl [MFC], SetOriginalColor
- CMFCColorPickerCtrl [MFC], SetPalette
- CMFCColorPickerCtrl [MFC], SetSaturation
- CMFCColorPickerCtrl [MFC], SetType
- CMFCColorPickerCtrl [MFC], DrawCursor
ms.assetid: b9bbd03c-beb0-4b55-9765-9985fd05e5dc
ms.openlocfilehash: 1977717ee590acb63655ba21bfa5eb6bfe7c9bd8
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58772358"
---
# <a name="cmfccolorpickerctrl-class"></a>Classe CMFCColorPickerCtrl

Il `CMFCColorPickerCtrl` classe fornisce funzionalità per un controllo che consente di selezionare i colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorPickerCtrl : public CButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorPickerCtrl::CMFCColorPickerCtrl](#cmfccolorpickerctrl)|Costruisce un oggetto `CMFCColorPickerCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorPickerCtrl::GetColor](#getcolor)|Recupera il colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::GetHLS](#gethls)|Recupera i valori di tonalità, luminosità e saturazione del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::GetHue](#gethue)|Recupera il componente di tonalità del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::GetLuminance](#getluminance)|Recupera il componente di luminosità del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::GetSaturation](#getsaturation)|Recupera il componente di saturazione del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::SelectCellHexagon](#selectcellhexagon)|Imposta il colore corrente per il colore definito per i componenti di colore RGB specificati o esagono la cella specificata.|
|[CMFCColorPickerCtrl::SetColor](#setcolor)|Imposta il colore corrente sul valore di colore RGB specificato.|
|[CMFCColorPickerCtrl::SetHLS](#sethls)|Imposta il colore corrente sul valore di colore HLS specificato.|
|[CMFCColorPickerCtrl::SetHue](#sethue)|Modifica il componente di tonalità del colore attualmente selezionato.|
|[CMFCColorPickerCtrl::SetLuminance](#setluminance)|Modifica il componente di luminosità del colore attualmente selezionato.|
|[CMFCColorPickerCtrl::SetLuminanceBarWidth](#setluminancebarwidth)|Imposta la larghezza della barra di luminanza nel controllo di selezione colore.|
|[CMFCColorPickerCtrl::SetOriginalColor](#setoriginalcolor)|Imposta il colore iniziale selezionato.|
|[CMFCColorPickerCtrl::SetPalette](#setpalette)|Imposta la tavolozza dei colori corrente.|
|[CMFCColorPickerCtrl::SetSaturation](#setsaturation)|Modifica il componente di saturazione del colore attualmente selezionato.|
|[CMFCColorPickerCtrl::SetType](#settype)|Imposta il tipo di controllo di selezione di colore da visualizzare.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorPickerCtrl::DrawCursor](#drawcursor)|Chiamato dal framework prima che venga visualizzato un cursore che punta al colore selezionato.|

## <a name="remarks"></a>Note

Colori standard vengono selezionati da una tavolozza dei colori esagonale e colori personalizzati vengono selezionati da una barra di luminanza in cui i colori vengono specificati usando la notazione rosso/verde/blu o notation satuaration/tonalità/luminosità.

La figura seguente illustra diverse `CMFCColorPickerCtrl` oggetti.

![Finestra di dialogo di CMFCColorPickerCtrl](../../mfc/reference/media/colorpicker.png "nella finestra di dialogo di CMFCColorPickerCtrl")

Il `CMFCColorPickerCtrl` supporta due coppie di stili. Gli stili ESADECIMALE e HEX_GREYSCALE sono appropriati per la selezione dei colori standard. Gli stili di selezione e la LUMINANZA sono appropriati per la selezione di colore personalizzato.

Eseguire la procedura seguente per incorporare il `CMFCColorPickerCtrl` controllo nella finestra di dialogo:

1. Se si usa la **ClassWizard**, inserire un controllo pulsante di nuovo il modello di finestra di dialogo (perché il `CMFCColorPickerCtrl` classe viene ereditata dal `CButton` classe).

1. Inserire una variabile membro che è associata il controllo pulsante nuovo in una classe finestra di dialogo. Quindi modificare il tipo della variabile dal `CButton` a `CMFCColorPickerCtrl`.

1. Inserire il `WM_INITDIALOG` gestore di messaggi per la classe di finestra di dialogo. Nel gestore impostare il tipo, tavolozza e colore selezionato iniziale del `CMFCColorPickerCtrl` controllo.

## <a name="example"></a>Esempio

L'esempio seguente illustra come configurare un `CMFCColorPickerCtrl` oggetti utilizzando diversi metodi nel `CMFCColorPickerCtrl` classe. Nell'esempio viene illustrato come impostare il tipo di controllo di selezione e come impostare relativo colore, hue, luminosità e saturazione. L'esempio fa parte del [esempio di nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#4](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#5](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolorpickerctrl.h

##  <a name="cmfccolorpickerctrl"></a>  CMFCColorPickerCtrl::CMFCColorPickerCtrl

Costruisce un oggetto `CMFCColorPickerCtrl`.

```
CMFCColorPickerCtrl();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="drawcursor"></a>  CMFCColorPickerCtrl::DrawCursor

Chiamato dal framework prima che venga visualizzato un cursore che punta al colore selezionato.

```
virtual void DrawCursor(
    CDC* pDC,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*rect*<br/>
[in] Specifica un'area rettangolare intorno al colore selezionato.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo quando è necessario modificare la forma del cursore che punta al colore selezionato.

##  <a name="getcolor"></a>  CMFCColorPickerCtrl::GetColor

Recupera il colore selezionato dall'utente.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Il valore RGB del colore selezionato.

### <a name="remarks"></a>Note

##  <a name="gethls"></a>  CMFCColorPickerCtrl::GetHLS

Recupera i valori di tonalità, luminosità e saturazione del colore selezionato dall'utente.

```
void GetHLS(
    double* hue,
    double* luminance,
    double* saturation);
```

### <a name="parameters"></a>Parametri

*hue*<br/>
[out] Puntatore a una variabile di tipo valore double che riceve le informazioni di hue.

*luminance*<br/>
[out] Puntatore a una variabile di tipo valore double che riceve le informazioni di luminanza.

*saturation*<br/>
[out] Puntatore a una variabile di tipo valore double che riceve le informazioni di saturazione.

### <a name="remarks"></a>Note

##  <a name="gethue"></a>  CMFCColorPickerCtrl::GetHue

Recupera il componente di tonalità del colore selezionato dall'utente.

```
double GetHue() const;
```

### <a name="return-value"></a>Valore restituito

Il componente di tonalità del colore selezionato.

### <a name="remarks"></a>Note

##  <a name="getluminance"></a>  CMFCColorPickerCtrl::GetLuminance

Recupera il componente di luminosità del colore selezionato dall'utente.

```
double GetLuminance() const;
```

### <a name="return-value"></a>Valore restituito

Il componente della luminosità del colore selezionato.

### <a name="remarks"></a>Note

##  <a name="getsaturation"></a>  CMFCColorPickerCtrl::GetSaturation

Recupera il valore di saturazione del colore selezionato dall'utente.

```
double GetSaturation() const;
```

### <a name="return-value"></a>Valore restituito

Il componente di saturazione del colore selezionato.

### <a name="remarks"></a>Note

##  <a name="selectcellhexagon"></a>  CMFCColorPickerCtrl::SelectCellHexagon

Imposta il colore corrente per il colore definito per i componenti di colore RGB specificati o esagono la cella specificata.

```
void SelectCellHexagon(
    BYTE R,
    BYTE G,
    BYTE B);

BOOL SelectCellHexagon(
    int x,
    int y);
```

### <a name="parameters"></a>Parametri

*R*<br/>
[in] Il componente di colore rosso.

*G*<br/>
[in] Il componente di colore verde.

*B*<br/>
[in] Il componente di colore blu.

*x*<br/>
[in] La coordinata x del cursore, che fa riferimento a un esagono cella.

*y*<br/>
[in] La coordinata y del cursore, che fa riferimento a un esagono cella.

### <a name="return-value"></a>Valore restituito

Il secondo overload di questo metodo restituisce sempre FALSE.

### <a name="remarks"></a>Note

Il primo overload di questo metodo imposta corrente di colore al colore corrispondente per il controllo di selezione colore specificato del componenti di colore rosso, verde e blu.

Il secondo overload di questo metodo imposta il colore corrente al colore del esagono cella che fa riferimento per la posizione del cursore specificato.

##  <a name="setcolor"></a>  CMFCColorPickerCtrl::SetColor

Imposta il colore corrente sul valore di colore RGB specificato.

```
void SetColor(COLORREF Color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Un valore di colore RGB.

### <a name="remarks"></a>Note

##  <a name="sethls"></a>  CMFCColorPickerCtrl::SetHLS

Imposta il colore corrente sul valore di colore HLS specificato.

```
void SetHLS(
    double hue,
    double luminance,
    double saturation,
    BOOL bInvalidate=TRUE);
```

### <a name="parameters"></a>Parametri

*hue*<br/>
[in] Un valore di tonalità.

*luminance*<br/>
[in] Il valore di luminosità.

*saturation*<br/>
[in] Un valore di saturazione.

*bInvalidate*<br/>
[in] TRUE per forzare la finestra per aggiornare immediatamente il nuovo colore; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Note

##  <a name="sethue"></a>  CMFCColorPickerCtrl::SetHue

Consente di modificare la tonalità di colore attualmente selezionato.

```
void SetHue(double Hue);
```

### <a name="parameters"></a>Parametri

*Hue*<br/>
[in] Un valore di tonalità.

### <a name="remarks"></a>Note

##  <a name="setluminance"></a>  CMFCColorPickerCtrl::SetLuminance

Consente di modificare la luminosità del colore attualmente selezionato.

```
void SetLuminance(double Luminance);
```

### <a name="parameters"></a>Parametri

*Luminanza*<br/>
[in] Il valore di luminosità.

### <a name="remarks"></a>Note

##  <a name="setluminancebarwidth"></a>  CMFCColorPickerCtrl::SetLuminanceBarWidth

Imposta la larghezza della barra di luminanza nel controllo di selezione colore.

```
void SetLuminanceBarWidth(int w);
```

### <a name="parameters"></a>Parametri

*w*<br/>
[in] La larghezza della barra di luminanza misurato in pixel.

### <a name="remarks"></a>Note

Usare questo metodo per ridimensionare la barra di luminanza, che è attivata il **personalizzato** scheda della finestra di controllo di selezione colore. Il *w* parametro specifica la nuova larghezza della barra di luminanza. Il valore della larghezza viene ignorato se supera i tre quarti di larghezza dell'area client.

##  <a name="setoriginalcolor"></a>  CMFCColorPickerCtrl::SetOriginalColor

Imposta il colore iniziale selezionato.

```
void SetOriginalColor(COLORREF ref);
```

### <a name="parameters"></a>Parametri

*ref*<br/>
[in] Un valore di colore RGB.

### <a name="remarks"></a>Note

Chiamare questo metodo quando viene inizializzato il controllo di selezione colore.

##  <a name="setpalette"></a>  CMFCColorPickerCtrl::SetPalette

Imposta la tavolozza dei colori corrente.

```
void SetPalette(CPalette* pPalette);
```

### <a name="parameters"></a>Parametri

*pPalette*<br/>
[in] Puntatore a una tavolozza dei colori.

### <a name="remarks"></a>Note

La tavolozza dei colori definisce la matrice di colori che viene visualizzata nel controllo di selezione colore.

##  <a name="setsaturation"></a>  CMFCColorPickerCtrl::SetSaturation

Modifica la saturazione del colore attualmente selezionato.

```
void SetSaturation(double Saturation);
```

### <a name="parameters"></a>Parametri

*Saturazione*<br/>
[in] Un valore di saturazione.

### <a name="remarks"></a>Note

##  <a name="settype"></a>  CMFCColorPickerCtrl::SetType

Imposta il tipo di controllo di selezione di colore da visualizzare.

```
void SetType(COLORTYPE colorType);
```

### <a name="parameters"></a>Parametri

*colorType*<br/>
[in] Un tipo di controllo di selezione colore.

I tipi sono definiti mediante il `CMFCColorPickerCtrl::COLORTYPE` enumerazione. I tipi possibili sono LUMINANZA, selezione, HEX_GREYSCALE ed ESADECIMALE. Il tipo predefinito è di selezione.

### <a name="remarks"></a>Note

Per specificare un tipo di controllo di selezione dei colori, chiamare questo metodo prima della creazione del controllo di Windows.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)
