---
title: CMFCMenuBar (classe)
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
ms.openlocfilehash: 50dd488d1f59c99b8fee1eb96acf6d0041547df9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369695"
---
# <a name="cmfcmenubar-class"></a>CMFCMenuBar (classe)

Barra dei menu che implementa l'ancoraggio.
Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCMenuBar : public CMFCToolbar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMenuBar::AdjustLocations](#adjustlocations)|Esegue l'override di `CMFCToolBar::AdjustLocations`.|
|[CMFCMenuBar::AllowChangeTextLabels](#allowchangetextlabels)|Specifica se le etichette di testo possono essere visualizzate sotto le immagini sui pulsanti della barra degli strumenti. (Esegue l'override di [CMFCToolBar::AllowChangeTextLabels](../../mfc/reference/cmfctoolbar-class.md#allowchangetextlabels).)|
|[CMFCMenuBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|Esegue l'override di `CPane::AllowShowOnPaneMenu`.|
|[CMFCMenuBar::CalcFixedLayout](#calcfixedlayout)|Calcola la dimensione orizzontale della barra degli strumenti. (Esegue l'override di [CMFCToolBar::CalcFixedLayout.)](../../mfc/reference/cmfctoolbar-class.md#calcfixedlayout)|
|[CMFCMenuBar::CalcLayout](#calclayout)|Esegue l'override di `CMFCToolBar::CalcLayout`.|
|[CMFCMenuBar::CalcMaxButtonHeight](#calcmaxbuttonheight)|Calcola l'altezza massima dei pulsanti nella barra degli strumenti. (Esegue l'override di [CMFCToolBar::CalcMaxButtonHeight](../../mfc/reference/cmfctoolbar-class.md#calcmaxbuttonheight).)|
|[CMFCMenuBar::CanBeClosed](#canbeclosed)|Specifica se un utente può chiudere la barra degli strumenti. (Esegue l'override di [CMFCToolBar::CanBeClosed](../../mfc/reference/cmfctoolbar-class.md#canbeclosed).)|
|[CMFCMenuBar::CanBeRestored](#canberestored)|Determina se il sistema può ripristinare lo stato originale di una barra degli strumenti dopo la personalizzazione. (Esegue l'override di [CMFCToolBar::CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).)|
|[CMFCMenuBar::Create](#create)|Crea un controllo menu e lo `CMFCMenuBar` associa a un oggetto.|
|[CMFCMenuBar::CreateEx](#createex)|Crea `CMFCMenuBar` un oggetto con opzioni di stile aggiuntive.|
|[CMFCMenuBar::CreateFromMenu](#createfrommenu)|Inizializza un oggetto `CMFCMenuBar`. Accetta un parametro HMENU che funge `CMFCMenuBar`da modello per un oggetto popolato.|
|[CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox)|Attiva una casella combinata **della Guida** che si trova sul lato destro della barra dei menu.|
|[CMFCMenuBar::EnableMenuShadows](#enablemenushadows)|Specifica se visualizzare le ombre per i menu a comparsa.|
|[CMFCMenuBar::GetAvailableExpandSize](#getavailableexpandsize)|(Esegue l'override di [CPane::GetAvailableExpandSize](../../mfc/reference/cpane-class.md#getavailableexpandsize).)|
|[CMFCMenuBar::GetColumnWidth](#getcolumnwidth)|Restituisce la larghezza dei pulsanti della barra degli strumenti. (Esegue l'override di [CMFCToolBar::GetColumnWidth](../../mfc/reference/cmfctoolbar-class.md#getcolumnwidth).)|
|[CMFCMenuBar::GetDefaultMenu](#getdefaultmenu)|Restituisce un handle al menu originale nel file di risorse.|
|[CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid)|Restituisce l'identificatore di risorsa per il menu originale nel file di risorse.|
|[CMFCMenuBar::GetFloatPopupDirection](#getfloatpopupdirection)||
|[CMFCMenuBar::GetForceDownArrows](#getforcedownarrows)||
|[CMFCMenuBar::GetHelpCombobox](#gethelpcombobox)|Restituisce un puntatore alla casella combinata **della Guida.**|
|[CMFCMenuBar::GetHMenu](#gethmenu)|Restituisce l'handle al menu associato `CMFCMenuBar` all'oggetto.|
|[CMFCMenuBar::GetMenuFont](#getmenufont)|Restituisce il tipo di carattere globale corrente per gli oggetti menu.|
|[CMFCMenuBar::GetMenuItem](#getmenuitem)|Restituisce il pulsante della barra degli strumenti associato all'indice dell'elemento fornito.|
|[CMFCMenuBar::GetRowHeight](#getrowheight)|Restituisce l'altezza dei pulsanti della barra degli strumenti. (Esegue l'override di [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|
|[CMFCMenuBar::GetSystemButton](#getsystembutton)||
|[CMFCMenuBar::GetSystemButtonsCount](#getsystembuttonscount)||
|[CMFCMenuBar::GetSystemMenu](#getsystemmenu)||
|[CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems)|Indica se le voci di menu disabilitate sono evidenziate.|
|[CMFCMenuBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determina se la barra degli strumenti può visualizzare i pulsanti con bordi estesi. (Esegue l'override [di CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|
|[CMFCMenuBar::IsHighlightDisabledItems](#ishighlightdisableditems)|Indica se gli elementi disabilitati sono evidenziati.|
|[CMFCMenuBar::IsMenuShadows](#ismenushadows)|Indica se le ombre vengono disegnate per i menu a comparsa.|
|[CMFCMenuBar::IsRecentlyUsedMenus](#isrecentlyusedmenus)|Indica se i comandi di menu utilizzati di recente vengono visualizzati sulla barra dei menu.|
|[CMFCMenuBar::IsShowAllCommands](#isshowallcommands)|Indica se i menu a comparsa visualizzano tutti i comandi.|
|[CMFCMenuBar::IsShowAllCommandsDelay](#isshowallcommandsdelay)|Indica se i menu visualizzano tutti i comandi dopo un breve ritardo.|
|[CMFCMenuBar::LoadState](#loadstate)|Carica lo stato `CMFCMenuBar` dell'oggetto dal Registro di sistema.|
|[CMFCMenuBar::OnChangeHot](#onchangehot)|Chiamato dal framework quando un utente seleziona un pulsante sulla barra degli strumenti. (Esegue l'override di [CMFCToolBar::OnChangeHot](../../mfc/reference/cmfctoolbar-class.md#onchangehot).)|
|[CMFCMenuBar::OnDefaultMenuLoaded](#ondefaultmenuloaded)|Chiamato dal framework quando una finestra cornice carica il menu predefinito dal file di risorse.|
|[CMFCMenuBar::OnSendCommand](#onsendcommand)|Esegue l'override di `CMFCToolBar::OnSendCommand`.|
|[CMFCMenuBar::OnSetDefaultButtonText](#onsetdefaultbuttontext)|Chiamato dal framework quando un menu è in modalità di personalizzazione e l'utente modifica il testo di una voce di menu.|
|[CMFCMenuBar::OnToolHitTest](#ontoolhittest)|Esegue l'override di `CMFCToolBar::OnToolHitTest`.|
|[CMFCMenuBar::PreTranslateMessage](#pretranslatemessage)|Esegue l'override di `CMFCToolBar::PreTranslateMessage`.|
|[CMFCMenuBar::RestoreOriginalstate](#restoreoriginalstate)|Chiamato dal framework quando un menu è in modalità di personalizzazione e l'utente seleziona **Reimposta** per una barra dei menu.|
|[CMFCMenuBar::SaveState](#savestate)|Salva lo stato `CMFCMenuBar` dell'oggetto nel Registro di sistema.|
|[CMFCMenuBar::SetDefaultMenuResId](#setdefaultmenuresid)|Imposta il menu originale nel file di risorse.|
|[CMFCMenuBar::SetForceDownArrows](#setforcedownarrows)||
|[CMFCMenuBar::SetMaximizeMode](#setmaximizemode)|Chiamato dal framework quando una finestra figlio MDI modifica la modalità di visualizzazione. Se la finestra figlio MDI è stata appena ingrandita o non è più ingrandita, questo metodo aggiorna la barra dei menu.|
|[CMFCMenuBar::SetMenuButtonRTC](#setmenubuttonrtc)|Imposta le informazioni sulla classe di runtime generate quando l'utente crea dinamicamente i pulsanti di menu.|
|[CMFCMenuBar::SetMenuFont](#setmenufont)|Imposta il tipo di carattere per tutti i menu dell'applicazione.|
|[CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus)|Specifica se una barra dei menu visualizza i comandi di menu utilizzati di recente.|
|[CMFCMenuBar::SetShowAllCommands](#setshowallcommands)|Specifica se la barra dei menu mostra tutti i comandi.|

## <a name="remarks"></a>Osservazioni

La `CMFCMenuBar` classe è una barra dei menu che implementa la funzionalità di ancoraggio. Assomiglia a una barra degli strumenti, anche se non può essere chiusa - è sempre visualizzata.

`CMFCMenuBar`supporta l'opzione di visualizzare gli oggetti voce di menu utilizzati di recente. Se questa opzione è `CMFCMenuBar` attivata, visualizza solo un sottoinsieme dei comandi disponibili alla prima visualizzazione. Successivamente, i comandi utilizzati di recente vengono visualizzati insieme al sottoinsieme originale di comandi. Inoltre, l'utente può sempre espandere il menu per visualizzare tutti i comandi disponibili. Pertanto, ogni comando disponibile è configurato per essere visualizzato costantemente o solo se è stato selezionato di recente.

Per utilizzare `CMFCMenuBar` un oggetto, incorporarlo nell'oggetto cornice della finestra principale. Durante l'elaborazione del `WM_CREATE` messaggio, chiamare `CMFCMenuBar::Create` o `CMFCMenuBar::CreateEx`. Indipendentemente dalla funzione di creazione utilizzata, passare un puntatore alla finestra cornice principale. Abilitare quindi l'ancoraggio chiamando [CFrameWndEx::EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Ancorare questo menu chiamando [CFrameWndEx::DockPane](../../mfc/reference/cframewndex-class.md#dockpane).

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCMenuBar` . Nell'esempio viene illustrato come impostare lo stile del riquadro, abilitare il pulsante Personalizza, attivare una casella della Guida, abilitare le ombre per i menu a comparsa e aggiornare la barra dei menu. Questo frammento di codice fa parte dell'esempio Demo di [IE.](../../overview/visual-cpp-samples.md)

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

## <a name="cmfcmenubaradjustlocations"></a><a name="adjustlocations"></a>CMFCMenuBar::AdjustLocations

Regola le posizioni delle voci di menu nella barra dei menu.

```
virtual void AdjustLocations();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarallowchangetextlabels"></a><a name="allowchangetextlabels"></a>CMFCMenuBar::AllowChangeTextLabels

Determina se le etichette di testo sono consentite nelle immagini nella barra dei menu.

```
virtual BOOL AllowChangeTextLabels() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'utente può scegliere di visualizzare le etichette di testo sotto le immagini.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarallowshowonpanemenu"></a><a name="allowshowonpanemenu"></a>CMFCMenuBar::AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarcalcfixedlayout"></a><a name="calcfixedlayout"></a>CMFCMenuBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

[in] *bAllunga*<br/>

[in] *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarcalclayout"></a><a name="calclayout"></a>CMFCMenuBar::CalcLayout

```
virtual CSize CalcLayout(
    DWORD dwMode,
    int nLength = -1);
```

### <a name="parameters"></a>Parametri

[in] *dwMode (Modalità)*<br/>

[in] *nLunghezza*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarcalcmaxbuttonheight"></a><a name="calcmaxbuttonheight"></a>CMFCMenuBar::CalcMaxButtonHeight

```
virtual int CalcMaxButtonHeight();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarcanbeclosed"></a><a name="canbeclosed"></a>CMFCMenuBar::CanBeClosed

```
virtual BOOL CanBeClosed() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarcanberestored"></a><a name="canberestored"></a>CMFCMenuBar::CanBeRestored

```
virtual BOOL CanBeRestored() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarcreate"></a><a name="create"></a>CMFCMenuBar::Create

Crea un controllo menu e lo associa a un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,
    UINT nID = AFX_IDW_MENUBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre `CMFCMenuBar` per il nuovo oggetto.

*DwStyle (in stile dwStyle)*<br/>
[in] Stile della nuova barra dei menu.

*nID*<br/>
[in] ID per la finestra figlio della barra dei menu.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Dopo aver `CMFCMenuBar` creato un oggetto, è necessario chiamare `Create`. Questo metodo `CMFCMenuBar` crea il controllo e `CMFCMenuBar` lo associa all'oggetto.

Per ulteriori informazioni sugli stili della barra degli strumenti, vedere [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).

## <a name="cmfcmenubarcreateex"></a><a name="createex"></a>CMFCMenuBar::CreateEx

Crea un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto con gli stili estesi specificati.

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

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre `CMFCMenuBar` del nuovo oggetto.

*dwCtrlStyle*<br/>
[in] Stili aggiuntivi per la nuova barra dei menu.

*DwStyle (in stile dwStyle)*<br/>
[in] Lo stile principale della nuova barra dei menu.

*rcBorders*<br/>
[in] Parametro `CRect` che specifica le dimensioni dei `CMFCMenuBar` bordi dell'oggetto.

*nID*<br/>
[in] ID per la finestra figlio della barra dei menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È necessario utilizzare questa funzione anziché [CMFCMenuBar::Create](#create) quando si desidera specificare gli stili oltre allo stile della barra degli strumenti. Alcuni stili aggiuntivi utilizzati di frequente sono TBSTYLE_TRANSPARENT e CBRS_TOP.

Per l'elenco degli stili aggiuntivi, vedere [Controllo barra degli strumenti e Stili pulsante](/windows/win32/Controls/toolbar-control-and-button-styles), Stili di controllo [comuni](/windows/win32/Controls/common-control-styles)e Stili di [finestra comuni](/windows/win32/winmsg/window-styles).

### <a name="example"></a>Esempio

Nell'esempio riportato di `CreateEx` seguito `CMFCMenuBar` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte dell'esempio Demo di [IE.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_1.h)]
[!code-cpp[NVC_MFC_IEDemo#2](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_3.cpp)]

## <a name="cmfcmenubarcreatefrommenu"></a><a name="createfrommenu"></a>CMFCMenuBar::CreateFromMenu

Inizializza un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto. Questo metodo `CMFCMenuBar` modella l'oggetto dopo un parametro HMENU.

```
virtual void CreateFromMenu(
    HMENU hMenu,
    BOOL bDefaultMenu = FALSE,
    BOOL bForceUpdate = FALSE);
```

### <a name="parameters"></a>Parametri

*Hmenu*<br/>
[in] Handle per una risorsa di menu. `CreateFromMenu`utilizza questa risorsa come `CMFCMenuBar`modello per il file .

*bMenupredefinito*<br/>
[in] Valore booleano che indica se il nuovo menu è il menu predefinito.

*bForceUpdate (aggiornamento)*<br/>
[in] Valore booleano che indica se questo metodo forza un aggiornamento del menu.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo se si desidera che un controllo menu abbia le stesse voci di menu di una risorsa di menu. Questo metodo viene chiamato dopo aver chiamato [CMFCMenuBar::Create](#create) o [CMFCMenuBar::CreateEx](#createex).

## <a name="cmfcmenubarenablehelpcombobox"></a><a name="enablehelpcombobox"></a>CMFCMenuBar::EnableHelpCombobox

Attiva una casella combinata **della Guida** che si trova sul lato destro della barra dei menu.

```
void EnableHelpCombobox(
    UINT uiID,
    LPCTSTR lpszPrompt = NULL,
    int nComboBoxWidth = 150);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] ID di comando per il pulsante della casella combinata **Guida.**

*lpszPrompt (Prompt)*<br/>
[in] Stringa contenente il testo visualizzato dal framework nella casella combinata se è vuoto e non attivo. Ad esempio, "Immettere il testo qui".

*nComboBoxWidth (LarghezzaCombinata)*<br/>
[in] Larghezza del pulsante per la casella combinata in pixel.

### <a name="remarks"></a>Osservazioni

La casella combinata **Guida** è simile alla casella combinata **Guida** nella barra dei menu di Microsoft Word.

Quando si chiama questo metodo con *uiID* impostato su 0, questo metodo nasconde la casella combinata. In caso contrario, questo metodo visualizza automaticamente la casella combinata sul lato destro della barra dei menu. Dopo aver chiamato questo metodo, chiamare [CMFCMenuBar::GetHelpCombobox](#gethelpcombobox) per ottenere un puntatore all'oggetto [cMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) inserito.

## <a name="cmfcmenubarenablemenushadows"></a><a name="enablemenushadows"></a>CMFCMenuBar::EnableMenuShadows

Abilita le ombre per i menu a comparsa.

```
static void EnableMenuShadows(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Parametro booleano che indica se le ombre devono essere abilitate per i menu a comparsa.

### <a name="remarks"></a>Osservazioni

L'algoritmo utilizzato da questo metodo è complesso e può ridurre le prestazioni dell'applicazione nei sistemi più lenti.

## <a name="cmfcmenubargetavailableexpandsize"></a><a name="getavailableexpandsize"></a>CMFCMenuBar::GetAvailableExpandSize

```
virtual int GetAvailableExpandSize() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubargetcolumnwidth"></a><a name="getcolumnwidth"></a>CMFCMenuBar::GetColumnWidth

```
virtual int GetColumnWidth() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubargetdefaultmenu"></a><a name="getdefaultmenu"></a>CMFCMenuBar::GetDefaultMenu

Recupera un handle per il menu originale. Il framework carica il menu originale dal file di risorse.

```
HMENU GetDefaultMenu() const;
```

### <a name="return-value"></a>Valore restituito

Handle per una risorsa di menu.

### <a name="remarks"></a>Osservazioni

Se l'applicazione personalizza un menu, è possibile utilizzare questo metodo per recuperare un handle per il menu originale.

## <a name="cmfcmenubargetdefaultmenuresid"></a><a name="getdefaultmenuresid"></a>CMFCMenuBar::GetDefaultMenuResId

Recupera l'identificatore di risorsa per il menu predefinito.

```
UINT GetDefaultMenuResId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di risorsa di menu.

### <a name="remarks"></a>Osservazioni

Il framework carica il `CMFCMenuBar` menu predefinito per l'oggetto dal file di risorse.

## <a name="cmfcmenubargetfloatpopupdirection"></a><a name="getfloatpopupdirection"></a>CMFCMenuBar::GetFloatPopupDirection

```
int GetFloatPopupDirection(CMFCToolBarMenuButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pButton (Pulsante)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubargetforcedownarrows"></a><a name="getforcedownarrows"></a>CMFCMenuBar::GetForceDownArrows

```
BOOL GetForceDownArrows();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubargethelpcombobox"></a><a name="gethelpcombobox"></a>CMFCMenuBar::GetHelpCombobox

Restituisce un puntatore alla casella combinata **della Guida.**

```
CMFCToolBarComboBoxButton* GetHelpCombobox();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla casella combinata **Guida.** NULL se la casella combinata **Guida** è nascosta o non abilitata.

### <a name="remarks"></a>Osservazioni

La casella combinata **Guida** si trova sul lato destro della barra dei menu. Chiamare il metodo [CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox) per abilitare questa casella combinata.

## <a name="cmfcmenubargethmenu"></a><a name="gethmenu"></a>CMFCMenuBar::GetHMenu

Recupera l'handle per il menu associato al [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto.

```
HMENU GetHMenu() const;
```

## <a name="cmfcmenubargetmenufont"></a><a name="getmenufont"></a>CMFCMenuBar::GetMenuFont

Recupera il tipo di carattere del menu corrente.

```
static const CFont& GetMenuFont(BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
[in] Parametro booleano che specifica se restituire il tipo di carattere orizzontale o verticale. TRUE indica il tipo di carattere orizzontale.

### <a name="return-value"></a>Valore restituito

Puntatore a un [CFont](../../mfc/reference/cfont-class.md) parametro che contiene il tipo di carattere della barra dei menu corrente.

### <a name="remarks"></a>Osservazioni

Il tipo di carattere restituito è un parametro globale per l'applicazione. Due tipi di carattere globali vengono mantenuti per tutti `CMFCMenuBar` gli oggetti. Questi tipi di carattere separati vengono utilizzati per le barre dei menu orizzontali e verticali.

## <a name="cmfcmenubargetmenuitem"></a><a name="getmenuitem"></a>CMFCMenuBar::GetMenuItem

Recupera un [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto su una barra dei menu in base all'indice dell'elemento.

```
CMFCToolBarButton* GetMenuItem(int iItem) const;
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] Indice della voce di menu da restituire.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `CMFCToolBarButton` che corrisponde all'indice specificato da *iItem*. NULL se l'indice non è valido.

## <a name="cmfcmenubargetrowheight"></a><a name="getrowheight"></a>CMFCMenuBar::GetRowHeight

```
virtual int GetRowHeight() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubargetsystembutton"></a><a name="getsystembutton"></a>CMFCMenuBar::GetSystemButton

```
CMFCToolBarMenuButtonsButton* GetSystemButton(
    UINT uiBtn,
    BOOL bByCommand = TRUE) const;
```

### <a name="parameters"></a>Parametri

[in] *uiBtn (informazioni in questo base'è*<br/>

[in] *BByCommand (comando)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubargetsystembuttonscount"></a><a name="getsystembuttonscount"></a>CMFCMenuBar::GetSystemButtonsCount

```
int GetSystemButtonsCount() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubargetsystemmenu"></a><a name="getsystemmenu"></a>CMFCMenuBar::GetSystemMenu

```
CMFCToolBarSystemMenuButton* GetSystemMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarhighlightdisableditems"></a><a name="highlightdisableditems"></a>CMFCMenuBar::HighlightDisabledItems

Controlla se il framework evidenzia le voci di menu disabilitate.

```
static void HighlightDisabledItems(BOOL bHighlight = TRUE);
```

### <a name="parameters"></a>Parametri

*bEvidenziare*<br/>
[in] Parametro booleano che indica se il framework evidenzia le voci di menu non disponibili.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il framework non evidenzia le voci di menu non disponibili quando l'utente posiziona il puntatore del mouse su di esse.

## <a name="cmfcmenubarisbuttonextrasizeavailable"></a><a name="isbuttonextrasizeavailable"></a>CMFCMenuBar::IsButtonExtraSizeAvailable

```
virtual BOOL IsButtonExtraSizeAvailable() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarishighlightdisableditems"></a><a name="ishighlightdisableditems"></a>CMFCMenuBar::IsHighlightDisabledItems

Indica se il framework evidenzia le voci di menu non disponibili.

```
static BOOL IsHighlightDisabledItems();
```

### <a name="return-value"></a>Valore restituito

TRUESe le voci di menu non disponibili sono evidenziate. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il framework non evidenzia le voci di menu non disponibili quando l'utente posiziona il puntatore del mouse su di esse. Utilizzare il [CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems) metodo per abilitare questa funzionalità.

## <a name="cmfcmenubarismenushadows"></a><a name="ismenushadows"></a>CMFCMenuBar::IsMenuShadows

Indica se il framework disegna ombre per i menu a comparsa.

```
static BOOL IsMenuShadows();
```

### <a name="return-value"></a>Valore restituito

TRUESe il framework disegna le ombreggiature del menu; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare il [CMFCMenuBar::EnableMenuShadows](#enablemenushadows) metodo per abilitare o disabilitare questa funzionalità.

## <a name="cmfcmenubarisrecentlyusedmenus"></a><a name="isrecentlyusedmenus"></a>CMFCMenuBar::IsRecentlyUsedMenus

Indica se i comandi di menu utilizzati di recente vengono visualizzati sulla barra dei menu.

```
static BOOL IsRecentlyUsedMenus();
```

### <a name="return-value"></a>Valore restituito

Diverso da `CMFCMenuBar` zero se l'oggetto mostra i comandi di menu utilizzati di recente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare la funzione [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus) per controllare se la barra dei menu mostra i comandi di menu utilizzati di recente.

## <a name="cmfcmenubarisshowallcommands"></a><a name="isshowallcommands"></a>CMFCMenuBar::IsShowAllCommands

Indica se i menu visualizzano tutti i comandi.

```
static BOOL IsShowAllCommands();
```

### <a name="return-value"></a>Valore restituito

Diverso da `CMFCMenuBar` zero se l'oggetto visualizza tutti i comandi; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un `CMFCMenuBar` oggetto può essere configurato per visualizzare tutti i comandi o solo un sottoinsieme di comandi. Per ulteriori informazioni su questa funzionalità, vedere [CMFCMenuBar (classe).](../../mfc/reference/cmfcmenubar-class.md)

`IsShowAllCommands`vi dirà come questa funzione `CMFCMenuBar` è configurata per l'oggetto. Per controllare quali comandi di menu vengono visualizzati, utilizzare i metodi [CMFCMenuBar::SetShowAllCommands](#setshowallcommands) e [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus).

## <a name="cmfcmenubarisshowallcommandsdelay"></a><a name="isshowallcommandsdelay"></a>CMFCMenuBar::IsShowAllCommandsDelay

Indica se il [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto visualizza tutti i comandi dopo un breve ritardo.

```
static BOOL IsShowAllCommandsDelay();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra dei menu visualizza menu completi dopo un breve ritardo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Quando si configura una barra dei menu per visualizzare gli elementi utilizzati di recente, la barra dei menu visualizza il menu completo in uno dei due modi seguenti:

- Visualizzare il menu completo dopo un ritardo programmato da quando l'utente passa il cursore sulla freccia nella parte inferiore del menu.

- Visualizzare il menu completo dopo che l'utente fa clic sulla freccia nella parte inferiore del menu.

Per impostazione `CMFCMenuBar` predefinita, tutti gli oggetti utilizzano l'opzione per visualizzare il menu completo dopo un breve ritardo. Questa opzione non può essere `CMFCMenuBar` modificata a livello di codice nella classe. Tuttavia, un utente può modificare il comportamento durante la personalizzazione della barra degli strumenti utilizzando la finestra di dialogo Personalizza.However, a user can change the behavior during toolbar customization by using the **Customize** dialog box..

## <a name="cmfcmenubarloadstate"></a><a name="loadstate"></a>CMFCMenuBar::LoadState

Carica lo stato della barra dei menu dal Registro di sistema di Windows.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Stringa che contiene il percorso di una chiave del Registro di sistema di Windows.

*nIndex*<br/>
[in] ID di controllo per la barra dei menu.

*uiID*<br/>
[in] Valore riservato.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare il [CMFCMenuBar::SaveState](#savestate) metodo per salvare lo stato della barra dei menu nel Registro di sistema. Le informazioni salvate includono le voci di menu, lo stato del dock e la posizione della barra dei menu.

Nella maggior parte dei `LoadState`casi l'applicazione non chiama . Il framework chiama questo metodo quando inizializza l'area di lavoro.

## <a name="cmfcmenubaronchangehot"></a><a name="onchangehot"></a>CMFCMenuBar::OnChangeHot

```
virtual void OnChangeHot(int iHot);
```

### <a name="parameters"></a>Parametri

[in] *iHot (in* questo la fol<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarondefaultmenuloaded"></a><a name="ondefaultmenuloaded"></a>CMFCMenuBar::OnDefaultMenuLoaded

Il framework chiama questo metodo quando carica la risorsa menu dal file di risorse.

```
virtual void OnDefaultMenuLoaded(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*Hmenu*<br/>
[in] Handle per il menu associato `CMFCMenuBar` all'oggetto.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire codice personalizzato dopo che il framework carica una risorsa di menu dal file di risorse.

## <a name="cmfcmenubaronsendcommand"></a><a name="onsendcommand"></a>CMFCMenuBar::OnSendCommand

```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pButton (Pulsante)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubaronsetdefaultbuttontext"></a><a name="onsetdefaultbuttontext"></a>CMFCMenuBar::OnSetDefaultButtonText

Il framework chiama questo metodo quando l'utente modifica il testo di una voce nella barra dei menu.

```
virtual BOOL OnSetDefaultButtonText(CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

*pButton (Pulsante)*<br/>
[in] Puntatore all'oggetto [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) che l'utente desidera personalizzare.

### <a name="return-value"></a>Valore restituito

TRUESe il framework applica l'utente modifiche alla barra dei menu; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita per questo metodo modifica il testo del pulsante nel testo fornito dall'utente.

## <a name="cmfcmenubarontoolhittest"></a><a name="ontoolhittest"></a>CMFCMenuBar::OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### <a name="parameters"></a>Parametri

[in] *punto*<br/>

[in] *pTI*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarpretranslatemessage"></a><a name="pretranslatemessage"></a>CMFCMenuBar::PreTranslateMessage

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

[in] *pMsg*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarrestoreoriginalstate"></a><a name="restoreoriginalstate"></a>CMFCMenuBar::RestoreOriginalstate

Chiamato dal framework quando l'utente seleziona **Reimposta** dalla finestra di dialogo **Personalizza.**

```
virtual BOOL RestoreOriginalstate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato quando l'utente seleziona **Reimposta** dal menu di personalizzazione. È inoltre possibile chiamare manualmente questo metodo per reimpostare a livello di codice lo stato della barra dei menu. Questo metodo carica lo stato originale dal file di risorse.

Eseguire l'override di questo metodo se si desidera eseguire qualsiasi elaborazione quando l'utente seleziona l'opzione **Reimposta** .

## <a name="cmfcmenubarsavestate"></a><a name="savestate"></a>CMFCMenuBar::SaveState

Salva lo stato del [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto nel Registro di sistema di Windows.

```
virtual BOOL SaveState (
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT)-1);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Stringa che contiene il percorso di una chiave del Registro di sistema di Windows.

*nIndex*<br/>
[in] ID di controllo per la barra dei menu.

*uiID*<br/>
[in] Valore riservato.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo; in caso contrario, FALSE;

### <a name="remarks"></a>Osservazioni

In genere, l'applicazione non chiama `SaveState`. Il framework chiama questo metodo quando l'area di lavoro viene serializzata. Per ulteriori informazioni, vedere [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).

Le informazioni salvate includono le voci di menu, lo stato del dock e la posizione della barra dei menu.

## <a name="cmfcmenubarsetdefaultmenuresid"></a><a name="setdefaultmenuresid"></a>CMFCMenuBar::SetDefaultMenuResId

Imposta il menu predefinito per un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto in base all'ID risorsa.

```
void SetDefaultMenuResId(UINT uiResId);
```

### <a name="parameters"></a>Parametri

*uiResId*<br/>
[in] ID risorsa per il nuovo menu predefinito.

### <a name="remarks"></a>Osservazioni

Il [CMFCMenuBar::RestoreOriginalstate metodo](#restoreoriginalstate) ripristina il menu predefinito dal file di risorse.

Utilizzare il [CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid) metodo per recuperare il menu predefinito senza ripristinarlo.

## <a name="cmfcmenubarsetforcedownarrows"></a><a name="setforcedownarrows"></a>CMFCMenuBar::SetForceDownArrows

```
void SetForceDownArrows(BOOL bValue);
```

### <a name="parameters"></a>Parametri

[in] *bValore*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcmenubarsetmaximizemode"></a><a name="setmaximizemode"></a>CMFCMenuBar::SetMaximizeMode

Il framework chiama questo metodo quando un MDI cambia la modalità di visualizzazione e la barra dei menu deve essere aggiornata.

```
void SetMaximizeMode(
    BOOL bMax,
    CWnd* pWnd = NULL,
    BOOL bRecalcLayout = TRUE);
```

### <a name="parameters"></a>Parametri

*Bmax*<br/>
[in] Valore booleano che specifica la modalità. Per ulteriori informazioni, vedere le sezione Note.

*pWnd (in questo stato di windows*<br/>
[in] Puntatore alla finestra figlio MDI che sta cambiando.

*bRecalcLayout*<br/>
[in] Valore Boolean che specifica se il layout della barra dei menu deve essere ricalcolato immediatamente.

### <a name="remarks"></a>Osservazioni

Quando una finestra figlio MDI è ingrandita, una barra dei menu collegata alla finestra cornice principale MDI visualizza il menu di sistema e i pulsanti **Riduci a icona**, **Ingrandisci** e **Chiudi** . Se *bMax* è TRUE e *pWnd* non è NULL, la finestra figlio MDI viene ingrandita e la barra dei menu deve incorporare i controlli aggiuntivi. In caso contrario, la barra dei menu torna allo stato normale.

## <a name="cmfcmenubarsetmenubuttonrtc"></a><a name="setmenubuttonrtc"></a>CMFCMenuBar::SetMenuButtonRTC

Imposta le informazioni sulla classe di runtime utilizzate dal framework quando l'utente crea pulsanti di menu.

```
void SetMenuButtonRTC(CRuntimeClass* pMenuButtonRTC);
```

### <a name="parameters"></a>Parametri

*pMenuButtonRTC (pulsante)*<br/>
[in] Le informazioni [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per una classe derivata dalla [classe CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md).

### <a name="remarks"></a>Osservazioni

Quando un utente aggiunge nuovi pulsanti alla barra dei menu, il framework crea i pulsanti in modo dinamico. Per impostazione `CMFCMenuButton` predefinita, crea oggetti. Eseguire l'override di questo metodo per modificare il tipo di oggetti pulsante creato dal framework.

## <a name="cmfcmenubarsetmenufont"></a><a name="setmenufont"></a>CMFCMenuBar::SetMenuFont

Imposta il tipo di carattere per tutte le barre dei menu nell'applicazione.

```
static BOOL SetMenuFont(
    LPLOGFONT lpLogFont,
    BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*Carattere lpLogFont*<br/>
[in] Puntatore a una struttura [LOGFONT](/windows/win32/api/dimm/ns-dimm-logfonta) che definisce il tipo di carattere da impostare.

*bHorz*<br/>
[in] TRUESe si desidera che il *lpLogFont* parametro da utilizzare per il tipo di carattere verticale, FALSE se si desidera che venga utilizzato per il tipo di carattere orizzontale.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per tutti `CMFCMenuBar` gli oggetti vengono utilizzati due tipi di carattere. Questi tipi di carattere separati vengono utilizzati per le barre dei menu orizzontali e verticali.

Le impostazioni del carattere `CMFCMenuBar` sono variabili globali e hanno effetto su tutti gli oggetti.

## <a name="cmfcmenubarsetrecentlyusedmenus"></a><a name="setrecentlyusedmenus"></a>CMFCMenuBar::SetRecentlyUsedMenus

Controlla se una barra dei menu visualizza i comandi di menu utilizzati di recente.

```
static void SetRecentlyUsedMenus (BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*Bon*<br/>
[in] Valore booleano che controlla se vengono visualizzati i comandi di menu utilizzati di recente.

## <a name="cmfcmenubarsetshowallcommands"></a><a name="setshowallcommands"></a>CMFCMenuBar::SetShowAllCommands

Controlla se un menu mostra tutti i comandi disponibili.

```
static void SetShowAllCommands(BOOL bShowAllCommands = TRUE);
```

### <a name="parameters"></a>Parametri

*bComandi*<br/>
[in] Un parametro booleano che specifica se il menu a comparsa mostra tutti i comandi di menu.

### <a name="remarks"></a>Osservazioni

Se un menu non visualizza tutti i comandi di menu, nasconde i comandi utilizzati raramente. Per ulteriori informazioni sulla visualizzazione dei comandi di menu, vedere [CMFCMenuBar (classe).](../../mfc/reference/cmfcmenubar-class.md)

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)
