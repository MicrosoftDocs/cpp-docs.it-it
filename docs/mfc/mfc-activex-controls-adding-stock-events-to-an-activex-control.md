---
title: 'Controlli ActiveX MFC: Aggiunta di eventi predefiniti a un controllo ActiveX'
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
ms.openlocfilehash: 9f6f3c63f0436296791df428c704bce96eca3ec0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392726"
---
# <a name="mfc-activex-controls-adding-stock-events-to-an-activex-control"></a>Controlli ActiveX MFC: Aggiunta di eventi predefiniti a un controllo ActiveX

Eventi predefiniti differiscono dagli eventi personalizzati che vengono generati automaticamente dalla classe [COleControl](../mfc/reference/colecontrol-class.md). `COleControl` contiene le funzioni membro predefiniti che generano eventi risultanti da azioni comuni. Alcune azioni comuni implementate da `COleControl` includono single - e doppio clic semplici del controllo, eventi della tastiera e le modifiche nello stato dei pulsanti del mouse. Mappa eventi le voci per gli eventi sono sempre preceduti dal prefisso EVENT_STOCK stock.

##  <a name="_core_stock_events_supported_by_classwizard"></a> Eventi predefiniti supportati per l'aggiunta guidata evento

Il `COleControl` classe fornisce eventi predefiniti dieci, elencati nella tabella seguente. È possibile specificare gli eventi desiderati nel controllo tramite il [Aggiunta guidata evento](../ide/add-event-wizard.md).

### <a name="stock-events"></a>Eventi predefiniti

|event|Funzione di generazione|Commenti|
|-----------|---------------------|--------------|
|Fare clic su|**void FireClick( )**|Generato quando il controllo acquisisce il mouse, qualsiasi **BUTTONUP** viene ricevuto il messaggio (sinistro, centrale o destro) e viene rilasciato il pulsante sul controllo. Il magazzino MouseDown e gli eventi MouseUp precedano questo evento.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_CLICK( )**|
|DblClick|**void FireDblClick( )**|Simile a Click generato ma quando un **BUTTONDBLCLK** messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_DBLCLICK( )**|
|Error|**void FireError( SCODE**  *scode* **, LPCSTR**  `lpszDescription` **, UINT**  `nHelpID`  **= 0 )**|Generato quando si verifica un errore all'interno del controllo ActiveX all'esterno dell'ambito di un accesso a proprietà o chiamata di metodo.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_ERROREVENT( )**|
|KeyDown|**void FireKeyDown (brevi** `nChar` **breve**`nShiftState`**)**|Generato quando un `WM_SYSKEYDOWN` o `WM_KEYDOWN` messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYDOWN( )**|
|KeyPress|**void FireKeyPress (brevi** <strong>\*</strong> `pnChar` **)**|Generato quando un `WM_CHAR` messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYPRESS( )**|
|KeyUp|**void FireKeyUp (brevi** `nChar` **breve**`nShiftState`**)**|Generato quando un `WM_SYSKEYUP` o `WM_KEYUP` messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYUP( )**|
|MouseDown|**void FireMouseDown (brevi** `nButton` **breve** `nShiftState` **, float***x* **, float** *y***)**|Generato se qualsiasi **BUTTONDOWN** viene ricevuta (sinistro, centrale o a destra). Immediatamente prima che venga generato questo evento viene acquisito il mouse.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEDOWN( )**|
|MouseMove|**void FireMouseMove( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **)**|Generato quando viene ricevuto un messaggio WM_MOUSEMOVE.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEMOVE( )**|
|MouseUp|**void FireMouseUp( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **)**|Generato se qualsiasi **BUTTONUP** viene ricevuta (sinistro, centrale o a destra). L'acquisizione del mouse viene rilasciato prima che venga generato questo evento.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEUP( )**|
|ReadyStateChange|**void FireReadyStateChange( )**|Generato quando un controllo passa allo stato pronto successivo a causa della quantità di dati ricevuti.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_READYSTATECHANGE)**|

##  <a name="_core_adding_a_stock_event_using_classwizard"></a> Aggiunta di un evento usando l'aggiunta guidata evento

Aggiunta di eventi predefiniti richiede un lavoro minore rispetto all'aggiunta di eventi personalizzati in quanto l'attivazione dell'evento effettivo viene gestita automaticamente dalla classe di base, `COleControl`. La procedura seguente aggiunge un evento predefinito per un controllo che è stato sviluppato utilizzando [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md). L'evento, denominato KeyPress, viene attivata quando viene premuto un tasto e il controllo è attivo. Questa procedura può essere utilizzata anche per aggiungere altri eventi predefiniti. Sostituire il nome di evento predefinito selezionato per la pressione di tasto.

#### <a name="to-add-the-keypress-stock-event-using-the-add-event-wizard"></a>Per aggiungere l'evento azionario tramite l'aggiunta guidata evento

1. Caricare il progetto del controllo.

1. In visualizzazione classi, fare clic sulla classe del controllo ActiveX per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi evento**.

   Verrà visualizzata l'aggiunta guidata evento.

1. Nel **nome dell'evento** elenco a discesa, seleziona `KeyPress`.

1. Scegliere **Fine**.

##  <a name="_core_classwizard_changes_for_stock_events"></a> Aggiungere le modifiche di creazione guidata eventi per eventi predefiniti

Poiché gli eventi predefiniti vengono gestiti dalla classe di base del controllo, l'aggiunta guidata evento non in grado di modificare la dichiarazione di classe in alcun modo. Aggiunge l'evento alla mappa di eventi del controllo e crea una voce nel relativo. File IDL. La riga seguente viene aggiunto alla mappa di eventi del controllo, che si trova nell'implementazione della classe di controllo (. File CPP):

[!code-cpp[NVC_MFC_AxUI#5](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_1.cpp)]

Aggiunta di questo codice genera un evento KeyPress quando viene ricevuto un messaggio WM_CHAR e il controllo è attivo. L'evento KeyPress può essere generato in altri momenti chiamando la funzione di generazione dell'evento (ad esempio, `FireKeyPress`) dal codice del controllo.

L'aggiunta guidata evento aggiunge la riga di codice seguente al controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#6](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_2.idl)]

Questa riga consente di associare l'evento KeyPress con relativi ID di invio standard e consente al contenitore di prevedere l'evento KeyPress.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
