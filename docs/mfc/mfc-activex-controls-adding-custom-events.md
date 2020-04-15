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
ms.openlocfilehash: 8d464e5d7c9731e158e44d66d569fd1555401e17
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364723"
---
# <a name="mfc-activex-controls-adding-custom-events"></a>Controlli ActiveX MFC: aggiunta di eventi personalizzati

Gli eventi personalizzati differiscono dagli eventi predefiniti in `COleControl`quanto non vengono generati automaticamente dalla classe . Un evento personalizzato riconosce una determinata azione, determinata dallo sviluppatore del controllo, come evento. Le voci della mappa eventi per gli eventi personalizzati sono rappresentate dalla macro EVENT_CUSTOM. Nella sezione seguente viene implementato un evento personalizzato per un progetto di controllo ActiveX creato utilizzando la Creazione guidata controllo ActiveX.

## <a name="adding-a-custom-event-with-the-add-event-wizard"></a><a name="_core_adding_a_custom_event_with_classwizard"></a>Aggiunta di un evento personalizzato con l'Aggiunta guidata evento

Nella procedura seguente viene aggiunto un evento personalizzato specifico, ClickIn.The following procedure adds a specific custom event, ClickIn. È possibile utilizzare questa procedura per aggiungere altri eventi personalizzati. Sostituire il nome dell'evento personalizzato e i relativi parametri per il nome e i parametri dell'evento ClickIn.

#### <a name="to-add-the-clickin-custom-event-using-the-add-event-wizard"></a>Per aggiungere l'evento personalizzato ClickIn utilizzando l'Aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In **Visualizzazione classi**fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi evento**.

   Verrà visualizzata l'Aggiunta guidata evento.

1. Nella casella **Nome evento** selezionare innanzitutto un evento esistente, quindi fare clic sul pulsante di opzione **Personalizzato,** quindi digitare *ClickIn*.

1. Nella casella **Nome interno** digitare il nome della funzione di attivazione dell'evento. Per questo esempio, utilizzare il valore predefinito`FireClickIn`fornito dall'Aggiunta guidata evento ( ).

1. Aggiungere un parametro, denominato *xCoord* (tipo *OLE_XPOS_PIXELS*), utilizzando i controlli **Nome parametro** e **Tipo parametro.**

1. Aggiungere un secondo parametro, denominato *yCoord* (tipo *OLE_YPOS_PIXELS*).

1. Fare clic su **Fine** per creare l'evento.

## <a name="add-event-wizard-changes-for-custom-events"></a><a name="_core_classwizard_changes_for_custom_events"></a>Modifiche della Procedura guidata Aggiungi evento per eventi personalizzati

Quando si aggiunge un evento personalizzato, l'Aggiunta guidata evento apporta modifiche alla classe del controllo . H. CPP e . File IDL. Gli esempi di codice seguenti sono specifici per l'evento ClickIn.The following code samples are specific to the ClickIn event.

Le seguenti righe vengono aggiunte all'intestazione (. H) della classe di controllo:

[!code-cpp[NVC_MFC_AxUI#7](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_1.h)]

Questo codice dichiara una funzione `FireClickIn` inline chiamata che chiama [COleControl::FireEvent](../mfc/reference/colecontrol-class.md#fireevent) con l'evento ClickIn e i parametri definiti mediante l'Aggiunta guidata evento.

Inoltre, la riga seguente viene aggiunta alla mappa eventi per il controllo, che si trova nell'implementazione (. CPP) della classe di controllo:

[!code-cpp[NVC_MFC_AxUI#8](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_2.cpp)]

Questo codice esegue il mapping dell'evento ClickIn alla funzione `FireClickIn`inline , passando i parametri definiti mediante l'Aggiunta guidata evento.

Infine, la riga seguente viene aggiunta al controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#9](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_3.idl)]

Questa riga assegna all'evento ClickIn un numero ID specifico, preso dalla posizione dell'evento nell'elenco di eventi Aggiunta guidata evento. La voce nell'elenco degli eventi consente a un contenitore di anticipare l'evento. Ad esempio, potrebbe fornire il codice del gestore da eseguire quando viene generato l'evento.

## <a name="calling-fireclickin"></a><a name="_core_calling_fireclickin"></a>Chiamata a FireClickIn

Dopo aver aggiunto l'evento personalizzato ClickIn utilizzando l'Aggiunta guidata evento, è necessario decidere quando deve essere generato l'evento. A tale scopo, chiamare `FireClickIn` quando si verifica l'azione appropriata. Per questa discussione, `InCircle` il controllo `WM_LBUTTONDOWN` utilizza la funzione all'interno di un gestore messaggi per generare il ClickIn evento quando un utente fa clic all'interno di un'area circolare o ellittica. La procedura seguente `WM_LBUTTONDOWN` aggiunge il gestore.

#### <a name="to-add-a-message-handler-with-the-add-event-wizard"></a>Per aggiungere un gestore messaggi con l'Aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In **Visualizzazione classi**selezionare la classe del controllo ActiveX.

1. Nella finestra **Proprietà** viene visualizzato un elenco di messaggi che possono essere gestiti dal controllo ActiveX. A qualsiasi messaggio visualizzato in grassetto è già assegnata una funzione di gestione.

1. Selezionare il messaggio che si desidera gestire. Per questo esempio, selezionare `WM_LBUTTONDOWN`.

1. Dalla casella di riepilogo a discesa a destra, selezionare ** \<Aggiungi> OnLButtonDown**.

1. Fare doppio clic sulla nuova funzione del gestore in **Visualizzazione classi** per passare al codice del gestore messaggi nell'implementazione (. CPP) del controllo ActiveX.

Nell'esempio di `InCircle` codice riportato di seguito viene chiamata la funzione ogni volta che si fa clic sul pulsante sinistro del mouse all'interno della finestra del controllo. Questo esempio è disponibile `WM_LBUTTONDOWN` nella `OnLButtonDown`funzione del gestore, , nell'esempio di [Circ](../overview/visual-cpp-samples.md) abstract.

[!code-cpp[NVC_MFC_AxUI#10](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_4.cpp)]

> [!NOTE]
> Quando l'Aggiunta guidata evento crea gestori di messaggi per le azioni del pulsante del mouse, viene aggiunta automaticamente una chiamata allo stesso gestore messaggi della classe base. Non rimuovere questa chiamata. Se il controllo utilizza uno dei messaggi stock del mouse, i gestori di messaggi nella classe di base devono essere chiamati per garantire che l'acquisizione del mouse venga gestita correttamente.

Nell'esempio seguente, l'evento viene generato solo quando il clic si verifica all'interno di un'area circolare o ellittica all'interno del controllo. Per ottenere questo comportamento, `InCircle` è possibile inserire la funzione nell'implementazione del controllo (. CPP) :

[!code-cpp[NVC_MFC_AxUI#11](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_5.cpp)]

Sarà inoltre necessario aggiungere la seguente `InCircle` dichiarazione della funzione all'intestazione del controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#12](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_6.h)]

## <a name="custom-events-with-stock-names"></a><a name="_core_custom_events_with_stock_names"></a>Eventi personalizzati con nomi stock

È possibile creare eventi personalizzati con lo stesso nome degli eventi predefiniti, tuttavia non è possibile implementarli entrambi nello stesso controllo. Ad esempio, è possibile creare un evento personalizzato denominato Clic che non viene generato quando l'evento azionario Clic normalmente viene generato. È quindi possibile generare il Click evento in qualsiasi momento chiamando la relativa funzione di attivazione.

La procedura seguente aggiunge un evento Click personalizzato.

#### <a name="to-add-a-custom-event-that-uses-a-stock-event-name"></a>Per aggiungere un evento personalizzato che utilizza un nome di evento stockTo add a custom event that uses a stock event name

1. Caricare il progetto del controllo.

1. In **Visualizzazione classi**fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi evento**.

   Verrà visualizzata l'Aggiunta guidata evento.

1. Nell'elenco a discesa **Nome evento,** selezionare un nome di evento stock. Per questo esempio, selezionare **Fare clic su**.

1. Per **Tipo di evento**, selezionare **Personalizzato**.

1. Fare clic su **Fine** per creare l'evento.

1. Chiamare `FireClick` nelle posizioni appropriate del codice.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
