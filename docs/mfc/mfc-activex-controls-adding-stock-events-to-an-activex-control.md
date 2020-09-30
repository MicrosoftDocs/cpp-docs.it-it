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
ms.openlocfilehash: e63e63b914b9db64139b9b81a2c749a78ac4a58f
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91503858"
---
# <a name="mfc-activex-controls-adding-stock-events-to-an-activex-control"></a>Controlli ActiveX MFC: aggiunta di eventi predefiniti a un controllo ActiveX

Gli eventi azionari sono diversi da quelli personalizzati perché vengono automaticamente generati dalla classe [COleControl](reference/colecontrol-class.md). `COleControl` contiene funzioni membro predefinite che generano eventi generati da azioni comuni. Alcune azioni comuni implementate da `COleControl` includono i clic singoli e doppi sul controllo, gli eventi della tastiera e le modifiche apportate allo stato dei pulsanti del mouse. Le voci della mappa eventi per gli eventi azionari sono sempre precedute dal prefisso EVENT_STOCK.

## <a name="stock-events-supported-by-the-add-event-wizard"></a><a name="_core_stock_events_supported_by_classwizard"></a> Eventi azionari supportati dall'aggiunta guidata evento

La `COleControl` classe fornisce dieci eventi azionari, elencati nella tabella seguente. È possibile specificare gli eventi desiderati nel controllo utilizzando l' [Aggiunta guidata evento](../ide/adding-an-event-visual-cpp.md#add-event-wizard).

### <a name="stock-events"></a>Eventi azionari

|Event|Funzione di attivazione|Commenti|
|-----------|---------------------|--------------|
|Fare clic su|**void FireClick ()**|Generato quando il controllo acquisisce il mouse, viene ricevuto un messaggio **BUTTONUP** (Left, Middle o right) e il pulsante viene rilasciato sul controllo. Gli eventi MouseDown e MouseUp di azione si verificano prima di questo evento.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_CLICK ()**|
|DblClick|**void FireDblClick ()**|Simile a clic ma generato quando viene ricevuto un messaggio **BUTTONDBLCLK** .<br /><br /> Voce della mappa eventi: **EVENT_STOCK_DBLCLICK ()**|
|Errore|**void FireError ((SCODE***SCODE* **, LPCSTR** `lpszDescription` **, uint** `nHelpID` **= 0)**        |Generato quando si verifica un errore all'interno del controllo ActiveX al di fuori dell'ambito di una chiamata al metodo o di un accesso alla proprietà.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_ERROREVENT ()**|
|KeyDown|**void FireKeyDown (Short** `nChar` **, short** `nShiftState` **)**      |Generato quando `WM_SYSKEYDOWN` `WM_KEYDOWN` viene ricevuto un messaggio o.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYDOWN ()**|
|KeyPress|**void FireKeyPress (Short** <strong>\*</strong> `pnChar` **)**    |Generato quando `WM_CHAR` viene ricevuto un messaggio.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYPRESS ()**|
|KeyUp|**void FireKeyUp (Short** `nChar` **, short** `nShiftState` **)**      |Generato quando `WM_SYSKEYUP` `WM_KEYUP` viene ricevuto un messaggio o.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYUP ()**|
|MouseDown|**void FireMouseDown (Short** `nButton` **, short** `nShiftState` **, float***x* **, float***y***)**          |Generato se viene ricevuto un **buttondown** (Left, Middle o right). Il mouse viene acquisito immediatamente prima che venga generato l'evento.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEDOWN ()**|
|MouseMove|**void FireMouseMove (Short** `nButton` **, short** `nShiftState` **, float***x* **, float***y***)**          |Generato quando viene ricevuto un messaggio di WM_MOUSEMOVE.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEMOVE ()**|
|MouseUp|**void FireMouseUp (Short** `nButton` **, short** `nShiftState` **, float***x* **, float***y***)**          |Generato se viene ricevuto un **BUTTONUP** (Left, Middle o right). L'acquisizione del mouse viene rilasciata prima che questo evento venga generato.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEUP ()**|
|ReadyStateChange|**void FireReadyStateChange ()**|Generato quando un controllo passa allo stato pronto successivo a causa della quantità di dati ricevuti.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_READYSTATECHANGE ()**|

## <a name="adding-a-stock-event-using-the-add-event-wizard"></a><a name="_core_adding_a_stock_event_using_classwizard"></a> Aggiunta di un evento azionario utilizzando l'aggiunta guidata evento

L'aggiunta di eventi azionari richiede meno lavoro rispetto all'aggiunta di eventi personalizzati perché l'attivazione dell'evento effettivo viene gestita automaticamente dalla classe base, `COleControl` . La procedura seguente consente di aggiungere un evento azionario a un controllo sviluppato mediante la [creazione guidata controllo ActiveX MFC](reference/mfc-activex-control-wizard.md). L'evento, denominato KeyPress, viene attivato quando si preme un tasto e il controllo è attivo. Questa procedura può essere usata anche per aggiungere altri eventi azionari. Sostituire il nome dell'evento azionario selezionato per KeyPress.

#### <a name="to-add-the-keypress-stock-event-using-the-add-event-wizard"></a>Per aggiungere l'evento di azione KeyPress utilizzando l'aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In Visualizzazione classi fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida fare clic su **Aggiungi** e quindi su **Aggiungi evento**.

   Verrà visualizzata la procedura guidata Aggiungi evento.

1. Nell'elenco a discesa **nome evento** selezionare `KeyPress` .

1. Fare clic su **Fine**.

## <a name="add-event-wizard-changes-for-stock-events"></a><a name="_core_classwizard_changes_for_stock_events"></a> Aggiungere modifiche alla procedura guidata eventi per gli eventi azionari

Poiché gli eventi azionari vengono gestiti dalla classe base del controllo, la procedura guidata Aggiungi evento non modifica in alcun modo la dichiarazione di classe. Aggiunge l'evento alla mappa eventi del controllo e crea una voce nel relativo. File IDL. La riga seguente viene aggiunta alla mappa eventi del controllo, che si trova nell'implementazione della classe del controllo (. File CPP):

[!code-cpp[NVC_MFC_AxUI#5](codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_1.cpp)]

L'aggiunta di questo codice genera un evento KeyPress quando viene ricevuto un messaggio di WM_CHAR e il controllo è attivo. L'evento KeyPress può essere attivato in altri momenti chiamando la relativa funzione di attivazione, ad esempio, `FireKeyPress` dall'interno del codice del controllo.

L'aggiunta guidata evento aggiunge la seguente riga di codice all'oggetto del controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#6](codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_2.idl)]

Questa riga associa l'evento KeyPress con l'ID di invio standard e consente al contenitore di prevedere l'evento KeyPress.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: metodi](mfc-activex-controls-methods.md)<br/>
[COleControl (classe)](reference/colecontrol-class.md)
