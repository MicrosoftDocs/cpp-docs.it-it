---
title: Gestori per intervalli della mappa messaggi
ms.date: 11/04/2016
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
ms.openlocfilehash: bd10b143753bf908a7a30f8675998e355f331b64
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50601084"
---
# <a name="handlers-for-message-map-ranges"></a>Gestori per intervalli della mappa messaggi

Questo articolo illustra come eseguire il mapping di un intervallo di messaggi a una funzione del gestore messaggi single (invece di mapping di un messaggio a una sola funzione).

Esistono casi è necessario elaborare più di una notifica di messaggio o un controllo in esattamente allo stesso modo. In tali casi, potrebbe voler eseguire il mapping di tutti i messaggi a una funzione di gestione singolo. Gli intervalli della mappa messaggi consentono di eseguire questa operazione per un intervallo contiguo di messaggi:

- È possibile eseguire il mapping degli intervalli di ID comando per:

   - Una funzione del gestore comando.

   - Una funzione del gestore comando update.

- È possibile eseguire il mapping dei messaggi di notifica del controllo per un intervallo ID di controllo per una funzione del gestore messaggi.

Gli argomenti trattati in questo articolo includono:

- [La scrittura della voce della mappa messaggi](#_core_writing_the_message.2d.map_entry)

- [La dichiarazione di funzione del gestore](#_core_declaring_the_handler_function)

- [Esempio per un intervallo di ID di comando](#_core_example_for_a_range_of_command_ids)

- [Esempio per un intervallo ID di controllo](#_core_example_for_a_range_of_control_ids)

##  <a name="_core_writing_the_message.2d.map_entry"></a> La scrittura della voce della mappa messaggi

Nel. CPP, aggiungere la voce della mappa messaggi, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCMessageHandling#6](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_1.cpp)]

La voce della mappa messaggi include gli elementi seguenti:

- Macro della mappa messaggi intervallo:

   - [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range)

   - [ON_UPDATE_COMMAND_UI_RANGE](reference/message-map-macros-mfc.md#on_update_command_ui_range)

   - [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range)

- Parametri della macro:

   Le prime due macro accettano tre parametri:

   - L'ID di comando che inizia l'intervallo

   - ID di comando di fine dell'intervallo

   - Il nome della funzione del gestore messaggi

   L'intervallo di ID di comando deve essere contigua.

   La macro, terza `ON_CONTROL_RANGE`, accetta un parametro aggiuntivo prima: messaggio di una notifica del controllo, ad esempio **EN_CHANGE**.

##  <a name="_core_declaring_the_handler_function"></a> La dichiarazione di funzione del gestore

Aggiungere la dichiarazione di funzione del gestore nel. File H. Il codice seguente mostra come potrebbe apparire questo, come illustrato di seguito:

[!code-cpp[NVC_MFCMessageHandling#7](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_2.h)]

Funzioni del gestore per i singoli comandi in genere non accettano parametri. Fatta eccezione per le funzioni, funzioni di gestione per gli intervalli della mappa messaggi richiedono un parametro aggiuntivo, *nID*, di tipo **UINT**. Questo parametro è il primo parametro. L'ID di comando aggiuntive necessaria per specificare il comando che l'utente ha scelto effettivamente alcune variazioni per il parametro aggiuntivo.

Per altre informazioni sui requisiti dei parametri per l'aggiornamento di funzioni di gestione, vedere [per un intervallo di ID dei comandi di esempio](#_core_example_for_a_range_of_command_ids).

##  <a name="_core_example_for_a_range_of_command_ids"></a> Esempio di ID del comando intervallo

Quando è possibile usare intervalli è un esempio di gestione dei comandi, ad esempio il comando di Zoom nell'esempio di MFC [HIERSVR](../visual-cpp-samples.md). Questo comando esegue lo zoom della visualizzazione, ridimensionarlo tra 25% e 300% delle dimensioni normali. Classe di visualizzazione HIERSVR Usa un intervallo di gestire i comandi di Zoom con una voce nella mappa messaggi simili a questo:

[!code-cpp[NVC_MFCMessageHandling#8](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_3.cpp)]

Quando si scrive la voce della mappa messaggi, specificare:

- Due ID di comando, inizia e termina un intervallo contiguo.

   Sono riportate di seguito **ID_VIEW_ZOOM25** e **ID_VIEW_ZOOM300**.

- Il nome della funzione del gestore per i comandi.

   In questo caso ha `OnZoom`.

La dichiarazione di funzione sarebbe analogo al seguente:

[!code-cpp[NVC_MFCMessageHandling#9](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_4.h)]

Nel caso di funzioni del gestore aggiornamenti è probabilmente più ampiamente utili e simili. È piuttosto comune scrivere `ON_UPDATE_COMMAND_UI` gestori per un numero di comandi e individuare personalmente la scrittura o la copia, lo stesso codice ripetutamente. La soluzione consiste nell'eseguire il mapping di un intervallo di ID a uno aggiornare con funzione di gestore comando il `ON_UPDATE_COMMAND_UI_RANGE` macro. Gli ID di comando devono formare un intervallo contiguo. Per un esempio, vedere la `OnUpdateZoom` gestore e il relativo `ON_UPDATE_COMMAND_UI_RANGE` voce nella mappa messaggi nella classe di visualizzazione dell'esempio HIERSVR.

L'aggiornamento funzioni del gestore per singoli comandi di cui un singolo parametro, in genere si *pCmdUI*, di tipo `CCmdUI*`. A differenza delle funzioni del gestore, le funzioni del gestore di aggiornamento per gli intervalli della mappa messaggi non richiedono un parametro aggiuntivo, *nID*, di tipo **UINT**. L'ID di comando, è necessario specificare quale comando l'utente ha scelto in realtà, viene trovato nel `CCmdUI` oggetto.

##  <a name="_core_example_for_a_range_of_control_ids"></a> Esempio di ID del controllo intervallo

Un altro caso interessante consiste nell'associare i messaggi di notifica del controllo per un intervallo ID di controllo per un singolo gestore. Si supponga che l'utente può fare clic sui pulsanti 10. Per eseguire il mapping di tutte le 10 pulsanti a un singolo gestore, la voce della mappa messaggi si presenta come segue:

[!code-cpp[NVC_MFCMessageHandling#10](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_5.cpp)]

Quando si scrive il `ON_CONTROL_RANGE` macro della mappa del messaggio, si specifica:

- Un messaggio di notifica del controllo particolare.

   In questo caso ha **BN_CLICKED**.

- I valori ID del controllo associati all'intervallo contiguo di controlli.

   In questo caso si tratta **IDC_BUTTON1** e **IDC_BUTTON10**.

- Il nome della funzione del gestore di messaggi.

   In questo caso ha `OnButtonClicked`.

Quando si scrive la funzione del gestore, specificare l'eccesso **UINT** parametro, come illustrato di seguito:

[!code-cpp[NVC_MFCMessageHandling#11](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_6.cpp)]

Il `OnButtonClicked` gestore per una singola **BN_CLICKED** messaggio non accetta parametri. Lo stesso gestore per un intervallo di pulsanti accetta uno **UINT**. Il parametro aggiuntivo consente l'identificazione del controllo responsabile della generazione di **BN_CLICKED** messaggio.

Il codice illustrato nell'esempio è tipico: conversione del valore passato a un `int` entro l'intervallo di messaggio e che asserisce che questo è il caso. Si potrebbe eseguire un'azione diversa a seconda di quale è stato fatto clic sul pulsante.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
