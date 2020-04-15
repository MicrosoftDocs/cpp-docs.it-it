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
ms.openlocfilehash: c3c11db448ab31324367b7f314cd6bfe44c2e96d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367694"
---
# <a name="cmfccolorpickerctrl-class"></a>Classe CMFCColorPickerCtrl

La `CMFCColorPickerCtrl` classe fornisce funzionalità per un controllo utilizzato per selezionare i colori.

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
|[CMFCColorPickerCtrl::GetHLS](#gethls)|Recupera i valori di tonalità, luminanza e saturazione del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::GetHue](#gethue)|Recupera il componente tonalità del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::GetLuminance](#getluminance)|Recupera il componente di luminanza del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::GetSaturation](#getsaturation)|Recupera il componente di saturazione del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl::SelectCellHexagon](#selectcellhexagon)|Imposta il colore corrente sul colore definito dai componenti di colore RGB specificati o dall'esagono della cella specificato.|
|[CMFCColorPickerCtrl::SetColor](#setcolor)|Imposta il colore corrente sul valore di colore RGB specificato.|
|[CMFCColorPickerCtrl::SetHLS](#sethls)|Imposta il colore corrente sul valore di colore HLS specificato.|
|[CMFCColorPickerCtrl::SetHue](#sethue)|Modifica il componente tonalità del colore attualmente selezionato.|
|[CMFCColorPickerCtrl::SetLuminance](#setluminance)|Modifica il componente di luminanza del colore attualmente selezionato.|
|[CMFCColorPickerCtrl::SetLuminanceBarWidth](#setluminancebarwidth)|Imposta la larghezza della barra di luminanza nel controllo selezione colori.|
|[CMFCColorPickerCtrl::SetOriginalColor](#setoriginalcolor)|Imposta il colore selezionato iniziale.|
|[CMFCColorPickerCtrl::SetPalette](#setpalette)|Imposta la tavolozza dei colori corrente.|
|[CMFCColorPickerCtrl::SetSaturation (CMFCColorPickerCtrl::SetSaturation)](#setsaturation)|Modifica il componente di saturazione del colore attualmente selezionato.|
|[CMFCColorPickerCtrl::SetType](#settype)|Imposta il tipo di controllo selezione colori da visualizzare.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorPickerCtrl::DrawCursor](#drawcursor)|Chiamato dal framework prima che venga visualizzato un cursore che punta al colore selezionato.|

## <a name="remarks"></a>Osservazioni

I colori standard vengono selezionati da una tavolozza di colori esagonali e i colori personalizzati vengono selezionati da una barra di luminanza in cui i colori vengono specificati utilizzando la notazione rosso/verde/blu o la notazione tonalità/satuare/satuare/satuare.

Nella figura seguente `CMFCColorPickerCtrl` vengono illustrati diversi oggetti.

![Finestra di dialogo di CMFCColorPickerCtrl](../../mfc/reference/media/colorpicker.png "Finestra di dialogo di CMFCColorPickerCtrl")

Il `CMFCColorPickerCtrl` supporta due coppie di stili. Gli stili HEX e HEX_GREYSCALE sono appropriati per la selezione di colori standard. Gli stili PICKER e LUMINANCE sono appropriati per la selezione di colori personalizzati.

Eseguire la procedura seguente `CMFCColorPickerCtrl` per incorporare il controllo nella finestra di dialogo:

1. Se si utilizza **ClassWizard**, inserire un nuovo controllo pulsante nel modello della finestra di dialogo (perché la `CMFCColorPickerCtrl` classe viene ereditata dalla `CButton` classe ).

1. Inserire una variabile membro associata al nuovo controllo pulsante nella classe della finestra di dialogo. Modificare quindi il `CButton` tipo `CMFCColorPickerCtrl`di variabile da a .

1. Inserire `WM_INITDIALOG` il gestore messaggi per la classe della finestra di dialogo. Nel gestore impostare il tipo, la tavolozza e il colore selezionato iniziale del `CMFCColorPickerCtrl` controllo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene `CMFCColorPickerCtrl` illustrato come configurare `CMFCColorPickerCtrl` un oggetto utilizzando vari metodi nella classe. Nell'esempio viene illustrato come impostare il tipo del controllo di selezione e come impostarne il colore, la tonalità, la luminanza e la saturazione. L'esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

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

## <a name="cmfccolorpickerctrlcmfccolorpickerctrl"></a><a name="cmfccolorpickerctrl"></a>CMFCColorPickerCtrl::CMFCColorPickerCtrl

Costruisce un oggetto `CMFCColorPickerCtrl`.

```
CMFCColorPickerCtrl();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrldrawcursor"></a><a name="drawcursor"></a>CMFCColorPickerCtrl::DrawCursor

Chiamato dal framework prima che venga visualizzato un cursore che punta al colore selezionato.

```
virtual void DrawCursor(
    CDC* pDC,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Specifica un'area rettangolare attorno al colore selezionato.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo quando è necessario modificare la forma del cursore che punta al colore selezionato.

## <a name="cmfccolorpickerctrlgetcolor"></a><a name="getcolor"></a>CMFCColorPickerCtrl::GetColor

Recupera il colore selezionato dall'utente.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore RGB del colore selezionato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlgethls"></a><a name="gethls"></a>CMFCColorPickerCtrl::GetHLS

Recupera i valori di tonalità, luminanza e saturazione del colore selezionato dall'utente.

```
void GetHLS(
    double* hue,
    double* luminance,
    double* saturation);
```

### <a name="parameters"></a>Parametri

*Hue*<br/>
[fuori] Puntatore a una variabile di tipo double che riceve informazioni sulla tonalità.

*Luminanza*<br/>
[fuori] Puntatore a una variabile di tipo double che riceve informazioni sulla luminanza.

*Saturazione*<br/>
[fuori] Puntatore a una variabile di tipo double che riceve informazioni sulla saturazione.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlgethue"></a><a name="gethue"></a>CMFCColorPickerCtrl::GetHue

Recupera il componente tonalità del colore selezionato dall'utente.

```
double GetHue() const;
```

### <a name="return-value"></a>Valore restituito

Componente tonalità del colore selezionato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlgetluminance"></a><a name="getluminance"></a>CMFCColorPickerCtrl::GetLuminance

Recupera il componente di luminanza del colore selezionato dall'utente.

```
double GetLuminance() const;
```

### <a name="return-value"></a>Valore restituito

Componente di luminanza del colore selezionato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlgetsaturation"></a><a name="getsaturation"></a>CMFCColorPickerCtrl::GetSaturation

Recupera il valore di saturazione del colore selezionato dall'utente.

```
double GetSaturation() const;
```

### <a name="return-value"></a>Valore restituito

Componente di saturazione del colore selezionato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlselectcellhexagon"></a><a name="selectcellhexagon"></a>CMFCColorPickerCtrl::SelectCellHexagon

Imposta il colore corrente sul colore definito dai componenti di colore RGB specificati o dall'esagono della cella specificato.

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
[in] Componente di colore rosso.

*G*<br/>
[in] Componente di colore verde.

*B*<br/>
[in] Componente di colore blu.

*X*<br/>
[in] Coordinata x del cursore, che punta a un esagono di cella.

*Y*<br/>
[in] Coordinata y del cursore, che punta a un esagono di cella.

### <a name="return-value"></a>Valore restituito

Il secondo overload di questo metodo restituisce sempre FALSE.

### <a name="remarks"></a>Osservazioni

Il primo overload di questo metodo imposta il colore corrente sul colore che corrisponde ai componenti di colore rosso, verde e blu specificati dal controllo di selezione colore.

Il secondo overload di questo metodo imposta il colore corrente sul colore dell'esagono della cella a cui fa riferimento la posizione del cursore specificata.

## <a name="cmfccolorpickerctrlsetcolor"></a><a name="setcolor"></a>CMFCColorPickerCtrl::SetColor

Imposta il colore corrente sul valore di colore RGB specificato.

```
void SetColor(COLORREF Color);
```

### <a name="parameters"></a>Parametri

*Color*<br/>
[in] Valore di colore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlsethls"></a><a name="sethls"></a>CMFCColorPickerCtrl::SetHLS

Imposta il colore corrente sul valore di colore HLS specificato.

```
void SetHLS(
    double hue,
    double luminance,
    double saturation,
    BOOL bInvalidate=TRUE);
```

### <a name="parameters"></a>Parametri

*Hue*<br/>
[in] Valore di tonalità.

*Luminanza*<br/>
[in] Valore di luminanza.

*Saturazione*<br/>
[in] Valore di saturazione.

*bInvalidate (informazioni in stato invalidate)*<br/>
[in] TRUE per forzare la finestra per aggiornare immediatamente al nuovo colore; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlsethue"></a><a name="sethue"></a>CMFCColorPickerCtrl::SetHue

Modifica la tonalità del colore attualmente selezionato.

```
void SetHue(double Hue);
```

### <a name="parameters"></a>Parametri

*Hue*<br/>
[in] Valore di tonalità.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlsetluminance"></a><a name="setluminance"></a>CMFCColorPickerCtrl::SetLuminance

Modifica la luminanza del colore attualmente selezionato.

```
void SetLuminance(double Luminance);
```

### <a name="parameters"></a>Parametri

*Luminanza*<br/>
[in] Valore di luminanza.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlsetluminancebarwidth"></a><a name="setluminancebarwidth"></a>CMFCColorPickerCtrl::SetLuminanceBarWidth

Imposta la larghezza della barra di luminanza nel controllo selezione colori.

```
void SetLuminanceBarWidth(int w);
```

### <a name="parameters"></a>Parametri

*W*<br/>
[in] Larghezza della barra di luminosità misurata in pixel.

### <a name="remarks"></a>Osservazioni

Utilizzate questo metodo per ridimensionare la barra di luminanza, che si trova nella scheda **Personalizzato** del controllo selezione colori. Il parametro *w* specifica la nuova larghezza della barra di luminanza. Il valore della larghezza viene ignorato se supera i tre quarti della larghezza dell'area client.

## <a name="cmfccolorpickerctrlsetoriginalcolor"></a><a name="setoriginalcolor"></a>CMFCColorPickerCtrl::SetOriginalColor

Imposta il colore selezionato iniziale.

```
void SetOriginalColor(COLORREF ref);
```

### <a name="parameters"></a>Parametri

*ref*<br/>
[in] Valore di colore RGB.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo quando viene inizializzato il controllo selezione colori.

## <a name="cmfccolorpickerctrlsetpalette"></a><a name="setpalette"></a>CMFCColorPickerCtrl::SetPalette

Imposta la tavolozza dei colori corrente.

```
void SetPalette(CPalette* pPalette);
```

### <a name="parameters"></a>Parametri

*pTavolozza*<br/>
[in] Puntatore a una tavolozza dei colori.

### <a name="remarks"></a>Osservazioni

La tavolozza dei colori definisce la matrice di colori che viene presentata nel controllo selezione colori.

## <a name="cmfccolorpickerctrlsetsaturation"></a><a name="setsaturation"></a>CMFCColorPickerCtrl::SetSaturation (CMFCColorPickerCtrl::SetSaturation)

Modifica la saturazione del colore attualmente selezionato.

```
void SetSaturation(double Saturation);
```

### <a name="parameters"></a>Parametri

*Saturazione*<br/>
[in] Valore di saturazione.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorpickerctrlsettype"></a><a name="settype"></a>CMFCColorPickerCtrl::SetType

Imposta il tipo di controllo selezione colori da visualizzare.

```
void SetType(COLORTYPE colorType);
```

### <a name="parameters"></a>Parametri

*colorType (Tipocolore)*<br/>
[in] Tipo di controllo selezione colori.

I tipi sono `CMFCColorPickerCtrl::COLORTYPE` definiti dall'enumerazione . I tipi possibili sono LUMINANCE, PICKER, HEX e HEX_GREYSCALE. Il tipo predefinito è PICKER.

### <a name="remarks"></a>Osservazioni

Per specificare un tipo di controllo selezione colori, chiamare questo metodo prima che venga creato il controllo Windows.To specify a color picker control type, call this method before the Windows control is created.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)
