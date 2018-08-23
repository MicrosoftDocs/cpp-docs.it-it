---
title: Elementi dell'interfaccia utente | Microsoft Docs
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
ms.openlocfilehash: 501e5f4554c93c3371f8160f986a16ab14716eee
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539448"
---
# <a name="interface-elements"></a>Elementi dell'interfaccia utente
Questo documento descrive gli elementi dell'interfaccia che sono state introdotte in Visual Studio 2008 SP1 e vengono inoltre descritte le differenze con la versione precedente della libreria.  
  
 La figura seguente mostra un'applicazione che è stata compilata utilizzando i nuovi elementi di interfaccia.  
  
 ![Applicazione di esempio MFC Feature Pack](../mfc/media/mfc_featurepack.png "mfc_featurepack")  
  
## <a name="window-docking"></a>Ancoraggio delle finestre  
 Funzionalità di ancoraggio di finestra è simile alla finestra di ancoraggio che usa l'interfaccia utente grafica di Visual Studio.  
  
## <a name="control-bars-are-now-panes"></a>Le barre di controllo sono ora riquadri  
 Le barre di controllo sono ora noto come riquadri e vengono ricavate [classe CBasePane](../mfc/reference/cbasepane-class.md). Nelle versioni precedenti di MFC, la classe di base di barre di controllo era `CControlBar`.  
  
 La finestra cornice principale dell'applicazione è in genere rappresentata dal [classe CFrameWndEx](../mfc/reference/cframewndex-class.md) o nella [CMDIFrameWndEx (classe)](../mfc/reference/cmdiframewndex-class.md). La cornice principale viene chiamata il *sito di ancoraggio*. I riquadri possono avere uno dei tre tipi di elementi padre: un sito di ancoraggio, una barra o una finestra con mini-cornice.  
  
 Esistono due tipi di riquadri: non ridimensionabile e ridimensionabile. Riquadri ridimensionabili, ad esempio le barre di stato e barre degli strumenti, possono essere ridimensionati con barre di divisione o dispositivi di scorrimento. Riquadri ridimensionabili possono formare i contenitori (un riquadro può essere ancorato a un altro riquadro, la creazione di una barra di divisione tra di esse). Tuttavia, non è possibile collegare riquadri ridimensionabili (ancorato) per le barre di ancoraggio.  
  
 Se l'applicazione utilizza i riquadri non ridimensionabile, derivarle [classe CPane](../mfc/reference/cpane-class.md).  Se l'applicazione usa riquadri ridimensionabili, derivarle da [CDockablePane Class](../mfc/reference/cdockablepane-class.md)  
  
## <a name="dock-site"></a>Sito di ancoraggio  
 Il sito di ancoraggio (o una finestra cornice principale) possiede tutti i riquadri e finestre con mini-cornice in un'applicazione. Sito di ancoraggio contiene un [CDockingManager](../mfc/reference/cdockingmanager-class.md) membro. Questo membro gestisce un elenco di tutti i riquadri che appartengono al sito di ancoraggio. L'elenco è ordinato in modo che i riquadri creati bordi esterni di sito di ancoraggio vengono posizionati all'inizio dell'elenco. Quando il framework ridisegna il sito di ancoraggio, scorre in ciclo l'elenco e regola il layout di ogni riquadro per includere il rettangolo di delimitazione corrente del sito di ancoraggio. È possibile chiamare `AdjustDockingLayout` o `RecalcLayout` quando è necessario modificare il layout di ancoraggio e i framework reindirizzerà questa chiamata per il gestore di ancoraggio.  
  
## <a name="dock-bars"></a>Le barre di ancoraggio  
 Ogni finestra cornice principale è possibile posizionare *ancorare barre* lungo i bordi. Una barra di ancoraggio è un riquadro che appartiene a un [classe CDockSite](../mfc/reference/cdocksite-class.md). Le barre di ancoraggio possono accettare gli oggetti derivati da [CPane](../mfc/reference/cpane-class.md), ad esempio le barre degli strumenti. Per creare barre dock quando viene avviata la finestra cornice principale, chiamare `EnableDocking`. Per abilitare le barre Nascondi automaticamente, chiamare `EnableAutoHideBars`. `EnableAutoHideBars` Consente di creare [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md) oggetti e di posizionarli accanto a ogni barra.  
  
 Ogni barra è suddiviso in righe di ancoraggio. Le righe di ancoraggio sono rappresentate dal [classe CDockingPanesRow](../mfc/reference/cdockingpanesrow-class.md). Ogni riga di ancoraggio contiene un elenco delle barre degli strumenti. Se un utente viene ancorato di una barra degli strumenti o Sposta la barra degli strumenti da una riga a altra all'interno della stessa barra di ancoraggio, il framework crea una nuova riga e ridimensiona la barra di conseguenza, o posiziona la barra degli strumenti su una riga esistente.  
  
## <a name="mini-frame-windows"></a>Windows con mini-cornice  
 Un riquadro mobile si trova in una finestra con mini-cornice. Finestre con mini-cornice sono rappresentate da due classi: [classe CMDITabInfo](../mfc/reference/cmditabinfo-class.md) (che può contenere un solo riquadro) e [classe CMultiPaneFrameWnd](../mfc/reference/cmultipaneframewnd-class.md) (che può contenere diversi riquadri). Per float un riquadro del codice, chiamare [CBasePane::FloatPane](../mfc/reference/cbasepane-class.md#floatpane). Dopo che viene spostato un riquadro, il framework crea automaticamente una finestra con mini-cornice e tale finestra con mini-cornice diventa padre del riquadro mobile. Quando il riquadro mobile ancora, il framework Reimposta il relativo elemento padre e il riquadro mobile diventa una barra (per le barre degli strumenti) o un sito di ancoraggio (per i riquadri ridimensionabili).  
  
## <a name="pane-dividers"></a>Divisori di riquadro  
 Divisori di riquadro (denominati anche i dispositivi di scorrimento o barre di divisione) sono rappresentati dal [classe CPaneDivider](../mfc/reference/cpanedivider-class.md). Quando un utente è ancora un riquadro, il framework crea i divisori di riquadro, indipendentemente dal fatto che il riquadro viene ancorato nel sito di ancoraggio o in un altro riquadro. Quando un riquadro viene ancorato al sito di ancoraggio, il divisore di riquadro viene chiamato il *predefinito divisore di riquadro*. Il divisore di riquadro predefinito è responsabile per il layout di tutti i riquadri ancorati nel sito di ancoraggio. Il gestore di ancoraggio mantiene un elenco di divisori di riquadro predefinito e un elenco dei riquadri. I responsabili di ancoraggio sono responsabili per il layout di tutti i riquadri di ancoraggio.  
  
## <a name="containers"></a>Contenitori  
 Tutti i riquadri ridimensionabili, quando è ancorato tra loro, vengono mantenuti nei contenitori. I contenitori sono rappresentati dal [classe CPaneContainer](../mfc/reference/cpanecontainer-class.md). Ogni contenitore dispone di puntatori a relativo riquadro a sinistra, riquadro a destra, sottocontenitore sinistro, destro sottocontenitore e la barra di divisione tra le parti sinistra e destra. (*Sinistra* e *a destra* non fanno riferimento ai lati fisici, ma anziché identificare i rami di una struttura ad albero.) In questo modo è possibile compilare un albero di riquadri e le barre di divisione e pertanto ottenere layout complessi di riquadri che possono essere ridimensionati insieme. Il `CPaneContainer` classe gestisce l'albero di contenitori; inoltre gestisce due elenchi di riquadri e i dispositivi di scorrimento che si trovano in questa struttura ad albero. I responsabili di contenitore di riquadro sono in genere incorporati in finestre con mini-cornice contenenti più riquadri e i dispositivi di scorrimento predefinito.  
  
## <a name="auto-hide-control-bars"></a>Le barre di controllo Nascondi automaticamente  
 Per impostazione predefinita, ogni `CDockablePane` supporta la funzionalità Nascondi automaticamente. Quando un utente fa clic sul pulsante Aggiungi sulla barra del titolo del `CDockablePane`, il framework attiva il riquadro di modalità Nascondi automaticamente. Per gestire il clic, il framework crea una [classe CMFCAutoHideBar](../mfc/reference/cmfcautohidebar-class.md) e una [classe CMFCAutoHideButton](../mfc/reference/cmfcautohidebutton-class.md) associato il `CMFCAutoHideBar` oggetto. Inserisce il nuovo framework `CMFCAutoHideBar` nella [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md). Associa inoltre il framework di `CMFCAutoHideButton` alla barra degli strumenti. Il [CDockingManager Class](../mfc/reference/cdockingmanager-class.md) mantiene il `CDockablePane`.  
  
## <a name="tabbed-control-bars-and-outlook-bars"></a>Le barre di controllo a schede e le barre di Outlook  
 Il [classe CMFCBaseTabCtrl](../mfc/reference/cmfcbasetabctrl-class.md) implementa la funzionalità di base di una finestra a schede con schede staccabili. Usare un `CMFCBaseTabCtrl` dell'oggetto, inizializzare una [classe CBaseTabbedPane](../mfc/reference/cbasetabbedpane-class.md) nell'applicazione. `CBaseTabbedPane` è derivato da `CDockablePane` e viene conservato un puntatore a un `CMFCBaseTabCtrl` oggetto. Il `CBaseTabbedPane` consente agli utenti di ancoraggio e ridimensionare le barre di controllo a schede. Uso [CDockablePane:: Attachtotabwnd](../mfc/reference/cdockablepane-class.md#attachtotabwnd) per creare dinamicamente barre di controllo sono ancorate e a schede.  
  
 Il controllo barra di Outlook si basa anche sulle barre a schede. Il [classe CMFCOutlookBar](../mfc/reference/cmfcoutlookbar-class.md) è derivato da `CBaseTabbedPane`. Per altre informazioni sull'utilizzo della barra di Outlook, vedere [CMFCOutlookBar (classe)](../mfc/reference/cmfcoutlookbar-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)

