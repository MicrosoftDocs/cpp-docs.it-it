---
title: CMFCButton (classe)
ms.date: 08/28/2018
f1_keywords:
- CMFCButton
- AFXBUTTON/CMFCButton
- AFXBUTTON/CMFCButton::CleanUp
- AFXBUTTON/CMFCButton::EnableFullTextTooltip
- AFXBUTTON/CMFCButton::EnableMenuFont
- AFXBUTTON/CMFCButton::EnableWindowsTheming
- AFXBUTTON/CMFCButton::GetToolTipCtrl
- AFXBUTTON/CMFCButton::IsAutoCheck
- AFXBUTTON/CMFCButton::IsAutorepeatCommandMode
- AFXBUTTON/CMFCButton::IsCheckBox
- AFXBUTTON/CMFCButton::IsChecked
- AFXBUTTON/CMFCButton::IsHighlighted
- AFXBUTTON/CMFCButton::IsPressed
- AFXBUTTON/CMFCButton::IsPushed
- AFXBUTTON/CMFCButton::IsRadioButton
- AFXBUTTON/CMFCButton::IsWindowsThemingEnabled
- AFXBUTTON/CMFCButton::SetAutorepeatMode
- AFXBUTTON/CMFCButton::SetCheckedImage
- AFXBUTTON/CMFCButton::SetFaceColor
- AFXBUTTON/CMFCButton::SetImage
- AFXBUTTON/CMFCButton::SetMouseCursor
- AFXBUTTON/CMFCButton::SetMouseCursorHand
- AFXBUTTON/CMFCButton::SetStdImage
- AFXBUTTON/CMFCButton::SetTextColor
- AFXBUTTON/CMFCButton::SetTextHotColor
- AFXBUTTON/CMFCButton::SetTooltip
- AFXBUTTON/CMFCButton::SizeToContent
- AFXBUTTON/CMFCButton::OnDraw
- AFXBUTTON/CMFCButton::OnDrawBorder
- AFXBUTTON/CMFCButton::OnDrawFocusRect
- AFXBUTTON/CMFCButton::OnDrawText
- AFXBUTTON/CMFCButton::OnFillBackground
- AFXBUTTON/CMFCButton::SelectFont
- AFXBUTTON/CMFCButton::m_bDrawFocus
- AFXBUTTON/CMFCButton::m_bHighlightChecked
- AFXBUTTON/CMFCButton::m_bRightImage
- AFXBUTTON/CMFCButton::m_bTransparent
- AFXBUTTON/CMFCButton::m_nAlignStyle
- AFXBUTTON/CMFCButton::m_nFlatStyle
helpviewer_keywords:
- CMFCButton [MFC], CleanUp
- CMFCButton [MFC], EnableFullTextTooltip
- CMFCButton [MFC], EnableMenuFont
- CMFCButton [MFC], EnableWindowsTheming
- CMFCButton [MFC], GetToolTipCtrl
- CMFCButton [MFC], IsAutoCheck
- CMFCButton [MFC], IsAutorepeatCommandMode
- CMFCButton [MFC], IsCheckBox
- CMFCButton [MFC], IsChecked
- CMFCButton [MFC], IsHighlighted
- CMFCButton [MFC], IsPressed
- CMFCButton [MFC], IsPushed
- CMFCButton [MFC], IsRadioButton
- CMFCButton [MFC], IsWindowsThemingEnabled
- CMFCButton [MFC], SetAutorepeatMode
- CMFCButton [MFC], SetCheckedImage
- CMFCButton [MFC], SetFaceColor
- CMFCButton [MFC], SetImage
- CMFCButton [MFC], SetMouseCursor
- CMFCButton [MFC], SetMouseCursorHand
- CMFCButton [MFC], SetStdImage
- CMFCButton [MFC], SetTextColor
- CMFCButton [MFC], SetTextHotColor
- CMFCButton [MFC], SetTooltip
- CMFCButton [MFC], SizeToContent
- CMFCButton [MFC], OnDraw
- CMFCButton [MFC], OnDrawBorder
- CMFCButton [MFC], OnDrawFocusRect
- CMFCButton [MFC], OnDrawText
- CMFCButton [MFC], OnFillBackground
- CMFCButton [MFC], SelectFont
- CMFCButton [MFC], m_bDrawFocus
- CMFCButton [MFC], m_bHighlightChecked
- CMFCButton [MFC], m_bRightImage
- CMFCButton [MFC], m_bTransparent
- CMFCButton [MFC], m_nAlignStyle
- CMFCButton [MFC], m_nFlatStyle
ms.assetid: 4b32f57c-7a53-4734-afb9-d47e3359f62e
ms.openlocfilehash: 5434801969a55387a5b5555c9a4ade22f1969e7d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367783"
---
# <a name="cmfcbutton-class"></a>CMFCButton (classe)

La `CMFCButton` classe aggiunge funzionalità alla classe [CButton,](../../mfc/reference/cbutton-class.md) ad esempio l'allineamento del testo del pulsante, la combinazione del testo del pulsante e un'immagine, la selezione di un cursore e la specifica di una descrizione comandi.

## <a name="syntax"></a>Sintassi

```
class CMFCButton : public CButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCButton::CMFCButton`|Costruttore predefinito.|
|`CMFCButton::~CMFCButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CMFCButton::CleanUp](#cleanup)|Reimposta le variabili interne e libera le risorse allocate, ad esempio immagini, bitmap e icone.|
|`CMFCButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCButton::DrawItem`|Chiamato dal framework quando un aspetto visivo di un pulsante disegnato dal proprietario è stato modificato. (Overrides [CButton::DrawItem](../../mfc/reference/cbutton-class.md#drawitem).)|
|[Controllo CMFCButton::EnableFullTextTooltip](#enablefulltexttooltip)|Specifica se visualizzare il testo completo di una descrizione comando in una finestra di descrizione comandi di grandi dimensioni o una versione troncata del testo in una piccola finestra di descrizione comando.|
|[Controllo CMFCButton::EnableMenuFont](#enablemenufont)|Specifica se il tipo di carattere del testo del pulsante corrisponde al tipo di carattere del menu dell'applicazione.|
|[Controllo CMFCButton::EnableWindowsTheming](#enablewindowstheming)|Specifica se lo stile del bordo del pulsante corrisponde al tema di Windows corrente.|
|`CMFCButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[Controllo CMFCButton::GetToolTipCtrl](#gettooltipctrl)|Restituisce un riferimento al controllo descrizione comandi sottostante.|
|[Controllo CMFCButton::IsAutoCheck](#isautocheck)|Indica se una casella di controllo o un pulsante di opzione è un pulsante automatico.|
|[CMFCButton::IsAutorepeatCommandMode](#isautorepeatcommandmode)|Indica se un pulsante è impostato sulla modalità di ripetizione automatica.|
|[Controllo CMFCButton::IsCheckBox](#ischeckbox)|Indica se un pulsante è un pulsante di casella di controllo.|
|[CMFCButton::IsChecked](#ischecked)|Indica se il pulsante corrente è selezionato.|
|[Controllo CMFCButton::IsHighlighted](#ishighlighted)|Indica se un pulsante è evidenziato.|
|[CMFCButton::IsPressed](#ispressed)|Indica se un pulsante viene premuto ed evidenziato.|
|[CMFCButton::IsPushed](#ispushed)|Indica se viene premuto un pulsante.|
|[Controllo CMFCButton::IsRadioButton](#isradiobutton)|Indica se un pulsante è un pulsante di opzione.|
|[Controllo CMFCButton::IsWindowsThemingEnabledCMFCButton::IsWindowsThemingEnabled](#iswindowsthemingenabled)|Indica se lo stile del bordo del pulsante corrisponde al tema di Windows corrente.|
|`CMFCButton::OnDrawParentBackground`|Disegna lo sfondo dell'elemento padre di un pulsante nell'area specificata. (Overrides [AFX_GLOBAL_DATA::DrawParentBackground](../../mfc/reference/afx-global-data-structure.md)|
|`CMFCButton::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[Controllo CMFCButton::SetAutorepeatMode](#setautorepeatmode)|Imposta un pulsante sulla modalità di ripetizione automatica.|
|[Controllo CMFCButton::SetCheckedImage](#setcheckedimage)|Imposta l'immagine per un pulsante selezionato.|
|[Controllo CMFCButton::SetFaceColor](#setfacecolor)|Imposta il colore di sfondo per il testo del pulsante.|
|[CMFCButton::SetImage](#setimage)|Imposta l'immagine di un pulsante.|
|[CMFCButton::SetMouseCursor](#setmousecursor)|Imposta l'immagine del cursore.|
|[Controllo CMFCButton::SetMouseCursorHand](#setmousecursorhand)|Imposta il cursore sull'immagine di una mano.|
|[Controllo CMFCButton::SetStdImage](#setstdimage)|Utilizza `CMenuImages` un oggetto per impostare l'immagine del pulsante.|
|[CMFCButton::SetTextColor](#settextcolor)|Imposta il colore del testo del pulsante per un pulsante non selezionato.|
|[Controllo CMFCButton::SetTextHotColor](#settexthotcolor)|Imposta il colore del testo del pulsante per un pulsante selezionato.|
|[CMFCButton::SetTooltip](#settooltip)|Associa una descrizione comando a un pulsante.|
|[Controllo CMFCButton::SizeToContent](#sizetocontent)|Ridimensiona un pulsante per contenere il testo e l'immagine del pulsante.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CMFCButton::OnDraw](#ondraw)|Chiamato dal framework per disegnare un pulsante.|
|[Controllo CMFCButton::OnDrawBorder](#ondrawborder)|Chiamato dal framework per disegnare il bordo di un pulsante.|
|[Controllo CMFCButton::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal framework per disegnare il rettangolo di attivazione per un pulsante.|
|[Controllo CMFCButton::OnDrawText](#ondrawtext)|Chiamato dal framework per disegnare il testo del pulsante.|
|[Controllo CMFCButton::OnFillBackground](#onfillbackground)|Chiamato dal framework per disegnare lo sfondo del testo del pulsante.|
|[CMFCButton::SelectFont](#selectfont)|Recupera il tipo di carattere associato al contesto di dispositivo specificato.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CMFCButton::m_nAlignStyle](#m_nalignstyle)|Specifica l'allineamento del testo del pulsante.|
|[Controllo CMFCButton::m_bDontUseWinXPTheme](#m_bDontUseWinXPTheme)|Specifica se utilizzare i temi di Windows XP.|
|[Controllo CMFCButton::m_bDrawFocus](#m_bdrawfocus)|Indica se disegnare un rettangolo di attivazione intorno a un pulsante.|
|[Controllo CMFCButton::m_nFlatStyle](#m_nflatstyle)|Specifica lo stile del pulsante, ad esempio senza bordi, piatto, semipiatto o 3D.|
|[CMFCButton::m_bGrayDisabled](#m_bGrayDisabled)|Se TRUE, consente a un pulsante disabilitato di essere disegnato in grigio.|
|[Controllo CMFCButton::m_bHighlightChecked](#m_bhighlightchecked)|Indica se evidenziare un pulsante di tipo BS_CHECKBOX quando il cursore passa su di esso.|
|[CMFCButton::m_bResponseOnButtonDown](#m_bResponseOnButtonDown)|Indica se rispondere agli eventi del pulsante verso il basso.|
|[CMFCButton::m_bRightImage](#m_brightimage)|Indica se visualizzare un'immagine sul lato destro del pulsante.|
|[CMFCButton::m_bTopImage](#m_bTopImage)| Indica se l'immagine si trova sopra il pulsante.|
|[Controllo CMFCButton::m_bTransparent](#m_btransparent)|Indica se il pulsante è trasparente.|
|[Controllo CMFCButton::m_bWasDblClk](#m_bWasDblClk)| Indica se l'ultimo evento clic è stato fatto un doppio clic.|

## <a name="remarks"></a>Osservazioni

Altri tipi di pulsanti `CMFCButton` derivano dalla classe , ad esempio il [CMFCURLLinkButton](../../mfc/reference/cmfclinkctrl-class.md) classe, che supporta i collegamenti ipertestuali e la `CMFCColorButton` classe, che supporta una finestra di dialogo di selezione colori.

Lo stile `CMFCButton` di un oggetto può essere *3D,* *piatto,* *semi-piatto* o *nessun bordo.* Il testo del pulsante può essere allineato a sinistra, in alto o al centro di un pulsante. In fase di esecuzione, è possibile controllare se il pulsante visualizza testo, un'immagine o testo e un'immagine. È inoltre possibile specificare che una particolare immagine del cursore venga visualizzata quando il cursore passa su un pulsante.

Creare un controllo pulsante direttamente nel codice o utilizzando lo strumento **Creazione guidata classe MFC** e un modello di finestra di dialogo. Se si crea direttamente un `CMFCButton` controllo pulsante, aggiungere una variabile `Create` all'applicazione e quindi chiamare il costruttore e i metodi dell'oggetto. `CMFCButton` Se si utilizza la **Creazione guidata classe MFC**, aggiungere una `CButton` variabile `CButton` all'applicazione e quindi modificare il tipo della variabile da a `CMFCButton`.

Per gestire i messaggi di notifica in un'applicazione della finestra di dialogo, aggiungere una voce della mappa messaggi e un gestore eventi per ogni notifica. Le notifiche inviate `CMFCButton` da un oggetto sono `CButton` le stesse di quelle inviate da un oggetto.

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come configurare le proprietà del pulsante utilizzando vari metodi nella `CMFCButton` classe . L'esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_2.cpp)]
[!code-cpp[NVC_MFC_NewControls#32](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_3.cpp)]
[!code-cpp[NVC_MFC_NewControls#33](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_4.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbutton.h

## <a name="cmfcbuttoncleanup"></a><a name="cleanup"></a>Controllo CMFCButton::CleanUp

Reimposta le variabili interne e libera le risorse allocate, ad esempio immagini, bitmap e icone.

```
virtual void CleanUp();
```

## <a name="cmfcbuttonenablefulltexttooltip"></a><a name="enablefulltexttooltip"></a>Controllo CMFCButton::EnableFullTextTooltip

Specifica se visualizzare il testo completo di una descrizione comando in una finestra di descrizione comandi di grandi dimensioni o una versione troncata del testo in una piccola finestra di descrizione comando.

```
void EnableFullTextTooltip(BOOL bOn=TRUE);
```

### <a name="parameters"></a>Parametri

*Bon*<br/>
[in] TRUE per visualizzare tutto il testo; FALSE per visualizzare il testo troncato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonenablemenufont"></a><a name="enablemenufont"></a>Controllo CMFCButton::EnableMenuFont

Specifica se il tipo di carattere del testo del pulsante corrisponde al tipo di carattere del menu dell'applicazione.

```
void EnableMenuFont(
    BOOL bOn=TRUE,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*Bon*<br/>
[in] TRUE per utilizzare il tipo di carattere del menu dell'applicazione come tipo di carattere del testo del pulsante; FALSE per utilizzare il tipo di carattere di sistema. Il valore predefinito è TRUE.

*bRedraw*<br/>
[in] TRUE per ridisegnare immediatamente lo schermo; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

Se non si utilizza questo metodo per specificare il tipo di carattere del testo del pulsante, è possibile specificare il tipo di carattere con il [CWnd::SetFont](../../mfc/reference/cwnd-class.md#setfont) metodo. Se non si specifica un tipo di carattere, il framework imposta un tipo di carattere predefinito.

## <a name="cmfcbuttonenablewindowstheming"></a><a name="enablewindowstheming"></a>Controllo CMFCButton::EnableWindowsTheming

Specifica se lo stile del bordo del pulsante corrisponde al tema di Windows corrente.

```
static void EnableWindowsTheming(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per utilizzare il tema di Windows corrente per disegnare i bordi dei pulsanti; FALSE per non utilizzare il tema di Windows. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

Questo metodo influisce su tutti i pulsanti nell'applicazione derivati dalla `CMFCButton` classe .

## <a name="cmfcbuttongettooltipctrl"></a><a name="gettooltipctrl"></a>Controllo CMFCButton::GetToolTipCtrl

Restituisce un riferimento al controllo descrizione comandi sottostante.

```
CToolTipCtrl& GetToolTipCtrl();
```

### <a name="return-value"></a>Valore restituito

Riferimento al controllo descrizione comandi sottostante.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonisautocheck"></a><a name="isautocheck"></a>Controllo CMFCButton::IsAutoCheck

Indica se una casella di controllo o un pulsante di opzione è un pulsante automatico.

```
BOOL IsAutoCheck() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante ha BS_AUTOCHECKBOX di stile o BS_AUTORADIOBUTTON; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonisautorepeatcommandmode"></a><a name="isautorepeatcommandmode"></a>CMFCButton::IsAutorepeatCommandMode

Indica se un pulsante è impostato sulla modalità di ripetizione automatica.

```
BOOL IsAutorepeatCommandMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante è impostato sulla modalità di ripetizione automatica. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare il [CMFCButton::SetAutorepeatMode](#setautorepeatmode) metodo per impostare un pulsante per la modalità di ripetizione automatica.

## <a name="cmfcbuttonischeckbox"></a><a name="ischeckbox"></a>Controllo CMFCButton::IsCheckBox

Indica se un pulsante è un pulsante di casella di controllo.

```
BOOL IsCheckBox() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante ha uno stile BS_CHECKBOX o BS_AUTOCHECKBOX; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonischecked"></a><a name="ischecked"></a>CMFCButton::IsChecked

Indica se il pulsante corrente è selezionato.

```
BOOL IsChecked() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante corrente è selezionato. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il framework utilizza diversi modi per indicare che diversi tipi di pulsanti sono controllati. Ad esempio, un pulsante di opzione viene selezionato quando contiene un punto; una casella di controllo è selezionata quando contiene una **X**.

## <a name="cmfcbuttonishighlighted"></a><a name="ishighlighted"></a>Controllo CMFCButton::IsHighlighted

Indica se un pulsante è evidenziato.

```
BOOL IsHighlighted() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante è evidenziato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Un pulsante viene evidenziato quando il mouse passa sopra il pulsante.

## <a name="cmfcbuttonispressed"></a><a name="ispressed"></a>CMFCButton::IsPressed

Indica se un pulsante viene premuto ed evidenziato.

```
BOOL IsPressed() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante viene premuto; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonispushed"></a><a name="ispushed"></a>CMFCButton::IsPushed

Indica se viene premuto un pulsante.

```
BOOL IsPushed() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante viene premuto; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonisradiobutton"></a><a name="isradiobutton"></a>Controllo CMFCButton::IsRadioButton

Indica se un pulsante è un pulsante di opzione.

```
BOOL IsRadioButton() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe lo stile del pulsante è BS_RADIOBUTTON o BS_AUTORADIOBUTTON; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttoniswindowsthemingenabled"></a><a name="iswindowsthemingenabled"></a>Controllo CMFCButton::IsWindowsThemingEnabledCMFCButton::IsWindowsThemingEnabled

Indica se lo stile del bordo del pulsante corrisponde al tema di Windows corrente.

```
static BOOL IsWindowsThemingEnabled();
```

### <a name="return-value"></a>Valore restituito

TRUESe lo stile del bordo del pulsante corrisponde al tema di Windows corrente; in caso contrario, FALSE.

## <a name="cmfcbuttonm_bdontusewinxptheme"></a><a name="m_bDontUseWinXPTheme"/>Controllo CMFCButton::m_bDontUseWinXPTheme

Specifica se utilizzare i temi di Windows XP quando si disegna il pulsante.

```
BOOL m_bDontUseWinXPTheme;
```

## <a name="cmfcbuttonm_bdrawfocus"></a><a name="m_bdrawfocus"></a>Controllo CMFCButton::m_bDrawFocus

Indica se disegnare un rettangolo di attivazione intorno a un pulsante.

```
BOOL m_bDrawFocus;
```

### <a name="remarks"></a>Osservazioni

Impostare `m_bDrawFocus` il membro su TRUE per specificare che il framework disegnerà un rettangolo di attivazione intorno al testo e all'immagine del pulsante se il pulsante riceve lo stato attivo.

Il `CMFCButton` costruttore inizializza questo membro su TRUE.

## <a name="cmfcbuttonm_bgraydisabled"></a><a name="m_bGrayDisabled"></a>CMFCButton::m_bGrayDisabled

Se TRUE, consente a un pulsante disabilitato di essere disegnato in grigio.

```
BOOL m_bGrayDisabled;
```

## <a name="cmfcbuttonm_bhighlightchecked"></a><a name="m_bhighlightchecked"></a>Controllo CMFCButton::m_bHighlightChecked

Indica se evidenziare un pulsante di tipo BS_CHECKBOX quando il cursore passa su di esso.

```
BOOL m_bHighlightChecked;
```

### <a name="remarks"></a>Osservazioni

Impostare `m_bHighlightChecked` il membro su TRUE per specificare che il framework evidenzierà un pulsante di stile BS_CHECKBOX quando il passaggio del mouse su di esso.

## <a name="cmfcbuttonm_bresponseonbuttondown"></a><a name="m_bResponseOnButtonDown"></a>CMFCButton::m_bResponseOnButtonDown

Indica se rispondere agli eventi del pulsante verso il basso.

```
BOOL m_bResponseOnButtonDown;
```

## <a name="cmfcbuttonm_brightimage"></a><a name="m_brightimage"></a>CMFCButton::m_bRightImage

Indica se visualizzare un'immagine sul lato destro del pulsante.

```
BOOL m_bRightImage;
```

## <a name="cmfcbuttonm_btopimagem_btopimage"></a><a name="m_bTopImage"></a>CMFCButton::m_bTopImage](#m_bTopImage)

Indica se l'immagine si trova sopra il pulsante.

```
BOOL m_bTopImage;
```

### <a name="remarks"></a>Osservazioni

Impostare `m_bRightImage` il membro su TRUE per specificare che il framework visualizzerà l'immagine del pulsante a destra dell'etichetta di testo del pulsante.

## <a name="cmfcbuttonm_btransparent"></a><a name="m_btransparent"></a>Controllo CMFCButton::m_bTransparent

Indica se il pulsante è trasparente.

```
BOOL m_bTransparent;
```

### <a name="remarks"></a>Osservazioni

Impostare `m_bTransparent` il membro su TRUE per specificare che il framework renderà trasparente il pulsante. Il `CMFCButton` costruttore inizializza questo membro su FALSE.

## <a name="cmfcbuttonm_nalignstyle"></a><a name="m_nalignstyle"></a>Controllo CMFCButton::m_nAlignStyle

Specifica l'allineamento del testo del pulsante.

```
AlignStyle m_nAlignStyle;
```

### <a name="remarks"></a>Osservazioni

Utilizzare uno dei `CMFCButton::AlignStyle` seguenti valori di enumerazione per specificare l'allineamento del testo del pulsante:

|valore|Descrizione|
|-----------|-----------------|
|ALIGN_CENTER|(Predefinito) Allinea il testo del pulsante al centro del pulsante.|
|ALIGN_LEFT|Allinea il testo del pulsante al lato sinistro del pulsante.|
|ALIGN_RIGHT|Allinea il testo del pulsante al lato destro del pulsante.|

Il `CMFCButton` costruttore inizializza questo membro su ALIGN_CENTER.

## <a name="cmfcbuttonm_bwasdblclkm_bwasdblclk"></a><a name="m_bWasDblClk"></a>Controllo CMFCButton::m_bWasDblClk](#m_bWasDblClk)

Indica se l'ultimo evento clic è stato un doppio clic.

```
BOOL m_bWasDblClk;
```

## <a name="cmfcbuttonm_nflatstyle"></a><a name="m_nflatstyle"></a>Controllo CMFCButton::m_nFlatStyle

Specifica lo stile del pulsante, ad esempio senza bordi, piatto, semipiatto o 3D.

```
FlatStyle  m_nFlatStyle;
```

### <a name="remarks"></a>Osservazioni

Nella tabella seguente `CMFCButton::m_nFlatStyle` sono elencati i valori di enumerazione che specificano l'aspetto di un pulsante.

|valore|Descrizione|
|-----------|-----------------|
|BUTTONSTYLE_3D|(Predefinito) Il pulsante sembra avere lati alti e tridimensionali. Quando si fa clic sul pulsante, il pulsante sembra essere premuto in un rientro profondo.|
|BUTTONSTYLE_FLAT|Quando il mouse non si ferma sul pulsante, il pulsante sembra essere bidimensionale e non ha lati sollevati. Quando il mouse viene posizionato sul pulsante, il pulsante sembra avere lati bassi e tridimensionali. Quando si fa clic sul pulsante, il pulsante sembra essere premuto in un rientro superficiale.|
|BUTTONSTYLE_SEMIFLAT|Il pulsante sembra avere lati bassi e tridimensionali. Quando si fa clic sul pulsante, il pulsante sembra essere premuto in un rientro profondo.|
|BUTTONSTYLE_NOBORDERS|Il pulsante non ha lati sollevati e appare sempre bidimensionale. Il pulsante non sembra essere premuto in un rientro quando si fa clic su di esso.|

Il `CMFCButton` costruttore inizializza questo membro su BUTTONSTYLE_3D.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `m_nFlatStyle` impostare `CMFCButton` i valori della variabile membro nella classe. Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#29](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_5.cpp)]

## <a name="cmfcbuttonondraw"></a><a name="ondraw"></a>Controllo CMFCButton::OnDraw

Chiamato dal framework per disegnare un pulsante.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Riferimento a un rettangolo che delimita il pulsante.

*uiState (informazioni in stato di stato*<br/>
[in] Stato del pulsante corrente. Per ulteriori informazioni, `itemState` vedere il membro dell'argomento [DrawITEMSTRUCT Structure.](/windows/win32/api/winuser/ns-winuser-drawitemstruct)

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare un pulsante.

## <a name="cmfcbuttonondrawborder"></a><a name="ondrawborder"></a>Controllo CMFCButton::OnDrawBorder

Chiamato dal framework per disegnare il bordo di un pulsante.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect& rectClient,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*RectClient (client)*<br/>
[in] Riferimento a un rettangolo che delimita il pulsante.

*uiState (informazioni in stato di stato*<br/>
[in] Stato del pulsante corrente. Per ulteriori informazioni, `itemState` vedere il membro dell'argomento [DrawITEMSTRUCT Structure.](/windows/win32/api/winuser/ns-winuser-drawitemstruct)

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare il bordo.

## <a name="cmfcbuttonondrawfocusrect"></a><a name="ondrawfocusrect"></a>Controllo CMFCButton::OnDrawFocusRect

Chiamato dal framework per disegnare il rettangolo di attivazione per un pulsante.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*RectClient (client)*<br/>
[in] Riferimento a un rettangolo che delimita il pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare il rettangolo di attivazione.

## <a name="cmfcbuttonondrawtext"></a><a name="ondrawtext"></a>Controllo CMFCButton::OnDrawText

Chiamato dal framework per disegnare il testo del pulsante.

```
virtual void OnDrawText(
    CDC* pDC,
    const CRect& rect,
    const CString& strText,
    UINT uiDTFlags,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Riferimento a un rettangolo che delimita il pulsante.

*strText (testo str)*<br/>
[in] Testo da disegnare.

*UiDTFlags (proprietà)*<br/>
[in] Flag che specificano come formattare il testo. Per ulteriori informazioni, vedere il parametro *nFormat* del metodo [CDC::DrawText.](../../mfc/reference/cdc-class.md#drawtext)

*uiState (informazioni in stato di stato*<br/>
[in] Riservato.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare il testo del pulsante.

## <a name="cmfcbuttononfillbackground"></a><a name="onfillbackground"></a>Controllo CMFCButton::OnFillBackground

Chiamato dal framework per disegnare lo sfondo del testo del pulsante.

```
virtual void OnFillBackground(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*RectClient (client)*<br/>
[in] Riferimento a un rettangolo che delimita il pulsante.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare lo sfondo di un pulsante.

## <a name="cmfcbuttonselectfont"></a><a name="selectfont"></a>CMFCButton::SelectFont

Recupera il tipo di carattere associato al contesto di dispositivo specificato.

```
virtual CFont* SelectFont(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

### <a name="return-value"></a>Valore restituito

Eseguire l'override di questo metodo per utilizzare il codice personalizzato per recuperare il tipo di carattere.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonsetautorepeatmode"></a><a name="setautorepeatmode"></a>Controllo CMFCButton::SetAutorepeatMode

Imposta un pulsante sulla modalità di ripetizione automatica.

```
void SetAutorepeatMode(int nTimeDelay=500);
```

### <a name="parameters"></a>Parametri

*nTimeDelay (in ritardo utente)*<br/>
[in] Numero non negativo che specifica l'intervallo tra i messaggi inviati alla finestra padre. L'intervallo viene misurato in millisecondi e il valore predefinito è 500 millisecondi. Specificare zero per disattivare la modalità di ripetizione automatica dei messaggi.

### <a name="remarks"></a>Osservazioni

Questo metodo fa in modo che il pulsante invii costantemente WM_COMMAND messaggi alla finestra padre fino a quando il pulsante non viene rilasciato o il *nTimeDelay* parametro è impostato su zero.

## <a name="cmfcbuttonsetcheckedimage"></a><a name="setcheckedimage"></a>Controllo CMFCButton::SetCheckedImage

Imposta l'immagine per un pulsante selezionato.

```
void SetCheckedImage(
    HICON hIcon,
    BOOL bAutoDestroy=TRUE,
    HICON hIconHot=NULL,
    HICON hIconDisabled=NULL,
    BOOL bAlphaBlend=FALSE);

void SetCheckedImage(
    HBITMAP hBitmap,
    BOOL bAutoDestroy=TRUE,
    HBITMAP hBitmapHot=NULL,
    BOOL bMap3dColors=TRUE,
    HBITMAP hBitmapDisabled=NULL);

void SetCheckedImage(
    UINT uiBmpResId,
    UINT uiBmpHotResId=0,
    UINT uiBmpDsblResID=0);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
[in] Gestire l'icona che contiene la bitmap e la maschera per la nuova immagine.

*bAutoDistruggi*<br/>
[in] TRUE per specificare che le risorse bitmap vengono distrutte automaticamente. in caso contrario, FALSE. Il valore predefinito è TRUE.

*hIconHot*<br/>
[in] Manto di controllo sull'icona che contiene l'immagine per lo stato selezionato.

*Hbitmap*<br/>
[in] Handle per la bitmap che contiene l'immagine per lo stato non selezionato.

*HBitmapHot (informazioni in due)*<br/>
[in] Maneggiare la bitmap che contiene l'immagine per lo stato selezionato.

*bMap3dColori*<br/>
[in] Specifica un colore trasparente per lo sfondo del pulsante; vale a dire, la faccia del pulsante. TRUE per utilizzare il valore di colore RGB(192, 192, 192); FALSE per utilizzare il `AFX_GLOBAL_DATA::clrBtnFace`valore di colore definito da .

*uiBmpResId (informazioni in questo stato in stato in stato in stato in stato in*<br/>
[in] ID risorsa per l'immagine non selezionata.

*uiBmpHotResId (informazioni in questo base da un'applicazione del documento d'oviper*<br/>
[in] ID risorsa per l'immagine selezionata.

*hIconDisabilitato*<br/>
[in] Gestire l'icona dell'immagine disabilitata.

*hBitmapDisabled*<br/>
[in] Gestire la bitmap che contiene l'immagine disabilitata.

*uiBmpDsblResID (informazioni in stato in questo stato in stato di attivo)*<br/>
[in] ID risorsa della bitmap disabilitata.

*bAlphaBlend (Frullazione alfa)*<br/>
[in] TRUE per utilizzare solo immagini a 32 bit che utilizzano il canale alfa; FALSE, per non utilizzare solo immagini del canale alfa. Il valore predefinito è FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonsetfacecolor"></a><a name="setfacecolor"></a>Controllo CMFCButton::SetFaceColor

Imposta il colore di sfondo per il testo del pulsante.

```
void SetFaceColor(
    COLORREF crFace,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*crFace*<br/>
[in] Valore di colore RGB.

*bRedraw*<br/>
[in] TRUE per ridisegnare immediatamente lo schermo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per definire un nuovo colore di riempimento per lo sfondo del pulsante (faccia). Si noti che lo sfondo non viene riempito quando il [CMFCButton::m_bTransparent](#m_btransparent) variabile membro è TRUE.

## <a name="cmfcbuttonsetimage"></a><a name="setimage"></a>CMFCButton::SetImage

Imposta l'immagine di un pulsante.

```
void SetImage(
    HICON hIcon,
    BOOL bAutoDestroy=TRUE,
    HICON hIconHot=NULL,
    HICON hIconDisabled=NULL,
    BOOL bAlphaBlend=FALSE);

void SetImage(
    HBITMAP hBitmap,
    BOOL bAutoDestroy=TRUE,
    HBITMAP hBitmapHot=NULL,
    BOOL bMap3dColors=TRUE,
    HBITMAP hBitmapDisabled=NULL);

void SetImage(
    UINT uiBmpResId,
    UINT uiBmpHotResId=0,
    UINT uiBmpDsblResID=0);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
[in] Gestire l'icona che contiene la bitmap e la maschera per la nuova immagine.

*bAutoDistruggi*<br/>
[in] TRUE per specificare che le risorse bitmap vengono distrutte automaticamente. in caso contrario, FALSE. Il valore predefinito è TRUE.

*hIconHot*<br/>
[in] Manto di controllo sull'icona che contiene l'immagine per lo stato selezionato.

*Hbitmap*<br/>
[in] Handle per la bitmap che contiene l'immagine per lo stato non selezionato.

*HBitmapHot (informazioni in due)*<br/>
[in] Maneggiare la bitmap che contiene l'immagine per lo stato selezionato.

*uiBmpResId (informazioni in questo stato in stato in stato in stato in stato in*<br/>
[in] ID risorsa per l'immagine non selezionata.

*uiBmpHotResId (informazioni in questo base da un'applicazione del documento d'oviper*<br/>
[in] ID risorsa per l'immagine selezionata.

*bMap3dColori*<br/>
[in] Specifica un colore trasparente per lo sfondo del pulsante; vale a dire, la faccia del pulsante. TRUE per utilizzare il valore di colore RGB(192, 192, 192); FALSE per utilizzare il `AFX_GLOBAL_DATA::clrBtnFace`valore di colore definito da .

*hIconDisabilitato*<br/>
[in] Gestire l'icona dell'immagine disabilitata.

*hBitmapDisabled*<br/>
[in] Gestire la bitmap che contiene l'immagine disabilitata.

*uiBmpDsblResID (informazioni in stato in questo stato in stato di attivo)*<br/>
[in] ID risorsa della bitmap disabilitata.

*bAlphaBlend (Frullazione alfa)*<br/>
[in] TRUE per utilizzare solo immagini a 32 bit che utilizzano il canale alfa; FALSE, per non utilizzare solo immagini del canale alfa. Il valore predefinito è FALSE.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

Nell'esempio `CMFCButton` seguente viene illustrato come `SetImage` utilizzare diverse versioni del metodo nella classe . L'esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_2.cpp)]

## <a name="cmfcbuttonsetmousecursor"></a><a name="setmousecursor"></a>CMFCButton::SetMouseCursor

Imposta l'immagine del cursore.

```
void SetMouseCursor(HCURSOR hcursor);
```

### <a name="parameters"></a>Parametri

*hcursor (cursore)*<br/>
[in] Handle di un cursore.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per associare un'immagine del cursore, ad esempio il cursore a mano, con il pulsante . Il cursore viene caricato dalle risorse dell'applicazione.

### <a name="example"></a>Esempio

Nell'esempio `CMFCButton` riportato di `SetMouseCursor` seguito viene illustrato come utilizzare il metodo nella classe . L'esempio fa parte del codice [nell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#30](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_6.cpp)]

## <a name="cmfcbuttonsetmousecursorhand"></a><a name="setmousecursorhand"></a>Controllo CMFCButton::SetMouseCursorHand

Imposta il cursore sull'immagine di una mano.

```
void SetMouseCursorHand();
```

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per associare l'immagine del cursore di una mano con il pulsante. Il cursore viene caricato dalle risorse dell'applicazione.

## <a name="cmfcbuttonsetstdimage"></a><a name="setstdimage"></a>Controllo CMFCButton::SetStdImage

Utilizza `CMenuImages` un oggetto per impostare l'immagine del pulsante.

```
void SetStdImage(
    CMenuImages::IMAGES_IDS id,
    CMenuImages::IMAGE_STATE state=CMenuImages::ImageBlack,
    CMenuImages::IMAGES_IDS idDisabled=(CMenuImages::IMAGES_IDS)0);
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] Uno degli identificatori di immagine del `CMenuImage::IMAGES_IDS` pulsante definiti nell'enumerazione. I valori delle immagini specificano immagini quali frecce, perni e pulsanti di opzione.

*Stato*<br/>
[in] Uno degli identificatori di stato dell'immagine del pulsante definito nell'enumerazione. `CMenuImages::IMAGE_STATE` Gli stati dell'immagine specificano i colori dei pulsanti, ad esempio nero, grigio, grigio chiaro, bianco e grigio scuro. Il valore predefinito è `CMenuImages::ImageBlack`.

*idDisabilitato*<br/>
[in] Uno degli identificatori di immagine del `CMenuImage::IMAGES_IDS` pulsante definiti nell'enumerazione. L'immagine indica che il pulsante è disabilitato. Il valore predefinito è la `CMenuImages::IdArrowDown`prima immagine del pulsante ( ).

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonsettextcolor"></a><a name="settextcolor"></a>CMFCButton::SetTextColor

Imposta il colore del testo del pulsante per un pulsante non selezionato.

```
void SetTextColor(COLORREF clrText);
```

### <a name="parameters"></a>Parametri

*clrText*<br/>
[in] Valore di colore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonsettexthotcolor"></a><a name="settexthotcolor"></a>Controllo CMFCButton::SetTextHotColor

Imposta il colore del testo del pulsante per un pulsante selezionato.

```
void SetTextHotColor(COLORREF clrTextHot);
```

### <a name="parameters"></a>Parametri

*ClrTextHot (informazioni in questo base base a questo*<br/>
[in] Valore di colore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonsettooltip"></a><a name="settooltip"></a>CMFCButton::SetTooltip

Associa una descrizione comando a un pulsante.

```
void SetTooltip(LPCTSTR lpszToolTipText);
```

### <a name="parameters"></a>Parametri

*lpszToolTipText (Testosuggerimente)*<br/>
[in] Puntatore al testo per la descrizione comando. Specificare NULL per disabilitare la descrizione comando.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcbuttonsizetocontent"></a><a name="sizetocontent"></a>Controllo CMFCButton::SizeToContent

Ridimensiona un pulsante per contenere il testo e l'immagine del pulsante.

```
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```

### <a name="parameters"></a>Parametri

*bCalcolsolo*<br/>
[in] TRUE per calcolare, ma non modificare, la nuova dimensione del pulsante; FALSE per modificare le dimensioni del pulsante. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` che contiene le nuove dimensioni del pulsante.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo calcola una nuova dimensione che include un margine orizzontale di 10 pixel e un margine verticale di 5 pixel.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)<br/>
[CMFCColorButton (classe)](../../mfc/reference/cmfccolorbutton-class.md)<br/>
[CMFCMenuButton (classe)](../../mfc/reference/cmfcmenubutton-class.md)
