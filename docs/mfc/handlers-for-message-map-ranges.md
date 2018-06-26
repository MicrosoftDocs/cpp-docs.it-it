---
title: Gestori per intervalli della mappa messaggi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 896977da8ca57cc17a9fa3b7864e1744ee07f35d
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930823"
---
# <a name="handlers-for-message-map-ranges"></a>Gestori per intervalli della mappa messaggi
Questo articolo illustra come eseguire il mapping di un intervallo di messaggi a una funzione del gestore singolo messaggio (anziché il mapping di un messaggio alla una sola funzione).  
  
 Esistono casi è necessario per elaborare più di una notifica di messaggio o un controllo nello stesso modo. In tali casi, potrebbe essere opportuno eseguire il mapping di tutti i messaggi a una funzione del gestore singolo. Gli intervalli della mappa messaggi consentono di eseguire questa operazione per un intervallo contiguo di messaggi:  
  
-   È possibile eseguire il mapping degli intervalli di ID di comando da:  
  
    -   Una funzione del gestore comandi.  
  
    -   Una funzione del gestore comandi update.  
  
-   È possibile mappare i messaggi di notifica del controllo per un intervallo di ID di controllo a una funzione del gestore messaggi.  
  
 Gli argomenti trattati in questo articolo includono:  
  
-   [La scrittura della voce della mappa messaggi](#_core_writing_the_message.2d.map_entry)  
  
-   [Dichiarazione di funzione del gestore](#_core_declaring_the_handler_function)  
  
-   [Esempio per un intervallo di ID di comando](#_core_example_for_a_range_of_command_ids)  
  
-   [Esempio per un intervallo di ID di controllo](#_core_example_for_a_range_of_control_ids)  
  
##  <a name="_core_writing_the_message.2d.map_entry"></a> La scrittura della voce della mappa messaggi  
 Nel. CPP file, aggiungere la voce della mappa messaggi, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#6](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_1.cpp)]  
  
 La voce della mappa messaggi prevede i seguenti elementi:  
  
-   La macro di intervallo della mappa messaggi:  
  
    -   [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range)  
  
    -   [ON_UPDATE_COMMAND_UI_RANGE](reference/message-map-macros-mfc.md#on_update_command_ui_range)  
  
    -   [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range)  
  
-   Parametri per la macro:  
  
     Le prime due macro richiedono tre parametri:  
  
    -   L'ID di comando che inizia l'intervallo  
  
    -   L'ID di comando finale dell'intervallo  
  
    -   Il nome della funzione del gestore messaggi  
  
     L'intervallo di ID di comando deve essere contigua.  
  
     La macro terzo `ON_CONTROL_RANGE`, accetta un parametro aggiuntivo primo: una notifica del controllo dei messaggi, ad esempio **EN_CHANGE**.  
  
##  <a name="_core_declaring_the_handler_function"></a> Dichiarazione di funzione del gestore  
 Aggiungere la dichiarazione di funzione del gestore nel. File H. Il codice seguente mostra come questo può apparire, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCMessageHandling#7](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_2.h)]  
  
 Funzioni di gestione per i singoli comandi in genere non accettano parametri. Fatta eccezione per le funzioni, funzioni di gestione per gli intervalli della mappa messaggi richiedono un parametro aggiuntivo *nID*, di tipo **UINT**. Questo parametro è il primo parametro. Il parametro aggiuntivo supporta l'ID di comando aggiuntive necessaria per specificare il comando effettivamente scelto dall'utente.  
  
 Per ulteriori informazioni sui requisiti dei parametri per l'aggiornamento delle funzioni di gestione, vedere [per un intervallo di ID dei comandi di esempio](#_core_example_for_a_range_of_command_ids).  
  
##  <a name="_core_example_for_a_range_of_command_ids"></a> Esempio di un ID di comando dell'intervallo  
 Quando si usino gli intervalli di un esempio è nella gestione dei comandi, ad esempio il comando Zoom nell'esempio MFC [HIERSVR](../visual-cpp-samples.md). Questo comando esegue lo zoom della visualizzazione, scalabilità tra il 25% e 300% delle dimensioni normali. Classe di visualizzazione HIERSVR utilizza un intervallo per gestire i comandi di Zoom con una voce della mappa messaggi simili a questo:  
  
 [!code-cpp[NVC_MFCMessageHandling#8](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_3.cpp)]  
  
 Quando si scrive la voce della mappa messaggi, specificare:  
  
-   Due ID di comando, all'inizio e alla fine di un intervallo contiguo.  
  
     Di seguito sono **ID_VIEW_ZOOM25** e **ID_VIEW_ZOOM300**.  
  
-   Il nome della funzione del gestore per i comandi.  
  
     Di seguito ha `OnZoom`.  
  
 La dichiarazione di funzione potrebbe essere analogo al seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#9](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_4.h)]  
  
 Nel caso di funzioni del gestore aggiornamenti è simile e probabilmente maggiormente utili. È piuttosto comune per scrivere `ON_UPDATE_COMMAND_UI` gestori per un numero di comandi e individuare la scrittura o la copia, lo stesso codice più volte. La soluzione consiste nell'eseguire il mapping di un intervallo di ID a uno aggiornare gestore funzione tramite comando il `ON_UPDATE_COMMAND_UI_RANGE` macro. Gli ID di comando devono formare un intervallo contiguo. Per un esempio, vedere la `OnUpdateZoom` gestore e il relativo `ON_UPDATE_COMMAND_UI_RANGE` voce della mappa messaggi nella classe di visualizzazione dell'esempio HIERSVR.  
  
 Aggiornare le funzioni del gestore per singoli comandi richiede in genere un solo parametro, *pCmdUI*, di tipo `CCmdUI*`. A differenza delle funzioni di gestione, le funzioni per gli intervalli della mappa messaggi non richiedono un parametro aggiuntivo *nID*, di tipo **UINT**. L'ID di comando, è necessario specificare quale comando effettivamente scelto dall'utente, è incluso il `CCmdUI` oggetto.  
  
##  <a name="_core_example_for_a_range_of_control_ids"></a> Esempio di un ID di controllo di intervallo  
 Un altro caso interessano consiste nell'associare i messaggi di notifica del controllo per un intervallo di ID di controllo a un singolo gestore. Si supponga che l'utente può fare clic su uno qualsiasi dei 10 pulsanti. Per mappare tutti i 10 pulsanti a un gestore, la voce della mappa messaggi avrà un aspetto simile al seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#10](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_5.cpp)]  
  
 Quando si scrive il `ON_CONTROL_RANGE` macro della mappa del messaggio, specificare:  
  
-   Un messaggio di notifica del controllo specifico.  
  
     Di seguito ha **BN_CLICKED**.  
  
-   I valori ID del controllo associati all'intervallo contiguo di controlli.  
  
     Ecco queste **IDC_BUTTON1** e **IDC_BUTTON10**.  
  
-   Il nome della funzione del gestore messaggi.  
  
     Di seguito ha `OnButtonClicked`.  
  
 Quando si scrive la funzione del gestore, specificare extra **UINT** parametro, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCMessageHandling#11](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_6.cpp)]  
  
 Il `OnButtonClicked` gestore per una singola **BN_CLICKED** messaggio non accetta parametri. Lo stesso gestore per una serie di pulsanti accetta uno **UINT**. Il parametro aggiuntivo consente di identificare il responsabile della generazione di controllo specifico di **BN_CLICKED** messaggio.  
  
 Il codice illustrato nell'esempio è tipico: conversione del valore passato a un `int` all'interno dell'intervallo di messaggio e l'asserzione che tratta dello stesso account. È quindi possibile adottare alcune azioni diverse a seconda di quale è stato fatto clic sul pulsante.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
