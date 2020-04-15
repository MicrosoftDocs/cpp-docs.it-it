---
title: 'Contenitori di controlli ActiveX: gestione di eventi da un controllo ActiveX'
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
ms.openlocfilehash: ae623ee0973e78db3b542646dd6bdec58cc2dfc8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367945"
---
# <a name="activex-control-containers-handling-events-from-an-activex-control"></a>Contenitori di controlli ActiveX: gestione di eventi da un controllo ActiveX

In questo articolo viene illustrato l'utilizzo della finestra **Proprietà** (in **Visualizzazione classi**) per installare i gestori eventi per i controlli ActiveX in un contenitore di controlli ActiveX. I gestori eventi vengono utilizzati per ricevere notifiche (dal controllo) di determinati eventi ed eseguire un'azione in risposta. Questa notifica è chiamata "attivazione" dell'evento.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

> [!NOTE]
> In questo articolo viene utilizzato un progetto contenitore di controlli ActiveX basato su finestra di dialogo denominato Container e un controllo incorporato denominato Circ come esempi nelle procedure e nel codice.

Utilizzando il pulsante Eventi nella finestra **Proprietà** (in **Visualizzazione classi**), è possibile creare una mappa degli eventi che possono verificarsi nell'applicazione contenitore di controlli ActiveX. Questa mappa, denominata "mappa del sink di evento,' viene creata e gestita da Visual C, quando si aggiungono gestori eventi alla classe del contenitore di controlli. Ogni gestore eventi, implementato con una voce della mappa eventi, esegue il mapping di un evento specifico a una funzione membro del gestore eventi del contenitore. Questa funzione del gestore eventi viene chiamata quando l'evento specificato viene generato dall'oggetto controllo ActiveX.

Per ulteriori informazioni sulle mappe del sink di evento, vedere [Mappe sink](../mfc/reference/event-sink-maps.md) di evento in Riferimenti alla *libreria di*classi .

## <a name="event-handler-modifications-to-the-project"></a><a name="_core_event_handler_modifications_to_the_project"></a>Modifiche del gestore eventi al progettoEvent Handler Modifications to the Project

Quando si utilizza la finestra **Proprietà** per aggiungere gestori eventi, una mappa del sink di evento viene dichiarata e definita nel progetto. Le istruzioni seguenti vengono aggiunte al controllo . CPP la prima volta che viene aggiunto un gestore eventi. Questo codice dichiara una mappa del sink di evento `CContainerDlg`per la classe della finestra di dialogo (in questo caso, ):

[!code-cpp[NVC_MFC_AxCont#8](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_1.cpp)]
[!code-cpp[NVC_MFC_AxCont#9](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_2.cpp)]

Quando si utilizza la finestra **Proprietà** per aggiungere`ON_EVENT`eventi, una voce della mappa eventi ( ) viene aggiunta alla mappa del sink di evento e una funzione del gestore eventi viene aggiunta all'implementazione del contenitore (. CPP).

Nell'esempio riportato di seguito `OnClickInCircCtrl`viene dichiarato un gestore eventi, denominato , per l'evento del `ClickIn` controllo Circ:

[!code-cpp[NVC_MFC_AxCont#10](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_3.cpp)]

Inoltre, il modello seguente viene `CContainerDlg` aggiunto all'implementazione della classe (. CPP) per la funzione membro del gestore eventi:

[!code-cpp[NVC_MFC_AxCont#11](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_4.cpp)]

Per ulteriori informazioni sulle macro sink di evento, vedere [Mappe sink di evento](../mfc/reference/event-sink-maps.md) in Riferimenti alla libreria *di*classi .

#### <a name="to-create-an-event-handler-function"></a>Per creare una funzione del gestore eventiTo create an event handler function

1. In Visualizzazione classi selezionare la classe di finestre di dialogo che contiene il controllo ActiveX. Per questo esempio, utilizzare `CContainerDlg`.

1. Nella finestra **Proprietà** fare clic sul pulsante **Eventi** .

1. Nella finestra **Proprietà** selezionare l'ID del controllo ActiveX incorporato. Per questo esempio, utilizzare `IDC_CIRCCTRL1`.

   Nella finestra **Proprietà** viene visualizzato un elenco di eventi che possono essere generati dal controllo ActiveX incorporato. A qualsiasi funzione membro illustrata in grassetto sono già assegnate funzioni di gestione.

1. Selezionare l'evento che si desidera venga gestito dalla classe della finestra di dialogo. Per questo esempio, selezionare **Fare clic su**.

1. Dalla casella di riepilogo a discesa a destra, selezionare ** \<Aggiungi> clic suCircctrl1**.

1. Fare doppio clic sulla nuova funzione del gestore da Visualizzazione classi per passare al codice del gestore eventi nell'implementazione (. CPP) di `CContainerDlg`.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
