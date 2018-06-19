---
title: 'Controlli ActiveX MFC: Aggiunta di eventi predefiniti a un controllo ActiveX | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 210749906391ccdba2e488b75be98264bcba39cd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33359338"
---
# <a name="mfc-activex-controls-adding-stock-events-to-an-activex-control"></a>Controlli ActiveX MFC: aggiunta di eventi predefiniti a un controllo ActiveX
Eventi predefiniti diversi da eventi personalizzati che vengono generati automaticamente dalla classe [COleControl](../mfc/reference/colecontrol-class.md). `COleControl` contiene le funzioni membro predefinite che attivano eventi risultanti da azioni comuni. Alcune azioni comuni implementate da `COleControl` includono singolo - e doppio clic semplici sul controllo, gli eventi di tastiera e le modifiche nello stato dei pulsanti del mouse. Voci della mappa eventi per eventi predefiniti sono sempre precedute dal **EVENT_STOCK** prefisso.  
  
##  <a name="_core_stock_events_supported_by_classwizard"></a> Eventi predefiniti supportati per l'aggiunta guidata evento  
 La `COleControl` classe fornisce dieci eventi predefiniti, elencati nella tabella seguente. È possibile specificare gli eventi desiderati nel controllo utilizzando il [Aggiunta guidata evento](../ide/add-event-wizard.md).  
  
### <a name="stock-events"></a>Eventi predefiniti  
  
|event|Funzione di generazione|Commenti|  
|-----------|---------------------|--------------|  
|Clic|**void (FireClick)**|Generato quando il controllo acquisisce il mouse, qualsiasi **BUTTONUP** viene ricevuto il messaggio (sinistro, centrale o destro), e viene rilasciato il pulsante sul controllo. Il magazzino MouseDown e MouseUp si verificano prima di questo evento.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_CLICK)**|  
|DblClick|**void (FireDblClick)**|Simile a Click ma generato quando un **BUTTONDBLCLK** messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_DBLCLICK)**|  
|Error|**void FireError (SCODE***scode* **, LPCSTR** `lpszDescription` **, UINT**`nHelpID`**= 0)** |Generato quando si verifica un errore all'interno del controllo ActiveX all'esterno dell'ambito di un metodo chiamata o accesso alle proprietà.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_ERROREVENT)**|  
|KeyDown|**void FireKeyDown (short** `nChar` **breve**`nShiftState`**)** |Generato quando un `WM_SYSKEYDOWN` o `WM_KEYDOWN` messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYDOWN)**|  
|KeyPress|**void FireKeyPress (short\***`pnChar`**)** |Generato quando un `WM_CHAR` messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYPRESS)**|  
|KeyUp|**void FireKeyUp (short** `nChar` **breve**`nShiftState`**)** |Generato quando un `WM_SYSKEYUP` o `WM_KEYUP` messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_KEYUP)**|  
|MouseDown|**void FireMouseDown (short** `nButton` **breve** `nShiftState` **, float***x* **, float** *y***)** |Viene generato se qualsiasi **BUTTONDOWN** (sinistro, centrale o a destra) viene ricevuto. Immediatamente prima di questo evento viene generato, viene acquisito il mouse.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEDOWN)**|  
|MouseMove|**void FireMouseMove (short** `nButton` **breve** `nShiftState` **, float***x* **, float** *y***)** |Generato quando un `WM_MOUSEMOVE` messaggio viene ricevuto.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEMOVE)**|  
|MouseUp|**void FireMouseUp (short** `nButton` **breve** `nShiftState` **, float***x* **, float** *y***)** |Viene generato se qualsiasi **BUTTONUP** (sinistro, centrale o a destra) viene ricevuto. Prima di questo evento viene generato, viene rilasciato il mouse capture.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_MOUSEUP)**|  
|ReadyStateChange|**void (FireReadyStateChange)**|Generato quando un controllo passa allo stato pronto successivo a causa della quantità di dati ricevuti.<br /><br /> Voce della mappa eventi: **EVENT_STOCK_READYSTATECHANGE)**|  
  
##  <a name="_core_adding_a_stock_event_using_classwizard"></a> Aggiunta di un evento predefinito tramite l'aggiunta guidata evento  
 Aggiunta di eventi predefiniti richiede meno lavoro rispetto all'aggiunta di eventi personalizzati perché la generazione dell'evento effettivo viene gestita automaticamente dalla classe di base, `COleControl`. La procedura seguente aggiunge un evento predefinito per un controllo che è stato sviluppato utilizzando [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md). L'evento, chiamato KeyPress, viene generato quando viene premuto un tasto e il controllo è attivo. Questa procedura può essere utilizzata anche per aggiungere altri eventi predefiniti. Sostituire il nome di evento predefinito selezionato per KeyPress.  
  
#### <a name="to-add-the-keypress-stock-event-using-the-add-event-wizard"></a>Per aggiungere l'evento predefinito KeyPress mediante l'aggiunta guidata evento  
  
1.  Caricare il progetto del controllo.  
  
2.  In visualizzazione classi, fare clic sulla classe del controllo ActiveX per aprire il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi evento**.  
  
     Verrà visualizzata l'aggiunta guidata evento.  
  
4.  Nel **nome evento** elenco a discesa, seleziona `KeyPress`.  
  
5.  Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_stock_events"></a> Modifiche di aggiunta evento guidata per eventi predefiniti  
 Poiché gli eventi predefiniti vengono gestiti dalla classe di base del controllo, l'aggiunta guidata evento modificare in alcun modo la dichiarazione di classe. Aggiunge l'evento alla mappa eventi del controllo e crea una voce nel relativo. File IDL. La riga seguente viene aggiunto alla mappa eventi del controllo, si trova nell'implementazione della classe controllo (. File CPP):  
  
 [!code-cpp[NVC_MFC_AxUI#5](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_1.cpp)]  
  
 Aggiunta di questo codice genera un evento KeyPress quando un `WM_CHAR` messaggio viene ricevuto e il controllo è attivo. L'evento KeyPress può essere generato in altri momenti chiamando la funzione di generazione dell'evento (ad esempio, `FireKeyPress`) dal codice del controllo.  
  
 L'aggiunta guidata evento aggiunge la seguente riga di codice per il controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxUI#6](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_2.idl)]  
  
 Questa riga associa l'evento KeyPress con l'ID di invio standard e consente al contenitore di prevedere l'evento.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [Classe COleControl](../mfc/reference/colecontrol-class.md)
