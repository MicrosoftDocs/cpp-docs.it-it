---
description: 'Altre informazioni su: classe CMFCColorMenuButton'
title: Classe CMFCColorMenuButton
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
ms.openlocfilehash: 4ba0934e872adc4e4b33c2ae5700ecb0fc46e6d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327667"
---
# <a name="cmfccolormenubutton-class"></a>Classe CMFCColorMenuButton

La `CMFCColorMenuButton` classe supporta un comando di menu o un pulsante della barra degli strumenti che consente di avviare una finestra di dialogo di selezione colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorMenuButton : public CMFCToolBarMenuButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCColorMenuButton:: CMFCColorMenuButton](#cmfccolormenubutton)|Costruisce un oggetto `CMFCColorMenuButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCColorMenuButton:: EnableAutomaticButton](#enableautomaticbutton)|Abilita e Disabilita un pulsante "automatico" posizionato sopra i pulsanti di colore normale. Il pulsante automatico sistema standard è contrassegnato come **automatico**.|
|[CMFCColorMenuButton:: EnableDocumentColors](#enabledocumentcolors)|Consente la visualizzazione di colori specifici del documento anziché dei colori di sistema.|
|[CMFCColorMenuButton:: EnableOtherButton](#enableotherbutton)|Abilita e Disabilita un pulsante "altro" posizionato sotto i pulsanti di colore normale. Il pulsante "altro" di sistema standard è contrassegnato con un **numero maggiore di colori**.|
|[CMFCColorMenuButton:: EnableTearOff](#enabletearoff)|Consente di eliminare un riquadro colori.|
|[CMFCColorMenuButton:: GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatico corrente.|
|[CMFCColorMenuButton:: GetColor](#getcolor)|Recupera il colore del pulsante corrente.|
|[CMFCColorMenuButton:: GetColorByCmdID](#getcolorbycmdid)|Recupera il colore che corrisponde a un ID di comando specificato.|
|[CMFCColorMenuButton:: OnChangeParentWnd](#onchangeparentwnd)|Chiamata eseguita dal framework quando viene modificata la finestra padre.|
|[CMFCColorMenuButton:: OpenColorDialog](#opencolordialog)|Apre una finestra di dialogo di selezione colori.|
|[CMFCColorMenuButton:: ToColor](#setcolor)|Imposta il colore del pulsante del colore corrente.|
|[CMFCColorMenuButton:: SetColorByCmdID](#setcolorbycmdid)|Imposta il colore del pulsante di menu colori specificato.|
|[CMFCColorMenuButton:: secolorname](#setcolorname)|Imposta un nuovo nome per il colore specificato.|
|[CMFCColorMenuButton:: SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne visualizzate da un `CMFCColorBar` oggetto.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCColorMenuButton:: CopyFrom](#copyfrom)|Copia un altro pulsante della barra degli strumenti nel pulsante corrente.|
|[CMFCColorMenuButton:: CreatePopupMenu](#createpopupmenu)|Crea una finestra di dialogo di selezione colori.|
|[CMFCColorMenuButton:: IsEmptyMenuAllowed](#isemptymenuallowed)|Indica se i menu vuoti sono supportati.|
|[CMFCColorMenuButton:: onpare](#ondraw)|Chiamata eseguita dal Framework per visualizzare un'immagine su un pulsante.|
|[CMFCColorMenuButton:: OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal Framework prima che un `CMFCColorMenuButton` oggetto venga visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.|

## <a name="remarks"></a>Commenti

Per sostituire il comando di menu originale o il pulsante della barra degli strumenti con un `CMFCColorMenuButton` oggetto, creare l' `CMFCColorMenuButton` oggetto, impostare gli stili della [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) appropriati, quindi chiamare il `ReplaceButton` metodo della classe di [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) . Se si personalizza una barra degli strumenti, chiamare il metodo [CMFCToolBarsCustomizeDialog:: ReplaceButton](../../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) .

La finestra di dialogo Selezione colori viene creata durante l'elaborazione del gestore dell'evento [CMFCColorMenuButton:: CreatePopupMenu](#createpopupmenu) . Il gestore eventi Notifica al frame padre un messaggio WM_COMMAND. L' `CMFCColorMenuButton` oggetto invia l'ID di controllo assegnato al comando di menu originale o al pulsante della barra degli strumenti.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare e configurare un pulsante di menu colori utilizzando diversi metodi della `CMFCColorMenuButton` classe. Nell'esempio `CPalette` viene prima creato un oggetto che viene quindi usato per costruire un oggetto della `CMFCColorMenuButton` classe. L' `CMFCColorMenuButton` oggetto viene quindi configurato abilitando i pulsanti automatico e altro e impostando il colore e il numero di colonne. Questo codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#5](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_1.h)]
[!code-cpp[NVC_MFC_WordPad#6](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)

[CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolormenubutton. h

## <a name="cmfccolormenubuttoncmfccolormenubutton"></a><a name="cmfccolormenubutton"></a> CMFCColorMenuButton:: CMFCColorMenuButton

Costruisce un oggetto `CMFCColorMenuButton`.

```
CMFCColorMenuButton();

CMFCColorMenuButton(
    UINT uiCmdID,
    LPCTSTR lpszText,
    CPalette* pPalette=NULL);
```

### <a name="parameters"></a>Parametri

*uiCmdID*<br/>
in ID del comando Button.

*lpszText*<br/>
in Testo del pulsante.

*pPalette*<br/>
in Puntatore alla tavolozza dei colori del pulsante.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Il primo costruttore è il costruttore predefinito. Il colore corrente e il colore automatico dell'oggetto vengono inizializzati in nero (RGB (0, 0, 0)).

Il secondo costruttore inizializza il pulsante sul colore che corrisponde all'ID di comando specificato.

## <a name="cmfccolormenubuttoncopyfrom"></a><a name="copyfrom"></a> CMFCColorMenuButton:: CopyFrom

Copia un oggetto derivato dalla [Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)in un altro oggetto.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
in Pulsante di origine da copiare.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo per copiare gli oggetti derivati dall' `CMFCColorMenuButton` oggetto.

## <a name="cmfccolormenubuttoncreatepopupmenu"></a><a name="createpopupmenu"></a> CMFCColorMenuButton:: CreatePopupMenu

Crea una finestra di dialogo di selezione colori.

```
virtual CMFCPopupMenu* CreatePopupMenu();
```

### <a name="return-value"></a>Valore restituito

Oggetto che rappresenta una finestra di dialogo di selezione colori.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato dal framework quando l'utente preme un pulsante di menu colori.

## <a name="cmfccolormenubuttonenableautomaticbutton"></a><a name="enableautomaticbutton"></a> CMFCColorMenuButton:: EnableAutomaticButton

Abilita e Disabilita un pulsante "automatico" posizionato sopra i pulsanti di colore normale. Il pulsante automatico sistema standard è contrassegnato come **automatico**.

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Specifica il testo del pulsante visualizzato quando il pulsante diventa automatico.

*colorAutomatic*<br/>
in Specifica un nuovo colore automatico.

*bEnable*<br/>
in Specifica se il pulsante è automatico o meno.

### <a name="remarks"></a>Commenti

Il pulsante automatico applica il colore predefinito corrente.

## <a name="cmfccolormenubuttonenabledocumentcolors"></a><a name="enabledocumentcolors"></a> CMFCColorMenuButton:: EnableDocumentColors

Consente la visualizzazione di colori specifici del documento anziché dei colori di sistema.

```cpp
void EnableDocumentColors(
    LPCTSTR lpszLabel,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Specifica il testo del pulsante.

*bEnable*<br/>
in TRUE per visualizzare i colori specifici del documento o FALSE per visualizzare i colori di sistema.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per visualizzare i colori del documento corrente o i colori della tavolozza di sistema quando l'utente fa clic su un pulsante di menu colori.

## <a name="cmfccolormenubuttonenableotherbutton"></a><a name="enableotherbutton"></a> CMFCColorMenuButton:: EnableOtherButton

Abilita e Disabilita un pulsante "altro" posizionato sotto i pulsanti di colore normale. Il pulsante "altro" di sistema standard è contrassegnato con un **numero maggiore di colori**.

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
in Specificare TRUE per visualizzare la finestra di `CMFCColorDialog` dialogo o false per visualizzare la finestra di dialogo colore di sistema standard.

*bEnable*<br/>
in Specificare TRUE per visualizzare il pulsante "altro"; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

## <a name="cmfccolormenubuttonenabletearoff"></a><a name="enabletearoff"></a> CMFCColorMenuButton:: EnableTearOff

Consente di eliminare un riquadro colori.

```cpp
void EnableTearOff(
    UINT uiID,
    int nVertDockColumns=-1,
    int nHorzDockRows=-1);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in Specifica l'ID per il riquadro di strappo.

*nVertDockColumns*<br/>
in Specifica il numero di colonne nel riquadro dei colori ancorato verticalmente nello stato di strappo.

*nHorzDockRows*<br/>
in Specifica il numero di righe per il riquadro colori ancorato orizzontalmente nello stato di strappo.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per abilitare la funzionalità "tear-off" per il riquadro colori visualizzato quando `CMFCColorMenuButton` viene premuto il pulsante.

## <a name="cmfccolormenubuttongetautomaticcolor"></a><a name="getautomaticcolor"></a> CMFCColorMenuButton:: GetAutomaticColor

Recupera il colore automatico corrente.

```
COLORREF GetAutomaticColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB che rappresenta il colore automatico corrente.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per ottenere il colore automatico impostato da [CMFCColorMenuButton:: EnableAutomaticButton](#enableautomaticbutton).

## <a name="cmfccolormenubuttongetcolor"></a><a name="getcolor"></a> CMFCColorMenuButton:: GetColor

Recupera il colore del pulsante corrente.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore del pulsante.

### <a name="remarks"></a>Commenti

## <a name="cmfccolormenubuttongetcolorbycmdid"></a><a name="getcolorbycmdid"></a> CMFCColorMenuButton:: GetColorByCmdID

Recupera il colore che corrisponde a un ID di comando specificato.

```
static COLORREF GetColorByCmdID(UINT uiCmdID);
```

### <a name="parameters"></a>Parametri

*uiCmdID*<br/>
in ID di comando.

### <a name="return-value"></a>Valore restituito

Colore che corrisponde all'ID di comando specificato.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo quando si dispone di diversi pulsanti di colore in un'applicazione. Quando l'utente fa clic su un pulsante del colore, il pulsante Invia il relativo ID di comando in un messaggio di WM_COMMAND al relativo elemento padre. Il `GetColorByCmdID` metodo usa l'ID di comando per recuperare il colore corrispondente.

## <a name="cmfccolormenubuttonisemptymenuallowed"></a><a name="isemptymenuallowed"></a> CMFCColorMenuButton:: IsEmptyMenuAllowed

Indica se i menu vuoti sono supportati.

```
virtual BOOL IsEmptyMenuAllowed() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono consentiti menu vuoti; in caso contrario, zero.

### <a name="remarks"></a>Commenti

I menu vuoti sono supportati per impostazione predefinita. Eseguire l'override di questo metodo per modificare questo comportamento nella classe derivata.

## <a name="cmfccolormenubuttononchangeparentwnd"></a><a name="onchangeparentwnd"></a> CMFCColorMenuButton:: OnChangeParentWnd

Chiamata eseguita dal framework quando viene modificata la finestra padre.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla nuova finestra padre.

### <a name="remarks"></a>Commenti

## <a name="cmfccolormenubuttonondraw"></a><a name="ondraw"></a> CMFCColorMenuButton:: onpare

Chiamata eseguita dal Framework per visualizzare un'immagine su un pulsante.

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
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Rettangolo che delimita l'area da ricreare.

*pImages*<br/>
in Punta a un elenco di immagini della barra degli strumenti.

*bHorz*<br/>
in TRUE per specificare che la barra degli strumenti è in uno stato ancorato orizzontale; in caso contrario, FALSE. Il valore predefinito è TRUE.

*bCustomizeMode*<br/>
in TRUE per specificare che l'applicazione è in modalità di personalizzazione. in caso contrario, FALSE. Il valore predefinito è FALSE.

*bHighlight*<br/>
in TRUE per specificare che il pulsante è evidenziato; in caso contrario, FALSE. Il valore predefinito è FALSE.

*bDrawBorder*<br/>
in TRUE per specificare che il bordo del pulsante è visualizzato; in caso contrario, FALSE. Il valore predefinito è TRUE.

*bGrayDisabledButtons*<br/>
in TRUE per specificare che i pulsanti disabilitati sono in grigio (in grigio); in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

## <a name="cmfccolormenubuttonondrawoncustomizelist"></a><a name="ondrawoncustomizelist"></a> CMFCColorMenuButton:: OnDrawOnCustomizeList

Chiamato dal Framework prima che un `CMFCColorMenuButton` oggetto venga visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Rettangolo che delimita il pulsante da disegnare.

*bSelected*<br/>
in TRUE specifica che il pulsante è nello stato selezionato; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

La larghezza del pulsante.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato dal framework quando un `CMFCColorMenuButton` oggetto viene visualizzato nella casella di riepilogo durante il processo di personalizzazione della barra degli strumenti.

## <a name="cmfccolormenubuttonopencolordialog"></a><a name="opencolordialog"></a> CMFCColorMenuButton:: OpenColorDialog

Apre una finestra di dialogo di selezione colori.

```
virtual BOOL OpenColorDialog(
    const COLORREF colorDefault,
    COLORREF& colorRes);
```

### <a name="parameters"></a>Parametri

*colorDefault*<br/>
in Colore predefinito selezionato nella finestra di dialogo colore.

*colorRes*<br/>
out Restituisce il colore selezionato dall'utente dalla finestra di dialogo colore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente seleziona un nuovo colore; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Quando si fa clic sul pulsante di menu, chiamare questo metodo per aprire una finestra di dialogo colore. Se il valore restituito è diverso da zero, il colore selezionato dall'utente viene archiviato nel parametro *colorRes* . Usare il metodo [CMFCColorMenuButton:: EnableOtherButton](#enableotherbutton) per spostarsi tra la finestra di dialogo colore standard e la finestra di dialogo [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) .

## <a name="cmfccolormenubuttonsetcolor"></a><a name="setcolor"></a> CMFCColorMenuButton:: ToColor

Imposta il colore del pulsante del colore corrente.

```
virtual void SetColor(
    COLORREF clr,
    BOOL bNotify=TRUE);
```

### <a name="parameters"></a>Parametri

*CLR*<br/>
in Valore di colore RGB.

*bNotify*<br/>
in TRUE per applicare il colore del parametro *CLR* a qualsiasi pulsante della barra degli strumenti o pulsante di menu associato; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per modificare il colore del pulsante del colore corrente. Se il parametro *bNotify* è diverso da zero, il colore del pulsante corrispondente in qualsiasi barra degli strumenti o menu popup associato viene modificato in base al colore specificato dal parametro *CLR* .

## <a name="cmfccolormenubuttonsetcolorbycmdid"></a><a name="setcolorbycmdid"></a> CMFCColorMenuButton:: SetColorByCmdID

Imposta il colore del pulsante di menu colori specificato.

```
static void SetColorByCmdID(
    UINT uiCmdID,
    COLORREF color);
```

### <a name="parameters"></a>Parametri

*uiCmdID*<br/>
in ID risorsa di un pulsante di menu colori.

*color*<br/>
in Valore di colore RGB.

## <a name="cmfccolormenubuttonsetcolorname"></a><a name="setcolorname"></a> CMFCColorMenuButton:: secolorname

Imposta un nuovo nome per il colore specificato.

```
static void SetColorName(
    COLORREF color,
    const CString& strName);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Valore RGB del colore il cui nome viene modificato.

*strName*<br/>
in Nuovo nome del colore.

### <a name="remarks"></a>Commenti

## <a name="cmfccolormenubuttonsetcolumnsnumber"></a><a name="setcolumnsnumber"></a> CMFCColorMenuButton:: SetColumnsNumber

Imposta il numero di colonne da visualizzare in un controllo di selezione dei colori (oggetto [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) ).

```cpp
void SetColumnsNumber(int nColumns);
```

### <a name="parameters"></a>Parametri

*nColumns*<br/>
in Numero di colonne da visualizzare.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)<br/>
[Classe CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md)
