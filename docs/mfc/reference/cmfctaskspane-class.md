---
title: "CMFCTasksPane Class | Microsoft Docs"
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
  - "CMFCTasksPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTasksPane class"
ms.assetid: b456328e-2525-4642-b78b-9edd1a1a7d3f
caps.latest.revision: 26
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCTasksPane Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 La classe `CMFCTasksPane` implementa un elenco di elementi selezionabili \(attività\).  
  
## Sintassi  
  
```  
class CMFCTasksPane : public CDockablePane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPane::CMFCTasksPane](../Topic/CMFCTasksPane::CMFCTasksPane.md)|Costruisce un oggetto `CMFCTasksPane`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPane::AddGroup](../Topic/CMFCTasksPane::AddGroup.md)|Aggiunge un nuovo gruppo di attività al controllo del riquadro attività.|  
|[CMFCTasksPane::AddLabel](../Topic/CMFCTasksPane::AddLabel.md)|Aggiunge una nuova etichetta statica nel gruppo di attività specificato.|  
|[CMFCTasksPane::AddMRUFilesList](../Topic/CMFCTasksPane::AddMRUFilesList.md)|Aggiunge le attività specificate da un elenco dei file aperti più di recente \(MRU\) in un gruppo.|  
|[CMFCTasksPane::AddPage](../Topic/CMFCTasksPane::AddPage.md)|Aggiunge una nuova pagina al riquadro attività.|  
|[CMFCTasksPane::AddSeparator](../Topic/CMFCTasksPane::AddSeparator.md)||  
|[CMFCTasksPane::AddTask](../Topic/CMFCTasksPane::AddTask.md)|Aggiunge una nuova attività al gruppo di attività specificato.|  
|[CMFCTasksPane::AddWindow](../Topic/CMFCTasksPane::AddWindow.md)|Aggiunge una finestra figlio al riquadro attività.|  
|[CMFCTasksPane::CollapseAllGroups](../Topic/CMFCTasksPane::CollapseAllGroups.md)||  
|[CMFCTasksPane::CollapseGroup](../Topic/CMFCTasksPane::CollapseGroup.md)|Comprime un gruppo a livello di codice.|  
|[CMFCTasksPane::CreateDefaultMiniframe](../Topic/CMFCTasksPane::CreateDefaultMiniframe.md)|Esegue l'override di [CPane::CreateDefaultMiniframe](../Topic/CPane::CreateDefaultMiniframe.md).|  
|[CMFCTasksPane::CreateMenu](../Topic/CMFCTasksPane::CreateMenu.md)|Chiamato dal framework per creare un menu sul pulsante del menu **Altri riquadri attività**.|  
|[CMFCTasksPane::EnableAnimation](../Topic/CMFCTasksPane::EnableAnimation.md)|Abilita o disabilita l'animazione come pacchetto o per espandere i gruppi di attività.|  
|[CMFCTasksPane::EnableGroupCollapse](../Topic/CMFCTasksPane::EnableGroupCollapse.md)|Specifica se i gruppi di attività possono essere compressi.|  
|[CMFCTasksPane::EnableHistoryMenuButtons](../Topic/CMFCTasksPane::EnableHistoryMenuButtons.md)|Abilita o disabilita i menu a discesa nei pulsanti di navigazione **Avanti** e **Indietro**.|  
|[CMFCTasksPane::EnableNavigationToolbar](../Topic/CMFCTasksPane::EnableNavigationToolbar.md)|Abilita o disabilita la barra degli strumenti di navigazione.|  
|[CMFCTasksPane::EnableOffsetCustomControls](../Topic/CMFCTasksPane::EnableOffsetCustomControls.md)||  
|[CMFCTasksPane::EnableScrollButtons](../Topic/CMFCTasksPane::EnableScrollButtons.md)|Abilita i pulsanti di scorrimento anziché una barra di scorrimento.|  
|[CMFCTasksPane::EnableWrapLabels](../Topic/CMFCTasksPane::EnableWrapLabels.md)|Abilita o disabilita l'a capo automatico per le etichette.|  
|[CMFCTasksPane::EnableWrapTasks](../Topic/CMFCTasksPane::EnableWrapTasks.md)|Abilita o disabilita l'a capo automatico per le attività.|  
|[CMFCTasksPane::GetActivePage](../Topic/CMFCTasksPane::GetActivePage.md)|Restituisce l'indice in base zero per la pagina attiva.|  
|[CMFCTasksPane::GetGroupCaptionHeight](../Topic/CMFCTasksPane::GetGroupCaptionHeight.md)|Restituisce l'altezza delle didascalie di gruppo.|  
|[CMFCTasksPane::GetGroupCaptionHorzOffset](../Topic/CMFCTasksPane::GetGroupCaptionHorzOffset.md)|Restituisce l'offset corrente di una didascalia del gruppo dai bordi sinistro e destro del riquadro attività.|  
|[CMFCTasksPane::GetGroupCaptionVertOffset](../Topic/CMFCTasksPane::GetGroupCaptionVertOffset.md)|Restituisce l'offset corrente di una didascalia del gruppo di distanza dai bordi inferiore del riquadro attività.|  
|[CMFCTasksPane::GetGroupCount](../Topic/CMFCTasksPane::GetGroupCount.md)|Restituisce il numero totale di gruppi.|  
|[CMFCTasksPane::GetGroupLocation](../Topic/CMFCTasksPane::GetGroupLocation.md)|Restituisce l'indice di gruppo interno di un gruppo specificato.|  
|[CMFCTasksPane::GetGroupVertOffset](../Topic/CMFCTasksPane::GetGroupVertOffset.md)|Restituisce l'offset verticale di un gruppo.|  
|[CMFCTasksPane::GetHorzMargin](../Topic/CMFCTasksPane::GetHorzMargin.md)|Restituisce la spaziatura orizzontale tra un riquadro attività e i bordi dell'area client.|  
|[CMFCTasksPane::GetNextPages](../Topic/CMFCTasksPane::GetNextPages.md)||  
|[CMFCTasksPane::GetPageByGroup](../Topic/CMFCTasksPane::GetPageByGroup.md)|Recupera l'indice della pagina per un gruppo specificato.|  
|[CMFCTasksPane::GetPagesCount](../Topic/CMFCTasksPane::GetPagesCount.md)|Restituisce il numero di pagine.|  
|[CMFCTasksPane::GetPreviousPages](../Topic/CMFCTasksPane::GetPreviousPages.md)||  
|[CMFCTasksPane::GetScrollBarCtrl](../Topic/CMFCTasksPane::GetScrollBarCtrl.md)|Esegue l'override di [CWnd::GetScrollBarCtrl](../Topic/CWnd::GetScrollBarCtrl.md).|  
|[CMFCTasksPane::GetTask](../Topic/CMFCTasksPane::GetTask.md)|Recupera un'attività.|  
|[CMFCTasksPane::GetTaskCount](../Topic/CMFCTasksPane::GetTaskCount.md)|Restituisce il numero di elementi attività in un gruppo specificato.|  
|[CMFCTasksPane::GetTaskGroup](../Topic/CMFCTasksPane::GetTaskGroup.md)|Restituisce un gruppo di attività per un indice di gruppo specificato.|  
|[CMFCTasksPane::GetTaskLocation](../Topic/CMFCTasksPane::GetTaskLocation.md)|Restituisce il gruppo e indice per un'attività specifica.|  
|[CMFCTasksPane::GetTasksHorzOffset](../Topic/CMFCTasksPane::GetTasksHorzOffset.md)|Restituisce l'offset orizzontale di attività dai bordi sinistro e destro dei gruppi padre.|  
|[CMFCTasksPane::GetTasksIconHorzOffset](../Topic/CMFCTasksPane::GetTasksIconHorzOffset.md)||  
|[CMFCTasksPane::GetTasksIconVertOffset](../Topic/CMFCTasksPane::GetTasksIconVertOffset.md)||  
|[CMFCTasksPane::GetVertMargin](../Topic/CMFCTasksPane::GetVertMargin.md)|Restituisce la spaziatura verticale tra un riquadro attività e i bordi dell'area client.|  
|[CMFCTasksPane::IsAccessibilityCompatible](../Topic/CMFCTasksPane::IsAccessibilityCompatible.md)|Esegue l'override di `CDockablePane::IsAccessibilityCompatible`.|  
|[CMFCTasksPane::IsAnimationEnabled](../Topic/CMFCTasksPane::IsAnimationEnabled.md)|Indica se l'animazione è abilitata.|  
|[CMFCTasksPane::IsBackButtonEnabled](../Topic/CMFCTasksPane::IsBackButtonEnabled.md)|Indica se il pulsante Indietro è abilitato.|  
|[CMFCTasksPane::IsForwardButtonEnabled](../Topic/CMFCTasksPane::IsForwardButtonEnabled.md)|Indica se il pulsante Avanti è abilitato.|  
|[CMFCTasksPane::IsGroupCollapseEnabled](../Topic/CMFCTasksPane::IsGroupCollapseEnabled.md)||  
|[CMFCTasksPane::IsHistoryMenuButtonsEnabled](../Topic/CMFCTasksPane::IsHistoryMenuButtonsEnabled.md)|Indica se i pulsanti di navigazione **Indietro** e **Avanti** hanno menu a discesa.|  
|[CMFCTasksPane::IsNavigationToolbarEnabled](../Topic/CMFCTasksPane::IsNavigationToolbarEnabled.md)|Indica se la barra degli strumenti di navigazione è abilitata.|  
|[CMFCTasksPane::IsToolBox](../Topic/CMFCTasksPane::IsToolBox.md)||  
|[CMFCTasksPane::IsWrapLabelsEnabled](../Topic/CMFCTasksPane::IsWrapLabelsEnabled.md)|Indica se il riquadro attività esegue l'a capo automatico nelle etichette.|  
|[CMFCTasksPane::IsWrapTasksEnabled](../Topic/CMFCTasksPane::IsWrapTasksEnabled.md)|Indica se il riquadro attività esegue l'a capo automatico nelle attività.|  
|[CMFCTasksPane::LoadState](../Topic/CMFCTasksPane::LoadState.md)|Esegue l'override di [CDockablePane::LoadState](http://msdn.microsoft.com/it-it/96110136-4f46-4764-8a76-3b4abaf77917).|  
|[CMFCTasksPane::OnCancel](../Topic/CMFCTasksPane::OnCancel.md)||  
|[CMFCTasksPane::OnClickTask](../Topic/CMFCTasksPane::OnClickTask.md)|Chiamato dal framework quando l'utente fa clic su un elemento nel riquadro attività.|  
|[CMFCTasksPane::OnOK](../Topic/CMFCTasksPane::OnOK.md)||  
|[CMFCTasksPane::OnPressBackButton](../Topic/CMFCTasksPane::OnPressBackButton.md)|Chiamato dal framework quando l'utente fa clic sul pulsante Indietro.|  
|[CMFCTasksPane::OnPressForwardButton](../Topic/CMFCTasksPane::OnPressForwardButton.md)|Chiamato dal framework quando l'utente fa clic sul pulsante di navigazione Avanti.|  
|[CMFCTasksPane::OnPressHomeButton](../Topic/CMFCTasksPane::OnPressHomeButton.md)|Chiamato dal framework quando l'utente fa clic sul pulsante di navigazione home.|  
|[CMFCTasksPane::OnPressOtherButton](../Topic/CMFCTasksPane::OnPressOtherButton.md)||  
|[CMFCTasksPane::OnSetAccData](../Topic/CMFCTasksPane::OnSetAccData.md)|Esegue l'override di[CBasePane::OnSetAccData](../Topic/CBasePane::OnSetAccData.md).|  
|[CMFCTasksPane::OnUpdateCmdUI](../Topic/CMFCTasksPane::OnUpdateCmdUI.md)|Esegue l'override di [CDockablePane::OnUpdateCmdUI](http://msdn.microsoft.com/it-it/5dd61606-1c12-40d4-b024-f3839aa5e2e0).|  
|[CMFCTasksPane::PreTranslateMessage](../Topic/CMFCTasksPane::PreTranslateMessage.md)|Esegue l'override di [CDockablePane::PreTranslateMessage](http://msdn.microsoft.com/it-it/49a242cc-b158-400e-9e01-0345ec9c3ffd).|  
|[CMFCTasksPane::RecalcLayout](../Topic/CMFCTasksPane::RecalcLayout.md)|Esegue l'override di [CPane::RecalcLayout](../Topic/CPane::RecalcLayout.md).|  
|[CMFCTasksPane::RemoveAllGroups](../Topic/CMFCTasksPane::RemoveAllGroups.md)|Rimuove tutti i gruppi nella pagina specificata.|  
|[CMFCTasksPane::RemoveAllPages](../Topic/CMFCTasksPane::RemoveAllPages.md)|Rimuove tutte le pagine dal riquadro attività tranne che nella \(prima\) pagina predefinita.|  
|[CMFCTasksPane::RemoveAllTasks](../Topic/CMFCTasksPane::RemoveAllTasks.md)|Rimuove tutte le attività dal gruppo.|  
|[CMFCTasksPane::RemoveGroup](../Topic/CMFCTasksPane::RemoveGroup.md)|Rimuove un gruppo.|  
|[CMFCTasksPane::RemovePage](../Topic/CMFCTasksPane::RemovePage.md)|Rimuove una pagina specifica dal riquadro attività.|  
|[CMFCTasksPane::RemoveTask](../Topic/CMFCTasksPane::RemoveTask.md)|Rimuove un'attività da un gruppo di attività.|  
|[CMFCTasksPane::SaveState](../Topic/CMFCTasksPane::SaveState.md)|Esegue l'override di [CDockablePane::SaveState](http://msdn.microsoft.com/it-it/c5c24249-8d0d-46cb-96d9-9f5c6dc191db).|  
|[CMFCTasksPane::Serialize](../Topic/CMFCTasksPane::Serialize.md)|Esegue l'override di [CDockablePane::Serialize](http://msdn.microsoft.com/it-it/09787e59-e446-4e76-894b-206d303dcfd6).|  
|[CMFCTasksPane::SetActivePage](../Topic/CMFCTasksPane::SetActivePage.md)|Attiva una pagina specificata nel riquadro attività.|  
|[CMFCTasksPane::SetCaption](../Topic/CMFCTasksPane::SetCaption.md)|Imposta il nome della didascalia del riquadro attività.|  
|[CMFCTasksPane::SetGroupCaptionHeight](../Topic/CMFCTasksPane::SetGroupCaptionHeight.md)|Imposta l'altezza di una didascalia del gruppo.|  
|[CMFCTasksPane::SetGroupCaptionHorzOffset](../Topic/CMFCTasksPane::SetGroupCaptionHorzOffset.md)|Impostare l'offset orizzontale di una didascalia del gruppo.|  
|[CMFCTasksPane::SetGroupCaptionVertOffset](../Topic/CMFCTasksPane::SetGroupCaptionVertOffset.md)|Imposta l'offset verticale di didascalia del gruppo.|  
|[CMFCTasksPane::SetGroupName](../Topic/CMFCTasksPane::SetGroupName.md)|Imposta un nome di gruppo.|  
|[CMFCTasksPane::SetGroupTextColor](../Topic/CMFCTasksPane::SetGroupTextColor.md)|Imposta il colore del testo per una didascalia del gruppo.|  
|[CMFCTasksPane::SetGroupVertOffset](../Topic/CMFCTasksPane::SetGroupVertOffset.md)|Imposta l'offset verticale per un gruppo.|  
|[CMFCTasksPane::SetHorzMargin](../Topic/CMFCTasksPane::SetHorzMargin.md)|Imposta la spaziatura orizzontale tra un riquadro attività e i bordi dell'area client.|  
|[CMFCTasksPane::SetIconsList](../Topic/CMFCTasksPane::SetIconsList.md)|Imposta l'elenco di immagine associato alle attività.|  
|[CMFCTasksPane::SetPageCaption](../Topic/CMFCTasksPane::SetPageCaption.md)|Imposta il testo della didascalia per una pagina del riquadro attività.|  
|[CMFCTasksPane::SetTaskName](../Topic/CMFCTasksPane::SetTaskName.md)|Imposta il nome per un'attività.|  
|[CMFCTasksPane::SetTasksIconHorzOffset](../Topic/CMFCTasksPane::SetTasksIconHorzOffset.md)||  
|[CMFCTasksPane::SetTasksIconVertOffset](../Topic/CMFCTasksPane::SetTasksIconVertOffset.md)||  
|[CMFCTasksPane::SetTaskTextColor](../Topic/CMFCTasksPane::SetTaskTextColor.md)|Imposta il colore del testo per un'attività.|  
|[CMFCTasksPane::SetTasksHorzOffset](../Topic/CMFCTasksPane::SetTasksHorzOffset.md)|Imposta l'offset orizzontale di attività dai bordi sinistro e destro dei gruppi padre.|  
|[CMFCTasksPane::SetVertMargin](../Topic/CMFCTasksPane::SetVertMargin.md)|Imposta la spaziatura verticale tra un riquadro attività e i bordi dell'area client.|  
|[CMFCTasksPane::SetWindowHeight](../Topic/CMFCTasksPane::SetWindowHeight.md)|Imposta l'altezza di una finestra.|  
|[CMFCTasksPane::ShowCommandMessageString](../Topic/CMFCTasksPane::ShowCommandMessageString.md)||  
|[CMFCTasksPane::ShowTask](../Topic/CMFCTasksPane::ShowTask.md)|Mostra o nasconde un'attività.|  
|[CMFCTasksPane::ShowTaskByCmdId](../Topic/CMFCTasksPane::ShowTaskByCmdId.md)|Mostra o nasconde un'attività in base all'ID di comando.|  
|[CMFCTasksPane::Update](../Topic/CMFCTasksPane::Update.md)|Aggiorna gli elementi GUI appartenenti a un riquadro attività.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPane::OnActivateTasksPanePage](../Topic/CMFCTasksPane::OnActivateTasksPanePage.md)|Chiamato dal framework quando una nuova pagina del riquadro attività è attivata.|  
  
## Note  
 La classe `CMFCTasksPane` implementa la funzionalità seguenti:  
  
-   Gli elementi possono essere raggruppati e ogni raggruppamento di elementi può avere una didascalia collegata.  
  
-   I raggruppamenti di elementi possono essere compressi o espansi.  
  
-   Un'icona può essere assegnata a ciascun elemento del riquadro attività.  
  
-   I singoli elementi possono essere associati a un ID di comando che viene eseguito quando un utente fa clic sull'elemento.  Quando il clic si verifica, il messaggio `WM_COMMAND` viene inviato al proprietario del controllo del riquadro attività.  
  
 Per usare i controlli `CMFCTasksPane` nell'applicazione, attenersi alla procedura seguente:  
  
1.  Importare un oggetto `CMFCTasksPane` nella classe della finestra cornice principale.  
  
2.  Quando si effettua l'elaborazione del messaggio `WM_CREATE`, chiamare il metodo `Create`.  È possibile usare stili [CControlBar](../../mfc/reference/ccontrolbar-class.md) normali.  Per altre informazioni, vedere `CControlBar::Create`.  
  
3.  Chiamare il metodo [CMFCTasksPane::AddGroup](../Topic/CMFCTasksPane::AddGroup.md) per aggiungere vari gruppi.  
  
4.  Chiamare le funzioni membro [CMFCTasksPane::AddTask](../Topic/CMFCTasksPane::AddTask.md), [CMFCTasksPane::AddLabel](../Topic/CMFCTasksPane::AddLabel.md) o [CMFCTasksPane::AddMRUFilesList](../Topic/CMFCTasksPane::AddMRUFilesList.md) per aggiungere nuovi elementi \(attività\) a ogni gruppo.  
  
5.  Chiamare [CMFCTasksPane::EnableGroupCollapse](../Topic/CMFCTasksPane::EnableGroupCollapse.md) per specificare se i gruppi di elementi possono essere compressi.  
  
 Nella figura seguente viene illustrato un tipico controllo del riquadro attività.  Il primo gruppo è un gruppo *speciale* e la relativa didascalia è di un colore più scuro.  Il terzo gruppo è compresso.  L'ultimo gruppo viene allineato al bordo inferiore del riquadro attività e non ha didascalia e l'ultima attività nel gruppo è un'etichetta semplice:  
  
 ![Esempio di riquadro attività](../../mfc/reference/media/nexttaskpane.png "NextTaskPane")  
  
 È possibile personalizzare l'aspetto del riquadro attività regolando i vari margini e offset.  La figura seguente illustra l'importanza di queste variabili:  
  
 ![Gruppo di attività personalizzato](../../mfc/reference/media/nexttaskgrpcustom.png "NextTaskGrpCustom")  
  
## Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCTasksPane` e usare i vari metodi nella classe `CMFCTasksPane`.  L'esempio mostra come abilitare la compressione dei gruppi di attività, abilitare i menu a discesa per i pulsanti di navigazione **Indietro** e **Avanti**, abilitare i pulsanti di scorrimento anziché una barra di scorrimento, abilitare l'a capo automatico del testo nelle etichette, impostare il nome della didascalia del riquadro attività, impostare il colore del testo per una didascalia del gruppo e impostare i margini orizzontali e verticali.  
  
 [!code-cpp[NVC_MFC_RibbonApp#28](../../mfc/reference/codesnippet/CPP/cmfctaskspane-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)  
  
## Requisiti  
 **Intestazione:** afxTasksPane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md)   
 [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)