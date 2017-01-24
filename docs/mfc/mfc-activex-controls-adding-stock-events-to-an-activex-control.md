---
title: "Controlli ActiveX MFC: aggiunta di eventi predefiniti a un controllo ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EVENT__STOCK_ERROR"
  - "EVENT__STOCK_READYSTATECHANGE"
  - "ReadyStateChange"
  - "EVENT__STOCK_MOUSEMOVE"
  - "EVENT__STOCK_MOUSEUP"
  - "EVENT__STOCK_DBLCLICK"
  - "KeyPress"
  - "EVENT__STOCK_KEYDOWN"
  - "EVENT__STOCK"
  - "EVENT__STOCK_MOUSEDOWN"
  - "EVENT__STOCK_KEYPRESS"
  - "EVENT__STOCK_CLICK"
  - "EVENT__STOCK_KEYUP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EVENT_STOCK (prefisso)"
  - "EVENT_STOCK_CLICK (evento)"
  - "EVENT_STOCK_DBLCLICK (evento)"
  - "EVENT_STOCK_ERROREVENT (evento)"
  - "EVENT_STOCK_KEYDOWN (evento)"
  - "EVENT_STOCK_KEYPRESS (evento)"
  - "EVENT_STOCK_KEYPRESS (macro)"
  - "EVENT_STOCK_KEYUP (evento)"
  - "EVENT_STOCK_MOUSEDOWN (evento)"
  - "EVENT_STOCK_MOUSEMOVE (evento)"
  - "EVENT_STOCK_MOUSEUP (evento)"
  - "EVENT_STOCK_READYSTATECHANGE (evento)"
  - "eventi (C++), stock"
  - "FireClick (evento)"
  - "FireDblClick (evento)"
  - "FireError (evento)"
  - "FireKeyDown (evento)"
  - "FireKeyPress (evento)"
  - "FireKeyUp (evento)"
  - "FireMouseDown (evento)"
  - "FireMouseMove (evento)"
  - "FireMouseUp (evento)"
  - "KeyPress (evento)"
  - "MFC (controlli ActiveX), eventi"
  - "ReadyStateChange (evento)"
ms.assetid: 3eeadc67-4b3d-4444-8caa-53054073988a
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: aggiunta di eventi predefiniti a un controllo ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli eventi predefiniti sono diversi dagli eventi personalizzati in quanto automaticamente generati dalla classe [COleControl](../mfc/reference/colecontrol-class.md).  `COleControl` contiene le funzioni membro predefinite che generano gli eventi deriva da azioni comuni.  Alcune azioni comuni implementate da `COleControl` includono singolo e fare doppio clic sul controllo, gli eventi della tastiera e sulle modifiche nello stato dei pulsanti.  Le voci della mappa eventi per gli eventi predefiniti sono sempre preceduti dal prefisso di **EVENT\_STOCK**.  
  
##  <a name="_core_stock_events_supported_by_classwizard"></a> Eventi predefiniti supportati dalla procedura l'aggiunta guidata evento  
 La classe di `COleControl` fornisce dieci eventi predefiniti, elencati nella tabella seguente.  È possibile specificare gli eventi desiderati nel controllo mediante [Aggiunta guidata evento](../ide/add-event-wizard.md).  
  
### Eventi predefiniti  
  
|Evento|Generare funzione|Commenti|  
|------------|-----------------------|--------------|  
|Fare clic su|**FireClick \(void\)**|Quando il controllo acquisisce il mouse, qualsiasi **BUTTONUP** \(a sinistra, l'utilizzo, o a destra\) il messaggio generato viene ricevuto e il pulsante viene rilasciato sul controllo.  Gli eventi predefiniti MouseDown e MouseUp si verificano prima di questo evento.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_CLICK\( \)**|  
|DblClick|**FireDblClick \(void\)**|Come per il clic ma generato quando un messaggio di **BUTTONDBLCLK** vengono ricevuti.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_DBLCLICK\( \)**|  
|Errore|**void FireError\( SCODE**  *scode* **, LPCSTR**  `lpszDescription` **, UINT**  `nHelpID`  **\= 0 \)**|Generato quando si verifica un errore nel controllo ActiveX rientra nell'ambito di una chiamata al metodo o di un accesso della proprietà.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_ERROREVENT\( \)**|  
|KeyDown|**void FireKeyDown\( short**  `nChar` **, short**  `nShiftState`  **\)**|Generato quando un messaggio di `WM_KEYDOWN` o di `WM_SYSKEYDOWN` vengono ricevuti.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_KEYDOWN\( \)**|  
|KeyPress|**void FireKeyPress\( short\***  `pnChar`  **\)**|Generato quando un messaggio di `WM_CHAR` vengono ricevuti.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_KEYPRESS\( \)**|  
|KeyUp|**void FireKeyUp\( short**  `nChar` **, short**  `nShiftState`  **\)**|Generato quando un messaggio di `WM_KEYUP` o di `WM_SYSKEYUP` vengono ricevuti.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_KEYUP\( \)**|  
|MouseDown|**void FireMouseDown\( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **\)**|Generata se una **BUTTONDOWN** \(a sinistra, l'utilizzo, o a destra\) vengono ricevuti.  Il mouse capture immediatamente prima che l'evento viene generato.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_MOUSEDOWN\( \)**|  
|MouseMove|**void FireMouseMove\( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **\)**|Generato quando un messaggio di `WM_MOUSEMOVE` vengono ricevuti.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_MOUSEMOVE\( \)**|  
|MouseUp|**void FireMouseUp\( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **\)**|Generata se una **BUTTONUP** \(a sinistra, l'utilizzo, o a destra\) vengono ricevuti.  Il mouse capture viene rilasciato prima che l'evento venga generato.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_MOUSEUP\( \)**|  
|ReadyStateChange|**FireReadyStateChange \(void\)**|Generato quando le transizioni di un controllo sullo stato pronto seguente a causa della quantità di dati hanno ricevuto.<br /><br /> Voce della mappa eventi: **EVENT\_STOCK\_READYSTATECHANGE\( \)**|  
  
##  <a name="_core_adding_a_stock_event_using_classwizard"></a> Aggiunta di un evento predefinito utilizzando la procedura l'aggiunta guidata evento  
 L'aggiunta di eventi predefiniti richiede meno lavoro che gli eventi personalizzati dal momento che consentono di effettivo evento viene gestito automaticamente dalla classe base, `COleControl`aggiungi.  La procedura riportata di seguito viene aggiunto un evento predefinito a un controllo compilato utilizzando [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md).  L'evento, denominato KeyPress, viene generato quando il tasto viene premuto e il controllo è attivo.  Questa procedura può essere utilizzata per aggiungere altri eventi predefiniti.  Sostituire il nome di evento predefinito per selezionare KeyPress.  
  
#### Per aggiungere il immagazzini KeyPress l'evento utilizzando la procedura l'aggiunta guidata evento  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sulla classe del controllo ActiveX per aprire il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi evento**.  
  
     Verrà avviata la procedura guidata evento.  
  
4.  Nell'elenco a discesa di **Nome evento**, `KeyPress`selezionato.  
  
5.  Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_stock_events"></a> Aggiungere le modifiche della procedura guidata evento per gli eventi predefiniti  
 Poiché gli eventi predefiniti vengono gestiti dalla classe di base control, la procedura l'aggiunta guidata evento non modifica la dichiarazione di classe in alcun modo.  Aggiungere l'evento alla mappa eventi del controllo e selezionare una voce nel file di .IDL.  La riga seguente viene aggiunta alla mappa eventi del controllo, che si trova nel file di implementazione della classe del controllo \(.CPP\):  
  
 [!code-cpp[NVC_MFC_AxUI#5](../mfc/codesnippet/CPP/mfc-activex-controls-adding-stock-events-to-an-activex-control_1.cpp)]  
  
 Aggiungendo il codice genera un evento KeyPress quando un messaggio di `WM_CHAR` viene ricevuto e il controllo è attivo.  Nell'evento KeyPress può essere generato altre volte chiamando la funzione di esempio l'attivazione, ad esempio `FireKeyPress`\) dal codice del controllo.  
  
 La procedura l'aggiunta guidata evento aggiungere la seguente riga di codice del file .IDL del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#6](../mfc/codesnippet/CPP/mfc-activex-controls-adding-stock-events-to-an-activex-control_2.idl)]  
  
 Questa riga consente di associare l'evento KeyPress con il relativo ID di invio standard e del contenitore visualizzazione dell'evento KeyPress.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)