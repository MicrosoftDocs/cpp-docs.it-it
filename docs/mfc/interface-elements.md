---
title: Elementi dell'interfaccia utente | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- architecture [MFC], MFC Feature Pack
- MFC Feature Pack, architecture
ms.assetid: eead6827-9602-40a3-8038-8986e8207385
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1906505e75273cc62a0eac55e6ed1a9686a3b76f
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37078444"
---
# <a name="interface-elements"></a>Elementi dell'interfaccia utente
Questo documento descrive gli elementi dell'interfaccia che sono state introdotte in Visual Studio 2008 SP1 e vengono inoltre descritte le differenze con la versione precedente della libreria.  
  
 La figura seguente mostra un'applicazione che è stata compilata utilizzando i nuovi elementi di interfaccia.  
  
 ![Applicazione di esempio MFC Feature Pack](../mfc/media/mfc_featurepack.png "mfc_featurepack")  
  
## <a name="window-docking"></a>Ancoraggio delle finestre  
 Finestra di ancoraggio funzionalità è simile alla finestra di ancoraggio che il [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] viene utilizzata l'interfaccia utente grafica.  
  
## <a name="control-bars-are-now-panes"></a>Barre di controllo sono ora riquadri  
 Barre di controllo sono ora note come riquadri e derivate dai [CBasePane classe](../mfc/reference/cbasepane-class.md). Nelle versioni precedenti di MFC, la classe base di barre di controllo era `CControlBar`.  
  
 Finestra cornice principale dell'applicazione è generalmente rappresentata dal [classe CFrameWndEx](../mfc/reference/cframewndex-class.md) o il [classe CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md). La cornice principale viene chiamata il *ancorare sito*. Riquadri possono avere uno dei tre tipi di elementi padre: un sito di ancoraggio, una barra ancorabile a schede o una finestra con mini-cornice.  
  
 Esistono due tipi di riquadri: non ridimensionabile e ridimensionabile. Riquadri ridimensionabili, ad esempio le barre di stato e barre degli strumenti, possono essere ridimensionati con barre di divisione o dispositivi di scorrimento. Riquadri ridimensionabili possono creare contenitori (un riquadro può essere ancorato a un altro riquadro, la creazione di una barra di divisione tra di esse). Tuttavia, non è possibile collegare riquadri ridimensionabili (ancorato) per ancorare barre.  
  
 Se l'applicazione usa riquadri non ridimensionabile, derivano da [classe CPane](../mfc/reference/cpane-class.md).  Se l'applicazione usa riquadri ridimensionabili, derivare da [classe CDockablePane](../mfc/reference/cdockablepane-class.md)  
  
## <a name="dock-site"></a>Sito di ancoraggio  
 Il sito di ancoraggio (o finestra cornice principale) possiede tutti i riquadri e delle finestre con mini-cornice in un'applicazione. Sito di ancoraggio contiene un [CDockingManager](../mfc/reference/cdockingmanager-class.md) membro. Questo membro gestisce un elenco di tutti i riquadri che appartengono al sito di ancoraggio. L'elenco è ordinato in modo che i riquadri creati bordi esterni di sito di ancoraggio sono posizionati all'inizio dell'elenco. Quando il framework ridisegna il sito di ancoraggio, esplorati questo elenco e regola il layout di ogni riquadro per includere il rettangolo di delimitazione corrente del sito di ancoraggio. È possibile chiamare `AdjustDockingLayout` o `RecalcLayout` quando è necessario modificare il layout di ancoraggio e il framework reindirizzerà questa chiamata per il gestore di ancoraggio.  
  
## <a name="dock-bars"></a>Barre di ancoraggio  
 Ogni finestra cornice principale possono essere posizionate *ancorare barre* lungo i bordi. Una barra di ancoraggio è un riquadro che appartiene a un [classe CDockSite](../mfc/reference/cdocksite-class.md). Barre di ancoraggio possono accettare oggetti derivati da [CPane](../mfc/reference/cpane-class.md), ad esempio le barre degli strumenti. Per creare barre dock quando viene inizializzata la finestra cornice principale, chiamare `EnableDocking`. Per abilitare le barre di Nascondi automaticamente, chiamare `EnableAutoHideBars`. `EnableAutoHideBars` Crea [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md) oggetti e di posizionarli accanto a ogni barra ancorabile a schede.  
  
 Ogni barra ancorabile a schede è suddivisa in righe di ancoraggio. Ancorare le righe sono rappresentate i [CDockingPanesRow classe](../mfc/reference/cdockingpanesrow-class.md). Ogni riga dock contiene un elenco delle barre degli strumenti. Se un utente ancora una barra degli strumenti o Sposta la barra degli strumenti da una riga a un altro all'interno della stessa barra dock, il framework crea una nuova riga e ridimensiona la barra di ancoraggio di conseguenza, o la barra degli strumenti viene posizionato su una riga esistente.  
  
## <a name="mini-frame-windows"></a>Windows con mini-cornice  
 Un riquadro mobile si trova in una finestra con mini-cornice. Finestre con mini-cornice sono rappresentate da due classi: [classe CMDITabInfo](../mfc/reference/cmditabinfo-class.md) (che può contenere un solo riquadro) e [CMultiPaneFrameWnd classe](../mfc/reference/cmultipaneframewnd-class.md) (che può contenere diversi riquadri). Per rendere mobile un riquadro nel codice, chiamare [CBasePane::FloatPane](../mfc/reference/cbasepane-class.md#floatpane). Dopo che un riquadro viene spostata, il framework crea automaticamente una finestra con mini-cornice e la finestra con mini-cornice viene padre del riquadro mobile. Quando il riquadro mobile ancora, il framework Reimposta il relativo elemento padre e il riquadro mobile diventa una barra ancorabile a schede (per le barre degli strumenti) o un sito di ancoraggio (per i riquadri ridimensionabili).  
  
## <a name="pane-dividers"></a>Divisori di riquadro  
 Divisori di riquadro (denominati anche dispositivi di scorrimento o barre di divisione) sono rappresentati i [CPaneDivider classe](../mfc/reference/cpanedivider-class.md). Quando un utente è ancora un riquadro, il framework crea divisori di riquadro, indipendentemente dal fatto il riquadro viene ancorato nel sito di ancoraggio o in un altro riquadro. Quando un riquadro ancorato al sito di ancoraggio, divisore di riquadro viene chiamato il *predefinito divisore di riquadro*. Il divisore di riquadro predefinito è responsabile per il layout di tutti i riquadri ancorati nel sito di ancoraggio. Il gestore di ancoraggio gestisce un elenco di divisori di riquadro predefinito e un elenco dei riquadri. I responsabili di ancoraggio sono responsabili per il layout di tutti i riquadri ancorati.  
  
## <a name="containers"></a>Contenitori  
 Tutti i riquadri ridimensionabili, quando è ancorato a altro, vengono mantenuti nei contenitori. I contenitori sono rappresentati dal [CPaneContainer classe](../mfc/reference/cpanecontainer-class.md). Ogni contenitore dispone di puntatori a riquadro di sinistra, riquadro destro, sottocontenitore sinistro, destro sottocontenitore e la barra di divisione tra le parti sinistra e destra. (*Sinistra* e *a destra* non fanno riferimento a lati fisici, ma anziché identificare i rami di una struttura ad albero.) In questo modo è possibile compilare un albero di riquadri e le barre di divisione e pertanto ottenere layout complessi dei riquadri che possono essere ridimensionati insieme. Il `CPaneContainer` classe mantiene l'albero dei contenitori; gestisce inoltre due elenchi di riquadri e dispositivi di scorrimento che si trovano in questa struttura ad albero. I responsabili di contenitore riquadro sono in genere incorporati in dispositivi di scorrimento predefinito e le finestre con mini-cornice che contengono più riquadri.  
  
## <a name="auto-hide-control-bars"></a>Barre di controllo Nascondi automaticamente  
 Per impostazione predefinita, ogni `CDockablePane` supporta la funzionalità Nascondi automaticamente. Quando un utente fa clic sul pulsante pin con la didascalia del `CDockablePane`, il framework passa il riquadro alla modalità Nascondi automaticamente. Per gestire il fare clic su, il framework crea un' [classe CMFCAutoHideBar](../mfc/reference/cmfcautohidebar-class.md) e una [classe CMFCAutoHideButton](../mfc/reference/cmfcautohidebutton-class.md) associato il `CMFCAutoHideBar` oggetto. Inserisce il nuovo framework `CMFCAutoHideBar` nella [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md). Il framework collega anche il `CMFCAutoHideButton` alla barra degli strumenti. Il [classe CDockingManager](../mfc/reference/cdockingmanager-class.md) mantiene il `CDockablePane`.  
  
## <a name="tabbed-control-bars-and-outlook-bars"></a>Barre di controllo a schede e le barre di Outlook  
 Il [classe CMFCBaseTabCtrl](../mfc/reference/cmfcbasetabctrl-class.md) implementa la funzionalità di base di una finestra a schede con schede staccabili. Per utilizzare un `CMFCBaseTabCtrl` dell'oggetto, inizializzare un [classe CBaseTabbedPane](../mfc/reference/cbasetabbedpane-class.md) nell'applicazione. `CBaseTabbedPane` derivato da `CDockablePane` e viene conservato un puntatore a un `CMFCBaseTabCtrl` oggetto. Il `CBaseTabbedPane` consente agli utenti di inserire e ridimensionare le barre di controllo a schede. Uso [CDockablePane:: Attachtotabwnd](../mfc/reference/cdockablepane-class.md#attachtotabwnd) per creare dinamicamente barre di controllo sono ancorate e a schede.  
  
 Il controllo barra di Outlook si basa anche sulle barre a schede. Il [classe CMFCOutlookBar](../mfc/reference/cmfcoutlookbar-class.md) derivato da `CBaseTabbedPane`. Per ulteriori informazioni sull'utilizzo della barra di Outlook, vedere [classe CMFCOutlookBar](../mfc/reference/cmfcoutlookbar-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)

