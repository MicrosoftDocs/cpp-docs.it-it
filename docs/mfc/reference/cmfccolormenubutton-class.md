---
title: CMFCColorMenuButton (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCColorMenuButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::CMFCColorMenuButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableAutomaticButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableDocumentColors
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableOtherButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableTearOff
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetAutomaticColor
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetColor
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetColorByCmdID
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnChangeParentWnd
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OpenColorDialog
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColor
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColorByCmdID
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColorName
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColumnsNumber
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::CopyFrom
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::CreatePopupMenu
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::IsEmptyMenuAllowed
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnDraw
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnDrawOnCustomizeList
helpviewer_keywords:
- CMFCColorMenuButton [MFC], CMFCColorMenuButton
- CMFCColorMenuButton [MFC], EnableAutomaticButton
- CMFCColorMenuButton [MFC], EnableDocumentColors
- CMFCColorMenuButton [MFC], EnableOtherButton
- CMFCColorMenuButton [MFC], EnableTearOff
- CMFCColorMenuButton [MFC], GetAutomaticColor
- CMFCColorMenuButton [MFC], GetColor
- CMFCColorMenuButton [MFC], GetColorByCmdID
- CMFCColorMenuButton [MFC], OnChangeParentWnd
- CMFCColorMenuButton [MFC], OpenColorDialog
- CMFCColorMenuButton [MFC], SetColor
- CMFCColorMenuButton [MFC], SetColorByCmdID
- CMFCColorMenuButton [MFC], SetColorName
- CMFCColorMenuButton [MFC], SetColumnsNumber
- CMFCColorMenuButton [MFC], CopyFrom
- CMFCColorMenuButton [MFC], CreatePopupMenu
- CMFCColorMenuButton [MFC], IsEmptyMenuAllowed
- CMFCColorMenuButton [MFC], OnDraw
- CMFCColorMenuButton [MFC], OnDrawOnCustomizeList
ms.assetid: 42685704-e994-4f7b-9553-62283c27b754
ms.openlocfilehash: 9c895573c626a890facfef689fce4b516aff5115
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752526"
---
# <a name="cmfccolormenubutton-class"></a>CMFCColorMenuButton (classe)

La `CMFCColorMenuButton` classe supporta un comando di menu o un pulsante della barra degli strumenti che avvia una finestra di dialogo di selezione colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorMenuButton : public CMFCToolBarMenuButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorMenuButton::CMFCColorMenuButton](#cmfccolormenubutton)|Costruisce un oggetto `CMFCColorMenuButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton)|Abilita e disabilita un pulsante "automatico" posizionato sopra i normali pulsanti di colore. (Il pulsante automatico di sistema standard è etichettato **automatico**.)|
|[CMFCColorMenuButton::EnableDocumentColors](#enabledocumentcolors)|Abilita la visualizzazione di colori specifici del documento anziché di colori di sistema.|
|[CMFCColorMenuButton::EnableOtherButton](#enableotherbutton)|Abilita e disabilita un pulsante "altro" posizionato sotto i normali pulsanti di colore. (Il pulsante di sistema standard "altro" è etichettato **Più colori**.)|
|[CMFCColorMenuButton::EnableTearOff](#enabletearoff)|Consente di strappare un riquadro dei colori.|
|[CMFCColorMenuButton::GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatico corrente.|
|[CMFCColorMenuButton::GetColor](#getcolor)|Recupera il colore del pulsante corrente.|
|[CMFCColorMenuButton::GetColorByCmdID](#getcolorbycmdid)|Recupera il colore che corrisponde a un ID di comando specificato.|
|[CMFCColorMenuButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando la finestra padre viene modificata.|
|[CMFCColorMenuButton::OpenColorDialog](#opencolordialog)|Apre una finestra di dialogo per la selezione dei colori.|
|[CMFCColorMenuButton::SetColor](#setcolor)|Imposta il colore del pulsante del colore corrente.|
|[CMFCColorMenuButton::SetColorByCmdID](#setcolorbycmdid)|Imposta il colore del pulsante del menu dei colori specificato.|
|[CMFCColorMenuButton::SetColorName](#setcolorname)|Imposta un nuovo nome per il colore specificato.|
|[CMFCColorMenuButton::SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne visualizzate `CMFCColorBar` da un oggetto.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorMenuButton::CopyFrom](#copyfrom)|Copia un altro pulsante della barra degli strumenti sul pulsante corrente.|
|[CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu)|Crea una finestra di dialogo di selezione colori.|
|[CMFCColorMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|Indica se sono supportati menu vuoti.|
|[CMFCColorMenuButton::OnDraw](#ondraw)|Chiamato dal framework per visualizzare un'immagine su un pulsante.|
|[CMFCColorMenuButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework `CMFCColorMenuButton` prima che un oggetto venga visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.|

## <a name="remarks"></a>Osservazioni

Per sostituire il comando di menu `CMFCColorMenuButton` originale o `CMFCColorMenuButton` il pulsante della barra degli strumenti con `ReplaceButton` un oggetto, creare l'oggetto, impostare gli stili della [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) appropriati e quindi chiamare il metodo della classe [CMFCToolBar.](../../mfc/reference/cmfctoolbar-class.md) Se si personalizza una barra degli strumenti, chiamare il [CMFCToolBarsCustomizeDialog::ReplaceButton](../../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) metodo.

La finestra di dialogo selezione colori viene creata durante l'elaborazione del [CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu) gestore dell'evento. Il gestore eventi notifica al frame padre un messaggio di WM_COMMAND. L'oggetto `CMFCColorMenuButton` invia l'ID di controllo assegnato al comando di menu originale o al pulsante della barra degli strumenti.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare e configurare `CMFCColorMenuButton` un pulsante di menu a colori utilizzando vari metodi nella classe . Nell'esempio, `CPalette` un oggetto viene prima creato e quindi `CMFCColorMenuButton` utilizzato per costruire un oggetto della classe. L'oggetto `CMFCColorMenuButton` viene quindi configurato attivando i pulsanti automatici e di altro tipo e impostandone il colore e il numero di colonne. Questo codice fa parte [dell'esempio Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#5](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_1.h)]
[!code-cpp[NVC_MFC_WordPad#6](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)

[CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolormenubutton.h

## <a name="cmfccolormenubuttoncmfccolormenubutton"></a><a name="cmfccolormenubutton"></a>CMFCColorMenuButton::CMFCColorMenuButton

Costruisce un oggetto `CMFCColorMenuButton`.

```
CMFCColorMenuButton();

CMFCColorMenuButton(
    UINT uiCmdID,
    LPCTSTR lpszText,
    CPalette* pPalette=NULL);
```

### <a name="parameters"></a>Parametri

*uiCmdID (informazioni in questo icomando)*<br/>
[in] UN ID di comando del pulsante.

*lpszText*<br/>
[in] Testo del pulsante.

*pTavolozza*<br/>
[in] Puntatore alla tavolozza dei colori del pulsante.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Il primo costruttore è il costruttore predefinito. Il colore corrente dell'oggetto e il colore automatico vengono inizializzati in nero (RGB(0, 0, 0)).

Il secondo costruttore inizializza il pulsante al colore che corrisponde all'ID di comando specificato.

## <a name="cmfccolormenubuttoncopyfrom"></a><a name="copyfrom"></a>CMFCColorMenuButton::CopyFrom

Copia un [CMFCToolBarMenuButton oggetto](../../mfc/reference/cmfctoolbarmenubutton-class.md)derivato da classe a un altro.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Pulsante Origine da copiare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo `CMFCColorMenuButton` per copiare gli oggetti derivati dall'oggetto.

## <a name="cmfccolormenubuttoncreatepopupmenu"></a><a name="createpopupmenu"></a>CMFCColorMenuButton::CreatePopupMenu

Crea una finestra di dialogo di selezione colori.

```
virtual CMFCPopupMenu* CreatePopupMenu();
```

### <a name="return-value"></a>Valore restituito

Oggetto che rappresenta una finestra di dialogo di selezione colori.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework quando l'utente preme un pulsante di menu a colori.

## <a name="cmfccolormenubuttonenableautomaticbutton"></a><a name="enableautomaticbutton"></a>CMFCColorMenuButton::EnableAutomaticButton

Abilita e disabilita un pulsante "automatico" posizionato sopra i normali pulsanti di colore. (Il pulsante automatico di sistema standard è etichettato **automatico**.)

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Specifica il testo del pulsante visualizzato quando il pulsante diventa automatico.

*colorAutomatic*<br/>
[in] Specifica un nuovo colore automatico.

*bEnable*<br/>
[in] Specifica se il pulsante è automatico o meno.

### <a name="remarks"></a>Osservazioni

Il pulsante automatico applica il colore predefinito corrente.

## <a name="cmfccolormenubuttonenabledocumentcolors"></a><a name="enabledocumentcolors"></a>CMFCColorMenuButton::EnableDocumentColors

Abilita la visualizzazione di colori specifici del documento anziché di colori di sistema.

```cpp
void EnableDocumentColors(
    LPCTSTR lpszLabel,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Specifica il testo del pulsante.

*bEnable*<br/>
[in] TRUE per visualizzare colori specifici del documento o FALSE per visualizzare i colori di sistema.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per visualizzare i colori correnti del documento o i colori della tavolozza di sistema quando l'utente fa clic su un pulsante del menu dei colori.

## <a name="cmfccolormenubuttonenableotherbutton"></a><a name="enableotherbutton"></a>CMFCColorMenuButton::EnableOtherButton

Abilita e disabilita un pulsante "altro" posizionato sotto i normali pulsanti di colore. (Il pulsante di sistema standard "altro" è etichettato **Più colori**.)

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg=TRUE,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Specifica il testo del pulsante.

*bAltColorDlg*<br/>
[in] Specificare TRUE `CMFCColorDialog` per visualizzare la finestra di dialogo o FALSE per visualizzare la finestra di dialogo del colore di sistema standard.

*bEnable*<br/>
[in] Specificare TRUE per visualizzare il pulsante "altro"; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolormenubuttonenabletearoff"></a><a name="enabletearoff"></a>CMFCColorMenuButton::EnableTearOff

Consente di strappare un riquadro dei colori.

```cpp
void EnableTearOff(
    UINT uiID,
    int nVertDockColumns=-1,
    int nHorzDockRows=-1);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] Specifica l'ID per il riquadro di strappo.

*nVertDockColumns*<br/>
[in] Specifica il numero di colonne nel riquadro dei colori ancorato verticalmente mentre è in stato di ripartizione.

*nHorzDockRows*<br/>
[in] Specifica il numero di righe per il riquadro dei colori ancorato orizzontalmente mentre è in stato di rifacimento.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per abilitare la funzionalità "tear-off" per `CMFCColorMenuButton` il riquadro dei colori che viene visualizzato quando si preme il pulsante.

## <a name="cmfccolormenubuttongetautomaticcolor"></a><a name="getautomaticcolor"></a>CMFCColorMenuButton::GetAutomaticColor

Recupera il colore automatico corrente.

```
COLORREF GetAutomaticColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB che rappresenta il colore automatico corrente.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per ottenere il colore automatico impostato da [CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton).

## <a name="cmfccolormenubuttongetcolor"></a><a name="getcolor"></a>CMFCColorMenuButton::GetColor

Recupera il colore del pulsante corrente.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore del pulsante.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolormenubuttongetcolorbycmdid"></a><a name="getcolorbycmdid"></a>CMFCColorMenuButton::GetColorByCmdID

Recupera il colore che corrisponde a un ID di comando specificato.

```
static COLORREF GetColorByCmdID(UINT uiCmdID);
```

### <a name="parameters"></a>Parametri

*uiCmdID (informazioni in questo icomando)*<br/>
[in] Un ID di comando.

### <a name="return-value"></a>Valore restituito

Colore che corrisponde all'ID di comando specificato.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo quando si dispone di diversi pulsanti di colore in un'applicazione. Quando l'utente fa clic su un pulsante di colore, il pulsante invia il proprio ID di comando in un WM_COMMAND messaggio all'elemento padre. Il `GetColorByCmdID` metodo utilizza l'ID di comando per recuperare il colore corrispondente.

## <a name="cmfccolormenubuttonisemptymenuallowed"></a><a name="isemptymenuallowed"></a>CMFCColorMenuButton::IsEmptyMenuAllowed

Indica se sono supportati menu vuoti.

```
virtual BOOL IsEmptyMenuAllowed() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono consentiti menu vuoti; in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

I menu vuoti sono supportati per impostazione predefinita. Eseguire l'override di questo metodo per modificare questo comportamento nella classe derivata.

## <a name="cmfccolormenubuttononchangeparentwnd"></a><a name="onchangeparentwnd"></a>CMFCColorMenuButton::OnChangeParentWnd

Chiamato dal framework quando la finestra padre viene modificata.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla nuova finestra padre.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolormenubuttonondraw"></a><a name="ondraw"></a>CMFCColorMenuButton::OnDraw

Chiamato dal framework per visualizzare un'immagine su un pulsante.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    CMFCToolBarImages* pImages,
    BOOL bHorz=TRUE,
    BOOL bCustomizeMode=FALSE,
    BOOL bHighlight=FALSE,
    BOOL bDrawBorder=TRUE,
    BOOL bGrayDisabledButtons=TRUE);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo che delimita l'area da ridisegnare.

*pImmagini*<br/>
[in] Punta a un elenco di immagini della barra degli strumenti.

*bHorz*<br/>
[in] TRUE per specificare che la barra degli strumenti è in uno stato ancorato orizzontale; in caso contrario, FALSE. Il valore predefinito è TRUE.

*bCustomizeMode (Modalità di personalizzazione)*<br/>
[in] TRUE per specificare che l'applicazione è in modalità di personalizzazione. in caso contrario, FALSE. Il valore predefinito è FALSE.

*bEvidenziare*<br/>
[in] TRUE per specificare che il pulsante è evidenziato; in caso contrario, FALSE. Il valore predefinito è FALSE.

*bDrawBorder*<br/>
[in] TRUE per specificare che viene visualizzato il bordo del pulsante. in caso contrario, FALSE. Il valore predefinito è TRUE.

*bGrayDisabledButtons (Pulsanti)*<br/>
[in] TRUE per specificare che i pulsanti disabilitati sono in grigio (in grigio); in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolormenubuttonondrawoncustomizelist"></a><a name="ondrawoncustomizelist"></a>CMFCColorMenuButton::OnDrawOnCustomizeList

Chiamato dal framework `CMFCColorMenuButton` prima che un oggetto venga visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo che delimita il pulsante da disegnare.

*bSelezionato*<br/>
[in] TRUE specifica che il pulsante è nello stato selezionato; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

La larghezza del pulsante.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal `CMFCColorMenuButton` framework quando un oggetto viene visualizzato nella casella di riepilogo durante il processo di personalizzazione della barra degli strumenti.

## <a name="cmfccolormenubuttonopencolordialog"></a><a name="opencolordialog"></a>CMFCColorMenuButton::OpenColorDialog

Apre una finestra di dialogo per la selezione dei colori.

```
virtual BOOL OpenColorDialog(
    const COLORREF colorDefault,
    COLORREF& colorRes);
```

### <a name="parameters"></a>Parametri

*colorPredefinito*<br/>
[in] Colore predefinito selezionato nella finestra di dialogo dei colori.

*colorRes*<br/>
[fuori] Restituisce il colore selezionato dall'utente dalla finestra di dialogo del colore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente seleziona un nuovo colore; in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

Quando si fa clic sul pulsante di menu, chiamare questo metodo per aprire una finestra di dialogo a colori. Se il valore restituito è diverso da zero, il colore selezionato dall'utente viene archiviato nel parametro *colorRes.* Utilizzare il [CMFCColorMenuButton::EnableOtherButton](#enableotherbutton) metodo per passare tra la finestra di dialogo di colore standard e [il CMFCColorDialog classe](../../mfc/reference/cmfccolordialog-class.md) la finestra di dialogo.

## <a name="cmfccolormenubuttonsetcolor"></a><a name="setcolor"></a>CMFCColorMenuButton::SetColor

Imposta il colore del pulsante del colore corrente.

```
virtual void SetColor(
    COLORREF clr,
    BOOL bNotify=TRUE);
```

### <a name="parameters"></a>Parametri

*Clr*<br/>
[in] Valore di colore RGB.

*bNotifica*<br/>
[in] TRUE per applicare il colore del parametro *clr* a qualsiasi pulsante di menu associato o pulsante della barra degli strumenti; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per modificare il colore del pulsante del colore corrente. Se il *bNotify* parametro è diverso da zero, il colore del pulsante corrispondente in qualsiasi menu popup associato o barra degli strumenti viene modificato al colore specificato dal *clr* parametro.

## <a name="cmfccolormenubuttonsetcolorbycmdid"></a><a name="setcolorbycmdid"></a>CMFCColorMenuButton::SetColorByCmdID

Imposta il colore del pulsante del menu dei colori specificato.

```
static void SetColorByCmdID(
    UINT uiCmdID,
    COLORREF color);
```

### <a name="parameters"></a>Parametri

*uiCmdID (informazioni in questo icomando)*<br/>
[in] ID risorsa di un pulsante del menu a colori.

*Colore*<br/>
[in] Valore di colore RGB.

## <a name="cmfccolormenubuttonsetcolorname"></a><a name="setcolorname"></a>CMFCColorMenuButton::SetColorName

Imposta un nuovo nome per il colore specificato.

```
static void SetColorName(
    COLORREF color,
    const CString& strName);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Valore RGB del colore di cui cambia il nome.

*strName*<br/>
[in] Nuovo nome del colore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolormenubuttonsetcolumnsnumber"></a><a name="setcolumnsnumber"></a>CMFCColorMenuButton::SetColumnsNumber

Imposta il numero di colonne da visualizzare in un controllo di selezione del colore ( [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) oggetto).

```cpp
void SetColumnsNumber(int nColumns);
```

### <a name="parameters"></a>Parametri

*nColumns*<br/>
[in] Numero di colonne da visualizzare.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)<br/>
[CMFCToolBarsCustomizeDialog (classe)](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)<br/>
[CMFCColorButton (classe)](../../mfc/reference/cmfccolorbutton-class.md)
