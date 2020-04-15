---
title: CMFCColorButton (classe)
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
ms.openlocfilehash: 21d05fd8e805467f1a7a77d20c81d5ba0401455e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367725"
---
# <a name="cmfccolorbutton-class"></a>CMFCColorButton (classe)

Il `CMFCColorButton` e [CMFCColorBar classi della classe](../../mfc/reference/cmfccolorbar-class.md) vengono utilizzate insieme per implementare un controllo selezione colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorButton : public CMFCButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorButton::CMFCColorButton](#cmfccolorbutton)|Costruisce un oggetto `CMFCColorButton` nuovo.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorButton::EnableAutomaticButton](#enableautomaticbutton)|Abilita e disabilita un pulsante "automatico" posizionato sopra i normali pulsanti di colore. (Il pulsante automatico di sistema standard è etichettato **automatico**.)|
|[CMFCColorButton::EnableOtherButton](#enableotherbutton)|Abilita e disabilita un pulsante "altro" posizionato sotto i normali pulsanti di colore. (Il pulsante di sistema standard "altro" è etichettato **Più colori**.)|
|[CMFCColorButton::GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatico corrente.|
|[CMFCColorButton::GetColor](#getcolor)|Recupera il colore di un pulsante.|
|[CMFCColorButton::SetColor](#setcolor)|Imposta il colore di un pulsante.|
|[CMFCColorButton::SetColorName](#setcolorname)|Imposta un nome di colore.|
|[CMFCColorButton::SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne nella finestra di dialogo di selezione colori.|
|[CMFCColorButton::SetDocumentColors](#setdocumentcolors)|Specifica un elenco di colori specifici del documento visualizzati nella finestra di dialogo di selezione colori.|
|[CMFCColorButton::SetPalette (Insieme)](#setpalette)|Specifica una tavolozza di colori di visualizzazione standard.|
|[CMFCColorButton::SizeToContent](#sizetocontent)|Modifica le dimensioni del controllo pulsante, a seconda del testo e delle dimensioni dell'immagine.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorButton::IsDrawXPTheme](#isdrawxptheme)|Indica se il pulsante del colore corrente viene visualizzato nello stile di visualizzazione di Windows XP.|
|[CMFCColorButton::OnDraw](#ondraw)|Chiamato dal framework per visualizzare un'immagine del pulsante.|
|[CMFCColorButton::OnDrawBorder](#ondrawborder)|Chiamato dal framework per visualizzare il bordo del pulsante.|
|[CMFCColorButton::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal framework per visualizzare un rettangolo di attivazione quando il pulsante ha lo stato attivo.|
|[CMFCColorButton::OnShowColorPopup](#onshowcolorpopup)|Chiamato dal framework quando la finestra di dialogo di selezione colori sta per essere visualizzata.|
|[CMFCColorButton::RebuildPalette](#rebuildpalette)|Inizializza il `m_pPalette` membro dati protetto sulla tavolozza specificata o sulla tavolozza di sistema predefinita.|
|[CMFCColorButton::UpdateColor](#updatecolor)|Chiamato dal framework quando l'utente seleziona un colore dalla tavolozza della finestra di dialogo di selezione colori.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|`m_bAltColorDlg`|Valore booleano. Se TRUE, il framework visualizza il [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) finestra di dialogo colore quando si fa clic *sull'altro* pulsante o se FALSE, la finestra di dialogo del colore di sistema. Il valore predefinito è TRUE. Per ulteriori informazioni, vedere [CMFCColorButton::EnableOtherButton](#enableotherbutton).|
|`m_bAutoSetFocus`|Valore booleano. Se TRUE, il framework imposta lo stato attivo sul menu a colori quando viene visualizzato il menu o se FALSE, non modifica lo stato attivo. Il valore predefinito è TRUE.|
|[CMFCColorButton::m_bEnabledInCustomizeMode](#m_benabledincustomizemode)|Indica se la modalità di personalizzazione è abilitata per il pulsante del colore.|
|`m_Color`|Valore [COLORREF.](/windows/win32/gdi/colorref) Contiene il colore attualmente selezionato.|
|`m_ColorAutomatic`|Valore [COLORREF.](/windows/win32/gdi/colorref) Contiene il colore predefinito attualmente selezionato.|
|`m_Colors`|Oggetto [CArray](../../mfc/reference/carray-class.md) di valori [COLORREF.](/windows/win32/gdi/colorref) Contiene i colori attualmente disponibili.|
|`m_lstDocColors`|Un [CList](../../mfc/reference/clist-class.md) di valori [COLORREF.](/windows/win32/gdi/colorref) Contiene i colori del documento corrente.|
|`m_nColumns`|Valore intero. Contiene il numero di colonne da visualizzare nella griglia dei colori in un menu di selezione dei colori.|
|`m_pPalette`|Puntatore a un [oggetto CPalette](../../mfc/reference/cpalette-class.md). Contiene i colori disponibili nel menu di selezione dei colori corrente.|
|`m_pPopup`|Puntatore a un [CMFCColorPopupMenu oggetto classe.](../../mfc/reference/cmfccolorpopupmenu-class.md) Menu di selezione dei colori visualizzato quando si fa clic sul pulsante del colore.|
|`m_strAutoColorText`|Stringa. L'etichetta del pulsante "automatico" in un menu di selezione dei colori.|
|`m_strDocColorsText`|Stringa. Etichetta del pulsante in un menu di selezione dei colori che visualizza i colori del documento.|
|`m_strOtherText`|Stringa. L'etichetta del pulsante "altro" in un menu di selezione dei colori.|

## <a name="remarks"></a>Osservazioni

Per impostazione `CMFCColorButton` predefinita, la classe si comporta come un pulsante di comando che apre una finestra di dialogo di selezione colori. La finestra di dialogo Selezione colori contiene una matrice di piccoli pulsanti di colore e un pulsante "altro" che visualizza un selettore colore personalizzato. (Il pulsante di sistema standard "altro" è etichettato **Più colori**.) Quando un utente seleziona un `CMFCColorButton` nuovo colore, l'oggetto riflette la modifica e visualizza il colore selezionato.

Creare un controllo pulsante colore direttamente nel codice o utilizzando lo strumento **ClassWizard** e un modello di finestra di dialogo. Se si crea direttamente un controllo `CMFCColorButton` pulsante colore, aggiungere una `Create` variabile all'applicazione e quindi chiamare il costruttore e i metodi dell'oggetto. `CMFCColorButton` Se si utilizza **ClassWizard** `CButton` , aggiungere una variabile all'applicazione e `CButton` quindi `CMFCColorButton`modificare il tipo della variabile da in .

La finestra di dialogo Selezione colori ( [Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)) viene visualizzata dal metodo `OnLButtonDown` [CMFCColorButton::OnShowColorPopup](#onshowcolorpopup) quando il framework chiama il gestore eventi. Il [CMFCColorButton::OnShowColorPopup](#onshowcolorpopup) metodo può essere sottoposto a override per supportare la selezione di colori personalizzati.

L'oggetto `CMFCColorButton` notifica all'elemento padre che un colore sta cambiando inviandogli un WM_COMMAND notifica BN_CLICKED. L'elemento padre utilizza il [CMFCColorButton::GetColor](#getcolor) metodo per recuperare il colore corrente.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare un `CMFCColorButton` pulsante di colore utilizzando vari metodi nella classe . I metodi impostano il colore del pulsante di colore e il relativo numero di colonne e abilitano i pulsanti automatici e gli altri. Questo esempio fa parte dell'esempio Demo della barra di [stato.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_StatusBarDemo#10](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_1.h)]
[!code-cpp[NVC_MFC_StatusBarDemo#11](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_2.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolorbutton.h

## <a name="cmfccolorbuttoncmfccolorbutton"></a><a name="cmfccolorbutton"></a>CMFCColorButton::CMFCColorButton

Costruisce un oggetto `CMFCColorButton` nuovo.

```
CMFCColorButton();
```

## <a name="cmfccolorbuttonenableautomaticbutton"></a><a name="enableautomaticbutton"></a>CMFCColorButton::EnableAutomaticButton

Attivare o disattivare il pulsante "automatico" di un controllo selezione colori e impostare il colore automatico (predefinito).

```
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Specifica il testo del pulsante automatico.

*colorAutomatic*<br/>
[in] Valore RGB che specifica il colore predefinito del pulsante automatico.

*bEnable*<br/>
[in] Specifica se il pulsante automatico è abilitato o disabilitato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonenableotherbutton"></a><a name="enableotherbutton"></a>CMFCColorButton::EnableOtherButton

Attivare o disattivare il pulsante "altro", che appare sotto i normali pulsanti di colore.

```
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg=TRUE,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Specifica il testo del pulsante.

*bAltColorDlg*<br/>
[in] Specifica se il [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) la finestra di dialogo o la finestra di dialogo del colore di sistema viene aperta quando l'utente fa clic sul pulsante.

*bEnable*<br/>
[in] Specifica se il pulsante "altro" è abilitato o disabilitato.

### <a name="remarks"></a>Osservazioni

Fare clic sul pulsante "altro" per visualizzare una finestra di dialogo a colori. Se il *bAltColorDlg* parametro è TRUE, il [CMFCColorDialog classe](../../mfc/reference/cmfccolordialog-class.md) viene visualizzata; in caso contrario, viene visualizzata la finestra di dialogo del colore di sistema.

## <a name="cmfccolorbuttongetautomaticcolor"></a><a name="getautomaticcolor"></a>CMFCColorButton::GetAutomaticColor

Recupera il colore automatico corrente (predefinito).

```
COLORREF GetAutomaticColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore RGB che rappresenta il colore automatico corrente.

### <a name="remarks"></a>Osservazioni

Il colore automatico corrente viene impostato dal [Metodo CMFCColorButton::EnableAutomaticButton](#enableautomaticbutton) .

## <a name="cmfccolorbuttongetcolor"></a><a name="getcolor"></a>CMFCColorButton::GetColor

Recupera il colore attualmente selezionato.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Un valore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonisdrawxptheme"></a><a name="isdrawxptheme"></a>CMFCColorButton::IsDrawXPTheme

Indica se il pulsante del colore corrente viene visualizzato nello stile di visualizzazione di Windows XP.

```
BOOL IsDrawXPTheme() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe gli stili di visualizzazione sono supportati e il pulsante del colore corrente viene visualizzato nello stile di visualizzazione di Windows XP; in caso contrario, FALSE.

## <a name="cmfccolorbuttonm_benabledincustomizemode"></a><a name="m_benabledincustomizemode"></a>CMFCColorButton::m_bEnabledInCustomizeMode

Imposta un pulsante di colore sulla modalità di personalizzazione.

```
BOOL m_bEnabledInCustomizeMode;
```

### <a name="remarks"></a>Osservazioni

Se è necessario aggiungere un pulsante di colore alla pagina di una finestra di dialogo di `m_bEnabledInCustomizeMode` personalizzazione (o consentire all'utente di effettuare un'altra selezione del colore durante la personalizzazione), abilitare il pulsante impostando il membro su TRUE. Per impostazione predefinita, questo membro è impostato su FALSE.

## <a name="cmfccolorbuttonondraw"></a><a name="ondraw"></a>CMFCColorButton::OnDraw

Chiamato dal framework per eseguire il rendering di un'immagine del pulsante.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Punta al contesto di dispositivo utilizzato per eseguire il rendering dell'immagine del pulsante.

*Rect*<br/>
[in] Rettangolo che delimita il pulsante.

*uiState (informazioni in stato di stato*<br/>
[in] Specifica lo stato di visualizzazione del pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per personalizzare il processo di rendering.

## <a name="cmfccolorbuttonondrawborder"></a><a name="ondrawborder"></a>CMFCColorButton::OnDrawBorder

Chiamato dal framework per visualizzare il bordo del pulsante.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect& rectClient,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Punta al contesto di periferica utilizzato per disegnare il bordo.

*RectClient (client)*<br/>
[in] Rettangolo nel contesto di periferica specificato dal parametro *pDC* che definisce i limiti del pulsante da disegnare.

*uiState (informazioni in stato di stato*<br/>
[in] Specifica lo stato di visualizzazione del pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare l'aspetto del bordo del pulsante colore.

## <a name="cmfccolorbuttonondrawfocusrect"></a><a name="ondrawfocusrect"></a>CMFCColorButton::OnDrawFocusRect

Chiamato dal framework per visualizzare un rettangolo di attivazione quando il pulsante ha lo stato attivo.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Punta al contesto di dispositivo utilizzato per disegnare il rettangolo di attivazione.

*RectClient (client)*<br/>
[in] Rettangolo nel contesto di periferica specificato dal parametro *pDC* che definisce i limiti del pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per personalizzare l'aspetto del rettangolo di attivazione.

## <a name="cmfccolorbuttononshowcolorpopup"></a><a name="onshowcolorpopup"></a>CMFCColorButton::OnShowColorPopup

Chiamato prima che venga visualizzata la barra dei colori popup.

```
virtual void OnShowColorPopup();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonrebuildpalette"></a><a name="rebuildpalette"></a>CMFCColorButton::RebuildPalette

Inizializza il `m_pPalette` membro dati protetto sulla tavolozza specificata o sulla tavolozza di sistema predefinita.

```
void RebuildPalette(CPalette* pPal);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pPal (in pal)*|[in] Puntatore a una tavolozza logica o NULL. Se NULL, viene utilizzata la tavolozza di sistema predefinita.|

## <a name="cmfccolorbuttonsetcolor"></a><a name="setcolor"></a>CMFCColorButton::SetColor

Specifica il colore del pulsante.

```
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Un valore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonsetcolorname"></a><a name="setcolorname"></a>CMFCColorButton::SetColorName

Specifica il nome di un colore.

```
static void SetColorName(
    COLORREF color,
    const CString& strName);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Valore RGB del colore.

*strName*<br/>
[in] Nome del colore.

### <a name="remarks"></a>Osservazioni

L'elenco dei nomi dei colori è globale per ogni applicazione. Di conseguenza, questo metodo trasferisce i parametri a [CMFCColorBar::SetColorName](../../mfc/reference/cmfccolorbar-class.md#setcolorname).

## <a name="cmfccolorbuttonsetcolumnsnumber"></a><a name="setcolumnsnumber"></a>CMFCColorButton::SetColumnsNumber

Definisce il numero di colonne visualizzate nella tabella dei colori che viene presentata all'utente durante il processo di selezione dei colori dell'utente.

```
void SetColumnsNumber(int nColumns);
```

### <a name="parameters"></a>Parametri

*nColumns*<br/>
[in] Specifica il numero di colonne.

### <a name="remarks"></a>Osservazioni

L'utente può selezionare un colore da una barra dei colori popup che visualizza una tabella di colori predefiniti. Utilizzare questo metodo per definire il numero di colonne nella tabella.

## <a name="cmfccolorbuttonsetdocumentcolors"></a><a name="setdocumentcolors"></a>CMFCColorButton::SetDocumentColors

Specifica un set di colori e il nome del set. Il set di colori viene visualizzato utilizzando un [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) oggetto.

```
void SetDocumentColors(
    LPCTSTR lpszLabel,
    CList<COLORREF,COLORREF>& lstColors);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Specifica l'etichetta da visualizzare con l'insieme di colori del documento.

*LstColori*<br/>
[in] Riferimento a un elenco di valori RGB.

### <a name="remarks"></a>Osservazioni

Un `CMFCColorButton` oggetto gestisce un elenco di valori RGB che vengono trasferiti a un [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) oggetto. Quando viene visualizzata la barra dei colori, questi colori vengono visualizzati in una sezione speciale la cui etichetta è specificata dal *lpszLabel* parametro.

## <a name="cmfccolorbuttonsetpalette"></a><a name="setpalette"></a>CMFCColorButton::SetPalette (Insieme)

Specifica i colori standard da visualizzare sulla barra dei colori popup.

```
void SetPalette(CPalette* pPalette);
```

### <a name="parameters"></a>Parametri

*pTavolozza*<br/>
[in] Puntatore a una tavolozza dei colori.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonsizetocontent"></a><a name="sizetocontent"></a>CMFCColorButton::SizeToContent

Ridimensiona il controllo pulsante per adattarlo al testo e all'immagine.

```
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```

### <a name="parameters"></a>Parametri

*bCalcolsolo*<br/>
[in] Se diversa da zero, viene calcolata la nuova dimensione del controllo pulsante, ma le dimensioni effettive non vengono modificate.

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` che specifica una nuova dimensione del controllo pulsante.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbuttonupdatecolor"></a><a name="updatecolor"></a>CMFCColorButton::UpdateColor

Chiamato dal framework quando l'utente seleziona un colore dalla barra dei colori che viene visualizzata quando l'utente fa clic sul pulsante del colore.

```
virtual void UpdateColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Colore selezionato dall'utente.

### <a name="remarks"></a>Osservazioni

La `UpdateColor` funzione cambia il colore del pulsante attualmente selezionato e invia una notifica padre inviando un messaggio di WM_COMMAND con una notifica standard BN_CLICKED. Utilizzare il [CMFCColorButton::GetColor](#getcolor) metodo per recuperare il colore selezionato.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCButton (classe)](../../mfc/reference/cmfcbutton-class.md)<br/>
[Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)<br/>
[CMFCColorButton::OnShowColorPopup](#onshowcolorpopup)<br/>
[COLORREF](/windows/win32/gdi/colorref)<br/>
[Classe CPalette](../../mfc/reference/cpalette-class.md)<br/>
[Classe CArray](../../mfc/reference/carray-class.md)<br/>
[Classe CList](../../mfc/reference/clist-class.md)<br/>
[CString](../../atl-mfc-shared/reference/cstringt-class.md)
