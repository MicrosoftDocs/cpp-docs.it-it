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
ms.openlocfilehash: 278feca6b64915d0cf789e8f68af3c3fdf9b3129
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78869937"
---
# <a name="cmfcmenubar-class"></a>Classe CMFCMenuBar

Barra dei menu che implementa l'ancoraggio.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCMenuBar : public CMFCToolbar
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuBar:: AdjustLocations](#adjustlocations)|(Esegue l'override di `CMFCToolBar::AdjustLocations`.)|
|[CMFCMenuBar:: AllowChangeTextLabels](#allowchangetextlabels)|Specifica se le etichette di testo possono essere visualizzate sotto le immagini sui pulsanti della barra degli strumenti. Esegue l'override di [CMFCToolBar:: AllowChangeTextLabels](../../mfc/reference/cmfctoolbar-class.md#allowchangetextlabels).|
|[CMFCMenuBar:: AllowShowOnPaneMenu](#allowshowonpanemenu)|(Esegue l'override di `CPane::AllowShowOnPaneMenu`.)|
|[CMFCMenuBar:: CalcFixedLayout](#calcfixedlayout)|Calcola la dimensione orizzontale della barra degli strumenti. Esegue l'override di [CMFCToolBar:: CalcFixedLayout](../../mfc/reference/cmfctoolbar-class.md#calcfixedlayout).|
|[CMFCMenuBar:: CalcLayout](#calclayout)|(Esegue l'override di `CMFCToolBar::CalcLayout`.)|
|[CMFCMenuBar:: CalcMaxButtonHeight](#calcmaxbuttonheight)|Calcola l'altezza massima dei pulsanti nella barra degli strumenti. Esegue l'override di [CMFCToolBar:: CalcMaxButtonHeight](../../mfc/reference/cmfctoolbar-class.md#calcmaxbuttonheight).|
|[CMFCMenuBar:: CanBeClosed](#canbeclosed)|Specifica se un utente può chiudere la barra degli strumenti. Esegue l'override di [CMFCToolBar:: CanBeClosed](../../mfc/reference/cmfctoolbar-class.md#canbeclosed).|
|[CMFCMenuBar:: CanBeRestored](#canberestored)|Determina se il sistema è in grado di ripristinare lo stato originale di una barra degli strumenti dopo la personalizzazione. Esegue l'override di [CMFCToolBar:: CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).|
|[CMFCMenuBar:: create](#create)|Crea un controllo menu e lo collega a un oggetto `CMFCMenuBar`.|
|[CMFCMenuBar:: CreateEx](#createex)|Crea un oggetto `CMFCMenuBar` con opzioni di stile aggiuntive.|
|[CMFCMenuBar:: CreateFromMenu](#createfrommenu)|Inizializza un oggetto `CMFCMenuBar`. Accetta un parametro HMENU che funge da modello per un `CMFCMenuBar`popolato.|
|[CMFCMenuBar:: EnableHelpCombobox](#enablehelpcombobox)|Abilita una casella combinata della **Guida** che si trova sul lato destro della barra dei menu.|
|[CMFCMenuBar:: EnableMenuShadows](#enablemenushadows)|Specifica se visualizzare le ombreggiature per i menu a comparsa.|
|[CMFCMenuBar:: GetAvailableExpandSize](#getavailableexpandsize)|Esegue l'override di [CPane:: GetAvailableExpandSize](../../mfc/reference/cpane-class.md#getavailableexpandsize).|
|[CMFCMenuBar:: GetColumnWidth](#getcolumnwidth)|Restituisce la larghezza dei pulsanti della barra degli strumenti. Esegue l'override di [CMFCToolBar:: GetColumnWidth](../../mfc/reference/cmfctoolbar-class.md#getcolumnwidth).|
|[CMFCMenuBar:: GetDefaultMenu](#getdefaultmenu)|Restituisce un handle per il menu originale nel file di risorse.|
|[CMFCMenuBar:: GetDefaultMenuResId](#getdefaultmenuresid)|Restituisce l'identificatore di risorsa per il menu originale nel file di risorse.|
|[CMFCMenuBar:: GetFloatPopupDirection](#getfloatpopupdirection)||
|[CMFCMenuBar:: GetForceDownArrows](#getforcedownarrows)||
|[CMFCMenuBar:: GetHelpCombobox](#gethelpcombobox)|Restituisce un puntatore alla casella combinata della **Guida** .|
|[CMFCMenuBar:: GetHMenu](#gethmenu)|Restituisce l'handle al menu associato all'oggetto `CMFCMenuBar`.|
|[CMFCMenuBar:: GetMenuFont](#getmenufont)|Restituisce il tipo di carattere globale corrente per gli oggetti di menu.|
|[CMFCMenuBar:: getmenuitem](#getmenuitem)|Restituisce il pulsante della barra degli strumenti associato all'indice dell'elemento specificato.|
|[CMFCMenuBar:: GetRowHeight](#getrowheight)|Restituisce l'altezza dei pulsanti della barra degli strumenti. Esegue l'override di [CMFCToolBar:: getRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).|
|[CMFCMenuBar:: GetSystemButton](#getsystembutton)||
|[CMFCMenuBar:: GetSystemButtonsCount](#getsystembuttonscount)||
|[CMFCMenuBar:: GetSystemMenu](#getsystemmenu)||
|[CMFCMenuBar:: HighlightDisabledItems](#highlightdisableditems)|Indica se le voci di menu disabilitate sono evidenziate.|
|[CMFCMenuBar:: IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determina se la barra degli strumenti può visualizzare i pulsanti con bordi estesi. Esegue l'override di [CMFCToolBar:: IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).|
|[CMFCMenuBar:: IsHighlightDisabledItems](#ishighlightdisableditems)|Indica se gli elementi disabilitati sono evidenziati.|
|[CMFCMenuBar:: IsMenuShadows](#ismenushadows)|Indica se le ombreggiature vengono disegnate per i menu a comparsa.|
|[CMFCMenuBar:: IsRecentlyUsedMenus](#isrecentlyusedmenus)|Indica se i comandi di menu utilizzati di recente vengono visualizzati nella barra dei menu.|
|[CMFCMenuBar:: IsShowAllCommands](#isshowallcommands)|Indica se i menu a comparsa visualizzano tutti i comandi.|
|[CMFCMenuBar:: IsShowAllCommandsDelay](#isshowallcommandsdelay)|Indica se i menu visualizzano tutti i comandi dopo un breve ritardo.|
|[CMFCMenuBar:: LoadState](#loadstate)|Carica lo stato dell'oggetto `CMFCMenuBar` dal registro di sistema.|
|[CMFCMenuBar:: OnChangeHot](#onchangehot)|Chiamata eseguita dal framework quando un utente seleziona un pulsante sulla barra degli strumenti. Esegue l'override di [CMFCToolBar:: OnChangeHot](../../mfc/reference/cmfctoolbar-class.md#onchangehot).|
|[CMFCMenuBar:: OnDefaultMenuLoaded](#ondefaultmenuloaded)|Chiamata eseguita dal framework quando una finestra cornice carica il menu predefinito dal file di risorse.|
|[CMFCMenuBar:: OnSendCommand](#onsendcommand)|(Esegue l'override di `CMFCToolBar::OnSendCommand`.)|
|[CMFCMenuBar:: OnSetDefaultButtonText](#onsetdefaultbuttontext)|Chiamata eseguita dal framework quando un menu è in modalità di personalizzazione e l'utente modifica il testo di una voce di menu.|
|[CMFCMenuBar:: OnToolHitTest](#ontoolhittest)|(Esegue l'override di `CMFCToolBar::OnToolHitTest`.)|
|[CMFCMenuBar::P reTranslateMessage](#pretranslatemessage)|(Esegue l'override di `CMFCToolBar::PreTranslateMessage`.)|
|[CMFCMenuBar:: RestoreOriginalstate](#restoreoriginalstate)|Chiamata eseguita dal framework quando un menu è in modalità di personalizzazione e l'utente seleziona **Reimposta** per una barra dei menu.|
|[CMFCMenuBar:: SaveState](#savestate)|Salva lo stato dell'oggetto `CMFCMenuBar` nel registro di sistema.|
|[CMFCMenuBar:: SetDefaultMenuResId](#setdefaultmenuresid)|Imposta il menu originale nel file di risorse.|
|[CMFCMenuBar:: SetForceDownArrows](#setforcedownarrows)||
|[CMFCMenuBar:: SetMaximizeMode](#setmaximizemode)|Chiamata eseguita dal framework quando una finestra figlio MDI modifica la modalità di visualizzazione. Se la finestra figlio MDI è appena ingrandita o non è più ingrandita, questo metodo aggiorna la barra dei menu.|
|[CMFCMenuBar:: SetMenuButtonRTC](#setmenubuttonrtc)|Imposta le informazioni sulla classe di runtime generate quando l'utente crea dinamicamente i pulsanti di menu.|
|[CMFCMenuBar:: SetMenuFont](#setmenufont)|Imposta il tipo di carattere per tutti i menu nell'applicazione.|
|[CMFCMenuBar:: SetRecentlyUsedMenus](#setrecentlyusedmenus)|Specifica se una barra dei menu Visualizza i comandi di menu usati di recente.|
|[CMFCMenuBar:: SetShowAllCommands](#setshowallcommands)|Specifica se la barra dei menu Mostra tutti i comandi.|

## <a name="remarks"></a>Osservazioni

La classe `CMFCMenuBar` è una barra dei menu che implementa la funzionalità di ancoraggio. È simile a una barra degli strumenti, sebbene non possa essere chiusa, ma è sempre visualizzata.

`CMFCMenuBar` supporta l'opzione di visualizzazione degli oggetti delle voci di menu usati di recente. Se questa opzione è abilitata, la `CMFCMenuBar` Visualizza solo un subset dei comandi disponibili nella prima visualizzazione. Successivamente, i comandi utilizzati di recente vengono visualizzati insieme al subset originale di comandi. Inoltre, l'utente può sempre espandere il menu per visualizzare tutti i comandi disponibili. Pertanto, ogni comando disponibile viene configurato per la visualizzazione continua o per essere visualizzato solo se è stato selezionato di recente.

Per usare un oggetto `CMFCMenuBar`, incorporarlo nell'oggetto cornice della finestra principale. Quando si elabora il messaggio di `WM_CREATE`, chiamare `CMFCMenuBar::Create` o `CMFCMenuBar::CreateEx`. Indipendentemente dalla funzione create usata, passare un puntatore alla finestra cornice principale. Abilitare quindi l'ancoraggio chiamando [CFrameWndEx:: EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Ancorare questo menu chiamando [CFrameWndEx::D ockpane](../../mfc/reference/cframewndex-class.md#dockpane).

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCMenuBar` . Nell'esempio viene illustrato come impostare lo stile del riquadro, abilitare il pulsante Personalizza, abilitare una casella della guida, abilitare le ombreggiature per i menu a comparsa e aggiornare la barra dei menu. Questo frammento di codice fa parte dell' [esempio demo IE](../../overview/visual-cpp-samples.md).

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

**Intestazione:** afxmenubar. h

##  <a name="adjustlocations"></a>CMFCMenuBar:: AdjustLocations

Regola le posizioni delle voci di menu sulla barra dei menu.

```
virtual void AdjustLocations();
```

### <a name="remarks"></a>Osservazioni

##  <a name="allowchangetextlabels"></a>CMFCMenuBar:: AllowChangeTextLabels

Determina se le etichette di testo sono consentite nelle immagini nella barra dei menu.

```
virtual BOOL AllowChangeTextLabels() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'utente può scegliere di visualizzare le etichette di testo in immagini.

### <a name="remarks"></a>Osservazioni

##  <a name="allowshowonpanemenu"></a>CMFCMenuBar:: AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="calcfixedlayout"></a>CMFCMenuBar:: CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

in *bStretch*<br/>

in *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="calclayout"></a>CMFCMenuBar:: CalcLayout

```
virtual CSize CalcLayout(
    DWORD dwMode,
    int nLength = -1);
```

### <a name="parameters"></a>Parametri

in *dwMode*<br/>

in *nLength*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="calcmaxbuttonheight"></a>CMFCMenuBar:: CalcMaxButtonHeight

```
virtual int CalcMaxButtonHeight();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="canbeclosed"></a>CMFCMenuBar:: CanBeClosed

```
virtual BOOL CanBeClosed() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="canberestored"></a>CMFCMenuBar:: CanBeRestored

```
virtual BOOL CanBeRestored() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="create"></a>CMFCMenuBar:: create

Crea un controllo menu e lo collega a un oggetto [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) .

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,
    UINT nID = AFX_IDW_MENUBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
in Puntatore alla finestra padre del nuovo oggetto `CMFCMenuBar`.

*dwStyle*<br/>
in Stile della nuova barra dei menu.

*nID*<br/>
in ID della finestra figlio della barra dei menu.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Dopo la costruzione di un oggetto `CMFCMenuBar`, è necessario chiamare `Create`. Questo metodo crea il controllo `CMFCMenuBar` e lo connette all'oggetto `CMFCMenuBar`.

Per ulteriori informazioni sugli stili della barra degli strumenti, vedere [CBasePane:: SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).

##  <a name="createex"></a>CMFCMenuBar:: CreateEx

Crea un oggetto [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) con gli stili estesi specificati.

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
in Puntatore alla finestra padre del nuovo oggetto `CMFCMenuBar`.

*dwCtrlStyle*<br/>
in Stili aggiuntivi per la nuova barra dei menu.

*dwStyle*<br/>
in Stile principale della nuova barra dei menu.

*rcBorders*<br/>
in Parametro `CRect` che specifica le dimensioni per i bordi dell'oggetto `CMFCMenuBar`.

*nID*<br/>
in ID della finestra figlio della barra dei menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Usare questa funzione invece di [CMFCMenuBar:: create](#create) quando si desidera specificare gli stili oltre allo stile della barra degli strumenti. Alcuni stili aggiuntivi usati di frequente sono TBSTYLE_TRANSPARENT e CBRS_TOP.

Per gli elenchi di stili aggiuntivi, vedere gli stili del [controllo e del pulsante della barra degli strumenti](/windows/win32/Controls/toolbar-control-and-button-styles), gli stili dei [controlli comuni](/windows/win32/Controls/common-control-styles)e gli [stili comuni della finestra](/windows/win32/winmsg/window-styles).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il metodo `CreateEx` della classe `CMFCMenuBar`. Questo frammento di codice fa parte dell' [esempio demo IE](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_1.h)]
[!code-cpp[NVC_MFC_IEDemo#2](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_3.cpp)]

##  <a name="createfrommenu"></a>CMFCMenuBar:: CreateFromMenu

Inizializza un oggetto [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) . Questo metodo modella l'oggetto `CMFCMenuBar` dopo un parametro HMENU.

```
virtual void CreateFromMenu(
    HMENU hMenu,
    BOOL bDefaultMenu = FALSE,
    BOOL bForceUpdate = FALSE);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
in Handle per una risorsa di menu. `CreateFromMenu` usa questa risorsa come modello per il `CMFCMenuBar`.

*bDefaultMenu*<br/>
in Valore booleano che indica se il menu nuovo è il menu predefinito.

*bForceUpdate*<br/>
in Valore booleano che indica se questo metodo forza un aggiornamento di menu.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo se si desidera che un controllo Menu includa le stesse voci di menu di una risorsa di menu. Questo metodo viene chiamato dopo la chiamata di [CMFCMenuBar:: create](#create) o [CMFCMenuBar:: CreateEx](#createex).

##  <a name="enablehelpcombobox"></a>CMFCMenuBar:: EnableHelpCombobox

Abilita una casella combinata della **Guida** che si trova sul lato destro della barra dei menu.

```
void EnableHelpCombobox(
    UINT uiID,
    LPCTSTR lpszPrompt = NULL,
    int nComboBoxWidth = 150);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in ID del comando per il pulsante della casella combinata della **Guida** .

*lpszPrompt*<br/>
in Stringa che contiene il testo visualizzato dal Framework nella casella combinata se è vuota e non è attiva. Ad esempio, "Immettere qui il testo".

*nComboBoxWidth*<br/>
in Larghezza del pulsante per la casella combinata in pixel.

### <a name="remarks"></a>Osservazioni

La casella combinata **Guida** è simile alla casella combinata della **Guida** nella barra dei menu di Microsoft Word.

Quando si chiama questo metodo con *uiID* impostato su 0, questo metodo nasconde la casella combinata. In caso contrario, questo metodo Visualizza la casella combinata automaticamente sul lato destro della barra dei menu. Dopo aver chiamato questo metodo, chiamare [CMFCMenuBar:: GetHelpCombobox](#gethelpcombobox) per ottenere un puntatore all'oggetto [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) inserito.

##  <a name="enablemenushadows"></a>CMFCMenuBar:: EnableMenuShadows

Abilita le ombreggiature per i menu a comparsa.

```
static void EnableMenuShadows(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Parametro booleano che indica se è necessario abilitare le ombreggiature per i menu a comparsa.

### <a name="remarks"></a>Osservazioni

L'algoritmo utilizzato da questo metodo è complesso e può ridurre le prestazioni dell'applicazione in sistemi più lenti.

##  <a name="getavailableexpandsize"></a>CMFCMenuBar:: GetAvailableExpandSize

```
virtual int GetAvailableExpandSize() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="getcolumnwidth"></a>CMFCMenuBar:: GetColumnWidth

```
virtual int GetColumnWidth() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="getdefaultmenu"></a>CMFCMenuBar:: GetDefaultMenu

Recupera un handle per il menu originale. Il Framework carica il menu originale dal file di risorse.

```
HMENU GetDefaultMenu() const;
```

### <a name="return-value"></a>Valore restituito

Handle per una risorsa di menu.

### <a name="remarks"></a>Osservazioni

Se l'applicazione Personalizza un menu, è possibile usare questo metodo per recuperare un handle per il menu originale.

##  <a name="getdefaultmenuresid"></a>CMFCMenuBar:: GetDefaultMenuResId

Recupera l'identificatore di risorsa per il menu predefinito.

```
UINT GetDefaultMenuResId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di risorsa di menu.

### <a name="remarks"></a>Osservazioni

Il Framework carica il menu predefinito per l'oggetto `CMFCMenuBar` dal file di risorse.

##  <a name="getfloatpopupdirection"></a>CMFCMenuBar:: GetFloatPopupDirection

```
int GetFloatPopupDirection(CMFCToolBarMenuButton* pButton);
```

### <a name="parameters"></a>Parametri

in *p*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="getforcedownarrows"></a>CMFCMenuBar:: GetForceDownArrows

```
BOOL GetForceDownArrows();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="gethelpcombobox"></a>CMFCMenuBar:: GetHelpCombobox

Restituisce un puntatore alla casella combinata della **Guida** .

```
CMFCToolBarComboBoxButton* GetHelpCombobox();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla casella combinata della **Guida** . NULL se la casella combinata della **Guida** è nascosta o non è abilitata.

### <a name="remarks"></a>Osservazioni

La casella combinata della **Guida** si trova sul lato destro della barra dei menu. Chiamare il metodo [CMFCMenuBar:: EnableHelpCombobox](#enablehelpcombobox) per abilitare questa casella combinata.

##  <a name="gethmenu"></a>CMFCMenuBar:: GetHMenu

Recupera l'handle per il menu associato all'oggetto [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) .

```
HMENU GetHMenu() const;
```

##  <a name="getmenufont"></a>CMFCMenuBar:: GetMenuFont

Recupera il tipo di carattere del menu corrente.

```
static const CFont& GetMenuFont(BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
in Parametro booleano che specifica se restituire il tipo di carattere orizzontale o verticale. TRUE indica il tipo di carattere orizzontale.

### <a name="return-value"></a>Valore restituito

Puntatore a un parametro [CFont](../../mfc/reference/cfont-class.md) che contiene il tipo di carattere della barra dei menu corrente.

### <a name="remarks"></a>Osservazioni

Il tipo di carattere restituito è un parametro globale per l'applicazione. Per tutti gli oggetti `CMFCMenuBar` vengono mantenuti due tipi di carattere globali. Questi tipi di carattere separati vengono usati per le barre dei menu orizzontali e verticali.

##  <a name="getmenuitem"></a>CMFCMenuBar:: getmenuitem

Recupera un oggetto [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) su una barra dei menu in base all'indice dell'elemento.

```
CMFCToolBarButton* GetMenuItem(int iItem) const;
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
in Indice della voce di menu da restituire.

### <a name="return-value"></a>Valore restituito

Puntatore al `CMFCToolBarButton` oggetto che corrisponde all'indice specificato da *iItem*. NULL se l'indice non è valido.

##  <a name="getrowheight"></a>CMFCMenuBar:: GetRowHeight

```
virtual int GetRowHeight() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="getsystembutton"></a>CMFCMenuBar:: GetSystemButton

```
CMFCToolBarMenuButtonsButton* GetSystemButton(
    UINT uiBtn,
    BOOL bByCommand = TRUE) const;
```

### <a name="parameters"></a>Parametri

in *uiBtn*<br/>

in *bByCommand*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="getsystembuttonscount"></a>CMFCMenuBar:: GetSystemButtonsCount

```
int GetSystemButtonsCount() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="getsystemmenu"></a>CMFCMenuBar:: GetSystemMenu

```
CMFCToolBarSystemMenuButton* GetSystemMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="highlightdisableditems"></a>CMFCMenuBar:: HighlightDisabledItems

Controlla se il Framework evidenzia le voci di menu disabilitate.

```
static void HighlightDisabledItems(BOOL bHighlight = TRUE);
```

### <a name="parameters"></a>Parametri

*bHighlight*<br/>
in Parametro booleano che indica se il Framework evidenzia le voci di menu non disponibili.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il Framework non evidenzia le voci di menu non disponibili quando l'utente posiziona il puntatore del mouse su di essi.

##  <a name="isbuttonextrasizeavailable"></a>CMFCMenuBar:: IsButtonExtraSizeAvailable

```
virtual BOOL IsButtonExtraSizeAvailable() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="ishighlightdisableditems"></a>CMFCMenuBar:: IsHighlightDisabledItems

Indica se il Framework evidenzia le voci di menu non disponibili.

```
static BOOL IsHighlightDisabledItems();
```

### <a name="return-value"></a>Valore restituito

TRUE se le voci di menu non disponibili sono evidenziate; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il Framework non evidenzia le voci di menu non disponibili quando l'utente posiziona il puntatore del mouse su di essi. Usare il metodo [CMFCMenuBar:: HighlightDisabledItems](#highlightdisableditems) per abilitare questa funzionalità.

##  <a name="ismenushadows"></a>CMFCMenuBar:: IsMenuShadows

Indica se il framework disegna ombreggiature per i menu popup.

```
static BOOL IsMenuShadows();
```

### <a name="return-value"></a>Valore restituito

TRUE se il framework disegna le ombreggiature dei menu; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare il metodo [CMFCMenuBar:: EnableMenuShadows](#enablemenushadows) per abilitare o disabilitare questa funzionalità.

##  <a name="isrecentlyusedmenus"></a>CMFCMenuBar:: IsRecentlyUsedMenus

Indica se i comandi di menu utilizzati di recente vengono visualizzati nella barra dei menu.

```
static BOOL IsRecentlyUsedMenus();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto `CMFCMenuBar` Mostra i comandi di menu usati di recente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Usare la funzione [CMFCMenuBar:: SetRecentlyUsedMenus](#setrecentlyusedmenus) per controllare se la barra dei menu Mostra i comandi di menu usati di recente.

##  <a name="isshowallcommands"></a>CMFCMenuBar:: IsShowAllCommands

Indica se i menu visualizzano tutti i comandi.

```
static BOOL IsShowAllCommands();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CMFCMenuBar` Visualizza tutti i comandi; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un oggetto `CMFCMenuBar` può essere configurato in modo da visualizzare tutti i comandi o visualizzare solo un subset di comandi. Per ulteriori informazioni su questa funzionalità, vedere [classe CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md).

`IsShowAllCommands` indica il modo in cui questa funzionalità viene configurata per l'oggetto `CMFCMenuBar`. Per controllare i comandi di menu visualizzati, usare i metodi [CMFCMenuBar:: SetShowAllCommands](#setshowallcommands) e [CMFCMenuBar:: SetRecentlyUsedMenus](#setrecentlyusedmenus).

##  <a name="isshowallcommandsdelay"></a>CMFCMenuBar:: IsShowAllCommandsDelay

Indica se l'oggetto [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) Visualizza tutti i comandi dopo un breve ritardo.

```
static BOOL IsShowAllCommandsDelay();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra dei menu Visualizza i menu completi dopo un breve ritardo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Quando si configura una barra dei menu per visualizzare gli elementi utilizzati di recente, la barra dei menu Visualizza il menu completo in uno dei due modi seguenti:

- Visualizza il menu completo dopo un ritardo programmato da quando l'utente posiziona il cursore sulla freccia nella parte inferiore del menu.

- Visualizzare il menu completo dopo che l'utente fa clic sulla freccia nella parte inferiore del menu.

Per impostazione predefinita, tutti gli oggetti `CMFCMenuBar` usano l'opzione per visualizzare il menu completo dopo un breve ritardo. Questa opzione non può essere modificata a livello di codice nella classe `CMFCMenuBar`. Tuttavia, un utente può modificare il comportamento durante la personalizzazione della barra degli strumenti utilizzando la finestra di dialogo **Personalizza** .

##  <a name="loadstate"></a>CMFCMenuBar:: LoadState

Carica lo stato della barra dei menu dal registro di sistema di Windows.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Stringa che contiene il percorso di una chiave del registro di sistema di Windows.

*nIndex*<br/>
in ID del controllo per la barra dei menu.

*uiID*<br/>
in Valore riservato.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare il metodo [CMFCMenuBar:: SaveState](#savestate) per salvare lo stato della barra dei menu nel registro di sistema. Le informazioni salvate includono le voci di menu, lo stato di ancoraggio e la posizione della barra dei menu.

Nella maggior parte dei casi l'applicazione non chiama `LoadState`. Il Framework chiama questo metodo quando inizializza l'area di lavoro.

##  <a name="onchangehot"></a>CMFCMenuBar:: OnChangeHot

```
virtual void OnChangeHot(int iHot);
```

### <a name="parameters"></a>Parametri

in *iHot*<br/>

### <a name="remarks"></a>Osservazioni

##  <a name="ondefaultmenuloaded"></a>CMFCMenuBar:: OnDefaultMenuLoaded

Il Framework chiama questo metodo quando carica la risorsa di menu dal file di risorse.

```
virtual void OnDefaultMenuLoaded(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
in Handle per il menu associato all'oggetto `CMFCMenuBar`.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire codice personalizzato dopo che il Framework ha caricato una risorsa di menu dal file di risorse.

##  <a name="onsendcommand"></a>CMFCMenuBar:: OnSendCommand

```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

in *p*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="onsetdefaultbuttontext"></a>CMFCMenuBar:: OnSetDefaultButtonText

Il Framework chiama questo metodo quando l'utente modifica il testo di un elemento sulla barra dei menu.

```
virtual BOOL OnSetDefaultButtonText(CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore all'oggetto [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) che l'utente desidera personalizzare.

### <a name="return-value"></a>Valore restituito

TRUE se il framework applica le modifiche dell'utente alla barra dei menu; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita per questo metodo modifica il testo del pulsante nel testo fornito dall'utente.

##  <a name="ontoolhittest"></a>CMFCMenuBar:: OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### <a name="parameters"></a>Parametri

in *punto* di<br/>

in *PTI*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="pretranslatemessage"></a>CMFCMenuBar::P reTranslateMessage

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

[in] *pMsg*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

##  <a name="restoreoriginalstate"></a>CMFCMenuBar:: RestoreOriginalstate

Chiamata eseguita dal framework quando l'utente seleziona **Reimposta** dalla finestra di dialogo **Personalizza** .

```
virtual BOOL RestoreOriginalstate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato quando l'utente seleziona **Reimposta** dal menu di personalizzazione. È anche possibile chiamare manualmente questo metodo per reimpostare a livello di codice lo stato della barra dei menu. Questo metodo carica lo stato originale dal file di risorse.

Eseguire l'override di questo metodo se si desidera eseguire un'elaborazione quando l'utente seleziona l'opzione di **reimpostazione** .

##  <a name="savestate"></a>CMFCMenuBar:: SaveState

Salva lo stato dell'oggetto [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) nel registro di sistema di Windows.

```
virtual BOOL SaveState (
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Stringa che contiene il percorso di una chiave del registro di sistema di Windows.

*nIndex*<br/>
in ID del controllo per la barra dei menu.

*uiID*<br/>
in Valore riservato.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione ha esito positivo; in caso contrario, FALSE;

### <a name="remarks"></a>Osservazioni

In genere, l'applicazione non chiama `SaveState`. Il Framework chiama questo metodo quando viene serializzata l'area di lavoro. Per ulteriori informazioni, vedere [CWinAppEx:: SaveState](../../mfc/reference/cwinappex-class.md#savestate).

Le informazioni salvate includono le voci di menu, lo stato di ancoraggio e la posizione della barra dei menu.

##  <a name="setdefaultmenuresid"></a>CMFCMenuBar:: SetDefaultMenuResId

Imposta il menu predefinito per un oggetto [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) in base all'ID risorsa.

```
void SetDefaultMenuResId(UINT uiResId);
```

### <a name="parameters"></a>Parametri

*uiResId*<br/>
in ID risorsa per il nuovo menu predefinito.

### <a name="remarks"></a>Osservazioni

Il metodo [CMFCMenuBar:: RestoreOriginalstate](#restoreoriginalstate) ripristina il menu predefinito dal file di risorse.

Usare il metodo [CMFCMenuBar:: GetDefaultMenuResId](#getdefaultmenuresid) per recuperare il menu predefinito senza ripristinarlo.

##  <a name="setforcedownarrows"></a>CMFCMenuBar:: SetForceDownArrows

```
void SetForceDownArrows(BOOL bValue);
```

### <a name="parameters"></a>Parametri

in *bValue*<br/>

### <a name="remarks"></a>Osservazioni

##  <a name="setmaximizemode"></a>CMFCMenuBar:: SetMaximizeMode

Il Framework chiama questo metodo quando un MDI modifica la modalità di visualizzazione e la barra dei menu deve essere aggiornata.

```
void SetMaximizeMode(
    BOOL bMax,
    CWnd* pWnd = NULL,
    BOOL bRecalcLayout = TRUE);
```

### <a name="parameters"></a>Parametri

*bMax*<br/>
in Valore booleano che specifica la modalità. Per ulteriori informazioni, vedere le sezione Note.

*pWnd*<br/>
in Puntatore alla finestra figlio MDI che sta cambiando.

*bRecalcLayout*<br/>
in Valore booleano che specifica se il layout della barra dei menu deve essere ricalcolato immediatamente.

### <a name="remarks"></a>Osservazioni

Quando una finestra figlio MDI viene ingrandita, una barra dei menu collegata alla finestra cornice principale MDI Visualizza il menu di sistema e i pulsanti **Riduci a icona**, **Ingrandisci** e **Chiudi** . Se *Bmax* è true e *pWnd* non è null, la finestra figlio MDI viene ingrandita e la barra dei menu deve incorporare i controlli aggiuntivi. In caso contrario, la barra dei menu torna allo stato normale.

##  <a name="setmenubuttonrtc"></a>CMFCMenuBar:: SetMenuButtonRTC

Imposta le informazioni sulla classe di runtime utilizzate dal framework quando l'utente crea pulsanti di menu.

```
void SetMenuButtonRTC(CRuntimeClass* pMenuButtonRTC);
```

### <a name="parameters"></a>Parametri

*pMenuButtonRTC*<br/>
in Informazioni [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per una classe derivata dalla [classe CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md).

### <a name="remarks"></a>Osservazioni

Quando un utente aggiunge nuovi pulsanti alla barra dei menu, i pulsanti vengono creati dinamicamente dal Framework. Per impostazione predefinita, crea oggetti `CMFCMenuButton`. Eseguire l'override di questo metodo per modificare il tipo di oggetti Button creati dal Framework.

##  <a name="setmenufont"></a>CMFCMenuBar:: SetMenuFont

Imposta il tipo di carattere per tutte le barre dei menu nell'applicazione.

```
static BOOL SetMenuFont(
    LPLOGFONT lpLogFont,
    BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*lpLogFont*<br/>
in Puntatore a una struttura [LOGFONT](/windows/win32/api/dimm/ns-dimm-logfonta) che definisce il tipo di carattere da impostare.

*bHorz*<br/>
in TRUE se si desidera utilizzare il parametro *LPLOGFONT* per il tipo di carattere verticale, false se si desidera che venga utilizzato per il tipo di carattere orizzontale.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per tutti gli oggetti `CMFCMenuBar` vengono utilizzati due tipi di carattere. Questi tipi di carattere separati vengono usati per le barre dei menu orizzontali e verticali.

Le impostazioni del tipo di carattere sono variabili globali e influiscono su tutti gli oggetti `CMFCMenuBar`.

##  <a name="setrecentlyusedmenus"></a>CMFCMenuBar:: SetRecentlyUsedMenus

Controlla se una barra dei menu Visualizza i comandi di menu usati di recente.

```
static void SetRecentlyUsedMenus (BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*bOn*<br/>
in Valore booleano che controlla se vengono visualizzati i comandi di menu usati di recente.

##  <a name="setshowallcommands"></a>CMFCMenuBar:: SetShowAllCommands

Controlla se un menu Mostra tutti i comandi disponibili.

```
static void SetShowAllCommands(BOOL bShowAllCommands = TRUE);
```

### <a name="parameters"></a>Parametri

*bShowAllCommands*<br/>
in Parametro booleano che specifica se il menu popup Mostra tutti i comandi di menu.

### <a name="remarks"></a>Osservazioni

Se un menu non Visualizza tutti i comandi di menu, nasconde i comandi usati raramente. Per ulteriori informazioni sulla visualizzazione dei comandi di menu, vedere la [classe CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
