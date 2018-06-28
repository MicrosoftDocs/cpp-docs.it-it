---
title: Classe di CMFCColorPickerCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3d4c8af6373f2b526c07ee570f4be878bd073d4
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37042043"
---
# <a name="cmfccolorpickerctrl-class"></a>Classe di CMFCColorPickerCtrl
Il `CMFCColorPickerCtrl` classe fornisce funzionalità per un controllo che consente di selezionare colori.  
  
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
|[CMFCColorPickerCtrl::SetLuminanceBarWidth](#setluminancebarwidth)|Imposta la larghezza della barra luminosità del controllo di selezione colore.|  
|[CMFCColorPickerCtrl::SetOriginalColor](#setoriginalcolor)|Imposta il colore selezionato iniziale.|  
|[CMFCColorPickerCtrl::SetPalette](#setpalette)|Imposta la tavolozza dei colori corrente.|  
|[CMFCColorPickerCtrl::SetSaturation](#setsaturation)|Modifica il componente di saturazione del colore attualmente selezionato.|  
|[CMFCColorPickerCtrl::SetType](#settype)|Imposta il tipo di controllo di selezione colore da visualizzare.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::DrawCursor](#drawcursor)|Chiamato dal framework prima che venga visualizzato un cursore che punta al colore selezionato.|  
  
## <a name="remarks"></a>Note  
 Colori standard vengono selezionati da una tavolozza dei colori vite e colori personalizzati sono da una barra di luminanza in cui colori sono specificati utilizzando la notazione rosso/verde/blu o notation tonalità/satuaration/luminanza.  
  
 La figura seguente illustra alcuni `CMFCColorPickerCtrl` oggetti.  
  
 ![Finestra di dialogo di CMFCColorPickerCtrl](../../mfc/reference/media/colorpicker.png "colorpicker")  
  
 Il `CMFCColorPickerCtrl` supporta due coppie di stili. Gli stili HEX_GREYSCALE ed ESADECIMALE sono appropriati per la selezione colori standard. Gli stili di selezione e LUMINANZA sono appropriati per la selezione dei colori personalizzati.  
  
 Eseguire la procedura seguente per incorporare il `CMFCColorPickerCtrl` controllo nella finestra di dialogo:  
  
1.  Se si utilizza il **ClassWizard**, inserire un controllo pulsante di nuovo il modello di finestra di dialogo (perché il `CMFCColorPickerCtrl` classe è ereditata dal `CButton` classe).  
  
2.  Inserire una variabile membro che è associata il nuovo controllo pulsante nella classe di finestra di dialogo. Quindi modificare il tipo della variabile da `CButton` a `CMFCColorPickerCtrl`.  
  
3.  Inserire il `WM_INITDIALOG` dal gestore di messaggi per la classe della finestra di dialogo. Nel gestore impostare il tipo di un riquadro e un colore iniziale del `CMFCColorPickerCtrl` controllo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come configurare un `CMFCColorPickerCtrl` oggetto usando i vari metodi nella `CMFCColorPickerCtrl` classe. Nell'esempio viene illustrato come impostare il tipo di controllo di selezione e come impostare il colore, tonalità, luminanza e saturazione. L'esempio fa parte del [esempio di nuovi controlli](../../visual-cpp-samples.md).  
  
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
 [in] *pDC*  
 Puntatore a un contesto di dispositivo.  
  
 [in] *rect*  
 Specifica un'area rettangolare intorno al colore selezionato.  
  
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
 [out] *tonalità*  
 Puntatore a una variabile di tipo double che riceve le informazioni di tonalità.  
  
 [out] *luminanza*  
 Puntatore a una variabile di tipo double che riceve le informazioni di luminanza.  
  
 [out] *saturazione*  
 Puntatore a una variabile di tipo double che riceve le informazioni di saturazione.  
  
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
 Il componente di luminosità del colore selezionato.  
  
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
 [in] *R*  
 Il componente di colore rosso.  
  
 [in] *G*  
 Il componente di colore verde.  
  
 [in] *B*  
 Il componente di colore blu.  
  
 [in] *x*  
 La coordinata x del cursore, che fa riferimento al esagono cella.  
  
 [in] *y*  
 La coordinata y del cursore, che fa riferimento al esagono cella.  
  
### <a name="return-value"></a>Valore restituito  
 Il secondo overload di questo metodo restituisce sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il primo overload di questo metodo imposta colore corrente per il colore che corrisponde al controllo di selezione colore specificati i componenti di colore rosso, verde e blu.  
  
 Il secondo overload di questo metodo imposta il colore corrente per il colore di esagono la cella che fa riferimento da della posizione del cursore specificato.  
  
##  <a name="setcolor"></a>  CMFCColorPickerCtrl::SetColor  
 Imposta il colore corrente sul valore di colore RGB specificato.  
  
```  
void SetColor(COLORREF Color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *Colore*  
 Un valore di colore RGB.  
  
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
 [in] *tonalità*  
 Un valore di tonalità.  
  
 [in] *luminanza*  
 Il valore di luminosità.  
  
 [in] *saturazione*  
 Un valore di saturazione.  
  
 [in] *bInvalidate*  
 `TRUE` Per forzare la finestra per aggiornare immediatamente il nuovo colore; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="sethue"></a>  CMFCColorPickerCtrl::SetHue  
 Cambia la tonalità del colore attualmente selezionato.  
  
```  
void SetHue(double Hue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *Tonalità*  
 Un valore di tonalità.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setluminance"></a>  CMFCColorPickerCtrl::SetLuminance  
 Modifica la luminosità del colore attualmente selezionato.  
  
```  
void SetLuminance(double Luminance);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *Luminanza*  
 Il valore di luminosità.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setluminancebarwidth"></a>  CMFCColorPickerCtrl::SetLuminanceBarWidth  
 Imposta la larghezza della barra luminosità del controllo di selezione colore.  
  
```  
void SetLuminanceBarWidth(int w);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *w*  
 La larghezza della barra di luminanza misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per ridimensionare la barra luminosità, ovvero sul **Custom** scheda del controllo di selezione colore. Il *w* parametro specifica la nuova larghezza della barra di luminanza. Il valore di larghezza viene ignorato se quest'ultimo supera tre quarti della larghezza dell'area client.  
  
##  <a name="setoriginalcolor"></a>  CMFCColorPickerCtrl::SetOriginalColor  
 Imposta il colore selezionato iniziale.  
  
```  
void SetOriginalColor(COLORREF ref);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *ref*  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo quando viene inizializzato il controllo di selezione colore.  
  
##  <a name="setpalette"></a>  CMFCColorPickerCtrl::SetPalette  
 Imposta la tavolozza dei colori corrente.  
  
```  
void SetPalette(CPalette* pPalette);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pPalette*  
 Puntatore a una tavolozza dei colori.  
  
### <a name="remarks"></a>Note  
 La tavolozza dei colori definisce la matrice di colori viene visualizzata nel controllo di selezione colore.  
  
##  <a name="setsaturation"></a>  CMFCColorPickerCtrl::SetSaturation  
 Modifica la saturazione del colore attualmente selezionato.  
  
```  
void SetSaturation(double Saturation);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *Saturazione*  
 Un valore di saturazione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settype"></a>  CMFCColorPickerCtrl::SetType  
 Imposta il tipo di controllo di selezione colore da visualizzare.  
  
```  
void SetType(COLORTYPE colorType);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colorType*  
 Un tipo di controllo di selezione colore.  
  
 I tipi sono definiti per il `CMFCColorPickerCtrl::COLORTYPE` enumerazione. I tipi possibili sono `LUMINANCE`, `PICKER`, `HEX` e `HEX_GREYSCALE`. Il tipo predefinito è `PICKER`.  
  
### <a name="remarks"></a>Note  
 Per specificare un tipo di controllo di selezione colore, chiamare questo metodo prima della creazione del controllo di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)
