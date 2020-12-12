---
description: 'Altre informazioni su: classe CMFCColorPickerCtrl'
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
ms.openlocfilehash: e4363c08af86dee96df1492e9a029414d9902435
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313073"
---
# <a name="cmfccolorpickerctrl-class"></a>Classe CMFCColorPickerCtrl

La `CMFCColorPickerCtrl` classe fornisce la funzionalità per un controllo utilizzato per selezionare i colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorPickerCtrl : public CButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCColorPickerCtrl:: CMFCColorPickerCtrl](#cmfccolorpickerctrl)|Costruisce un oggetto `CMFCColorPickerCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCColorPickerCtrl:: GetColor](#getcolor)|Recupera il colore selezionato dall'utente.|
|[CMFCColorPickerCtrl:: GetHLS](#gethls)|Recupera i valori di tonalità, luminanza e saturazione del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl:: GetHue](#gethue)|Recupera il componente Hue del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl:: getluminance](#getluminance)|Recupera il componente di luminanza del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl:: GetSaturation](#getsaturation)|Recupera il componente di saturazione del colore selezionato dall'utente.|
|[CMFCColorPickerCtrl:: SelectCellHexagon](#selectcellhexagon)|Imposta il colore corrente sul colore definito dai componenti colori RGB specificati o l'esagono della cella specificata.|
|[CMFCColorPickerCtrl:: ToColor](#setcolor)|Imposta il colore corrente sul valore di colore RGB specificato.|
|[CMFCColorPickerCtrl:: SetHLS](#sethls)|Imposta il colore corrente sul valore del colore HLS specificato.|
|[CMFCColorPickerCtrl:: SetHue](#sethue)|Modifica il componente Hue del colore attualmente selezionato.|
|[CMFCColorPickerCtrl:: toluminazione](#setluminance)|Modifica il componente di luminanza del colore attualmente selezionato.|
|[CMFCColorPickerCtrl:: SetLuminanceBarWidth](#setluminancebarwidth)|Imposta la larghezza della barra di luminanza nel controllo selezione colori.|
|[CMFCColorPickerCtrl:: SetOriginalColor](#setoriginalcolor)|Imposta il colore iniziale selezionato.|
|[CMFCColorPickerCtrl:: sepalette](#setpalette)|Imposta la tavolozza dei colori corrente.|
|[CMFCColorPickerCtrl:: sesaturation](#setsaturation)|Modifica il componente di saturazione del colore attualmente selezionato.|
|[CMFCColorPickerCtrl:: seTYPE](#settype)|Imposta il tipo di controllo selezione colori da visualizzare.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCColorPickerCtrl::D rawCursor](#drawcursor)|Chiamato dal Framework prima che venga visualizzato un cursore che punta al colore selezionato.|

## <a name="remarks"></a>Commenti

I colori standard sono selezionati da una tavolozza dei colori esagonale e i colori personalizzati vengono selezionati da una barra di luminanza in cui i colori vengono specificati utilizzando la notazione rossa/verde/blu o la notazione Hue/satuaration/luminanza.

Nella figura seguente vengono illustrati diversi `CMFCColorPickerCtrl` oggetti.

![Finestra di dialogo di CMFCColorPickerCtrl](../../mfc/reference/media/colorpicker.png "Finestra di dialogo di CMFCColorPickerCtrl")

`CMFCColorPickerCtrl`Supporta due coppie di stili. Gli stili HEX e HEX_GREYSCALE sono appropriati per la selezione dei colori standard. Gli stili di selezione e LUMINAnza sono appropriati per la selezione personalizzata dei colori.

Per incorporare il controllo nella finestra di dialogo, attenersi alla procedura seguente `CMFCColorPickerCtrl` :

1. Se si usa **ClassWizard**, inserire un nuovo controllo Button nel modello della finestra di dialogo, perché la `CMFCColorPickerCtrl` classe viene ereditata dalla `CButton` classe.

1. Inserire una variabile membro associata al nuovo controllo Button nella classe della finestra di dialogo. Modificare quindi il tipo di variabile da `CButton` a `CMFCColorPickerCtrl` .

1. Inserire il `WM_INITDIALOG` gestore di messaggi per la classe della finestra di dialogo. Nel gestore, impostare il tipo, la tavolozza e il colore iniziale selezionato del `CMFCColorPickerCtrl` controllo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare un `CMFCColorPickerCtrl` oggetto utilizzando diversi metodi della `CMFCColorPickerCtrl` classe. Nell'esempio viene illustrato come impostare il tipo di controllo selezione e come impostarne il colore, la tonalità, la luminanza e la saturazione. L'esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#4](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#5](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolorpickerctrl. h

## <a name="cmfccolorpickerctrlcmfccolorpickerctrl"></a><a name="cmfccolorpickerctrl"></a> CMFCColorPickerCtrl:: CMFCColorPickerCtrl

Costruisce un oggetto `CMFCColorPickerCtrl`.

```
CMFCColorPickerCtrl();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrldrawcursor"></a><a name="drawcursor"></a> CMFCColorPickerCtrl::D rawCursor

Chiamato dal Framework prima che venga visualizzato un cursore che punta al colore selezionato.

```
virtual void DrawCursor(
    CDC* pDC,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Specifica un'area rettangolare intorno al colore selezionato.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo quando è necessario modificare la forma del cursore che punta al colore selezionato.

## <a name="cmfccolorpickerctrlgetcolor"></a><a name="getcolor"></a> CMFCColorPickerCtrl:: GetColor

Recupera il colore selezionato dall'utente.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore RGB del colore selezionato.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlgethls"></a><a name="gethls"></a> CMFCColorPickerCtrl:: GetHLS

Recupera i valori di tonalità, luminanza e saturazione del colore selezionato dall'utente.

```cpp
void GetHLS(
    double* hue,
    double* luminance,
    double* saturation);
```

### <a name="parameters"></a>Parametri

*tonalità*<br/>
out Puntatore a una variabile di tipo Double che riceve informazioni sulla tonalità.

*luminanza*<br/>
out Puntatore a una variabile di tipo Double che riceve informazioni sulla luminanza.

*saturazione*<br/>
out Puntatore a una variabile di tipo Double che riceve informazioni di saturazione.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlgethue"></a><a name="gethue"></a> CMFCColorPickerCtrl:: GetHue

Recupera il componente Hue del colore selezionato dall'utente.

```
double GetHue() const;
```

### <a name="return-value"></a>Valore restituito

Componente Hue del colore selezionato.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlgetluminance"></a><a name="getluminance"></a> CMFCColorPickerCtrl:: getluminance

Recupera il componente di luminanza del colore selezionato dall'utente.

```
double GetLuminance() const;
```

### <a name="return-value"></a>Valore restituito

Componente di luminanza del colore selezionato.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlgetsaturation"></a><a name="getsaturation"></a> CMFCColorPickerCtrl:: GetSaturation

Recupera il valore di saturazione del colore selezionato dall'utente.

```
double GetSaturation() const;
```

### <a name="return-value"></a>Valore restituito

Componente di saturazione del colore selezionato.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlselectcellhexagon"></a><a name="selectcellhexagon"></a> CMFCColorPickerCtrl:: SelectCellHexagon

Imposta il colore corrente sul colore definito dai componenti colori RGB specificati o l'esagono della cella specificata.

```cpp
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
in Componente di colore rosso.

*G*<br/>
in Componente colore verde.

*B*<br/>
in Componente colore blu.

*x*<br/>
in Coordinata x del cursore, che punta a un esagono di cella.

*y*<br/>
in Coordinata y del cursore, che punta a un esagono di cella.

### <a name="return-value"></a>Valore restituito

Il secondo overload di questo metodo restituisce sempre FALSE.

### <a name="remarks"></a>Commenti

Il primo overload di questo metodo imposta il colore corrente sul colore che corrisponde ai componenti di colore rosso, verde e blu specificati del controllo di selezione colori.

Il secondo overload di questo metodo imposta il colore corrente sul colore dell'esagono della cella a cui punta la posizione del cursore specificata.

## <a name="cmfccolorpickerctrlsetcolor"></a><a name="setcolor"></a> CMFCColorPickerCtrl:: ToColor

Imposta il colore corrente sul valore di colore RGB specificato.

```cpp
void SetColor(COLORREF Color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
in Valore di colore RGB.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlsethls"></a><a name="sethls"></a> CMFCColorPickerCtrl:: SetHLS

Imposta il colore corrente sul valore del colore HLS specificato.

```cpp
void SetHLS(
    double hue,
    double luminance,
    double saturation,
    BOOL bInvalidate=TRUE);
```

### <a name="parameters"></a>Parametri

*tonalità*<br/>
in Valore di tonalità.

*luminanza*<br/>
in Valore della luminanza.

*saturazione*<br/>
in Valore di saturazione.

*bInvalidate*<br/>
in TRUE per forzare l'aggiornamento immediato della finestra al nuovo colore; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlsethue"></a><a name="sethue"></a> CMFCColorPickerCtrl:: SetHue

Modifica la tonalità del colore attualmente selezionato.

```cpp
void SetHue(double Hue);
```

### <a name="parameters"></a>Parametri

*Hue*<br/>
in Valore di tonalità.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlsetluminance"></a><a name="setluminance"></a> CMFCColorPickerCtrl:: toluminazione

Modifica la luminosità del colore attualmente selezionato.

```cpp
void SetLuminance(double Luminance);
```

### <a name="parameters"></a>Parametri

*Luminanza*<br/>
in Valore della luminanza.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlsetluminancebarwidth"></a><a name="setluminancebarwidth"></a> CMFCColorPickerCtrl:: SetLuminanceBarWidth

Imposta la larghezza della barra di luminanza nel controllo selezione colori.

```cpp
void SetLuminanceBarWidth(int w);
```

### <a name="parameters"></a>Parametri

*w*<br/>
in Larghezza della barra di luminanza misurata in pixel.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per ridimensionare la barra di luminanza, che si trova nella scheda **personalizzata** del controllo selezione colori. Il parametro *w* specifica la nuova larghezza della barra di luminanza. Il valore Width viene ignorato se supera i tre quarti della larghezza dell'area client.

## <a name="cmfccolorpickerctrlsetoriginalcolor"></a><a name="setoriginalcolor"></a> CMFCColorPickerCtrl:: SetOriginalColor

Imposta il colore iniziale selezionato.

```cpp
void SetOriginalColor(COLORREF ref);
```

### <a name="parameters"></a>Parametri

*ref*<br/>
in Valore di colore RGB.

### <a name="remarks"></a>Commenti

Chiamare questo metodo quando il controllo selezione colori viene inizializzato.

## <a name="cmfccolorpickerctrlsetpalette"></a><a name="setpalette"></a> CMFCColorPickerCtrl:: sepalette

Imposta la tavolozza dei colori corrente.

```cpp
void SetPalette(CPalette* pPalette);
```

### <a name="parameters"></a>Parametri

*pPalette*<br/>
in Puntatore a una tavolozza dei colori.

### <a name="remarks"></a>Commenti

La tavolozza dei colori definisce la matrice di colori visualizzata nel controllo selezione colori.

## <a name="cmfccolorpickerctrlsetsaturation"></a><a name="setsaturation"></a> CMFCColorPickerCtrl:: sesaturation

Modifica la saturazione del colore attualmente selezionato.

```cpp
void SetSaturation(double Saturation);
```

### <a name="parameters"></a>Parametri

*Saturazione*<br/>
in Valore di saturazione.

### <a name="remarks"></a>Commenti

## <a name="cmfccolorpickerctrlsettype"></a><a name="settype"></a> CMFCColorPickerCtrl:: seTYPE

Imposta il tipo di controllo selezione colori da visualizzare.

```cpp
void SetType(COLORTYPE colorType);
```

### <a name="parameters"></a>Parametri

*colorType*<br/>
in Tipo di controllo selezione colori.

I tipi sono definiti dall' `CMFCColorPickerCtrl::COLORTYPE` enumerazione. I tipi possibili sono LUMINAnza, selezione, ESADECIMALe e HEX_GREYSCALE. Il tipo predefinito è selettore.

### <a name="remarks"></a>Commenti

Per specificare un tipo di controllo selezione colori, chiamare questo metodo prima di creare il controllo Windows.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)
