---
title: Classe CMFCMenuBar | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
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
caps.latest.revision: "36"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c638679058d6c914d3dac4207b9ae320c4ee2697
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cmfcmenubar-class"></a>Classe CMFCMenuBar
Barra dei menu che implementa l'ancoraggio.  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
|[CMFCMenuBar::CalcMaxButtonHeight](#calcmaxbuttonheight)|Calcola l'altezza massima dei pulsanti della barra degli strumenti. (Esegue l'override [CMFCToolBar::CalcMaxButtonHeight](../../mfc/reference/cmfctoolbar-class.md#calcmaxbuttonheight).)|  
|[CMFCMenuBar::CanBeClosed](#canbeclosed)|Specifica se un utente può chiudere la barra degli strumenti. (Esegue l'override [CMFCToolBar::CanBeClosed](../../mfc/reference/cmfctoolbar-class.md#canbeclosed).)|  
|[CMFCMenuBar::CanBeRestored](#canberestored)|Determina se il ripristino del sistema una barra degli strumenti per lo stato originale dopo la personalizzazione. (Esegue l'override [CMFCToolBar::CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).)|  
|[CMFCMenuBar::Create](#create)|Crea un controllo menu e la collega a un `CMFCMenuBar` oggetto.|  
|[CMFCMenuBar::CreateEx](#createex)|Crea un `CMFCMenuBar` oggetto con ulteriori opzioni di stile.|  
|[CMFCMenuBar::CreateFromMenu](#createfrommenu)|Inizializza un `CMFCMenuBar` oggetto. Accetta un `HMENU` parametro che si comporta come un modello per un popolato `CMFCMenuBar`.|  
|[CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox)|Consente un **Guida** casella combinata che si trova sul lato destro della barra dei menu.|  
|[CMFCMenuBar::EnableMenuShadows](#enablemenushadows)|Specifica se visualizzare shadows nei menu a comparsa.|  
|[CMFCMenuBar::GetAvailableExpandSize](#getavailableexpandsize)|(Esegue l'override [CPane::GetAvailableExpandSize](../../mfc/reference/cpane-class.md#getavailableexpandsize).)|  
|[CMFCMenuBar::GetColumnWidth](#getcolumnwidth)|Restituisce la larghezza dei pulsanti della barra degli strumenti. (Esegue l'override [CMFCToolBar::GetColumnWidth](../../mfc/reference/cmfctoolbar-class.md#getcolumnwidth).)|  
|[CMFCMenuBar::GetDefaultMenu](#getdefaultmenu)|Restituisce un handle al menu originale nel file di risorse.|  
|[CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid)|Restituisce l'identificatore di risorsa per il menu originale nel file di risorse.|  
|[CMFCMenuBar::GetFloatPopupDirection](#getfloatpopupdirection)||  
|[CMFCMenuBar::GetForceDownArrows](#getforcedownarrows)||  
|[CMFCMenuBar::GetHelpCombobox](#gethelpcombobox)|Restituisce un puntatore al **Guida** casella combinata.|  
|[CMFCMenuBar::GetHMenu](#gethmenu)|Restituisce l'handle per il menu di cui è collegato la `CMFCMenuBar` oggetto.|  
|[CMFCMenuBar::GetMenuFont](#getmenufont)|Restituisce il carattere corrente del globale per gli oggetti di menu.|  
|[CMFCMenuBar::GetMenuItem](#getmenuitem)|Restituisce il pulsante della barra degli strumenti associato all'indice di elemento fornito.|  
|[CMFCMenuBar::GetRowHeight](#getrowheight)|Restituisce l'altezza dei pulsanti della barra degli strumenti. (Esegue l'override [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|  
|[CMFCMenuBar::GetSystemButton](#getsystembutton)||  
|[CMFCMenuBar::GetSystemButtonsCount](#getsystembuttonscount)||  
|[CMFCMenuBar::GetSystemMenu](#getsystemmenu)||  
|[CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems)|Indica se le voci di menu disabilitata vengono evidenziate.|  
|[CMFCMenuBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determina se la barra degli strumenti possa visualizzare pulsanti che è sono esteso bordi. (Esegue l'override [CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|  
|[CMFCMenuBar::IsHighlightDisabledItems](#ishighlightdisableditems)|Indica se gli elementi disabilitati vengono evidenziati.|  
|[CMFCMenuBar::IsMenuShadows](#ismenushadows)|Indica se le ombre vengono visualizzate nei menu a comparsa.|  
|[CMFCMenuBar::IsRecentlyUsedMenus](#isrecentlyusedmenus)|Indica se i comandi di menu utilizzati di recente vengono visualizzati nella barra dei menu.|  
|[CMFCMenuBar::IsShowAllCommands](#isshowallcommands)|Indica se i menu a comparsa Visualizza tutti i comandi.|  
|[CMFCMenuBar::IsShowAllCommandsDelay](#isshowallcommandsdelay)|Indica se i menu Visualizza tutti i comandi dopo un breve ritardo.|  
|[CMFCMenuBar::LoadState](#loadstate)|Carica lo stato del `CMFCMenuBar` oggetto dal Registro di sistema.|  
|[CMFCMenuBar::OnChangeHot](#onchangehot)|Chiamato dal framework quando un utente seleziona un pulsante sulla barra degli strumenti. (Esegue l'override [CMFCToolBar::OnChangeHot](../../mfc/reference/cmfctoolbar-class.md#onchangehot).)|  
|[CMFCMenuBar::OnDefaultMenuLoaded](#ondefaultmenuloaded)|Chiamato dal framework quando una finestra cornice viene caricato il menu predefinito dal file di risorse.|  
|[CMFCMenuBar::OnSendCommand](#onsendcommand)|Esegue l'override di `CMFCToolBar::OnSendCommand`.|  
|[CMFCMenuBar::OnSetDefaultButtonText](#onsetdefaultbuttontext)|Chiamato dal framework quando un menu è in modalità di personalizzazione e l'utente modifica il testo della voce di menu.|  
|[CMFCMenuBar::OnToolHitTest](#ontoolhittest)|Esegue l'override di `CMFCToolBar::OnToolHitTest`.|  
|[CMFCMenuBar::PreTranslateMessage](#pretranslatemessage)|Esegue l'override di `CMFCToolBar::PreTranslateMessage`.|  
|[CMFCMenuBar::RestoreOriginalstate](#restoreoriginalstate)|Chiamato dal framework quando un menu è in modalità di personalizzazione e l'utente seleziona **reimpostare** per una barra dei menu.|  
|[CMFCMenuBar::SaveState](#savestate)|Salva lo stato del `CMFCMenuBar` oggetto al Registro di sistema.|  
|[CMFCMenuBar::SetDefaultMenuResId](#setdefaultmenuresid)|Imposta il menu originale nel file di risorse.|  
|[CMFCMenuBar::SetForceDownArrows](#setforcedownarrows)||  
|[CMFCMenuBar::SetMaximizeMode](#setmaximizemode)|Chiamato dal framework quando una finestra figlio MDI viene modificata la modalità di visualizzazione. Se la finestra figlio MDI viene ingrandita appena o non è stata ingrandita, questo metodo aggiorna la barra dei menu.|  
|[CMFCMenuBar::SetMenuButtonRTC](#setmenubuttonrtc)|Imposta le informazioni sulla classe di runtime che viene generati quando l'utente crea in modo dinamico i pulsanti di menu.|  
|[CMFCMenuBar::SetMenuFont](#setmenufont)|Imposta il tipo di carattere per tutti i menu nell'applicazione.|  
|[CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus)|Specifica se una barra dei menu Visualizza i comandi di menu utilizzati di recente.|  
|[CMFCMenuBar::SetShowAllCommands](#setshowallcommands)|Specifica se la barra dei menu Visualizza tutti i comandi.|  
  
## <a name="remarks"></a>Note  
 La `CMFCMenuBar` classe è una barra dei menu che implementa la funzionalità di ancoraggio. Anche se non può essere chiusa, viene sempre visualizzato assomiglia a una barra degli strumenti.  
  
 `CMFCMenuBar`supporta l'opzione di visualizzazione di oggetti di elementi usati di recente dal menu. Se questa opzione è abilitata, il `CMFCMenuBar` Visualizza solo un subset di comandi disponibili nella prima visualizzazione. Successivamente, i comandi usati di recente vengono visualizzati insieme il subset di comandi originale. Inoltre, l'utente può sempre espandere il menu per visualizzare tutti i comandi disponibili. Di conseguenza, ogni comando disponibile è configurato per visualizzare costantemente o per visualizzare solo se è stato recentemente selezionato.  
  
 Per utilizzare un `CMFCMenuBar` di oggetto, incorporarlo nell'oggetto finestra cornice. Durante l'elaborazione di `WM_CREATE` dei messaggi, chiamare `CMFCMenuBar::Create` o `CMFCMenuBar::CreateEx`. Indipendentemente dal fatto che creano una funzione utilizzata, passare un puntatore alla finestra cornice principale. Quindi attivare l'ancoraggio chiamando [cframewndex:: EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Ancorare questo menu chiamando [CFrameWndEx::DockPane](../../mfc/reference/cframewndex-class.md#dockpane).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCMenuBar` classe. Nell'esempio viene illustrato come impostare lo stile del riquadro, abilitare il pulsante di personalizzare, attiva una finestra della Guida, abilitare shadows nei menu a comparsa e aggiornare la barra dei menu. Questo frammento di codice fa parte di [esempio dimostrativo di inserimento/espulsione](../../visual-cpp-samples.md).  
  
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
  
##  <a name="adjustlocations"></a>CMFCMenuBar::AdjustLocations  
 Regola le posizioni delle voci di menu nella barra dei menu.  
  
```  
virtual void AdjustLocations();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="allowchangetextlabels"></a>CMFCMenuBar::AllowChangeTextLabels  
 Determina se le etichette di testo possono sotto le immagini della barra dei menu.  
  
```  
virtual BOOL AllowChangeTextLabels() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se l'utente può scegliere di visualizzare le etichette di testo sotto le immagini.  
  
### <a name="remarks"></a>Note  
  
##  <a name="allowshowonpanemenu"></a>CMFCMenuBar::AllowShowOnPaneMenu  

  
```  
virtual BOOL AllowShowOnPaneMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="calcfixedlayout"></a>CMFCMenuBar::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bStretch`  
 [in] `bHorz`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="calclayout"></a>CMFCMenuBar::CalcLayout  

  
```  
virtual CSize CalcLayout(
    DWORD dwMode,  
    int nLength = -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwMode`  
 [in] `nLength`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="calcmaxbuttonheight"></a>CMFCMenuBar::CalcMaxButtonHeight  

  
```  
virtual int CalcMaxButtonHeight();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="canbeclosed"></a>CMFCMenuBar::CanBeClosed  

  
```  
virtual BOOL CanBeClosed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="canberestored"></a>CMFCMenuBar::CanBeRestored  

  
```  
virtual BOOL CanBeRestored() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>CMFCMenuBar::Create  
 Crea un controllo menu e la collega a un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,  
    UINT nID = AFX_IDW_MENUBAR);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 Puntatore alla finestra padre per il nuovo `CMFCMenuBar` oggetto.  
  
 [in] `dwStyle`  
 Lo stile della barra dei menu nuovo.  
  
 [in] `nID`  
 L'ID per la finestra figlio della barra dei menu.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Dopo aver creato un `CMFCMenuBar` dell'oggetto, è necessario chiamare `Create`. Questo metodo crea il `CMFCMenuBar` controllare e lo collega al `CMFCMenuBar` oggetto.  
  
 Per ulteriori informazioni sugli stili della barra degli strumenti, vedere [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).  
  
##  <a name="createex"></a>CMFCMenuBar::CreateEx  
 Crea un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto con stili estesi specificati.  
  
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
 [in] `pParentWnd`  
 Puntatore alla finestra padre del nuovo `CMFCMenuBar` oggetto.  
  
 [in] `dwCtrlStyle`  
 Stili aggiuntivi per la nuova barra dei menu.  
  
 [in] `dwStyle`  
 Lo stile principale della barra dei menu nuovo.  
  
 [in] `rcBorders`  
 Oggetto `CRect` parametro che specifica le dimensioni per i bordi del `CMFCMenuBar` oggetto.  
  
 [in] `nID`  
 L'ID per la finestra figlio della barra dei menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È consigliabile utilizzare questa funzione anziché [CMFCMenuBar::Create](#create) quando si desidera specificare gli stili oltre lo stile della barra degli strumenti. Alcuni stili aggiuntivi utilizzati di frequente sono `TBSTYLE_TRANSPARENT` e `CBRS_TOP`.  
  
 Per gli elenchi di stili aggiuntivi, vedere [controllo barra degli strumenti e stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb760439), [stili del controllo comune](http://msdn.microsoft.com/library/windows/desktop/bb775498), e [stili finestra comuni](http://msdn.microsoft.com/library/windows/desktop/ms632600).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `CreateEx` metodo la `CMFCMenuBar` classe. Questo frammento di codice fa parte di [esempio dimostrativo di inserimento/espulsione](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#2](../../mfc/reference/codesnippet/cpp/cmfcmenubar-class_3.cpp)]  
  
##  <a name="createfrommenu"></a>CMFCMenuBar::CreateFromMenu  
 Inizializza un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto. I modelli di questo metodo il `CMFCMenuBar` oggetto dopo un `HMENU` parametro.  
  
```  
virtual void CreateFromMenu(
    HMENU hMenu,  
    BOOL bDefaultMenu = FALSE,  
    BOOL bForceUpdate = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenu`  
 Handle per una risorsa di menu. `CreateFromMenu`Usa questa risorsa come modello per il `CMFCMenuBar`.  
  
 [in] `bDefaultMenu`  
 Valore booleano che indica se il nuovo menu è il menu predefinito.  
  
 [in] `bForceUpdate`  
 Valore booleano che indica se questo metodo impone un aggiornamento del menu.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo se si desidera un controllo menu hanno le stesse voci di menu di una risorsa di menu. Il metodo viene chiamato dopo aver chiamato uno [CMFCMenuBar::Create](#create) o [CMFCMenuBar::CreateEx](#createex).  
  
##  <a name="enablehelpcombobox"></a>CMFCMenuBar::EnableHelpCombobox  
 Consente un **Guida** casella combinata che si trova sul lato destro della barra dei menu.  
  
```  
void EnableHelpCombobox(
    UINT uiID,  
    LPCTSTR lpszPrompt = NULL,  
    int nComboBoxWidth = 150);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 L'ID di comando per il pulsante del **Guida** casella combinata.  
  
 [in] `lpszPrompt`  
 Stringa che contiene il testo visualizzato dal framework nella casella combinata se è vuoto e non è attiva. Ad esempio, "Immettere qui il testo".  
  
 [in] `nComboBoxWidth`  
 La larghezza del pulsante per la casella combinata, in pixel.  
  
### <a name="remarks"></a>Note  
 Il **Guida** casella combinata è simile al **Guida** casella combinata nella barra dei menu di [!INCLUDE[ofprword](../../mfc/reference/includes/ofprword_md.md)].  
  
 Quando si chiama questo metodo con `uiID` impostato su 0, questo metodo nasconde la casella combinata. In caso contrario, questo metodo visualizza automaticamente la casella combinata sul lato destro della barra dei menu. Dopo aver chiamato questo metodo, chiamare [CMFCMenuBar::GetHelpCombobox](#gethelpcombobox) per ottenere un puntatore all'oggetto inserito [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) oggetto.  
  
##  <a name="enablemenushadows"></a>CMFCMenuBar::EnableMenuShadows  
 Abilita shadows nei menu a comparsa.  
  
```  
static void EnableMenuShadows(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Un parametro booleano che indica se le ombre devono essere abilitate per i menu a comparsa.  
  
### <a name="remarks"></a>Note  
 L'algoritmo utilizzato da questo metodo è complesso e può ridurre le prestazioni dell'applicazione su sistemi più lenti.  
  
##  <a name="getavailableexpandsize"></a>CMFCMenuBar::GetAvailableExpandSize  

  
```  
virtual int GetAvailableExpandSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcolumnwidth"></a>CMFCMenuBar::GetColumnWidth  

  
```  
virtual int GetColumnWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdefaultmenu"></a>CMFCMenuBar::GetDefaultMenu  
 Recupera un handle per il menu originale. Il framework carica menu originale dal file di risorse.  
  
```  
HMENU GetDefaultMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per una risorsa di menu.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione consente di personalizzare un menu, è possibile utilizzare questo metodo per recuperare un handle per il menu originale.  
  
##  <a name="getdefaultmenuresid"></a>CMFCMenuBar::GetDefaultMenuResId  
 Recupera l'identificatore di risorsa per il menu predefinito.  
  
```  
UINT GetDefaultMenuResId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore di risorsa di menu.  
  
### <a name="remarks"></a>Note  
 Il framework carica il menu predefinito per il `CMFCMenuBar` oggetto dal file di risorse.  
  
##  <a name="getfloatpopupdirection"></a>CMFCMenuBar::GetFloatPopupDirection  

  
```  
int GetFloatPopupDirection(CMFCToolBarMenuButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getforcedownarrows"></a>CMFCMenuBar::GetForceDownArrows  

  
```  
BOOL GetForceDownArrows();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="gethelpcombobox"></a>CMFCMenuBar::GetHelpCombobox  
 Restituisce un puntatore al **Guida** casella combinata.  
  
```  
CMFCToolBarComboBoxButton* GetHelpCombobox();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al **Guida** casella combinata. `NULL`Se il **Guida** casella combinata è nascosta o non è abilitata.  
  
### <a name="remarks"></a>Note  
 Il **Guida** casella combinata si trova sul lato destro della barra dei menu. Chiamare il metodo [CMFCMenuBar::EnableHelpCombobox](#enablehelpcombobox) per abilitare questa casella combinata.  
  
##  <a name="gethmenu"></a>CMFCMenuBar::GetHMenu  
 Recupera l'handle per il menu collegato il [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto.  
  
```  
HMENU GetHMenu() const;  
```  
  
##  <a name="getmenufont"></a>CMFCMenuBar::GetMenuFont  
 Recupera il carattere corrente del menu.  
  
```  
static const CFont& GetMenuFont(BOOL bHorz = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bHorz`  
 Un parametro booleano che specifica se restituire il tipo di carattere orizzontale o verticale. `TRUE`indica il tipo di carattere orizzontale.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CFont](../../mfc/reference/cfont-class.md) parametro che contiene il carattere di barra di menu corrente.  
  
### <a name="remarks"></a>Note  
 Il tipo di carattere restituito è un parametro globale per l'applicazione. Due tipi di carattere globale vengono mantenute per tutti i `CMFCMenuBar` oggetti. Questi tipi di carattere separati vengono utilizzati per le barre dei menu orizzontali e verticali.  
  
##  <a name="getmenuitem"></a>CMFCMenuBar::GetMenuItem  
 Recupera un [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto su una barra dei menu in base all'indice di elemento.  
  
```  
CMFCToolBarButton* GetMenuItem(int iItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iItem`  
 Indice della voce di menu da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `CMFCToolBarButton` oggetto che corrisponde all'indice specificato dalla `iItem`. `NULL`Se l'indice non è valido.  
  
##  <a name="getrowheight"></a>CMFCMenuBar::GetRowHeight  

  
```  
virtual int GetRowHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getsystembutton"></a>CMFCMenuBar::GetSystemButton  

  
```  
CMFCToolBarMenuButtonsButton* GetSystemButton(
    UINT uiBtn,  
    BOOL bByCommand = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiBtn`  
 [in] `bByCommand`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getsystembuttonscount"></a>CMFCMenuBar::GetSystemButtonsCount  

  
```  
int GetSystemButtonsCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getsystemmenu"></a>CMFCMenuBar::GetSystemMenu  

  
```  
CMFCToolBarSystemMenuButton* GetSystemMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="highlightdisableditems"></a>CMFCMenuBar::HighlightDisabledItems  
 Controlla se il framework evidenzia gli elementi di menu disabilitata.  
  
```  
static void HighlightDisabledItems(BOOL bHighlight = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bHighlight`  
 Un parametro booleano che indica se il framework evidenzia gli elementi di menu non disponibili.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework non evidenzia le voci di menu non disponibile quando l'utente posiziona il puntatore del mouse su di essi.  
  
##  <a name="isbuttonextrasizeavailable"></a>CMFCMenuBar::IsButtonExtraSizeAvailable  

  
```  
virtual BOOL IsButtonExtraSizeAvailable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ishighlightdisableditems"></a>CMFCMenuBar::IsHighlightDisabledItems  
 Indica se il framework evidenzia gli elementi di menu non disponibili.  
  
```  
static BOOL IsHighlightDisabledItems();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se le voci di menu disponibili sono evidenziate; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework non evidenzia le voci di menu non disponibile quando l'utente posiziona il puntatore del mouse su di essi. Utilizzare il [CMFCMenuBar::HighlightDisabledItems](#highlightdisableditems) metodo per abilitare questa funzionalità.  
  
##  <a name="ismenushadows"></a>CMFCMenuBar::IsMenuShadows  
 Indica se il framework di traccia ombreggiature nei menu a comparsa.  
  
```  
static BOOL IsMenuShadows();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il framework di traccia ombreggiature di menu; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CMFCMenuBar::EnableMenuShadows](#enablemenushadows) metodo per abilitare o disabilitare questa funzionalità.  
  
##  <a name="isrecentlyusedmenus"></a>CMFCMenuBar::IsRecentlyUsedMenus  
 Indica se i comandi di menu utilizzati di recente vengono visualizzati nella barra dei menu.  
  
```  
static BOOL IsRecentlyUsedMenus();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CMFCMenuBar` oggetto Mostra usato i comandi di menu; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare la funzione [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus) per controllare se la barra dei menu Mostra recentemente utilizzato i comandi di menu.  
  
##  <a name="isshowallcommands"></a>CMFCMenuBar::IsShowAllCommands  
 Indica se i menu Visualizza tutti i comandi.  
  
```  
static BOOL IsShowAllCommands();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CMFCMenuBar` Visualizza tutti i comandi; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Oggetto `CMFCMenuBar` oggetto può essere configurato per mostrare tutti i comandi o visualizzare solo un subset di comandi. Per ulteriori informazioni su questa funzionalità, vedere [CMFCMenuBar classe](../../mfc/reference/cmfcmenubar-class.md).  
  
 `IsShowAllCommands`sarà possibile conoscere come questa funzionalità viene configurata per il `CMFCMenuBar` oggetto. Per controllare quali comandi di menu vengono visualizzati, utilizzare i metodi [CMFCMenuBar::SetShowAllCommands](#setshowallcommands) e [CMFCMenuBar::SetRecentlyUsedMenus](#setrecentlyusedmenus).  
  
##  <a name="isshowallcommandsdelay"></a>CMFCMenuBar::IsShowAllCommandsDelay  
 Indica se il [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto consente di visualizzare tutti i comandi dopo un breve ritardo.  
  
```  
static BOOL IsShowAllCommandsDelay();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra dei menu consente di visualizzare menu completi dopo un breve ritardo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando si configura una barra dei menu per gli elementi di visualizzazione utilizzati di recente, la barra dei menu Visualizza il menu completo in uno dei due modi:  
  
-   Visualizzare il menu completo dopo un ritardo programmato da quando l'utente posiziona il cursore sopra la freccia nella parte inferiore del menu.  
  
-   Visualizzare il menu completo dopo che l'utente fa clic sulla freccia nella parte inferiore del menu di scelta.  
  
 Per impostazione predefinita, tutti `CMFCMenuBar` gli oggetti utilizzano l'opzione per visualizzare il menu completo dopo un breve ritardo. Questa opzione non può essere modificata a livello di codice nel `CMFCMenuBar` classe. Tuttavia, un utente può modificare il comportamento durante la personalizzazione della barra degli strumenti utilizzando il **Personalizza** la finestra di dialogo...  
  
##  <a name="loadstate"></a>CMFCMenuBar::LoadState  
 Carica lo stato della barra dei menu dal Registro di sistema Windows.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT)-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Stringa che contiene il percorso di una chiave del Registro di sistema di Windows.  
  
 [in] `nIndex`  
 L'ID di controllo per la barra dei menu.  
  
 [in] `uiID`  
 Un valore riservato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CMFCMenuBar::SaveState](#savestate) per salvare lo stato della barra dei menu al Registro di sistema. Le informazioni salvate includono le voci di menu, lo stato di ancoraggio e la posizione della barra dei menu.  
  
 Nella maggior parte dei casi l'applicazione non chiama `LoadState`. Il framework chiama questo metodo quando si inizializza l'area di lavoro.  
  
##  <a name="onchangehot"></a>CMFCMenuBar::OnChangeHot  

  
```  
virtual void OnChangeHot(int iHot);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iHot`  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondefaultmenuloaded"></a>CMFCMenuBar::OnDefaultMenuLoaded  
 Il framework chiama questo metodo durante il caricamento della risorsa di menu dal file di risorse.  
  
```  
virtual void OnDefaultMenuLoaded(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenu`  
 Collegata l'handle per il menu di `CMFCMenuBar` oggetto.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire codice personalizzato dopo che il framework carica una risorsa di menu dal file di risorse.  
  
##  <a name="onsendcommand"></a>CMFCMenuBar::OnSendCommand  

  
```  
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onsetdefaultbuttontext"></a>CMFCMenuBar::OnSetDefaultButtonText  
 Il framework chiama questo metodo quando l'utente modifica il testo di un elemento nella barra dei menu.  
  
```  
virtual BOOL OnSetDefaultButtonText(CMFCToolBarButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Un puntatore al [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto che si desidera personalizzare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il framework applica le modifiche dell'utente alla barra dei menu; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita per questo metodo viene modificato il testo del pulsante per il testo fornito dall'utente.  
  
##  <a name="ontoolhittest"></a>CMFCMenuBar::OnToolHitTest  

  
```  
virtual INT_PTR OnToolHitTest(
    CPoint point,  
    TOOLINFO* pTI) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 [in] `pTI`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="pretranslatemessage"></a>CMFCMenuBar::PreTranslateMessage  

  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMsg`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="restoreoriginalstate"></a>CMFCMenuBar::RestoreOriginalstate  
 Chiamato dal framework quando l'utente seleziona **reimpostare** dal **Personalizza** la finestra di dialogo.  
  
```  
virtual BOOL RestoreOriginalstate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato quando l'utente seleziona **reimpostare** dal menu di personalizzazione. Manualmente, è possibile chiamare questo metodo per reimpostare a livello di codice lo stato della barra dei menu. Questo metodo carica lo stato originale dal file di risorse.  
  
 Eseguire l'override di questo metodo se si desidera eseguire un'elaborazione quando l'utente seleziona il **reimpostare** opzione.  
  
##  <a name="savestate"></a>CMFCMenuBar::SaveState  
 Salva lo stato del [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) oggetto nel Registro di sistema di Windows.  
  
```  
virtual BOOL SaveState (
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT)-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Stringa che contiene il percorso di una chiave del Registro di sistema di Windows.  
  
 [in] `nIndex`  
 L'ID di controllo per la barra dei menu.  
  
 [in] `uiID`  
 Un valore riservato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. in caso contrario `FALSE`;  
  
### <a name="remarks"></a>Note  
 In genere, l'applicazione non chiama `SaveState`. Il framework chiama questo metodo quando viene serializzato l'area di lavoro. Per ulteriori informazioni, vedere [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#savestate).  
  
 Le informazioni salvate includono le voci di menu, lo stato di ancoraggio e la posizione della barra dei menu.  
  
##  <a name="setdefaultmenuresid"></a>CMFCMenuBar::SetDefaultMenuResId  
 Imposta il menu predefinito per un [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md) basato sull'ID di risorsa.  
  
```  
void SetDefaultMenuResId(UINT uiResId);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiResId`  
 L'ID di risorsa per il nuovo menu predefinito.  
  
### <a name="remarks"></a>Note  
 Il [CMFCMenuBar::RestoreOriginalstate](#restoreoriginalstate) metodo ripristina il menu predefinito dal file di risorse.  
  
 Utilizzare il [CMFCMenuBar::GetDefaultMenuResId](#getdefaultmenuresid) metodo per recuperare il menu predefinito senza eseguire il ripristino.  
  
##  <a name="setforcedownarrows"></a>CMFCMenuBar::SetForceDownArrows  

  
```  
void SetForceDownArrows(BOOL bValue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bValue`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setmaximizemode"></a>CMFCMenuBar::SetMaximizeMode  
 Il framework chiama questo metodo quando una MDI modifica la modalità di visualizzazione e la barra dei menu deve essere aggiornato.  
  
```  
void SetMaximizeMode(
    BOOL bMax,  
    CWnd* pWnd = NULL,  
    BOOL bRecalcLayout = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMax`  
 Valore booleano che specifica la modalità. Per altre informazioni, vedere la sezione Osservazioni.  
  
 [in] `pWnd`  
 Puntatore alla finestra figlio MDI in fase di modifica.  
  
 [in] `bRecalcLayout`  
 Valore booleano che specifica se il layout della barra dei menu deve essere ricalcolato immediatamente.  
  
### <a name="remarks"></a>Note  
 Quando una finestra figlio MDI è ingrandita, una barra dei menu collegata alla finestra cornice principale MDI consente di visualizzare il menu di sistema e **Riduci a icona**, **Ingrandisci** e **Chiudi** pulsanti. Se `bMax` è `TRUE` e `pWnd` non `NULL`, la finestra figlio MDI viene ottimizzata e barra dei menu deve includere i controlli aggiuntivi. In caso contrario, la barra dei menu al relativo stato normale.  
  
##  <a name="setmenubuttonrtc"></a>CMFCMenuBar::SetMenuButtonRTC  
 Imposta le informazioni sulla classe di runtime utilizzato dal framework quando l'utente crea pulsanti di menu.  
  
```  
void SetMenuButtonRTC(CRuntimeClass* pMenuButtonRTC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuButtonRTC`  
 Il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) informazioni per una classe derivano dal [classe CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md).  
  
### <a name="remarks"></a>Note  
 Quando un utente aggiunge nuovi pulsanti alla barra dei menu, il framework crea dinamicamente i pulsanti. Per impostazione predefinita, viene creato `CMFCMenuButton` oggetti. Eseguire l'override di questo metodo per modificare il tipo di pulsante oggetti che il framework crea.  
  
##  <a name="setmenufont"></a>CMFCMenuBar::SetMenuFont  
 Imposta il tipo di carattere per tutte le barre dei menu dell'applicazione.  
  
```  
static BOOL SetMenuFont(
    LPLOGFONT lpLogFont,  
    BOOL bHorz = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpLogFont`  
 Un puntatore a un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/bb773327) struttura che definisce il tipo di carattere da impostare.  
  
 [in] `bHorz`  
 TRUE se si desidera il `lpLogFont` parametro da utilizzare per il tipo di carattere verticale, FALSE se si desidera che venga utilizzata per tipo di carattere orizzontale.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Vengono utilizzati due tipi di carattere per tutti i `CMFCMenuBar` oggetti. Questi tipi di carattere separati vengono utilizzati per le barre dei menu orizzontali e verticali.  
  
 Le impostazioni del carattere sono variabili globali e riguardano tutte `CMFCMenuBar` oggetti.  
  
##  <a name="setrecentlyusedmenus"></a>CMFCMenuBar::SetRecentlyUsedMenus  
 Controlla se una barra dei menu viene visualizzato recentemente utilizzato i comandi di menu.  
  
```  
static void SetRecentlyUsedMenus (BOOL bOn = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bOn`  
 Valore booleano che determina se vengono visualizzati i comandi di menu utilizzati di recente.  
  
##  <a name="setshowallcommands"></a>CMFCMenuBar::SetShowAllCommands  
 Controlla se un menu Visualizza tutti i comandi disponibili.  
  
```  
static void SetShowAllCommands(BOOL bShowAllCommands = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShowAllCommands`  
 Un parametro booleano che specifica se il menu di scelta rapida vengono visualizzati tutti i comandi di menu.  
  
### <a name="remarks"></a>Note  
 Se tutti i comandi di menu non viene visualizzata un menu, nasconde i comandi che vengono utilizzati raramente. Per ulteriori informazioni sulla visualizzazione dei comandi di menu, vedere [CMFCMenuBar classe](../../mfc/reference/cmfcmenubar-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
