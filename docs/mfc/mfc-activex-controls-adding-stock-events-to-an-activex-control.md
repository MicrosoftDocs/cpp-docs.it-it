---
title: 'Controlli ActiveX MFC: aggiunta di eventi predefiniti a un controllo ActiveX'
ms.date: 11/04/2016
f1_keywords:
- EVENT__STOCK_ERROR
- EVENT__STOCK_READYSTATECHANGE
- ReadyStateChange
- EVENT__STOCK_MOUSEMOVE
- EVENT__STOCK_MOUSEUP
- EVENT__STOCK_DBLCLICK
- KeyPress
- EVENT__STOCK_KEYDOWN
- EVENT__STOCK
- EVENT__STOCK_MOUSEDOWN
- EVENT__STOCK_KEYPRESS
- EVENT__STOCK_CLICK
- EVENT__STOCK_KEYUP
helpviewer_keywords:
- MFC ActiveX controls [MFC], events
- KeyPress event
- FireDblClick event
- FireMouseDown event
- events [MFC], stock
- FireKeyPress event
- EVENT_STOCK_MOUSEMOVE event
- EVENT_STOCK_CLICK event
- FireClick event
- FireKeyUp event
- FireMouseUp event
- EVENT_STOCK_ERROREVENT event
- EVENT_STOCK_KEYDOWN event
- EVENT_STOCK_MOUSEDOWN event
- EVENT_STOCK_KEYPRESS macro [MFC]
- EVENT_STOCK_KEYUP event
- EVENT_STOCK_DBLCLICK event
- FireError event
- FireKeyDown event
- ReadyStateChange event
- EVENT_STOCK_MOUSEUP event
- FireMouseMove event
- EVENT_STOCK prefix
- EVENT_STOCK_READYSTATECHANGE event
- EVENT_STOCK_KEYPRESS event
ms.assetid: 3eeadc67-4b3d-4444-8caa-53054073988a
ms.openlocfilehash: 79cd4fc572e55c67cc5a2cfe3a00e04f2a4a7850
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364692"
---
# <a name="mfc-activex-controls-adding-stock-events-to-an-activex-control"></a>Controlli ActiveX MFC: aggiunta di eventi predefiniti a un controllo ActiveX

Gli eventi predefiniti differiscono dagli eventi personalizzati in quanto vengono generati automaticamente dalla classe [COleControl](../mfc/reference/colecontrol-class.md). `COleControl`contiene funzioni membro predefinite che generano eventi risultanti da azioni comuni. Alcune azioni comuni `COleControl` implementate da includono i clic su un solo clic e un doppio clic sul controllo, gli eventi della tastiera e le modifiche nello stato dei pulsanti del mouse. Le voci della mappa eventi per gli eventi azionari sono sempre precedute dal prefisso EVENT_STOCK.

## <a name="stock-events-supported-by-the-add-event-wizard"></a><a name="_core_stock_events_supported_by_classwizard"></a>Eventi predefiniti supportati dall'Aggiunta guidata evento

La `COleControl` classe fornisce dieci eventi azionari, elencati nella tabella seguente. È possibile specificare gli eventi desiderati nel controllo utilizzando [l'Aggiunta guidata evento](../ide/add-event-wizard.md).

### <a name="stock-events"></a>Eventi azionari

|Event|Funzione di cottura|Commenti|
|-----------|---------------------|--------------|
|Fare clic su |**void FireClick( )**|Generato quando il controllo acquisisce il mouse, viene ricevuto qualsiasi messaggio **BUTTONUP** (sinistro, centrale o destro) e il pulsante viene rilasciato sul controllo. Gli eventi predefiniti MouseDown e MouseUp si verificano prima di questo evento.<br /><br /> Voce mappa eventi: **EVENT_STOCK_CLICK( )**|
|Dblclick|**void FireDblClick( )**|Simile a Click ma generato quando viene ricevuto un messaggio **BUTTONDBLCLK.**<br /><br /> Voce mappa eventi: **EVENT_STOCK_DBLCLICK( )**|
|Errore|**void FireError( scode SCODE***scode* **, LPCSTR** `lpszDescription` **, UINT**`nHelpID`**- 0 )**        |Generato quando si verifica un errore all'interno del controllo ActiveX all'esterno dell'ambito di una chiamata al metodo o di un accesso alle proprietà.<br /><br /> Voce mappa eventi: **EVENT_STOCK_ERROREVENT( )**|
|KeyDown|**void FireKeyDown( short** `nChar` **, short**`nShiftState`**)**      |Generato quando `WM_SYSKEYDOWN` `WM_KEYDOWN` viene ricevuto un messaggio or.<br /><br /> Voce mappa eventi: **EVENT_STOCK_KEYDOWN( )**|
|Keypress|**void FireKeyPress( short** <strong>\*</strong> `pnChar` **)**    |Generato quando `WM_CHAR` viene ricevuto un messaggio.<br /><br /> Voce mappa eventi: **EVENT_STOCK_KEYPRESS( )**|
|KeyUp|**void FireKeyUp( short** `nChar` **, short**`nShiftState`**)**      |Generato quando `WM_SYSKEYUP` `WM_KEYUP` viene ricevuto un messaggio or.<br /><br /> Voce mappa eventi: **EVENT_STOCK_KEYUP( )**|
|Mousedown|**void FireMouseDown( short** `nButton` **, short** `nShiftState` **, float***x* **, float***y***)**          |Generato se viene ricevuto un **BUTTONDOWN** (sinistro, centrale o destro). Il mouse viene acquisito immediatamente prima che venga generato questo evento.<br /><br /> Voce mappa eventi: **EVENT_STOCK_MOUSEDOWN( )**|
|Mousemove|**void FireMouseMove( short** `nButton` **, short** `nShiftState` **, float***x* **, float***y***)**          |Generato quando viene ricevuto un messaggio di WM_MOUSEMOVE.<br /><br /> Voce mappa eventi: **EVENT_STOCK_MOUSEMOVE( )**|
|Mouseup|**void FireMouseUp( short** `nButton` **, short** `nShiftState` **, float***x* **, float***y***)**          |Generato se viene ricevuto un **BUTTONUP** (sinistro, centrale o destro). L'acquisizione del mouse viene rilasciata prima che venga generato questo evento.<br /><br /> Voce mappa eventi: **EVENT_STOCK_MOUSEUP( )**|
|ReadyStateChange (Modifica ReadyState)|**void FireReadyStateChange( )**|Generato quando un controllo passa allo stato pronto successivo a causa della quantità di dati ricevuti.<br /><br /> Voce mappa eventi: **EVENT_STOCK_READYSTATECHANGE( )**|

## <a name="adding-a-stock-event-using-the-add-event-wizard"></a><a name="_core_adding_a_stock_event_using_classwizard"></a>Aggiunta di un evento stock mediante l'Aggiunta guidata evento

L'aggiunta di eventi predefiniti richiede meno lavoro rispetto all'aggiunta di eventi `COleControl`personalizzati perché la generazione dell'evento effettivo viene gestita automaticamente dalla classe base, . La procedura riportata di seguito consente di aggiungere un evento stock a un controllo sviluppato mediante [la Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md). L'evento, chiamato KeyPress, viene generato quando viene premuto un tasto e il controllo è attivo. Questa procedura può essere utilizzata anche per aggiungere altri eventi azionari. Sostituire il nome dell'evento azionario selezionato con KeyPress.

#### <a name="to-add-the-keypress-stock-event-using-the-add-event-wizard"></a>Per aggiungere l'evento azionario KeyPress utilizzando l'Aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In Visualizzazione classi fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi evento**.

   Verrà visualizzata l'Aggiunta guidata evento.

1. Nell'elenco a discesa **Nome** `KeyPress`evento selezionare .

1. Fare clic su **Fine**.

## <a name="add-event-wizard-changes-for-stock-events"></a><a name="_core_classwizard_changes_for_stock_events"></a>Aggiungere le modifiche della Procedura guidata per gli eventi predefiniti

Poiché gli eventi predefiniti vengono gestiti dalla classe base del controllo, l'Aggiunta guidata evento non modifica in alcun modo la dichiarazione di classe. Aggiunge l'evento alla mappa eventi del controllo e crea una voce nel relativo oggetto . File IDL. La riga seguente viene aggiunta alla mappa eventi del controllo, che si trova nell'implementazione della classe del controllo (. CPP) :

[!code-cpp[NVC_MFC_AxUI#5](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_1.cpp)]

L'aggiunta di questo codice genera un evento KeyPress quando viene ricevuto un messaggio di WM_CHAR e il controllo è attivo. L'evento KeyPress può essere generato in altri momenti `FireKeyPress`chiamando la relativa funzione di attivazione (ad esempio, ) dall'interno del codice del controllo.

L'Aggiunta guidata evento aggiunge la seguente riga di codice al file . File IDL:

[!code-cpp[NVC_MFC_AxUI#6](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_2.idl)]

Questa riga associa l'evento KeyPress al suo ID di invio standard e consente al contenitore di anticipare l'evento KeyPress.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
