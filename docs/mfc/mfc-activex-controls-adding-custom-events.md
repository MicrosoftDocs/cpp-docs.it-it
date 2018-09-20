---
title: 'Controlli ActiveX MFC: Aggiunta eventi personalizzati | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c4acd417dacadbe2667f63c70435b97353bafe1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384416"
---
# <a name="mfc-activex-controls-adding-custom-events"></a>Controlli ActiveX MFC: aggiunta di eventi personalizzati

Eventi personalizzati differiscono da eventi predefiniti che non vengono attivati automaticamente dalla classe `COleControl`. Un evento personalizzato riconosce una determinata azione, determinata dallo sviluppatore del controllo, come un evento. Le voci della mappa eventi per gli eventi personalizzati sono rappresentate da EVENT_CUSTOM (macro). La sezione seguente implementa un evento personalizzato per un progetto controllo ActiveX che è stato creato utilizzando la creazione guidata controllo ActiveX.

##  <a name="_core_adding_a_custom_event_with_classwizard"></a> Aggiunta di un evento personalizzato con l'aggiunta guidata evento

La procedura seguente aggiunge un evento personalizzato specifico, ClickIn. È possibile utilizzare questa procedura per aggiungere altri eventi personalizzati. Sostituire con il nome dell'evento personalizzato e i relativi parametri per il nome dell'evento ClickIn e sui parametri.

#### <a name="to-add-the-clickin-custom-event-using-the-add-event-wizard"></a>Per aggiungere l'evento personalizzato ClickIn tramite l'aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In visualizzazione classi, fare clic sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi evento**.

     Verrà visualizzata l'aggiunta guidata evento.

1. Nel **nome dell'evento** casella, innanzitutto selezionare qualsiasi evento esistente, quindi fare clic sul **Custom** radio e quindi digitare *ClickIn*.

1. Nel **nome interno** , digitare il nome della funzione di generazione dell'evento dell'evento. Per questo esempio, usare il valore predefinito fornito dall'Aggiunta guidata evento (`FireClickIn`).

1. Aggiungere un parametro, denominato *xCoord* (tipo *OLE_XPOS_PIXELS*), utilizzando il **nome del parametro** e **tipo di parametro** controlli.

1. Aggiungere un secondo parametro, chiamato *yCoord* (tipo *OLE_YPOS_PIXELS*).

1. Fare clic su **fine** per creare l'evento.

##  <a name="_core_classwizard_changes_for_custom_events"></a> Aggiungi evento guidata modifiche per gli eventi personalizzati

Quando si aggiunge un evento personalizzato, l'aggiunta guidata evento apporta modifiche alla classe del controllo. H. CPP, e. File IDL. Esempi di codice seguenti sono specifici di ClickIn (evento).

Le righe seguenti vengono aggiunti all'intestazione (. H) file della classe di controlli:

[!code-cpp[NVC_MFC_AxUI#7](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_1.h)]

Questo codice dichiara una funzione inline chiamata `FireClickIn` che chiama [COleControl:: FireEvent](../mfc/reference/colecontrol-class.md#fireevent) con i parametri e ClickIn (evento) definito tramite l'aggiunta guidata evento.

Inoltre, la riga seguente viene aggiunto alla mappa dell'evento per il controllo, che si trova nell'implementazione (. File CPP) della classe di controlli:

[!code-cpp[NVC_MFC_AxUI#8](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_2.cpp)]

Questo codice viene eseguito il mapping dell'evento ClickIn alla funzione inline `FireClickIn`, passando i parametri definiti tramite l'aggiunta guidata evento.

Infine, la riga seguente viene aggiunto al controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#9](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_3.idl)]

Questa riga viene assegnato il ClickIn (evento) un numero ID specifico, determinato dalla posizione dell'evento nell'elenco di eventi di aggiunta guidata evento. La voce nell'elenco eventi consente a un contenitore anticipare l'evento. Ad esempio, può fornire il codice del gestore da eseguire quando viene generato l'evento.

##  <a name="_core_calling_fireclickin"></a> La chiamata a FireClickIn

Ora che è stato aggiunto l'evento personalizzato ClickIn tramite l'aggiunta guidata evento, è necessario decidere quando questo evento deve essere generato. Eseguire questa operazione chiamando `FireClickIn` quando si verifica l'azione appropriata. Per questa discussione, il controllo Usa il `InCircle` funzione all'interno di un gestore di messaggi WM_LBUTTONDOWN di generare l'evento ClickIn quando un utente fa clic all'interno di un'area circolare o ellittica. La procedura seguente aggiunge il gestore WM_LBUTTONDOWN.

#### <a name="to-add-a-message-handler-with-the-add-event-wizard"></a>Per aggiungere un gestore di messaggi con l'aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In visualizzazione classi, selezionare la classe del controllo ActiveX.

1. Nella finestra Proprietà scegliere il **messaggi** pulsante.

     La finestra proprietà consente di visualizzare un elenco di messaggi che possono essere gestiti dal controllo ActiveX. Qualsiasi messaggio visualizzato in grassetto già dispone di una funzione di gestione assegnata.

1. Dalla finestra delle proprietà, selezionare il messaggio che si desidera gestire. In questo esempio selezionare WM_LBUTTONDOWN.

1. Dalla casella di riepilogo a destra, selezionare  **\<Aggiungi > OnLButtonDown**.

1. Fare doppio clic sulla nuova funzione di gestione in visualizzazione di classi a cui passare il codice del gestore messaggi nell'implementazione (. File CPP) del controllo ActiveX.

Nell'esempio di codice di esempio chiama la `InCircle` funzione ogni volta che viene scelto il pulsante sinistro del mouse all'interno della finestra di controllo. In questo esempio è reperibile nella funzione del gestore WM_LBUTTONDOWN `OnLButtonDown`, nella [esempio Circ](../visual-cpp-samples.md) astratta.

[!code-cpp[NVC_MFC_AxUI#10](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_4.cpp)]

> [!NOTE]
>  Quando l'aggiunta guidata evento consente di creare i gestori di messaggi azioni dei pulsanti del mouse, una chiamata al gestore del messaggio stesso della classe di base viene aggiunto automaticamente. Non rimuovere questa chiamata. Se il controllo utilizza uno dei messaggi del mouse predefinita, i gestori di messaggi nella classe di base devono essere chiamati per garantire che il mouse capture venga gestito correttamente.

Nell'esempio seguente, l'evento viene generato solo quando il clic si verifica all'interno di un'area circolare o ellittica all'interno del controllo. A tale scopo, è possibile inserire il `InCircle` funzione nell'implementazione del controllo (. File CPP):

[!code-cpp[NVC_MFC_AxUI#11](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_5.cpp)]

È necessario anche aggiungere la dichiarazione seguente del `InCircle` funzione all'intestazione del controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#12](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_6.h)]

##  <a name="_core_custom_events_with_stock_names"></a> Eventi personalizzati con il nome del titolo

È possibile creare eventi personalizzati con lo stesso nome di eventi predefiniti, ma non è possibile implementare entrambi nello stesso controllo. Ad esempio, potrebbe voler creare un evento personalizzato denominato Click che non venga attivato quando viene normalmente generato l'evento Click. È quindi è stato possibile generare l'evento fare clic in qualsiasi momento chiamando la funzione di generazione dell'evento.

La procedura seguente aggiunge un personalizzata fare clic su eventi.

#### <a name="to-add-a-custom-event-that-uses-a-stock-event-name"></a>Per aggiungere un evento personalizzato che utilizza un nome di evento

1. Caricare il progetto del controllo.

1. In visualizzazione classi, fare clic sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi evento**.

     Verrà visualizzata l'aggiunta guidata evento.

1. Nel **nome dell'evento** elenco a discesa selezionare un nome di evento. Per questo esempio, selezionare **fare clic su**.

1. Per la **tipo di evento**, selezionare **Custom**.

1. Fare clic su **fine** per creare l'evento.

1. Chiamare `FireClick` in posizioni appropriate nel codice.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
