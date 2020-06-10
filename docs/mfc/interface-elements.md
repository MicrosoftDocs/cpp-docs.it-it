---
title: Elementi dell'interfaccia utente
ms.date: 11/19/2018
helpviewer_keywords:
- architecture [MFC], MFC Feature Pack
- MFC Feature Pack, architecture
ms.assetid: eead6827-9602-40a3-8038-8986e8207385
ms.openlocfilehash: 4d4d81287cb30a7d3608025085cdb3f9a208147a
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619985"
---
# <a name="interface-elements"></a>Elementi dell'interfaccia utente

Questo documento descrive gli elementi dell'interfaccia introdotti in Visual Studio 2008 SP1 e descrive anche le differenze con la versione precedente della libreria.

Nella figura seguente viene illustrata un'applicazione compilata utilizzando i nuovi elementi dell'interfaccia.

![Applicazione di esempio per MFC Feature Pack](../mfc/media/mfc_featurepack.png "Applicazione di esempio per MFC Feature Pack")

## <a name="window-docking"></a>Ancoraggio finestra

La funzionalità di ancoraggio delle finestre è simile all'ancoraggio della finestra utilizzato dall'interfaccia utente grafica di Visual Studio.

## <a name="control-bars-are-now-panes"></a>Le barre di controllo sono ora riquadri

Le barre di controllo sono ora note come riquadri e derivano dalla [classe CBasePane](reference/cbasepane-class.md). Nelle versioni precedenti di MFC, la classe base delle barre di controllo era `CControlBar` .

La finestra cornice principale dell'applicazione è in genere rappresentata dalla classe [CFrameWndEx](reference/cframewndex-class.md) o dalla [classe CMDIFrameWndEx](reference/cmdiframewndex-class.md). Il frame principale è denominato *sito di ancoraggio*. I riquadri possono avere uno dei tre tipi di elementi padre: un sito di ancoraggio, una barra di ancoraggio o una finestra con mini-cornice.

Esistono due tipi di riquadri: non ridimensionabili e ridimensionabili. È possibile ridimensionare i riquadri ridimensionabili, ad esempio le barre di stato e le barre degli strumenti, usando i separatori o i dispositivi di scorrimento. I riquadri ridimensionabili possono formare contenitori (un riquadro può essere ancorato a un altro riquadro, creando un separatore tra di essi). Tuttavia, i riquadri ridimensionabili non possono essere collegati (ancorati) alle barre di ancoraggio.

Se l'applicazione usa riquadri non ridimensionabili, derivarli dalla [classe CPane](reference/cpane-class.md).  Se l'applicazione usa riquadri ridimensionabili, derivarli dalla [classe CDockablePane](reference/cdockablepane-class.md)

## <a name="dock-site"></a>Ancoraggio sito

Il sito dock (o la finestra cornice principale) possiede tutti i riquadri e le finestre con mini-cornice in un'applicazione. Il sito Dock contiene un membro [CDockingManager](reference/cdockingmanager-class.md) . Questo membro gestisce un elenco di tutti i riquadri che appartengono al sito di ancoraggio. L'elenco è ordinato in modo che i riquadri creati ai bordi esterni del sito di ancoraggio siano posizionati all'inizio dell'elenco. Quando il Framework ridisegno il sito di ancoraggio, esegue il loop su questo elenco e regola il layout di ogni riquadro in modo da includere il rettangolo di delimitazione corrente del sito di ancoraggio. È possibile chiamare `AdjustDockingLayout` o `RecalcLayout` quando è necessario modificare il layout di ancoraggio e il Framework reindirizza la chiamata al gestore di ancoraggio.

## <a name="dock-bars"></a>Barre di ancoraggio

Ogni finestra cornice principale può posizionare *barre di ancoraggio* lungo i bordi. Una barra di ancoraggio è un riquadro che appartiene a una [classe CDockSite](reference/cdocksite-class.md). Le barre di ancoraggio possono accettare oggetti derivati da [CPane](reference/cpane-class.md), ad esempio barre degli strumenti. Per creare barre di ancoraggio quando viene inizializzata la finestra cornice principale, chiamare `EnableDocking` . Per abilitare le barre Nascondi automaticamente, chiamare `EnableAutoHideBars` . `EnableAutoHideBars`Crea gli oggetti [CAutoHideDockSite](reference/cautohidedocksite-class.md) e li posiziona accanto a ogni barra di ancoraggio.

Ogni barra di ancoraggio è divisa in righe di ancoraggio. Le righe di ancoraggio sono rappresentate dalla [classe CDockingPanesRow](reference/cdockingpanesrow-class.md). Ogni riga di ancoraggio contiene un elenco di barre degli strumenti. Se un utente ancora una barra degli strumenti o sposta la barra degli strumenti da una riga all'altra all'interno della stessa barra di ancoraggio, il Framework crea una nuova riga e ridimensiona la barra di ancoraggio di conseguenza oppure posiziona la barra degli strumenti su una riga esistente.

## <a name="mini-frame-windows"></a>Finestre con mini-cornice

Un riquadro mobile si trova in una finestra con mini-cornice. Le finestre con mini-cornice sono rappresentate da due classi: la [classe CMDITabInfo](reference/cmditabinfo-class.md) (che può contenere un solo riquadro) e la [classe CMultiPaneFrameWnd](reference/cmultipaneframewnd-class.md) (che può contenere più riquadri). Per eseguire il Floating di un riquadro nel codice, chiamare [CBasePane:: FloatPane](reference/cbasepane-class.md#floatpane). Quando un riquadro è float, il Framework crea automaticamente una finestra con mini-cornice e tale finestra con mini-cornice diventa l'elemento padre del riquadro a virgola mobile. Quando il riquadro mobile viene ancorato, il Framework Reimposta l'elemento padre e il riquadro mobile diventa una barra di ancoraggio (per le barre degli strumenti) o un sito di ancoraggio (per i riquadri ridimensionabili).

## <a name="pane-dividers"></a>Divisori del riquadro

I divisori dei riquadri, denominati anche cursori o separatori, sono rappresentati dalla [classe CPaneDivider](reference/cpanedivider-class.md). Quando un utente ancora un riquadro, il Framework crea divisori del riquadro, indipendentemente dal fatto che il riquadro sia ancorato al sito di ancoraggio o a un altro riquadro. Quando un riquadro viene ancorato al sito di ancoraggio, il separatore del riquadro viene definito *divisore del riquadro predefinito*. Il separatore dei riquadri predefinito è responsabile del layout di tutti i riquadri ancorati nel sito di ancoraggio. Il gestore Dock gestisce un elenco di divisori predefiniti del riquadro e un elenco di riquadri. I gestori di ancoraggio sono responsabili del layout di tutti i riquadri ancorati.

## <a name="containers"></a>Contenitori

Tutti i riquadri ridimensionabili, quando vengono ancorati tra loro, vengono mantenuti nei contenitori. I contenitori sono rappresentati dalla [classe CPaneContainer](reference/cpanecontainer-class.md). Ogni contenitore dispone di puntatori al riquadro sinistro, al riquadro destro, al sottocontenitore sinistro, al sottocontenitore a destra e alla barra di divisione tra le parti sinistra e destra. (*Left* e *right* non fanno riferimento a lati fisici, bensì identificano i rami di una struttura ad albero). In questo modo è possibile creare una struttura ad albero di riquadri e divisori e pertanto ottenere layout complessi di riquadri che possono essere ridimensionati insieme. La `CPaneContainer` classe gestisce l'albero dei contenitori; gestisce anche due elenchi di riquadri e dispositivi di scorrimento che risiedono in questo albero. I gestori di contenitori dei riquadri vengono in genere incorporati in dispositivi di scorrimento predefiniti e finestre con mini-cornice che contengono più riquadri.

## <a name="auto-hide-control-bars"></a>Nascondi automaticamente barre di controllo

Per impostazione predefinita, ogni `CDockablePane` supporta la funzionalità Nascondi automaticamente. Quando un utente fa clic sul pulsante Aggiungi nella didascalia di `CDockablePane` , il Framework passa alla modalità Nascondi automaticamente. Per gestire il clic, il Framework crea una [classe CMFCAutoHideBar](reference/cmfcautohidebar-class.md) e una [classe CMFCAutoHideButton](reference/cmfcautohidebutton-class.md) associata all' `CMFCAutoHideBar` oggetto. Il framework inserisce il nuovo oggetto `CMFCAutoHideBar` in [CAutoHideDockSite](reference/cautohidedocksite-class.md). Il Framework connette inoltre alla `CMFCAutoHideButton` barra degli strumenti. La [classe CDockingManager](reference/cdockingmanager-class.md) gestisce `CDockablePane` .

## <a name="tabbed-control-bars-and-outlook-bars"></a>Barre di controllo a schede e barre di Outlook

La [classe CMFCBaseTabCtrl](reference/cmfcbasetabctrl-class.md) implementa la funzionalità di base di una finestra a schede con schede scollegabili. Per usare un `CMFCBaseTabCtrl` oggetto, inizializzare una [Classe CBaseTabbedPane](reference/cbasetabbedpane-class.md) nell'applicazione. `CBaseTabbedPane`viene derivato da `CDockablePane` e mantiene un puntatore a un `CMFCBaseTabCtrl` oggetto. `CBaseTabbedPane`Consente agli utenti di ancorare e ridimensionare le barre di controllo a schede. Usare [CDockablePane:: AttachToTabWnd](reference/cdockablepane-class.md#attachtotabwnd) per creare in modo dinamico le barre di controllo ancorate e a schede.

Il controllo barra di Outlook si basa anche sulle barre a schede. La [Classe CMFCOutlookBar](reference/cmfcoutlookbar-class.md) è derivata da `CBaseTabbedPane` . Per ulteriori informazioni sull'utilizzo della barra di Outlook, vedere [Classe CMFCOutlookBar](reference/cmfcoutlookbar-class.md).

## <a name="see-also"></a>Vedere anche

[Concetti](mfc-concepts.md)
