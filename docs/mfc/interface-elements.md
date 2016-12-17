---
title: "Elementi dell&#39;interfaccia utente | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "architettura [C++], MFC Feature Pack"
  - "MFC Feature Pack, architettura"
ms.assetid: eead6827-9602-40a3-8038-8986e8207385
caps.latest.revision: 28
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elementi dell&#39;interfaccia utente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo documento vengono descritti gli elementi dell'interfaccia introdotto in [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)] SP1 e vengono inoltre descritte le differenze con la versione precedente della libreria.  
  
 Di seguito viene illustrata un'applicazione compilata utilizzando nuovi elementi dell'interfaccia.  
  
 ![Applicazione di esempio per MFC Feature Pack](../mfc/media/mfc_featurepack.png "MFC\_FeaturePack")  
  
## Ancoraggio della finestra  
 La funzionalità di ancoraggio della finestra assomiglia all'ancoraggio della finestra che l'interfaccia utente grafica di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] utilizza.  
  
## Le barre di controllo sono ora riquadri  
 Le barre di controllo ora note come riquadri e derivano da [CBasePane Class](../mfc/reference/cbasepane-class.md).  Nelle versioni precedenti di MFC, la classe base di barre di controllo è `CControlBar`.  
  
 La finestra cornice principale dell'applicazione in genere è rappresentata da [CFrameWndEx Class](../mfc/reference/cframewndex-class.md) o da [Classe CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md).  La cornice principale è detta *il sito di ancoraggio*.  I riquadri possono avere uno dei tre tipi di elementi padre: un sito di ancoraggio, una barra di ancoraggio, o una finestra cornice piccola.  
  
 Esistono due tipi di riquadri: non ridimensionabile e ridimensionabile.  I riquadri ridimensionabili, ad esempio barre di stato e barre degli strumenti, possono essere ridimensionati utilizzando i contenitori di divisione o i dispositivi di scorrimento.  I riquadri ridimensionabili possono creare contenitori \(un riquadro può essere ancorato a un altro riquadro, creando un separatore loro\).  Tuttavia, i riquadri ridimensionabili non possono essere associati \(ancorato\) alle barre di ancoraggio.  
  
 Se l'applicazione utilizza i riquadri ridimensionabili, non derivili da [CPane Class](../mfc/reference/cpane-class.md).  Se l'applicazione utilizza i riquadri ridimensionabili, derivili da [CDockablePane Class](../mfc/reference/cdockablepane-class.md)  
  
## Sito di ancoraggio  
 Il sito di ancoraggio o finestra cornice principale\) di tutti i riquadri e finestre cornice piccola in un'applicazione.  Il sito di ancoraggio contiene un membro di [CDockingManager](../mfc/reference/cdockingmanager-class.md).  Questo membro gestisce un elenco di tutti i riquadri che appartengono al sito di ancoraggio.  L'elenco è ordinato in modo che i riquadri creati i bordi esterni del sito di ancoraggio inizio dell'elenco.  Quando il framework ridisegna il sito di ancoraggio, viene eseguito un ciclo su questo elenco e modificare il layout di ogni riquadro per includere il rettangolo di delimitazione corrente del sito di ancoraggio.  È possibile chiamare `AdjustDockingLayout` o `RecalcLayout` quando è necessario modificare il layout di ancoraggio e il framework esegue la chiamata all'amministratore di ancoraggio.  
  
## Barre di ancoraggio  
 Ogni finestra cornice principale è possibile posizionare *le barre di ancoraggio* lungo i bordi.  Una barra di ancoraggio è un riquadro appartenente a [CDockSite Class](../mfc/reference/cdocksite-class.md).  Le barre di ancoraggio possono accettare gli oggetti derivati da [CPane](../mfc/reference/cpane-class.md), quali barre degli strumenti.  Per creare barre di ancoraggio quando la finestra cornice principale è inizializzata, chiamare `EnableDocking`.  Per attivare le barre automatiche nascondi, chiamare `EnableAutoHideBars`.  `EnableAutoHideBars` crea oggetti di [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md) e inserirli accanto a ogni barra di ancoraggio.  
  
 Ogni barra di ancoraggio viene suddivisa nelle righe di ancoraggio.  Le righe l'aggancio sono rappresentate da [CDockingPanesRow Class](../mfc/reference/cdockingpanesrow-class.md).  Ogni riga dell'ancoraggio contiene un elenco delle barre degli strumenti.  Se un utente comunque una barra degli strumenti o spostare la barra degli strumenti da una riga a un altro all'interno della stessa barra di ancoraggio, il framework uno crea una nuova riga e ridimensiona la barra di ancoraggio di conseguenza, o posiziona la barra degli strumenti in una riga esistente.  
  
## Finestre cornice piccola  
 Un riquadro mobile si trova in una finestra cornice piccola.  Le finestre cornice piccola sono rappresentate da due classi: [CMDITabInfo Class](../mfc/reference/cmditabinfo-class.md) \(che possono contenere un solo riquadro\) e [CMultiPaneFrameWnd Class](../mfc/reference/cmultipaneframewnd-class.md) \(che possono contenere diversi riquadri\).  Per rendere mobile un riquadro nel codice, chiamare [CBasePane::FloatPane](../Topic/CBasePane::FloatPane.md).  Dopo che un riquadro mobile, il framework crea automaticamente una finestra cornice piccola e una finestra cornice piccola diventa il padre del riquadro mobile.  Quando gli ancoraggi mobili riquadro, il framework reimposta il controllo padre e il riquadro mobile diventa una barra di ancoraggio \(per le barre degli strumenti\) o su un sito di ancoraggio \(per i riquadri ridimensionabili\).  
  
## Divisori del riquadro  
 I divisori del riquadro \(detti anche dispositivi di scorrimento o contenitori di divisione\) sono rappresentati da [CPaneDivider Class](../mfc/reference/cpanedivider-class.md).  Quando un utente ancora un riquadro, il framework crea i separatori riquadro, indipendentemente dal fatto che il riquadro è ancorato al sito di ancoraggio o a un altro riquadro.  Quando gli ancoraggi di un riquadro al sito di ancoraggio, il separatore del riquadro viene chiamato *il separatore predefinito del riquadro*.  Il separatore predefinito del riquadro è responsabile del layout di tutti i pannelli ancorati nel sito di ancoraggio.  L'amministratore di ancoraggio gestisce un elenco dei separatori predefiniti del riquadro e un elenco di riquadri.  Gli amministratori di ancoraggio sono responsabili di layout tutti i pannelli ancorati.  
  
## Contenitori  
 Tutti i riquadri ridimensionabili, una volta ancorati reciprocamente, vengono gestiti in contenitori.  I contenitori sono rappresentati da [CPaneContainer Class](../mfc/reference/cpanecontainer-class.md).  Ogni contenitore ha puntatori al riquadro sinistro, riquadro di destra, un contenitore left, right contenitore secondario e al separatore tra le parti di sinistra e destra. \(*Left e right* non fanno riferimento ai lati fisici bensì identificano i branch di una struttura ad albero.\) In questo modo è possibile compilare una struttura ad albero dei riquadri e delle barre di divisione e pertanto per ottenere layout complessi dei riquadri che è possibile ridimensionare raccolta.  La classe di `CPaneContainer` gestisce la struttura ad albero di contenitori; gestiscono inoltre due elenchi dei riquadri e i dispositivi di scorrimento che risiedono in questa struttura ad albero.  Gli amministratori del contenitore del riquadro generale sono incorporati nei dispositivi di scorrimento predefiniti e delle finestre cornice piccola e contengono più riquadri.  
  
## Barre di controllo nascondi automaticamente  
 Per impostazione predefinita, ogni `CDockablePane` supporta la funzionalità nascondi automaticamente.  Quando un utente fa clic sul pulsante del blocco sulla barra del titolo di `CDockablePane`, il framework passa il riquadro alla modalità nascondi automaticamente.  Per gestire il clic, il framework crea [CMFCAutoHideBar Class](../mfc/reference/cmfcautohidebar-class.md) e [CMFCAutoHideButton Class](../mfc/reference/cmfcautohidebutton-class.md) associati all'oggetto di `CMFCAutoHideBar`.  Il framework inserito un nuovo `CMFCAutoHideBar` su [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md).  Il framework associa inoltre `CMFCAutoHideButton` la barra degli strumenti.  [CDockingManager Class](../mfc/reference/cdockingmanager-class.md) gestisce `CDockablePane`.  
  
## Barre di controllo a schede e barre di Outlook  
 [CMFCBaseTabCtrl Class](../mfc/reference/cmfcbasetabctrl-class.md) implementa la funzionalità di base di una finestra a schede nelle schede staccabili.  Per utilizzare un oggetto di `CMFCBaseTabCtrl`, inizializzare [Classe CBaseTabbedPane](../mfc/reference/cbasetabbedpane-class.md) nell'applicazione.  `CBaseTabbedPane` è derivato da `CDockablePane` e gestisce un puntatore a un oggetto di `CMFCBaseTabCtrl`.  `CBaseTabbedPane` consente agli utenti per ancorare e ridimensionare le barre di controllo a schede.  Utilizzo [CDockablePane::AttachToTabWnd](../Topic/CDockablePane::AttachToTabWnd.md) creare dinamicamente le barre di controllo che sono ancorate e a schede.  
  
 Il controllo barra di Outlook si basa inoltre sulle barre a schede.  [Classe CMFCOutlookBar](../mfc/reference/cmfcoutlookbar-class.md) è derivato da `CBaseTabbedPane`.  Per ulteriori informazioni su come utilizzare la barra di Outlook, vedere [Classe CMFCOutlookBar](../mfc/reference/cmfcoutlookbar-class.md).  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)