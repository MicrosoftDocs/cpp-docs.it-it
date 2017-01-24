---
title: "Gestori per intervalli della mappa messaggi | Microsoft Docs"
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
  - "comandi (gestione), gestori aggiornamento comandi"
  - "ID di comando, mapping dei messaggi"
  - "comandi (routing), gestori aggiornamento comandi"
  - "gestori aggiornamento comandi"
  - "messaggi di notifica dei controlli"
  - "controlli [MFC], notifiche"
  - "funzioni di gestione"
  - "funzioni di gestione, dichiarazione"
  - "funzioni di gestione, intervalli della mappa messaggi"
  - "gestori"
  - "gestori, intervalli della mappa messaggi"
  - "mapping, intervalli di messaggi"
  - "gestori messaggi"
  - "gestione dei messaggi, funzioni del gestore messaggi"
  - "mappe messaggi, funzioni del gestore messaggi"
  - "mappe messaggi, intervalli"
  - "intervalli di messaggi"
  - "intervalli di messaggi, mapping"
  - "intervalli della mappa messaggi"
ms.assetid: a271478b-5e1c-46f5-9f29-e5be44b27d08
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestori per intervalli della mappa messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come eseguire il mapping di un intervallo dei messaggi a una funzione con singolo gestore messaggi \(anziché messaggio del mapping di uno solo a una funzione\).  
  
 È talvolta necessario elaborare più di un messaggio o notifica di controllo esattamente allo stesso modo.  In tali casi, può essere eseguire il mapping di messaggi a una sola funzione di gestione.  Gli intervalli della mappa messaggi consentono di eseguire questa operazione per un intervallo contiguo dei messaggi:  
  
-   È possibile eseguire il mapping degli intervalli di ID di comandi:  
  
    -   Una funzione del gestore comando.  
  
    -   Una funzione del gestore dell'aggiornamento dei comandi.  
  
-   È possibile eseguire il mapping dei messaggi di notifica di controllo per un intervallo degli ID di controllo a una funzione del gestore dei messaggi.  
  
 Gli argomenti trattati in questo articolo sono:  
  
-   [Scrittura di voci della mappa messaggi](#_core_writing_the_message.2d.map_entry)  
  
-   [Dichiarazione della funzione di gestione](#_core_declaring_the_handler_function)  
  
-   [Esempio per un intervallo degli ID di comando](#_core_example_for_a_range_of_command_ids)  
  
-   [Esempio per un intervallo degli ID di controllo](#_core_example_for_a_range_of_control_ids)  
  
##  <a name="_core_writing_the_message.2d.map_entry"></a> Scrittura di voci della mappa messaggi  
 Nel file di .CPP, aggiungere la voce della mappa messaggi, come illustrato nel seguente esempio:  
  
 [!code-cpp[NVC_MFCMessageHandling#6](../mfc/codesnippet/CPP/handlers-for-message-map-ranges_1.cpp)]  
  
 La voce della mappa messaggi è composto dai seguenti elementi:  
  
-   La macro dell'intervallo della mappa messaggi:  
  
    -   [ON\_COMMAND\_RANGE](../Topic/ON_COMMAND_RANGE.md)  
  
    -   [ON\_UPDATE\_COMMAND\_UI\_RANGE](../Topic/ON_UPDATE_COMMAND_UI_RANGE.md)  
  
    -   [ON\_CONTROL\_RANGE](../Topic/ON_CONTROL_RANGE.md)  
  
-   Parametri alla macro:  
  
     Le prime due macro accetta tre parametri:  
  
    -   L'id di comando di inizio dell'intervallo  
  
    -   L'id di comando che termina l'intervallo  
  
    -   Il nome della funzione del gestore dei messaggi  
  
     L'intervallo degli ID di comando deve essere contiguo.  
  
     La terza macro, `ON_CONTROL_RANGE`, accetta un primo parametro aggiuntivo: un messaggio di notifica del controllo, come **EN\_CHANGE**.  
  
##  <a name="_core_declaring_the_handler_function"></a> Dichiarazione della funzione di gestione  
 Aggiungere la dichiarazione di funzione di gestione in. File H.  Nel codice seguente viene illustrato come questo può apparire, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCMessageHandling#7](../mfc/codesnippet/CPP/handlers-for-message-map-ranges_2.h)]  
  
 Le funzioni di gestione dei singoli controlli normalmente non accettano parametri.  Ad eccezione delle funzioni del gestore aggiornamento, le funzioni di gestione degli intervalli della mappa messaggi richiedono un parametro aggiuntivo, `nID`, di tipo **UINT**.  Questo parametro è il primo parametro.  Il parametro aggiuntivo appropriata l'id di comando aggiuntivo necessario per specificare che ordinano l'utente ha effettivamente scelto.  
  
 Per ulteriori informazioni sui requisiti di parametro per aggiornare le funzioni di gestione, vedere [Esempio per un intervallo degli ID di comando](#_core_example_for_a_range_of_command_ids).  
  
##  <a name="_core_example_for_a_range_of_command_ids"></a> Esempio per un intervallo degli ID di comando  
 Quando è possibile utilizzare gli intervalli?  Un esempio è rappresentato nei controlli di gestione del comando zoom nell'esempio [HIERSVR](../top/visual-cpp-samples.md)MFC.  Questo comando nonché la visualizzazione, ridimensionandola tra 25% e 300% della dimensione normale.  La classe di visualizzazione HIERSVR utilizza un insieme per gestire i controlli zoom a una voce della mappa messaggi simile alla seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#8](../mfc/codesnippet/CPP/handlers-for-message-map-ranges_3.cpp)]  
  
 Quando si scrivono la voce della mappa messaggi, specificare:  
  
-   Due ID di comando, start e estremità un intervallo contiguo.  
  
     Di seguito sono `ID_VIEW_ZOOM25` e `ID_VIEW_ZOOM300`.  
  
-   Il nome della funzione di gestione per i controlli.  
  
     Di seguito è riportato `OnZoom`.  
  
 La dichiarazione di funzione sarà simile alla seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#9](../mfc/codesnippet/CPP/handlers-for-message-map-ranges_4.h)]  
  
 Il caso delle funzioni del gestore aggiornamento è simile e facile essere più largamente utile.  È piuttosto comune da scrivere gestori di `ON_UPDATE_COMMAND_UI` per una serie di controlli e da cercarsi scrittura, oppure copiare, gli stessi codice ripetutamente.  La soluzione consiste nell'eseguire il mapping di un intervallo di ID di comandi a una funzione del gestore aggiornamento mediante la macro di `ON_UPDATE_COMMAND_UI_RANGE`.  ID di comandi è necessario formare un intervallo contiguo.  Per un esempio, vedere il gestore di **OnUpdateZoom** e la relativa voce della mappa messaggi di `ON_UPDATE_COMMAND_UI_RANGE` nella classe di visualizzazione dell'esempio HIERSVR.  
  
 Le funzioni del gestore aggiornamento per i singoli controlli in genere accetta un singolo parametro, `pCmdUI`, di tipo **CCmdUI\***.  A differenza delle funzioni di gestione, le funzioni del gestore aggiornamento per gli intervalli della mappa messaggi non richiedono un parametro aggiuntivo, `nID`, di tipo **UINT**.  L'id di comando, necessario per specificare che ordinano l'utente ha effettivamente scelto, viene trovato nell'oggetto di `CCmdUI`.  
  
##  <a name="_core_example_for_a_range_of_control_ids"></a> Esempio per un intervallo degli ID di controllo  
 Un altro caso interessante esegue il mapping dei messaggi di notifica di controllo per un intervallo degli ID di controllo a un unico gestore.  Si supponga che l'utente può fare clic su uno di 10 pulsanti.  Per eseguire il mapping di tutti e 10 pulsanti a un gestore, la voce della mappa messaggi sarà simile alla seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#10](../mfc/codesnippet/CPP/handlers-for-message-map-ranges_5.cpp)]  
  
 Quando si scrivono la macro di `ON_CONTROL_RANGE` nella mappa messaggi, specificare:  
  
-   Un messaggio di notifica di controllo specifico.  
  
     Di seguito è riportato **BN\_CLICKED**.  
  
-   I valori ID controllo associati all'intervallo contiguo dei comandi.  
  
     Di seguito sono `IDC_BUTTON1` e `IDC_BUTTON10`.  
  
-   Il nome della funzione del gestore dei messaggi.  
  
     Di seguito è riportato `OnButtonClicked`.  
  
 Quando si scrivono la funzione di gestione, specificare il parametro aggiuntivo di **UINT**, come illustrato nel seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#11](../mfc/codesnippet/CPP/handlers-for-message-map-ranges_6.cpp)]  
  
 Il gestore di `OnButtonClicked` per un singolo messaggio di **BN\_CLICKED** non accetta parametri.  Lo stesso gestore per un intervallo dei pulsanti accetta un **UINT**.  Il parametro aggiuntivo consente di identificare il controllo particolare responsabile della generazione del messaggio di **BN\_CLICKED**.  
  
 Il codice illustrato nell'esempio è tipico: la conversione del valore viene passato a `int` nell'intervallo e dell'asserzione del messaggio che questo caso.  È quindi possibile intraprendere azioni differenti a seconda del pulsante selezionato.  
  
## Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)