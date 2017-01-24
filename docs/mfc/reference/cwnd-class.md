---
title: "Classe CWnd | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWnd (classe)"
  - "window objects [C++]"
  - "windows [C++]"
ms.assetid: 49a832ee-bc34-4126-88b3-bc1d9974f6c4
caps.latest.revision: 27
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CWnd
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di base di tutte le classi di finestre nella libreria Microsoft Foundation Class \(MFC\).  
  
## Sintassi  
  
```  
class CWnd : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWnd::CWnd](../Topic/CWnd::CWnd.md)|Costruisce un oggetto `CWnd`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWnd::accDoDefaultAction](../Topic/CWnd::accDoDefaultAction.md)|Chiamata eseguita dal framework per eseguire l'azione predefinita dell'oggetto.|  
|[CWnd::accHitTest](../Topic/CWnd::accHitTest.md)|Chiamata eseguita dal framework per recuperare l'elemento figlio o l'oggetto figlio in un determinato punto dello schermo.|  
|[CWnd::accLocation](../Topic/CWnd::accLocation.md)|Chiamata eseguita dal framework per recuperare la posizione sullo schermo corrente dell'oggetto specificato.|  
|[CWnd::accNavigate](../Topic/CWnd::accNavigate.md)|Chiamata eseguita dal framework per passare a un altro elemento dell'interfaccia utente all'interno di un contenitore e, se possibile, recuperare l'oggetto.|  
|[CWnd::accSelect](../Topic/CWnd::accSelect.md)|Chiamata eseguita dal framework per modificare la selezione o per spostare lo stato attivo della tastiera dell'oggetto specificato.|  
|[CWnd::AnimateWindow](../Topic/CWnd::AnimateWindow.md)|Consente di animare l'oggetto finestra associato.|  
|[CWnd::ArrangeIconicWindows](../Topic/CWnd::ArrangeIconicWindows.md)|Dispone tutte le finestre figlio ridotte a icona.|  
|[CWnd::Attach](../Topic/CWnd::Attach.md)|Associa un handle di Windows a un oggetto `CWnd`.|  
|[CWnd::BeginModalState](../Topic/CWnd::BeginModalState.md)|Chiamare questa funzione membro per impostare lo stato modale per una finestra cornice.|  
|[CWnd::BeginPaint](../Topic/CWnd::BeginPaint.md)|Prepara `CWnd` per il disegno.|  
|[CWnd::BindDefaultProperty](../Topic/CWnd::BindDefaultProperty.md)|Associa la proprietà associata semplice predefinita dell'oggetto chiamante, come da contrassegno nella libreria dei tipi, a un cursore associato a un controllo origine dati.|  
|[CWnd::BindProperty](../Topic/CWnd::BindProperty.md)|Associa una proprietà con associazione al cursore per un controllo con associazione a dati a un controllo origine dati e registra tale relazione nel gestore delle associazioni MFC.|  
|[CWnd::BringWindowToTop](../Topic/CWnd::BringWindowToTop.md)|Porta `CWnd` in cima a una pila di finestre sovrapposte.|  
|[CWnd::CalcWindowRect](../Topic/CWnd::CalcWindowRect.md)|Chiamata eseguita per calcolare il rettangolo della finestra dal rettangolo client.|  
|[CWnd::CancelToolTips](../Topic/CWnd::CancelToolTips.md)|Disabilita il controllo ToolTip.|  
|[CWnd::CenterWindow](../Topic/CWnd::CenterWindow.md)|Centra una finestra rispetto al padre.|  
|[CWnd::ChangeClipboardChain](../Topic/CWnd::ChangeClipboardChain.md)|Rimuove `CWnd` dalla catena di visualizzatori degli Appunti.|  
|[CWnd::CheckDlgButton](../Topic/CWnd::CheckDlgButton.md)|Inserisce un segno di spunta accanto a o rimuove un segno di spunta da un controllo pulsante.|  
|[CWnd::CheckRadioButton](../Topic/CWnd::CheckRadioButton.md)|Seleziona il pulsante di opzione specificato e rimuove il segno di spunta da tutti gli altri pulsanti di opzione nel gruppo specificato di pulsanti.|  
|[CWnd::ChildWindowFromPoint](../Topic/CWnd::ChildWindowFromPoint.md)|Determina quale delle finestre figlio contiene eventualmente il punto specificato.|  
|[CWnd::ClientToScreen](../Topic/CWnd::ClientToScreen.md)|Converte le coordinate client di un determinato punto o rettangolo sullo schermo in coordinate dello schermo.|  
|[CWnd::CloseWindow](../Topic/CWnd::CloseWindow.md)|Riduce a icona la finestra.|  
|[CWnd::ContinueModal](../Topic/CWnd::ContinueModal.md)|Continua lo stato modale di una finestra.|  
|[CWnd::Create](../Topic/CWnd::Create.md)|Crea e inizializza la finestra figlio associata all'oggetto `CWnd`.|  
|[CWnd::CreateAccessibleProxy](../Topic/CWnd::CreateAccessibleProxy.md)|Crea un proxy Active Accessibility per l'oggetto specificato.|  
|[CWnd::CreateCaret](../Topic/CWnd::CreateCaret.md)|Crea una nuova forma per il cursore di sistema e ottiene la proprietà del cursore.|  
|[CWnd::CreateControl](../Topic/CWnd::CreateControl.md)|Crea un controllo ActiveX che verrà rappresentato in un programma MFC da un oggetto `CWnd`.|  
|[CWnd::CreateEx](../Topic/CWnd::CreateEx.md)|Crea una finestra di Windows sovrapposta, popup o figlio e la collega a un oggetto `CWnd`.|  
|[CWnd::CreateGrayCaret](../Topic/CWnd::CreateGrayCaret.md)|Crea un blocco grigio per il cursore di sistema e ottiene la proprietà del cursore.|  
|[CWnd::CreateSolidCaret](../Topic/CWnd::CreateSolidCaret.md)|Crea un blocco in tinta unita per il cursore di sistema e ottiene la proprietà del cursore.|  
|[CWnd::DeleteTempMap](../Topic/CWnd::DeleteTempMap.md)|Chiamato automaticamente dal gestore del tempo di inattività`CWinApp`, consente di eliminare qualsiasi oggetto `CWnd` temporaneo creato da `FromHandle`.|  
|[CWnd::DestroyWindow](../Topic/CWnd::DestroyWindow.md)|Elimina in modo permanente la finestra di Windows collegata.|  
|[CWnd::Detach](../Topic/CWnd::Detach.md)|Scollega un handle di Windows da un oggetto `CWnd` e restituisce l'handle.|  
|[CWnd::DlgDirList](../Topic/CWnd::DlgDirList.md)|Compila una casella di riepilogo con un elenco di file o directory.|  
|[CWnd::DlgDirListComboBox](../Topic/CWnd::DlgDirListComboBox.md)|Compila la casella di riepilogo di una casella combinata con un elenco di file o directory.|  
|[CWnd::DlgDirSelect](../Topic/CWnd::DlgDirSelect.md)|Recupera la selezione corrente da una casella di riepilogo.|  
|[CWnd::DlgDirSelectComboBox](../Topic/CWnd::DlgDirSelectComboBox.md)|Recupera la selezione corrente da una casella di riepilogo di una casella combinata.|  
|[CWnd::DragAcceptFiles](../Topic/CWnd::DragAcceptFiles.md)|Indica che la finestra accetterà file trascinati.|  
|[CWnd::DragDetect](../Topic/CWnd::DragDetect.md)|Acquisisce il mouse e tiene traccia del suo movimento fino a quando l'utente rilascia il pulsante sinistro, preme ESC o sposta il mouse all'esterno del rettangolo di trascinamento attorno al punto specificato.|  
|[CWnd::DrawAnimatedRects](../Topic/CWnd::DrawAnimatedRects.md)|Disegna un rettangolo wireframe e aggiunge un'animazione in modo da indicare l'apertura di un'icona oppure la riduzione a icona o l'ingrandimento di una finestra.|  
|[CWnd::DrawCaption](../Topic/CWnd::DrawCaption.md)|Disegna una didascalia.|  
|[CWnd::DrawMenuBar](../Topic/CWnd::DrawMenuBar.md)|Ridisegna la barra dei menu.|  
|[CWnd::EnableActiveAccessibility](../Topic/CWnd::EnableActiveAccessibility.md)|Abilita le funzioni `Active Accessibility` definite dall'utente.|  
|[CWnd::EnableDynamicLayout](../Topic/CWnd::EnableDynamicLayout.md)|Abilita l'adattamento automatico di posizione e dimensioni delle finestre figlio quando l'utente ridimensiona la finestra.|  
|[CWnd::EnableD2DSupport](../Topic/CWnd::EnableD2DSupport.md)|Abilita o disabilita il supporto `D2D` per la finestra.  Chiamare questo metodo prima dell'inizializzazione della finestra principale.|  
|[CWnd::EnableScrollBar](../Topic/CWnd::EnableScrollBar.md)|Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.|  
|[CWnd::EnableScrollBarCtrl](../Topic/CWnd::EnableScrollBarCtrl.md)|Abilita o disabilita un controllo barra di scorrimento di pari livello.|  
|[CWnd::EnableToolTips](../Topic/CWnd::EnableToolTips.md)|Abilita il controllo ToolTip.|  
|[CWnd::EnableTrackingToolTips](../Topic/CWnd::EnableTrackingToolTips.md)|Abilita il controllo ToolTip in modalità di rilevamento.|  
|[CWnd::EnableWindow](../Topic/CWnd::EnableWindow.md)|Abilita o disabilita l'input da mouse e tastiera.|  
|[CWnd::EndModalLoop](../Topic/CWnd::EndModalLoop.md)|Termina lo stato modale di una finestra.|  
|[CWnd::EndModalState](../Topic/CWnd::EndModalState.md)|Chiamare questa funzione membro per cambiare lo stato di una finestra cornice da modale a non modale.|  
|[CWnd::EndPaint](../Topic/CWnd::EndPaint.md)|Contrassegna la fine del disegno.|  
|[CWnd::ExecuteDlgInit](../Topic/CWnd::ExecuteDlgInit.md)|Inizializza una risorsa di una finestra di dialogo.|  
|[CWnd::FilterToolTipMessage](../Topic/CWnd::FilterToolTipMessage.md)|Recupera il titolo o il testo associato a un controllo in una finestra di dialogo.|  
|[CWnd::FindWindow](../Topic/CWnd::FindWindow.md)|Restituisce l'handle della finestra, identificata in base al nome e alla classe.|  
|[CWnd::FindWindowEx](../Topic/CWnd::FindWindowEx.md)|Restituisce l'handle della finestra, identificata in base al nome e alla classe.|  
|[CWnd::FlashWindow](../Topic/CWnd::FlashWindow.md)|Fa lampeggiare una volta la finestra.|  
|[CWnd::FlashWindowEx](../Topic/CWnd::FlashWindowEx.md)|Fa lampeggiare la finestra con funzionalità aggiuntive.|  
|[CWnd::FromHandle](../Topic/CWnd::FromHandle.md)|Restituisce un puntatore a un oggetto `CWnd` quando viene specificato un handle di una finestra.  Se all'handle non è collegato un oggetto `CWnd`, viene creato e collegato un oggetto `CWnd` temporaneo.|  
|[CWnd::FromHandlePermanent](../Topic/CWnd::FromHandlePermanent.md)|Restituisce un puntatore a un oggetto `CWnd` quando viene specificato un handle di una finestra.  Se all'handle non è collegato un oggetto `CWnd`, viene creato e collegato un oggetto `CWnd` temporaneo.|  
|[CWnd::get\_accChild](../Topic/CWnd::get_accChild.md)|Chiamata eseguita dal framework per recuperare l'indirizzo di un'interfaccia `IDispatch` per l'elemento figlio specificato.|  
|[CWnd::get\_accChildCount](../Topic/CWnd::get_accChildCount.md)|Chiamata eseguita dal framework per recuperare il numero di elementi figlio appartenenti all'oggetto corrente.|  
|[CWnd::get\_accDefaultAction](../Topic/CWnd::get_accDefaultAction.md)|Chiamata eseguita dal framework per recuperare una stringa che descrive l'azione predefinita dell'oggetto.|  
|[CWnd::get\_accDescription](../Topic/CWnd::get_accDescription.md)|Chiamata eseguita dal framework per recuperare una stringa che descrive l'aspetto visivo dell'oggetto specificato.|  
|[CWnd::get\_accFocus](../Topic/CWnd::get_accFocus.md)|Chiamata eseguita dal framework per recuperare l'oggetto con lo stato attivo della tastiera.|  
|[CWnd::get\_accHelp](../Topic/CWnd::get_accHelp.md)|Chiamata eseguita dal framework per recuperare la stringa della proprietà **Help** di un oggetto.|  
|[CWnd::get\_accHelpTopic](../Topic/CWnd::get_accHelpTopic.md)|Chiamata eseguita dal framework per recuperare il percorso completo del file `WinHelp` associato all'oggetto specificato e l'identificatore dell'argomento appropriato all'interno del file.|  
|[CWnd::get\_accKeyboardShortcut](../Topic/CWnd::get_accKeyboardShortcut.md)|Chiamata eseguita dal framework per recuperare la combinazione di tasti o il tasto di scelta dell'oggetto specificato.|  
|[CWnd::get\_accName](../Topic/CWnd::get_accName.md)|Chiamata eseguita dal framework per recuperare il nome dell'oggetto specificato.|  
|[CWnd::get\_accParent](../Topic/CWnd::get_accParent.md)|Chiamata eseguita dal framework per recuperare l'interfaccia `IDispatch` del padre dell'oggetto.|  
|[CWnd::get\_accRole](../Topic/CWnd::get_accRole.md)|Chiamata eseguita dal framework per recuperare informazioni che descrivono il ruolo dell'oggetto specificato.|  
|[CWnd::get\_accSelection](../Topic/CWnd::get_accSelection.md)|Chiamata eseguita dal framework per recuperare gli elementi figlio selezionati dell'oggetto.|  
|[CWnd::get\_accState](../Topic/CWnd::get_accState.md)|Chiamata eseguita dal framework per recuperare lo stato corrente dell'oggetto specificato.|  
|[CWnd::get\_accValue](../Topic/CWnd::get_accValue.md)|Chiamata eseguita dal framework per recuperare il valore dell'oggetto specificato.|  
|[CWnd::GetActiveWindow](../Topic/CWnd::GetActiveWindow.md)|Recupera la finestra attiva.|  
|[CWnd::GetAncestor](../Topic/CWnd::GetAncestor.md)|Recupera l'oggetto finestra predecessore della finestra specificata.|  
|[CWnd::GetCapture](../Topic/CWnd::GetCapture.md)|Recupera l'oggetto `CWnd` con il mouse capture.|  
|[CWnd::GetCaretPos](../Topic/CWnd::GetCaretPos.md)|Recupera le coordinate client della posizione corrente del cursore.|  
|[CWnd::GetCheckedRadioButton](../Topic/CWnd::GetCheckedRadioButton.md)|Restituisce l'ID del pulsante di opzione attualmente selezionato in un gruppo di pulsanti.|  
|[CWnd::GetClientRect](../Topic/CWnd::GetClientRect.md)|Recupera le dimensioni dell'area client di `CWnd`.|  
|[CWnd::GetClipboardOwner](../Topic/CWnd::GetClipboardOwner.md)|Recupera un puntatore al proprietario corrente degli Appunti.|  
|[CWnd::GetClipboardViewer](../Topic/CWnd::GetClipboardViewer.md)|Recupera un puntatore alla prima finestra nella catena di visualizzatori degli Appunti.|  
|[CWnd::GetControlUnknown](../Topic/CWnd::GetControlUnknown.md)|Recupera un puntatore a un controllo ActiveX sconosciuto.|  
|[CWnd::GetDC](../Topic/CWnd::GetDC.md)|Recupera un contesto di visualizzazione per l'area client.|  
|[CWnd::GetDCEx](../Topic/CWnd::GetDCEx.md)|Recupera un contesto di visualizzazione per l'area client e consente il ritaglio durante il disegno.|  
|[CWnd::GetDCRenderTarget](../Topic/CWnd::GetDCRenderTarget.md)|Recupera la destinazione di rendering del contesto di dispositivo per la finestra `CWnd`.|  
|[CWnd::GetDescendantWindow](../Topic/CWnd::GetDescendantWindow.md)|Cerca tutte le finestre discendenti e restituisce la finestra con l'ID specificato.|  
|[CWnd::GetDesktopWindow](../Topic/CWnd::GetDesktopWindow.md)|Recupera la finestra del desktop di Windows.|  
|[CWnd::GetDlgCtrlID](../Topic/CWnd::GetDlgCtrlID.md)|Se `CWnd` è una finestra figlio, chiamare questa funzione restituisce il valore ID.|  
|[CWnd::GetDlgItem](../Topic/CWnd::GetDlgItem.md)|Recupera il controllo con l'ID specificato dalla finestra di dialogo specificata.|  
|[CWnd::GetDlgItemInt](../Topic/CWnd::GetDlgItemInt.md)|Converte il testo di un controllo nella finestra di dialogo specificata in un valore Integer.|  
|[CWnd::GetDlgItemText](../Topic/CWnd::GetDlgItemText.md)|Recupera la didascalia o il testo associato a un controllo.|  
|[CWnd::GetDSCCursor](../Topic/CWnd::GetDSCCursor.md)|Recupera un puntatore al cursore sottostante definito dalle proprietà DataSource, UserName, Password e SQL di un controllo origine dati.|  
|[CWnd::GetDynamicLayout](../Topic/CWnd::GetDynamicLayout.md)|Recupera un puntatore all'oggetto di gestione del layout dinamico.|  
|[CWnd::GetExStyle](../Topic/CWnd::GetExStyle.md)|Restituisce lo stile esteso della finestra.|  
|[CWnd::GetFocus](../Topic/CWnd::GetFocus.md)|Recupera l'oggetto `CWnd` che dispone attualmente dello stato attivo per l'input.|  
|[CWnd::GetFont](../Topic/CWnd::GetFont.md)|Recupera il tipo di carattere corrente.|  
|[CWnd::GetForegroundWindow](../Topic/CWnd::GetForegroundWindow.md)|Restituisce un puntatore alla finestra in primo piano \(finestra di primo livello attualmente usata dall'utente\).|  
|[CWnd::GetIcon](../Topic/CWnd::GetIcon.md)|Recupera l'handle per un'icona.|  
|[CWnd::GetLastActivePopup](../Topic/CWnd::GetLastActivePopup.md)|Determina la finestra popup di proprietà di `CWnd` attiva più di recente.|  
|[CWnd::GetLayeredWindowAttributes](../Topic/CWnd::GetLayeredWindowAttributes.md)|Recupera la chiave di colore per trasparenza e opacità di una finestra a livelli.|  
|[CWnd::GetMenu](../Topic/CWnd::GetMenu.md)|Recupera un puntatore al menu specificato.|  
|[CWnd::GetNextDlgGroupItem](../Topic/CWnd::GetNextDlgGroupItem.md)|Cerca il controllo successivo \(o precedente\) all'interno di un gruppo di controlli.|  
|[CWnd::GetNextDlgTabItem](../Topic/CWnd::GetNextDlgTabItem.md)|Recupera il primo controllo con lo stile [WS\_TABSTOP](../../mfc/reference/window-styles.md) successivo \(o precedente\) al controllo specificato.|  
|[CWnd::GetNextWindow](../Topic/CWnd::GetNextWindow.md)|Restituisce la finestra successiva \(o precedente\) nell'elenco del gestore delle finestre.|  
|[CWnd::GetOleControlSite](../Topic/CWnd::GetOleControlSite.md)|Recupera il sito personalizzato per il controllo ActiveX specificato.|  
|[CWnd::GetOpenClipboardWindow](../Topic/CWnd::GetOpenClipboardWindow.md)|Recupera un puntatore alla finestra con gli Appunti attualmente aperti.|  
|[CWnd::GetOwner](../Topic/CWnd::GetOwner.md)|Recupera un puntatore al proprietario di un oggetto `CWnd`.|  
|[CWnd::GetParent](../Topic/CWnd::GetParent.md)|Recupera l'eventuale finestra padre dell'oggetto `CWnd`.|  
|[CWnd::GetParentFrame](../Topic/CWnd::GetParentFrame.md)|Recupera la finestra cornice padre dell'oggetto `CWnd`.|  
|[CWnd::GetParentOwner](../Topic/CWnd::GetParentOwner.md)|Restituisce un puntatore alla finestra padre di una finestra figlio.|  
|[CWnd::GetProperty](../Topic/CWnd::GetProperty.md)|Recupera una proprietà di un controllo ActiveX.|  
|[CWnd::GetRenderTarget](../Topic/CWnd::GetRenderTarget.md)|Ottiene una destinazione di rendering associata alla finestra.|  
|[CWnd::GetSafeHwnd](../Topic/CWnd::GetSafeHwnd.md)|Restituisce `m_hWnd` oppure `NULL` se il puntatore `this` è `NULL`.|  
|[CWnd::GetSafeOwner](../Topic/CWnd::GetSafeOwner.md)|Recupera il proprietario sicuro della finestra specificata.|  
|[CWnd::GetScrollBarCtrl](../Topic/CWnd::GetScrollBarCtrl.md)|Restituisce un controllo barra di scorrimento di pari livello.|  
|[CWnd::GetScrollBarInfo](../Topic/CWnd::GetScrollBarInfo.md)|Recupera le informazioni sulla barra di scorrimento specificata.|  
|[CWnd::GetScrollInfo](../Topic/CWnd::GetScrollInfo.md)|Recupera le informazioni gestite dalla struttura `SCROLLINFO` su una barra di scorrimento.|  
|[CWnd::GetScrollLimit](../Topic/CWnd::GetScrollLimit.md)|Recupera il limite della barra di scorrimento.|  
|[CWnd::GetScrollPos](../Topic/CWnd::GetScrollPos.md)|Recupera la posizione corrente di una casella di scorrimento.|  
|[CWnd::GetScrollRange](../Topic/CWnd::GetScrollRange.md)|Copia le posizioni della barra di scorrimento minima e massima correnti per la barra di scorrimento specificata.|  
|[CWnd::GetStyle](../Topic/CWnd::GetStyle.md)|Restituisce lo stile della finestra corrente.|  
|[CWnd::GetSystemMenu](../Topic/CWnd::GetSystemMenu.md)|Consente all'applicazione di accedere al menu di controllo per la copia e la modifica.|  
|[CWnd::GetTitleBarInfo](../Topic/CWnd::GetTitleBarInfo.md)|Recupera le informazioni sulla barra del titolo specificata.|  
|[CWnd::GetTopLevelFrame](../Topic/CWnd::GetTopLevelFrame.md)|Recupera la finestra cornice di primo livello della finestra.|  
|[CWnd::GetTopLevelOwner](../Topic/CWnd::GetTopLevelOwner.md)|Recupera la finestra di primo livello.|  
|[CWnd::GetTopLevelParent](../Topic/CWnd::GetTopLevelParent.md)|Recupera il padre di primo livello della finestra.|  
|[CWnd::GetTopWindow](../Topic/CWnd::GetTopWindow.md)|Restituisce la prima finestra figlio appartenente a `CWnd`.|  
|[CWnd::GetUpdateRect](../Topic/CWnd::GetUpdateRect.md)|Recupera le coordinate del rettangolo più piccolo che racchiude completamente l'area di aggiornamento di `CWnd`.|  
|[CWnd::GetUpdateRgn](../Topic/CWnd::GetUpdateRgn.md)|Recupera l'area di aggiornamento di `CWnd`.|  
|[CWnd::GetWindow](../Topic/CWnd::GetWindow.md)|Restituisce la finestra con la relazione specificata con questa finestra.|  
|[CWnd::GetWindowContextHelpId](../Topic/CWnd::GetWindowContextHelpId.md)|Recupera l'identificatore di contesto della Guida.|  
|[CWnd::GetWindowDC](../Topic/CWnd::GetWindowDC.md)|Recupera il contesto di visualizzazione per l'intera finestra, inclusi la barra del titolo, i menu e le barre di scorrimento.|  
|[CWnd::GetWindowedChildCount](../Topic/CWnd::GetWindowedChildCount.md)|Restituisce il numero di finestre figlio associate.|  
|[CWnd::GetWindowInfo](../Topic/CWnd::GetWindowInfo.md)|Restituisce informazioni sulla finestra.|  
|[CWnd::GetWindowlessChildCount](../Topic/CWnd::GetWindowlessChildCount.md)|Restituisce il numero di finestre figlio senza finestra associate.|  
|[CWnd::GetWindowPlacement](../Topic/CWnd::GetWindowPlacement.md)|Recupera lo stato di visualizzazione e le posizioni normale \(ripristinata\), ridotta a icona e ingrandita di una finestra.|  
|[CWnd::GetWindowRect](../Topic/CWnd::GetWindowRect.md)|Ottiene le coordinate dello schermo di `CWnd`.|  
|[CWnd::GetWindowRgn](../Topic/CWnd::GetWindowRgn.md)|Recupera una copia dell'area della finestra di una finestra.|  
|[CWnd::GetWindowText](../Topic/CWnd::GetWindowText.md)|Restituisce il testo o il titolo della didascalia \(se disponibile\) della finestra.|  
|[CWnd::GetWindowTextLength](../Topic/CWnd::GetWindowTextLength.md)|Restituisce la lunghezza del testo o del titolo della didascalia della finestra.|  
|[CWnd::HideCaret](../Topic/CWnd::HideCaret.md)|Nasconde il cursore rimuovendolo dallo schermo.|  
|[CWnd::HiliteMenuItem](../Topic/CWnd::HiliteMenuItem.md)|Evidenzia o rimuove l'evidenziazione da una voce di menu di primo livello \(barra dei menu\).|  
|[CWnd::HtmlHelp](../Topic/CWnd::HtmlHelp.md)|Chiamata eseguita per avviare l'applicazione HTMLHelp|  
|[CWnd::Invalidate](../Topic/CWnd::Invalidate.md)|Invalida l'intera area client.|  
|[CWnd::InvalidateRect](../Topic/CWnd::InvalidateRect.md)|Invalida l'area client all'interno del rettangolo specificato mediante l'aggiunta di questo rettangolo all'area di aggiornamento corrente.|  
|[CWnd::InvalidateRgn](../Topic/CWnd::InvalidateRgn.md)|Invalida l'area client all'interno dell'area specificata mediante l'aggiunta di questa area all'area di aggiornamento corrente.|  
|[CWnd::InvokeHelper](../Topic/CWnd::InvokeHelper.md)|Richiama un metodo o una proprietà di un controllo ActiveX.|  
|[CWnd::IsChild](../Topic/CWnd::IsChild.md)|Indica se `CWnd` è una finestra figlio o un altro tipo di discendente diretto della finestra specificata.|  
|[CWnd::IsD2DSupportEnabled](../Topic/CWnd::IsD2DSupportEnabled.md)|Determina se il supporto di `D2D` è abilitato.|  
|[CWnd::IsDialogMessage](../Topic/CWnd::IsDialogMessage.md)|Determina se il messaggio specificato è destinato alla finestra di dialogo non modale e, in caso affermativo, lo elabora.|  
|[CWnd::IsDlgButtonChecked](../Topic/CWnd::IsDlgButtonChecked.md)|Determina se un controllo pulsante è selezionato.|  
|[CWnd::IsDynamicLayoutEnabled](../Topic/CWnd::IsDynamicLayoutEnabled.md)|Determina se il layout dinamico è abilitato in questa finestra.  Se il layout dinamico è abilitato, la posizione e le dimensioni delle finestre figlio possono cambiare quando l'utente ridimensiona la finestra padre.|  
|[CWnd::IsIconic](../Topic/CWnd::IsIconic.md)|Determina se `CWnd` è ridotta a icona.|  
|[CWnd::IsTouchWindow](../Topic/CWnd::IsTouchWindow.md)|Specifica se `CWnd` include il supporto del tocco.|  
|[CWnd::IsWindowEnabled](../Topic/CWnd::IsWindowEnabled.md)|Determina se la finestra è abilitata per l'input da tastiera e mouse.|  
|[CWnd::IsWindowVisible](../Topic/CWnd::IsWindowVisible.md)|Determina se la finestra è visibile.|  
|[CWnd::IsZoomed](../Topic/CWnd::IsZoomed.md)|Determina se `CWnd` è ingrandita.|  
|[CWnd::KillTimer](../Topic/CWnd::KillTimer.md)|Termina un timer di sistema.|  
|[CWnd::LockWindowUpdate](../Topic/CWnd::LockWindowUpdate.md)|Disabilita o riabilita il disegno nella finestra specificata.|  
|[CWnd::MapWindowPoints](../Topic/CWnd::MapWindowPoints.md)|Converte \(mappa\) un set di punti dallo spazio delle coordinate di `CWnd` nello spazio delle coordinate di un'altra finestra.|  
|[CWnd::MessageBox](../Topic/CWnd::MessageBox.md)|Crea e visualizza una finestra che contiene un messaggio e una didascalia forniti dall'applicazione.|  
|[CWnd::ModifyStyle](../Topic/CWnd::ModifyStyle.md)|Modifica lo stile della finestra corrente.|  
|[CWnd::ModifyStyleEx](../Topic/CWnd::ModifyStyleEx.md)|Modifica lo stile esteso della finestra.|  
|[CWnd::MoveWindow](../Topic/CWnd::MoveWindow.md)|Modifica la posizione e dimensioni di `CWnd`.|  
|[CWnd::NotifyWinEvent](../Topic/CWnd::NotifyWinEvent.md)|Segnala al sistema che si è verificato un evento predefinito.|  
|[CWnd::OnAmbientProperty](../Topic/CWnd::OnAmbientProperty.md)|Implementa i valori delle proprietà di ambiente.|  
|[CWnd::OnDrawIconicThumbnailOrLivePreview](../Topic/CWnd::OnDrawIconicThumbnailOrLivePreview.md)|Chiamata eseguita dal framework quando è necessario ottenere una bitmap da visualizzare nell'anteprima della scheda di Windows 7 o nel client per l'anteprima dell'applicazione.|  
|[CWnd::OnHelp](../Topic/CWnd::OnHelp.md)|Gestisce F1 Guida all'interno dell'applicazione \(usando il contesto corrente\).|  
|[CWnd::OnHelpFinder](../Topic/CWnd::OnHelpFinder.md)|Gestisce i comandi `ID_HELP_FINDER` e `ID_DEFAULT_HELP`.|  
|[CWnd::OnHelpIndex](../Topic/CWnd::OnHelpIndex.md)|Gestisce il comando `ID_HELP_INDEX` e fornisce un argomento della Guida predefinito.|  
|[CWnd::OnHelpUsing](../Topic/CWnd::OnHelpUsing.md)|Gestisce il comando `ID_HELP_USING`.|  
|[CWnd::OnToolHitTest](../Topic/CWnd::OnToolHitTest.md)|Determina se un punto è incluso nel rettangolo che circoscrive lo strumento specificato e recupera informazioni sullo strumento stesso.|  
|[CWnd::OpenClipboard](../Topic/CWnd::OpenClipboard.md)|Apre gli Appunti.  Altre applicazioni non saranno in grado di modificare gli Appunti fino a quando non viene chiamata la funzione [CloseClipboard](http://msdn.microsoft.com/library/windows/desktop/ms649035) di Windows.|  
|[CWnd::PaintWindowlessControls](../Topic/CWnd::PaintWindowlessControls.md)|Disegna controlli senza finestra nel contenitore del controllo.|  
|[CWnd::PostMessage](../Topic/CWnd::PostMessage.md)|Inserisce un messaggio nella coda dell'applicazione, quindi restituisce il controllo senza attendere che la finestra elabori il messaggio.|  
|[CWnd::PreCreateWindow](../Topic/CWnd::PreCreateWindow.md)|Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CWnd`.|  
|[CWnd::PreSubclassWindow](../Topic/CWnd::PreSubclassWindow.md)|Consente l'esecuzione di altre operazioni di creazione di sottoclassi necessarie prima della chiamata di [SubclassWindow](../Topic/CWnd::SubclassWindow.md).|  
|[CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md)|Elemento usato da `CWinApp` per filtrare i messaggi della finestra prima che vengano inviati alle funzioni di Windows `TranslateMessage` e `DispatchMessage`.|  
|[CWnd::Print](../Topic/CWnd::Print.md)|Disegna la finestra corrente nel contesto di dispositivo specificato.|  
|[CWnd::PrintClient](../Topic/CWnd::PrintClient.md)|Disegna qualsiasi finestra nel contesto di dispositivo specificato \(in genere un contesto di dispositivo stampante\).|  
|[CWnd::PrintWindow](../Topic/CWnd::PrintWindow.md)|Copia una finestra visiva nel contesto di dispositivo specificato, in genere un contesto di dispositivo stampante.|  
|[CWnd::RedrawWindow](../Topic/CWnd::RedrawWindow.md)|Aggiorna il rettangolo o l'area specificati nell'area client.|  
|[CWnd::RegisterTouchWindow](../Topic/CWnd::RegisterTouchWindow.md)|Registra\/annulla la registrazione del supporto del tocco di Windows per la finestra.|  
|[CWnd::ReleaseDC](../Topic/CWnd::ReleaseDC.md)|Rilascia i contesti di dispositivo client e finestra, liberandoli per l'uso da parte di altre applicazioni.|  
|[CWnd::RepositionBars](../Topic/CWnd::RepositionBars.md)|Riposiziona le barre di controllo nell'area client.|  
|[CWnd::RunModalLoop](../Topic/CWnd::RunModalLoop.md)|Recupera, converte o invia i messaggi per una finestra in stato modale.|  
|[CWnd::ScreenToClient](../Topic/CWnd::ScreenToClient.md)|Converte le coordinate dello schermo di un determinato punto o rettangolo sullo schermo in coordinate client.|  
|[CWnd::ScrollWindow](../Topic/CWnd::ScrollWindow.md)|Scorre il contenuto dell'area client.|  
|[CWnd::ScrollWindowEx](../Topic/CWnd::ScrollWindowEx.md)|Scorre il contenuto dell'area client.  Simile a `ScrollWindow`, con funzionalità aggiuntive.|  
|[CWnd::SendChildNotifyLastMsg](../Topic/CWnd::SendChildNotifyLastMsg.md)|Fornisce un messaggio di notifica a una finestra figlio, dalla finestra padre, in modo che la finestra figlio possa gestire un'attività.|  
|[CWnd::SendDlgItemMessage](../Topic/CWnd::SendDlgItemMessage.md)|Invia un messaggio al controllo specificato.|  
|[CWnd::SendMessage](../Topic/CWnd::SendMessage.md)|Invia un messaggio all'oggetto `CWnd` e non restituisce il controllo fino a quando non ha elaborato il messaggio.|  
|[CWnd::SendMessageToDescendants](../Topic/CWnd::SendMessageToDescendants.md)|Invia un messaggio a tutte le finestre discendenti della finestra.|  
|[CWnd::SendNotifyMessage](../Topic/CWnd::SendNotifyMessage.md)|Invia il messaggio specificato alla finestra e restituisce il controllo il prima possibile, a seconda che il thread chiamante abbia creato la finestra.|  
|[CWnd::SetActiveWindow](../Topic/CWnd::SetActiveWindow.md)|Attiva la finestra.|  
|[CWnd::SetCapture](../Topic/CWnd::SetCapture.md)|Determina l'invio di tutto l'input da mouse successivo a `CWnd`.|  
|[CWnd::SetCaretPos](../Topic/CWnd::SetCaretPos.md)|Sposta il cursore in una posizione specificata.|  
|[CWnd::SetClipboardViewer](../Topic/CWnd::SetClipboardViewer.md)|Aggiunge `CWnd` alla catena di finestre che ricevono notifica di ogni modifica del contenuto degli Appunti.|  
|[CWnd::SetDlgCtrlID](../Topic/CWnd::SetDlgCtrlID.md)|Imposta l'ID di controllo o finestra per la finestra \(che può essere qualsiasi finestra figlio e non solo un controllo in una finestra di dialogo\).|  
|[CWnd::SetDlgItemInt](../Topic/CWnd::SetDlgItemInt.md)|Imposta il testo di un controllo su una stringa che rappresenta un valore Integer.|  
|[CWnd::SetDlgItemText](../Topic/CWnd::SetDlgItemText.md)|Imposta la didascalia o il testo di un controllo nella finestra di dialogo specificata.|  
|[CWnd::SetFocus](../Topic/CWnd::SetFocus.md)|Richiede lo stato attivo per l'input.|  
|[CWnd::SetFont](../Topic/CWnd::SetFont.md)|Imposta il tipo di carattere corrente.|  
|[CWnd::SetForegroundWindow](../Topic/CWnd::SetForegroundWindow.md)|Posiziona il thread che ha creato la finestra in primo piano e attiva la finestra.|  
|[CWnd::SetIcon](../Topic/CWnd::SetIcon.md)|Imposta l'handle su un'icona specifica.|  
|[CWnd::SetLayeredWindowAttributes](../Topic/CWnd::SetLayeredWindowAttributes.md)|Imposta la chiave di colore per trasparenza e opacità di una finestra a livelli.|  
|[CWnd::SetMenu](../Topic/CWnd::SetMenu.md)|Imposta il menu sul menu specificato.|  
|[CWnd::SetOwner](../Topic/CWnd::SetOwner.md)|Cambia il proprietario di un oggetto `CWnd`.|  
|[CWnd::SetParent](../Topic/CWnd::SetParent.md)|Cambia la finestra padre.|  
|[CWnd::SetProperty](../Topic/CWnd::SetProperty.md)|Imposta una proprietà di un controllo ActiveX.|  
|[CWnd::SetRedraw](../Topic/CWnd::SetRedraw.md)|Consente di ridisegnare le modifiche in `CWnd` oppure impedisce che vengano ridisegnate.|  
|[CWnd::SetScrollInfo](../Topic/CWnd::SetScrollInfo.md)|Imposta informazioni sulla barra di scorrimento.|  
|[CWnd::SetScrollPos](../Topic/CWnd::SetScrollPos.md)|Imposta la posizione corrente di una casella di scorrimento e, se specificato, ridisegna la barra di scorrimento in base alla nuova posizione.|  
|[CWnd::SetScrollRange](../Topic/CWnd::SetScrollRange.md)|Imposta i valori di posizione minima e massima correnti per la barra di scorrimento specificata.|  
|[CWnd::SetTimer](../Topic/CWnd::SetTimer.md)|Installa un timer di sistema che invia un messaggio [WM\_TIMER](../Topic/CWnd::OnTimer.md) all'attivazione.|  
|[CWnd::SetWindowContextHelpId](../Topic/CWnd::SetWindowContextHelpId.md)|Imposta l'identificatore di contesto della Guida.|  
|[CWnd::SetWindowPlacement](../Topic/CWnd::SetWindowPlacement.md)|Imposta lo stato di visualizzazione e le posizioni normale \(ripristinata\), ridotta a icona e ingrandita per una finestra.|  
|[CWnd::SetWindowPos](../Topic/CWnd::SetWindowPos.md)|Modifica dimensioni, posizione e ordinamento delle finestre figlio, popup e di primo livello.|  
|[CWnd::SetWindowRgn](../Topic/CWnd::SetWindowRgn.md)|Imposta l'area di una finestra.|  
|[CWnd::SetWindowText](../Topic/CWnd::SetWindowText.md)|Imposta il testo o il titolo della didascalia \(se disponibile\) della finestra sul testo specificato.|  
|[CWnd::ShowCaret](../Topic/CWnd::ShowCaret.md)|Mostra il cursore sullo schermo in corrispondenza della posizione corrente del cursore.  Dopo la visualizzazione, il cursore inizia a lampeggiare automaticamente.|  
|[CWnd::ShowOwnedPopups](../Topic/CWnd::ShowOwnedPopups.md)|Mostra o nasconde tutte le finestre popup appartenenti alla finestra.|  
|[CWnd::ShowScrollBar](../Topic/CWnd::ShowScrollBar.md)|Visualizza o nasconde una barra di scorrimento.|  
|[CWnd::ShowWindow](../Topic/CWnd::ShowWindow.md)|Mostra o nasconde la finestra.|  
|[CWnd::SubclassDlgItem](../Topic/CWnd::SubclassDlgItem.md)|Collega un controllo di Windows a un oggetto `CWnd` e lo imposta per l'indirizzamento dei messaggi tramite la mappa messaggi di `CWnd`.|  
|[CWnd::SubclassWindow](../Topic/CWnd::SubclassWindow.md)|Collega una finestra a un oggetto `CWnd` e lo imposta per l'indirizzamento dei messaggi tramite la mappa messaggi di `CWnd`.|  
|[CWnd::UnlockWindowUpdate](../Topic/CWnd::UnlockWindowUpdate.md)|Sblocca una finestra che è stata bloccata con `CWnd::LockWindowUpdate`.|  
|[CWnd::UnsubclassWindow](../Topic/CWnd::UnsubclassWindow.md)|Scollega una finestra da un oggetto `CWnd` .|  
|[CWnd::UpdateData](../Topic/CWnd::UpdateData.md)|Inizializza o recupera dati da una finestra di dialogo.|  
|[CWnd::UpdateDialogControls](../Topic/CWnd::UpdateDialogControls.md)|Chiamata eseguita per aggiornare lo stato dei pulsanti e di altri controlli della finestra di dialogo.|  
|[CWnd::UpdateLayeredWindow](../Topic/CWnd::UpdateLayeredWindow.md)|Aggiorna posizione, dimensioni, forma, contenuto e traslucidità di una finestra a livelli.|  
|[CWnd::UpdateWindow](../Topic/CWnd::UpdateWindow.md)|Aggiorna l'area client.|  
|[CWnd::ValidateRect](../Topic/CWnd::ValidateRect.md)|Convalida l'area client all'interno del rettangolo specificato mediante la rimozione del rettangolo dall'area di aggiornamento corrente.|  
|[CWnd::ValidateRgn](../Topic/CWnd::ValidateRgn.md)|Convalida l'area client all'interno dell'area specificata mediante la rimozione dell'area dall'area di aggiornamento corrente.|  
|[CWnd::WindowFromPoint](../Topic/CWnd::WindowFromPoint.md)|Identifica la finestra che contiene il punto specificato.|  
|[CWnd::WinHelp](../Topic/CWnd::WinHelp.md)|Chiamata eseguita per avviare l'applicazione WinHelp.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWnd::Default](../Topic/CWnd::Default.md)|Chiama la routine predefinita per la finestra, che fornisce l'elaborazione predefinita per gli eventuali messaggi della finestra non elaborati da un'applicazione.|  
|[CWnd::DefWindowProc](../Topic/CWnd::DefWindowProc.md)|Chiama la routine predefinita per la finestra, che fornisce l'elaborazione predefinita per gli eventuali messaggi della finestra non elaborati da un'applicazione.|  
|[CWnd::DoDataExchange](../Topic/CWnd::DoDataExchange.md)|Per inviare, ricevere e convalidare i dati della finestra di dialogo.  Chiamato da `UpdateData`.|  
|[CWnd::GetCurrentMessage](../Topic/CWnd::GetCurrentMessage.md)|Restituisce un puntatore al messaggio che questa finestra sta elaborando.  La chiamata dovrebbe essere eseguita solo in una funzione membro del gestore messaggi `On`*Message*.|  
|[CWnd::InitDynamicLayout](../Topic/CWnd::InitDynamicLayout.md)|Chiamata eseguita dal framework per inizializzare il layout dinamico per la finestra.|  
|[CWnd::LoadDynamicLayoutResource](../Topic/CWnd::LoadDynamicLayoutResource.md)|Carica le informazioni di layout dinamico dal file di risorse.|  
|[CWnd::OnActivate](../Topic/CWnd::OnActivate.md)|Chiamata eseguita quando è in corso l'attivazione o la disattivazione di `CWnd`.|  
|[CWnd::OnActivateApp](../Topic/CWnd::OnActivateApp.md)|Chiamata eseguita quando l'applicazione sta per essere attivata o disattivata.|  
|[CWnd::OnAppCommand](../Topic/CWnd::OnAppCommand.md)|Chiamata eseguita quando l'utente genera un evento di comando per l'applicazione.|  
|[CWnd::OnAskCbFormatName](../Topic/CWnd::OnAskCbFormatName.md)|Chiamata eseguita da un'applicazione visualizzatore degli Appunti quando un proprietario degli Appunti visualizza il contenuto degli Appunti.|  
|[CWnd::OnCancelMode](../Topic/CWnd::OnCancelMode.md)|Chiamata eseguita per consentire a `CWnd` di annullare eventuali modalità interne, ad esempio mouse capture.|  
|[CWnd::OnCaptureChanged](../Topic/CWnd::OnCaptureChanged.md)|Invia un messaggio alla finestra che sta perdendo il mouse capture.|  
|[CWnd::OnChangeCbChain](../Topic/CWnd::OnChangeCbChain.md)|Invia notifica che una finestra specificata sta per essere rimossa dalla catena.|  
|[CWnd::OnChangeUIState](../Topic/CWnd::OnChangeUIState.md)|Chiamata eseguita quando lo stato dell'interfaccia utente deve essere modificato.|  
|[CWnd::OnChar](../Topic/CWnd::OnChar.md)|Chiamata eseguita quando una sequenza di tasti viene convertita in un carattere non di sistema.|  
|[CWnd::OnCharToItem](../Topic/CWnd::OnCharToItem.md)|Chiamata eseguita da una casella di riepilogo figlio con lo stile [LBS\_WANTKEYBOARDINPUT](../../mfc/reference/list-box-styles.md) in risposta a un messaggio [WM\_CHAR](../Topic/CWnd::OnChar.md).|  
|[CWnd::OnChildActivate](../Topic/CWnd::OnChildActivate.md)|Chiamata eseguita per più finestre figlio dell'interfaccia a documenti multipli \(MDI\) ogni volta che cambiano le dimensioni o la posizione di `CWnd` o viene attivato l'oggetto `CWnd`.|  
|[CWnd::OnChildNotify](../Topic/CWnd::OnChildNotify.md)|Chiamata eseguita da una finestra padre per offrire a un controllo di notifica la possibilità di rispondere a una notifica del controllo.|  
|[CWnd::OnClipboardUpdate](../Topic/CWnd::OnClipboardUpdate.md)|Chiamata eseguita quando il contenuto degli Appunti viene modificato.|  
|[CWnd::OnClose](../Topic/CWnd::OnClose.md)|Chiamata eseguita per segnalare che l'oggetto `CWnd` deve essere chiuso.|  
|[CWnd::OnColorizationColorChanged](../Topic/CWnd::OnColorizationColorChanged.md)|Chiamata eseguita quando i criteri di rendering per l'area non client vengono modificati.|  
|[CWnd::OnCommand](../Topic/CWnd::OnCommand.md)|Chiamata eseguita quando l'utente seleziona un comando.|  
|[CWnd::OnCompacting](../Topic/CWnd::OnCompacting.md)|Chiamata eseguita quando Windows rileva la memoria di sistema è insufficiente.|  
|[CWnd::OnCompareItem](../Topic/CWnd::OnCompareItem.md)|Chiamata eseguita per determinare la posizione relativa di un nuovo elemento in una casella combinata o casella di riepilogo disegnata dal proprietario e ordinata in base agli elementi figlio.|  
|[CWnd::OnCompositionChanged](../Topic/CWnd::OnCompositionChanged.md)|Chiamata eseguita per tutte le finestre di primo livello quando la composizione di Gestione finestre desktop viene abilitata o disabilitata.|  
|[CWnd::OnContextMenu](../Topic/CWnd::OnContextMenu.md)|Chiamata eseguita quando l'utente fa clic con il pulsante destro del mouse nella finestra.|  
|[CWnd::OnCopyData](../Topic/CWnd::OnCopyData.md)|Copia i dati da un'applicazione a un'altra.|  
|[CWnd::OnCreate](../Topic/CWnd::OnCreate.md)|Chiamata eseguita durante la creazione della finestra.|  
|[CWnd::OnCtlColor](../Topic/CWnd::OnCtlColor.md)|Chiamata eseguita se `CWnd` è l'elemento padre di un controllo quando il controllo sta per essere disegnato.|  
|[CWnd::OnDeadChar](../Topic/CWnd::OnDeadChar.md)|Chiamata eseguita quando una sequenza di tasti viene convertita in un carattere non utilizzato non di sistema \(come i caratteri accentati\).|  
|[CWnd::OnDeleteItem](../Topic/CWnd::OnDeleteItem.md)|Chiamata eseguita quando viene eliminata in modo permanente una casella di riepilogo o una casella combinata figlio disegnata dal proprietario o quando vengono rimossi elementi dal controllo.|  
|[CWnd::OnDestroy](../Topic/CWnd::OnDestroy.md)|Chiamata eseguita quando viene eliminato in modo permanente l'oggetto `CWnd`.|  
|[CWnd::OnDestroyClipboard](../Topic/CWnd::OnDestroyClipboard.md)|Chiamata eseguita quando vengono svuotati egli Appunti tramite una chiamata alla funzione di Windows [EmptyClipboard](http://msdn.microsoft.com/library/windows/desktop/ms649037).|  
|[CWnd::OnDeviceChange](../Topic/CWnd::OnDeviceChange.md)|Invia notifica a un'applicazione o driver di dispositivo di una modifica alla configurazione hardware di un dispositivo o del computer.|  
|[CWnd::OnDevModeChange](../Topic/CWnd::OnDevModeChange.md)|Chiamata eseguita per tutte le finestre di primo livello quando l'utente modifica le impostazioni della modalità dispositivo.|  
|[CWnd::OnDrawClipboard](../Topic/CWnd::OnDrawClipboard.md)|Chiamata eseguita quando il contenuto degli Appunti viene modificato.|  
|[CWnd::OnDrawItem](../Topic/CWnd::OnDrawItem.md)|Chiamata eseguita quando deve essere disegnato un aspetto visivo di un controllo pulsante, controllo casella combinata, controllo casella di riepilogo o menu figlio disegnato dal proprietario.|  
|[CWnd::OnDropFiles](../Topic/CWnd::OnDropFiles.md)|Chiamata eseguita quando l'utente rilascia il pulsante sinistro del mouse su una finestra che si è registrata come destinatario dei file rilasciati.|  
|[CWnd::OnEnable](../Topic/CWnd::OnEnable.md)|Chiamata eseguita in caso di abilitazione o disabilitazione di `CWnd`.|  
|[CWnd::OnEndSession](../Topic/CWnd::OnEndSession.md)|Chiamata eseguita al termine della sessione.|  
|[CWnd::OnEnterIdle](../Topic/CWnd::OnEnterIdle.md)|Chiamata eseguita per informare la routine della finestra principale di un'applicazione che una finestra di dialogo modale o un menu sta entrando in uno stato di inattività.|  
|[CWnd::OnEnterMenuLoop](../Topic/CWnd::OnEnterMenuLoop.md)|Chiamata eseguita all'inizio di un ciclo modale di menu.|  
|[CWnd::OnEnterSizeMove](../Topic/CWnd::OnEnterSizeMove.md)|Chiamata eseguita dopo che la finestra interessata entra in un ciclo modale di spostamento o di ridimensionamento.|  
|[CWnd::OnEraseBkgnd](../Topic/CWnd::OnEraseBkgnd.md)|Chiamata eseguita quando lo sfondo della finestra deve essere cancellato.|  
|[CWnd::OnExitMenuLoop](../Topic/CWnd::OnExitMenuLoop.md)|Chiamata eseguita all'uscita da un ciclo modale di menu.|  
|[CWnd::OnExitSizeMove](../Topic/CWnd::OnExitSizeMove.md)|Chiamata eseguita dopo che la finestra interessata esce da un ciclo modale di spostamento o di ridimensionamento.|  
|[CWnd::OnFontChange](../Topic/CWnd::OnFontChange.md)|Chiamata eseguita quando viene modificato il pool di risorse di tipo di carattere.|  
|[CWnd::OnGetDlgCode](../Topic/CWnd::OnGetDlgCode.md)|Chiamata eseguita per un controllo in modo che il controllo possa elaborare esso stesso l'input con tasto di direzione e tasto TAB.|  
|[CWnd::OnGetMinMaxInfo](../Topic/CWnd::OnGetMinMaxInfo.md)|Chiamata eseguita ogni volta che Windows deve conoscere la posizione o le dimensioni ingrandite oppure le dimensioni minime o massime di rilevamento.|  
|[CWnd::OnHelpInfo](../Topic/CWnd::OnHelpInfo.md)|Chiamata eseguita dal framework quando l'utente preme F1.|  
|[CWnd::OnHotKey](../Topic/CWnd::OnHotKey.md)|Chiamata eseguita quando l'utente preme un tasto di scelta rapida a livello di sistema.|  
|[CWnd::OnHScroll](../Topic/CWnd::OnHScroll.md)|Chiamata eseguita quando l'utente fa clic sulla barra di scorrimento orizzontale di `CWnd`.|  
|[CWnd::OnHScrollClipboard](../Topic/CWnd::OnHScrollClipboard.md)|Chiamata eseguita quando un proprietario degli Appunti deve scorrere l'immagine negli Appunti, invalidare la sezione appropriata e aggiornare i valori della barra di scorrimento.|  
|[CWnd::OnIconEraseBkgnd](../Topic/CWnd::OnIconEraseBkgnd.md)|Chiamata eseguita quando `CWnd` è ridotta a icona ed è necessario riempire lo sfondo dell'icona prima di disegnarla.|  
|[CWnd::OnInitMenu](../Topic/CWnd::OnInitMenu.md)|Chiamata eseguita quando un menu sta per diventare attivo.|  
|[CWnd::OnInitMenuPopup](../Topic/CWnd::OnInitMenuPopup.md)|Chiamata eseguita quando un menu popup sta per diventare attivo.|  
|[CWnd::OnInputDeviceChange](../Topic/CWnd::OnInputDeviceChange.md)|Chiamata eseguita quando un dispositivo di I\/O viene aggiunto o rimosso dal sistema.|  
|[CWnd::OnInputLangChange](../Topic/CWnd::OnInputLangChange.md)|Chiamata eseguita dopo la modifica della lingua di input di un'applicazione.|  
|[CWnd::OnInputLangChangeRequest](../Topic/CWnd::OnInputLangChangeRequest.md)|Chiamata eseguita quando l'utente sceglie una nuova lingua di input.|  
|[CWnd::OnKeyDown](../Topic/CWnd::OnKeyDown.md)|Chiamata eseguita quando viene premuto un tasto non di sistema.|  
|[CWnd::OnKeyUp](../Topic/CWnd::OnKeyUp.md)|Chiamata eseguita quando viene rilasciato un tasto non di sistema.|  
|[CWnd::OnKillFocus](../Topic/CWnd::OnKillFocus.md)|Chiamata eseguita immediatamente prima che `CWnd` perda lo stato attivo per l'input.|  
|[CWnd::OnLButtonDblClk](../Topic/CWnd::OnLButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic con il pulsante sinistro del mouse.|  
|[CWnd::OnLButtonDown](../Topic/CWnd::OnLButtonDown.md)|Chiamata eseguita quando l'utente preme il pulsante sinistro del mouse.|  
|[CWnd::OnLButtonUp](../Topic/CWnd::OnLButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante sinistro del mouse.|  
|[CWnd::OnMButtonDblClk](../Topic/CWnd::OnMButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic con il pulsante centrale del mouse.|  
|[CWnd::OnMButtonDown](../Topic/CWnd::OnMButtonDown.md)|Chiamata eseguita quando l'utente preme il pulsante centrale del mouse.|  
|[CWnd::OnMButtonUp](../Topic/CWnd::OnMButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante centrale del mouse.|  
|[CWnd::OnMDIActivate](../Topic/CWnd::OnMDIActivate.md)|Chiamata eseguita quando una finestra figlio MDI viene attivata o disattivata.|  
|[CWnd::OnMeasureItem](../Topic/CWnd::OnMeasureItem.md)|Chiamata eseguita per una casella combinata, una casella di riepilogo o una voce di menu figlio disegnata dal proprietario quando il controllo viene creato.  `CWnd` informa Windows delle dimensioni del controllo.|  
|[CWnd::OnMenuChar](../Topic/CWnd::OnMenuChar.md)|Chiamata eseguita quando l'utente preme tasto di scelta di menu che non corrisponde ad alcuno dei tasti di scelta predefiniti nel menu corrente.|  
|[CWnd::OnMenuDrag](../Topic/CWnd::OnMenuDrag.md)|Chiamata eseguita quando l'utente inizia a trascinare una voce di menu.|  
|[CWnd::OnMenuGetObject](../Topic/CWnd::OnMenuGetObject.md)|Chiamata eseguita quando il cursore del mouse passa su una voce di menu o viene spostato dal centro della voce verso la relativa parte superiore o inferiore.|  
|[CWnd::OnMenuRButtonUp](../Topic/CWnd::OnMenuRButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante destro del mouse mentre il cursore si trova su una voce di menu.|  
|[CWnd::OnMenuSelect](../Topic/CWnd::OnMenuSelect.md)|Chiamata eseguita quando l'utente seleziona una voce di menu.|  
|[CWnd::OnMouseActivate](../Topic/CWnd::OnMouseActivate.md)|Chiamata eseguita quando il cursore si trova in una finestra inattiva e l'utente preme un pulsante del mouse.|  
|[CWnd::OnMouseHover](../Topic/CWnd::OnMouseHover.md)|Chiamata eseguita al passaggio del cursore sull'area client della finestra per il periodo di tempo specificato in una chiamata precedente a [TrackMouseEvent](http://msdn.microsoft.com/library/windows/desktop/ms646265).|  
|[CWnd::OnMouseHWheel](../Topic/CWnd::OnMouseHWheel.md)|Chiamata eseguita quando la finestra corrente è composta da Gestione finestre desktop e tale finestra è ingrandita.|  
|[CWnd::OnMouseLeave](../Topic/CWnd::OnMouseLeave.md)|Chiamata eseguita quando il cursore esce dall'area client della finestra specificata in una chiamata precedente a [TrackMouseEvent](http://msdn.microsoft.com/library/windows/desktop/ms646265).|  
|[CWnd::OnMouseMove](../Topic/CWnd::OnMouseMove.md)|Chiamata eseguita alla spostamento del cursore del mouse.|  
|[CWnd::OnMouseWheel](../Topic/CWnd::OnMouseWheel.md)|Chiamata eseguita quando un utente ruota la rotellina del mouse.  Usa la gestione dei messaggi di Windows NT 4.0.|  
|[CWnd::OnMove](../Topic/CWnd::OnMove.md)|Chiamata eseguita dopo la modifica della posizione di `CWnd`.|  
|[CWnd::OnMoving](../Topic/CWnd::OnMoving.md)|Indica che un utente sta spostando un oggetto `CWnd`.|  
|[CWnd::OnNcActivate](../Topic/CWnd::OnNcActivate.md)|Chiamata eseguita quando l'area non client deve essere modificata per indicare uno stato attivo o inattivo.|  
|[CWnd::OnNcCalcSize](../Topic/CWnd::OnNcCalcSize.md)|Chiamata eseguita quando devono essere calcolate le dimensioni e la posizione dell'area client.|  
|[CWnd::OnNcCreate](../Topic/CWnd::OnNcCreate.md)|Chiamata eseguita prima di [OnCreate](../Topic/CWnd::OnCreate.md) quando viene creata l'area non client.|  
|[CWnd::OnNcDestroy](../Topic/CWnd::OnNcDestroy.md)|Chiamata eseguita quando l'area non client viene eliminata in modo permanente.|  
|[CWnd::OnNcHitTest](../Topic/CWnd::OnNcHitTest.md)|Chiamata eseguita da Windows ogni volta che il mouse viene spostato se `CWnd` contiene il cursore o ha acquisito l'input del mouse con `SetCapture`.|  
|[CWnd::OnNcLButtonDblClk](../Topic/CWnd::OnNcLButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic sul pulsante sinistro del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcLButtonDown](../Topic/CWnd::OnNcLButtonDown.md)|Chiamata eseguita quando l'utente preme il pulsante sinistro del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcLButtonUp](../Topic/CWnd::OnNcLButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante sinistro del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcMButtonDblClk](../Topic/CWnd::OnNcMButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic sul pulsante centrale del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcMButtonDown](../Topic/CWnd::OnNcMButtonDown.md)|Chiamata eseguita quando l'utente preme il pulsante centrale del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcMButtonUp](../Topic/CWnd::OnNcMButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante centrale del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcMouseHover](../Topic/CWnd::OnNcMouseHover.md)|Chiamata eseguita al passaggio del cursore sull'area non client della finestra per il periodo di tempo specificato in una chiamata precedente a [TrackMouseEvent](http://msdn.microsoft.com/library/windows/desktop/ms646265).|  
|[CWnd::OnNcMouseLeave](../Topic/CWnd::OnNcMouseLeave.md)|Questa funzione membro viene chiamata dal framework quando il cursore esce dall'area non client della finestra specificata in una chiamata precedente a [TrackMouseEvent](http://msdn.microsoft.com/library/windows/desktop/ms646265).|  
|[CWnd::OnNcMouseMove](../Topic/CWnd::OnNcMouseMove.md)|Chiamata eseguita quando il cursore viene spostato all'interno di un'area non client di `CWnd`.|  
|[CWnd::OnNcPaint](../Topic/CWnd::OnNcPaint.md)|Chiamata eseguita quando l'area non client deve essere disegnata.|  
|[CWnd::OnNcRButtonDblClk](../Topic/CWnd::OnNcRButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic sul pulsante destro del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcRButtonDown](../Topic/CWnd::OnNcRButtonDown.md)|Chiamata eseguita quando l'utente preme il pulsante destro del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcRButtonUp](../Topic/CWnd::OnNcRButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante destro del mouse mentre il cursore si trova nell'area client di `CWnd`.|  
|[CWnd::OnNcRenderingChanged](../Topic/CWnd::OnNcRenderingChanged.md)|Chiamata eseguita quando i criteri di rendering per l'area non client vengono modificati.|  
|[CWnd::OnNcXButtonDblClk](../Topic/CWnd::OnNcXButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic con XBUTTON1 o XBUTTON2 mentre il cursore si trova nell'area non client della finestra.|  
|[CWnd::OnNcXButtonDown](../Topic/CWnd::OnNcXButtonDown.md)|Chiamata eseguita quando l'utente preme il pulsante XBUTTON1 o XBUTTON2 del mouse mentre il cursore si trova nell'area non client della finestra.|  
|[CWnd::OnNcXButtonUp](../Topic/CWnd::OnNcXButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante XBUTTON1 o XBUTTON2 del mouse mentre il cursore si trova nell'area non client della finestra.|  
|[CWnd::OnNextMenu](../Topic/CWnd::OnNextMenu.md)|Chiamata eseguita quando il tasto freccia DESTRA o freccia SINISTRA viene usato per passare dalla barra dei menu al menu di sistema e viceversa.|  
|[CWnd::OnNotify](../Topic/CWnd::OnNotify.md)|Chiamata eseguita dal framework per informare una finestra padre che si è verificato un evento in uno dei relativi controlli o che il controllo richiede informazioni.|  
|[CWnd::OnNotifyFormat](../Topic/CWnd::OnNotifyFormat.md)|Chiamata eseguita per determinare se la finestra corretta accetta strutture ANSI o Unicode nel messaggio di notifica WM\_NOTIFY.|  
|[CWnd::OnPaint](../Topic/CWnd::OnPaint.md)|Chiamata eseguita per ridisegnare una parte della finestra.|  
|[CWnd::OnPaintClipboard](../Topic/CWnd::OnPaintClipboard.md)|Chiamata eseguita quando l'area client del visualizzatore degli Appunti deve essere ridisegnata.|  
|[CWnd::OnPaletteChanged](../Topic/CWnd::OnPaletteChanged.md)|Chiamata eseguita per consentire alle finestre che usano una tavolozza dei colori di realizzare le tavolozze logiche e aggiornare le rispettive aree client.|  
|[CWnd::OnPaletteIsChanging](../Topic/CWnd::OnPaletteIsChanging.md)|Informa altre applicazioni quando un'applicazione sta per realizzare la propria tavolozza logica.|  
|[CWnd::OnParentNotify](../Topic/CWnd::OnParentNotify.md)|Chiamata eseguita quando una finestra figlio viene creata o eliminata in modo permanente oppure quando l'utente fa clic su un pulsante del mouse mentre il cursore è posizionato sopra la finestra figlio.|  
|[CWnd::OnPowerBroadcast](../Topic/CWnd::OnPowerBroadcast.md)|Chiamata eseguita quando si verifica un evento di risparmio energia.|  
|[CWnd::OnQueryDragIcon](../Topic/CWnd::OnQueryDragIcon.md)|Chiamata eseguita quando un oggetto `CWnd` ridotto a icona sta per essere trascinato dall'utente.|  
|[CWnd::OnQueryEndSession](../Topic/CWnd::OnQueryEndSession.md)|Chiamata eseguita quando l'utente sceglie di terminare la sessione di Windows.|  
|[CWnd::OnQueryNewPalette](../Topic/CWnd::OnQueryNewPalette.md)|Informa `CWnd` che sta per ricevere lo stato attivo per l'input.|  
|[CWnd::OnQueryOpen](../Topic/CWnd::OnQueryOpen.md)|Chiamata eseguita quando `CWnd` è un'icona e l'utente richiede l'apertura dell'icona.|  
|[CWnd::OnQueryUIState](../Topic/CWnd::OnQueryUIState.md)|Chiamata eseguita per recuperare lo stato dell'interfaccia utente per una finestra.|  
|[CWnd::OnRawInput](../Topic/CWnd::OnRawInput.md)|Chiamata eseguita quando la finestra corrente riceve input non elaborato.|  
|[CWnd::OnRButtonDblClk](../Topic/CWnd::OnRButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic con il pulsante destro del mouse.|  
|[CWnd::OnRButtonDown](../Topic/CWnd::OnRButtonDown.md)|Chiamata eseguita quando l'utente preme il pulsante destro del mouse.|  
|[CWnd::OnRButtonUp](../Topic/CWnd::OnRButtonUp.md)|Chiamata eseguita quando l'utente rilascia il pulsante destro del mouse.|  
|[CWnd::OnRenderAllFormats](../Topic/CWnd::OnRenderAllFormats.md)|Chiamata eseguita quando l'applicazione proprietaria viene eliminata in modo permanente e deve eseguire il rendering di tutti i formati.|  
|[CWnd::OnRenderFormat](../Topic/CWnd::OnRenderFormat.md)|Chiamata eseguita per il proprietario degli Appunti quando è necessario eseguire il rendering di un formato particolare con rendering ritardato.|  
|[CWnd::OnSessionChange](../Topic/CWnd::OnSessionChange.md)|Chiamata eseguita per notificare a un'applicazione una modifica nello stato della sessione.|  
|[CWnd::OnSetCursor](../Topic/CWnd::OnSetCursor.md)|Chiamata eseguita se l'input del mouse non viene acquisto e il mouse causa lo spostamento del cursore all'interno di una finestra.|  
|[CWnd::OnSetFocus](../Topic/CWnd::OnSetFocus.md)|Chiamata eseguita dopo che `CWnd` ottiene lo stato attivo per l'input.|  
|[CWnd::OnSettingChange](../Topic/CWnd::OnSettingChange.md)|Chiamata eseguita quando la funzione Win32 `SystemParametersInfo` modifica un'impostazione a livello di sistema.|  
|[CWnd::OnShowWindow](../Topic/CWnd::OnShowWindow.md)|Chiamata eseguita quando `CWnd` deve essere nascosto o visualizzato.|  
|[CWnd::OnSize](../Topic/CWnd::OnSize.md)|Chiamata eseguita dopo la modifica delle dimensioni di `CWnd`.|  
|[CWnd::OnSizeClipboard](../Topic/CWnd::OnSizeClipboard.md)|Chiamata eseguita quando cambiano le dimensioni dell'area client della finestra del visualizzatore degli Appunti.|  
|[CWnd::OnSizing](../Topic/CWnd::OnSizing.md)|Indica che l'utente sta ridimensionando il rettangolo.|  
|[CWnd::OnSpoolerStatus](../Topic/CWnd::OnSpoolerStatus.md)|Chiamata eseguita da Print Manager ogni volta che un processo viene aggiunto o rimosso dalla coda di Print Manager.|  
|[CWnd::OnStyleChanged](../Topic/CWnd::OnStyleChanged.md)|Indica che la funzione di Windows [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) ha modificato uno o più stili della finestra.|  
|[CWnd::OnStyleChanging](../Topic/CWnd::OnStyleChanging.md)|Indica che la funzione di Windows [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) sta per modificare uno o più stili della finestra.|  
|[CWnd::OnSysChar](../Topic/CWnd::OnSysChar.md)|Chiamata eseguita quando una sequenza di tasti viene convertita in un carattere di sistema.|  
|[CWnd::OnSysColorChange](../Topic/CWnd::OnSysColorChange.md)|Chiamata eseguita per tutte le finestre di primo livello in seguito alla modifica delle impostazioni di colore del sistema.|  
|[CWnd::OnSysCommand](../Topic/CWnd::OnSysCommand.md)|Chiamata eseguita quando l'utente seleziona un comando dal menu di controllo o quando l'utente seleziona il pulsante di ingrandimento o riduzione a icona.|  
|[CWnd::OnSysDeadChar](../Topic/CWnd::OnSysDeadChar.md)|Chiamata eseguita quando una sequenza di tasti viene convertita in un carattere non utilizzato di sistema \(come i caratteri accentati\).|  
|[CWnd::OnSysKeyDown](../Topic/CWnd::OnSysKeyDown.md)|Chiamata eseguita quando l'utente tiene premuto il tasto ALT e quindi ne preme un altro.|  
|[CWnd::OnSysKeyUp](../Topic/CWnd::OnSysKeyUp.md)|Chiamata eseguita quando l'utente rilascia un tasto premuto mentre il tasto ALT era premuto.|  
|[CWnd::OnTCard](../Topic/CWnd::OnTCard.md)|Chiamata eseguita quando l'utente fa clic su un pulsante modificabile.|  
|[CWnd::OnTimeChange](../Topic/CWnd::OnTimeChange.md)|Chiamata eseguita per tutte le finestre di primo livello dopo la modifica dell'ora di sistema.|  
|[CWnd::OnTimer](../Topic/CWnd::OnTimer.md)|Chiamata eseguita dopo ogni intervallo specificato in [SetTimer](../Topic/CWnd::SetTimer.md).|  
|[CWnd::OnTouchInput](../Topic/CWnd::OnTouchInput.md)|Consente di elaborare singoli input tramite tocco di Windows.|  
|[CWnd::OnTouchInputs](../Topic/CWnd::OnTouchInputs.md)|Consente di elaborare input tramite tocco di Windows.|  
|[CWnd::OnUniChar](../Topic/CWnd::OnUniChar.md)|Chiamata eseguita alla pressione di un tasto.  Ovvero, la finestra corrente ha lo stato attivo per la tastiera e un messaggio [WM\_KEYDOWN](http://msdn.microsoft.com/library/windows/desktop/ms646280) viene convertito dalla funzione [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).|  
|[CWnd::OnUnInitMenuPopup](../Topic/CWnd::OnUnInitMenuPopup.md)|Chiamata eseguita quando un menu a discesa o un sottomenu viene eliminato in modo permanente.|  
|[CWnd::OnUpdateUIState](../Topic/CWnd::OnUpdateUIState.md)|Chiamata eseguita per cambiare lo stato dell'interfaccia utente per la finestra specificata e tutte le finestre figlio.|  
|[CWnd::OnUserChanged](../Topic/CWnd::OnUserChanged.md)|Chiamata eseguita dopo che l'utente ha effettuato l'accesso o la disconnessione.|  
|[CWnd::OnVKeyToItem](../Topic/CWnd::OnVKeyToItem.md)|Chiamata eseguita da una casella di riepilogo di proprietà di `CWnd` in risposta a un messaggio [WM\_KEYDOWN](../Topic/CWnd::OnKeyDown.md).|  
|[CWnd::OnVScroll](../Topic/CWnd::OnVScroll.md)|Chiamata eseguita quando l'utente fa clic sulla barra di scorrimento verticale della finestra.|  
|[CWnd::OnVScrollClipboard](../Topic/CWnd::OnVScrollClipboard.md)|Chiamata eseguita quando il proprietario deve scorrere l'immagine negli Appunti, invalidare la sezione appropriata e aggiornare i valori della barra di scorrimento.|  
|[CWnd::OnWindowPosChanged](../Topic/CWnd::OnWindowPosChanged.md)|Chiamata eseguita quando vengono modificati dimensioni, posizione o ordine Z in seguito a una chiamata a [SetWindowPos](../Topic/CWnd::SetWindowPos.md) o un'altra funzione di gestione delle finestre.|  
|[CWnd::OnWindowPosChanging](../Topic/CWnd::OnWindowPosChanging.md)|Chiamata eseguita quando stanno per essere modificati dimensioni, posizione o ordine Z in seguito a una chiamata a [SetWindowPos](../Topic/CWnd::SetWindowPos.md) o un'altra funzione di gestione delle finestre.|  
|[CWnd::OnWinIniChange](../Topic/CWnd::OnWinIniChange.md)|Chiamata eseguita per tutte le finestre di primo livello dopo la modifica del file di inizializzazione di Windows, WIN.INI.|  
|[CWnd::OnWndMsg](../Topic/CWnd::OnWndMsg.md)|Indica se un messaggio della finestra è stato gestito.|  
|[CWnd::OnXButtonDblClk](../Topic/CWnd::OnXButtonDblClk.md)|Chiamata eseguita quando l'utente fa doppio clic con XBUTTON1 o XBUTTON2 mentre il cursore si trova nell'area client della finestra.|  
|[CWnd::OnXButtonDown](../Topic/CWnd::OnXButtonDown.md)|Chiamata eseguita quando l'utente preme XBUTTON1 o XBUTTON2 mentre il cursore si trova nell'area client della finestra.|  
|[CWnd::OnXButtonUp](../Topic/CWnd::OnXButtonUp.md)|Chiamata eseguita quando l'utente rilascia XBUTTON1 o XBUTTON2 mentre il cursore si trova nell'area client della finestra.|  
|[CWnd::PostNcDestroy](../Topic/CWnd::PostNcDestroy.md)|Questa funzione virtuale viene chiamata dalla funzione [OnNcDestroy](../Topic/CWnd::OnNcDestroy.md) predefinita dopo l'eliminazione permanente della finestra.|  
|[CWnd::ReflectChildNotify](../Topic/CWnd::ReflectChildNotify.md)|Funzione di supporto per la reflection di un messaggio alla relativa origine.|  
|[CWnd::ReflectLastMsg](../Topic/CWnd::ReflectLastMsg.md)|Esegue la reflection dell'ultimo messaggio alla finestra figlio.|  
|[CWnd::ResizeDynamicLayout](../Topic/CWnd::ResizeDynamicLayout.md)|Chiamata eseguita dal framework quando le dimensioni della finestra cambiano per adattare il layout delle finestre figlio, se il layout dinamico è abilitato per la finestra.|  
|[CWnd::WindowProc](../Topic/CWnd::WindowProc.md)|Fornisce una procedura di finestra per un oggetto `CWnd`.  L'impostazione predefinita prevede l'invio dei messaggi tramite la mappa messaggi.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWnd::operator HWND](../Topic/CWnd::operator%20HWND.md)|Chiamata eseguita per ottenere un handle per una finestra.|  
|[CWnd::operator \!\=](../Topic/CWnd::operator%20!=.md)|Determina se una finestra non è la stessa finestra con handle [m\_hWnd](../Topic/CWnd::m_hWnd.md).|  
|[CWnd::operator \=\=](../Topic/CWnd::operator%20==.md)|Determina se una finestra è la stessa finestra con handle [m\_hWnd](../Topic/CWnd::m_hWnd.md).|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWnd::m\_hWnd](../Topic/CWnd::m_hWnd.md)|Indica il valore `HWND` associato a questo oggetto `CWnd`.|  
  
## Note  
 Un oggetto `CWnd` è diverso da una finestra di Windows, ma i due oggetti sono strettamente collegati.  Un oggetto `CWnd` viene creato o eliminato in modo permanente dal costruttore e distruttore `CWnd`.  La finestra di Windows, invece, è una struttura di dati interna di Windows creata da una funzione membro **Create** ed eliminata in modo permanente dal distruttore virtuale `CWnd`.  La funzione [DestroyWindow](../Topic/CWnd::DestroyWindow.md) elimina in modo permanente la finestra di Windows senza eliminare l'oggetto.  
  
 La classe `CWnd` e il meccanismo della mappa messaggi nascondono la funzione **WndProc**.  I messaggi di notifica di Windows in ingresso vengono indirizzati automaticamente tramite la mappa messaggi alle funzioni membro **On***Message* `CWnd` appropriate.  Per gestire un particolare messaggio di un membro nelle classi derivate, è necessario eseguire l'override della funzione membro **On***Message*.  
  
 La classe `CWnd` consente inoltre di creare una finestra figlio di Windows per l'applicazione.  Derivare una classe da `CWnd` e quindi aggiungere le variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione.  Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.  
  
 È possibile creare una finestra figlio in due passaggi.  In primo luogo, chiamare il costruttore `CWnd` per costruire l'oggetto `CWnd`, quindi chiamare la funzione membro [Create](../Topic/CWnd::Create.md) per creare la finestra figlio e collegarla all'oggetto `CWnd`.  
  
 Quando l'utente termina la finestra figlio, eliminare l'oggetto `CWnd` in modo permanente oppure chiamare la funzione membro `DestroyWindow` per rimuovere la finestra ed eliminare in modo permanente le relative strutture dei dati.  
  
 All'interno della libreria Microsoft Foundation Class ulteriori classi sono derivate da `CWnd` per rendere disponibili tipi specifici di finestra.  Molte di queste classi, tra cui [CFrameWnd](../../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md), [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md), [CView](../../mfc/reference/cview-class.md) e [CDialog](../../mfc/reference/cdialog-class.md), sono progettate per consentire ulteriori derivazioni.  Le classi di controllo derivate da `CWnd`, ad esempio [CButton](../../mfc/reference/cbutton-class.md), possono essere usate direttamente o per derivare ulteriori classi.  
  
 Per altre informazioni sull'uso di `CWnd`, vedere [Finestre cornice](../../mfc/frame-windows.md) e [Oggetti finestra](../../mfc/window-objects.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CWnd`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)