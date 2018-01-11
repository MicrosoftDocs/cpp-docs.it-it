---
title: Classe CMFCButton | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
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
caps.latest.revision: "35"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6d496cf079cd56d8260c5fd8072809bc05559ef2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfcbutton-class"></a>Classe CMFCButton
Il `CMFCButton` classe aggiungendo funzionalità di [CButton](../../mfc/reference/cbutton-class.md) classe, ad esempio l'allineamento del testo del pulsante, la combinazione di testo del pulsante e un'immagine, la selezione di un cursore e specificare una descrizione comandi.  
  
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
|[CMFCButton::CleanUp](#cleanup)|Reimposta le variabili interne e libera le risorse allocate, ad esempio immagini, bitmap e icone.|  
|`CMFCButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCButton::DrawItem`|Chiamato dal framework quando viene modificato un aspetto visivo di un pulsante disegnato dal proprietario. (Esegue l'override [CButton::DrawItem](../../mfc/reference/cbutton-class.md#drawitem).)|  
|[CMFCButton::EnableFullTextTooltip](#enablefulltexttooltip)|Specifica se visualizzare il testo completo di una descrizione comando in una finestra di descrizione comando di grandi dimensioni o una versione troncata del testo in una finestra di descrizione comando di piccole dimensioni.|  
|[CMFCButton::EnableMenuFont](#enablemenufont)|Specifica se il carattere di testo del pulsante è lo stesso del tipo di carattere dal menu di applicazione.|  
|[CMFCButton::EnableWindowsTheming](#enablewindowstheming)|Specifica se lo stile del bordo pulsante corrisponde al tema di Windows corrente.|  
|`CMFCButton::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCButton::GetToolTipCtrl](#gettooltipctrl)|Restituisce un riferimento al controllo tooltip sottostante.|  
|[CMFCButton::IsAutoCheck](#isautocheck)|Indica se una casella di controllo o pulsante di opzione è un pulsante automatico.|  
|[CMFCButton::IsAutorepeatCommandMode](#isautorepeatcommandmode)|Indica se un pulsante viene impostato sulla modalità di ripetizione automatica.|  
|[CMFCButton::IsCheckBox](#ischeckbox)|Indica se un pulsante è un pulsante della casella di controllo.|  
|[CMFCButton::IsChecked](#ischecked)|Indica se è selezionato il pulsante corrente.|  
|[CMFCButton::IsHighlighted](#ishighlighted)|Indica se un pulsante è evidenziato.|  
|[CMFCButton::IsPressed](#ispressed)|Indica se un pulsante viene inserito ed evidenziato.|  
|[CMFCButton::IsPushed](#ispushed)|Indica se viene premuto un pulsante.|  
|[CMFCButton::IsRadioButton](#isradiobutton)|Indica se un pulsante è un pulsante di opzione.|  
|[CMFCButton::IsWindowsThemingEnabled](#iswindowsthemingenabled)|Indica se lo stile del bordo pulsante corrisponde al tema di Windows corrente.|  
|`CMFCButton::OnDrawParentBackground`|Disegna lo sfondo dell'elemento padre di un pulsante nell'area specificata. (Esegue l'override [AFX_GLOBAL_DATA::DrawParentBackground](../../mfc/reference/afx-global-data-structure.md)|  
|`CMFCButton::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|  
|[CMFCButton::SetAutorepeatMode](#setautorepeatmode)|Imposta un pulsante in modalità di ripetizione automatica.|  
|[CMFCButton::SetCheckedImage](#setcheckedimage)|Imposta l'immagine per un pulsante selezionato.|  
|[CMFCButton::SetFaceColor](#setfacecolor)|Imposta il colore di sfondo per il testo del pulsante.|  
|[CMFCButton::SetImage](#setimage)|Imposta l'immagine per un pulsante.|  
|[CMFCButton::SetMouseCursor](#setmousecursor)|Imposta l'immagine del cursore.|  
|[CMFCButton::SetMouseCursorHand](#setmousecursorhand)|Imposta il cursore dell'immagine di una mano.|  
|[CMFCButton::SetStdImage](#setstdimage)|Usa un `CMenuImages` per impostare l'immagine del pulsante.|  
|[CMFCButton::SetTextColor](#settextcolor)|Imposta il colore del testo del pulsante per un pulsante che non è selezionato.|  
|[CMFCButton::SetTextHotColor](#settexthotcolor)|Imposta il colore del testo del pulsante per un pulsante che sia selezionato.|  
|[CMFCButton::SetTooltip](#settooltip)|Associa una descrizione comando con un pulsante.|  
|[CMFCButton::SizeToContent](#sizetocontent)|Ridimensiona un pulsante per contenere il testo del pulsante e l'immagine.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCButton::OnDraw](#ondraw)|Chiamato dal framework per disegnare un pulsante.|  
|[CMFCButton::OnDrawBorder](#ondrawborder)|Chiamato dal framework per disegnare il bordo di un pulsante.|  
|[CMFCButton::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal framework per disegnare il rettangolo di attivazione per un pulsante.|  
|[CMFCButton::OnDrawText](#ondrawtext)|Chiamato dal framework per disegnare il testo del pulsante.|  
|[CMFCButton::OnFillBackground](#onfillbackground)|Chiamato dal framework per disegnare lo sfondo del testo del pulsante.|  
|[CMFCButton::SelectFont](#selectfont)|Recupera il tipo di carattere che è associato il contesto di dispositivo specificato.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCButton::m_bDrawFocus](#m_bdrawfocus)|Indica se disegnare un rettangolo di selezione attorno a un pulsante.|  
|[CMFCButton::m_bHighlightChecked](#m_bhighlightchecked)|Indica se evidenziare un pulsante BS_CHECKBOX stile quando il cursore viene spostato su di esso.|  
|[CMFCButton::m_bRightImage](#m_brightimage)|Indica se visualizzare un'immagine a destra del pulsante.|  
|[CMFCButton::m_bTransparent](#m_btransparent)|Indica se il pulsante è trasparente.|  
|[CMFCButton::m_nAlignStyle](#m_nalignstyle)|Specifica l'allineamento del testo del pulsante.|  
|[CMFCButton::m_nFlatStyle](#m_nflatstyle)|Specifica lo stile del pulsante, ad esempio flat virgola senza bordi, flat, o 3D.|  
  
## <a name="remarks"></a>Note  
 Derivano da altri tipi di pulsanti di `CMFCButton` classe, ad esempio il [CMFCURLLinkButton](../../mfc/reference/cmfclinkctrl-class.md) (classe), che supporta i collegamenti ipertestuali, e `CMFCColorButton` (classe), che supporta una finestra di dialogo Selezione colori.  
  
 Lo stile di un `CMFCButton` oggetto può essere *3D*, *flat*, *semi-flat* o *alcun bordo*. Testo del pulsante può essere allineato a sinistra, top o center di un pulsante. In fase di esecuzione, è possibile controllare se il pulsante Visualizza il testo, un'immagine, o testo e un'immagine. È inoltre possibile specificare che un'immagine specifica del cursore visualizzato quando il cursore viene posizionato su un pulsante.  
  
 Creare un controllo pulsante direttamente nel codice o tramite il **Creazione guidata classe MFC** strumento e un modello di finestra di dialogo. Se si crea un controllo pulsante direttamente, aggiungere un `CMFCButton` variabile dell'applicazione e quindi chiamare il costruttore e `Create` metodi di `CMFCButton` oggetto. Se si utilizza il **Creazione guidata classe MFC**, aggiungere un `CButton` variabile per l'applicazione e quindi modificare il tipo della variabile da `CButton` a `CMFCButton`.  
  
 Per gestire i messaggi di notifica in un'applicazione di casella della finestra di dialogo, aggiungere una voce della mappa messaggi e un gestore eventi per ogni notifica. Le notifiche inviate da un `CMFCButton` oggetto sono uguali a quelli inviati da un `CButton` oggetto.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come configurare le proprietà del pulsante utilizzando vari metodi nella `CMFCButton` classe. L'esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
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
  
##  <a name="cleanup"></a>CMFCButton::CleanUp  
 Reimposta le variabili interne e libera le risorse allocate, ad esempio immagini, bitmap e icone.  
  
```  
virtual void CleanUp();
```  
  
##  <a name="enablefulltexttooltip"></a>CMFCButton::EnableFullTextTooltip  
 Specifica se visualizzare il testo completo di una descrizione comando in una finestra di descrizione comando di grandi dimensioni o una versione troncata del testo in una finestra di descrizione comando di piccole dimensioni.  
  
```  
void EnableFullTextTooltip(BOOL bOn=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bOn`  
 `TRUE`Per visualizzare tutto il testo; `FALSE` per testo troncato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enablemenufont"></a>CMFCButton::EnableMenuFont  
 Specifica se il carattere di testo del pulsante è lo stesso del tipo di carattere dal menu di applicazione.  
  
```  
void EnableMenuFont(
    BOOL bOn=TRUE,  
    BOOL bRedraw=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bOn`  
 `TRUE`Utilizzare il tipo di carattere dal menu di applicazione come tipo di carattere di testo del pulsante; `FALSE` per utilizzare il carattere di sistema. Il valore predefinito è `TRUE`.  
  
 [in] `bRedraw`  
 `TRUE`Per aggiornare immediatamente lo schermo; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
 Se non si utilizzano questo metodo per specificare il carattere di testo del pulsante, è possibile specificare il tipo di carattere con la [CWnd::SetFont](../../mfc/reference/cwnd-class.md#setfont) metodo. Se non si specifica un tipo di carattere del tutto, il framework imposta un tipo di carattere predefinito.  
  
##  <a name="enablewindowstheming"></a>CMFCButton::EnableWindowsTheming  
 Specifica se lo stile del bordo pulsante corrisponde al tema di Windows corrente.  
  
```  
static void EnableWindowsTheming(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Utilizzare il tema di Windows corrente per disegnare i bordi pulsante; `FALSE` per non utilizzare il tema di Windows. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo influisce su tutti i pulsanti nell'applicazione che derivano dalla `CMFCButton` classe.  
  
##  <a name="gettooltipctrl"></a>CMFCButton::GetToolTipCtrl  
 Restituisce un riferimento al controllo tooltip sottostante.  
  
```  
CToolTipCtrl& GetToolTipCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento al controllo tooltip sottostante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isautocheck"></a>CMFCButton::IsAutoCheck  
 Indica se una casella di controllo o pulsante di opzione è un pulsante automatico.  
  
```  
BOOL IsAutoCheck() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il pulsante ha lo stile BS_AUTOCHECKBOX oppure BS_AUTORADIOBUTTON; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isautorepeatcommandmode"></a>CMFCButton::IsAutorepeatCommandMode  
 Indica se un pulsante viene impostato sulla modalità di ripetizione automatica.  
  
```  
BOOL IsAutorepeatCommandMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante è impostato sulla modalità di ripetizione automatica. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CMFCButton::SetAutorepeatMode](#setautorepeatmode) per impostare un pulsante alla modalità di ripetizione automatica.  
  
##  <a name="ischeckbox"></a>CMFCButton::IsCheckBox  
 Indica se un pulsante è un pulsante della casella di controllo.  
  
```  
BOOL IsCheckBox() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante ha stile BS_CHECKBOX o BS_AUTOCHECKBOX; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ischecked"></a>CMFCButton::IsChecked  
 Indica se è selezionato il pulsante corrente.  
  
```  
BOOL IsChecked() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è selezionato il pulsante corrente; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza diversi modi per indicare che sono archiviati i diversi tipi di pulsanti. Ad esempio, un pulsante di opzione è selezionato quando contiene un punto. una casella di controllo è selezionata, quando contiene un **X**.  
  
##  <a name="ishighlighted"></a>CMFCButton::IsHighlighted  
 Indica se un pulsante è evidenziato.  
  
```  
BOOL IsHighlighted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante è evidenziato. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Un pulsante viene evidenziato quando il mouse viene spostato su di esso.  
  
##  <a name="ispressed"></a>CMFCButton::IsPressed  
 Indica se un pulsante viene inserito ed evidenziato.  
  
```  
BOOL IsPressed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se viene premuto il pulsante; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ispushed"></a>CMFCButton::IsPushed  
 Indica se viene premuto un pulsante.  
  
```  
BOOL IsPushed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante è premuto; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isradiobutton"></a>CMFCButton::IsRadioButton  
 Indica se un pulsante è un pulsante di opzione.  
  
```  
BOOL IsRadioButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se lo stile del pulsante è BS_RADIOBUTTON o BS_AUTORADIOBUTTON; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="iswindowsthemingenabled"></a>CMFCButton::IsWindowsThemingEnabled  
 Indica se lo stile del bordo pulsante corrisponde al tema di Windows corrente.  
  
```  
static BOOL IsWindowsThemingEnabled();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo stile del bordo pulsante corrispondente per il tema di Windows corrente. in caso contrario, `FALSE`.  
  
##  <a name="m_bdrawfocus"></a>CMFCButton::m_bDrawFocus  
 Indica se disegnare un rettangolo di selezione attorno a un pulsante.  
  
```  
BOOL m_bDrawFocus;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il `m_bDrawFocus` membro `TRUE` per specificare che il framework disegnare un rettangolo di selezione attorno al testo del pulsante e immagine se il pulsante riceve lo stato attivo.  
  
 Il `CMFCButton` costruttore inizializza il membro a `TRUE`.  
  
##  <a name="m_bhighlightchecked"></a>CMFCButton::m_bHighlightChecked  
 Indica se evidenziare un pulsante BS_CHECKBOX stile quando il cursore viene spostato su di esso.  
  
```  
BOOL m_bHighlightChecked;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il `m_bHighlightChecked` membro `TRUE` per specificare che il framework verrà evidenziare un pulsante BS_CHECKBOX stile quando il mouse viene spostato su di esso.  
  
##  <a name="m_brightimage"></a>CMFCButton::m_bRightImage  
 Indica se visualizzare un'immagine a destra del pulsante.  
  
```  
BOOL m_bRightImage;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il `m_bRightImage` membro `TRUE` per specificare che il framework visualizzerà l'immagine del pulsante a destra dell'etichetta di testo del pulsante.  
  
##  <a name="m_btransparent"></a>CMFCButton::m_bTransparent  
 Indica se il pulsante è trasparente.  
  
```  
BOOL m_bTransparent;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il `m_bTransparent` membro `TRUE` per specificare che il framework effettuerà il pulsante trasparente. Il `CMFCButton` costruttore inizializza il membro a `FALSE`.  
  
##  <a name="m_nalignstyle"></a>CMFCButton::m_nAlignStyle  
 Specifica l'allineamento del testo del pulsante.  
  
```  
AlignStyle m_nAlignStyle;  
```  
  
### <a name="remarks"></a>Note  
 Utilizzare uno dei seguenti `CMFCButton::AlignStyle` valori di enumerazione per specificare l'allineamento del testo del pulsante:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|ALIGN_CENTER|(Impostazione predefinita) Consente di allineare il testo del pulsante al centro del pulsante.|  
|ALIGN_LEFT|Consente di allineare il testo del pulsante a sinistra del pulsante.|  
|ALIGN_RIGHT|Consente di allineare il testo del pulsante a destra del pulsante.|  
  
 Il `CMFCButton` costruttore inizializza il membro a ALIGN_CENTER.  
  
##  <a name="m_nflatstyle"></a>CMFCButton::m_nFlatStyle  
 Specifica lo stile del pulsante, ad esempio flat virgola senza bordi, flat, o 3D.  
  
```  
FlatStyle  m_nFlatStyle;  
```  
  
### <a name="remarks"></a>Note  
 La tabella seguente elenca i `CMFCButton::m_nFlatStyle` valori di enumerazione che specificano l'aspetto di un pulsante.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|BUTTONSTYLE_3D|(Impostazione predefinita) Il pulsante viene visualizzato con i lati alto, tridimensionali. Quando si fa clic sul pulsante, viene visualizzato il pulsante premuto in un rientro completo.|  
|BUTTONSTYLE_FLAT|Quando il mouse non sospende su di esso, il pulsante è bidimensionale e non hanno generato i lati. Quando si posiziona il mouse su di esso, viene visualizzato il pulsante con i lati di bassi, tridimensionali. Quando si fa clic sul pulsante, viene visualizzato il pulsante premuto in un rientro superficiale.|  
|BUTTONSTYLE_SEMIFLAT|Il pulsante viene visualizzato con i lati di bassi, tridimensionali. Quando si fa clic sul pulsante, viene visualizzato il pulsante premuto in un rientro completo.|  
|BUTTONSTYLE_NOBORDERS|Il pulsante non hanno generato i lati e viene sempre visualizzata bidimensionale. Il pulsante non viene visualizzato in un rientro premuto quando viene selezionato.|  
  
 Il `CMFCButton` costruttore inizializza il membro a `BUTTONSTYLE_3D`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come impostare i valori del `m_nFlatStyle` variabile membro nella `CMFCButton` classe. In questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#29](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_5.cpp)]  
  
##  <a name="ondraw"></a>CMFCButton::OnDraw  
 Chiamato dal framework per disegnare un pulsante.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    UINT uiState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Un riferimento a un rettangolo che racchiude il pulsante.  
  
 [in] `uiState`  
 Stato del pulsante corrente. Per ulteriori informazioni, vedere il `itemState` appartenente il [DRAWITEMSTRUCT (struttura)](../../mfc/reference/drawitemstruct-structure.md) argomento.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare un pulsante.  
  
##  <a name="ondrawborder"></a>CMFCButton::OnDrawBorder  
 Chiamato dal framework per disegnare il bordo di un pulsante.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect& rectClient,  
    UINT uiState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectClient`  
 Un riferimento a un rettangolo che racchiude il pulsante.  
  
 [in] `uiState`  
 Stato del pulsante corrente. Per ulteriori informazioni, vedere il `itemState` appartenente il [DRAWITEMSTRUCT (struttura)](../../mfc/reference/drawitemstruct-structure.md) argomento.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare il bordo.  
  
##  <a name="ondrawfocusrect"></a>CMFCButton::OnDrawFocusRect  
 Chiamato dal framework per disegnare il rettangolo di attivazione per un pulsante.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectClient`  
 Un riferimento a un rettangolo che racchiude il pulsante.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare il rettangolo di attivazione.  
  
##  <a name="ondrawtext"></a>CMFCButton::OnDrawText  
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
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Un riferimento a un rettangolo che racchiude il pulsante.  
  
 [in] `strText`  
 Testo da disegnare.  
  
 [in] `uiDTFlags`  
 Flag che specificano la modalità di formattazione del testo. Per ulteriori informazioni, vedere il `nFormat` parametro del [CDC](../../mfc/reference/cdc-class.md#drawtext) metodo.  
  
 [in] `uiState`  
 (Riservato).  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare il testo del pulsante.  
  
##  <a name="onfillbackground"></a>CMFCButton::OnFillBackground  
 Chiamato dal framework per disegnare lo sfondo del testo del pulsante.  
  
```  
virtual void OnFillBackground(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectClient`  
 Un riferimento a un rettangolo che racchiude il pulsante.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per utilizzare il proprio codice per disegnare lo sfondo di un pulsante.  
  
##  <a name="selectfont"></a>CMFCButton::SelectFont  
 Recupera il tipo di carattere che è associato il contesto di dispositivo specificato.  
  
```  
virtual CFont* SelectFont(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Eseguire l'override di questo metodo per utilizzare il proprio codice per recuperare il tipo di carattere.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setautorepeatmode"></a>CMFCButton::SetAutorepeatMode  
 Imposta un pulsante in modalità di ripetizione automatica.  
  
```  
void SetAutorepeatMode(int nTimeDelay=500);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTimeDelay`  
 Numero non negativo che specifica l'intervallo tra i messaggi inviati alla finestra padre. L'intervallo viene misurato in millisecondi e il valore predefinito è 500 millisecondi. Specificare zero per disabilitare la modalità di ripetizione automatica messaggio.  
  
### <a name="remarks"></a>Note  
 Questo metodo, il pulsante Invia costantemente messaggi WM_COMMAND alla finestra padre fino a quando non viene rilasciato il pulsante, o `nTimeDelay` parametro è impostato su zero.  
  
##  <a name="setcheckedimage"></a>CMFCButton::SetCheckedImage  
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
 [in] `hIcon`  
 Handle per l'icona che contiene la bitmap e il filtro per la nuova immagine.  
  
 [in] `bAutoDestroy`  
 `TRUE`Per specificare che le risorse bitmap essere eliminati automaticamente. in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
 [in] `hIconHot`  
 Handle per l'icona che contiene l'immagine per lo stato selezionato.  
  
 [in] `hBitmap`  
 Handle per la mappa di bit che contiene l'immagine per lo stato non selezionato.  
  
 [in] `hBitmapHot`  
 Handle per la mappa di bit che contiene l'immagine per lo stato selezionato.  
  
 [in] `bMap3dColors`  
 Specifica un colore trasparente per lo sfondo del pulsante; ovvero, l'immagine del pulsante. `TRUE`Per utilizzare il valore di colore RGB (192, 192, 192); `FALSE` per utilizzare il valore di colore definito dal `AFX_GLOBAL_DATA::clrBtnFace`.  
  
 [in] `uiBmpResId`  
 ID di risorsa per l'immagine non selezionato.  
  
 [in] `uiBmpHotResId`  
 ID di risorsa per l'immagine selezionata.  
  
 [in] `hIconDisabled`  
 Handle per l'icona per l'immagine disabilitato.  
  
 [in] `hBitmapDisabled`  
 Handle per la mappa di bit che contiene l'immagine disabilitato.  
  
 [in] `uiBmpDsblResID`  
 ID risorsa della bitmap disabilitata.  
  
 [in] `bAlphaBlend`  
 `TRUE`Utilizzare sole immagini a 32 bit che utilizzano il canale alfa. `FALSE`, non utilizzare solo le immagini di canale alfa. Il valore predefinito è `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setfacecolor"></a>CMFCButton::SetFaceColor  
 Imposta il colore di sfondo per il testo del pulsante.  
  
```  
void SetFaceColor(
    COLORREF crFace,  
    BOOL bRedraw=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `crFace`  
 Un valore di colore RGB.  
  
 [in] `bRedraw`  
 `TRUE`Per aggiornare lo schermo immediatamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per definire un nuovo colore di riempimento per lo sfondo del pulsante (faccia). Si noti che lo sfondo non è soddisfatta quando la [CMFCButton::m_bTransparent](#m_btransparent) è variabile membro `TRUE`.  
  
##  <a name="setimage"></a>CMFCButton::SetImage  
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
 [in] `hIcon`  
 Handle per l'icona che contiene la bitmap e il filtro per la nuova immagine.  
  
 [in] `bAutoDestroy`  
 `TRUE`Per specificare che le risorse bitmap essere eliminati automaticamente. in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
 [in] `hIconHot`  
 Handle per l'icona che contiene l'immagine per lo stato selezionato.  
  
 [in] `hBitmap`  
 Handle per la mappa di bit che contiene l'immagine per lo stato non selezionato.  
  
 [in] `hBitmapHot`  
 Handle per la mappa di bit che contiene l'immagine per lo stato selezionato.  
  
 [in] `uiBmpResId`  
 ID di risorsa per l'immagine non selezionato.  
  
 [in] `uiBmpHotResId`  
 ID di risorsa per l'immagine selezionata.  
  
 [in] `bMap3dColors`  
 Specifica un colore trasparente per lo sfondo del pulsante; ovvero, l'immagine del pulsante. `TRUE`Per utilizzare il valore di colore RGB (192, 192, 192); `FALSE` per utilizzare il valore di colore definito dal `AFX_GLOBAL_DATA::clrBtnFace`.  
  
 [in] `hIconDisabled`  
 Handle per l'icona per l'immagine disabilitato.  
  
 [in] `hBitmapDisabled`  
 Handle per la mappa di bit che contiene l'immagine disabilitato.  
  
 [in] `uiBmpDsblResID`  
 ID risorsa della bitmap disabilitata.  
  
 [in] `bAlphaBlend`  
 `TRUE`Utilizzare sole immagini a 32 bit che utilizzano il canale alfa. `FALSE`, non utilizzare solo le immagini di canale alfa. Il valore predefinito è `FALSE`.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare diverse versioni del `SetImage` metodo la `CMFCButton` classe. L'esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_2.cpp)]  
  
##  <a name="setmousecursor"></a>CMFCButton::SetMouseCursor  
 Imposta l'immagine del cursore.  
  
```  
void SetMouseCursor(HCURSOR hcursor);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hcursor`  
 L'handle di un cursore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per associare un'immagine del cursore, ad esempio il cursore della mano, con il pulsante. Il cursore viene caricato dalle risorse dell'applicazione.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetMouseCursor` metodo la `CMFCButton` classe. L'esempio fa parte del codice di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#30](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_6.cpp)]  
  
##  <a name="setmousecursorhand"></a>CMFCButton::SetMouseCursorHand  
 Imposta il cursore dell'immagine di una mano.  
  
```  
void SetMouseCursorHand();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per associare l'immagine del cursore di una mano con il pulsante. Il cursore viene caricato dalle risorse dell'applicazione.  
  
##  <a name="setstdimage"></a>CMFCButton::SetStdImage  
 Usa un `CMenuImages` per impostare l'immagine del pulsante.  
  
```  
void SetStdImage(
    CMenuImages::IMAGES_IDS id,  
    CMenuImages::IMAGE_STATE state=CMenuImages::ImageBlack,  
    CMenuImages::IMAGES_IDS idDisabled=(CMenuImages::IMAGES_IDS)0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `id`  
 Uno degli identificatori pulsante immagine definita nel `CMenuImage::IMAGES_IDS` enumerazione. I valori di immagine specificano immagini come frecce, pin e pulsanti di opzione.  
  
 [in] `state`  
 Uno degli identificatori pulsante immagine stato definito nel `CMenuImages::IMAGE_STATE` enumerazione. Gli stati di immagine specificano i colori dei pulsanti, ad esempio grigio chiaro, grigio nero, bianco e grigio scuro. Il valore predefinito è `CMenuImages::ImageBlack`.  
  
 [in] `idDisabled`  
 Uno degli identificatori pulsante immagine definita nel `CMenuImage::IMAGES_IDS` enumerazione. L'immagine indica che il pulsante è disabilitato. Il valore predefinito è l'immagine del pulsante prima ( `CMenuImages::IdArrowDown`).  
  
### <a name="remarks"></a>Note  
  
##  <a name="settextcolor"></a>CMFCButton::SetTextColor  
 Imposta il colore del testo del pulsante per un pulsante che non è selezionato.  
  
```  
void SetTextColor(COLORREF clrText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `clrText`  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settexthotcolor"></a>CMFCButton::SetTextHotColor  
 Imposta il colore del testo del pulsante per un pulsante che sia selezionato.  
  
```  
void SetTextHotColor(COLORREF clrTextHot);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `clrTextHot`  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settooltip"></a>CMFCButton::SetTooltip  
 Associa una descrizione comando con un pulsante.  
  
```  
void SetTooltip(LPCTSTR lpszToolTipText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszToolTipText`  
 Puntatore al testo della descrizione comandi. Specificare NULL per disabilitare la descrizione comando.  
  
### <a name="remarks"></a>Note  
  
##  <a name="sizetocontent"></a>CMFCButton::SizeToContent  
 Ridimensiona un pulsante per contenere il testo del pulsante e l'immagine.  
  
```  
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bCalcOnly`  
 `TRUE`per calcolare, ma non modificare, le nuove dimensioni del pulsante; `FALSE` per modificare le dimensioni del pulsante. Il valore predefinito è `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che contiene le nuove dimensioni del pulsante.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo calcola una nuova dimensione che include un margine di 10 pixel in orizzontale e verticale margine 5 pixel.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)   
 [Classe CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md)   
 [Classe CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md)
