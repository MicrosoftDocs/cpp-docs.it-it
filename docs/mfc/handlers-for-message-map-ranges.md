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
ms.openlocfilehash: fc33df6957beab6e4e8de3093dfc00cf2651780e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370514"
---
# <a name="handlers-for-message-map-ranges"></a>Gestori per intervalli della mappa messaggi

In questo articolo viene illustrato come eseguire il mapping di un intervallo di messaggi a una singola funzione del gestore di messaggi (anziché eseguire il mapping di un messaggio a una sola funzione).

Ci sono momenti in cui è necessario elaborare più di un messaggio o controllare la notifica esattamente nello stesso modo. In questi momenti, potrebbe essere necessario eseguire il mapping di tutti i messaggi a una singola funzione del gestore. Gli intervalli della mappa messaggi consentono di eseguire questa operazione per un intervallo contiguo di messaggi:Message-map ranges allow you to do this for a contiguous range of messages:

- È possibile mappare intervalli di ID di comando a:

  - Una funzione del gestore di comandi.

  - Una funzione del gestore di aggiornamento dei comandi.

- È possibile eseguire il mapping dei messaggi di notifica del controllo per un intervallo di ID di controllo a una funzione del gestore messaggi.

Gli argomenti trattati in questo articolo includono:Topics covered in this article include:

- [Scrittura della voce della mappa messaggi](#_core_writing_the_message.2d.map_entry)

- [Dichiarazione della funzione del gestoreDeclaring the handler function](#_core_declaring_the_handler_function)

- [Esempio di un intervallo di indirizzi IP di comandoExample for a range of command IDs](#_core_example_for_a_range_of_command_ids)

- [Esempio di un intervallo di ID di controllo](#_core_example_for_a_range_of_control_ids)

## <a name="writing-the-message-map-entry"></a><a name="_core_writing_the_message.2d.map_entry"></a>Scrittura della voce della mappa messaggiWriting the Message-Map Entry

Nel. CPP, aggiungere la voce della mappa messaggi, come illustrato nell'esempio seguente:CPP, add your message-map entry, as shown in the following example:

[!code-cpp[NVC_MFCMessageHandling#6](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_1.cpp)]

La voce della mappa messaggi è costituita dai seguenti elementi:

- Macro dell'intervallo della mappa messaggi:

  - [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range)

  - [ON_UPDATE_COMMAND_UI_RANGE](reference/message-map-macros-mfc.md#on_update_command_ui_range)

  - [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range)

- Parametri per la macro:

  Le prime due macro accettano tre parametri:

  - L'ID di comando che avvia l'intervallo

  - L'ID di comando che termina l'intervallo

  - Nome della funzione del gestore messaggi

  L'intervallo di ID di comando deve essere contiguo.

  La terza `ON_CONTROL_RANGE`macro, , accetta un primo parametro aggiuntivo: un messaggio di notifica di controllo, ad esempio **EN_CHANGE**.

## <a name="declaring-the-handler-function"></a><a name="_core_declaring_the_handler_function"></a>Dichiarazione della funzione del gestoreDeclaring the Handler Function

Aggiungere la dichiarazione della funzione del gestore nella . H. Il codice seguente mostra l'aspetto, come illustrato di seguito:The following code shows how this might look, as shown below:

[!code-cpp[NVC_MFCMessageHandling#7](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_2.h)]

Le funzioni di gestione per i singoli comandi in genere non accettano parametri. Ad eccezione delle funzioni del gestore di aggiornamento, le funzioni di gestione per gli intervalli della mappa messaggi richiedono un parametro aggiuntivo, *nID*, di tipo **UINT**. Questo parametro è il primo parametro. Il parametro aggiuntivo contiene l'ID di comando aggiuntivo necessario per specificare il comando effettivamente scelto dall'utente.

Per ulteriori informazioni sui requisiti dei parametri per l'aggiornamento delle funzioni del gestore, vedere [Esempio di un intervallo di ID di comando](#_core_example_for_a_range_of_command_ids).

## <a name="example-for-a-range-of-command-ids"></a><a name="_core_example_for_a_range_of_command_ids"></a>Esempio di un intervallo di ID di comandoExample for a Range of Command IDs

Quando è possibile utilizzare gli intervalli Un esempio è nella gestione di comandi come il comando di zoom nell'esempio MFC [HIERSVR](../overview/visual-cpp-samples.md). Questo comando esegue lo zoom della vista, ridimensionandola tra il 25% e il 300% delle sue dimensioni normali. La classe di visualizzazione di HIERSVR utilizza un intervallo per gestire i comandi di zoom con una voce della mappa messaggi simile alla seguente:

[!code-cpp[NVC_MFCMessageHandling#8](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_3.cpp)]

Quando si scrive la voce della mappa messaggi, specificare:

- Due ID di comando, che iniziano e terminano un intervallo contiguo.

   Qui sono **ID_VIEW_ZOOM25** e **ID_VIEW_ZOOM300**.

- Nome della funzione del gestore per i comandi.

   Eccolo qui `OnZoom`.

La dichiarazione di funzione sarà simile alla seguente:The function declaration would resemble this:

[!code-cpp[NVC_MFCMessageHandling#9](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_4.h)]

Il caso delle funzioni del gestore di aggiornamento è simile e probabilmente più ampiamente utile. È abbastanza comune scrivere `ON_UPDATE_COMMAND_UI` gestori per una serie di comandi e ritrovarsi a scrivere, o copiare, lo stesso codice più e più volte. La soluzione consiste nel mappare un intervallo di ID `ON_UPDATE_COMMAND_UI_RANGE` di comando a una funzione del gestore di aggiornamento utilizzando la macro. Gli ID di comando devono formare un intervallo contiguo. Per un esempio, `OnUpdateZoom` vedere `ON_UPDATE_COMMAND_UI_RANGE` il gestore e la relativa voce della mappa messaggi nella classe di visualizzazione dell'esempio HIERSVR.For an example, see the handler and its message-map entry in the HIERSVR sample's view class.

Le funzioni del gestore di aggiornamento per i singoli `CCmdUI*`comandi in genere accettano un singolo parametro, *pCmdUI*, di tipo . A differenza delle funzioni di gestione, le funzioni del gestore di aggiornamento per gli intervalli della mappa messaggi non richiedono un parametro aggiuntivo, *nID*, di tipo **UINT**. L'ID di comando, necessario per specificare il comando `CCmdUI` effettivamente scelto dall'utente, si trova nell'oggetto.

## <a name="example-for-a-range-of-control-ids"></a><a name="_core_example_for_a_range_of_control_ids"></a>Esempio di un intervallo di ID di controlloExample for a Range of Control IDs

Un altro caso interessante è il mapping dei messaggi di notifica del controllo per un intervallo di ID di controllo a un singolo gestore. Si supponga che l'utente può fare clic su uno qualsiasi dei 10 pulsanti. Per eseguire il mapping di tutti i 10 pulsanti a un gestore, la voce della mappa messaggi sarà simile alla seguente:To map all 10 buttons to one handler, your message-map entry would look like this:

[!code-cpp[NVC_MFCMessageHandling#10](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_5.cpp)]

Quando si `ON_CONTROL_RANGE` scrive la macro nella mappa messaggi, è necessario specificare:

- Un particolare messaggio di notifica di controllo.

   Qui è **BN_CLICKED**.

- Valori ID del controllo associati all'intervallo contiguo di controlli.

   Qui questi sono **IDC_BUTTON1** e **IDC_BUTTON10**.

- Nome della funzione del gestore messaggi.

   Eccolo qui `OnButtonClicked`.

Quando si scrive la funzione del gestore, specificare il parametro **UINT** aggiuntivo, come illustrato di seguito:

[!code-cpp[NVC_MFCMessageHandling#11](../mfc/codesnippet/cpp/handlers-for-message-map-ranges_6.cpp)]

Il `OnButtonClicked` gestore per un singolo messaggio **BN_CLICKED** non accetta parametri. Lo stesso gestore per una gamma di pulsanti richiede un **uINT**. Il parametro extra consente di identificare il particolare controllo responsabile della generazione del messaggio **BN_CLICKED.**

Il codice illustrato nell'esempio è tipico: la `int` conversione del valore passato a un all'interno dell'intervallo di messaggi e l'asserzione che questo è il caso. Quindi si potrebbe prendere qualche azione diversa a seconda di quale pulsante è stato fatto clic.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
