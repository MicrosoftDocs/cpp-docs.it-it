---
title: 'Controlli ActiveX MFC: aggiunta di eventi personalizzati'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], events [MFC]
- EVENT_CUSTOM prefix [MFC]
- custom events [MFC], adding to ActiveX controls
- EVENT_CUSTOM macro [MFC]
- InCircle method [MFC]
- ClickIn event
- FireClickIn event
- COleControl class [MFC], custom events [MFC]
- Click event, custom events [MFC]
- events [MFC], ActiveX controls
- custom events [MFC]
- FireEvent method, adding custom events
ms.assetid: c584d053-1e34-47aa-958e-37d3e9b85892
ms.openlocfilehash: 70b0e08bc638b5f630d423ec0db8a169a0119175
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619947"
---
# <a name="mfc-activex-controls-adding-custom-events"></a>Controlli ActiveX MFC: aggiunta di eventi personalizzati

Gli eventi personalizzati differiscono dagli eventi azionari in quanto non vengono generati automaticamente dalla classe `COleControl` . Un evento personalizzato riconosce una determinata azione, determinata dallo sviluppatore del controllo, come un evento. Le voci della mappa eventi per gli eventi personalizzati sono rappresentate dalla EVENT_CUSTOM macro. Nella sezione seguente viene implementato un evento personalizzato per un progetto di controllo ActiveX creato mediante la creazione guidata controllo ActiveX.

## <a name="adding-a-custom-event-with-the-add-event-wizard"></a><a name="_core_adding_a_custom_event_with_classwizard"></a>Aggiunta di un evento personalizzato con la procedura guidata Aggiungi evento

La procedura seguente consente di aggiungere un evento personalizzato specifico, clic su. È possibile utilizzare questa procedura per aggiungere altri eventi personalizzati. Sostituire il nome dell'evento personalizzato con i relativi parametri per il nome e i parametri dell'evento ClickIn.

#### <a name="to-add-the-clickin-custom-event-using-the-add-event-wizard"></a>Per aggiungere l'evento personalizzato ClickIn utilizzando l'aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In **Visualizzazione classi**fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida fare clic su **Aggiungi** e quindi su **Aggiungi evento**.

   Verrà visualizzata la procedura guidata Aggiungi evento.

1. Nella casella **nome evento** selezionare innanzitutto un evento esistente, quindi fare clic sul pulsante di opzione **personalizzato** , quindi digitare *ClickIn*.

1. Nella casella **nome interno** Digitare il nome della funzione di attivazione dell'evento. Per questo esempio, usare il valore predefinito fornito dalla procedura guidata Aggiungi evento ( `FireClickIn` ).

1. Aggiungere un parametro, denominato *xCoord* (Type *OLE_XPOS_PIXELS*), usando il **nome del parametro** e i controlli del **tipo di parametro** .

1. Aggiungere un secondo parametro, denominato *yCoord* (Type *OLE_YPOS_PIXELS*).

1. Fare clic su **fine** per creare l'evento.

## <a name="add-event-wizard-changes-for-custom-events"></a><a name="_core_classwizard_changes_for_custom_events"></a>Aggiungere modifiche alla procedura guidata evento per gli eventi personalizzati

Quando si aggiunge un evento personalizzato, la procedura guidata Aggiungi evento apporta modifiche alla classe del controllo. H,. CPP, e. File IDL. Gli esempi di codice seguenti sono specifici dell'evento ClickIn.

All'intestazione vengono aggiunte le righe seguenti (. H) file della classe Control:

[!code-cpp[NVC_MFC_AxUI#7](codesnippet/cpp/mfc-activex-controls-adding-custom-events_1.h)]

Questo codice dichiara una funzione inline chiamata `FireClickIn` che chiama [COleControl:: FireEvent](reference/colecontrol-class.md#fireevent) con l'evento ClickIn e i parametri definiti tramite la procedura guidata Aggiungi evento.

Inoltre, la riga seguente viene aggiunta alla mappa eventi per il controllo, che si trova nell'implementazione di (. CPP) file della classe Control:

[!code-cpp[NVC_MFC_AxUI#8](codesnippet/cpp/mfc-activex-controls-adding-custom-events_2.cpp)]

Questo codice esegue il mapping dell'evento ClickIn alla funzione inline `FireClickIn` , passando i parametri definiti mediante l'aggiunta guidata evento.

Infine, viene aggiunta la riga seguente all'oggetto del controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#9](codesnippet/cpp/mfc-activex-controls-adding-custom-events_3.idl)]

Questa riga assegna all'evento ClickIn un numero ID specifico, tratto dalla posizione dell'evento nell'elenco eventi della creazione guidata evento. La voce nell'elenco di eventi consente a un contenitore di prevedere l'evento. Ad esempio, potrebbe fornire codice del gestore da eseguire quando viene generato l'evento.

## <a name="calling-fireclickin"></a><a name="_core_calling_fireclickin"></a>Chiamata di FireClickIn

Ora che è stato aggiunto l'evento personalizzato ClickIn utilizzando l'aggiunta guidata evento, è necessario decidere quando questo evento deve essere attivato. A tale scopo, chiamare `FireClickIn` quando si verifica l'azione appropriata. Per questa discussione, il controllo Usa la `InCircle` funzione all'interno `WM_LBUTTONDOWN` di un gestore di messaggi per generare l'evento ClickIn quando un utente fa clic all'interno di un'area circolare o ellittica. La procedura seguente consente di aggiungere il `WM_LBUTTONDOWN` gestore.

#### <a name="to-add-a-message-handler-with-the-add-event-wizard"></a>Per aggiungere un gestore di messaggi con la procedura guidata Aggiungi evento

1. Caricare il progetto del controllo.

1. In **Visualizzazione classi**selezionare la classe del controllo ActiveX.

1. Nella finestra **Proprietà** viene visualizzato un elenco di messaggi che possono essere gestiti dal controllo ActiveX. A qualsiasi messaggio visualizzato in grassetto è già assegnata una funzione di gestore.

1. Selezionare il messaggio che si desidera gestire. Per questo esempio, selezionare `WM_LBUTTONDOWN` .

1. Nella casella di riepilogo a discesa a destra selezionare ** \<Add> OnLButtonDown**.

1. Fare doppio clic sulla nuova funzione di gestione in **Visualizzazione classi** per passare al codice del gestore di messaggi nell'implementazione di (. CPP) file del controllo ActiveX.

Nell'esempio di codice seguente viene chiamata la `InCircle` funzione ogni volta che si fa clic con il pulsante sinistro del mouse all'interno della finestra del controllo. Questo esempio si trova nella funzione del `WM_LBUTTONDOWN` gestore, `OnLButtonDown` , nell'esempio di [circ](../overview/visual-cpp-samples.md) abstract.

[!code-cpp[NVC_MFC_AxUI#10](codesnippet/cpp/mfc-activex-controls-adding-custom-events_4.cpp)]

> [!NOTE]
> Quando la procedura guidata Aggiungi evento crea gestori di messaggi per le azioni dei pulsanti del mouse, viene aggiunta automaticamente una chiamata allo stesso gestore di messaggi della classe di base. Non rimuovere questa chiamata. Se il controllo utilizza uno dei messaggi del mouse azionario, è necessario chiamare i gestori di messaggi nella classe di base per garantire che il mouse capture venga gestito correttamente.

Nell'esempio seguente l'evento viene generato solo quando il clic si verifica all'interno di un'area circolare o ellittica all'interno del controllo. Per ottenere questo comportamento, è possibile inserire la `InCircle` funzione nell'implementazione del controllo (. File CPP):

[!code-cpp[NVC_MFC_AxUI#11](codesnippet/cpp/mfc-activex-controls-adding-custom-events_5.cpp)]

Sarà inoltre necessario aggiungere la seguente dichiarazione della `InCircle` funzione all'intestazione del controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#12](codesnippet/cpp/mfc-activex-controls-adding-custom-events_6.h)]

## <a name="custom-events-with-stock-names"></a><a name="_core_custom_events_with_stock_names"></a>Eventi personalizzati con nomi azionari

È possibile creare eventi personalizzati con lo stesso nome degli eventi azionari. Tuttavia, non è possibile implementare entrambi nello stesso controllo. Ad esempio, potrebbe essere necessario creare un evento personalizzato denominato clic che non viene attivato quando viene normalmente attivato il fatto clic su evento azionario. È quindi possibile generare l'evento click in qualsiasi momento chiamando la relativa funzione di attivazione.

La procedura seguente consente di aggiungere un evento Click personalizzato.

#### <a name="to-add-a-custom-event-that-uses-a-stock-event-name"></a>Per aggiungere un evento personalizzato che utilizza un nome di evento azionario

1. Caricare il progetto del controllo.

1. In **Visualizzazione classi**fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida fare clic su **Aggiungi** e quindi su **Aggiungi evento**.

   Verrà visualizzata la procedura guidata Aggiungi evento.

1. Nell'elenco a discesa **nome evento** selezionare un nome di evento azionario. Per questo esempio, selezionare **fare clic su**.

1. Per **tipo di evento**selezionare **personalizzato**.

1. Fare clic su **fine** per creare l'evento.

1. Chiamare nei `FireClick` punti appropriati del codice.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: metodi](mfc-activex-controls-methods.md)<br/>
[Classe COleControl](reference/colecontrol-class.md)
