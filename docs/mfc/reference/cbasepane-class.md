---
title: "CBasePane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CBasePane::get_accKeyboardShortcut"
  - "CBasePane.get_accKeyboardShortcut"
  - "CBasePane.accSelect"
  - "get_accDefaultAction"
  - "accSelect"
  - "CBasePane.accHitTest"
  - "CBasePane.get_accRole"
  - "get_accKeyboardShortcut"
  - "CBasePane::Serialize"
  - "CBasePane"
  - "CBasePane::get_accDefaultAction"
  - "get_accParent"
  - "CBasePane::accSelect"
  - "accLocation"
  - "CBasePane.get_accDescription"
  - "get_accName"
  - "CBasePane::get_accChildCount"
  - "CBasePane.get_accChild"
  - "CBasePane::accHitTest"
  - "accHitTest"
  - "get_accHelp"
  - "CBasePane.get_accChildCount"
  - "CBasePane.get_accValue"
  - "CBasePane::get_accDescription"
  - "get_accChildCount"
  - "CBasePane.accLocation"
  - "CBasePane.PreTranslateMessage"
  - "CBasePane.get_accName"
  - "PreTranslateMessage"
  - "CBasePane::get_accFocus"
  - "get_accDescription"
  - "CBasePane::get_accRole"
  - "get_accValue"
  - "CBasePane.Serialize"
  - "CBasePane::accLocation"
  - "get_accRole"
  - "CBasePane::get_accChild"
  - "get_accFocus"
  - "CBasePane::get_accHelp"
  - "CBasePane.get_accDefaultAction"
  - "CBasePane.get_accHelp"
  - "CBasePane::PreTranslateMessage"
  - "CBasePane::get_accState"
  - "CBasePane.get_accParent"
  - "CBasePane::get_accParent"
  - "get_accChild"
  - "CBasePane::get_accValue"
  - "Serialize"
  - "get_accState"
  - "CBasePane.get_accState"
  - "CBasePane.get_accFocus"
  - "CBasePane::get_accName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accHitTest method"
  - "accLocation method"
  - "accSelect method"
  - "CBasePane class"
  - "get_accChild method"
  - "get_accChildCount method"
  - "get_accDefaultAction method"
  - "get_accDescription method"
  - "get_accFocus method"
  - "get_accHelp method"
  - "get_accKeyboardShortcut method"
  - "get_accName method"
  - "get_accParent method"
  - "get_accRole method"
  - "get_accState method"
  - "get_accValue method"
  - "PreTranslateMessage method"
  - "Serialize method"
ms.assetid: 8163dd51-d7c7-4def-9c74-61f8ecdfad82
caps.latest.revision: 43
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 44
---
# CBasePane Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Classe base per tutti i riquadri in MFC.  
  
## Sintassi  
  
```  
class CBasePane : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CBasePane::CBasePane`|Costruttore predefinito.|  
|`CBasePane::~CBasePane`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CBasePane::accHitTest`|Chiamato dal framework per recuperare l'elemento figlio o l'oggetto figlio in un determinato punto dello schermo.  \(Override [CWnd::accHitTest](../Topic/CWnd::accHitTest.md)\).|  
|`CBasePane::accLocation`|Chiamato dal framework per recuperare la posizione corrente dello schermo per l'oggetto specificato.  \(Override [CWnd::accLocation](../Topic/CWnd::accLocation.md)\).|  
|[CBasePane::AccNotifyObjectFocusEvent](../Topic/CBasePane::AccNotifyObjectFocusEvent.md)|`CBasePane` non utilizza questo metodo.|  
|`CBasePane::accSelect`|Chiamato dal framework per modificare la selezione o spostare lo stato attivo dell'oggetto specificato.  \(Override [CWnd::accSelect](../Topic/CWnd::accSelect.md)\).|  
|[CBasePane::AddPane](../Topic/CBasePane::AddPane.md)|Aggiunge un riquadro all'amministratore di ancoraggio.|  
|[CBasePane::AdjustDockingLayout](../Topic/CBasePane::AdjustDockingLayout.md)|Reindirizza una chiamata all'amministratore di ancoraggio per impostare il layout di ancoraggio.|  
|[CBasePane::AdjustLayout](../Topic/CBasePane::AdjustLayout.md)|Chiamato dal framework quando il riquadro deve modificare il layout interno.|  
|[CBasePane::CalcFixedLayout](../Topic/CBasePane::CalcFixedLayout.md)|Calcola la dimensione orizzontale di una barra di controllo.|  
|[CBasePane::CanAcceptPane](../Topic/CBasePane::CanAcceptPane.md)|Determina se un altro riquadro può essere ancorato al riquadro.|  
|[CBasePane::CanAutoHide](../Topic/CBasePane::CanAutoHide.md)|Determina se il riquadro supporta la modalità nascondi automaticamente.|  
|[CBasePane::CanBeAttached](../Topic/CBasePane::CanBeAttached.md)|Determina se il riquadro può essere ancorata a un altro riquadro.|  
|[CBasePane::CanBeClosed](../Topic/CBasePane::CanBeClosed.md)|Determina se il riquadro può essere chiuso.|  
|[CBasePane::CanBeDocked](../Topic/CBasePane::CanBeDocked.md)|Determina se il riquadro può essere ancorata a un altro riquadro.|  
|[CBasePane::CanBeResized](../Topic/CBasePane::CanBeResized.md)|Determina se il riquadro può essere ridimensionato.|  
|[CBasePane::CanBeTabbedDocument](../Topic/CBasePane::CanBeTabbedDocument.md)|Specifica se il riquadro può essere convertito in un documento a schede MDI.|  
|[CBasePane::CanFloat](../Topic/CBasePane::CanFloat.md)|Determina se il riquadro è mobile.|  
|[CBasePane::CanFocus](../Topic/CBasePane::CanFocus.md)|Specifica se il riquadro può ricevere lo stato attivo.|  
|[CBasePane::CopyState](../Topic/CBasePane::CopyState.md)|Copiare lo stato di un riquadro specificato.|  
|[CBasePane::CreateDefaultMiniframe](../Topic/CBasePane::CreateDefaultMiniframe.md)|Se il riquadro è mobile, crea una finestra cornice piccola.|  
|[CBasePane::CreateEx](../Topic/CBasePane::CreateEx.md)|Crea il controllo pane.|  
|[CBasePane::DockPane](../Topic/CBasePane::DockPane.md)|Un riquadro a un altro riquadro o una finestra cornice.|  
|[CBasePane::DockPaneUsingRTTI](../Topic/CBasePane::DockPaneUsingRTTI.md)|Nuovamente il riquadro utilizzando le informazioni.|  
|[CBasePane::DockToFrameWindow](../Topic/CBasePane::DockToFrameWindow.md)|Un riquadro ancorabile a un frame.|  
|[CBasePane::DoesAllowDynInsertBefore](../Topic/CBasePane::DoesAllowDynInsertBefore.md)|Determina se un altro riquadro può essere inserito dinamicamente da questo riquadro e il frame padre.|  
|[CBasePane::EnableDocking](../Topic/CBasePane::EnableDocking.md)|Consente l'ancoraggio del riquadro della cornice principale.|  
|[CBasePane::EnableGripper](../Topic/CBasePane::EnableGripper.md)|Abilita o disabilita la pinza di controllo.  Se la pinza di controllo è selezionata, è possibile trascinarlo per riposizionare il riquadro.|  
|`CBasePane::FillWindowRect`|Per uso interno.|  
|[CBasePane::FloatPane](../Topic/CBasePane::FloatPane.md)|Fa float il riquadro.|  
|`CBasePane::get_accChild`|Chiamato dal framework per recuperare l'indirizzo di un'interfaccia `IDispatch` per il figlio specificato.  \(Override [CWnd::get\_accChild](../Topic/CWnd::get_accChild.md)\).|  
|`CBasePane::get_accChildCount`|Chiamato dal framework per recuperare il numero di elementi figlio che appartengono a questo oggetto.  \(Override [CWnd::get\_accChildCount](../Topic/CWnd::get_accChildCount.md)\).|  
|`CBasePane::get_accDefaultAction`|Chiamato dal framework per recuperare una stringa che descrive l'azione predefinita per l'oggetto.  \(Override [CWnd::get\_accDefaultAction](../Topic/CWnd::get_accDefaultAction.md)\).|  
|`CBasePane::get_accDescription`|Chiamato dal framework per recuperare una stringa che descrive l'aspetto visivo dell'oggetto specificato.  \(Override [CWnd::get\_accDescription](../Topic/CWnd::get_accDescription.md)\).|  
|`CBasePane::get_accFocus`|Chiamato dal framework per recuperare l'oggetto che ha lo stato attivo.  \(Override [CWnd::get\_accFocus](../Topic/CWnd::get_accFocus.md)\).|  
|`CBasePane::get_accHelp`|Chiamato dal framework per recuperare una stringa della proprietà della guida per l'oggetto.  \(Override [CWnd::get\_accHelp](../Topic/CWnd::get_accHelp.md)\).|  
|[CBasePane::get\_accHelpTopic](../Topic/CBasePane::get_accHelpTopic.md)|Chiamato dal framework per recuperare il percorso completo del WinHelpfileassociato all'oggetto specificato e l'identificatore dell'argomento appropriato nel file.  \(Override [CWnd::get\_accHelpTopic](../Topic/CWnd::get_accHelpTopic.md)\).|  
|`CBasePane::get_accKeyboardShortcut`|Chiamato dal framework per recuperare il tasto di scelta rapida specificato per l'oggetto.  \(Override [CWnd::get\_accKeyboardShortcut](../Topic/CWnd::get_accKeyboardShortcut.md)\).|  
|`CBasePane::get_accName`|Chiamato dal framework per recuperare il nome dell'oggetto specificato.  \(Override [CWnd::get\_accName](../Topic/CWnd::get_accName.md)\).|  
|`CBasePane::get_accParent`|Chiamato dal framework per recuperare l'interfaccia `IDispatch` per il padre dell'oggetto.  \(Override [CWnd::get\_accParent](../Topic/CWnd::get_accParent.md)\).|  
|`CBasePane::get_accRole`|Chiamato dal framework per recuperare informazioni che descrivono il ruolo dell'oggetto specificato.  \(Override [CWnd::get\_accRole](../Topic/CWnd::get_accRole.md)\).|  
|[CBasePane::get\_accSelection](../Topic/CBasePane::get_accSelection.md)|Chiamato dal framework per recupero di elementi selezionati di questo oggetto.  \(Override [CWnd::get\_accSelection](../Topic/CWnd::get_accSelection.md)\).|  
|`CBasePane::get_accState`|Chiamato dal framework per recuperare lo stato corrente dell'oggetto specificato.  \(Override [CWnd::get\_accState](../Topic/CWnd::get_accState.md)\).|  
|`CBasePane::get_accValue`|Chiamato dal framework per recuperare il valore dell'oggetto specificato.  \(Override [CWnd::get\_accValue](../Topic/CWnd::get_accValue.md)\).|  
|[CBasePane::GetCaptionHeight](../Topic/CBasePane::GetCaptionHeight.md)|Restituisce l'altezza della barra del titolo.|  
|[CBasePane::GetControlBarStyle](../Topic/CBasePane::GetControlBarStyle.md)|Restituisce lo stile della barra di controllo.|  
|[CBasePane::GetCurrentAlignment](../Topic/CBasePane::GetCurrentAlignment.md)|Restituisce l'allineamento corrente del riquadro.|  
|[CBasePane::GetDockingMode](../Topic/CBasePane::GetDockingMode.md)|Restituisce la modalità corrente di ancoraggio per il riquadro.|  
|[CBasePane::GetDockSiteFrameWnd](../Topic/CBasePane::GetDockSiteFrameWnd.md)|Restituisce un puntatore alla finestra dal sito di ancoraggio per il riquadro.|  
|[CBasePane::GetEnabledAlignment](../Topic/CBasePane::GetEnabledAlignment.md)|Restituisce gli stili di CBRS\_ALIGN\_ che si applicano al riquadro.|  
|[CBasePane::GetMFCStyle](../Topic/CBasePane::GetMFCStyle.md)|Restituisce gli stili del riquadro specifici di MFC.|  
|[CBasePane::GetPaneIcon](../Topic/CBasePane::GetPaneIcon.md)|Restituisce l'handle l'icona del riquadro.|  
|`CBasePane::GetPaneRect`|Per uso interno.|  
|[CBasePane::GetPaneRow](../Topic/CBasePane::GetPaneRow.md)|Restituisce un puntatore a un oggetto [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)in cui il riquadro è ancorato.|  
|[CBasePane::GetPaneStyle](../Topic/CBasePane::GetPaneStyle.md)|Restituisce lo stile del riquadro.|  
|[CBasePane::GetParentDockSite](../Topic/CBasePane::GetParentDockSite.md)|Restituisce un puntatore al sito di ancoraggio padre.|  
|[CBasePane::GetParentMiniFrame](../Topic/CBasePane::GetParentMiniFrame.md)|Restituisce un puntatore alla finestra cornice piccola padre.|  
|[CBasePane::GetParentTabbedPane](../Topic/CBasePane::GetParentTabbedPane.md)|Restituisce un puntatore al riquadro a schede padre.|  
|[CBasePane::GetParentTabWnd](../Topic/CBasePane::GetParentTabWnd.md)|Restituisce un puntatore alla finestra padre presente in una scheda.|  
|[CBasePane::GetRecentVisibleState](../Topic/CBasePane::GetRecentVisibleState.md)|Il framework chiama questo metodo quando un riquadro viene ripristinato da un archivio.|  
|[CBasePane::HideInPrintPreviewMode](../Topic/CBasePane::HideInPrintPreviewMode.md)|Specifica se il riquadro è nascosto in anteprima di stampa.|  
|[CBasePane::InsertPane](../Topic/CBasePane::InsertPane.md)|Registra il riquadro specificato con l'amministratore di ancoraggio.|  
|[CBasePane::IsAccessibilityCompatible](../Topic/CBasePane::IsAccessibilityCompatible.md)|Specifica se il riquadro supporta l'accessibilità attiva.|  
|[CBasePane::IsAutoHideMode](../Topic/CBasePane::IsAutoHideMode.md)|Determina se un riquadro è in modalità nascondi automaticamente.|  
|[CBasePane::IsDialogControl](../Topic/CBasePane::IsDialogControl.md)|Specifica se il riquadro è un controllo finestra di dialogo.|  
|[CBasePane::IsDocked](../Topic/CBasePane::IsDocked.md)|Determina se il riquadro è ancorato.|  
|[CBasePane::IsFloating](../Topic/CBasePane::IsFloating.md)|Determina se il riquadro è mobile.|  
|[CBasePane::IsHorizontal](../Topic/CBasePane::IsHorizontal.md)|Determina se il riquadro è ancorato orizzontalmente.|  
|[CBasePane::IsInFloatingMultiPaneFrameWnd](../Topic/CBasePane::IsInFloatingMultiPaneFrameWnd.md)|Specifica se il riquadro è in una finestra cornice a più riquadri.|  
|[CBasePane::IsMDITabbed](../Topic/CBasePane::IsMDITabbed.md)|Determina se il riquadro viene aggiunto a una finestra figlio MDI come documento a schede.|  
|[CBasePane::IsPaneVisible](../Topic/CBasePane::IsPaneVisible.md)|Specifica se il flag `WS_VISIBLE` è impostato per il riquadro.|  
|[CBasePane::IsPointNearDockSite](../Topic/CBasePane::IsPointNearDockSite.md)|Determina se un punto specificato è vicino al sito di ancoraggio.|  
|[CBasePane::IsResizable](../Topic/CBasePane::IsResizable.md)|Determina se il riquadro può essere ridimensionato.|  
|[CBasePane::IsRestoredFromRegistry](../Topic/CBasePane::IsRestoredFromRegistry.md)|Determina se il riquadro viene ripristinato dal Registro di sistema.|  
|[CBasePane::IsTabbed](../Topic/CBasePane::IsTabbed.md)|Determina se il riquadro è stato immesso nel controllo Struttura a schede di una finestra a schede.|  
|`CBasePane::IsTooltipTopmost`|Per uso interno.|  
|[CBasePane::IsVisible](../Topic/CBasePane::IsVisible.md)|Determina se il riquadro è visibile.|  
|[CBasePane::LoadState](../Topic/CBasePane::LoadState.md)|Carica lo stato del riquadro dal Registro di sistema.|  
|[CBasePane::MoveWindow](../Topic/CBasePane::MoveWindow.md)|Consente di spostare il riquadro.|  
|[CBasePane::OnAfterChangeParent](../Topic/CBasePane::OnAfterChangeParent.md)|Chiamato dal framework quando il padre del riquadro è stato modificato.|  
|[CBasePane::OnBeforeChangeParent](../Topic/CBasePane::OnBeforeChangeParent.md)|Chiamato dal framework appena prima del riquadro della finestra padre.|  
|[CBasePane::OnDrawCaption](../Topic/CBasePane::OnDrawCaption.md)|Il framework chiama questo metodo quando la didascalia viene disegnata.|  
|[CBasePane::OnMovePaneDivider](../Topic/CBasePane::OnMovePaneDivider.md)|Questo metodo non è attualmente utilizzato.|  
|[CBasePane::OnPaneContextMenu](../Topic/CBasePane::OnPaneContextMenu.md)|Chiamato dal framework quando si compila un menu con un elenco dei riquadri.|  
|[CBasePane::OnRemoveFromMiniFrame](../Topic/CBasePane::OnRemoveFromMiniFrame.md)|Chiamato dal framework quando un riquadro viene rimosso dalla propria mini finestra cornice padre.|  
|[CBasePane::OnSetAccData](../Topic/CBasePane::OnSetAccData.md)|`CBasePane` non utilizza questo metodo.|  
|`CBasePane::OnUpdateCmdUI`|Per uso interno.|  
|[CBasePane::PaneFromPoint](../Topic/CBasePane::PaneFromPoint.md)|Restituisce il riquadro contenente il punto specificato.|  
|`CBasePane::PreTranslateMessage`|Utilizzato da [CWinApp](../../mfc/reference/cwinapp-class.md) classe per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  \(Override [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md)\).|  
|[CBasePane::RecalcLayout](../Topic/CBasePane::RecalcLayout.md)|`CBasePane` non utilizza questo metodo.|  
|[CBasePane::RemovePaneFromDockManager](../Topic/CBasePane::RemovePaneFromDockManager.md)|Annulla la registrazione di un riquadro e lo rimuove dall'amministratore di ancoraggio.|  
|[CBasePane::SaveState](../Topic/CBasePane::SaveState.md)|Salvare lo stato del riquadro al Registro di sistema.|  
|[CBasePane::SelectDefaultFont](../Topic/CBasePane::SelectDefaultFont.md)|Selezionare il tipo di carattere predefinito per un contesto di dispositivo specificato.|  
|`CBasePane::Serialize`|Lettura o scrittura questo oggetto da o in un archivio.  \(Override [CObject::Serialize](../Topic/CObject::Serialize.md)\).|  
|[CBasePane::SetControlBarStyle](../Topic/CBasePane::SetControlBarStyle.md)|Consente di impostare lo stile della barra di controllo.|  
|[CBasePane::SetDockingMode](../Topic/CBasePane::SetDockingMode.md)|Imposta la modalità di ancoraggio per il riquadro.|  
|`CBasePane::SetMDITabbed`|Per uso interno.|  
|[CBasePane::SetPaneAlignment](../Topic/CBasePane::SetPaneAlignment.md)|Impostato l'allineamento per il riquadro.|  
|`CBasePane::SetPaneRect`|Per uso interno.|  
|[CBasePane::SetPaneStyle](../Topic/CBasePane::SetPaneStyle.md)|Imposta lo stile del riquadro.|  
|`CBasePane::SetRestoredFromRegistry`|Per uso interno.|  
|[CBasePane::SetWindowPos](../Topic/CBasePane::SetWindowPos.md)|Modificare le dimensioni, la posizione e l'ordine Z di un riquadro.|  
|[CBasePane::ShowPane](../Topic/CBasePane::ShowPane.md)|Mostra o nasconde il riquadro.|  
|[CBasePane::StretchPane](../Topic/CBasePane::StretchPane.md)|Adatta un riquadro verticale o orizzontale.|  
|[CBasePane::UndockPane](../Topic/CBasePane::UndockPane.md)|Rimuove il riquadro dal sito di ancoraggio, dal dispositivo di scorrimento predefinito, o dalla finestra cornice piccola in cui è attualmente ancorato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBasePane::DoPaint](../Topic/CBasePane::DoPaint.md)|Riempie lo sfondo del riquadro.|  
  
## Note  
 Se si desidera creare una classe del riquadro che supporta le funzionalità estese di ancoraggio disponibili in MFC, è necessario derivarlo da `CBasePane` o da [CPane Class](../../mfc/reference/cpane-class.md).  
  
## Suggerimenti di personalizzazione  
 I suggerimenti riportati di personalizzazione relative a [CBasePane Class](../../mfc/reference/cbasepane-class.md) e le classi che ereditano da:  
  
-   Quando si crea un riquadro, è possibile applicare diversi nuovi stili:  
  
    -   `AFX_CBRS_FLOAT` esegue il riquadro mobile.  
  
    -   `AFX_CBRS_AUTOHIDE` attiva la modalità nascondi automaticamente.  
  
    -   `AFX_CBRS_CLOSE` consente il riquadro chiudere \(nascosto\).  
  
     Questi sono flag che è possibile combinare con un'operazione OR bit per bit.  
  
     `CBasePane` implementa i metodi seguenti booleani virtuali per riflettere tali flag: [CBasePane::CanBeClosed](../Topic/CBasePane::CanBeClosed.md), [CBasePane::CanAutoHide](../Topic/CBasePane::CanAutoHide.md), [CBasePane::CanFloat](../Topic/CBasePane::CanFloat.md).  È possibile eseguirne l'override nelle classi derivate per personalizzare il comportamento.  
  
-   È possibile personalizzare il comportamento di ancoraggio eseguendo l'override [CBasePane::CanAcceptPane](../Topic/CBasePane::CanAcceptPane.md).  Sia il ritorno `FALSE` il riquadro da questo metodo per impedire un altro pannello di ancoraggio su.  
  
-   Se si desidera creare un riquadro statico che non è mobile e che impedisce qualsiasi altro pannello di ancoraggio prima di \(simile alla barra di Outlook nell'esempio OutlookDemo\), è necessario crearlo come non mobile ed eseguire l'override [CBasePane::DoesAllowDynInsertBefore](../Topic/CBasePane::DoesAllowDynInsertBefore.md) per restituire `FALSE`.  L'implementazione predefinita restituisce `FALSE` se il riquadro viene creato senza lo stile `AFX_CBRS_FLOAT`.  
  
-   Creare i riquadri con gli ID diverso da \-1.  
  
-   Per determinare la visibilità del riquadro, utilizzare [CBasePane::IsVisible](../Topic/CBasePane::IsVisible.md).  Gestisce correttamente lo stato di visibilità in modalità nascondi automaticamente e a schede.  
  
-   Se si desidera creare una finestra ridimensionabile non mobile, è necessario crearlo senza lo stile `AFX_CBRS_FLOAT` e chiamare [CFrameWnd::DockControlBar](../Topic/CFrameWnd::DockControlBar.md).  
  
-   Per escludere un riquadro da un layout di ancoraggio o rimuovere una barra degli strumenti con la relativa barra di ancoraggio, chiamare [CBasePane::UndockPane](../Topic/CBasePane::UndockPane.md).  Non chiamare questo metodo per i riquadri in modalità nascondi automaticamente o per i riquadri che risiedono in schede delle finestre a schede.  
  
-   Se si desidera eseguire mobile o dimensioni come disancorarle un riquadro in modalità nascondi automaticamente, è necessario chiamare [CDockablePane::SetAutoHideMode](../Topic/CDockablePane::SetAutoHideMode.md) con `FALSE` come primo argomento prima di chiamare [CBasePane::FloatPane](../Topic/CBasePane::FloatPane.md) o [CBasePane::UndockPane](../Topic/CBasePane::UndockPane.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CBasePane`.  Nell'esempio seguente viene illustrato come recuperare un riquadro dalla classe `CFrameWndEx` e come impostare la modalità di ancoraggio, l'allineamento del riquadro e lo stile del riquadro.  Il codice proveniente da [Esempio di cuscinetto di Word](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#2](../../mfc/reference/codesnippet/CPP/cbasepane-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
## Requisiti  
 **intestazione:** afxbasepane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPane](../../mfc/reference/cbasepane-class.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)