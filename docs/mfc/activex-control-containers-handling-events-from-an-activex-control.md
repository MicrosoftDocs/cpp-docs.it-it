---
title: 'Contenitori di controlli ActiveX: Gestione degli eventi da un controllo ActiveX'
ms.date: 09/12/2018
helpviewer_keywords:
- event handlers [MFC], ActiveX controls
- ActiveX control containers [MFC], event sinks
- event handling [MFC], ActiveX controls
- ON_EVENT macro [MFC]
- ActiveX controls [MFC], events [MFC]
- END_EVENTSINK_MAP macro, using
- events [MFC], ActiveX controls
- BEGIN_EVENTSINK_MAP macro
ms.assetid: f9c106db-052f-4e32-82ad-750646aa760b
ms.openlocfilehash: 8087d84d2203e4f910200acdd1b00e58d14f920e
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57293563"
---
# <a name="activex-control-containers-handling-events-from-an-activex-control"></a>Contenitori di controlli ActiveX: Gestione degli eventi da un controllo ActiveX

Questo articolo illustra l'uso della finestra delle proprietà per installare i gestori eventi per i controlli ActiveX in un contenitore di controlli ActiveX. I gestori eventi vengono utilizzati per ricevere le notifiche (dal controllo) di determinati eventi ed eseguire un'azione in risposta. Questa notifica viene chiamata l'evento "generazione".

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

> [!NOTE]
>  Questo articolo usa un finestra di dialogo progetto basato su ActiveX controllo contenitore denominato contenitore e un controllo incorporato denominato Circ come esempi di procedure e codice.

Con il pulsante eventi nella finestra Proprietà, è possibile creare una mappa degli eventi che possono verificarsi nell'applicazione contenitore di controlli ActiveX. Questa mappa, detta 'evento sink mappa ', viene creata e gestita da Visual C++ quando si aggiungono i gestori eventi alla classe di contenitore del controllo. Ciascun gestore eventi, implementata con una voce della mappa di evento, esegue il mapping di un evento specifico da una funzione del membro contenitore gestore eventi. Questa funzione del gestore eventi viene chiamata quando viene generato l'evento specificato dall'oggetto controllo ActiveX.

Per altre informazioni su mappe sink di evento, vedere [mappe Sink di evento](../mfc/reference/event-sink-maps.md) nel *Class Library Reference*.

##  <a name="_core_event_handler_modifications_to_the_project"></a> Modifiche del gestore eventi per il progetto

Quando si usa la finestra proprietà per aggiungere gestori eventi, una mappa di sink di evento viene dichiarata e definita nel progetto. Le istruzioni seguenti vengono aggiunti al controllo. File CPP la prima volta che viene aggiunto un gestore eventi. Questo codice dichiara una mappa di sink di eventi per la classe di finestra di dialogo (in questo caso, `CContainerDlg`):

[!code-cpp[NVC_MFC_AxCont#8](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_1.cpp)]
[!code-cpp[NVC_MFC_AxCont#9](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_2.cpp)]

Se si usa la finestra proprietà per aggiungere gli eventi, un evento di eseguire il mapping di voce (`ON_EVENT`) viene aggiunto alla mappa del sink di evento e un gestore eventi (funzione) viene aggiunto all'implementazione del contenitore (. File CPP).

L'esempio seguente dichiara un gestore eventi, denominato `OnClickInCircCtrl`, per il controllo di Circ `ClickIn` evento:

[!code-cpp[NVC_MFC_AxCont#10](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_3.cpp)]

Inoltre, il modello seguente viene aggiunto per il `CContainerDlg` implementazione della classe (. File CPP) per la funzione membro del gestore eventi:

[!code-cpp[NVC_MFC_AxCont#11](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_4.cpp)]

Per altre informazioni sulle macro di sink di evento, vedere [mappe Sink di evento](../mfc/reference/event-sink-maps.md) nel *Class Library Reference*.

#### <a name="to-create-an-event-handler-function"></a>Per creare una funzione del gestore eventi

1. Dalla visualizzazione classi, selezionare la classe di finestra di dialogo che contiene il controllo ActiveX. In questo esempio Usa `CContainerDlg`.

1. Nella finestra Proprietà scegliere il **eventi** pulsante.

1. Nella finestra Proprietà, selezionare l'ID di controllo del controllo ActiveX incorporato. In questo esempio Usa `IDC_CIRCCTRL1`.

   Finestra delle proprietà visualizza un elenco di eventi che possono essere attivati da controllo ActiveX incorporato. Qualsiasi funzione membro visualizzato in grassetto già dispone di funzioni di gestione assegnate.

1. Selezionare l'evento che si vuole che la classe di finestra di dialogo per la gestione. Per questo esempio, selezionare **fare clic su**.

1. Dalla casella di riepilogo a destra, selezionare  **\<Aggiungi > ClickCircctrl1**.

1. Fare doppio clic sulla nuova funzione di gestione dalla visualizzazione di classi a cui passare il codice del gestore eventi nell'implementazione (. File CPP) di `CContainerDlg`.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
