---
title: Classe CMFCColorButton
ms.date: 11/04/2016
f1_keywords:
- CMFCColorButton
- AFXCOLORBUTTON/CMFCColorButton
- AFXCOLORBUTTON/CMFCColorButton::CMFCColorButton
- AFXCOLORBUTTON/CMFCColorButton::EnableAutomaticButton
- AFXCOLORBUTTON/CMFCColorButton::EnableOtherButton
- AFXCOLORBUTTON/CMFCColorButton::GetAutomaticColor
- AFXCOLORBUTTON/CMFCColorButton::GetColor
- AFXCOLORBUTTON/CMFCColorButton::SetColor
- AFXCOLORBUTTON/CMFCColorButton::SetColorName
- AFXCOLORBUTTON/CMFCColorButton::SetColumnsNumber
- AFXCOLORBUTTON/CMFCColorButton::SetDocumentColors
- AFXCOLORBUTTON/CMFCColorButton::SetPalette
- AFXCOLORBUTTON/CMFCColorButton::SizeToContent
- AFXCOLORBUTTON/CMFCColorButton::IsDrawXPTheme
- AFXCOLORBUTTON/CMFCColorButton::OnDraw
- AFXCOLORBUTTON/CMFCColorButton::OnDrawBorder
- AFXCOLORBUTTON/CMFCColorButton::OnDrawFocusRect
- AFXCOLORBUTTON/CMFCColorButton::OnShowColorPopup
- AFXCOLORBUTTON/CMFCColorButton::RebuildPalette
- AFXCOLORBUTTON/CMFCColorButton::UpdateColor
- AFXCOLORBUTTON/CMFCColorButton::m_bEnabledInCustomizeMode
helpviewer_keywords:
- CMFCColorButton [MFC], CMFCColorButton
- CMFCColorButton [MFC], EnableAutomaticButton
- CMFCColorButton [MFC], EnableOtherButton
- CMFCColorButton [MFC], GetAutomaticColor
- CMFCColorButton [MFC], GetColor
- CMFCColorButton [MFC], SetColor
- CMFCColorButton [MFC], SetColorName
- CMFCColorButton [MFC], SetColumnsNumber
- CMFCColorButton [MFC], SetDocumentColors
- CMFCColorButton [MFC], SetPalette
- CMFCColorButton [MFC], SizeToContent
- CMFCColorButton [MFC], IsDrawXPTheme
- CMFCColorButton [MFC], OnDraw
- CMFCColorButton [MFC], OnDrawBorder
- CMFCColorButton [MFC], OnDrawFocusRect
- CMFCColorButton [MFC], OnShowColorPopup
- CMFCColorButton [MFC], RebuildPalette
- CMFCColorButton [MFC], UpdateColor
- CMFCColorButton [MFC], m_bEnabledInCustomizeMode
ms.assetid: 9fdf34ae-4cc5-4c5e-9d89-1c50e8a73699
ms.openlocfilehash: 7abe37969799d7fcd78d525a5ec1c6faa9d876ee
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560998"
---
# <a name="cmfccolorbutton-class"></a>Classe CMFCColorButton

Le `CMFCColorButton` classi della [classe e CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) vengono usate insieme per implementare un controllo di selezione colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorButton : public CMFCButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorButton:: CMFCColorButton](#cmfccolorbutton)|Costruisce un oggetto `CMFCColorButton` nuovo.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorButton:: EnableAutomaticButton](#enableautomaticbutton)|Abilita e Disabilita un pulsante "automatico" posizionato sopra i pulsanti di colore normale. Il pulsante automatico sistema standard è contrassegnato come **automatico**.|
|[CMFCColorButton:: EnableOtherButton](#enableotherbutton)|Abilita e Disabilita un pulsante "altro" posizionato sotto i pulsanti di colore normale. Il pulsante "altro" di sistema standard è contrassegnato con un **numero maggiore di colori**.|
|[CMFCColorButton:: GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatico corrente.|
|[CMFCColorButton:: GetColor](#getcolor)|Recupera il colore di un pulsante.|
|[CMFCColorButton:: ToColor](#setcolor)|Imposta il colore di un pulsante.|
|[CMFCColorButton:: secolorname](#setcolorname)|Imposta un nome di colore.|
|[CMFCColorButton:: SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne nella finestra di dialogo di selezione colori.|
|[CMFCColorButton:: SetDocumentColors](#setdocumentcolors)|Specifica un elenco di colori specifici del documento visualizzati nella finestra di dialogo di selezione colori.|
|[CMFCColorButton:: sepalette](#setpalette)|Specifica una tavolozza di colori di visualizzazione standard.|
|[CMFCColorButton:: SizeToContent](#sizetocontent)|Modifica la dimensione del controllo Button, a seconda delle dimensioni del testo e dell'immagine.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorButton:: IsDrawXPTheme](#isdrawxptheme)|Indica se il pulsante colore corrente viene visualizzato nello stile di visualizzazione di Windows XP.|
|[CMFCColorButton:: onpare](#ondraw)|Chiamata eseguita dal Framework per visualizzare un'immagine del pulsante.|
|[CMFCColorButton:: OnDrawBorder](#ondrawborder)|Chiamato dal Framework per visualizzare il bordo del pulsante.|
|[CMFCColorButton:: OnDrawFocusRect](#ondrawfocusrect)|Chiamata eseguita dal Framework per visualizzare un rettangolo di attivazione quando il pulsante ha lo stato attivo.|
|[CMFCColorButton:: OnShowColorPopup](#onshowcolorpopup)|Chiamata eseguita dal framework quando sta per essere visualizzata la finestra di dialogo di selezione colori.|
|[CMFCColorButton:: RebuildPalette](#rebuildpalette)|Inizializza il `m_pPalette` membro dati protetto nella tavolozza specificata o nella tavolozza di sistema predefinita.|
|[CMFCColorButton::UpdateColor](#updatecolor)|Chiamata eseguita dal framework quando l'utente seleziona un colore dalla tavolozza della finestra di dialogo di selezione colori.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|`m_bAltColorDlg`|Un valore Boolean. Se è TRUE, il Framework Visualizza la finestra di dialogo colore [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) quando si fa clic sul pulsante *altro* oppure se è false, la finestra di dialogo colore sistema. Il valore predefinito è TRUE. Per ulteriori informazioni, vedere [CMFCColorButton:: EnableOtherButton](#enableotherbutton).|
|`m_bAutoSetFocus`|Un valore Boolean. Se è TRUE, il Framework imposta lo stato attivo sul menu colori quando viene visualizzato il menu o, se FALSE, non modifica lo stato attivo. Il valore predefinito è TRUE.|
|[CMFCColorButton:: m_bEnabledInCustomizeMode](#m_benabledincustomizemode)|Indica se la modalità di personalizzazione è abilitata per il pulsante colore.|
|`m_Color`|Valore [COLORREF](/windows/win32/gdi/colorref) . Contiene il colore attualmente selezionato.|
|`m_ColorAutomatic`|Valore [COLORREF](/windows/win32/gdi/colorref) . Contiene il colore predefinito attualmente selezionato.|
|`m_Colors`|Oggetto [CArray](../../mfc/reference/carray-class.md) dei valori [COLORREF](/windows/win32/gdi/colorref) . Contiene i colori attualmente disponibili.|
|`m_lstDocColors`|[CList](../../mfc/reference/clist-class.md) di valori [COLORREF](/windows/win32/gdi/colorref) . Contiene i colori del documento corrente.|
|`m_nColumns`|Intero. Contiene il numero di colonne da visualizzare nella griglia dei colori in un menu di selezione colori.|
|`m_pPalette`|Puntatore a un [CPalette](../../mfc/reference/cpalette-class.md). Contiene i colori disponibili nel menu di selezione colori corrente.|
|`m_pPopup`|Puntatore a un oggetto della [classe CMFCColorPopupMenu](../../mfc/reference/cmfccolorpopupmenu-class.md) . Menu di selezione colori visualizzato quando si fa clic sul pulsante colore.|
|`m_strAutoColorText`|Stringa. Etichetta del pulsante "automatico" in un menu di selezione colori.|
|`m_strDocColorsText`|Stringa. Etichetta del pulsante in un menu di selezione dei colori che Visualizza i colori del documento.|
|`m_strOtherText`|Stringa. Etichetta del pulsante "altro" in un menu di selezione colori.|

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, la `CMFCColorButton` classe si comporta come un pulsante di push che apre una finestra di dialogo di selezione colori. La finestra di dialogo Selezione colori contiene una matrice di pulsanti colorati piccoli e un pulsante "altro" che visualizza una selezione colori personalizzata. Il pulsante "altro" di sistema standard è contrassegnato con un **numero maggiore di colori**. Quando un utente seleziona un nuovo colore, l' `CMFCColorButton` oggetto riflette la modifica e visualizza il colore selezionato.

Creare un controllo pulsante colore direttamente nel codice o usando lo strumento **ClassWizard** e un modello di finestra di dialogo. Se si crea direttamente un controllo Button di colore, aggiungere una `CMFCColorButton` variabile all'applicazione, quindi chiamare il costruttore e i `Create` metodi dell' `CMFCColorButton` oggetto. Se si usa **ClassWizard**, aggiungere una `CButton` variabile all'applicazione e quindi modificare il tipo della variabile da `CButton` a `CMFCColorButton` .

La finestra di dialogo Selezione colori ( [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)) viene visualizzata dal metodo [CMFCColorButton:: OnShowColorPopup](#onshowcolorpopup) quando il Framework chiama il `OnLButtonDown` gestore eventi. È possibile eseguire l'override del metodo [CMFCColorButton:: OnShowColorPopup](#onshowcolorpopup) per supportare la selezione personalizzata dei colori.

L' `CMFCColorButton` oggetto notifica al padre che un colore sta cambiando inviando una WM_COMMAND | Notifica BN_CLICKED. L'elemento padre usa il metodo [CMFCColorButton:: GetColor](#getcolor) per recuperare il colore corrente.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare un pulsante di colore utilizzando diversi metodi della `CMFCColorButton` classe. I metodi impostano il colore del pulsante colore e il relativo numero di colonne e abilitano i pulsanti automatico e altro. Questo esempio fa parte dell' [esempio demo della barra di stato](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StatusBarDemo#10](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_1.h)]
[!code-cpp[NVC_MFC_StatusBarDemo#11](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_2.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolorbutton. h

## <a name="cmfccolorbuttoncmfccolorbutton"></a><a name="cmfccolorbutton"></a> CMFCColorButton:: CMFCColorButton

Costruisce un oggetto `CMFCColorButton` nuovo.

```
CMFCColorButton();
```

## <a name="cmfccolorbuttonenableautomaticbutton"></a><a name="enableautomaticbutton"></a> CMFCColorButton:: EnableAutomaticButton

Abilitare o disabilitare il pulsante "automatico" di un controllo selezione colori e impostare il colore automatico (predefinito).

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Specifica il testo del pulsante automatico.

*colorAutomatic*<br/>
in Valore RGB che specifica il colore predefinito del pulsante automatico.

*bEnable*<br/>
in Specifica se il pulsante automatico è abilitato o disabilitato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonenableotherbutton"></a><a name="enableotherbutton"></a> CMFCColorButton:: EnableOtherButton

Abilitare o disabilitare il pulsante "altro", visualizzato sotto i pulsanti di colore normali.

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg=TRUE,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Specifica il testo del pulsante.

*bAltColorDlg*<br/>
in Specifica se la finestra di dialogo [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) o la finestra di dialogo colore di sistema viene aperta quando l'utente fa clic sul pulsante.

*bEnable*<br/>
in Specifica se il pulsante "altro" è abilitato o disabilitato.

### <a name="remarks"></a>Osservazioni

Fare clic sul pulsante "altro" per visualizzare una finestra di dialogo colore. Se il parametro *bAltColorDlg* è true, viene visualizzata la [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) ; in caso contrario, viene visualizzata la finestra di dialogo colore di sistema.

## <a name="cmfccolorbuttongetautomaticcolor"></a><a name="getautomaticcolor"></a> CMFCColorButton:: GetAutomaticColor

Recupera il colore corrente automatico (predefinito).

```
COLORREF GetAutomaticColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore RGB che rappresenta il colore automatico corrente.

### <a name="remarks"></a>Osservazioni

Il colore automatico corrente viene impostato dal metodo [CMFCColorButton:: EnableAutomaticButton](#enableautomaticbutton) .

## <a name="cmfccolorbuttongetcolor"></a><a name="getcolor"></a> CMFCColorButton:: GetColor

Recupera il colore attualmente selezionato.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonisdrawxptheme"></a><a name="isdrawxptheme"></a> CMFCColorButton:: IsDrawXPTheme

Indica se il pulsante colore corrente viene visualizzato nello stile di visualizzazione di Windows XP.

```
BOOL IsDrawXPTheme() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se gli stili di visualizzazione sono supportati e il pulsante colore corrente viene visualizzato nello stile di visualizzazione di Windows XP. in caso contrario, FALSE.

## <a name="cmfccolorbuttonm_benabledincustomizemode"></a><a name="m_benabledincustomizemode"></a> CMFCColorButton:: m_bEnabledInCustomizeMode

Imposta un pulsante colore sulla modalità di personalizzazione.

```
BOOL m_bEnabledInCustomizeMode;
```

### <a name="remarks"></a>Osservazioni

Se è necessario aggiungere un pulsante colore a una pagina della finestra di dialogo di personalizzazione (o consentire all'utente di effettuare un'altra selezione colori durante la personalizzazione), abilitare il pulsante impostando il `m_bEnabledInCustomizeMode` membro su true. Per impostazione predefinita, questo membro è impostato su FALSE.

## <a name="cmfccolorbuttonondraw"></a><a name="ondraw"></a> CMFCColorButton:: onpare

Chiamato dal Framework per eseguire il rendering di un'immagine del pulsante.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Punta al contesto di dispositivo usato per eseguire il rendering dell'immagine del pulsante.

*Rect*<br/>
in Rettangolo che delimita il pulsante.

*uiState*<br/>
in Specifica lo stato di visualizzazione del pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per personalizzare il processo di rendering.

## <a name="cmfccolorbuttonondrawborder"></a><a name="ondrawborder"></a> CMFCColorButton:: OnDrawBorder

Chiamato dal Framework per visualizzare il bordo del pulsante.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect& rectClient,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Punta al contesto di dispositivo usato per creare il bordo.

*rectClient*<br/>
in Rettangolo nel contesto di dispositivo specificato dal parametro *PDC* che definisce i limiti del pulsante da disegnare.

*uiState*<br/>
in Specifica lo stato di visualizzazione del pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare l'aspetto del bordo del pulsante colori.

## <a name="cmfccolorbuttonondrawfocusrect"></a><a name="ondrawfocusrect"></a> CMFCColorButton:: OnDrawFocusRect

Chiamata eseguita dal Framework per visualizzare un rettangolo di attivazione quando il pulsante ha lo stato attivo.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Punta al contesto di dispositivo usato per creare il rettangolo di attivazione.

*rectClient*<br/>
in Rettangolo nel contesto di dispositivo specificato dal parametro *PDC* che definisce i limiti del pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per personalizzare l'aspetto del rettangolo di attivazione.

## <a name="cmfccolorbuttononshowcolorpopup"></a><a name="onshowcolorpopup"></a> CMFCColorButton:: OnShowColorPopup

Chiamato prima che venga visualizzata la barra dei colori popup.

```
virtual void OnShowColorPopup();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonrebuildpalette"></a><a name="rebuildpalette"></a> CMFCColorButton:: RebuildPalette

Inizializza il `m_pPalette` membro dati protetto nella tavolozza specificata o nella tavolozza di sistema predefinita.

```cpp
void RebuildPalette(CPalette* pPal);
```

### <a name="parameters"></a>Parametri

*pPal*\
in Puntatore a una tavolozza logica o NULL. Se è NULL, viene utilizzata la tavolozza di sistema predefinita.

## <a name="cmfccolorbuttonsetcolor"></a><a name="setcolor"></a> CMFCColorButton:: ToColor

Specifica il colore del pulsante.

```cpp
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Valore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonsetcolorname"></a><a name="setcolorname"></a> CMFCColorButton:: secolorname

Specifica il nome di un colore.

```
static void SetColorName(
    COLORREF color,
    const CString& strName);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Valore RGB del colore.

*strName*<br/>
in Nome del colore.

### <a name="remarks"></a>Osservazioni

L'elenco dei nomi di colore è globale per ogni applicazione. Di conseguenza, questo metodo trasferisce i parametri a [CMFCColorBar:: Secolorname](../../mfc/reference/cmfccolorbar-class.md#setcolorname).

## <a name="cmfccolorbuttonsetcolumnsnumber"></a><a name="setcolumnsnumber"></a> CMFCColorButton:: SetColumnsNumber

Definisce il numero di colonne visualizzate nella tabella di colori presentata all'utente durante il processo di selezione dei colori dell'utente.

```cpp
void SetColumnsNumber(int nColumns);
```

### <a name="parameters"></a>Parametri

*nColumns*<br/>
in Specifica il numero di colonne.

### <a name="remarks"></a>Osservazioni

L'utente può selezionare un colore da una barra dei colori popup che visualizza una tabella di colori predefiniti. Utilizzare questo metodo per definire il numero di colonne nella tabella.

## <a name="cmfccolorbuttonsetdocumentcolors"></a><a name="setdocumentcolors"></a> CMFCColorButton:: SetDocumentColors

Specifica un set di colori e il nome del set. Il set di colori viene visualizzato usando un oggetto della [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) .

```cpp
void SetDocumentColors(
    LPCTSTR lpszLabel,
    CList<COLORREF,COLORREF>& lstColors);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Specifica l'etichetta da visualizzare con il set di colori del documento.

*lstColors*<br/>
in Riferimento a un elenco di valori RGB.

### <a name="remarks"></a>Osservazioni

Un `CMFCColorButton` oggetto gestisce un elenco di valori RGB trasferiti a un oggetto della [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) . Quando viene visualizzata la barra dei colori, questi colori vengono mostrati in una sezione speciale la cui etichetta è specificata dal parametro *lpszLabel* .

## <a name="cmfccolorbuttonsetpalette"></a><a name="setpalette"></a> CMFCColorButton:: sepalette

Specifica i colori standard da visualizzare sulla barra dei colori popup.

```cpp
void SetPalette(CPalette* pPalette);
```

### <a name="parameters"></a>Parametri

*pPalette*<br/>
in Puntatore a una tavolozza dei colori.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonsizetocontent"></a><a name="sizetocontent"></a> CMFCColorButton:: SizeToContent

Ridimensiona il controllo Button in modo da adattarlo al testo e all'immagine.

```
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```

### <a name="parameters"></a>Parametri

*bCalcOnly*<br/>
in Se è diverso da zero, la nuova dimensione del controllo Button viene calcolata, ma le dimensioni effettive non vengono modificate.

### <a name="return-value"></a>Valore restituito

`CSize`Oggetto che specifica una nuova dimensione del controllo pulsante.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonupdatecolor"></a><a name="updatecolor"></a> CMFCColorButton:: UpdateColor

Chiamata eseguita dal framework quando l'utente seleziona un colore dalla barra dei colori visualizzata quando l'utente fa clic sul pulsante del colore.

```
virtual void UpdateColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Colore selezionato dall'utente.

### <a name="remarks"></a>Osservazioni

La `UpdateColor` funzione modifica il colore del pulsante attualmente selezionato e invia una notifica all'elemento padre inviando un messaggio di WM_COMMAND con una notifica di BN_CLICKED standard. Usare il metodo [CMFCColorButton:: GetColor](#getcolor) per recuperare il colore selezionato.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCButton](../../mfc/reference/cmfcbutton-class.md)<br/>
[Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)<br/>
[CMFCColorButton:: OnShowColorPopup](#onshowcolorpopup)<br/>
[COLORREF](/windows/win32/gdi/colorref)<br/>
[Classe CPalette](../../mfc/reference/cpalette-class.md)<br/>
[CArray (classe)](../../mfc/reference/carray-class.md)<br/>
[Classe CList](../../mfc/reference/clist-class.md)<br/>
[CString](../../atl-mfc-shared/reference/cstringt-class.md)
