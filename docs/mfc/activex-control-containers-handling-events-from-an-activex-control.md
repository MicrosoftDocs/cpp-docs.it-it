---
title: 'Contenitori di controlli ActiveX: Gestione di eventi da un controllo ActiveX'
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
ms.openlocfilehash: 7487792fbc9fe6775640f40755a7f725543fb9f3
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907769"
---
# <a name="activex-control-containers-handling-events-from-an-activex-control"></a>Contenitori di controlli ActiveX: Gestione di eventi da un controllo ActiveX

Questo articolo illustra l'uso della finestra **Proprietà** (in **Visualizzazione classi**) per installare i gestori eventi per i controlli ActiveX in un contenitore di controlli ActiveX. I gestori di eventi vengono usati per ricevere notifiche (dal controllo) di determinati eventi ed eseguire un'azione in risposta. Questa notifica viene chiamata "generazione" dell'evento.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

> [!NOTE]
>  Questo articolo usa un progetto contenitore di controlli ActiveX basato su finestra di dialogo denominato container e un controllo incorporato denominato circ come esempio nelle procedure e nel codice.

Utilizzando il pulsante eventi nella finestra **Proprietà** (in **Visualizzazione classi**), è possibile creare una mappa degli eventi che possono verificarsi nell'applicazione contenitore di controlli ActiveX. Questa mappa, denominata "mapping di sink di evento", viene creata e gestita da Visual C++ quando si aggiungono i gestori eventi alla classe del contenitore di controlli. Ogni gestore eventi, implementato con una voce della mappa eventi, esegue il mapping di un evento specifico a una funzione membro del gestore eventi del contenitore. Questa funzione del gestore eventi viene chiamata quando l'evento specificato viene generato dall'oggetto del controllo ActiveX.

Per ulteriori informazioni sulle mappe di sink di evento, vedere [mapping di sink di evento](../mfc/reference/event-sink-maps.md) nei riferimenti alla libreria di *classi*.

##  <a name="_core_event_handler_modifications_to_the_project"></a>Modifiche al gestore eventi per il progetto

Quando si usa la finestra **Proprietà** per aggiungere gestori eventi, viene dichiarata e definita una mappa di sink di evento nel progetto. Al controllo vengono aggiunte le istruzioni seguenti. File CPP la prima volta che viene aggiunto un gestore eventi. Questo codice dichiara una mappa di sink di evento per la classe della finestra di dialogo (in `CContainerDlg`questo caso,):

[!code-cpp[NVC_MFC_AxCont#8](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_1.cpp)]
[!code-cpp[NVC_MFC_AxCont#9](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_2.cpp)]

Quando si usa la finestra **Proprietà** per aggiungere eventi, viene aggiunta una voce della`ON_EVENT`mappa eventi () alla mappa di sink di evento e viene aggiunta una funzione del gestore eventi all'implementazione del contenitore (. File CPP).

Nell'esempio seguente viene dichiarato un gestore eventi, denominato `OnClickInCircCtrl`, per l' `ClickIn` evento del controllo Circ:

[!code-cpp[NVC_MFC_AxCont#10](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_3.cpp)]

Viene inoltre aggiunto il modello seguente all'implementazione della `CContainerDlg` classe (. File CPP) per la funzione membro del gestore eventi:

[!code-cpp[NVC_MFC_AxCont#11](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_4.cpp)]

Per altre informazioni sulle macro di sink di evento, vedere [mapping di sink di evento](../mfc/reference/event-sink-maps.md) nei riferimenti alla libreria di *classi*.

#### <a name="to-create-an-event-handler-function"></a>Per creare una funzione del gestore eventi

1. Da Visualizzazione classi selezionare la classe della finestra di dialogo che contiene il controllo ActiveX. Per questo esempio, usare `CContainerDlg`.

1. Nella finestra **Proprietà** fare clic sul pulsante **Eventi**.

1. Nella finestra **Proprietà** selezionare l'ID del controllo ActiveX incorporato. Per questo esempio, usare `IDC_CIRCCTRL1`.

   Nella finestra **Proprietà** viene visualizzato un elenco di eventi che possono essere generati dal controllo ActiveX incorporato. A qualsiasi funzione membro visualizzata in grassetto sono già assegnate funzioni di gestione.

1. Selezionare l'evento che si desidera venga gestito dalla classe della finestra di dialogo. Per questo esempio, selezionare **fare clic su**.

1. Nella casella di riepilogo a discesa a destra selezionare  **\<Aggiungi > ClickCircctrl1**.

1. Fare doppio clic sulla nuova funzione di gestione da Visualizzazione classi per passare al codice del gestore eventi nell'implementazione di (. CPP) del `CContainerDlg`file.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
