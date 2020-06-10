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
ms.openlocfilehash: 0ff9178679792929bbd6eb92bb6148cfa008dcad
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621685"
---
# <a name="handlers-for-message-map-ranges"></a>Gestori per intervalli della mappa messaggi

Questo articolo illustra come eseguire il mapping di un intervallo di messaggi a una singola funzione del gestore di messaggi, anziché eseguire il mapping di un messaggio a una sola funzione.

In alcuni casi è necessario elaborare più messaggi o notifiche di controllo esattamente allo stesso modo. In alcuni casi, potrebbe essere necessario eseguire il mapping di tutti i messaggi a una singola funzione del gestore. Gli intervalli della mappa messaggi consentono di eseguire questa operazione per un intervallo contiguo di messaggi:

- È possibile eseguire il mapping degli intervalli di ID comando a:

  - Funzione del gestore comando.

  - Funzione del gestore di aggiornamento del comando.

- È possibile mappare i messaggi di notifica del controllo per un intervallo di ID di controllo a una funzione di gestione messaggi.

Gli argomenti trattati in questo articolo includono:

- [Scrittura della voce della mappa messaggi](#_core_writing_the_message.2d.map_entry)

- [Dichiarazione della funzione del gestore](#_core_declaring_the_handler_function)

- [Esempio per un intervallo di ID comando](#_core_example_for_a_range_of_command_ids)

- [Esempio per un intervallo di ID controllo](#_core_example_for_a_range_of_control_ids)

## <a name="writing-the-message-map-entry"></a><a name="_core_writing_the_message.2d.map_entry"></a>Scrittura della voce della mappa messaggi

Nel. File CPP, aggiungere la voce della mappa messaggi, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCMessageHandling#6](codesnippet/cpp/handlers-for-message-map-ranges_1.cpp)]

La voce della mappa messaggi è costituita dagli elementi seguenti:

- Macro intervallo mappa messaggi:

  - [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range)

  - [ON_UPDATE_COMMAND_UI_RANGE](reference/message-map-macros-mfc.md#on_update_command_ui_range)

  - [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range)

- Parametri della macro:

  Le prime due macro accettano tre parametri:

  - ID di comando che avvia l'intervallo

  - ID di comando che termina l'intervallo

  - Nome della funzione del gestore di messaggi

  L'intervallo di ID comando deve essere contiguo.

  La terza macro, `ON_CONTROL_RANGE` , accetta un primo parametro aggiuntivo: un messaggio di notifica del controllo, ad esempio **EN_CHANGE**.

## <a name="declaring-the-handler-function"></a><a name="_core_declaring_the_handler_function"></a>Dichiarazione della funzione del gestore

Aggiungere la dichiarazione della funzione del gestore in. File H. Il codice seguente illustra come potrebbe apparire questo aspetto, come illustrato di seguito:

[!code-cpp[NVC_MFCMessageHandling#7](codesnippet/cpp/handlers-for-message-map-ranges_2.h)]

Le funzioni del gestore per i singoli comandi normalmente non accettano parametri. Fatta eccezione per le funzioni del gestore di aggiornamento, le funzioni del gestore per gli intervalli della mappa messaggi richiedono un parametro aggiuntivo, *NID*, di tipo **uint**. Questo parametro è il primo parametro. Il parametro aggiuntivo supporta l'ID di comando aggiuntivo necessario per specificare il comando scelto dall'utente.

Per ulteriori informazioni sui requisiti dei parametri per l'aggiornamento delle funzioni del gestore, vedere [l'esempio relativo a un intervallo di ID comando](#_core_example_for_a_range_of_command_ids).

## <a name="example-for-a-range-of-command-ids"></a><a name="_core_example_for_a_range_of_command_ids"></a>Esempio per un intervallo di ID comando

Quando è possibile usare gli intervalli, un esempio è la gestione dei comandi come il comando zoom nel [HIERSVR](../overview/visual-cpp-samples.md)di esempio MFC. Questo comando esegue lo zoom della vista, ridimensionando il 25% e il 300% delle dimensioni normali. La classe di visualizzazione di HIERSVR usa un intervallo per gestire i comandi di zoom con una voce della mappa messaggi simile alla seguente:

[!code-cpp[NVC_MFCMessageHandling#8](codesnippet/cpp/handlers-for-message-map-ranges_3.cpp)]

Quando si scrive la voce della mappa messaggi, è necessario specificare:

- Due ID comando, che iniziano e terminano con un intervallo contiguo.

   Qui vengono **ID_VIEW_ZOOM25** e **ID_VIEW_ZOOM300**.

- Nome della funzione del gestore per i comandi.

   Eccolo `OnZoom` .

La dichiarazione di funzione sarà simile alla seguente:

[!code-cpp[NVC_MFCMessageHandling#9](codesnippet/cpp/handlers-for-message-map-ranges_4.h)]

Il caso delle funzioni del gestore di aggiornamento è simile ed è probabilmente molto utile. È piuttosto comune scrivere `ON_UPDATE_COMMAND_UI` gestori per un certo numero di comandi e trovarsi a scrivere o copiare lo stesso codice più e più volte. La soluzione consiste nel eseguire il mapping di un intervallo di ID comando a una funzione di gestione aggiornamenti utilizzando la `ON_UPDATE_COMMAND_UI_RANGE` macro. Gli ID comando devono formare un intervallo contiguo. Per un esempio, vedere il `OnUpdateZoom` gestore e la relativa `ON_UPDATE_COMMAND_UI_RANGE` voce della mappa messaggi nella classe di visualizzazione dell'esempio HIERSVR.

Le funzioni del gestore di aggiornamento per i singoli comandi accettano normalmente un solo parametro, *pCmdUI*, di tipo `CCmdUI*` . A differenza delle funzioni del gestore, le funzioni del gestore aggiornamenti per gli intervalli della mappa messaggi non richiedono un parametro aggiuntivo, *NID*, di tipo **uint**. L'ID di comando, necessario per specificare il comando scelto dall'utente, viene trovato nell' `CCmdUI` oggetto.

## <a name="example-for-a-range-of-control-ids"></a><a name="_core_example_for_a_range_of_control_ids"></a>Esempio per un intervallo di ID controllo

Un altro caso interessante è il mapping dei messaggi di notifica del controllo per un intervallo di ID di controllo a un singolo gestore. Si supponga che l'utente possa fare clic su uno dei 10 pulsanti. Per eseguire il mapping di tutti e 10 i pulsanti a un gestore, la voce della mappa di messaggio avrà un aspetto simile al seguente:

[!code-cpp[NVC_MFCMessageHandling#10](codesnippet/cpp/handlers-for-message-map-ranges_5.cpp)]

Quando si scrive la `ON_CONTROL_RANGE` macro nella mappa messaggi, è necessario specificare:

- Un messaggio di notifica del controllo specifico.

   Ecco **BN_CLICKED**.

- Valori ID del controllo associati all'intervallo di controlli contigui.

   Ecco **IDC_BUTTON1** e **IDC_BUTTON10**.

- Nome della funzione del gestore di messaggi.

   Eccolo `OnButtonClicked` .

Quando si scrive la funzione del gestore, specificare il parametro **uint** aggiuntivo, come illustrato di seguito:

[!code-cpp[NVC_MFCMessageHandling#11](codesnippet/cpp/handlers-for-message-map-ranges_6.cpp)]

Il `OnButtonClicked` gestore per un singolo messaggio di **BN_CLICKED** non accetta parametri. Lo stesso gestore per un intervallo di pulsanti accetta un **uint**. Il parametro aggiuntivo consente di identificare il controllo specifico responsabile della generazione del messaggio **BN_CLICKED** .

Il codice illustrato nell'esempio è tipico: la conversione del valore passato a un oggetto `int` all'interno dell'intervallo di messaggi e l'asserzione di questo è il caso. È quindi possibile eseguire un'azione diversa a seconda del pulsante su cui è stato fatto clic.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](declaring-message-handler-functions.md)
