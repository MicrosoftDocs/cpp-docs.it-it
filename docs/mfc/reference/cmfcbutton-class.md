---
title: Classe CMFCButton
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
ms.openlocfilehash: 7628ac353d01c2a6853e35a35bd1f702d3bb041e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69505853"
---
# <a name="cmfcbutton-class"></a>Classe CMFCButton

La `CMFCButton` classe aggiunge funzionalità alla classe [CButton](../../mfc/reference/cbutton-class.md) , ad esempio l'allineamento del testo dei pulsanti, la combinazione del testo del pulsante e un'immagine, la selezione di un cursore e l'indicazione di una descrizione comando.

## <a name="syntax"></a>Sintassi

```
class CMFCButton : public CButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|`CMFCButton::CMFCButton`|Costruttore predefinito.|
|`CMFCButton::~CMFCButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCButton:: CleanUp](#cleanup)|Reimposta le variabili interne e libera le risorse allocate, ad esempio immagini, bitmap e icone.|
|`CMFCButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCButton::DrawItem`|Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un pulsante creato dal proprietario. Esegue l'override di [CButton::D rawitem](../../mfc/reference/cbutton-class.md#drawitem).|
|[CMFCButton::EnableFullTextTooltip](#enablefulltexttooltip)|Specifica se visualizzare il testo completo di una descrizione comandi in una finestra di descrizione comando di grandi dimensioni o in una versione troncata del testo in una piccola finestra descrizione comando.|
|[CMFCButton:: EnableMenuFont](#enablemenufont)|Specifica se il tipo di carattere del testo del pulsante è lo stesso del tipo di carattere del menu applicazione.|
|[CMFCButton::EnableWindowsTheming](#enablewindowstheming)|Specifica se lo stile del bordo del pulsante corrisponde al tema Windows corrente.|
|`CMFCButton::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCButton::GetToolTipCtrl](#gettooltipctrl)|Restituisce un riferimento al controllo ToolTip sottostante.|
|[CMFCButton::IsAutoCheck](#isautocheck)|Indica se una casella di controllo o un pulsante di opzione è un pulsante automatico.|
|[CMFCButton::IsAutorepeatCommandMode](#isautorepeatcommandmode)|Indica se un pulsante è impostato sulla modalità di ripetizione automatica.|
|[CMFCButton::IsCheckBox](#ischeckbox)|Indica se un pulsante è un pulsante della casella di controllo.|
|[CMFCButton::IsChecked](#ischecked)|Indica se il pulsante corrente è selezionato.|
|[CMFCButton::IsHighlighted](#ishighlighted)|Indica se un pulsante è evidenziato.|
|[CMFCButton:: è stato premuto](#ispressed)|Indica se un pulsante viene inserito ed evidenziato.|
|[CMFCButton::IsPushed](#ispushed)|Indica se viene eseguito il push di un pulsante.|
|[CMFCButton::IsRadioButton](#isradiobutton)|Indica se un pulsante è un pulsante di opzione.|
|[CMFCButton::IsWindowsThemingEnabled](#iswindowsthemingenabled)|Indica se lo stile del bordo del pulsante corrisponde al tema Windows corrente.|
|`CMFCButton::OnDrawParentBackground`|Disegna lo sfondo dell'elemento padre di un pulsante nell'area specificata. (Esegue l'override di [AFX_GLOBAL_DATA::D rawparentbackground](../../mfc/reference/afx-global-data-structure.md)|
|`CMFCButton::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCButton:: SetAutorepeatMode](#setautorepeatmode)|Imposta un pulsante per la modalità di ripetizione automatica.|
|[CMFCButton::SetCheckedImage](#setcheckedimage)|Imposta l'immagine per un pulsante selezionato.|
|[CMFCButton::SetFaceColor](#setfacecolor)|Imposta il colore di sfondo per il testo del pulsante.|
|[CMFCButton:: seimagine](#setimage)|Imposta l'immagine per un pulsante.|
|[CMFCButton:: SetMouseCursor](#setmousecursor)|Imposta l'immagine del cursore.|
|[CMFCButton:: SetMouseCursorHand](#setmousecursorhand)|Imposta il cursore sull'immagine di una mano.|
|[CMFCButton::SetStdImage](#setstdimage)|Usa un `CMenuImages` oggetto per impostare l'immagine del pulsante.|
|[CMFCButton::SetTextColor](#settextcolor)|Imposta il colore del testo del pulsante per un pulsante non selezionato.|
|[CMFCButton::SetTextHotColor](#settexthotcolor)|Imposta il colore del testo del pulsante per un pulsante selezionato.|
|[CMFCButton::SetTooltip](#settooltip)|Associa una descrizione comandi a un pulsante.|
|[CMFCButton::SizeToContent](#sizetocontent)|Ridimensiona un pulsante per contenere il testo e l'immagine del pulsante.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CMFCButton:: onpare](#ondraw)|Chiamato dal Framework per creare un pulsante.|
|[CMFCButton::OnDrawBorder](#ondrawborder)|Chiamato dal Framework per creare il bordo di un pulsante.|
|[CMFCButton::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal Framework per creare il rettangolo di attivazione per un pulsante.|
|[CMFCButton::OnDrawText](#ondrawtext)|Chiamato dal Framework per creare il testo del pulsante.|
|[CMFCButton::OnFillBackground](#onfillbackground)|Chiamato dal Framework per creare lo sfondo del testo del pulsante.|
|[CMFCButton::SelectFont](#selectfont)|Recupera il tipo di carattere associato al contesto di dispositivo specificato.|

### <a name="data-members"></a>Membri di dati

|Name|Descrizione|
|----------|-----------------|
|[CMFCButton::m_nAlignStyle](#m_nalignstyle)|Specifica l'allineamento del testo del pulsante.|
|[CMFCButton::m_bDontUseWinXPTheme](#m_bDontUseWinXPTheme)|Specifica se utilizzare i temi di Windows XP.|
|[CMFCButton::m_bDrawFocus](#m_bdrawfocus)|Indica se creare un rettangolo di attivazione intorno a un pulsante.|
|[CMFCButton::m_nFlatStyle](#m_nflatstyle)|Specifica lo stile del pulsante, ad esempio senza bordi, Flat, semi-flat o 3D.|
|[CMFCButton::m_bGrayDisabled](#m_bGrayDisabled)|Se è TRUE, consente di disegnare un pulsante disabilitato come grigio.|
|[CMFCButton::m_bHighlightChecked](#m_bhighlightchecked)|Indica se evidenziare un pulsante di tipo BS_CHECKBOX quando il cursore viene posizionato su di esso.|
|[CMFCButton::m_bResponseOnButtonDown](#m_bResponseOnButtonDown)|Indica se rispondere agli eventi del pulsante in basso.|
|[CMFCButton::m_bRightImage](#m_brightimage)|Indica se visualizzare un'immagine sul lato destro del pulsante.|
|[CMFCButton::m_bTopImage](#m_bTopImage)| Indica se l'immagine è sopra il pulsante.|
|[CMFCButton::m_bTransparent](#m_btransparent)|Indica se il pulsante è trasparente.|
|[CMFCButton::m_bWasDblClk](#m_bWasDblClk)| Indica se l'evento dell'ultimo clic è stato fatto doppio clic.|

## <a name="remarks"></a>Note

Altri tipi di pulsanti derivano dalla `CMFCButton` classe, ad esempio la classe [CMFCURLLinkButton](../../mfc/reference/cmfclinkctrl-class.md) , che supporta collegamenti ipertestuali e la `CMFCColorButton` classe, che supporta una finestra di dialogo di selezione colori.

Lo stile di un `CMFCButton` oggetto può essere *3D*, *Flat*, *semi-flat* o *senza bordo*. Il testo del pulsante può essere allineato a sinistra, in alto o al centro di un pulsante. In fase di esecuzione, è possibile controllare se il pulsante Visualizza testo, un'immagine o un testo e un'immagine. È inoltre possibile specificare che una particolare immagine del cursore venga visualizzata quando il cursore si posiziona su un pulsante.

Creare un controllo Button direttamente nel codice oppure utilizzando lo strumento della **creazione guidata classe MFC** e un modello di finestra di dialogo. Se si crea direttamente un controllo Button, aggiungere una `CMFCButton` variabile all'applicazione e quindi chiamare il costruttore e `Create` i metodi dell' `CMFCButton` oggetto. Se si utilizza la **creazione guidata classe MFC**, aggiungere `CButton` una variabile all'applicazione, quindi modificare il tipo della variabile da `CButton` a `CMFCButton`.

Per gestire i messaggi di notifica in un'applicazione della finestra di dialogo, aggiungere una voce della mappa messaggi e un gestore eventi per ogni notifica. Le notifiche inviate da un `CMFCButton` oggetto sono identiche a quelle inviate da un `CButton` oggetto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare le proprietà del pulsante utilizzando diversi metodi `CMFCButton` della classe. L'esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

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

**Intestazione:** afxbutton. h

##  <a name="cleanup"></a>CMFCButton:: CleanUp

Reimposta le variabili interne e libera le risorse allocate, ad esempio immagini, bitmap e icone.

```
virtual void CleanUp();
```

##  <a name="enablefulltexttooltip"></a>  CMFCButton::EnableFullTextTooltip

Specifica se visualizzare il testo completo di una descrizione comandi in una finestra di descrizione comando di grandi dimensioni o in una versione troncata del testo in una piccola finestra descrizione comando.

```
void EnableFullTextTooltip(BOOL bOn=TRUE);
```

### <a name="parameters"></a>Parametri

*bOn*<br/>
in TRUE per visualizzare tutto il testo; FALSE per visualizzare il testo troncato.

### <a name="remarks"></a>Note

##  <a name="enablemenufont"></a>CMFCButton:: EnableMenuFont

Specifica se il tipo di carattere del testo del pulsante è lo stesso del tipo di carattere del menu applicazione.

```
void EnableMenuFont(
    BOOL bOn=TRUE,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*bOn*<br/>
in TRUE per utilizzare il carattere del menu dell'applicazione come carattere del testo del pulsante; FALSE per utilizzare il tipo di carattere di sistema. Il valore predefinito è TRUE.

*bRedraw*<br/>
in TRUE per ricreare immediatamente lo schermo; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Note

Se non si usa questo metodo per specificare il tipo di carattere del testo del pulsante, è possibile specificare il tipo di carattere con il metodo [CWnd:: sefont](../../mfc/reference/cwnd-class.md#setfont) . Se non si specifica un tipo di carattere, il Framework imposta un tipo di carattere predefinito.

##  <a name="enablewindowstheming"></a>CMFCButton:: EnableWindowsTheming

Specifica se lo stile del bordo del pulsante corrisponde al tema Windows corrente.

```
static void EnableWindowsTheming(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per utilizzare il tema Windows corrente per creare i bordi dei pulsanti; FALSE per non utilizzare il tema di Windows. Il valore predefinito è TRUE.

### <a name="remarks"></a>Note

Questo metodo influiscono su tutti i pulsanti dell'applicazione derivati `CMFCButton` dalla classe.

##  <a name="gettooltipctrl"></a>CMFCButton:: GetToolTipCtrl

Restituisce un riferimento al controllo ToolTip sottostante.

```
CToolTipCtrl& GetToolTipCtrl();
```

### <a name="return-value"></a>Valore restituito

Riferimento al controllo ToolTip sottostante.

### <a name="remarks"></a>Note

##  <a name="isautocheck"></a>CMFCButton:: IsAutoCheck

Indica se una casella di controllo o un pulsante di opzione è un pulsante automatico.

```
BOOL IsAutoCheck() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante ha lo stile BS_AUTOCHECKBOX o BS_AUTORADIOBUTTON; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="isautorepeatcommandmode"></a>CMFCButton:: IsAutorepeatCommandMode

Indica se un pulsante è impostato sulla modalità di ripetizione automatica.

```
BOOL IsAutorepeatCommandMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante è impostato sulla modalità di ripetizione automatica; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare il metodo [CMFCButton:: SetAutorepeatMode](#setautorepeatmode) per impostare un pulsante per la modalità di ripetizione automatica.

##  <a name="ischeckbox"></a>  CMFCButton::IsCheckBox

Indica se un pulsante è un pulsante della casella di controllo.

```
BOOL IsCheckBox() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante presenta uno stile BS_CHECKBOX o BS_AUTOCHECKBOX; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="ischecked"></a>CMFCButton:: deselezionato

Indica se il pulsante corrente è selezionato.

```
BOOL IsChecked() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante corrente è selezionato; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Il Framework utilizza diversi modi per indicare che vengono controllati diversi tipi di pulsanti. Un pulsante di opzione, ad esempio, viene controllato quando contiene un punto; una casella di controllo viene selezionata quando contiene una **X**.

##  <a name="ishighlighted"></a>CMFCButton:: evidenziato

Indica se un pulsante è evidenziato.

```
BOOL IsHighlighted() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante è evidenziato; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Un pulsante viene evidenziato quando il mouse viene posizionato sul pulsante.

##  <a name="ispressed"></a>CMFCButton:: è stato premuto

Indica se un pulsante viene inserito ed evidenziato.

```
BOOL IsPressed() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante è premuto; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="ispushed"></a>CMFCButton:: con push

Indica se viene eseguito il push di un pulsante.

```
BOOL IsPushed() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante viene inserito; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="isradiobutton"></a>CMFCButton:: RadioButton

Indica se un pulsante è un pulsante di opzione.

```
BOOL IsRadioButton() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se lo stile del pulsante è BS_RADIOBUTTON o BS_AUTORADIOBUTTON; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="iswindowsthemingenabled"></a>  CMFCButton::IsWindowsThemingEnabled

Indica se lo stile del bordo del pulsante corrisponde al tema Windows corrente.

```
static BOOL IsWindowsThemingEnabled();
```

### <a name="return-value"></a>Valore restituito

TRUE se lo stile del bordo del pulsante corrisponde al tema Windows corrente; in caso contrario, FALSE.

## <a name="a-namem_bdontusewinxptheme-cmfcbuttonm_bdontusewinxptheme"></a><a name="m_bDontUseWinXPTheme"/>CMFCButton:: m_bDontUseWinXPTheme

Specifica se utilizzare i temi di Windows XP quando si disegna il pulsante.

```
BOOL m_bDontUseWinXPTheme;
```

##  <a name="m_bdrawfocus"></a>CMFCButton:: m_bDrawFocus

Indica se creare un rettangolo di attivazione intorno a un pulsante.

```
BOOL m_bDrawFocus;
```

### <a name="remarks"></a>Note

Impostare il `m_bDrawFocus` membro su true per specificare che il Framework trarrà un rettangolo di attivazione intorno al testo e all'immagine del pulsante se il pulsante riceve lo stato attivo.

Il `CMFCButton` costruttore inizializza il membro su true.

##  <a name="m_bGrayDisabled"></a>  CMFCButton::m_bGrayDisabled

Se è TRUE, consente di disegnare un pulsante disabilitato come grigio.

```
BOOL m_bGrayDisabled;
```

##  <a name="m_bhighlightchecked"></a>CMFCButton:: m_bHighlightChecked

Indica se evidenziare un pulsante di tipo BS_CHECKBOX quando il cursore viene posizionato su di esso.

```
BOOL m_bHighlightChecked;
```

### <a name="remarks"></a>Note

Impostare il `m_bHighlightChecked` membro su true per specificare che il Framework evidenzierà un pulsante di tipo BS_CHECKBOX quando il mouse viene spostato su di esso.

##  <a name="m_bResponseOnButtonDown"></a>CMFCButton:: m_bResponseOnButtonDown

Indica se rispondere agli eventi del pulsante in basso.

```
BOOL m_bResponseOnButtonDown;
```

##  <a name="m_brightimage"></a>CMFCButton:: m_bRightImage

Indica se visualizzare un'immagine sul lato destro del pulsante.

```
BOOL m_bRightImage;
```

##  <a name="m_bTopImage"></a>CMFCButton:: m_bTopImage] (#m_bTopImage)

Indica se l'immagine è sopra il pulsante.

```
BOOL m_bTopImage;
```

### <a name="remarks"></a>Note

Impostare il `m_bRightImage` membro su true per specificare che l'immagine del pulsante a destra dell'etichetta di testo del pulsante viene visualizzata dal Framework.

##  <a name="m_btransparent"></a>CMFCButton:: m_bTransparent

Indica se il pulsante è trasparente.

```
BOOL m_bTransparent;
```

### <a name="remarks"></a>Note

Impostare il `m_bTransparent` membro su true per specificare che il Framework renderà trasparente il pulsante. Il `CMFCButton` costruttore inizializza il membro su false.

##  <a name="m_nalignstyle"></a>  CMFCButton::m_nAlignStyle

Specifica l'allineamento del testo del pulsante.

```
AlignStyle m_nAlignStyle;
```

### <a name="remarks"></a>Note

Usare uno dei valori di `CMFCButton::AlignStyle` enumerazione seguenti per specificare l'allineamento del testo del pulsante:

|Value|Descrizione|
|-----------|-----------------|
|ALIGN_CENTER|Predefinita Allinea il testo del pulsante al centro del pulsante.|
|ALIGN_LEFT|Allinea il testo del pulsante al lato sinistro del pulsante.|
|ALIGN_RIGHT|Allinea il testo del pulsante al lato destro del pulsante.|

Il `CMFCButton` costruttore inizializza il membro a ALIGN_CENTER.

##  <a name="m_bWasDblClk"></a>  CMFCButton::m_bWasDblClk](#m_bWasDblClk)|

Indica se l'evento dell'ultimo clic è stato fatto doppio clic. |

```
BOOL m_bWasDblClk;
```

##  <a name="m_nflatstyle"></a>  CMFCButton::m_nFlatStyle

Specifica lo stile del pulsante, ad esempio senza bordi, Flat, semi-flat o 3D.

```
FlatStyle  m_nFlatStyle;
```

### <a name="remarks"></a>Note

Nella tabella seguente sono elencati `CMFCButton::m_nFlatStyle` i valori di enumerazione che specificano l'aspetto di un pulsante.

|Valore|Descrizione|
|-----------|-----------------|
|BUTTONSTYLE_3D|Predefinita Il pulsante sembra avere lati alti e tridimensionali. Quando si fa clic sul pulsante, il pulsante sembra essere premuto in un rientro profondo.|
|BUTTONSTYLE_FLAT|Quando il mouse non viene sospeso sul pulsante, il pulsante sembra bidimensionale e non ha un lato elevato. Quando il mouse viene posizionato sul pulsante, il pulsante sembra avere lati bassi e tridimensionali. Quando si fa clic sul pulsante, il pulsante sembra essere premuto in un rientro superficiale.|
|BUTTONSTYLE_SEMIFLAT|Il pulsante sembra avere lati bassi e tridimensionali. Quando si fa clic sul pulsante, il pulsante sembra essere premuto in un rientro profondo.|
|BUTTONSTYLE_NOBORDERS|Il pulsante non ha lati sollevati e viene sempre visualizzato bidimensionale. Quando si fa clic sul pulsante, il pulsante non sembra essere premuto in un rientro.|

Il `CMFCButton` costruttore inizializza il membro a BUTTONSTYLE_3D.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare i valori della `m_nFlatStyle` variabile membro `CMFCButton` nella classe. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#29](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_5.cpp)]

##  <a name="ondraw"></a>CMFCButton:: onpare

Chiamato dal Framework per creare un pulsante.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*rect*<br/>
in Riferimento a un rettangolo che delimita il pulsante.

*uiState*<br/>
in Stato del pulsante corrente. Per ulteriori informazioni, vedere il `itemState` membro dell'argomento relativo alla [struttura DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) .

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per usare il proprio codice per creare un pulsante.

##  <a name="ondrawborder"></a>CMFCButton:: OnDrawBorder

Chiamato dal Framework per creare il bordo di un pulsante.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect& rectClient,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*rectClient*<br/>
in Riferimento a un rettangolo che delimita il pulsante.

*uiState*<br/>
in Stato del pulsante corrente. Per ulteriori informazioni, vedere il `itemState` membro dell'argomento relativo alla [struttura DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) .

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per usare il proprio codice per creare il bordo.

##  <a name="ondrawfocusrect"></a>CMFCButton:: OnDrawFocusRect

Chiamato dal Framework per creare il rettangolo di attivazione per un pulsante.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*rectClient*<br/>
in Riferimento a un rettangolo che delimita il pulsante.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per usare il proprio codice per creare il rettangolo di attivazione.

##  <a name="ondrawtext"></a>CMFCButton:: OnDrawText

Chiamato dal Framework per creare il testo del pulsante.

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
in Puntatore a un contesto di dispositivo.

*rect*<br/>
in Riferimento a un rettangolo che delimita il pulsante.

*strText*<br/>
in Testo da creare.

*uiDTFlags*<br/>
in Flag che specificano come formattare il testo. Per ulteriori informazioni, vedere il parametro *nFormat* del metodo [CDC::D rawtext](../../mfc/reference/cdc-class.md#drawtext) .

*uiState*<br/>
[in] Riservato.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per usare il proprio codice per creare il testo del pulsante.

##  <a name="onfillbackground"></a>CMFCButton:: OnFillBackground

Chiamato dal Framework per creare lo sfondo del testo del pulsante.

```
virtual void OnFillBackground(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*rectClient*<br/>
in Riferimento a un rettangolo che delimita il pulsante.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per usare il proprio codice per creare lo sfondo di un pulsante.

##  <a name="selectfont"></a>CMFCButton:: SelectFont

Recupera il tipo di carattere associato al contesto di dispositivo specificato.

```
virtual CFont* SelectFont(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

### <a name="return-value"></a>Valore restituito

Eseguire l'override di questo metodo per usare il proprio codice per recuperare il tipo di carattere.

### <a name="remarks"></a>Note

##  <a name="setautorepeatmode"></a>CMFCButton:: SetAutorepeatMode

Imposta un pulsante per la modalità di ripetizione automatica.

```
void SetAutorepeatMode(int nTimeDelay=500);
```

### <a name="parameters"></a>Parametri

*nTimeDelay*<br/>
in Numero non negativo che specifica l'intervallo tra i messaggi inviati alla finestra padre. L'intervallo è espresso in millisecondi e il valore predefinito è 500 millisecondi. Specificare zero per disabilitare la modalità di ripetizione automatica del messaggio.

### <a name="remarks"></a>Note

Questo metodo fa in modo che il pulsante invii costantemente messaggi WM_COMMAND alla finestra padre fino a quando il pulsante non viene rilasciato oppure il parametro *nTimeDelay* è impostato su zero.

##  <a name="setcheckedimage"></a>CMFCButton:: SetCheckedImage

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
in Handle per l'icona che contiene la bitmap e la maschera per la nuova immagine.

*bAutoDestroy*<br/>
in TRUE per specificare che le risorse bitmap verranno distrutte automaticamente. in caso contrario, FALSE. Il valore predefinito è TRUE.

*hIconHot*<br/>
in Handle per l'icona che contiene l'immagine per lo stato selezionato.

*hBitmap*<br/>
in Handle per la bitmap che contiene l'immagine per lo stato non selezionato.

*hBitmapHot*<br/>
in Handle per la bitmap che contiene l'immagine per lo stato selezionato.

*bMap3dColors*<br/>
in Specifica un colore trasparente per lo sfondo del pulsante. ovvero la faccia del pulsante. TRUE per usare il valore di colore RGB (192, 192, 192); FALSE per usare il valore del colore definito `AFX_GLOBAL_DATA::clrBtnFace`da.

*uiBmpResId*<br/>
in ID risorsa per l'immagine non selezionata.

*uiBmpHotResId*<br/>
in ID risorsa per l'immagine selezionata.

*hIconDisabled*<br/>
in Handle per l'icona per l'immagine disabilitata.

*hBitmapDisabled*<br/>
in Handle per la bitmap che contiene l'immagine disabilitata.

*uiBmpDsblResID*<br/>
in ID risorsa della bitmap disabilitata.

*bAlphaBlend*<br/>
in TRUE per usare solo immagini a 32 bit che usano il canale alfa; FALSE, per non usare solo le immagini del canale alfa. Il valore predefinito è FALSE.

### <a name="remarks"></a>Note

##  <a name="setfacecolor"></a>CMFCButton:: SetFaceColor

Imposta il colore di sfondo per il testo del pulsante.

```
void SetFaceColor(
    COLORREF crFace,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*crFace*<br/>
in Valore di colore RGB.

*bRedraw*<br/>
in TRUE per ricreare immediatamente lo schermo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Utilizzare questo metodo per definire un nuovo colore di riempimento per lo sfondo del pulsante (Face). Si noti che lo sfondo non viene compilato quando la variabile membro [CMFCButton:: m_bTransparent](#m_btransparent) è true.

##  <a name="setimage"></a>CMFCButton:: seimagine

Imposta l'immagine per un pulsante.

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
in Handle per l'icona che contiene la bitmap e la maschera per la nuova immagine.

*bAutoDestroy*<br/>
in TRUE per specificare che le risorse bitmap verranno distrutte automaticamente. in caso contrario, FALSE. Il valore predefinito è TRUE.

*hIconHot*<br/>
in Handle per l'icona che contiene l'immagine per lo stato selezionato.

*hBitmap*<br/>
in Handle per la bitmap che contiene l'immagine per lo stato non selezionato.

*hBitmapHot*<br/>
in Handle per la bitmap che contiene l'immagine per lo stato selezionato.

*uiBmpResId*<br/>
in ID risorsa per l'immagine non selezionata.

*uiBmpHotResId*<br/>
in ID risorsa per l'immagine selezionata.

*bMap3dColors*<br/>
in Specifica un colore trasparente per lo sfondo del pulsante. ovvero la faccia del pulsante. TRUE per usare il valore di colore RGB (192, 192, 192); FALSE per usare il valore del colore definito `AFX_GLOBAL_DATA::clrBtnFace`da.

*hIconDisabled*<br/>
in Handle per l'icona per l'immagine disabilitata.

*hBitmapDisabled*<br/>
in Handle per la bitmap che contiene l'immagine disabilitata.

*uiBmpDsblResID*<br/>
in ID risorsa della bitmap disabilitata.

*bAlphaBlend*<br/>
in TRUE per usare solo immagini a 32 bit che usano il canale alfa; FALSE, per non usare solo le immagini del canale alfa. Il valore predefinito è FALSE.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare diverse versioni del `SetImage` metodo `CMFCButton` nella classe. L'esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_2.cpp)]

##  <a name="setmousecursor"></a>CMFCButton:: SetMouseCursor

Imposta l'immagine del cursore.

```
void SetMouseCursor(HCURSOR hcursor);
```

### <a name="parameters"></a>Parametri

*hcursor*<br/>
in Handle di un cursore.

### <a name="remarks"></a>Note

Utilizzare questo metodo per associare un'immagine del cursore, ad esempio il cursore a forma di mano, con il pulsante. Il cursore viene caricato dalle risorse dell'applicazione.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `SetMouseCursor` metodo `CMFCButton` nella classe. L'esempio è parte del codice nell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#30](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_6.cpp)]

##  <a name="setmousecursorhand"></a>CMFCButton:: SetMouseCursorHand

Imposta il cursore sull'immagine di una mano.

```
void SetMouseCursorHand();
```

### <a name="remarks"></a>Note

Utilizzare questo metodo per associare l'immagine del cursore di una mano al pulsante. Il cursore viene caricato dalle risorse dell'applicazione.

##  <a name="setstdimage"></a>CMFCButton:: SetStdImage

Usa un `CMenuImages` oggetto per impostare l'immagine del pulsante.

```
void SetStdImage(
    CMenuImages::IMAGES_IDS id,
    CMenuImages::IMAGE_STATE state=CMenuImages::ImageBlack,
    CMenuImages::IMAGES_IDS idDisabled=(CMenuImages::IMAGES_IDS)0);
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Uno degli identificatori di immagine del pulsante definito nell' `CMenuImage::IMAGES_IDS` enumerazione. I valori di immagine specificano immagini quali frecce, pin e pulsanti di opzione.

*state*<br/>
in Uno degli identificatori di stato dell'immagine del pulsante definito nell' `CMenuImages::IMAGE_STATE` enumerazione. Gli Stati dell'immagine specificano colori dei pulsanti quali nero, grigio, grigio chiaro, bianco e grigio scuro. Il valore predefinito è `CMenuImages::ImageBlack`.

*idDisabled*<br/>
in Uno degli identificatori di immagine del pulsante definito nell' `CMenuImage::IMAGES_IDS` enumerazione. L'immagine indica che il pulsante è disabilitato. Il valore predefinito è la prima immagine del pulsante `CMenuImages::IdArrowDown`().

### <a name="remarks"></a>Note

##  <a name="settextcolor"></a>  CMFCButton::SetTextColor

Imposta il colore del testo del pulsante per un pulsante non selezionato.

```
void SetTextColor(COLORREF clrText);
```

### <a name="parameters"></a>Parametri

*clrText*<br/>
in Valore di colore RGB.

### <a name="remarks"></a>Note

##  <a name="settexthotcolor"></a>  CMFCButton::SetTextHotColor

Imposta il colore del testo del pulsante per un pulsante selezionato.

```
void SetTextHotColor(COLORREF clrTextHot);
```

### <a name="parameters"></a>Parametri

*clrTextHot*<br/>
in Valore di colore RGB.

### <a name="remarks"></a>Note

##  <a name="settooltip"></a>CMFCButton:: setooltip

Associa una descrizione comandi a un pulsante.

```
void SetTooltip(LPCTSTR lpszToolTipText);
```

### <a name="parameters"></a>Parametri

*lpszToolTipText*<br/>
in Puntatore al testo per la descrizione comando. Specificare NULL per disabilitare la descrizione comando.

### <a name="remarks"></a>Note

##  <a name="sizetocontent"></a>CMFCButton:: SizeToContent

Ridimensiona un pulsante per contenere il testo e l'immagine del pulsante.

```
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```

### <a name="parameters"></a>Parametri

*bCalcOnly*<br/>
in TRUE per calcolare, ma non modificare, la nuova dimensione del pulsante; FALSE per modificare le dimensioni del pulsante. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

`CSize` Oggetto che contiene le nuove dimensioni del pulsante.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo calcola una nuova dimensione che include un margine orizzontale di 10 pixel e un margine verticale di 5 pixel.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)<br/>
[Classe CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md)<br/>
[Classe CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md)
