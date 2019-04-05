---
title: Classe CMFCMenuBar
ms.date: 10/18/2018
f1_keywords:
- CMFCMenuBar
- AFXMENUBAR/CMFCMenuBar
- AFXMENUBAR/CMFCMenuBar::AdjustLocations
- AFXMENUBAR/CMFCMenuBar::AllowChangeTextLabels
- AFXMENUBAR/CMFCMenuBar::AllowShowOnPaneMenu
- AFXMENUBAR/CMFCMenuBar::CalcFixedLayout
- AFXMENUBAR/CMFCMenuBar::CalcLayout
- AFXMENUBAR/CMFCMenuBar::CalcMaxButtonHeight
- AFXMENUBAR/CMFCMenuBar::CanBeClosed
- AFXMENUBAR/CMFCMenuBar::CanBeRestored
- AFXMENUBAR/CMFCMenuBar::Create
- AFXMENUBAR/CMFCMenuBar::CreateEx
- AFXMENUBAR/CMFCMenuBar::CreateFromMenu
- AFXMENUBAR/CMFCMenuBar::EnableHelpCombobox
- AFXMENUBAR/CMFCMenuBar::EnableMenuShadows
- AFXMENUBAR/CMFCMenuBar::GetAvailableExpandSize
- AFXMENUBAR/CMFCMenuBar::GetColumnWidth
- AFXMENUBAR/CMFCMenuBar::GetDefaultMenu
- AFXMENUBAR/CMFCMenuBar::GetDefaultMenuResId
- AFXMENUBAR/CMFCMenuBar::GetFloatPopupDirection
- AFXMENUBAR/CMFCMenuBar::GetForceDownArrows
- AFXMENUBAR/CMFCMenuBar::GetHelpCombobox
- AFXMENUBAR/CMFCMenuBar::GetHMenu
- AFXMENUBAR/CMFCMenuBar::GetMenuFont
- AFXMENUBAR/CMFCMenuBar::GetMenuItem
- AFXMENUBAR/CMFCMenuBar::GetRowHeight
- AFXMENUBAR/CMFCMenuBar::GetSystemButton
- AFXMENUBAR/CMFCMenuBar::GetSystemButtonsCount
- AFXMENUBAR/CMFCMenuBar::GetSystemMenu
- AFXMENUBAR/CMFCMenuBar::HighlightDisabledItems
- AFXMENUBAR/CMFCMenuBar::IsButtonExtraSizeAvailable
- AFXMENUBAR/CMFCMenuBar::IsHighlightDisabledItems
- AFXMENUBAR/CMFCMenuBar::IsMenuShadows
- AFXMENUBAR/CMFCMenuBar::IsRecentlyUsedMenus
- AFXMENUBAR/CMFCMenuBar::IsShowAllCommands
- AFXMENUBAR/CMFCMenuBar::IsShowAllCommandsDelay
- AFXMENUBAR/CMFCMenuBar::LoadState
- AFXMENUBAR/CMFCMenuBar::OnChangeHot
- AFXMENUBAR/CMFCMenuBar::OnDefaultMenuLoaded
- AFXMENUBAR/CMFCMenuBar::OnSendCommand
- AFXMENUBAR/CMFCMenuBar::OnSetDefaultButtonText
- AFXMENUBAR/CMFCMenuBar::OnToolHitTest
- AFXMENUBAR/CMFCMenuBar::PreTranslateMessage
- AFXMENUBAR/CMFCMenuBar::RestoreOriginalstate
- AFXMENUBAR/CMFCMenuBar::SaveState
- AFXMENUBAR/CMFCMenuBar::SetDefaultMenuResId
- AFXMENUBAR/CMFCMenuBar::SetForceDownArrows
- AFXMENUBAR/CMFCMenuBar::SetMaximizeMode
- AFXMENUBAR/CMFCMenuBar::SetMenuButtonRTC
- AFXMENUBAR/CMFCMenuBar::SetMenuFont
- AFXMENUBAR/CMFCMenuBar::SetRecentlyUsedMenus
- AFXMENUBAR/CMFCMenuBar::SetShowAllCommands
helpviewer_keywords:
- CMFCMenuBar [MFC], AdjustLocations
- CMFCMenuBar [MFC], AllowChangeTextLabels
- CMFCMenuBar [MFC], AllowShowOnPaneMenu
- CMFCMenuBar [MFC], CalcFixedLayout
- CMFCMenuBar [MFC], CalcLayout
- CMFCMenuBar [MFC], CalcMaxButtonHeight
- CMFCMenuBar [MFC], CanBeClosed
- CMFCMenuBar [MFC], CanBeRestored
- CMFCMenuBar [MFC], Create
- CMFCMenuBar [MFC], CreateEx
- CMFCMenuBar [MFC], CreateFromMenu
- CMFCMenuBar [MFC], EnableHelpCombobox
- CMFCMenuBar [MFC], EnableMenuShadows
- CMFCMenuBar [MFC], GetAvailableExpandSize
- CMFCMenuBar [MFC], GetColumnWidth
- CMFCMenuBar [MFC], GetDefaultMenu
- CMFCMenuBar [MFC], GetDefaultMenuResId
- CMFCMenuBar [MFC], GetFloatPopupDirection
- CMFCMenuBar [MFC], GetForceDownArrows
- CMFCMenuBar [MFC], GetHelpCombobox
- CMFCMenuBar [MFC], GetHMenu
- CMFCMenuBar [MFC], GetMenuFont
- CMFCMenuBar [MFC], GetMenuItem
- CMFCMenuBar [MFC], GetRowHeight
- CMFCMenuBar [MFC], GetSystemButton
- CMFCMenuBar [MFC], GetSystemButtonsCount
- CMFCMenuBar [MFC], GetSystemMenu
- CMFCMenuBar [MFC], HighlightDisabledItems
- CMFCMenuBar [MFC], IsButtonExtraSizeAvailable
- CMFCMenuBar [MFC], IsHighlightDisabledItems
- CMFCMenuBar [MFC], IsMenuShadows
- CMFCMenuBar [MFC], IsRecentlyUsedMenus
- CMFCMenuBar [MFC], IsShowAllCommands
- CMFCMenuBar [MFC], IsShowAllCommandsDelay
- CMFCMenuBar [MFC], LoadState
- CMFCMenuBar [MFC], OnChangeHot
- CMFCMenuBar [MFC], OnDefaultMenuLoaded
- CMFCMenuBar [MFC], OnSendCommand
- CMFCMenuBar [MFC], OnSetDefaultButtonText
- CMFCMenuBar [MFC], OnToolHitTest
- CMFCMenuBar [MFC], PreTranslateMessage
- CMFCMenuBar [MFC], RestoreOriginalstate
- CMFCMenuBar [MFC], SaveState
- CMFCMenuBar [MFC], SetDefaultMenuResId
- CMFCMenuBar [MFC], SetForceDownArrows
- CMFCMenuBar [MFC], SetMaximizeMode
- CMFCMenuBar [MFC], SetMenuButtonRTC
- CMFCMenuBar [MFC], SetMenuFont
- CMFCMenuBar [MFC], SetRecentlyUsedMenus
- CMFCMenuBar [MFC], SetShowAllCommands
ms.assetid: 8a3ce4c7-b012-4dc0-b4f8-53c10b4b86b8
ms.openlocfilehash: 87844e843057bb295c904b5f1b3d7dd03fa4d797
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58775894"
---
# <a name="cmfcmenubar-class"></a>Classe CMFCMenuBar

Barra dei menu che implementa l'ancoraggio.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCMenuBar : public CMFCToolbar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuBar::AdjustLocations](#adjustlocations)|Esegue l'override di `CMFCToolBar::AdjustLocations`.|
|[CMFCMenuBar::AllowChangeTextLabels](#allowchangetextlabels)|Specifica se le etichette di testo possono essere visualizzate sotto le immagini sui pulsanti della barra degli strumenti. (Esegue l'override [CMFCToolBar::AllowChangeTextLabels](../../mfc/reference/cmfctoolbar-class.md#allowchangetextlabels).)|
|[CMFCMenuBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|Esegue l'override di `CPane::AllowShowOnPaneMenu`.|
|[CMFCMenuBar::CalcFixedLayout](#calcfixedlayout)|Calcola la dimensione orizzontale della barra degli strumenti. (Esegue l'override [CMFCToolBar::CalcFixedLayout](../../mfc/reference/cmfctoolbar-class.md#calcfixedlayout).)|
|[CMFCMenuBar::CalcLayout](#calclayout)|Esegue l'override di `CMFCToolBar::CalcLayout`.|
|[CMFCMenuBar::CalcMaxButtonHeight](#calcmaxbuttonheight)|Calcola l'altezza massima dei pulsanti sulla barra degli strumenti. (Esegue l'override [CMFCToolBar::CalcMaxButtonHeight](../../mfc/reference/cmfctoolbar-class.md#calcmaxbuttonheight).)|
|[CMFCMenuBar::CanBeClosed](#canbeclosed)|Specifica se un utente può chiudere la barra degli strumenti. (Esegue l'override [CMFCToolBar::CanBeClosed](../../mfc/reference/cmfctoolbar-class.md#canbeclosed).)|
|[CMFCMenuBar::CanBeRestored](#canberestored)|Determina se il ripristino del sistema è una barra degli strumenti per lo stato originale dopo la personalizzazione. (Esegue l'override [CMFCToolBar::CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).)|
|[CMFCMenuBar::Create](#create)|Crea un controllo menu e la collega a un `CMFCMenuBar` oggetto.|
|[CMFCMenuBar::CreateEx](#createex)|Crea un `CMFCMenuBar` oggetto con le opzioni di stile aggiuntive.|
|[CMFCMenuBar::CreateFromMenu](#createfrommenu)|Inizializza un `CMFCMenuBar` oggetto. Accetta un parametro HMENU che funge da modello per un popolato `CMFCMenuBar`.|
|[CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox)|Consente a un **aiutare** casella combinata che si trova sul lato destro della barra dei menu.|
|[CMFCMenuBar::EnableMenuShadows](#enablemenushadows)|Specifica se visualizzare shadows nei menu a comparsa.|
|[CMFCMenuBar::GetAvailableExpandSize](#getavailableexpandsize)|(Esegue l'override [CPane::GetAvailableExpandSize](../../mfc/reference/cpane-class.md#getavailableexpandsize).)|
|[CMFCMenuBar::GetColumnWidth](#getcolumnwidth)|Restituisce lo spessore dei pulsanti della barra degli strumenti. (Esegue l'override [CMFCToolBar::GetColumnWidth](../../mfc/reference/cmfctoolbar-class.md#getcolumnwidth).)|
|[CMFCMenuBar::GetDefaultMenu](#getdefaultmenu)|Restituisce un handle al menu originale nel file di risorse.|
|[CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid)|Restituisce l'identificatore di risorsa per il menu originale nel file di risorse.|
|[CMFCMenuBar::GetFloatPopupDirection](#getfloatpopupdirection)||
|[CMFCMenuBar::GetForceDownArrows](#getforcedownarrows)||
|[CMFCMenuBar::GetHelpCombobox](#gethelpcombobox)|Restituisce un puntatore per il **aiutare** casella combinata.|
|[CMFCMenuBar::GetHMenu](#gethmenu)|Restituisce l'handle per il menu di cui è collegato la `CMFCMenuBar` oggetto.|
|[CMFCMenuBar::GetMenuFont](#getmenufont)|Restituisce il tipo di carattere globale corrente per gli oggetti di menu.|
|[CMFCMenuBar::GetMenuItem](#getmenuitem)|Restituisce il pulsante della barra degli strumenti associato l'indice dell'elemento specificato.|
|[CMFCMenuBar::GetRowHeight](#getrowheight)|Restituisce l'altezza dei pulsanti della barra degli strumenti. (Esegue l'override [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|
|[CMFCMenuBar::GetSystemButton](#getsystembutton)||
|[CMFCMenuBar::GetSystemButtonsCount](#getsystembuttonscount)||
|[CMFCMenuBar::GetSystemMenu](#getsystemmenu)||
|[CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems)|Indica se devono essere evidenziate voci di menu disabilitate.|
|[CMFCMenuBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determina se la barra degli strumenti può mostrare pulsanti che hanno esteso i bordi. (Esegue l'override [CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|
|[CMFCMenuBar::IsHighlightDisabledItems](#ishighlightdisableditems)|Indica se devono essere evidenziati elementi disattivati.|
|[CMFCMenuBar::IsMenuShadows](#ismenushadows)|Indica se le ombreggiature vengono disegnate nei menu a comparsa.|
|[CMFCMenuBar::IsRecentlyUsedMenus](#isrecentlyusedmenus)|Indica se i comandi di menu usati di recente vengono visualizzati nella barra dei menu.|
|[CMFCMenuBar::IsShowAllCommands](#isshowallcommands)|Indica se i menu a comparsa visualizzano tutti i comandi.|
|[CMFCMenuBar::IsShowAllCommandsDelay](#isshowallcommandsdelay)|Indica se i menu Visualizza tutti i comandi dopo un breve ritardo.|
|[CMFCMenuBar::LoadState](#loadstate)|Carica lo stato del `CMFCMenuBar` oggetto dal Registro di sistema.|
|[CMFCMenuBar::OnChangeHot](#onchangehot)|Chiamato dal framework quando un utente seleziona un pulsante sulla barra degli strumenti. (Esegue l'override [CMFCToolBar::OnChangeHot](../../mfc/reference/cmfctoolbar-class.md#onchangehot).)|
|[CMFCMenuBar::OnDefaultMenuLoaded](#ondefaultmenuloaded)|Chiamato dal framework quando una finestra cornice viene caricato il menu predefinito dal file di risorse.|
|[CMFCMenuBar::OnSendCommand](#onsendcommand)|Esegue l'override di `CMFCToolBar::OnSendCommand`.|
|[CMFCMenuBar::OnSetDefaultButtonText](#onsetdefaultbuttontext)|Chiamato dal framework quando un menu di scelta è in modalità di personalizzazione e l'utente modifica testo della voce di menu.|
|[CMFCMenuBar::OnToolHitTest](#ontoolhittest)|Esegue l'override di `CMFCToolBar::OnToolHitTest`.|
|[CMFCMenuBar::PreTranslateMessage](#pretranslatemessage)|Esegue l'override di `CMFCToolBar::PreTranslateMessage`.|
|[CMFCMenuBar::RestoreOriginalstate](#restoreoriginalstate)|Chiamato dal framework quando un menu di scelta è in modalità di personalizzazione e l'utente sceglie **reimpostare** per una barra dei menu.|
|[CMFCMenuBar::SaveState](#savestate)|Salva lo stato del `CMFCMenuBar` oggetto nel Registro di sistema.|
|[CMFCMenuBar::SetDefaultMenuResId](#setdefaultmenuresid)|Imposta il menu originale nel file di risorse.|
|[CMFCMenuBar::SetForceDownArrows](#setforcedownarrows)||
|[CMFCMenuBar::SetMaximizeMode](#setmaximizemode)|Chiamato dal framework quando una finestra figlia MDI cambia la modalità di visualizzazione. Se la finestra figlio MDI appena ingrandita o non è ingrandita, questo metodo aggiorna della barra dei menu.|
|[CMFCMenuBar::SetMenuButtonRTC](#setmenubuttonrtc)|Imposta le informazioni sulla classe di runtime che viene generati quando l'utente crea in modo dinamico i pulsanti di menu.|
|[CMFCMenuBar::SetMenuFont](#setmenufont)|Imposta il tipo di carattere per tutti i menu nell'applicazione.|
|[CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus)|Specifica se una barra dei menu Visualizza i comandi di menu usati di recente.|
|[CMFCMenuBar::SetShowAllCommands](#setshowallcommands)|Specifica se la barra dei menu Visualizza tutti i comandi.|

## <a name="remarks"></a>Note

Il `CMFCMenuBar` classe è una barra dei menu che implementa la funzionalità di ancoraggio. È simile a una barra degli strumenti, sebbene venga chiuso, viene sempre visualizzato.

`CMFCMenuBar` supporta l'opzione di visualizzazione di oggetti di elementi usati di recente dal menu. Se questa opzione è abilitata, il `CMFCMenuBar` Visualizza solo un subset di comandi disponibili nella prima visualizzazione. Successivamente, i comandi usati di recente vengono visualizzati insieme il sottoinsieme originale di comandi. Inoltre, l'utente sempre possibile espandere il menu per visualizzare tutti i comandi disponibili. Di conseguenza, ogni comando disponibile è configurato per la visualizzazione costantemente o per visualizzare solo se è stato selezionato di recente.

Usare un `CMFCMenuBar` oggetto, incorporarlo nell'oggetto cornice di finestra principale. Durante l'elaborazione di `WM_CREATE` dei messaggi, chiamare `CMFCMenuBar::Create` o `CMFCMenuBar::CreateEx`. Indipendentemente dal fatto che creano funzione utilizzata, passare un puntatore alla finestra cornice principale. Quindi attivare l'ancoraggio chiamando [cframewndex:: EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Ancorare il menu di scelta chiamando [CFrameWndEx::DockPane](../../mfc/reference/cframewndex-class.md#dockpane).

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCMenuBar` . Nell'esempio viene illustrato come impostare lo stile del riquadro, abilitare il pulsante Personalizza, abilitare una finestra della Guida, abilitare shadows nei menu a comparsa e aggiornare la barra dei menu. Questo frammento di codice fa parte di [esempio dimostrativo di inserimento/espulsione](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_1.h)]
[!code-cpp[NVC_MFC_IEDemo#3](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

`CMFCMenuBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmenubar.h

##  <a name="adjustlocations"></a>  CMFCMenuBar::AdjustLocations

Regola le posizioni delle voci di menu nella barra dei menu.

```
virtual void AdjustLocations();
```

### <a name="remarks"></a>Note

##  <a name="allowchangetextlabels"></a>  CMFCMenuBar::AllowChangeTextLabels

Determina se le etichette di testo sono consentite in immagini nella barra dei menu.

```
virtual BOOL AllowChangeTextLabels() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'utente può scegliere di visualizzare le etichette di testo sotto le immagini.

### <a name="remarks"></a>Note

##  <a name="allowshowonpanemenu"></a>  CMFCMenuBar::AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="calcfixedlayout"></a>  CMFCMenuBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

[in] *bStretch*<br/>

[in] *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="calclayout"></a>  CMFCMenuBar::CalcLayout

```
virtual CSize CalcLayout(
    DWORD dwMode,
    int nLength = -1);
```

### <a name="parameters"></a>Parametri

[in] *dwMode*<br/>

[in] *nLength*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="calcmaxbuttonheight"></a>  CMFCMenuBar::CalcMaxButtonHeight

```
virtual int CalcMaxButtonHeight();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="canbeclosed"></a>  CMFCMenuBar::CanBeClosed

```
virtual BOOL CanBeClosed() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="canberestored"></a>  CMFCMenuBar::CanBeRestored

```
virtual BOOL CanBeRestored() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="create"></a>  CMFCMenuBar::Create

Crea un controllo menu e la collega a un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,
    UINT nID = AFX_IDW_MENUBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
[in] Puntatore alla finestra padre per il nuovo `CMFCMenuBar` oggetto.

*dwStyle*<br/>
[in] Lo stile della barra dei menu nuovo.

*nID*<br/>
[in] L'ID per la finestra figlio della barra dei menu.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Dopo aver creato un `CMFCMenuBar` dell'oggetto, è necessario chiamare `Create`. Questo metodo crea il `CMFCMenuBar` controllo e lo collega al `CMFCMenuBar` oggetto.

Per altre informazioni sugli stili della barra degli strumenti, vedere [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).

##  <a name="createex"></a>  CMFCMenuBar::CreateEx

Crea una [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto con gli stili estesi.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = TBSTYLE_FLAT,
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,
    CRect rcBorders = CRect(1,
    1,
    1,
    1),
    UINT nID =AFX_IDW_MENUBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
[in] Puntatore alla finestra padre del nuovo `CMFCMenuBar` oggetto.

*dwCtrlStyle*<br/>
[in] Stili aggiuntivi per la nuova barra dei menu.

*dwStyle*<br/>
[in] Stile principale della nuova barra dei menu.

*rcBorders*<br/>
[in] Oggetto `CRect` parametro che specifica le dimensioni per i bordi del `CMFCMenuBar` oggetto.

*nID*<br/>
[in] L'ID per la finestra figlio della barra dei menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

È consigliabile usare questa funzione anziché [CMFCMenuBar::Create](#create) quando si desidera specificare gli stili oltre lo stile della barra degli strumenti. Alcuni stili aggiuntivi usati di frequente sono TBSTYLE_TRANSPARENT e CBRS_TOP.

Per un elenco di stili aggiuntivi, vedere [controllo della barra degli strumenti e stili dei pulsanti](/windows/desktop/Controls/toolbar-control-and-button-styles), [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles), e [stili finestra comuni](/windows/desktop/winmsg/window-styles).

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `CreateEx` metodo del `CMFCMenuBar` classe. Questo frammento di codice fa parte di [esempio dimostrativo di inserimento/espulsione](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_1.h)]
[!code-cpp[NVC_MFC_IEDemo#2](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_3.cpp)]

##  <a name="createfrommenu"></a>  CMFCMenuBar::CreateFromMenu

Inizializza una [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto. I modelli di questo metodo il `CMFCMenuBar` oggetto dopo un parametro HMENU.

```
virtual void CreateFromMenu(
    HMENU hMenu,
    BOOL bDefaultMenu = FALSE,
    BOOL bForceUpdate = FALSE);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
[in] Handle per una risorsa di menu. `CreateFromMenu` Usa questa risorsa come modello per il `CMFCMenuBar`.

*bDefaultMenu*<br/>
[in] Valore booleano che indica se il nuovo menu è il menu predefinito.

*bForceUpdate*<br/>
[in] Valore booleano che indica se questo metodo forza un aggiornamento di menu.

### <a name="remarks"></a>Note

Usare questo metodo se si desidera che un controllo menu per avere gli stessi elementi di menu come una risorsa di menu. Il metodo viene chiamato dopo aver chiamato uno [CMFCMenuBar::Create](#create) oppure [CMFCMenuBar::CreateEx](#createex).

##  <a name="enablehelpcombobox"></a>  CMFCMenuBar::EnableHelpCombobox

Consente a un **aiutare** casella combinata che si trova sul lato destro della barra dei menu.

```
void EnableHelpCombobox(
    UINT uiID,
    LPCTSTR lpszPrompt = NULL,
    int nComboBoxWidth = 150);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] L'ID di comando per il pulsante del **aiutare** casella combinata.

*lpszPrompt*<br/>
[in] Stringa che contiene il testo visualizzato dal framework nella casella combinata se è vuota e non è attiva. Ad esempio, "Immettere qui il testo".

*nComboBoxWidth*<br/>
[in] La larghezza del pulsante della casella combinata in pixel.

### <a name="remarks"></a>Note

Il **aiutare** casella combinata è simile al **Guida** casella combinata nella barra dei menu di Microsoft Word.

Quando si chiama questo metodo con *uiID* impostato su 0, questo metodo consente di nascondere la casella combinata. In caso contrario, questo metodo visualizza automaticamente la casella combinata sul lato destro della barra dei menu. Dopo aver chiamato questo metodo, chiamare [CMFCMenuBar::GetHelpCombobox](#gethelpcombobox) per ottenere un puntatore a inserita [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) oggetto.

##  <a name="enablemenushadows"></a>  CMFCMenuBar::EnableMenuShadows

Abilita shadows nei menu a comparsa.

```
static void EnableMenuShadows(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bAttivare il*<br/>
[in] Un parametro booleano che indica se le ombreggiature devono essere abilitate per i menu a comparsa.

### <a name="remarks"></a>Note

L'algoritmo utilizzato da questo metodo è complessa e potrebbe ridurre le prestazioni dell'applicazione nei sistemi più lenti.

##  <a name="getavailableexpandsize"></a>  CMFCMenuBar::GetAvailableExpandSize

```
virtual int GetAvailableExpandSize() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getcolumnwidth"></a>  CMFCMenuBar::GetColumnWidth

```
virtual int GetColumnWidth() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getdefaultmenu"></a>  CMFCMenuBar::GetDefaultMenu

Recupera un handle al menu originale. Il framework di carica menu originale dal file di risorse.

```
HMENU GetDefaultMenu() const;
```

### <a name="return-value"></a>Valore restituito

Handle per una risorsa di menu.

### <a name="remarks"></a>Note

Se l'applicazione consente di personalizzare un menu, è possibile utilizzare questo metodo per recuperare un handle per il menu originale.

##  <a name="getdefaultmenuresid"></a>  CMFCMenuBar::GetDefaultMenuResId

Recupera l'identificatore di risorsa per il menu predefinito.

```
UINT GetDefaultMenuResId() const;
```

### <a name="return-value"></a>Valore restituito

Un identificatore di risorsa di menu.

### <a name="remarks"></a>Note

Il framework di carica il menu di impostazione predefinita il `CMFCMenuBar` oggetto dal file di risorse.

##  <a name="getfloatpopupdirection"></a>  CMFCMenuBar::GetFloatPopupDirection

```
int GetFloatPopupDirection(CMFCToolBarMenuButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pButton*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getforcedownarrows"></a>  CMFCMenuBar::GetForceDownArrows

```
BOOL GetForceDownArrows();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="gethelpcombobox"></a>  CMFCMenuBar::GetHelpCombobox

Restituisce un puntatore per il **aiutare** casella combinata.

```
CMFCToolBarComboBoxButton* GetHelpCombobox();
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il **aiutare** casella combinata. NULL se il **aiutare** casella combinata è nascosto o non è abilitato.

### <a name="remarks"></a>Note

Il **aiutare** casella combinata si trova sul lato destro della barra dei menu. Chiamare il metodo [CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox) per abilitare questa casella combinata.

##  <a name="gethmenu"></a>  CMFCMenuBar::GetHMenu

Recupera l'handle al menu collegato per il [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto.

```
HMENU GetHMenu() const;
```

##  <a name="getmenufont"></a>  CMFCMenuBar::GetMenuFont

Recupera il carattere corrente del menu.

```
static const CFont& GetMenuFont(BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
[in] Un parametro booleano che specifica se restituire il tipo di carattere orizzontale o verticali. TRUE indica che il tipo di carattere orizzontale.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CFont](../../mfc/reference/cfont-class.md) parametro che contiene il carattere di barra dei menu corrente.

### <a name="remarks"></a>Note

Il tipo di carattere restituito è un parametro globale per l'applicazione. Due tipi di carattere globali vengono mantenute per tutte le `CMFCMenuBar` oggetti. Questi tipi di carattere diversi vengono usati per le barre dei menu orizzontali e verticali.

##  <a name="getmenuitem"></a>  CMFCMenuBar::GetMenuItem

Recupera una [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto in una barra dei menu in base l'indice dell'elemento.

```
CMFCToolBarButton* GetMenuItem(int iItem) const;
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] L'indice della voce di menu da restituire.

### <a name="return-value"></a>Valore restituito

Un puntatore per il `CMFCToolBarButton` oggetto che corrisponde all'indice specificato dalla *iItem*. NULL se l'indice non è valido.

##  <a name="getrowheight"></a>  CMFCMenuBar::GetRowHeight

```
virtual int GetRowHeight() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getsystembutton"></a>  CMFCMenuBar::GetSystemButton

```
CMFCToolBarMenuButtonsButton* GetSystemButton(
    UINT uiBtn,
    BOOL bByCommand = TRUE) const;
```

### <a name="parameters"></a>Parametri

[in] *uiBtn*<br/>

[in] *bByCommand*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getsystembuttonscount"></a>  CMFCMenuBar::GetSystemButtonsCount

```
int GetSystemButtonsCount() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getsystemmenu"></a>  CMFCMenuBar::GetSystemMenu

```
CMFCToolBarSystemMenuButton* GetSystemMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="highlightdisableditems"></a>  CMFCMenuBar::HighlightDisabledItems

Controlla se il framework evidenzia voci di menu disabilitate.

```
static void HighlightDisabledItems(BOOL bHighlight = TRUE);
```

### <a name="parameters"></a>Parametri

*bHighlight*<br/>
[in] Un parametro booleano che indica se il framework vengono evidenziate le voci di menu non disponibile.

### <a name="remarks"></a>Note

Per impostazione predefinita, il framework non evidenziare le voci di menu disponibile quando l'utente posiziona il puntatore del mouse su di essi.

##  <a name="isbuttonextrasizeavailable"></a>  CMFCMenuBar::IsButtonExtraSizeAvailable

```
virtual BOOL IsButtonExtraSizeAvailable() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="ishighlightdisableditems"></a>  CMFCMenuBar::IsHighlightDisabledItems

Indica se il framework vengono evidenziate le voci di menu non disponibile.

```
static BOOL IsHighlightDisabledItems();
```

### <a name="return-value"></a>Valore restituito

TRUE se le voci di menu disponibili sono evidenziate; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per impostazione predefinita, il framework non evidenziare le voci di menu disponibile quando l'utente posiziona il puntatore del mouse su di essi. Usare la [CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems) metodo per abilitare questa funzionalità.

##  <a name="ismenushadows"></a>  CMFCMenuBar::IsMenuShadows

Indica se il framework di traccia ombreggiature nei menu a comparsa.

```
static BOOL IsMenuShadows();
```

### <a name="return-value"></a>Valore restituito

TRUE se il framework di traccia ombreggiature menu; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare la [CMFCMenuBar::EnableMenuShadows](#enablemenushadows) metodo per abilitare o disabilitare questa funzionalità.

##  <a name="isrecentlyusedmenus"></a>  CMFCMenuBar::IsRecentlyUsedMenus

Indica se i comandi di menu usati di recente vengono visualizzati nella barra dei menu.

```
static BOOL IsRecentlyUsedMenus();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CMFCMenuBar` oggetto Mostra usato i comandi di menu; in caso contrario 0.

### <a name="remarks"></a>Note

Utilizzare la funzione [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus) per controllare se la barra dei menu Mostra recentemente utilizzati comandi di menu.

##  <a name="isshowallcommands"></a>  CMFCMenuBar::IsShowAllCommands

Indica se i menu Visualizza tutti i comandi.

```
static BOOL IsShowAllCommands();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CMFCMenuBar` Visualizza tutti i comandi; in caso contrario 0.

### <a name="remarks"></a>Note

Oggetto `CMFCMenuBar` oggetto può essere configurato per mostrare tutti i comandi o visualizzare solo un subset di comandi. Per altre informazioni su questa funzionalità, vedere [classe CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md).

`IsShowAllCommands` indicherà il modo in cui questa funzionalità viene configurata per il `CMFCMenuBar` oggetto. Per controllare quali comandi di menu vengono visualizzati, usare i metodi [CMFCMenuBar::SetShowAllCommands](#setshowallcommands) e [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus).

##  <a name="isshowallcommandsdelay"></a>  CMFCMenuBar::IsShowAllCommandsDelay

Indica se il [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto consente di visualizzare tutti i comandi dopo un breve ritardo.

```
static BOOL IsShowAllCommandsDelay();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra dei menu consente di visualizzare menu completi dopo un breve ritardo; in caso contrario 0.

### <a name="remarks"></a>Note

Quando si configura una barra dei menu per elementi visualizzati usati di recente, la barra dei menu Visualizza il menu di completo in uno dei due modi:

- Visualizzare il menu completo dopo un ritardo programmato da quando l'utente posiziona il cursore sopra la freccia nella parte inferiore del menu.

- Visualizzare il menu completo dopo che l'utente fa clic sulla freccia nella parte inferiore del menu.

Per impostazione predefinita, tutti `CMFCMenuBar` gli oggetti utilizzano l'opzione per visualizzare il menu di completo dopo un breve ritardo. Questa opzione non può essere modificata a livello di codice nel `CMFCMenuBar` classe. Tuttavia, un utente può modificare il comportamento durante la personalizzazione della barra degli strumenti usando la **Personalizza** nella finestra di dialogo...

##  <a name="loadstate"></a>  CMFCMenuBar::LoadState

Carica lo stato della barra dei menu nel Registro di sistema di Windows.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Stringa che contiene il percorso di una chiave del Registro di sistema di Windows.

*nIndex*<br/>
[in] ID del controllo barra dei menu.

*uiID*<br/>
[in] Un valore riservato.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare la [CMFCMenuBar::SaveState](#savestate) metodo per salvare lo stato della barra dei menu nel Registro di sistema. Le informazioni salvate includono le voci di menu, lo stato di ancoraggio e la posizione della barra dei menu.

Nella maggior parte dei casi l'applicazione non chiama `LoadState`. Il framework chiama questo metodo quando si inizializza l'area di lavoro.

##  <a name="onchangehot"></a>  CMFCMenuBar::OnChangeHot

```
virtual void OnChangeHot(int iHot);
```

### <a name="parameters"></a>Parametri

[in] *iHot*<br/>

### <a name="remarks"></a>Note

##  <a name="ondefaultmenuloaded"></a>  CMFCMenuBar::OnDefaultMenuLoaded

Il framework chiama questo metodo quando la risorsa di menu viene caricato dal file di risorse.

```
virtual void OnDefaultMenuLoaded(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
[in] L'handle per il menu associato ai `CMFCMenuBar` oggetto.

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire il codice personalizzato dopo che il framework di una risorsa di menu ha caricato dal file di risorse.

##  <a name="onsendcommand"></a>  CMFCMenuBar::OnSendCommand

```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pButton*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onsetdefaultbuttontext"></a>  CMFCMenuBar::OnSetDefaultButtonText

Il framework chiama questo metodo quando l'utente modifica il testo di un elemento nella barra dei menu.

```
virtual BOOL OnSetDefaultButtonText(CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

*pButton*<br/>
[in] Un puntatore per il [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto che si desidera personalizzare.

### <a name="return-value"></a>Valore restituito

TRUE se il framework applica le modifiche utente alla barra dei menu; in caso contrario, FALSE.

### <a name="remarks"></a>Note

L'implementazione predefinita per questo metodo modifica il testo del pulsante per il testo fornito dall'utente.

##  <a name="ontoolhittest"></a>  CMFCMenuBar::OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### <a name="parameters"></a>Parametri

[in] *point*<br/>

[in] *pTI*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="pretranslatemessage"></a>  CMFCMenuBar::PreTranslateMessage

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

[in] *pMsg*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="restoreoriginalstate"></a>  CMFCMenuBar::RestoreOriginalstate

Chiamato dal framework quando l'utente seleziona **reimpostare** dalle **Personalizza** nella finestra di dialogo.

```
virtual BOOL RestoreOriginalstate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo viene chiamato quando l'utente sceglie **reimpostare** dal menu di personalizzazione. È possibile chiamare manualmente questo metodo per reimpostare a livello di codice lo stato della barra dei menu. Questo metodo carica lo stato originale dal file di risorse.

Eseguire l'override di questo metodo se si desidera eseguire qualsiasi elaborazione quando l'utente seleziona il **reimpostare** opzione.

##  <a name="savestate"></a>  CMFCMenuBar::SaveState

Salva lo stato del [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto nel Registro di sistema di Windows.

```
virtual BOOL SaveState (
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Stringa che contiene il percorso di una chiave del Registro di sistema di Windows.

*nIndex*<br/>
[in] ID del controllo barra dei menu.

*uiID*<br/>
[in] Un valore riservato.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

In genere, l'applicazione non chiama `SaveState`. Il framework chiama questo metodo quando l'area di lavoro viene serializzato. Per altre informazioni, vedere [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).

Le informazioni salvate includono le voci di menu, lo stato di ancoraggio e la posizione della barra dei menu.

##  <a name="setdefaultmenuresid"></a>  CMFCMenuBar::SetDefaultMenuResId

Imposta il menu di impostazione predefinita per un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto in base l'ID risorsa.

```
void SetDefaultMenuResId(UINT uiResId);
```

### <a name="parameters"></a>Parametri

*uiResId*<br/>
[in] L'ID di risorsa per il nuovo menu predefinito.

### <a name="remarks"></a>Note

Il [CMFCMenuBar::RestoreOriginalstate](#restoreoriginalstate) metodo ripristina il menu predefinito dal file di risorse.

Usare la [CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid) metodo per recuperare il menu predefinito senza ripristinarlo.

##  <a name="setforcedownarrows"></a>  CMFCMenuBar::SetForceDownArrows

```
void SetForceDownArrows(BOOL bValue);
```

### <a name="parameters"></a>Parametri

[in] *bValue*<br/>

### <a name="remarks"></a>Note

##  <a name="setmaximizemode"></a>  CMFCMenuBar::SetMaximizeMode

Il framework chiama questo metodo quando una MDI cambia la modalità di visualizzazione e la barra dei menu deve essere aggiornato.

```
void SetMaximizeMode(
    BOOL bMax,
    CWnd* pWnd = NULL,
    BOOL bRecalcLayout = TRUE);
```

### <a name="parameters"></a>Parametri

*bMax*<br/>
[in] Valore booleano che specifica la modalità. Per altre informazioni, vedere la sezione Osservazioni.

*pWnd*<br/>
[in] Puntatore alla finestra figlio MDI in fase di modifica.

*bRecalcLayout*<br/>
[in] Valore booleano che specifica se il layout della barra dei menu deve essere ricalcolato immediatamente.

### <a name="remarks"></a>Note

Quando una finestra figlia MDI è ingrandita, una barra dei menu collegato alla finestra cornice principale MDI consente di visualizzare il menu di sistema e il **Riduci a icona**, **Ingrandisci** e **Chiudi** pulsanti. Se *bMax* è impostata su TRUE e *pWnd* non è NULL, la finestra figlio MDI viene ingrandita e la barra dei menu deve includere i controlli aggiuntivi. In caso contrario, la barra dei menu torna allo stato normale.

##  <a name="setmenubuttonrtc"></a>  CMFCMenuBar::SetMenuButtonRTC

Imposta le informazioni sulla classe di runtime utilizzato dal framework quando l'utente crea pulsanti di menu.

```
void SetMenuButtonRTC(CRuntimeClass* pMenuButtonRTC);
```

### <a name="parameters"></a>Parametri

*pMenuButtonRTC*<br/>
[in] Il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) informazioni per una classe derivano dalle [CMFCMenuButton (classe)](../../mfc/reference/cmfcmenubutton-class.md).

### <a name="remarks"></a>Note

Quando un utente aggiunge nuovi pulsanti alla barra dei menu, il framework crea in modo dinamico i pulsanti. Per impostazione predefinita, crea `CMFCMenuButton` oggetti. Eseguire l'override di questo metodo per modificare il tipo di pulsante oggetti creati dal framework.

##  <a name="setmenufont"></a>  CMFCMenuBar::SetMenuFont

Imposta il tipo di carattere per tutte le barre dei menu nell'applicazione.

```
static BOOL SetMenuFont(
    LPLOGFONT lpLogFont,
    BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*lpLogFont*<br/>
[in] Un puntatore a un [LOGFONT](/windows/desktop/api/dimm/ns-dimm-__midl___midl_itf_dimm_0000_0000_0003) struttura che definisca il tipo di carattere da impostare.

*bHorz*<br/>
[in] TRUE se si desidera che il *lpLogFont* parametro da utilizzare per il tipo di carattere verticale, FALSE se si desidera che può essere usato per tipo di carattere orizzontale.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Vengono utilizzati due tipi di carattere per tutti i `CMFCMenuBar` oggetti. Questi tipi di carattere diversi vengono usati per le barre dei menu orizzontali e verticali.

Le impostazioni del tipo di carattere sono variabili globali e riguardano tutte `CMFCMenuBar` oggetti.

##  <a name="setrecentlyusedmenus"></a>  CMFCMenuBar::SetRecentlyUsedMenus

Controlla se una barra dei menu viene visualizzato recentemente utilizzati comandi di menu.

```
static void SetRecentlyUsedMenus (BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*bOn*<br/>
[in] Valore booleano che determina se vengono visualizzati i comandi di menu usati di recente.

##  <a name="setshowallcommands"></a>  CMFCMenuBar::SetShowAllCommands

Controlla se un menu Visualizza tutti i comandi disponibili.

```
static void SetShowAllCommands(BOOL bShowAllCommands = TRUE);
```

### <a name="parameters"></a>Parametri

*bShowAllCommands*<br/>
[in] Un parametro booleano che specifica se il menu di scelta rapida vengono visualizzati tutti i comandi di menu.

### <a name="remarks"></a>Note

Se tutti i comandi di menu non è visualizzato un menu di scelta, nasconde i comandi che vengono utilizzati raramente. Per altre informazioni sulla visualizzazione dei comandi di menu, vedere [classe CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
