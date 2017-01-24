---
title: "Controlli ActiveX MFC: aggiunta di eventi personalizzati | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Click (evento), eventi personalizzati"
  - "ClickIn (evento)"
  - "COleControl (classe), eventi personalizzati"
  - "eventi personalizzati"
  - "eventi personalizzati, aggiunta a controlli ActiveX"
  - "EVENT_CUSTOM (macro)"
  - "EVENT_CUSTOM (prefisso)"
  - "eventi (C++), controlli ActiveX"
  - "FireClickIn (evento)"
  - "FireEvent (metodo), aggiunta di eventi personalizzati"
  - "InCircle (metodo)"
  - "MFC (controlli ActiveX), eventi"
ms.assetid: c584d053-1e34-47aa-958e-37d3e9b85892
caps.latest.revision: 14
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: aggiunta di eventi personalizzati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli eventi personalizzati sono diversi dagli eventi predefiniti in quanto non vengono automaticamente generati dalla classe `COleControl`.  Un evento personalizzato riconosce determinata azione, determinata dallo sviluppatore del controllo, come evento.  Le voci della mappa eventi per gli eventi personalizzati sono rappresentate dalla macro di `EVENT_CUSTOM`.  La sezione seguente viene implementato un evento personalizzato per un progetto di controllo ActiveX che è stato creato mediante la Creazione guidata controllo ActiveX.  
  
##  <a name="_core_adding_a_custom_event_with_classwizard"></a> Aggiunta di un evento personalizzato alla procedura l'aggiunta guidata evento  
 La procedura riportata di seguito viene aggiunto un evento personalizzato specifico, ClickIn.  È possibile utilizzare questa procedura per aggiungere altri eventi personalizzati.  Sostituire il nome dell'evento personalizzato e i relativi parametri per il nome di evento e i parametri di ClickIn.  
  
#### Per aggiungere l'evento personalizzato di ClickIn utilizzando la procedura l'aggiunta guidata evento  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi evento**.  
  
     Verrà avviata la procedura guidata evento.  
  
4.  Nella casella di **Nome evento**, selezionare qualsiasi evento esistente, quindi fare clic sul pulsante di opzione **Personalizza**, il tipo `ClickIn`.  
  
5.  Nella casella di **Nome interno**, digitare il nome della funzione di esempio l'attivazione dell'evento.  Per questo esempio, utilizzare il valore predefinito fornito dalla procedura guidata evento \(`FireClickIn`\).  
  
6.  Aggiungere un parametro, denominato `xCoord` \(tipo `OLE_XPOS_PIXELS`\), utilizzando i controlli di **Tipo parametro**  e di **Nome parametro**.  
  
7.  Aggiungere un secondo parametro, denominato `yCoord` \(tipo `OLE_YPOS_PIXELS`\).  
  
8.  Scegliere **Fine** per creare l'evento.  
  
##  <a name="_core_classwizard_changes_for_custom_events"></a> Aggiungere le modifiche della procedura guidata evento per gli eventi personalizzati  
 Quando si aggiunge un evento personalizzato, la procedura l'aggiunta guidata evento apporta modifiche alla classe del controllo. File H, di .CPP e .IDL.  Negli esempi di codice sono specifici all'evento di ClickIn.  
  
 Le seguenti righe aggiunte all'intestazione precompilata. H\) file della classe del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#7](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-events_1.h)]  
  
 Questo codice dichiara una funzione inline denominata `FireClickIn` che chiama [COleControl::FireEvent](../Topic/COleControl::FireEvent.md) con l'evento e i parametri di ClickIn è stato definito utilizzando la procedura guidata evento.  
  
 Inoltre, la riga seguente viene aggiunta alla mappa eventi per il controllo, che si trova nel file di implementazione \(.CPP\) della classe del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#8](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-events_2.cpp)]  
  
 Questo codice esegue il mapping dell'evento ClickIn alla funzione inline `FireClickIn`, passando parametri definiti utilizzando la procedura guidata evento.  
  
 Infine, la riga seguente viene aggiunta del file .IDL del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#9](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-events_3.idl)]  
  
 Questa riga assegna all'evento di ClickIn un numero ID specifici, ricavato dal percorso dell'evento nell'elenco degli eventi della procedura guidata evento.  L'elenco di voci nel caso consente di visualizzare un contenitore l'evento.  Ad esempio, potrebbe fornire codice del gestore da eseguire quando viene generato l'evento.  
  
##  <a name="_core_calling_fireclickin"></a> Chiamare FireClickIn  
 Dopo aver aggiunto l'evento personalizzato di ClickIn utilizzando la procedura l'aggiunta guidata evento, è necessario decidere quando questo evento deve essere generato.  Questa operazione chiamando `FireClickIn` quando l'azione appropriata verifica.  Per questa discussione, il controllo utilizza la funzione di `InCircle` in un gestore messaggi di `WM_LBUTTONDOWN` per generare l'evento di ClickIn quando una selezione all'interno di una circolare o un'area ellittica.  La procedura riportata di seguito aggiunge il gestore di `WM_LBUTTONDOWN`.  
  
#### Per aggiungere un gestore messaggi con la procedura l'aggiunta guidata evento  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, selezionare la classe del controllo ActiveX.  
  
3.  Nella finestra Proprietà fare clic sul pulsante **Messaggi**.  
  
     Nella Finestra Proprietà verrà visualizzato un elenco di messaggi che possono essere gestiti dal controllo ActiveX.  Qualsiasi messaggio visualizzato in grassetto dispone già di una funzione di gestione assegnata.  
  
4.  Nella Finestra Proprietà, selezionare il messaggio che si desidera gestire.  Per questo esempio, selezionare `WM_LBUTTONDOWN`.  
  
5.  Nell'elenco a discesa a destra, selezionare **\<Add\> OnLButtonDown**.  
  
6.  Fare doppio clic su nuova funzione di gestione in Visualizzazione classi per passare al codice del gestore messaggi nel file di implementazione \(.CPP\) del controllo ActiveX.  
  
 Nell'esempio di codice chiama la funzione di **InCircle** ogni volta che il pulsante sinistro del mouse viene fatto clic all'interno della finestra di controllo.  Questo esempio è disponibile nella funzione di gestione di `WM_LBUTTONDOWN`, `OnLButtonDown`, nell'[Esempio di Circ](../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_AxUI#10](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-events_4.cpp)]  
  
> [!NOTE]
>  Quando la procedura l'aggiunta guidata evento vengono creati gestori di messaggi per le azioni del pulsante del mouse, una chiamata allo stesso gestore messaggi della classe base viene aggiunta automaticamente.  Non rimuovere questa chiamata.  Se il controllo utilizza uno dei messaggi predefiniti del mouse, i gestori messaggi nella classe base devono essere chiamati per assicurarsi che lo stato mouse capture viene gestito correttamente.  
  
 Nell'esempio seguente, viene generato l'evento solo quando il clic si verifica in una circolare o un'area ellittica nel controllo.  A tale scopo, è possibile posizionare la funzione di `InCircle` nei file dell'implementazione del controllo \(.CPP\):  
  
 [!code-cpp[NVC_MFC_AxUI#11](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-events_5.cpp)]  
  
 Sarà inoltre necessario aggiungere la seguente dichiarazione della funzione di `InCircle` all'intestazione del controllo \(. H\) file:  
  
 [!code-cpp[NVC_MFC_AxUI#12](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-events_6.h)]  
  
##  <a name="_core_custom_events_with_stock_names"></a> Eventi personalizzati con i nomi predefiniti  
 È possibile creare eventi personalizzati con lo stesso nome degli eventi predefiniti, sebbene non è possibile implementare sia nello stesso controllo.  Ad esempio, è possibile creare un evento personalizzato denominato clic non viene generato quando il clic di evento predefinito in genere sarebbe stato generato.  È quindi generare l'evento Click in qualsiasi momento chiamando la funzione di esempio l'attivazione.  
  
 La procedura riportata di seguito consente di aggiungere un evento Click personalizzato.  
  
#### Per aggiungere un evento personalizzato che utilizza un nome di evento predefinito  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi evento**.  
  
     Verrà avviata la procedura guidata evento.  
  
4.  Nell'elenco a discesa di **Nome evento**, selezionare il nome di un evento predefinito.  Per questo esempio, **Clic**selezionato.  
  
5.  Per **Tipo evento**, **Personalizza**selezionato.  
  
6.  Scegliere **Fine** per creare l'evento.  
  
7.  Chiamata `FireClick` alle posizioni appropriate nel codice.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)