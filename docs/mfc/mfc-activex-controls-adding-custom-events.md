---
title: 'Controlli ActiveX MFC: Aggiunta di eventi personalizzati | Documenti Microsoft'
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
ms.openlocfilehash: 5b82232b8f2ad7a5e3bc1ff8fed0e8a38b1a7d66
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-activex-controls-adding-custom-events"></a>Controlli ActiveX MFC: aggiunta di eventi personalizzati
Eventi personalizzati diversi da eventi predefiniti in quanto non vengono generati automaticamente dalla classe `COleControl`. Un evento personalizzato riconosce una determinata operazione, determinata dallo sviluppatore del controllo, come un evento. Le voci della mappa eventi per eventi personalizzati sono rappresentate dal `EVENT_CUSTOM` (macro). Nella sezione seguente implementa un evento personalizzato per un progetto controllo ActiveX che è stato creato utilizzando la creazione guidata controllo ActiveX.  
  
##  <a name="_core_adding_a_custom_event_with_classwizard"></a> Aggiunta di un evento personalizzato con l'aggiunta guidata evento  
 La procedura seguente aggiunge un evento personalizzato ClickIn. È possibile utilizzare questa procedura per aggiungere altri eventi personalizzati. Sostituire con il nome di eventi personalizzati e i relativi parametri per i parametri e il nome dell'evento ClickIn.  
  
#### <a name="to-add-the-clickin-custom-event-using-the-add-event-wizard"></a>Per aggiungere l'evento personalizzato ClickIn mediante l'aggiunta guidata evento  
  
1.  Caricare il progetto del controllo.  
  
2.  In visualizzazione classi, fare clic sulla classe del controllo ActiveX per aprire il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi evento**.  
  
     Verrà visualizzata l'aggiunta guidata evento.  
  
4.  Nel **nome evento** casella, prima selezionare qualsiasi evento esistente, quindi fare clic su di **personalizzato** radio pulsante, quindi digitare `ClickIn`.  
  
5.  Nel **nome interno** , digitare il nome della funzione di generazione dell'evento. Per questo esempio, utilizzare il valore predefinito fornito per l'aggiunta guidata evento (`FireClickIn`).  
  
6.  Aggiungere un parametro, denominato `xCoord` (tipo `OLE_XPOS_PIXELS`), usando il **nome del parametro** e **tipo di parametro** controlli.  
  
7.  Aggiungere un secondo parametro, denominato `yCoord` (tipo `OLE_YPOS_PIXELS`).  
  
8.  Fare clic su **fine** per creare l'evento.  
  
##  <a name="_core_classwizard_changes_for_custom_events"></a> Modifiche di aggiunta evento guidata per eventi personalizzati  
 Quando si aggiunge un evento personalizzato, l'aggiunta guidata evento apporta modifiche alla classe del controllo. H. CPP, e. IDL (file). Esempi di codice seguenti sono specifici per l'evento ClickIn.  
  
 Le righe seguenti vengono aggiunti all'intestazione (. H) file della classe di controlli:  
  
 [!code-cpp[NVC_MFC_AxUI#7](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_1.h)]  
  
 Questo codice dichiara una funzione inline denominata `FireClickIn` che chiama [COleControl:: FireEvent](../mfc/reference/colecontrol-class.md#fireevent) con i parametri e ClickIn (evento) è definito tramite l'aggiunta guidata evento.  
  
 Inoltre, la riga seguente viene aggiunto alla mappa eventi per il controllo, si trova nell'implementazione (. File CPP) della classe di controlli:  
  
 [!code-cpp[NVC_MFC_AxUI#8](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_2.cpp)]  
  
 Questo codice viene eseguito il mapping dell'evento ClickIn alla funzione inline `FireClickIn`, passando i parametri definiti tramite l'aggiunta guidata evento.  
  
 Infine, la riga seguente viene aggiunto al controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxUI#9](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_3.idl)]  
  
 Questa riga assegna l'evento ClickIn un numero di ID, determinato dalla posizione dell'evento nell'elenco di eventi di aggiunta guidata evento. La voce nell'elenco eventi consente a un contenitore anticipare l'evento. Ad esempio, può fornire codice del gestore da eseguire quando viene generato l'evento.  
  
##  <a name="_core_calling_fireclickin"></a> Chiamata di FireClickIn  
 Dopo aver aggiunto l'evento personalizzato ClickIn mediante l'aggiunta guidata evento, è necessario decidere quando l'evento di attivazione. Tale scopo, chiamare `FireClickIn` quando si verifica l'azione appropriata. Per questa discussione, viene utilizzata la `InCircle` funzione all'interno di un `WM_LBUTTONDOWN` gestore di messaggi di generare l'evento ClickIn quando un utente fa clic all'interno di un'area circolare o ellittica. La procedura seguente aggiunge il `WM_LBUTTONDOWN` gestore.  
  
#### <a name="to-add-a-message-handler-with-the-add-event-wizard"></a>Per aggiungere un gestore di messaggi con l'aggiunta guidata evento  
  
1.  Caricare il progetto del controllo.  
  
2.  In visualizzazione classi, selezionare la classe del controllo ActiveX.  
  
3.  Nella finestra Proprietà fare clic su di **messaggi** pulsante.  
  
     La finestra proprietà consente di visualizzare un elenco di messaggi che possono essere gestiti dal controllo ActiveX. Qualsiasi messaggio visualizzato in grassetto già dispone di una funzione di gestione assegnata.  
  
4.  Dalla finestra delle proprietà, selezionare il messaggio in cui che si desidera gestire. Per questo esempio, selezionare `WM_LBUTTONDOWN`.  
  
5.  Selezionare la casella di riepilogo a destra,  **\<Aggiungi > OnLButtonDown**.  
  
6.  Fare doppio clic su nuova funzione di gestione in visualizzazione classi per passare al codice del gestore di messaggi nell'implementazione (. File CPP) del controllo ActiveX.  
  
 Nell'esempio di codice di esempio chiama il **InCircle** funzione ogni volta che si fa clic sul pulsante sinistro del mouse all'interno della finestra di controllo. In questo esempio è reperibile nel `WM_LBUTTONDOWN` funzione del gestore, `OnLButtonDown`nella [esempio Circ](../visual-cpp-samples.md) astratta.  
  
 [!code-cpp[NVC_MFC_AxUI#10](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_4.cpp)]  
  
> [!NOTE]
>  Quando l'aggiunta guidata evento crea gestori di messaggi per le azioni di pulsante del mouse, una chiamata al gestore del messaggio stesso della classe di base viene aggiunto automaticamente. Non rimuovere questa chiamata. Se il controllo utilizza uno dei messaggi di azioni del mouse, i gestori di messaggi nella classe di base devono essere chiamati per assicurarsi che il mouse capture venga gestito correttamente.  
  
 Nell'esempio seguente, l'evento viene generato solo quando il clic si verifica all'interno di un'area circolare o ellittica all'interno del controllo. A tale scopo, è possibile inserire il `InCircle` funzione nell'implementazione del controllo (. File CPP):  
  
 [!code-cpp[NVC_MFC_AxUI#11](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_5.cpp)]  
  
 È inoltre necessario aggiungere la seguente dichiarazione del `InCircle` funzione all'intestazione del controllo (. H) file:  
  
 [!code-cpp[NVC_MFC_AxUI#12](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_6.h)]  
  
##  <a name="_core_custom_events_with_stock_names"></a> Eventi personalizzati con il nome del titolo  
 È possibile creare eventi personalizzati con lo stesso nome di eventi predefiniti, ma non è possibile implementare entrambe nel controllo stesso. Potrebbe ad esempio, si desidera creare un evento personalizzato denominato Click che non venga attivato quando viene normalmente generato l'evento predefinito fare clic su. Impossibile quindi generi l'evento clic in qualsiasi momento chiamando la funzione di generazione dell'evento.  
  
 La procedura seguente aggiunge un clic personalizzato evento.  
  
#### <a name="to-add-a-custom-event-that-uses-a-stock-event-name"></a>Per aggiungere un evento personalizzato che utilizza un nome di evento  
  
1.  Caricare il progetto del controllo.  
  
2.  In visualizzazione classi, fare clic sulla classe del controllo ActiveX per aprire il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi evento**.  
  
     Verrà visualizzata l'aggiunta guidata evento.  
  
4.  Nel **nome evento** elenco a discesa selezionare il nome di un evento predefinito. Per questo esempio, selezionare **fare clic su**.  
  
5.  Per **tipo di evento**selezionare **personalizzato**.  
  
6.  Fare clic su **fine** per creare l'evento.  
  
7.  Chiamare `FireClick` nella posizione appropriata nel codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [Classe COleControl](../mfc/reference/colecontrol-class.md)
