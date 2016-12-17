---
title: "CMFCBaseTabCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCBaseTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCBaseTabCtrl class"
ms.assetid: 7270c55f-6f6e-4dd2-b0d2-291afeac3882
caps.latest.revision: 41
caps.handback.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCBaseTabCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di base per le finestre a schede.  
  
## Sintassi  
  
```  
class CMFCBaseTabCtrl : public CWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::AddIcon](../Topic/CMFCBaseTabCtrl::AddIcon.md)||  
|[CMFCBaseTabCtrl::AddTab](../Topic/CMFCBaseTabCtrl::AddTab.md)|Aggiunge una nuova scheda alla finestra a schede.|  
|[CMFCBaseTabCtrl::ApplyRestoredTabInfo](../Topic/CMFCBaseTabCtrl::ApplyRestoredTabInfo.md)||  
|[CMFCBaseTabCtrl::AutoDestroyWindow](../Topic/CMFCBaseTabCtrl::AutoDestroyWindow.md)||  
|[CMFCBaseTabCtrl::CalcRectEdit](../Topic/CMFCBaseTabCtrl::CalcRectEdit.md)||  
|[CMFCBaseTabCtrl::CleanUp](../Topic/CMFCBaseTabCtrl::CleanUp.md)||  
|[CMFCBaseTabCtrl::ClearImageList](../Topic/CMFCBaseTabCtrl::ClearImageList.md)||  
|[CMFCBaseTabCtrl::DetachTab](../Topic/CMFCBaseTabCtrl::DetachTab.md)|Scollega una scheda da una finestra a schede.|  
|[CMFCBaseTabCtrl::EnableActivateLastActive](../Topic/CMFCBaseTabCtrl::EnableActivateLastActive.md)||  
|[CMFCBaseTabCtrl::EnableAutoColor](../Topic/CMFCBaseTabCtrl::EnableAutoColor.md)|Abilita o disabilita la colorazione automatica della scheda.|  
|[CMFCBaseTabCtrl::EnableCustomToolTips](../Topic/CMFCBaseTabCtrl::EnableCustomToolTips.md)|Abilita o disabilita le descrizioni comandi personalizzate per le schede.|  
|[CMFCBaseTabCtrl::EnableInPlaceEdit](../Topic/CMFCBaseTabCtrl::EnableInPlaceEdit.md)|Abilita o disabilita la modifica diretta delle etichette delle schede.|  
|[CMFCBaseTabCtrl::EnableTabDetach](../Topic/CMFCBaseTabCtrl::EnableTabDetach.md)|Abilita le schede rimovibili.|  
|[CMFCBaseTabCtrl::EnableTabSwap](../Topic/CMFCBaseTabCtrl::EnableTabSwap.md)|Abilita o disabilita la modifica dell'ordine delle schede con l'uso di un mouse da parte dell'utente.|  
|[CMFCBaseTabCtrl::EnsureVisible](../Topic/CMFCBaseTabCtrl::EnsureVisible.md)|Scorre schede fino a quando la scheda specificata è visibile. Questo metodo non ha alcun effetto se la scheda specificata è già visibile.|  
|[CMFCBaseTabCtrl::EnterDragMode](../Topic/CMFCBaseTabCtrl::EnterDragMode.md)||  
|[CMFCBaseTabCtrl::FindTargetWnd](../Topic/CMFCBaseTabCtrl::FindTargetWnd.md)|Restituisce un riquadro contenente un punto specificato.|  
|[CMFCBaseTabCtrl::FireChangeActiveTab](../Topic/CMFCBaseTabCtrl::FireChangeActiveTab.md)||  
|[CMFCBaseTabCtrl::FireChangingActiveTab](../Topic/CMFCBaseTabCtrl::FireChangingActiveTab.md)||  
|[CMFCBaseTabCtrl::GetActiveTab](../Topic/CMFCBaseTabCtrl::GetActiveTab.md)|Restituisce l'indice della scheda attiva.|  
|[CMFCBaseTabCtrl::GetActiveTabColor](../Topic/CMFCBaseTabCtrl::GetActiveTabColor.md)|Restituisce il colore di sfondo della scheda attiva.|  
|[CMFCBaseTabCtrl::GetActiveTabTextColor](../Topic/CMFCBaseTabCtrl::GetActiveTabTextColor.md)|Restituisce il colore del testo della scheda attiva.|  
|[CMFCBaseTabCtrl::GetActiveWnd](../Topic/CMFCBaseTabCtrl::GetActiveWnd.md)|Restituisce un puntatore della pagina attiva del controllo scheda.|  
|[CMFCBaseTabCtrl::GetAutoColors](../Topic/CMFCBaseTabCtrl::GetAutoColors.md)|Restituisce un riferimento alla matrice di colori usati per la colorazione automatica.|  
|[CMFCBaseTabCtrl::GetFirstVisibleTab](../Topic/CMFCBaseTabCtrl::GetFirstVisibleTab.md)|Restituisce un puntatore alla prima scheda visibile.|  
|[CMFCBaseTabCtrl::GetFirstVisibleTabNum](../Topic/CMFCBaseTabCtrl::GetFirstVisibleTabNum.md)||  
|[CMFCBaseTabCtrl::GetHighlightedTab](../Topic/CMFCBaseTabCtrl::GetHighlightedTab.md)|Restituisce l'indice della scheda attualmente evidenziata.|  
|[CMFCBaseTabCtrl::GetImageList](../Topic/CMFCBaseTabCtrl::GetImageList.md)||  
|[CMFCBaseTabCtrl::GetImageSize](../Topic/CMFCBaseTabCtrl::GetImageSize.md)||  
|[CMFCBaseTabCtrl::GetLastVisibleTab](../Topic/CMFCBaseTabCtrl::GetLastVisibleTab.md)||  
|[CMFCBaseTabCtrl::GetLocation](../Topic/CMFCBaseTabCtrl::GetLocation.md)|Restituisce una variabile del tipo di dati LOCATION che indica dove è posizionata l'area della scheda relativa al controllo scheda. Ad esempio, nella parte superiore o inferiore.|  
|[CMFCBaseTabCtrl::GetMaxWindowSize](../Topic/CMFCBaseTabCtrl::GetMaxWindowSize.md)||  
|[CMFCBaseTabCtrl::GetTabArea](../Topic/CMFCBaseTabCtrl::GetTabArea.md)|Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede. La posizione dell'area della scheda viene definita usando le coordinate.|  
|[CMFCBaseTabCtrl::GetTabBkColor](../Topic/CMFCBaseTabCtrl::GetTabBkColor.md)|Restituisce il colore di sfondo della scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabBorderSize](../Topic/CMFCBaseTabCtrl::GetTabBorderSize.md)|Restituisce le dimensioni dei bordi della scheda del controllo scheda.|  
|[CMFCBaseTabCtrl::GetTabByID](../Topic/CMFCBaseTabCtrl::GetTabByID.md)|Restituisce l'indice della scheda identificato dall'ID specificato.|  
|[CMFCBaseTabCtrl::GetTabCloseButton](../Topic/CMFCBaseTabCtrl::GetTabCloseButton.md)||  
|[CMFCBaseTabCtrl::GetTabFromHwnd](../Topic/CMFCBaseTabCtrl::GetTabFromHwnd.md)|Restituisce l'indice di una scheda che contiene un oggetto HWND specificato.|  
|[CMFCBaseTabCtrl::GetTabFromPoint](../Topic/CMFCBaseTabCtrl::GetTabFromPoint.md)|Restituisce la scheda contenente un punto specificato.|  
|[CMFCBaseTabCtrl::GetTabFullWidth](../Topic/CMFCBaseTabCtrl::GetTabFullWidth.md)||  
|[CMFCBaseTabCtrl::GetTabHicon](../Topic/CMFCBaseTabCtrl::GetTabHicon.md)|Restituisce l'icona associata alla chiave specificata.|  
|[CMFCBaseTabCtrl::GetTabID](../Topic/CMFCBaseTabCtrl::GetTabID.md)|Restituisce l'ID di una scheda usando l'indice della scheda.|  
|[CMFCBaseTabCtrl::GetTabIcon](../Topic/CMFCBaseTabCtrl::GetTabIcon.md)|Restituisce l'ID icona per una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabLabel](../Topic/CMFCBaseTabCtrl::GetTabLabel.md)|Restituisce il testo per una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabRect](../Topic/CMFCBaseTabCtrl::GetTabRect.md)|Recupera le dimensioni e la posizione di una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabsHeight](../Topic/CMFCBaseTabCtrl::GetTabsHeight.md)||  
|[CMFCBaseTabCtrl::GetTabsRect](../Topic/CMFCBaseTabCtrl::GetTabsRect.md)||  
|[CMFCBaseTabCtrl::GetTabTextColor](../Topic/CMFCBaseTabCtrl::GetTabTextColor.md)|Restituisce il colore del testo per una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabWnd](../Topic/CMFCBaseTabCtrl::GetTabWnd.md)|Restituisce il puntatore a un riquadro che si trova su una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabWndNoWrapper](../Topic/CMFCBaseTabCtrl::GetTabWndNoWrapper.md)|Restituisce il puntatore diretto a un controllo che si trova su una scheda specificata, anche se il controllo dispone di un wrapper.|  
|[CMFCBaseTabCtrl::GetTabsNum](../Topic/CMFCBaseTabCtrl::GetTabsNum.md)|Restituisce il numero di schede contenute nel controllo Struttura a schede.|  
|[CMFCBaseTabCtrl::GetToolTipCtrl](../Topic/CMFCBaseTabCtrl::GetToolTipCtrl.md)|Restituisce un riferimento al controllo ToolTip associato all'oggetto `CMFCBaseTabCtrl`.|  
|[CMFCBaseTabCtrl::GetVisibleTabsNum](../Topic/CMFCBaseTabCtrl::GetVisibleTabsNum.md)|Restituisce il numero delle schede visibili.|  
|[CMFCBaseTabCtrl::HasImage](../Topic/CMFCBaseTabCtrl::HasImage.md)||  
|[CMFCBaseTabCtrl::HideSingleTab](../Topic/CMFCBaseTabCtrl::HideSingleTab.md)|Imposta un'opzione che consente di nascondere una scheda della finestra, ma solo se la finestra a schede visualizza una sola scheda visibile.|  
|[CMFCBaseTabCtrl::InsertTab](../Topic/CMFCBaseTabCtrl::InsertTab.md)|Inserisce una nuova scheda.|  
|[CMFCBaseTabCtrl::InvalidateTab](../Topic/CMFCBaseTabCtrl::InvalidateTab.md)||  
|[CMFCBaseTabCtrl::IsActiveTabCloseButton](../Topic/CMFCBaseTabCtrl::IsActiveTabCloseButton.md)||  
|[CMFCBaseTabCtrl::IsAutoColor](../Topic/CMFCBaseTabCtrl::IsAutoColor.md)|Restituisce un valore che indica se una finestra a schede è in modalità colore automatica.|  
|[CMFCBaseTabCtrl::IsAutoDestroyWindow](../Topic/CMFCBaseTabCtrl::IsAutoDestroyWindow.md)||  
|[CMFCBaseTabCtrl::IsColored](../Topic/CMFCBaseTabCtrl::IsColored.md)||  
|[CMFCBaseTabCtrl::IsDialogControl](../Topic/CMFCBaseTabCtrl::IsDialogControl.md)||  
|[CMFCBaseTabCtrl::IsDrawNoPrefix](../Topic/CMFCBaseTabCtrl::IsDrawNoPrefix.md)||  
|[CMFCBaseTabCtrl::IsFlatFrame](../Topic/CMFCBaseTabCtrl::IsFlatFrame.md)|Restituisce un valore che indica se il frame per l'area della scheda è piatta o 3D.|  
|[CMFCBaseTabCtrl::IsFlatTab](../Topic/CMFCBaseTabCtrl::IsFlatTab.md)||  
|[CMFCBaseTabCtrl::IsHideSingleTab](../Topic/CMFCBaseTabCtrl::IsHideSingleTab.md)|Restituisce un valore che indica se il controllo scheda è configurato per nascondere una scheda, ma solo se una finestra a schede dispone di una sola scheda visibile.|  
|[CMFCBaseTabCtrl::IsIconAdded](../Topic/CMFCBaseTabCtrl::IsIconAdded.md)||  
|[CMFCBaseTabCtrl::IsInPlaceEdit](../Topic/CMFCBaseTabCtrl::IsInPlaceEdit.md)|Indica se gli utenti possono modificare l'etichetta di una scheda.|  
|[CMFCBaseTabCtrl::IsLeftRightRounded](../Topic/CMFCBaseTabCtrl::IsLeftRightRounded.md)||  
|[CMFCBaseTabCtrl::IsMDITab](../Topic/CMFCBaseTabCtrl::IsMDITab.md)||  
|[CMFCBaseTabCtrl::IsOneNoteStyle](../Topic/CMFCBaseTabCtrl::IsOneNoteStyle.md)|Indica se una finestra a schede visualizza le schede in stile Microsoft OneNote.|  
|[CMFCBaseTabCtrl::IsPtInTabArea](../Topic/CMFCBaseTabCtrl::IsPtInTabArea.md)|Verifica l'esistenza di un punto specificato nell'area delle schede.|  
|[CMFCBaseTabCtrl::IsTabCloseButtonHighlighted](../Topic/CMFCBaseTabCtrl::IsTabCloseButtonHighlighted.md)||  
|[CMFCBaseTabCtrl::IsTabCloseButtonPressed](../Topic/CMFCBaseTabCtrl::IsTabCloseButtonPressed.md)||  
|[CMFCBaseTabCtrl::IsTabDetachable](../Topic/CMFCBaseTabCtrl::IsTabDetachable.md)|Indica se una scheda è rimovibile.|  
|[CMFCBaseTabCtrl::IsTabIconOnly](../Topic/CMFCBaseTabCtrl::IsTabIconOnly.md)|Indica se le schede visualizzano le icone, ma non le etichette.|  
|[CMFCBaseTabCtrl::IsTabSwapEnabled](../Topic/CMFCBaseTabCtrl::IsTabSwapEnabled.md)|Indica se l'utente può modificare le posizioni delle schede trascinando le schede.|  
|[CMFCBaseTabCtrl::IsTabVisible](../Topic/CMFCBaseTabCtrl::IsTabVisible.md)|Indica se una scheda specificata è visibile.|  
|[CMFCBaseTabCtrl::IsVS2005Style](../Topic/CMFCBaseTabCtrl::IsVS2005Style.md)||  
|[CMFCBaseTabCtrl::MoveTab](../Topic/CMFCBaseTabCtrl::MoveTab.md)||  
|[CMFCBaseTabCtrl::OnChangeTabs](../Topic/CMFCBaseTabCtrl::OnChangeTabs.md)|Chiamato dal framework quando viene modificato il numero di schede.|  
|[CMFCBaseTabCtrl::OnDragEnter](../Topic/CMFCBaseTabCtrl::OnDragEnter.md)||  
|[CMFCBaseTabCtrl::OnDragLeave](../Topic/CMFCBaseTabCtrl::OnDragLeave.md)||  
|[CMFCBaseTabCtrl::OnDragOver](../Topic/CMFCBaseTabCtrl::OnDragOver.md)||  
|[CMFCBaseTabCtrl::OnDrop](../Topic/CMFCBaseTabCtrl::OnDrop.md)||  
|[CMFCBaseTabCtrl::OnRenameTab](../Topic/CMFCBaseTabCtrl::OnRenameTab.md)||  
|[CMFCBaseTabCtrl::PreTranslateMessage](../Topic/CMFCBaseTabCtrl::PreTranslateMessage.md)|Usato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934). Esegue l'override di [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md).|  
|[CMFCBaseTabCtrl::RecalcLayout](../Topic/CMFCBaseTabCtrl::RecalcLayout.md)|Ricalcola il layout interno di una finestra a schede.|  
|[CMFCBaseTabCtrl::RemoveAllTabs](../Topic/CMFCBaseTabCtrl::RemoveAllTabs.md)|Rimuove tutte le schede dalla finestra a schede.|  
|[CMFCBaseTabCtrl::RemoveTab](../Topic/CMFCBaseTabCtrl::RemoveTab.md)|Rimuove una scheda dalla finestra a schede.|  
|[CMFCBaseTabCtrl::RenameTab](../Topic/CMFCBaseTabCtrl::RenameTab.md)||  
|[CMFCBaseTabCtrl::ResetImageList](../Topic/CMFCBaseTabCtrl::ResetImageList.md)|Reimposta l'elenco di immagini che è collegato a una finestra a schede.|  
|[CMFCBaseTabCtrl::Serialize](../Topic/CMFCBaseTabCtrl::Serialize.md)|Legge o scrive l'oggetto corrente da o in un archivio. Esegue l'override di [CObject::Serialize](../Topic/CObject::Serialize.md).|  
|[CMFCBaseTabCtrl::SetActiveTab](../Topic/CMFCBaseTabCtrl::SetActiveTab.md)|Attiva una scheda.|  
|[CMFCBaseTabCtrl::SetActiveTabColor](../Topic/CMFCBaseTabCtrl::SetActiveTabColor.md)|Imposta il colore di sfondo per la scheda attualmente attiva.|  
|[CMFCBaseTabCtrl::SetActiveTabTextColor](../Topic/CMFCBaseTabCtrl::SetActiveTabTextColor.md)|Imposta il colore del testo per le schede attive.|  
|[CMFCBaseTabCtrl::SetAutoColors](../Topic/CMFCBaseTabCtrl::SetAutoColors.md)|Imposta i colori di controllo della scheda che vengono applicati in modalità colore automatica.|  
|[CMFCBaseTabCtrl::SetDockingBarWrapperRTC](../Topic/CMFCBaseTabCtrl::SetDockingBarWrapperRTC.md)|Imposta la classe wrapper che viene usata per tutti gli oggetti che non sono derivati da [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).|  
|[CMFCBaseTabCtrl::SetDrawNoPrefix](../Topic/CMFCBaseTabCtrl::SetDrawNoPrefix.md)|Abilita e disabilita l'elaborazione dei caratteri del prefisso quando vengono create le etichette delle schede.|  
|[CMFCBaseTabCtrl::SetImageList](../Topic/CMFCBaseTabCtrl::SetImageList.md)|Imposta l'elenco di immagini icona.|  
|[CMFCBaseTabCtrl::SetLocation](../Topic/CMFCBaseTabCtrl::SetLocation.md)||  
|[CMFCBaseTabCtrl::SetTabBkColor](../Topic/CMFCBaseTabCtrl::SetTabBkColor.md)|Imposta il colore di sfondo di una scheda specificata.|  
|[CMFCBaseTabCtrl::SetTabBorderSize](../Topic/CMFCBaseTabCtrl::SetTabBorderSize.md)|Imposta una nuova dimensione bordo scheda.|  
|[CMFCBaseTabCtrl::SetTabHicon](../Topic/CMFCBaseTabCtrl::SetTabHicon.md)|Imposta l'icona di una scheda.|  
|[CMFCBaseTabCtrl::SetTabIcon](../Topic/CMFCBaseTabCtrl::SetTabIcon.md)|Imposta l'ID icona di una scheda.|  
|[CMFCBaseTabCtrl::SetTabIconOnly](../Topic/CMFCBaseTabCtrl::SetTabIconOnly.md)|Abilita e disabilita la modalità "solo icona" per una scheda specificata.|  
|[CMFCBaseTabCtrl::SetTabLabel](../Topic/CMFCBaseTabCtrl::SetTabLabel.md)|Imposta l'etichetta di una scheda in modo che sia uguale a un valore stringa specificato.|  
|[CMFCBaseTabCtrl::SetTabsHeight](../Topic/CMFCBaseTabCtrl::SetTabsHeight.md)||  
|[CMFCBaseTabCtrl::SetTabTextColor](../Topic/CMFCBaseTabCtrl::SetTabTextColor.md)|Restituisce il colore del testo per una scheda specificata.|  
|[CMFCBaseTabCtrl::SetTabsOrder](../Topic/CMFCBaseTabCtrl::SetTabsOrder.md)|Dispone le schede nell'ordine specificato.|  
|[CMFCBaseTabCtrl::ShowTab](../Topic/CMFCBaseTabCtrl::ShowTab.md)|Mostra o nasconde la scheda specificata.|  
|[CMFCBaseTabCtrl::StartRenameTab](../Topic/CMFCBaseTabCtrl::StartRenameTab.md)||  
|[CMFCBaseTabCtrl::SwapTabs](../Topic/CMFCBaseTabCtrl::SwapTabs.md)||  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::CreateWrapper](../Topic/CMFCBaseTabCtrl::CreateWrapper.md)|Crea un wrapper per un oggetto derivato da [CWnd](../../mfc/reference/cwnd-class.md) che non deriva da `CDockablePane`. Per ancorare un oggetto `CMFCBaseTabCtrl`, ogni controllo incorporato deve includere un wrapper di ancoraggio o essere derivato da `CDockablePane`.<br /><br /> È possibile impostare la classe del wrapper usando `SetDockingBayWrapperRTC`.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::m\_bActivateTabOnRightClick](../Topic/CMFCBaseTabCtrl::m_bActivateTabOnRightClick.md)|Specifica se le schede vengono selezionate facendo clic con il pulsante sinistro o destro del mouse.|  
|[CMFCBaseTabCtrl::m\_bAutoDestroyWindow](../Topic/CMFCBaseTabCtrl::m_bAutoDestroyWindow.md)|Specifica se i riquadri contenuti nelle schede vengono eliminati automaticamente.|  
  
## Note  
 La classe `CMFCBaseTabCtrl` è una classe astratta. Di conseguenza, non è possibile crearne un'istanza. Per creare una finestra a schede, è necessario derivare una classe da `CMFCBaseTabCtrl`. La libreria MFC contiene alcuni esempi di classi derivate, due dei quali sono [CMFCTabCtrl Class](../../mfc/reference/cmfctabctrl-class.md) e [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md).  
  
 A partire da [!INCLUDE[vs_dev14](../../ide/includes/vs_dev14_md.md)] questa classe supporta Microsoft Active Accessibility.  
  
## Suggerimenti per la personalizzazione  
 I suggerimenti seguenti riguardano [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) e tutte le classi che ereditano da essa:  
  
-   Se si abilitano schede rimovibili, non mantenere i puntatori sulle finestre a schede. Queste schede rimovibili possono essere create ed eliminate in modo dinamico. Di conseguenza, i puntatori possono diventare non validi.  
  
-   È possibile configurare il controllo Struttura a schede in modo che gli utenti possano spostare le schede in modo dinamico in un controllo Struttura a schede usando il mouse. Questa funzionalità è incorporata nella classe `CMFCBaseTabCtrl`. Per abilitarla, chiamare [CMFCBaseTabCtrl::EnableTabSwap](../Topic/CMFCBaseTabCtrl::EnableTabSwap.md).  
  
-   Per impostazione predefinita, le schede sono rimovibili quando vengono aggiunte a un controllo Struttura a schede. È anche possibile aggiungere schede non rimovibili usando [CMFCBaseTabCtrl::AddTab](../Topic/CMFCBaseTabCtrl::AddTab.md). Se si imposta il parametro `bDetachable` su `FALSE`, la scheda non sarà rimovibile. È anche possibile attivare o disattivare la rimozione delle schede chiamando il metodo [CMFCBaseTabCtrl::EnableTabDetach](../Topic/CMFCBaseTabCtrl::EnableTabDetach.md).  
  
-   Gli oggetti che derivano dalla [Classe CWnd](../../mfc/reference/cwnd-class.md) possono essere inseriti in una barra di controllo o una scheda ancorabile. Affinché l'intero controllo sia ancorato, è necessario rendere ancorabile l'oggetto `CWnd`. A tale scopo, MFC usa una classe wrapper. Questa classe wrapper è [CDockablePaneAdapter Class](../../mfc/reference/cdockablepaneadapter-class.md). Qualsiasi oggetto `CWnd` aggiunto a una barra di controllo o scheda ancorabile verrà incapsulato in un oggetto `CDockablePaneAdapter`. È possibile disabilitare il ritorno a capo automatico impostando il parametro `m_bEnableWrapping` dell'oggetto `CMFCBaseTablCtrl` su `FALSE`. È anche possibile modificare la classe che verrà usata come wrapper usando il metodo [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](../Topic/CMFCBaseTabCtrl::SetDockingBarWrapperRTC.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
## Requisiti  
 **Intestazione:** afxbasetabctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCTabCtrl Class](../../mfc/reference/cmfctabctrl-class.md)   
 [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)