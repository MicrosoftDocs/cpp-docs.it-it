---
title: Gestori per intervalli della mappa messaggi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- message handlers [MFC]
- handlers [MFC], message-map ranges
- message maps [MFC], message handler functions
- message maps [MFC], ranges
- control-notification messages [MFC]
- command IDs [MFC], message mapping
- message-map ranges [MFC]
- handlers [MFC]
- message handling [MFC], message handler functions
- mappings [MFC], message ranges
- command handling [MFC], command update handlers
- controls [MFC], notifications
- handler functions [MFC], message-map ranges
- handler functions [MFC]
- command update handlers [MFC]
- command routing [MFC], command update handlers
- message ranges [MFC]
- handler functions [MFC], declaring
- message ranges [MFC], mapping
ms.assetid: a271478b-5e1c-46f5-9f29-e5be44b27d08
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 02b44288d21ab2df68468b0e39cb1ee35b7b8810
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="handlers-for-message-map-ranges"></a>Gestori per intervalli della mappa messaggi
In questo articolo viene illustrato come eseguire il mapping di un intervallo di messaggi a una funzione del gestore singolo messaggio (invece di mapping di un messaggio alla funzione solo uno).  
  
 Esistono casi è necessario per elaborare più di una notifica di messaggio o un controllo nello stesso modo. In tali casi, si potrebbe voler eseguire il mapping di tutti i messaggi a un'unica funzione di gestione. Intervalli della mappa messaggi consentono di eseguire questa operazione per un intervallo contiguo di messaggi:  
  
-   È possibile eseguire il mapping di intervalli di ID di comando da:  
  
    -   Una funzione del gestore comando.  
  
    -   Una funzione del gestore comando update.  
  
-   È possibile mappare i messaggi di notifica del controllo per un intervallo di ID di controllo a una funzione del gestore messaggi.  
  
 Gli argomenti trattati in questo articolo includono:  
  
-   [La scrittura della voce della mappa messaggi](#_core_writing_the_message.2d.map_entry)  
  
-   [Dichiarazione di funzione del gestore](#_core_declaring_the_handler_function)  
  
-   [Esempio per un intervallo di ID di comando](#_core_example_for_a_range_of_command_ids)  
  
-   [Esempio per un intervallo di ID di controllo](#_core_example_for_a_range_of_control_ids)  
  
##  <a name="_core_writing_the_message.2d.map_entry"></a>La scrittura della voce della mappa messaggi  
 Nel. CPP file, aggiungere la voce della mappa messaggi, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#6](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_1.cpp)]  
  
 La voce della mappa messaggi include i seguenti elementi:  
  
-   La macro di intervallo della mappa messaggi:  
  
    -   [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range)  
  
    -   [ON_UPDATE_COMMAND_UI_RANGE](reference/message-map-macros-mfc.md#on_update_command_ui_range)  
  
    -   [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range)  
  
-   Parametri della macro:  
  
     Le prime due macro richiedono tre parametri:  
  
    -   L'ID di comando iniziale dell'intervallo  
  
    -   L'ID di comando finale dell'intervallo  
  
    -   Il nome della funzione del gestore messaggi  
  
     L'intervallo di ID di comando deve essere contigua.  
  
     La terza macro `ON_CONTROL_RANGE`, accetta un parametro aggiuntivo prima: una notifica del controllo dei messaggi, ad esempio **EN_CHANGE**.  
  
##  <a name="_core_declaring_the_handler_function"></a>Dichiarazione di funzione del gestore  
 Aggiungere la dichiarazione di funzione del gestore nel. File H. Il codice seguente viene illustrato come questo potrebbe apparire come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCMessageHandling#7](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_2.h)]  
  
 Funzioni di gestione per i singoli comandi in genere non accettano parametri. Fatta eccezione per le funzioni, funzioni del gestore per intervalli della mappa messaggi richiedono un parametro aggiuntivo, `nID`, di tipo **UINT**. Questo parametro è il primo parametro. Il parametro aggiuntivo supporta l'ID di comando aggiuntive necessaria per specificare il comando effettivamente scelto dall'utente.  
  
 Per ulteriori informazioni sui requisiti dei parametri per le funzioni del gestore di aggiornamento, vedere [per un intervallo di ID dei comandi di esempio](#_core_example_for_a_range_of_command_ids).  
  
##  <a name="_core_example_for_a_range_of_command_ids"></a>Esempio di un ID di comando dell'intervallo  
 Quando possibile utilizzare gli intervalli è un esempio per la gestione dei comandi come comando Zoom nell'esempio MFC [HIERSVR](../visual-cpp-samples.md). Questo comando esegue lo zoom della visualizzazione, scalabilità tra 25 e 300% delle dimensioni normali. Classe di visualizzazione HIERSVR viene utilizzato un intervallo per gestire i comandi di Zoom con una voce della mappa messaggi simili a questo:  
  
 [!code-cpp[NVC_MFCMessageHandling#8](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_3.cpp)]  
  
 Quando si scrive la voce della mappa messaggi, specificare:  
  
-   Due ID di comando, che inizia e termina un intervallo contiguo.  
  
     Di seguito sono `ID_VIEW_ZOOM25` e `ID_VIEW_ZOOM300`.  
  
-   Il nome della funzione del gestore per i comandi.  
  
     Di seguito ha `OnZoom`.  
  
 La dichiarazione di funzione sarà simile alla seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#9](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_4.h)]  
  
 Nel caso di funzioni del gestore di aggiornamento è simile e potrebbero essere più utili. È abbastanza comune per scrivere `ON_UPDATE_COMMAND_UI` gestori per un numero di comandi e individuare la scrittura o la copia, lo stesso codice più volte. La soluzione consiste nell'eseguire il mapping di un intervallo di ID a uno aggiornare gestore funzione tramite comando il `ON_UPDATE_COMMAND_UI_RANGE` (macro). L'ID di comando deve formare un intervallo contiguo. Per un esempio, vedere il **OnUpdateZoom** gestore e il relativo `ON_UPDATE_COMMAND_UI_RANGE` voce della mappa messaggi nella classe di visualizzazione dell'esempio HIERSVR.  
  
 Aggiornare le funzioni del gestore per singoli comandi richiede in genere un solo parametro, `pCmdUI`, di tipo **CCmdUI\***. A differenza delle funzioni di gestione, le funzioni per intervalli della mappa messaggi non richiedono un parametro aggiuntivo, `nID`, di tipo **UINT**. L'ID di comando, è necessario specificare il comando effettivamente scelto dall'utente, è presente nel `CCmdUI` oggetto.  
  
##  <a name="_core_example_for_a_range_of_control_ids"></a>Esempio di ID di controllo di intervallo  
 Un altro caso interessante è mapping di messaggi di notifica del controllo per un intervallo di ID di controllo a un singolo gestore. Si supponga che l'utente può fare clic su uno dei pulsanti di 10. Per eseguire il mapping di tutti i pulsanti di 10 a un unico gestore, la voce della mappa messaggi sarebbe simile al seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#10](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_5.cpp)]  
  
 Quando si scrive il `ON_CONTROL_RANGE` macro della mappa del messaggio, specificare:  
  
-   Un messaggio di notifica del controllo specifico.  
  
     Di seguito ha **BN_CLICKED**.  
  
-   I valori ID del controllo associati all'intervallo contiguo di controlli.  
  
     Di seguito sono `IDC_BUTTON1` e `IDC_BUTTON10`.  
  
-   Il nome della funzione del gestore di messaggi.  
  
     Di seguito ha `OnButtonClicked`.  
  
 Quando si scrive una funzione del gestore, specificare aggiuntivo **UINT** parametro, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCMessageHandling#11](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_6.cpp)]  
  
 Il `OnButtonClicked` gestore per un singolo **BN_CLICKED** messaggio non accetta parametri. Lo stesso gestore per una serie di pulsanti accetta uno **UINT**. Il parametro aggiuntivo consente di identificare il controllo specifico responsabile della generazione di **BN_CLICKED** messaggio.  
  
 Il codice illustrato nell'esempio è tipico: conversione del valore passato a un `int` all'interno dell'intervallo di messaggio e che questo è il caso di asserzione. È quindi possibile adottare alcune azioni diverse a seconda di quale è stato fatto clic sul pulsante.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
