---
title: Classe CFrameWndEx | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFrameWndEx
dev_langs:
- C++
helpviewer_keywords:
- CFrameWndEx class
ms.assetid: 5830aca8-4a21-4f31-91f1-dd5477ffcc8d
caps.latest.revision: 39
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: b2106c3067a0164395eddab0e8b156728697d5bb
ms.lasthandoff: 02/24/2017

---
# <a name="cframewndex-class"></a>Classe CFrameWndEx
Implementa la funzionalità di un'interfaccia a documento singolo (SDI) di Windows sovrapposta o di una finestra cornice popup e fornisce i membri per gestire la finestra. Estende il [CFrameWnd](../../mfc/reference/cframewnd-class.md) (classe).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFrameWndEx : public CFrameWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWndEx::ActiveItemRecalcLayout](#activeitemrecalclayout)|Consente di modificare il layout dell'elemento del client OLE e dell'area client del frame.|  
|`CFrameWndEx::AddDockSite`|Questo metodo non viene utilizzato.|  
|[CFrameWndEx::AddPane](#addpane)|Registra una barra di controllo con il gestore di ancoraggio.|  
|[CFrameWndEx::AdjustDockingLayout](#adjustdockinglayout)|Ricalcola il layout di tutti i riquadri ancorati alla finestra cornice.|  
|[CFrameWndEx::DelayUpdateFrameMenu](#delayupdateframemenu)|Imposta il menu di frame e quindi lo aggiorna quando l'elaborazione del comando è inattivo.|  
|[CFrameWndEx::DockPane](#dockpane)|Il riquadro specificato viene ancorato alla finestra cornice.|  
|[CFrameWndEx::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|  
|[CFrameWndEx::EnableAutoHidePanes](#enableautohidepanes)|Attiva la modalità Nascondi automaticamente per i riquadri quando essi sono ancorate ai lati specificati della finestra cornice principale.|  
|[CFrameWndEx::EnableDocking](#enabledocking)|Consente l'ancoraggio dei riquadri che appartengono alla finestra cornice.|  
|[CFrameWndEx::EnableFullScreenMainMenu](#enablefullscreenmainmenu)|Mostra o nasconde il menu principale in modalità schermo intero.|  
|[CFrameWndEx::EnableFullScreenMode](#enablefullscreenmode)|Attiva la modalità schermo intero per la finestra cornice.|  
|[CFrameWndEx::EnableLoadDockState](#enableloaddockstate)|Abilita o disabilita il caricamento dello stato di ancoraggio.|  
|[CFrameWndEx::EnablePaneMenu](#enablepanemenu)|Abilita o disabilita la gestione automatica dei menu del riquadro.|  
|[CFrameWndEx::GetActivePopup](#getactivepopup)|Restituisce un puntatore al menu di scelta rapida attualmente visualizzato.|  
|[CFrameWndEx::GetDefaultResId](#getdefaultresid)|Restituisce l'ID di risorsa specificato quando il framework caricata la finestra cornice.|  
|[CFrameWndEx::GetDockingManager](#getdockingmanager)|Recupera il [CDockingManager classe](../../mfc/reference/cdockingmanager-class.md) oggetto per la finestra cornice.|  
|[CFrameWndEx::GetMenuBar](#getmenubar)|Restituisce un puntatore all'oggetto della barra dei menu collegato alla finestra cornice.|  
|[CFrameWndEx::GetPane](#getpane)|Restituisce un puntatore al riquadro con l'ID specificato.|  
|[CFrameWndEx::GetRibbonBar](#getribbonbar)|Recupera il controllo barra multifunzione per il frame.|  
|[CFrameWndEx::GetTearOffBars](#gettearoffbars)|Restituisce un elenco di oggetti del riquadro che si trovano in uno stato a comparsa.|  
|[CFrameWndEx::GetToolbarButtonToolTipText](#gettoolbarbuttontooltiptext)|Chiamato dal framework quando l'applicazione viene visualizzata la descrizione comando per un pulsante della barra degli strumenti.|  
|[CFrameWndEx::InsertPane](#insertpane)|Registra un riquadro con il gestore di ancoraggio.|  
|[CFrameWndEx::IsFullScreen](#isfullscreen)|Determina se la finestra cornice è in modalità schermo intero.|  
|[CFrameWndEx::IsMenuBarAvailable](#ismenubaravailable)|Determina se il puntatore all'oggetto barra dei menu è valido.|  
|[CFrameWndEx::IsPointNearDockSite](#ispointneardocksite)|Indica se il punto si trova in un'area di allineamento.|  
|[CFrameWndEx::IsPrintPreview](#isprintpreview)|Indica se la finestra cornice è in modalità anteprima di stampa.|  
|[CFrameWndEx::LoadFrame](#loadframe)|Questo metodo viene chiamato dopo la costruzione per creare la finestra cornice e caricare le proprie risorse.|  
|[CFrameWndEx::NegotiateBorderSpace](#negotiateborderspace)|Negoziazione di bordo client OLE implementa.|  
|[CFrameWndEx::OnActivate](#onactivate)|Il framework chiama questo metodo quando l'input dell'utente viene trasferito verso o dal frame.|  
|[CFrameWndEx::OnActivateApp](#onactivateapp)|Chiamato dal framework quando l'applicazione sia selezionata o deselezionata.|  
|[CFrameWndEx::OnChangeVisualManager](#onchangevisualmanager)|Chiamato dal framework quando una modifica al frame richiede una modifica al gestore visualizzazione.|  
|[CFrameWndEx::OnClose](#onclose)|Il framework chiama questo metodo per chiudere il frame.|  
|[CFrameWndEx::OnCloseDockingPane](#onclosedockingpane)|Chiamato dal framework quando l'utente sceglie il **Chiudi** pulsante in un riquadro ancorato.|  
|[CFrameWndEx::OnCloseMiniFrame](#oncloseminiframe)|Chiamato dal framework quando l'utente sceglie il **Chiudi** pulsante in una finestra cornice mini a virgola mobile.|  
|[CFrameWndEx::OnClosePopupMenu](#onclosepopupmenu)|Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.|  
|[CFrameWndEx::OnCmdMsg](#oncmdmsg)|Il comando Invia messaggi.|  
|[CFrameWndEx::OnContextHelp](#oncontexthelp)|Chiamato dal framework per visualizzare contesto correlato della Guida in linea.|  
|[CFrameWndEx::OnCreate](#oncreate)|Chiamato dal framework dopo la creazione del frame.|  
|[CFrameWndEx::OnDestroy](#ondestroy)|Chiamato dal framework quando il frame viene eliminato.|  
|[CFrameWndEx::OnDrawMenuImage](#ondrawmenuimage)|Chiamato dal framework quando l'applicazione disegna l'immagine associata a una voce di menu.|  
|[CFrameWndEx::OnDrawMenuLogo](#ondrawmenulogo)|Chiamato dal framework quando un `CMFCPopupMenu` oggetto processi un [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) messaggio.|  
|[CFrameWndEx::OnDWMCompositionChanged](#ondwmcompositionchanged)|Chiamato dal framework quando la composizione Manager finestra Desktop (DWM) è stata abilitata o disabilitata.|  
|[CFrameWndEx::OnExitSizeMove](#onexitsizemove)|Chiamato dal framework quando il frame si sposta o si ridimensiona.|  
|[CFrameWndEx::OnGetMinMaxInfo](#ongetminmaxinfo)|Chiamato dal framework quando il frame viene ridimensionato per impostare i limiti di dimensioni di finestra.|  
|[CFrameWndEx::OnIdleUpdateCmdUI](#onidleupdatecmdui)|Chiamato dal framework per aggiornare la visualizzazione di frame durante l'elaborazione del comando è inattivo.|  
|[CFrameWndEx::OnLButtonDown](#onlbuttondown)|Il framework chiama questo metodo quando l'utente preme il pulsante sinistro del mouse.|  
|[CFrameWndEx::OnLButtonUp](#onlbuttonup)|Il framework chiama questo metodo quando l'utente rilascia il pulsante sinistro del mouse.|  
|[CFrameWndEx::OnMenuButtonToolHitTest](#onmenubuttontoolhittest)|Chiamato dal framework quando un `CMFCToolBarButton` oggetto processi un `WM_NCHITTEST` messaggio.|  
|[CFrameWndEx::OnMenuChar](#onmenuchar)|Chiamato dal framework quando viene visualizzato un menu e l'utente preme un tasto non corrispondente a un comando.|  
|[CFrameWndEx::OnMouseMove](#onmousemove)|Il framework chiama questo metodo quando si sposta il puntatore del mouse.|  
|[CFrameWndEx::OnMoveMiniFrame](#onmoveminiframe)|Chiamato dal framework quando si sposta una finestra del riquadro.|  
|[CFrameWndEx::OnNcActivate](#onncactivate)|Chiamato dal framework quando l'area non client del frame deve essere ridisegnato per indicare una modifica nello stato attivo.|  
|[CFrameWndEx::OnNcCalcSize](#onnccalcsize)|Chiamato dal framework quando è necessario calcolare le dimensioni e la posizione dell'area client.|  
|[CFrameWndEx::OnNcHitTest](#onnchittest)|Chiamato dal framework quando il puntatore viene spostato o quando viene premuto o rilasciato un pulsante del mouse.|  
|[CFrameWndEx::OnNcMouseMove](#onncmousemove)|Chiamato dal framework quando il puntatore viene spostato in un'area non client.|  
|[CFrameWndEx::OnNcPaint](#onncpaint)|Chiamato dal framework quando l'area non client deve essere disegnato.|  
|[CFrameWndEx::OnPaneCheck](#onpanecheck)|Chiamato dal framework per controllare la visibilità di un riquadro.|  
|[CFrameWndEx::OnPostPreviewFrame](#onpostpreviewframe)|Chiamato dal framework quando l'utente ha modificato la modalità di anteprima di stampa.|  
|[CFrameWndEx::OnPowerBroadcast](#onpowerbroadcast)|Chiamato dal framework quando si verifica un evento di risparmio energia.|  
|[CFrameWndEx::OnSetMenu](#onsetmenu)|Chiamato dal framework per sostituire il menu della finestra cornice.|  
|[CFrameWndEx::OnSetPreviewMode](#onsetpreviewmode)|Chiamato dal framework per impostare la modalità di anteprima di stampa per il frame.|  
|[CFrameWndEx::OnSetText](#onsettext)|Chiamato dal framework per impostare il testo di una finestra.|  
|[CFrameWndEx::OnShowCustomizePane](#onshowcustomizepane)|Chiamato dal framework quando un rapido Personalizza riquadro è abilitato.|  
|[CFrameWndEx::OnShowPanes](#onshowpanes)|Chiamato dal framework per mostrare o nascondere i riquadri.|  
|[CFrameWndEx::OnShowPopupMenu](#onshowpopupmenu)|Chiamato dal framework quando è abilitato un menu a comparsa.|  
|[CFrameWndEx::OnSize](#onsize)|Il framework chiama questo metodo dopo le modifiche delle dimensioni del frame.|  
|[CFrameWndEx::OnSizing](#onsizing)|Il framework chiama questo metodo quando l'utente ridimensiona il frame.|  
|[CFrameWndEx::OnSysColorChange](#onsyscolorchange)|Chiamato dal framework quando vengono modificati i colori di sistema.|  
|[CFrameWndEx::OnTearOffMenu](#ontearoffmenu)|Chiamato dal framework quando viene attivato un menu che dispone di una barra a comparsa.|  
|[CFrameWndEx::OnToolbarContextMenu](#ontoolbarcontextmenu)|Chiamato dal framework per compilare un menu di scelta rapida della barra degli strumenti.|  
|[CFrameWndEx::OnToolbarCreateNew](#ontoolbarcreatenew)|Il framework chiama questo metodo per creare una nuova barra degli strumenti.|  
|[CFrameWndEx::OnToolbarDelete](#ontoolbardelete)|Chiamato dal framework quando viene eliminata una barra degli strumenti.|  
|[CFrameWndEx::OnUpdateFrameMenu](#onupdateframemenu)|Chiamato dal framework per impostare il menu di frame.|  
|[CFrameWndEx::OnUpdateFrameTitle](#onupdateframetitle)|Il framework chiama questo metodo per aggiornare la barra del titolo della finestra cornice.|  
|[CFrameWndEx::OnUpdatePaneMenu](#onupdatepanemenu)|Chiamato dal framework per aggiornare il menu del riquadro.|  
|[CFrameWndEx::OnWindowPosChanged](#onwindowposchanged)|Chiamato dal framework quando le dimensioni del fotogramma, posizione o l'ordine z è stato modificato a causa di una chiamata a un metodo di gestione della finestra.|  
|[CFrameWndEx::PaneFromPoint](#panefrompoint)|Restituisce il riquadro ancorato di tipo contenente il punto specificato.|  
|[CFrameWndEx::PreTranslateMessage](#pretranslatemessage)|Gestisce i messaggi di finestra specifica prima che vengano inviati.|  
|[CFrameWndEx::RecalcLayout](#recalclayout)|Consente di modificare il layout dei frame e le relative finestre figlio.|  
|[CFrameWndEx::RemovePaneFromDockManager](#removepanefromdockmanager)|Annulla la registrazione di un riquadro e lo rimuove dall'elenco interno nel gestore di ancoraggio.|  
|[CFrameWndEx::SetDockState](#setdockstate)|Ripristina il layout di ancoraggio per lo stato di ancoraggio archiviato nel Registro di sistema.|  
|[CFrameWndEx::SetPrintPreviewFrame](#setprintpreviewframe)|Imposta la finestra cornice di anteprima di stampa.|  
|[CFrameWndEx::SetupToolbarMenu](#setuptoolbarmenu)|Inserisce i comandi definiti dall'utente in un menu della barra degli strumenti.|  
|[CFrameWndEx::ShowFullScreen](#showfullscreen)|Attiva la cornice principale tra la modalità schermo intero e modalità normale.|  
|[CFrameWndEx::ShowPane](#showpane)|Mostra o nasconde il riquadro specificato.|  
|[CFrameWndEx::UpdateCaption](#updatecaption)|Chiamato dal framework per aggiornare il titolo della finestra cornice.|  
|[CFrameWndEx::WinHelp](#winhelp)|Richiama una il `WinHelp` applicazione o contesto correlati della Guida in linea.|  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come ereditare una classe dalla classe di `CFrameWndEx` (classe). L'esempio illustra le firme del metodo nella sottoclasse e come eseguire l'override di `OnShowPopupMenu` metodo. Questo frammento di codice fa parte di [esempio riempimento Word](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad n.&3;](../../mfc/reference/codesnippet/cpp/cframewndex-class_1.h)]  
[!code-cpp[NVC_MFC_WordPad n.&4;](../../mfc/reference/codesnippet/cpp/cframewndex-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CFrameWndEx](../../mfc/reference/cframewndex-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxframewndex.h  
  
##  <a name="a-nameactiveitemrecalclayouta--cframewndexactiveitemrecalclayout"></a><a name="activeitemrecalclayout"></a>CFrameWndEx::ActiveItemRecalcLayout  
 Consente di modificare il layout dell'elemento del client OLE e dell'area client del frame.  
  
```  
void ActiveItemRecalcLayout();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddpanea--cframewndexaddpane"></a><a name="addpane"></a>CFrameWndEx::AddPane  
 Registra una barra di controllo con il gestore di ancoraggio.  
  
```  
BOOL AddPane(
    CBasePane* pControlBar,  
    BOOL bTail=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 Un riquadro della barra di controllo per la registrazione.  
  
 [in] `bTail`  
 `TRUE`Se si desidera aggiungere il riquadro della barra di controllo alla fine dell'elenco; `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra di controllo è stata registrata. `FALSE` in caso contrario.  
  
##  <a name="a-nameadjustdockinglayouta--cframewndexadjustdockinglayout"></a><a name="adjustdockinglayout"></a>CFrameWndEx::AdjustDockingLayout  
 Ricalcola il layout di tutti i riquadri ancorati alla finestra cornice.  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hdwp`  
 Un handle a una struttura che contiene le posizioni di più finestre. .  
  
### <a name="remarks"></a>Note  
 La struttura hdwp inizializzata mediante la [BeginDeferWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms632672) metodo.  
  
##  <a name="a-namedelayupdateframemenua--cframewndexdelayupdateframemenu"></a><a name="delayupdateframemenu"></a>CFrameWndEx::DelayUpdateFrameMenu  
 Imposta il menu di frame e quindi lo aggiorna quando l'elaborazione del comando è inattivo.  
  
```  
virtual void DelayUpdateFrameMenu(HMENU hMenuAlt);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenuAlt`  
 Handle per un menu alternativo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedockpanea--cframewndexdockpane"></a><a name="dockpane"></a>CFrameWndEx::DockPane  
 Il riquadro specificato viene ancorato alla finestra cornice.  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID=0,  
    LPCRECT lpRect=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Puntatore alla barra di controllo per essere ancorato.  
  
 [in] `nDockBarID`  
 L'ID del lato della finestra cornice per ancorare a.  
  
 [in] `lpRect`  
 Un puntatore a una struttura Rect costante che specifica la posizione dello schermo e le dimensioni della finestra.  
  
### <a name="remarks"></a>Note  
 Il `nDockBarID` parametro può avere uno dei valori seguenti:  
  
-   AFX_IDW_DOCKBAR_TOP  
  
-   AFX_IDW_DOCKBAR_BOTTOM  
  
-   AFX_IDW_DOCKBAR_LEFT  
  
-   AFX_IDW_DOCKBAR_RIGHT  
  
##  <a name="a-namedockpaneleftofa--cframewndexdockpaneleftof"></a><a name="dockpaneleftof"></a>CFrameWndEx::DockPaneLeftOf  
 Il riquadro specificato viene ancorato a sinistra di un altro riquadro.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBar,  
    CPane* pLeftOf);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Puntatore all'oggetto riquadro ancorato.  
  
 [in] `pLeftOf`  
 Nel riquadro a sinistra di cui si desidera ancorare il riquadro specificato da un puntatore `pBar`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se `pBar` è ancorato correttamente. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il metodo accetta specificato dalla barra degli strumenti di `pBar` parametro e il controllo viene ancorato è sul lato sinistro della barra degli strumenti specificata da `pLeftOf` parametro.  
  
##  <a name="a-nameenableautohidepanesa--cframewndexenableautohidepanes"></a><a name="enableautohidepanes"></a>CFrameWndEx::EnableAutoHidePanes  
 Abilita Nascondi automaticamente la modalità per il riquadro quando è ancorata al lato specificato della finestra cornice principale.  
  
```  
BOOL EnableAutoHidePanes(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwDockStyle`  
 Specifica il lato della finestra cornice principale per cui si desidera ancorare il riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se una barra riquadro correttamente viene ancorato al lato specificato dalla finestra cornice `dwDockStyle`, `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 `dwDockStyle`può avere uno dei valori seguenti:  
  
-   CBRS_ALIGN_TOP: consente la barra di controllo per essere ancorato alla parte superiore dell'area client di una finestra cornice.  
  
-   CBRS_ALIGN_BOTTOM: consente la barra di controllo per essere ancorato alla parte inferiore dell'area client di una finestra cornice.  
  
-   CBRS_ALIGN_LEFT: consente la barra di controllo ancorato a sinistra dell'area client di una finestra cornice.  
  
-   CBRS_ALIGN_RIGHT: consente la barra di controllo ancorato a destra dell'area client di una finestra cornice.  
  
##  <a name="a-nameenabledockinga--cframewndexenabledocking"></a><a name="enabledocking"></a>CFrameWndEx::EnableDocking  
 Consente l'ancoraggio dei riquadri della finestra cornice.  
  
```  
BOOL EnableDocking(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwDockStyle`  
 Specifica il lato della finestra cornice principale in cui la barra riquadro ancorato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se una barra riquadro può essere ancorato al lato specificato. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il `dwDockStyle` parametro può avere uno dei valori seguenti:  
  
-   CBRS_ALIGN_TOP  
  
-   CBRS_ALIGN_BOTTOM  
  
-   CBRS_ALIGN_LEFT  
  
-   CBRS_ALIGN_RIGHT  
  
##  <a name="a-nameenablefullscreenmainmenua--cframewndexenablefullscreenmainmenu"></a><a name="enablefullscreenmainmenu"></a>CFrameWndEx::EnableFullScreenMainMenu  
 Mostra o nasconde il menu principale in modalità schermo intero.  
  
```  
void EnableFullScreenMainMenu(BOOL bEnableMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnableMenu`  
 `TRUE`Per visualizzare il menu principale in modalità schermo intero, `FALSE` in caso contrario.  
  
##  <a name="a-nameenablefullscreenmodea--cframewndexenablefullscreenmode"></a><a name="enablefullscreenmode"></a>CFrameWndEx::EnableFullScreenMode  
 Attiva la modalità schermo intero per la finestra cornice.  
  
```  
void EnableFullScreenMode(UINT uiFullScreenCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiFullScreenCmd`  
 L'ID di comando che attiva e disattiva la modalità schermo intero.  
  
### <a name="remarks"></a>Note  
 In modalità schermo intero, tutte le barre di controllo ancorati, barre degli strumenti e menu sono nascosti e la visualizzazione attiva viene ridimensionata in modo da occupare a schermo intero.  
  
 Quando si attiva la modalità schermo intero, è necessario specificare un ID di comando che abilita o disabilita la modalità schermo intero. È possibile chiamare `EnableFullScreenMode` dalla cornice principale `OnCreate` (funzione). Quando una finestra cornice è si trova in una modalità a schermo intero, il framework crea una barra degli strumenti mobile con un pulsante con l'ID di comando specificato.  
  
 Se si desidera mantenere nel menu principale dello schermo, chiamare [CFrameWndEx::EnableFullScreenMainMenu](#enablefullscreenmainmenu).  
  
##  <a name="a-nameenableloaddockstatea--cframewndexenableloaddockstate"></a><a name="enableloaddockstate"></a>CFrameWndEx::EnableLoadDockState  
 Abilita o disabilita il caricamento dello stato di ancoraggio.  
  
```  
void EnableLoadDockState(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare il caricamento dello stato di ancoraggio, `FALSE` per disabilitare il caricamento dello stato di ancoraggio.  
  
##  <a name="a-nameenablepanemenua--cframewndexenablepanemenu"></a><a name="enablepanemenu"></a>CFrameWndEx::EnablePaneMenu  
 Abilita o disabilita la gestione automatica dei menu del riquadro.  
  
```  
void EnablePaneMenu(
    BOOL bEnable,  
    UINT uiCustomizeCmd,  
    const CString& strCustomizeLabel,  
    UINT uiViewToolbarsMenuEntryID,  
    BOOL bContextMenuShowsToolbarsOnly=FALSE,  
    BOOL bViewMenuShowsToolbarsOnly=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare la gestione automatica del controllo barra dei menu di scelta rapida; `FALSE` per disabilitare la gestione automatica del controllo barra dei menu di scelta rapida.  
  
 [in] `uiCustomizeCmd`  
 L'ID di comando di **Personalizza** voce di menu.  
  
 [in] `strCustomizeLabel`  
 L'etichetta da visualizzare per il **Personalizza** voce di menu  
  
 [in] `uiViewToolbarsMenuEntryID`  
 L'ID di una voce di menu della barra degli strumenti che consente di aprire il menu di scelta rapida della barra di controllo.  
  
 [in] `bContextMenuShowsToolbarsOnly`  
 Se `TRUE`, il controllo barra dei menu di scelta rapida viene visualizzato l'elenco delle barre degli strumenti solo. Se `FALSE`, il menu Visualizza l'elenco delle barre degli strumenti e le barre di ancoraggio.  
  
 [in] `bViewMenuShowsToolbarsOnly`  
 Se `TRUE`, il menu della barra di controllo viene visualizzato l'elenco di solo le barre degli strumenti. Se `FALSE`, il menu Visualizza l'elenco delle barre degli strumenti e le barre di ancoraggio.  
  
##  <a name="a-namegetactivepopupa--cframewndexgetactivepopup"></a><a name="getactivepopup"></a>CFrameWndEx::GetActivePopup  
 Restituisce un puntatore al menu di scelta rapida attualmente visualizzato.  
  
```  
CMFCPopupMenu* GetActivePopup() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al menu di scelta rapida attualmente visualizzato; in caso contrario `NULL`.  
  
##  <a name="a-namegetdefaultresida--cframewndexgetdefaultresid"></a><a name="getdefaultresid"></a>CFrameWndEx::GetDefaultResId  
 Restituisce l'ID di risorsa specificato quando il framework caricata la finestra cornice.  
  
```  
UINT GetDefaultResId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore di ID di risorsa che l'utente specificato quando il framework di caricata la finestra cornice. Zero se la finestra cornice non dispone di una barra dei menu.  
  
##  <a name="a-namegetdockingmanagera--cframewndexgetdockingmanager"></a><a name="getdockingmanager"></a>CFrameWndEx::GetDockingManager  
 Recupera il [CDockingManager classe](../../mfc/reference/cdockingmanager-class.md) oggetto per la finestra cornice.  
  
```  
CDockingManager* GetDockingManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CDockingManager classe](../../mfc/reference/cdockingmanager-class.md).  
  
### <a name="remarks"></a>Note  
 La finestra cornice creata e viene utilizzato un [CDockingManager classe](../../mfc/reference/cdockingmanager-class.md) oggetto per gestire l'ancoraggio delle finestre figlio.  
  
##  <a name="a-namegetmenubara--cframewndexgetmenubar"></a><a name="getmenubar"></a>CFrameWndEx::GetMenuBar  
 Restituisce un puntatore all'oggetto della barra dei menu collegato alla finestra cornice.  
  
```  
const CMFCMenuBar* GetMenuBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto barra menu associato alla finestra cornice.  
  
##  <a name="a-namegetpanea--cframewndexgetpane"></a><a name="getpane"></a>CFrameWndEx::GetPane  
 Restituisce un puntatore al riquadro con l'ID specificato.  
  
```  
CBasePane* GetPane(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 ID del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro con l'ID specificato. `NULL`Se tale riquadro non esiste.  
  
##  <a name="a-namegetribbonbara--cframewndexgetribbonbar"></a><a name="getribbonbar"></a>CFrameWndEx::GetRibbonBar  
 Recupera il controllo barra multifunzione per il frame.  
  
```  
CMFCRibbonBar* GetRibbonBar();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) per il frame.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettearoffbarsa--cframewndexgettearoffbars"></a><a name="gettearoffbars"></a>CFrameWndEx::GetTearOffBars  
 Restituisce un elenco di oggetti del riquadro che si trovano in uno stato a comparsa.  
  
```  
const CObList& GetTearOffBars() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a `CObList` oggetto che contiene una raccolta di puntatori agli oggetti riquadro che si trovano nello stato tear-off.  
  
##  <a name="a-namegettoolbarbuttontooltiptexta--cframewndexgettoolbarbuttontooltiptext"></a><a name="gettoolbarbuttontooltiptext"></a>CFrameWndEx::GetToolbarButtonToolTipText  
 Chiamato dal framework quando l'applicazione viene visualizzata la descrizione comando per un pulsante della barra degli strumenti.  
  
```  
virtual BOOL GetToolbarButtonToolTipText(
    CMFCToolBarButton* pButton,  
    CString& strTTText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Un puntatore a un pulsante della barra degli strumenti.  
  
 [in] `strTTText`  
 Il testo della descrizione comando da visualizzare per il pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la descrizione comando è stata visualizzata. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo se si desidera visualizzare la descrizione comando per il pulsante della barra degli strumenti.  
  
##  <a name="a-nameinsertpanea--cframewndexinsertpane"></a><a name="insertpane"></a>CFrameWndEx::InsertPane  
 Inserisce un riquadro in un elenco di barre di controllo e lo registra con il gestore di ancoraggio.  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pControlBar`  
 Puntatore a una barra di controllo da inserire nell'elenco di barre di controllo e registrare con il gestore di ancoraggio.  
  
 `pTarget`  
 Puntatore a una barra di controllo prima o dopo cui inserire il riquadro.  
  
 `bAfter`  
 `TRUE`Se si desidera inserire `pControlBar` dopo `pTarget`, `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra di controllo è stata inserita correttamente e registrata, `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 È necessario registrare ogni barra di controllo utilizzando il [CDockingManager classe](../../mfc/reference/cdockingmanager-class.md) per partecipare a un layout di ancoraggio.  
  
##  <a name="a-nameisfullscreena--cframewndexisfullscreen"></a><a name="isfullscreen"></a>CFrameWndEx::IsFullScreen  
 Determina se la finestra cornice è in modalità schermo intero.  
  
```  
BOOL IsFullScreen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra cornice è in modalità schermo intero. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 È possibile impostare la modalità schermo intero tramite la chiamata di [CFrameWndEx::EnableFullScreenMode](#enablefullscreenmode) metodo.  
  
##  <a name="a-nameismenubaravailablea--cframewndexismenubaravailable"></a><a name="ismenubaravailable"></a>CFrameWndEx::IsMenuBarAvailable  
 Determina se il puntatore all'oggetto barra dei menu è valido.  
  
```  
BOOL IsMenuBarAvailable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra cornice è una barra dei menu; in caso contrario `FALSE`.  
  
##  <a name="a-nameispointneardocksitea--cframewndexispointneardocksite"></a><a name="ispointneardocksite"></a>CFrameWndEx::IsPointNearDockSite  
 Determina se il punto si trova in un'area di allineamento.  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Posizione del punto.  
  
 [out] `dwBarAlignment`  
 In cui il punto sia allineato. Vedere la tabella nella sezione Osservazioni per i valori possibili.  
  
 [out] `bOuterEdge`  
 `TRUE`Se il punto si trova vicino al bordo della cornice; `FALSE` se il punto si trova in un'area client.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il punto si trova in una zona di allineamento. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencati i valori possibili per il `dwBarAlignment` parametro.  
  
 `CBRS_ALIGN_TOP`  
 Allineato in alto.  
  
 `CBRS_ALIGN_RIGHT`  
 Allineato a destra.  
  
 `CBRS_ALIGN_BOTTOM`  
 Allineato in basso.  
  
 `CBRS_ALIGN_LEFT`  
 Allineato a sinistra.  
  
##  <a name="a-nameisprintpreviewa--cframewndexisprintpreview"></a><a name="isprintpreview"></a>CFrameWndEx::IsPrintPreview  
 Determina se la finestra cornice è in modalità anteprima di stampa.  
  
```  
BOOL IsPrintPreview();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra cornice è in modalità di anteprima di stampa. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameloadframea--cframewndexloadframe"></a><a name="loadframe"></a>CFrameWndEx::LoadFrame  
 Questo metodo viene chiamato dopo la costruzione per creare la finestra cornice e caricare le proprie risorse.  
  
```  
virtual BOOL LoadFrame(
    UINT nIDResource,  
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,  
    CWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIDResource`  
 L'ID di risorsa che viene utilizzato per caricare tutte le risorse di frame.  
  
 [in] `dwDefaultStyle`  
 Lo stile predefinito della finestra cornice.  
  
 [in] `pParentWnd`  
 Puntatore alla finestra padre del frame.  
  
 [in] `pContext`  
 Puntatore a un [struttura CCreateContext](../../mfc/reference/ccreatecontext-structure.md) classe che viene utilizzato dal framework durante la creazione dell'applicazione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se il metodo riesce. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namenegotiateborderspacea--cframewndexnegotiateborderspace"></a><a name="negotiateborderspace"></a>CFrameWndEx::NegotiateBorderSpace  
 Negoziazione di bordo client OLE implementa.  
  
```  
virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,  
    LPRECT lpRectBorder);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nBorderCmd`  
 Il comando di negoziazione di bordo. Vedere la sezione Osservazioni per i valori possibili.  
  
 [in, out] `lpRectBorder`  
 Dimensioni del bordo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è necessario ricalcolare il layout; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencati i valori possibili per il `nBorderCmd` parametro.  
  
 `borderGet`  
 Ottenere spazio disponibile di client OLE.  
  
 `borderRequest`  
 Richiedere spazio client OLE.  
  
 `borderSet`  
 Impostare lo spazio di client OLE.  
  
##  <a name="a-nameonactivatea--cframewndexonactivate"></a><a name="onactivate"></a>CFrameWndEx::OnActivate  
 Il framework chiama questo metodo quando l'input dell'utente viene trasferito verso o dal frame.  
  
```  
afx_msg void OnActivate(
    UINT nState,  
    CWnd* pWndOther,  
    BOOL bMinimized);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nState`  
 Indica se il frame è attivo o inattivo. Vedere la tabella nella sezione Osservazioni per i valori possibili.  
  
 [in] `pWndOther`  
 Puntatore a un'altra finestra che passa l'input dell'utente con quello corrente.  
  
 [in] `bMinimized`  
 Lo stato ridotto a icona del frame. `TRUE`Se il frame viene ridotto a icona. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencati i valori possibili per il `nState` parametro.  
  
 `WA_ACTIVE`  
 Il frame è selezionato per un metodo diverso da un clic del mouse.  
  
 `WA_CLICKACTIVE`  
 Il frame è selezionato per un clic del mouse.  
  
 `WA_INACTIVE`  
 Il frame non è selezionato.  
  
##  <a name="a-nameonactivateappa--cframewndexonactivateapp"></a><a name="onactivateapp"></a>CFrameWndEx::OnActivateApp  
 Chiamato dal framework quando l'applicazione sia selezionata o deselezionata.  
  
```  
afx_msg void OnActivateApp(
    BOOL bActive,  
    DWORD dwThreadID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bActive`  
 `TRUE`Se l'applicazione è selezionata. `FALSE` se l'applicazione non è selezionata.  
  
 [in] `dwThreadID`  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonchangevisualmanagera--cframewndexonchangevisualmanager"></a><a name="onchangevisualmanager"></a>CFrameWndEx::OnChangeVisualManager  
 Chiamato dal framework quando una modifica al frame richiede una modifica al gestore visualizzazione.  
  
```  
afx_msg LRESULT OnChangeVisualManager(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wParam`  
 Questo parametro non viene usato.  
  
 [in] `lParam`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonclosea--cframewndexonclose"></a><a name="onclose"></a>CFrameWndEx::OnClose  
 Il framework chiama questo metodo per chiudere il frame.  
  
```  
afx_msg void OnClose();
```  
  
### <a name="remarks"></a>Note  
 Se il frame è in modalità anteprima di stampa, invia un messaggio di Windows per chiudere l'anteprima di stampa; in caso contrario, se il frame ospita un client OLE, il client è disattivato.  
  
##  <a name="a-nameonclosedockingpanea--cframewndexonclosedockingpane"></a><a name="onclosedockingpane"></a>CFrameWndEx::OnCloseDockingPane  
 Chiamato dal framework quando l'utente sceglie il **Chiudi** pulsante in un riquadro ancorato.  
  
```  
virtual BOOL OnCloseDockingPane(CDockablePane* pPane);
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra ancorabile può essere chiusa. `FALSE`in caso contrario  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo se si desidera gestire occultamento della barra di ancoraggio.  
  
##  <a name="a-nameoncloseminiframea--cframewndexoncloseminiframe"></a><a name="oncloseminiframe"></a>CFrameWndEx::OnCloseMiniFrame  
 Chiamato dal framework quando l'utente sceglie il **Chiudi** pulsante in una finestra cornice mini a virgola mobile.  
  
```  
virtual BOOL OnCloseMiniFrame(CPaneFrameWnd* pWnd);
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se una finestra cornice mini a virgola mobile può essere chiusa. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo se si desidera elaborare occultamento di una finestra cornice mini a virgola mobile.  
  
##  <a name="a-nameonclosepopupmenua--cframewndexonclosepopupmenu"></a><a name="onclosepopupmenu"></a>CFrameWndEx::OnClosePopupMenu  
 Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.  
  
```  
virtual void OnClosePopupMenu(CMFCPopupMenu* pMenuPopup);
```  
  
### <a name="parameters"></a>Parametri  
 `pMenuPopup`  
 Un puntatore a un menu a comparsa.  
  
### <a name="remarks"></a>Note  
 Il framework invia un messaggio WM_DESTROY quando sta per chiudere la finestra. Eseguire l'override di questo metodo se si desidera gestire le notifiche da `CMFCPopupMenu` oggetti appartenenti alla finestra cornice quando un `CMFCPopupMenu` oggetto sta elaborando un `WM_DESTROY` messaggio inviato dal framework quando la finestra viene chiusa.  
  
##  <a name="a-nameoncmdmsga--cframewndexoncmdmsg"></a><a name="oncmdmsg"></a>CFrameWndEx::OnCmdMsg  
 Il comando Invia messaggi.  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 ID di comando.  
  
 [in] `nCode`  
 Categoria di messaggi di comando.  
  
 [in, out] `pExtra`  
 Puntatore a un oggetto comando.  
  
 [in, out] `pHandlerInfo`  
 Puntatore a una struttura di gestore del comando.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il messaggio di comando è stato gestito; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoncontexthelpa--cframewndexoncontexthelp"></a><a name="oncontexthelp"></a>CFrameWndEx::OnContextHelp  
 Chiamato dal framework per visualizzare le informazioni relative al contesto.  
  
```  
afx_msg void OnContextHelp();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoncreatea--cframewndexoncreate"></a><a name="oncreate"></a>CFrameWndEx::OnCreate  
 Chiamato dal framework dopo la creazione del frame.  
  
```  
afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpCreateStruct`  
 Un puntatore per il [struttura CREATESTRUCT](../../mfc/reference/createstruct-structure.md) per il nuovo frame.  
  
### <a name="return-value"></a>Valore restituito  
 0 per continuare con la creazione del frame. -1 per eliminare il frame.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondestroya--cframewndexondestroy"></a><a name="ondestroy"></a>CFrameWndEx::OnDestroy  
 Chiamato dal framework quando il frame viene eliminato.  
  
```  
afx_msg void OnDestroy();
```  
  
### <a name="remarks"></a>Note  
 Nella tabella di tasti di scelta rapida e tutte le finestre vengono eliminate.  
  
##  <a name="a-nameondrawmenuimagea--cframewndexondrawmenuimage"></a><a name="ondrawmenuimage"></a>CFrameWndEx::OnDrawMenuImage  
 Chiamato dal framework quando l'applicazione disegna l'immagine associata a una voce di menu.  
  
```  
virtual BOOL OnDrawMenuImage(
    CDC* pDC,  
    const CMFCToolBarMenuButton* pMenuButton,  
    const CRect& rectImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `pMenuButton`  
 Un puntatore a un pulsante di menu la cui immagine viene eseguito il rendering.  
  
 [in] `rectImage`  
 Un puntatore a un `Rect` struttura che specifica la posizione sullo schermo e le dimensioni dell'immagine.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il framework esegue correttamente il rendering dell'immagine. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera personalizzare il rendering delle immagini per le voci di menu che appartengono alla barra dei menu di proprietà di `CFrameWndEx` oggetto derivato.  
  
##  <a name="a-nameondrawmenulogoa--cframewndexondrawmenulogo"></a><a name="ondrawmenulogo"></a>CFrameWndEx::OnDrawMenuLogo  
 Chiamato dal framework quando un `CMFCPopupMenu` oggetto elabora un messaggio WM_PAINT.  
  
```  
virtual void OnDrawMenuLogo(
    CDC* pDC,  
    CMFCPopupMenu* pMenu,  
    const CRect& rectLogo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `pMenu`  
 Puntatore alla voce di menu.  
  
 [in] `rectLogo`  
 Un riferimento a una costante `CRect` struttura che specifica la posizione sullo schermo e le dimensioni del logo del menu.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera visualizzare un logo nel menu a comparsa appartenente alla barra dei menu di proprietà di `CFrameWndEx` oggetto derivato.  
  
##  <a name="a-nameondwmcompositionchangeda--cframewndexondwmcompositionchanged"></a><a name="ondwmcompositionchanged"></a>CFrameWndEx::OnDWMCompositionChanged  
 Chiamato dal framework quando la composizione Manager finestra Desktop (DWM) è stata abilitata o disabilitata.  
  
```  
afx_msg LRESULT OnDWMCompositionChanged(
    WPARAM wp,  
    LPARAM lp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wp`  
 Questo parametro non viene usato.  
  
 [in] `lp`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonexitsizemovea--cframewndexonexitsizemove"></a><a name="onexitsizemove"></a>CFrameWndEx::OnExitSizeMove  
 Chiamato dal framework quando il frame si sposta o si ridimensiona.  
  
```  
LRESULT OnExitSizeMove(
    WPARAM wp,  
    LPARAM lp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wp`  
 Questo parametro non viene usato.  
  
 [in] `lp`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameongetminmaxinfoa--cframewndexongetminmaxinfo"></a><a name="ongetminmaxinfo"></a>CFrameWndEx::OnGetMinMaxInfo  
 Chiamato dal framework quando il frame viene ridimensionato per impostare i limiti di dimensioni di finestra.  
  
```  
afx_msg void OnGetMinMaxInfo(MINMAXINFO FAR* lpMMI);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpMMI`  
 Puntatore a un [MINMAXINFO](http://msdn.microsoft.com/library/windows/desktop/ms632605) struttura.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonidleupdatecmduia--cframewndexonidleupdatecmdui"></a><a name="onidleupdatecmdui"></a>CFrameWndEx::OnIdleUpdateCmdUI  
 Chiamato dal framework per aggiornare la visualizzazione di frame durante l'elaborazione del comando è inattivo.  
  
```  
afx_msg LRESULT OnIdleUpdateCmdUI(
    WPARAM wParam = 0,  
    LPARAM lParam = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wParam`  
 Questo parametro non viene usato.  
  
 [in] `lParam`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonlbuttondowna--cframewndexonlbuttondown"></a><a name="onlbuttondown"></a>CFrameWndEx::OnLButtonDown  
 Il framework chiama questo metodo quando l'utente preme il pulsante sinistro del mouse.  
  
```  
afx_msg void OnLButtonDown(
    UINT nFlags,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFlags`  
 Indica se l'utente preme i tasti di modifica. Per i valori possibili, vedere il parametro `wParam` in [notifica WM_LBUTTONDOWN](http://msdn.microsoft.com/library/windows/desktop/ms645607).  
  
 [in] `point`  
 Specifica x e y coordinate del puntatore, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonlbuttonupa--cframewndexonlbuttonup"></a><a name="onlbuttonup"></a>CFrameWndEx::OnLButtonUp  
 Il framework chiama questo metodo quando l'utente rilascia il pulsante sinistro del mouse.  
  
```  
afx_msg void OnLButtonUp(
    UINT nFlags,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFlags`  
 Indica se l'utente preme i tasti di modifica. Per i valori possibili, vedere il parametro `wParam` in [notifica WM_LBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms645608).  
  
 [in] `point`  
 Specifica x e y coordinate del puntatore, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonmenubuttontoolhittesta--cframewndexonmenubuttontoolhittest"></a><a name="onmenubuttontoolhittest"></a>CFrameWndEx::OnMenuButtonToolHitTest  
 Chiamato dal framework quando un `CMFCToolBarButton` oggetto processi un `WM_NCHITTEST` messaggio.  
  
```  
virtual BOOL OnMenuButtonToolHitTest(
    CMFCToolBarButton* pButton,  
    TOOLINFO* pTI);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Puntatore al pulsante della barra dello strumento.  
  
 [out] `pTI`  
 Un puntatore a una struttura di informazioni dello strumento.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'applicazione vengono inseriti i `pTI` parametro. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera fornire una descrizione comando informazioni a una voce di menu specifiche.  
  
##  <a name="a-nameonmenuchara--cframewndexonmenuchar"></a><a name="onmenuchar"></a>CFrameWndEx::OnMenuChar  
 Chiamato dal framework quando viene visualizzato un menu e l'utente preme un tasto non corrispondente a un comando.  
  
```  
afx_msg LRESULT OnMenuChar(
    UINT nChar,  
    UINT nFlags,  
    CMenu* pMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nChar`  
 Codice di carattere del tasto premuto.  
  
 [in] `nFlags`  
 Contiene il `MF_POPUP` flag se il menu visualizzato un sottomenu; contiene il `MF_SYSMENU` flag se il menu visualizzato un menu di controllo.  
  
 [in] `pMenu`  
 Puntatore a un menu.  
  
### <a name="return-value"></a>Valore restituito  
 La parola più significativa deve essere uno dei valori seguenti.  
  
 `0`  
 Il framework deve ignorare la sequenza di tasti.  
  
 `1`  
 Il framework deve chiudere il menu.  
  
 `2`  
 Il framework di selezionare uno degli elementi visualizzati nel menu. La parola meno significativa contiene l'ID del comando da selezionare.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonmousemovea--cframewndexonmousemove"></a><a name="onmousemove"></a>CFrameWndEx::OnMouseMove  
 Il framework chiama questo metodo quando si sposta il puntatore del mouse.  
  
```  
afx_msg void OnMouseMove(
    UINT nFlags,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFlags`  
 Indica se un utente preme i tasti di modifica. Per i valori possibili, vedere il parametro `wParam` in [notifica WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616).  
  
 [in] `point`  
 Specifica gli assi x e y coordinate del puntatore rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonmoveminiframea--cframewndexonmoveminiframe"></a><a name="onmoveminiframe"></a>CFrameWndEx::OnMoveMiniFrame  
 Chiamato dal framework quando si sposta una finestra del riquadro.  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrame`  
 Puntatore al [CPaneFrameWnd classe](../../mfc/reference/cpaneframewnd-class.md) finestra del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra del riquadro non è stata ancorata; `FALSE` se è stata ancorata la finestra del riquadro.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonncactivatea--cframewndexonncactivate"></a><a name="onncactivate"></a>CFrameWndEx::OnNcActivate  
 Chiamato dal framework quando l'area non client del frame deve essere ridisegnato per indicare una modifica nello stato attivo.  
  
```  
afx_msg BOOL OnNcActivate(BOOL bActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bActive`  
 `TRUE`per disegnare il frame attivo. `FALSE` per disegnare il frame inattivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per continuare l'elaborazione predefinita; 0 per impedire che l'area non client in corso la disattivazione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonnccalcsizea--cframewndexonnccalcsize"></a><a name="onnccalcsize"></a>CFrameWndEx::OnNcCalcSize  
 Chiamato dal framework quando è necessario calcolare le dimensioni e la posizione dell'area client.  
  
```  
afx_msg void OnNcCalcSize(
    BOOL bCalcValidRects,  
    NCCALCSIZE_PARAMS FAR* lpncsp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bCalcValidRects`  
 `TRUE`Quando l'applicazione deve specificare un'area client valido; in caso contrario, `FALSE`.  
  
 [in] `lpncsp`  
 Puntatore a un `NCCALCSIZE_PARAMS` struttura che contiene le modifiche di dimensione di frame.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonnchittesta--cframewndexonnchittest"></a><a name="onnchittest"></a>CFrameWndEx::OnNcHitTest  
 Chiamato dal framework quando il puntatore viene spostato o quando viene premuto o rilasciato un pulsante del mouse.  
  
```  
afx_msg LRESULT OnNcHitTest(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Posizione del puntatore nelle coordinate dello schermo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore raggiunto il valore enumerato. Per un elenco di valori possibili vedere [notifica WM_NCHITTEST](http://msdn.microsoft.com/library/windows/desktop/ms645618).  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonncmousemovea--cframewndexonncmousemove"></a><a name="onncmousemove"></a>CFrameWndEx::OnNcMouseMove  
 Chiamato dal framework quando il puntatore viene spostato in un'area non client.  
  
```  
afx_msg void OnNcMouseMove(
    UINT nHitTest,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nHitTest`  
 Un puntatore raggiunto il valore enumerato. Per un elenco di valori possibili vedere [notifica WM_NCHITTEST](http://msdn.microsoft.com/library/windows/desktop/ms645618).  
  
 [in] `point`  
 Posizione del puntatore nelle coordinate dello schermo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonncpainta--cframewndexonncpaint"></a><a name="onncpaint"></a>CFrameWndEx::OnNcPaint  
 Chiamato dal framework quando l'area non client deve essere disegnato.  
  
```  
afx_msg void OnNcPaint();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonpanechecka--cframewndexonpanecheck"></a><a name="onpanecheck"></a>CFrameWndEx::OnPaneCheck  
 Chiamato dal framework per controllare la visibilità di un riquadro.  
  
```  
afx_msg BOOL OnPaneCheck(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 ID di controllo di un riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il comando è stato gestito; `FALSE` per continuare con l'elaborazione del comando.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonpostpreviewframea--cframewndexonpostpreviewframe"></a><a name="onpostpreviewframe"></a>CFrameWndEx::OnPostPreviewFrame  
 Chiamato dal framework quando l'utente modifica la modalità di anteprima di stampa.  
  
```  
afx_msg LRESULT OnPostPreviewFrame(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wParam`  
 Questo parametro non viene usato.  
  
 [in] `lParam`  
 `TRUE`Quando il frame è in modalità di anteprima di stampa. `FALSE` quando la modalità di anteprima di stampa è disattivata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonpowerbroadcasta--cframewndexonpowerbroadcast"></a><a name="onpowerbroadcast"></a>CFrameWndEx::OnPowerBroadcast  
 Chiamato dal framework quando si verifica un evento di risparmio energia.  
  
```  
afx_msg LRESULT OnPowerBroadcast(
    WPARAM wp,  
    LPARAM lp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wp`  
 L'evento di risparmio energia. Per un elenco di valori possibili vedere [messaggio WM_POWERBROADCAST](http://msdn.microsoft.com/library/windows/desktop/aa373247).  
  
 [in] `lp`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Risultanti dalla chiamata di routine della finestra predefinita.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsetmenua--cframewndexonsetmenu"></a><a name="onsetmenu"></a>CFrameWndEx::OnSetMenu  
 Chiamato dal framework per sostituire il menu della finestra cornice.  
  
```  
afx_msg LRESULT OnSetMenu(
    WPARAM wp,  
    LPARAM lp);  
  
BOOL OnSetMenu(HMENU hmenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wp`  
 Handle per il nuovo menu finestra cornice.  
  
 [in] `lp`  
 Handle per il nuovo menu finestra.  
  
 [in] `hmenu`  
 Handle per il nuovo menu finestra cornice.  
  
### <a name="return-value"></a>Valore restituito  
 `LRESULT`è il risultato della chiamata di routine della finestra predefinita.  
  
 `BOOL`è `TRUE` se l'evento è stato gestito; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsetpreviewmodea--cframewndexonsetpreviewmode"></a><a name="onsetpreviewmode"></a>CFrameWndEx::OnSetPreviewMode  
 Chiamato dal framework per impostare la modalità di anteprima di stampa per il frame.  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bPreview`  
 `TRUE`Per abilitare l'anteprima di stampa; `FALSE` per disabilitare l'anteprima di stampa.  
  
 [in] `pState`  
 Puntatore a un `CPrintPreviewState` struttura dello stato del frame.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsettexta--cframewndexonsettext"></a><a name="onsettext"></a>CFrameWndEx::OnSetText  
 Chiamato dal framework per impostare il testo di una finestra.  
  
```  
afx_msg LRESULT OnSetText(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wParam`  
 Questo parametro non viene usato.  
  
 [in] `lParam`  
 Puntatore di testo per la finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Valore restituito da una chiamata a [DefWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633572).  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonshowcustomizepanea--cframewndexonshowcustomizepane"></a><a name="onshowcustomizepane"></a>CFrameWndEx::OnShowCustomizePane  
 Chiamato dal framework quando viene visualizzato un `QuickCustomizePane`.  
  
```  
virtual BOOL OnShowCustomizePane(
    CMFCPopupMenu* pMenuPane,  
    UINT uiToolbarID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuPane`  
 Un puntatore alla rapida personalizzare riquadro.  
  
 [in] `uiToolbarID`  
 L'ID di controllo della barra degli strumenti da personalizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituiscono sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Personalizzazione rapida è un menu di scelta rapida visualizzato quando fa clic sul pulsante di personalizzazione della barra degli strumenti  
  
##  <a name="a-nameonshowpanesa--cframewndexonshowpanes"></a><a name="onshowpanes"></a>CFrameWndEx::OnShowPanes  
 Chiamato dal framework per mostrare o nascondere i riquadri.  
  
```  
virtual BOOL OnShowPanes(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 `TRUE`Se l'applicazione vengono illustrati i riquadri; `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituiscono sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita vengono illustrati i riquadri se `bShow` è `TRUE` e i riquadri sono nascoste o quando `bShow` è `FALSE` e i riquadri sono visibili.  
  
 L'implementazione predefinita consente di nascondere i riquadri se `bShow` è `TRUE` e i riquadri sono visibili o quando `bShow` è `FALSE` e i riquadri sono nascosti.  
  
 L'override del metodo in una classe derivata può eseguire codice personalizzato quando il framework Mostra o nasconde i riquadri.  
  
##  <a name="a-nameonshowpopupmenua--cframewndexonshowpopupmenu"></a><a name="onshowpopupmenu"></a>CFrameWndEx::OnShowPopupMenu  
 Chiamato dal framework quando viene visualizzato un menu a comparsa.  
  
```  
virtual BOOL OnShowPopupMenu(CMFCPopupMenu* pMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenu`  
 Un puntatore a un menu a comparsa.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il menu a comparsa è visibile; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'override del metodo in una classe derivata può eseguire codice personalizzato quando il framework consente di visualizzare un menu a comparsa. Ad esempio, eseguire l'override di questo metodo per modificare il colore di sfondo dei comandi in un menu a comparsa.  
  
##  <a name="a-nameonsizea--cframewndexonsize"></a><a name="onsize"></a>CFrameWndEx::OnSize  
 Chiamato dal framework dopo le modifiche di dimensione del frame.  
  
```  
afx_msg void OnSize(
    UINT nType,  
    int cx,  
    int cy);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nType`  
 Il tipo di ridimensionamento. Per i valori possibili, vedere il parametro `wParam` in [notifica WM_SIZE](http://msdn.microsoft.com/library/windows/desktop/ms632646).  
  
 [in] `cx`  
 Nuova larghezza del frame in pixel.  
  
 [in] `cy`  
 Nuova altezza in pixel della cornice.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsizinga--cframewndexonsizing"></a><a name="onsizing"></a>CFrameWndEx::OnSizing  
 Chiamato dal framework quando l'utente ridimensiona il frame.  
  
```  
afx_msg void OnSizing(
    UINT fwSide,  
    LPRECT pRect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `fwSide`  
 Il bordo del frame viene spostato. Vedere il parametro `wParam` in [notifica WM_SIZING](http://msdn.microsoft.com/library/windows/desktop/ms632647).  
  
 [in, out] `pRect`  
 Puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) o [RECT](../../mfc/reference/rect-structure1.md) struttura che contiene le coordinate del frame.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsyscolorchangea--cframewndexonsyscolorchange"></a><a name="onsyscolorchange"></a>CFrameWndEx::OnSysColorChange  
 Chiamato dal framework quando vengono modificati i colori di sistema.  
  
```  
void OnSysColorChange();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameontearoffmenua--cframewndexontearoffmenu"></a><a name="ontearoffmenu"></a>CFrameWndEx::OnTearOffMenu  
 Chiamato dal framework quando l'applicazione visualizza un menu che dispone di una barra a comparsa.  
  
```  
virtual BOOL OnTearOffMenu(
    CMFCPopupMenu* pMenuPopup,  
    CPane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuPopup`  
 Un puntatore a un menu a comparsa.  
  
 [in] `pBar`  
 Un puntatore a una barra a comparsa.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il menu a comparsa con barra a comparsa è abilitato. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'override del metodo in una classe derivata può eseguire codice personalizzato quando il framework consente di visualizzare una barra di controllo.  
  
 L'implementazione predefinita non esegue alcuna operazione e restituisce `TRUE`.  
  
##  <a name="a-nameontoolbarcontextmenua--cframewndexontoolbarcontextmenu"></a><a name="ontoolbarcontextmenu"></a>CFrameWndEx::OnToolbarContextMenu  
 Chiamato dal framework per compilare un menu a comparsa sulla barra degli strumenti.  
  
```  
afx_msg LRESULT OnToolbarContextMenu(
    WPARAM wp,  
    LPARAM lp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wp`  
 Questo parametro non viene usato.  
  
 [in] `lp`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameontoolbarcreatenewa--cframewndexontoolbarcreatenew"></a><a name="ontoolbarcreatenew"></a>CFrameWndEx::OnToolbarCreateNew  
 Il framework chiama questo metodo per creare una nuova barra degli strumenti.  
  
```  
afx_msg LRESULT OnToolbarCreateNew(
    WPARAM wp,  
    LPARAM lp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wp`  
 Questo parametro non viene usato.  
  
 [in] `lp`  
 Puntatore al testo della barra del titolo della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla nuova barra degli strumenti; o `NULL` se non è stata creata una barra degli strumenti.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameontoolbardeletea--cframewndexontoolbardelete"></a><a name="ontoolbardelete"></a>CFrameWndEx::OnToolbarDelete  
 Chiamato dal framework quando viene eliminata una barra degli strumenti.  
  
```  
afx_msg LRESULT OnToolbarDelete(
    WPARAM, 
    LPARAM lp);
```  
  
### <a name="parameters"></a>Parametri  
 [in]  
 Questo parametro non viene usato.  
  
 [in] `lp`  
 Puntatore a una barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra degli strumenti è stato eliminato; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonupdateframemenua--cframewndexonupdateframemenu"></a><a name="onupdateframemenu"></a>CFrameWndEx::OnUpdateFrameMenu  
 Chiamato dal framework per impostare il menu di frame.  
  
```  
virtual void OnUpdateFrameMenu(HMENU hMenuAlt);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenuAlt`  
 Handle per il menu alternativo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonupdateframetitlea--cframewndexonupdateframetitle"></a><a name="onupdateframetitle"></a>CFrameWndEx::OnUpdateFrameTitle  
 Il framework chiama questo metodo per aggiornare la barra del titolo della finestra cornice.  
  
```  
virtual void OnUpdateFrameTitle(BOOL bAddToTitle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAddToTitle`  
 `TRUE`Per aggiungere il titolo del documento attivo alla barra del titolo finestra cornice; in caso contrario`FALSE.`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonupdatepanemenua--cframewndexonupdatepanemenu"></a><a name="onupdatepanemenu"></a>CFrameWndEx::OnUpdatePaneMenu  
 Chiamato dal framework per aggiornare il menu del riquadro.  
  
```  
afx_msg void OnUpdatePaneMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pCmdUI`  
 Puntatore all'oggetto di interfaccia utente di riquadro.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonwindowposchangeda--cframewndexonwindowposchanged"></a><a name="onwindowposchanged"></a>CFrameWndEx::OnWindowPosChanged  
 Chiamato dal framework quando le dimensioni del fotogramma, posizione o l'ordine z è stato modificato a causa di una chiamata a un metodo di gestione della finestra.  
  
```  
afx_msg void OnWindowPosChanged(WINDOWPOS FAR* lpwndpos);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpwndpos`  
 Puntatore a un [WINDOWPOS](../../mfc/reference/windowpos-structure1.md) struttura che contiene la nuova dimensione e posizione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namepanefrompointa--cframewndexpanefrompoint"></a><a name="panefrompoint"></a>CFrameWndEx::PaneFromPoint  
 Cerca in ogni riquadro per il punto specificato.  
  
```  
CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    bool bExactBar,  
    CRuntimeClass* pRTCBarType) const;  
  
CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    DWORD& dwAlignment,  
    CRuntimeClass* pRTCBarType) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Coordinate dello schermo del punto di controllo.  
  
 [in] `nSensitivity`  
 Espandere il rettangolo di delimitazione di ogni barra di controllo, questa quantità durante la ricerca di punti.  
  
 [in] `bExactBar`  
 `TRUE`per ignorare il `nSensitivity` parametro; in caso contrario, `FALSE`.  
  
 [in] `pRTCBarType`  
 Se non `NULL`, il metodo cerca solo le barre di controllo del tipo specificato.  
  
 [out] `dwAlignment`  
 Se ha esito positivo, questo parametro contiene il lato della barra di controllo che è più vicino al punto specificato. In caso contrario, questo parametro non è inizializzato.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una barra di controllo che contiene il `point`; `NULL` se viene trovato alcun controllo.  
  
### <a name="remarks"></a>Note  
 Questo metodo cerca tutte le barre di controllo nell'applicazione per un `point`.  
  
 Utilizzare `nSensitivity` per aumentare le dimensioni dell'area di ricerca. Utilizzare `pRTCBarType` per limitare i tipi di barre di controllo Cerca il metodo.  
  
##  <a name="a-namepretranslatemessagea--cframewndexpretranslatemessage"></a><a name="pretranslatemessage"></a>CFrameWndEx::PreTranslateMessage  
 Gestisce i messaggi di finestra specifica prima che vengano inviati.  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMsg`  
 Un puntatore a un [MSG](../../mfc/reference/msg-structure1.md) struttura che contiene il messaggio da elaborare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato gestito e non deve essere inviato; 0 se il messaggio non è stato gestito e deve essere inviato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namerecalclayouta--cframewndexrecalclayout"></a><a name="recalclayout"></a>CFrameWndEx::RecalcLayout  
 Consente di modificare il layout dei frame e le relative finestre figlio.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bNotify`  
 Specifica se inviare una notifica all'elemento client OLE sulla modifica del layout.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato quando viene modificata la dimensione della finestra cornice o quando le barre di controllo vengono visualizzate o nascoste.  
  
##  <a name="a-nameremovepanefromdockmanagera--cframewndexremovepanefromdockmanager"></a><a name="removepanefromdockmanager"></a>CFrameWndEx::RemovePaneFromDockManager  
 Annulla la registrazione di un riquadro e lo rimuove dalla gestione di ancoraggio.  
  
```  
void RemovePaneFromDockManager(
    CBasePane* pControlBar,  
    BOOL bDestroy,  
    BOOL bAdjustLayout,  
    BOOL bAutoHide,  
    CBasePane* pBarReplacement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 Puntatore al riquadro della barra di controllo da rimuovere.  
  
 [in] `bDestroy`  
 `TRUE`Per eliminare la barra di controllo dopo la rimozione. `FALSE` in caso contrario.  
  
 [in] `bAdjustLayout`  
 `TRUE`Per modificare il layout di ancoraggio; `FALSE` in caso contrario.  
  
 [in] `bAutoHide`  
 `TRUE`Se la barra di controllo è in modalità Nascondi automaticamente. `FALSE` in caso contrario.  
  
 [in] `pBarReplacement`  
 Un puntatore a un riquadro che sostituisce il riquadro rimosso.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per rimuovere una barra di controllo di layout di ancoraggio della finestra cornice.  
  
 Il [CDockingManager classe](../../mfc/reference/cdockingmanager-class.md) gestisce il layout di barre di controllo. È necessario registrare ogni barra di controllo con il gestore di ancoraggio mediante il [CFrameWndEx::AddPane](#addpane) metodo o [CFrameWndEx::InsertPane](#insertpane) metodo.  
  
##  <a name="a-namesetdockstatea--cframewndexsetdockstate"></a><a name="setdockstate"></a>CFrameWndEx::SetDockState  
 Ripristina il layout di ancoraggio per lo stato di ancoraggio archiviato nel Registro di sistema.  
  
```  
void SetDockState(const CDockState& state);
```  
  
### <a name="parameters"></a>Parametri  
 `state`  
 Lo stato di ancoraggio. Questo parametro viene ignorato.  
  
##  <a name="a-namesetprintpreviewframea--cframewndexsetprintpreviewframe"></a><a name="setprintpreviewframe"></a>CFrameWndEx::SetPrintPreviewFrame  
 Imposta la finestra cornice di anteprima di stampa.  
  
```  
void SetPrintPreviewFrame(CFrameWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore a una finestra cornice di anteprima di stampa.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetuptoolbarmenua--cframewndexsetuptoolbarmenu"></a><a name="setuptoolbarmenu"></a>CFrameWndEx::SetupToolbarMenu  
 Inserisce i comandi definiti dall'utente in un menu della barra degli strumenti.  
  
```  
void SetupToolbarMenu(
    CMenu& menu,  
    const UINT uiViewUserToolbarCmdFirst,  
    const UINT uiViewUserToolbarCmdLast);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `menu`  
 Oggetto `CMenu` oggetto da modificare.  
  
 [in] `uiViewUserToolbarCmdFirst`  
 Il primo comando definito dall'utente.  
  
 [in] `uiViewUserToolbarCmdLast`  
 L'ultimo comando definito dall'utente.  
  
### <a name="remarks"></a>Note  
 Il framework memorizza i comandi definiti dall'utente in un elenco. Utilizzare `uiViewUserToolbarCmdFirst` e `uiViewUserToolbarCmdList` per specificare gli indici dei comandi di inserimento.  
  
##  <a name="a-nameshowfullscreena--cframewndexshowfullscreen"></a><a name="showfullscreen"></a>CFrameWndEx::ShowFullScreen  
 Attiva la cornice principale tra modalità schermo intero e modalità normale.  
  
```  
void ShowFullScreen();
```  
  
##  <a name="a-nameshowpanea--cframewndexshowpane"></a><a name="showpane"></a>CFrameWndEx::ShowPane  
 Mostra o nasconde il riquadro specificato.  
  
```  
void ShowPane(
    CBasePane* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Puntatore alla barra di controllo per mostrare o nascondere.  
  
 [in] `bShow`  
 Se `TRUE`, l'applicazione mostra la barra di controllo. In caso contrario, l'applicazione nasconde la barra di controllo.  
  
 [in] `bDelay`  
 Se `TRUE`, ritardare la regolazione del layout di ancoraggio fino a quando il framework chiama [CFrameWndEx::AdjustDockingLayout](#adjustdockinglayout). In caso contrario, ricalcolare il layout di ancoraggio immediatamente.  
  
 [in] `bActivate`  
 Se `TRUE`, attivare la barra di controllo. In caso contrario, visualizzare la barra di controllo in uno stato inattivo.  
  
##  <a name="a-nameupdatecaptiona--cframewndexupdatecaption"></a><a name="updatecaption"></a>CFrameWndEx::UpdateCaption  
 Chiamato dal framework per aggiornare il titolo della finestra cornice.  
  
```  
void UpdateCaption();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namewinhelpa--cframewndexwinhelp"></a><a name="winhelp"></a>CFrameWndEx::WinHelp  
 Richiama l'applicazione WinHelp o contesto correlati della Guida in linea.  
  
```  
virtual void WinHelp(
    DWORD dwData,  
    UINT nCmd = HELP_CONTEXT);
```  
  
### <a name="parameters"></a>Parametri  
 `dwData`  
 Dati che dipendono il `nCmd` parametro. Per un elenco di valori possibili vedere [WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267).  
  
 `nCmd`  
 Il comando help. Per un elenco di valori possibili vedere [WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267).  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)

