---
title: Classe CMFCColorPickerCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CMFCColorPickerCtrl class
ms.assetid: b9bbd03c-beb0-4b55-9765-9985fd05e5dc
caps.latest.revision: 33
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 0a819d04535ba965e2c1a10f3761c442c9840538
ms.lasthandoff: 02/24/2017

---
# <a name="cmfccolorpickerctrl-class"></a>Classe di CMFCColorPickerCtrl
La `CMFCColorPickerCtrl` classe fornisce funzionalità per un controllo che viene utilizzato per selezionare colori.  
  
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
|[CMFCColorPickerCtrl::GetHue](#gethue)|Recupera il componente tonalità del colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::GetLuminance](#getluminance)|Recupera il componente luminosità del colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::GetSaturation](#getsaturation)|Recupera il componente di saturazione del colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::SelectCellHexagon](#selectcellhexagon)|Imposta il colore corrente per il colore definito per i componenti di colore RGB specificati o esagono la cella specificata.|  
|[CMFCColorPickerCtrl::SetColor](#setcolor)|Imposta il colore corrente sul valore di colore RGB specificato.|  
|[CMFCColorPickerCtrl::SetHLS](#sethls)|Imposta il colore corrente sul valore di colore HLS specificato.|  
|[CMFCColorPickerCtrl::SetHue](#sethue)|Modifica il componente tonalità del colore selezionato.|  
|[CMFCColorPickerCtrl::SetLuminance](#setluminance)|Modifica il componente luminosità del colore selezionato.|  
|[CMFCColorPickerCtrl::SetLuminanceBarWidth](#setluminancebarwidth)|Imposta la larghezza della barra della luminosità del controllo di selezione colore.|  
|[CMFCColorPickerCtrl::SetOriginalColor](#setoriginalcolor)|Imposta il colore iniziale selezionato.|  
|[CMFCColorPickerCtrl::SetPalette](#setpalette)|Imposta la tavolozza di colori corrente.|  
|[CMFCColorPickerCtrl::SetSaturation](#setsaturation)|Modifica il componente di saturazione del colore selezionato.|  
|[CMFCColorPickerCtrl::SetType](#settype)|Imposta il tipo di controllo di selezione colore da visualizzare.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::DrawCursor](#drawcursor)|Chiamato dal framework prima che venga visualizzato un cursore che punta al colore selezionato.|  
  
## <a name="remarks"></a>Note  
 Colori standard vengono selezionati da una tavolozza dei colori vite e colori personalizzati sono da una barra di luminanza in cui i colori vengono specificati utilizzando la notazione rosso/verde/blu o notazione tonalità/satuaration/luminanza.  
  
 La figura seguente illustra alcuni `CMFCColorPickerCtrl` oggetti.  
  
 ![La finestra di dialogo di CMFCColorPickerCtrl](../../mfc/reference/media/colorpicker.png "colorpicker")  
  
 Il `CMFCColorPickerCtrl` supporta due coppie di stili. Gli stili ESADECIMALE e HEX_GREYSCALE sono appropriati per la selezione di colori standard. Gli stili di selezione e LUMINANZA sono appropriati per la selezione dei colori personalizzati.  
  
 Eseguire la procedura seguente per incorporare il `CMFCColorPickerCtrl` controllo nella finestra di dialogo:  
  
1.  Se si utilizza il **ClassWizard**, inserire un controllo pulsante nuovo nel modello di finestra di dialogo (perché il `CMFCColorPickerCtrl` classe è ereditata dalla `CButton` classe).  
  
2.  Inserire una variabile membro associata con il nuovo controllo pulsante nella classe finestra di dialogo. Quindi modificare il tipo di variabile da `CButton` a `CMFCColorPickerCtrl`.  
  
3.  Inserire il `WM_INITDIALOG` gestore messaggi per la classe di finestra di dialogo. Nel gestore impostare il tipo di un riquadro e un colore iniziale del `CMFCColorPickerCtrl` controllo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come configurare un `CMFCColorPickerCtrl` oggetto tramite i vari metodi di `CMFCColorPickerCtrl` (classe). Nell'esempio viene illustrato come impostare il tipo di controllo di selezione e come impostare il colore, tonalità, luminosità e saturazione. L'esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls n.&4;](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls n.&5;](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcolorpickerctrl.h  
  
##  <a name="cmfccolorpickerctrl"></a>CMFCColorPickerCtrl::CMFCColorPickerCtrl  
 Costruisce un oggetto `CMFCColorPickerCtrl`.  
  
```  
CMFCColorPickerCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="drawcursor"></a>CMFCColorPickerCtrl::DrawCursor  
 Chiamato dal framework prima che venga visualizzato un cursore che punta al colore selezionato.  
  
```  
virtual void DrawCursor(
    CDC* pDC,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Specifica un'area rettangolare intorno al colore selezionato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo quando è necessario modificare la forma del cursore che punta al colore selezionato.  
  
##  <a name="getcolor"></a>CMFCColorPickerCtrl::GetColor  
 Recupera il colore selezionato dall'utente.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore RGB del colore selezionato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gethls"></a>CMFCColorPickerCtrl::GetHLS  
 Recupera i valori di tonalità, luminosità e saturazione del colore selezionato dall'utente.  
  
```  
void GetHLS(
    double* hue,  
    double* luminance,  
    double* saturation);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `hue`  
 Puntatore a una variabile di tipo double che riceve le informazioni di tonalità.  
  
 [out] `luminance`  
 Puntatore a una variabile di tipo double che riceve le informazioni di luminanza.  
  
 [out] `saturation`  
 Puntatore a una variabile di tipo double che riceve le informazioni di saturazione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gethue"></a>CMFCColorPickerCtrl::GetHue  
 Recupera il componente tonalità del colore selezionato dall'utente.  
  
```  
double GetHue() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il componente tonalità del colore selezionato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getluminance"></a>CMFCColorPickerCtrl::GetLuminance  
 Recupera il componente luminosità del colore selezionato dall'utente.  
  
```  
double GetLuminance() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il componente di luminosità del colore selezionato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getsaturation"></a>CMFCColorPickerCtrl::GetSaturation  
 Recupera il valore di saturazione del colore selezionato dall'utente.  
  
```  
double GetSaturation() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il componente di saturazione del colore selezionato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="selectcellhexagon"></a>CMFCColorPickerCtrl::SelectCellHexagon  
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
 [in] `R`  
 Il componente di colore rosso.  
  
 [in] `G`  
 Il componente di colore verde.  
  
 [in] `B`  
 Il componente di colore blu.  
  
 [in] `x`  
 Coordinata x del cursore, che fa riferimento a un esagono cella.  
  
 [in] `y`  
 Coordinata y del cursore, che fa riferimento a un esagono cella.  
  
### <a name="return-value"></a>Valore restituito  
 Il secondo overload di questo metodo restituisce sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il primo overload di questo metodo imposta il colore che corrisponde al controllo di selezione colore colore corrente specificato i componenti di colore rosso, verde e blu.  
  
 Il secondo overload di questo metodo imposta il colore corrente per il colore di esagono la cella che fa riferimento per la posizione del cursore specificato.  
  
##  <a name="setcolor"></a>CMFCColorPickerCtrl::SetColor  
 Imposta il colore corrente sul valore di colore RGB specificato.  
  
```  
void SetColor(COLORREF Color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `Color`  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="sethls"></a>CMFCColorPickerCtrl::SetHLS  
 Imposta il colore corrente sul valore di colore HLS specificato.  
  
```  
void SetHLS(
    double hue,  
    double luminance,  
    double saturation,  
    BOOL bInvalidate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hue`  
 Un valore di tonalità.  
  
 [in] `luminance`  
 Il valore di luminosità.  
  
 [in] `saturation`  
 Un valore di saturazione.  
  
 [in] `bInvalidate`  
 `TRUE`Per forzare la finestra per aggiornare immediatamente il nuovo colore; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="sethue"></a>CMFCColorPickerCtrl::SetHue  
 Modifica la tonalità del colore selezionato.  
  
```  
void SetHue(double Hue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `Hue`  
 Un valore di tonalità.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setluminance"></a>CMFCColorPickerCtrl::SetLuminance  
 Consente di modificare la luminosità del colore selezionato.  
  
```  
void SetLuminance(double Luminance);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `Luminance`  
 Il valore di luminosità.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setluminancebarwidth"></a>CMFCColorPickerCtrl::SetLuminanceBarWidth  
 Imposta la larghezza della barra della luminosità del controllo di selezione colore.  
  
```  
void SetLuminanceBarWidth(int w);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `w`  
 La larghezza della barra di luminanza misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per ridimensionare la barra di luminanza, che è attivata la **personalizzato** scheda del controllo di selezione colore. Il `w` parametro specifica la nuova larghezza della barra di luminanza. Il valore di larghezza viene ignorato se supera i tre quarti della larghezza dell'area client.  
  
##  <a name="setoriginalcolor"></a>CMFCColorPickerCtrl::SetOriginalColor  
 Imposta il colore iniziale selezionato.  
  
```  
void SetOriginalColor(COLORREF ref);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ref`  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo quando viene inizializzato il controllo di selezione colore.  
  
##  <a name="setpalette"></a>CMFCColorPickerCtrl::SetPalette  
 Imposta la tavolozza di colori corrente.  
  
```  
void SetPalette(CPalette* pPalette);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pPalette`  
 Puntatore a una tavolozza dei colori.  
  
### <a name="remarks"></a>Note  
 La tavolozza dei colori definisce la matrice di colori che viene visualizzata nel controllo di selezione colore.  
  
##  <a name="setsaturation"></a>CMFCColorPickerCtrl::SetSaturation  
 Modifica la saturazione del colore selezionato.  
  
```  
void SetSaturation(double Saturation);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `Saturation`  
 Un valore di saturazione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settype"></a>CMFCColorPickerCtrl::SetType  
 Imposta il tipo di controllo di selezione colore da visualizzare.  
  
```  
void SetType(COLORTYPE colorType);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `colorType`  
 Un tipo di controllo di selezione colore.  
  
 I tipi vengono definiti per il `CMFCColorPickerCtrl::COLORTYPE` enumerazione. I tipi possibili sono `LUMINANCE`, `PICKER`, `HEX` e `HEX_GREYSCALE`. Il tipo predefinito è `PICKER`.  
  
### <a name="remarks"></a>Note  
 Per specificare un tipo di controllo di selezione colore, chiamare questo metodo prima che venga creato il controllo di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)

