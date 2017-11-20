---
title: Elementi dell'interfaccia utente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- architecture [MFC], MFC Feature Pack
- MFC Feature Pack, architecture
ms.assetid: eead6827-9602-40a3-8038-8986e8207385
caps.latest.revision: "28"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5eead62c46bb9405a63bd523508142575a8ad93f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="interface-elements"></a>Elementi dell'interfaccia utente
Questo documento vengono descritti gli elementi di interfaccia che sono stati introdotti in [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)] SP1 e vengono inoltre descritte le differenze con la versione precedente della libreria.  
  
 Nella figura seguente mostra un'applicazione che è stata compilata utilizzando i nuovi elementi di interfaccia.  
  
 ![Applicazione di esempio MFC Feature Pack](../mfc/media/mfc_featurepack.png "mfc_featurepack")  
  
## <a name="window-docking"></a>Ancoraggio delle finestre  
 Funzionalità di ancoraggio delle finestre è simile alla finestra di ancoraggio che il [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] viene utilizzata l'interfaccia utente grafica.  
  
## <a name="control-bars-are-now-panes"></a>Barre di controllo sono ora riquadri  
 Barre di controllo sono ora note come riquadri e derivate dai [CBasePane classe](../mfc/reference/cbasepane-class.md). Nelle versioni precedenti di MFC, la classe di base di barre di controllo è `CControlBar`.  
  
 Finestra cornice principale dell'applicazione è generalmente rappresentata dal [CFrameWndEx classe](../mfc/reference/cframewndex-class.md) o [classe CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md). La cornice principale viene chiamata il *ancorare sito*. I riquadri possono avere uno dei tre tipi di elementi padre: un sito di ancoraggio, una barra di ancoraggio o una finestra con mini-cornice.  
  
 Esistono due tipi di riquadri: ridimensionabile e non ridimensionabile. Riquadri ridimensionabili, ad esempio le barre di stato e barre degli strumenti, possono essere ridimensionati con barre di divisione o dispositivi di scorrimento. Riquadri ridimensionabili possono creare contenitori (un riquadro può essere ancorato a un altro riquadro, la creazione di una barra di divisione tra di esse). Tuttavia, non è possibile collegare i riquadri ridimensionabili (ancorato) per ancorare le barre.  
  
 Se l'applicazione utilizza riquadri non ridimensionabile, derivarle da [classe CPane](../mfc/reference/cpane-class.md).  Se l'applicazione utilizza riquadri ridimensionabili, derivarle da [classe CDockablePane](../mfc/reference/cdockablepane-class.md)  
  
## <a name="dock-site"></a>Sito di ancoraggio  
 Il sito di ancoraggio (o una finestra cornice principale) possiede tutti i riquadri e finestre con mini-cornice in un'applicazione. Sito di ancoraggio contiene un [CDockingManager](../mfc/reference/cdockingmanager-class.md) membro. Questo membro gestisce un elenco di tutti i riquadri che appartengono al sito di ancoraggio. L'elenco è ordinato in modo che i riquadri creati bordi esterni di sito di ancoraggio sono posizionati all'inizio dell'elenco. Quando il framework ridisegna sito di ancoraggio, esegue un ciclo per questo elenco vengono regola il layout di ogni riquadro per includere il rettangolo di delimitazione corrente del sito di ancoraggio. È possibile chiamare `AdjustDockingLayout` o `RecalcLayout` quando è necessario modificare il layout di ancoraggio e il framework indirizza la chiamata al gestore di ancoraggio.  
  
## <a name="dock-bars"></a>Barre di ancoraggio  
 Ogni finestra cornice principale è possibile posizionare *ancorare barre* lungo i bordi. Una barra di ancoraggio è un riquadro che appartiene a un [classe CDockSite](../mfc/reference/cdocksite-class.md). Barre di ancoraggio possono accettare oggetti derivati da [CPane](../mfc/reference/cpane-class.md), ad esempio le barre degli strumenti. Per creare barre dock quando viene inizializzata la finestra cornice principale, chiamare `EnableDocking`. Per abilitare le barre di Nascondi automaticamente, chiamare `EnableAutoHideBars`. `EnableAutoHideBars`Crea [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md) oggetti e di posizionarli accanto a ogni barra di ancoraggio.  
  
 Ogni barra di ancoraggio è suddivisa in righe di ancoraggio. Ancorare le righe sono rappresentate dal [CDockingPanesRow classe](../mfc/reference/cdockingpanesrow-class.md). Ogni riga di ancoraggio contiene un elenco delle barre degli strumenti. Se un utente è una barra degli strumenti o Sposta la barra degli strumenti da una riga a un altro all'interno della stessa barra dock, il framework crea una nuova riga o ridimensiona la barra di ancoraggio di conseguenza, o la barra degli strumenti viene posizionato su una riga esistente.  
  
## <a name="mini-frame-windows"></a>Finestre cornice minima  
 Un riquadro mobile si trova in una finestra con mini-cornice. Finestre con mini-cornice sono rappresentate da due classi: [CMDITabInfo classe](../mfc/reference/cmditabinfo-class.md) (che può contenere un solo riquadro) e [CMultiPaneFrameWnd classe](../mfc/reference/cmultipaneframewnd-class.md) (che può contenere diversi riquadri). Per rendere mobile un riquadro nel codice, chiamare [CBasePane::FloatPane](../mfc/reference/cbasepane-class.md#floatpane). Dopo che un riquadro viene spostata, il framework crea automaticamente una finestra con mini-cornice e la finestra con mini-cornice viene padre del riquadro mobile. Quando il riquadro mobile ancora, il framework Reimposta il relativo elemento padre e il riquadro mobile diventa una barra di ancoraggio (per le barre degli strumenti) o un sito di ancoraggio (per i riquadri ridimensionabili).  
  
## <a name="pane-dividers"></a>Divisori di riquadro  
 Divisori di riquadro (denominati anche dispositivo di scorrimento o delle barre di divisione) sono rappresentati dal [CPaneDivider classe](../mfc/reference/cpanedivider-class.md). Quando un utente è ancora un riquadro, il framework crea divisori di riquadro, indipendentemente dal fatto che il riquadro ancorato nel sito di ancoraggio o in un altro riquadro. Quando un riquadro ancorato al sito di ancoraggio, del divisore di riquadro viene chiamato il *predefinito divisore di riquadro*. Il divisore di riquadro predefinito è responsabile per il layout di tutti i riquadri ancorati nel sito di ancoraggio. Il gestore di ancoraggio gestisce un elenco di divisori di riquadro predefinito e un elenco dei riquadri. Gestori di ancoraggio sono responsabili per il layout di tutti i riquadri di ancoraggio.  
  
## <a name="containers"></a>Contenitori  
 Tutti i riquadri ridimensionabili, quando è ancorato a altro, vengono mantenuti nei contenitori. I contenitori sono rappresentati dal [CPaneContainer classe](../mfc/reference/cpanecontainer-class.md). Ogni contenitore dispone di puntatori a riquadro di sinistra, riquadro di destra, sottocontenitore a sinistra, destra sottocontenitore e la barra di divisione tra le parti sinistra e destra. (*Sinistra* e *destra* non fanno riferimento a lati fisici, ma anziché identificare i rami di una struttura ad albero.) In questo modo è possibile compilare un albero di riquadri e le barre di divisione e pertanto ottenere layout complessi dei riquadri che possono essere ridimensionati insieme. La `CPaneContainer` classe mantiene l'albero dei contenitori; gestisce inoltre due elenchi di riquadri e dispositivi di scorrimento che si trovano in questa struttura ad albero. Gestori di riquadro contenitore sono in genere incorporate in cursori predefiniti e di windows con mini-cornice che contengono più riquadri.  
  
## <a name="auto-hide-control-bars"></a>Barre di controllo Nascondi automaticamente  
 Per impostazione predefinita, ogni `CDockablePane` supporta la funzionalità Nascondi automaticamente. Quando un utente fa clic sul pulsante pin con la didascalia del `CDockablePane`, il framework attiva nel riquadro di modalità Nascondi automaticamente. Per gestire il fare clic su, il framework crea un [classe CMFCAutoHideBar](../mfc/reference/cmfcautohidebar-class.md) e [classe CMFCAutoHideButton](../mfc/reference/cmfcautohidebutton-class.md) associato il `CMFCAutoHideBar` oggetto. Inserisce il nuovo framework `CMFCAutoHideBar` sul [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md). Il framework collega anche il `CMFCAutoHideButton` alla barra degli strumenti. Il [CDockingManager classe](../mfc/reference/cdockingmanager-class.md) mantiene il `CDockablePane`.  
  
## <a name="tabbed-control-bars-and-outlook-bars"></a>Barre di controllo a schede e le barre di Outlook  
 Il [classe CMFCBaseTabCtrl](../mfc/reference/cmfcbasetabctrl-class.md) implementa la funzionalità di base di una finestra a schede con schede rimovibili. Per utilizzare un `CMFCBaseTabCtrl` oggetto, inizializzare un [classe CBaseTabbedPane](../mfc/reference/cbasetabbedpane-class.md) nell'applicazione. `CBaseTabbedPane`derivato da `CDockablePane` e mantiene un puntatore a un `CMFCBaseTabCtrl` oggetto. Il `CBaseTabbedPane` consente agli utenti di inserire e ridimensionare le barre di controllo a schede. Utilizzare [CDockablePane:: Attachtotabwnd](../mfc/reference/cdockablepane-class.md#attachtotabwnd) per creare dinamicamente barre di controllo sono ancorate e a schede.  
  
 Il controllo barra di Outlook si basa anche sulle barre a schede. Il [classe CMFCOutlookBar](../mfc/reference/cmfcoutlookbar-class.md) è derivato da `CBaseTabbedPane`. Per ulteriori informazioni sull'utilizzo della barra di Outlook, vedere [classe CMFCOutlookBar](../mfc/reference/cmfcoutlookbar-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)

