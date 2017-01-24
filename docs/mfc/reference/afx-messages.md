---
title: "Messaggi AFX | Microsoft Docs"
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
  - "SB_LINELEFT"
  - "SB_THUMBTRACK"
  - "AFX_TOOLTIP_TYPE_EDIT"
  - "AFX_WM_ON_HSCROLL"
  - "SB_PAGERIGHT"
  - "AFX_WM_RESETPROMPT"
  - "AFX_WM_CHANGE_RIBBON_CATEGORY"
  - "AFX_TOOLTIP_TYPE_MINIFRAME"
  - "AFX_WM_CUSTOMIZETOOLBAR"
  - "AFX_WM_CHANGE_ACTIVE_TAB"
  - "AFX_WM_ACCGETOBJECT"
  - "AFX_WM_TOOLBARMENU"
  - "AFX_TOOLTIP_TYPE_DOCKBAR"
  - "AFX_WM_CUSTOMIZEHELP"
  - "AFX_WM_ON_GET_TAB_TOOLTIP"
  - "AFX_WM_ON_RIBBON_CUSTOMIZE"
  - "AFX_WM_ON_DRAGCOMPLETE"
  - "AFX_WM_RESETTOOLBAR"
  - "AFX_WM_ON_MOVETOTABGROUP"
  - "AFX_WM_CHECKEMPTYMINIFRAME"
  - "AFX_WM_GETDOCUMENTCOLORS"
  - "SB_RIGHT"
  - "AFX_WM_ON_BEFORE_SHOW_RIBBON_ITEM_MENU"
  - "AFX_WM_ACCGETSTATE"
  - "SB_PAGELEFT"
  - "SB_ENDSCROLL"
  - "AFX_WM_ON_CANCELTABMOVE"
  - "AFX_TOOLTIP_TYPE_TAB"
  - "AFX_WM_WINDOW_HELP"
  - "AFX_WM_HIGHLIGHT_RIBBON_LIST_ITEM"
  - "AFX_WM_SHOWREGULARMENU"
  - "AFX_TOOLTIP_TYPE_TOOLBAR"
  - "AFX_WM_CHANGE_CURRENT_FOLDER"
  - "AFX_WM_UPDATETOOLTIPS"
  - "AFX_WM_ON_MOVE_TAB"
  - "AFX_WM_CHANGING_ACTIVE_TAB"
  - "AFX_WM_RESETMENU"
  - "AFX_WM_GETDRAGBOUNDS"
  - "AFX_WM_RESETCONTEXTMENU"
  - "AFX_TOOLTIP_TYPE_BUTTON"
  - "AFX_WM_ON_CLOSEPOPUPWINDOW"
  - "AFX_TOOLTIP_TYPE_TOOLBOX"
  - "AFX_WM_CHANGEVISUALMANAGER"
  - "SB_LINERIGHT"
  - "AFX_WM_ON_RENAME_TAB"
  - "AFX_TOOLTIP_TYPE_DEFAULT"
  - "AFX_WM_ON_TABGROUPMOUSEMOVE"
  - "SB_LEFT"
  - "AFX_WM_DELETETOOLBAR"
  - "AFX_WM_PROPERTY_CHANGED"
  - "AFX_TOOLTIP_TYPE_ALL"
  - "AFX_WM_ACCHITTEST"
  - "AFX_WM_ON_AFTER_SHELL_COMMAND"
  - "AFX_WM_ON_PRESS_CLOSE_BUTTON"
  - "AFX_WM_RESETKEYBOARD"
  - "AFX_WM_ON_MOVETABCOMPLETE"
  - "AFX_WM_CREATETOOLBAR"
  - "SB_THUMBPOSITION"
  - "AFX_WM_POSTSETPREVIEWFRAME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFX (messaggi)"
ms.assetid: 3d601f3c-af6d-47d3-8553-34f1318fa74f
caps.latest.revision: 24
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Messaggi AFX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questi messaggi sono utilizzati in MFC.  
  
## Messaggi  
 Nella tabella seguente sono elencati i messaggi utilizzati nella libreria MFC:  
  
||||||  
|-|-|-|-|-|  
|Messaggio|Descrizione|\[in\] `wParam`|`lParam` \(tutti i parametri siano \[in\] non specificato diversamente.\)|Valore restituito|  
|AFX\_WM\_ACCGETOBJECT|Non utilizzato.|Non utilizzato.|Non applicabile.|Non applicabile.|  
|AFX\_WM\_ACCGETSTATE|Utilizzato per il supporto per l'accessibilità.  Inviare il messaggio a `CMFCPopupMenu` o a `CMFCRibbonPanelMenu` per recuperare lo stato dell'elemento corrente.|Indice dell'elemento, in grado di essere un pulsante o un carattere separatore di menu.|Non utilizzato.|Lo stato dell'elemento.  È \-1 se l'indice non è valido, 0 se il pulsante del menu non contiene attributi speciali.  In caso contrario è una combinazione dei seguenti flag:<br /><br /> TBBS\_DISABLED \- l'elemento è disabilitato<br /><br /> TBBS\_CHECKED \- l'elemento viene selezionato<br /><br /> TBBS\_BUTTON \- l'elemento è un pulsante standard<br /><br /> TBBS\_PRESSED \- il pulsante viene premuto<br /><br /> TBBS\_INDETERMINATE \- stato non definito<br /><br /> TBBS\_SEPARATOR \- anziché un pulsante del menu, l'elemento forma una separazione tra le altre voci di menu|  
|AFX\_WM\_CHANGE\_ACTIVE\_TAB|Il framework invia il messaggio al controllo ridimensionabile barra di controllo.  Elabora questo messaggio per ricevere le notifiche dagli oggetti di `CMFCTabCtrl` quando un utente modifica una scheda attiva.|L'indice di una scheda.|Non utilizzato.|Diverso da zero.|  
|AFX\_WM\_CHANGE\_CURRENT\_FOLDER|Il framework invia il messaggio al padre di `CMFCShellListCtrl` quando l'utente ha modificato la cartella corrente.|Non utilizzato.|Non utilizzato.|Non utilizzato.|  
|AFX\_WM\_CHANGEVISUALMANAGER|Il framework invia il messaggio a tutte le finestre cornici quando l'utente modifica il gestore visualizzazione corrente.  In risposta a questo messaggio, una finestra cornice ricalcola la relativa area e regola altri parametri in base alle necessità.  È possibile elaborare il messaggio di AFX\_WM\_CHANGEVISUALMANAGER nell'applicazione se è necessario essere notificati su questo evento.  È necessario chiamare il gestore della classe di base \(`OnChangeVisualManager`\) per assicurarsi che l'elaborazione interna del framework di questo evento si verifica.|Non utilizzato.|Non utilizzato.|Non utilizzato.|  
|AFX\_WM\_CHANGING\_ACTIVE\_TAB|Inviato al padre dell'oggetto di `CMFCTabCtrl`.  Elabora questo messaggio se si desidera ricevere notifiche dagli oggetti di `CMFCTabCtrl` quando un utente reimposta una scheda.|L'indice di tabulazione in attivanda.|Non utilizzato.|Diverso da zero.|  
|AFX\_WM\_CHECKEMPTYMINIFRAME|Solo per utilizzo interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX\_WM\_CREATETOOLBAR|Inviato da `CMFCToolBarsListPropertyPage` quando un utente crea una nuova barra degli strumenti durante il processo di personalizzazione.  È possibile elaborare questo messaggio per creare un'istanza di un oggetto derivato CMFCToolBar\- personalizzato.  Se si gestisce questo messaggio e creare una barra degli strumenti, omettere la chiamata al gestore predefinito.|Non utilizzato.|Un puntatore a una stringa contenente il nome della barra degli strumenti.|Un puntatore alla barra degli strumenti appena creato.  NULL indica che la progettazione della barra degli strumenti è stata annullata.|  
|AFX\_WM\_CUSTOMIZEHELP|Inviato alla finestra cornice principale dalla finestra delle proprietà `CMFCToolbarCustomize``Dialog` di personalizzazione quando l'utente preme il pulsante **?** o il tasto F1.|Specifica la pagina attiva della finestra delle proprietà di personalizzazione.|Un puntatore a un oggetto di `CMFCToolbarCustomize``Dialog`.|Zero.|  
|AFX\_WM\_CUSTOMIZETOOLBAR|`CMFCToolbarCustomize` `Dialog` invia il messaggio per notificare al frame padre che l'utente sta creando una nuova barra degli strumenti.|`TRUE` quando la personalizzazione viene avviata, `FALSE` quando la personalizzazione viene completata.|Non utilizzato.|Zero.|  
|AFX\_WM\_DELETETOOLBAR|Inviato alla finestra cornice principale quando l'utente sta a delete una barra degli strumenti in modalità di personalizzazione.<br /><br /> Elabora questo messaggio per intraprendere azioni aggiuntive quando un utente elimina una barra degli strumenti in modalità di personalizzazione.  È inoltre necessario chiamare il gestore predefinito \(`OnToolbarDelete`\), che elimina la barra degli strumenti.  Il gestore predefinito restituisce un valore che indica se è possibile eliminare la barra degli strumenti.|Non utilizzato.|Puntatore a un oggetto di `CMFCToolBar` da eliminare.|Diverso da zero se una barra degli strumenti non può essere eliminata; in caso contrario 0.|  
|AFX\_WM\_GETDOCUMENTCOLORS|`CMFCColorMenuButton` invia il messaggio alla finestra cornice principale per recuperare i colori del documento.|Non utilizzato.|\[in, out\] puntatore a un oggetto di `CList<COLORREF, COLORREF>`.|Zero.|  
|AFX\_WM\_GETDRAGBOUNDS|Solo per utilizzo interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX\_WM\_HIGHLIGHT\_RIBBON\_LIST\_ITEM|Inviato alla finestra cornice principale quando un utente evidenzia un elemento elenco della barra multifunzione.|Indice dell'elemento evidenziato|Un puntatore a `CMFCBaseRibbonElement`|Non utilizzato.|  
|AFX\_WM\_ON\_AFTER\_SHELL\_COMMAND|Inviato a un elemento padre di `CMFCShellListCtrl` o dei comandi di `CMFCShellTreeCtrl` quando un utente completa eseguire un comando della shell.|L'id di comando che l'utente ha eseguito|Non utilizzato.|Se i processi dell'applicazione questo messaggio, restituisce zero.|  
|AFX\_WM\_ON\_BEFORE\_SHOW\_RIBBON\_ITEM\_MENU|Il framework invia il messaggio al padre della barra multifunzione prima di visualizzare il menu di scelta rapida.  È possibile elaborare questo messaggio e modificare i menu di scelta rapida in qualsiasi momento.|Non utilizzato.|Un puntatore a `CMFCBaseRibbonElement`|Non utilizzato.|  
|AFX\_WM\_ON\_CANCELTABMOVE|Solo per utilizzo interno.|Non applicabile.|Non applicabile.||  
|AFX\_WM\_ON\_CHANGE\_RIBBON\_CATEGORY|Il framework invia il messaggio alla cornice principale quando l'utente modifica la categoria attiva il controllo della barra multifunzione.|Non utilizzato.|Un puntatore a `CMFCRibbonBar` della categoria è stato modificato.|Non utilizzato.|  
|AFX\_WM\_ON\_CLOSEPOPUPWINDOW|Il framework invia il messaggio per informare il proprietario di `CMFCDesktopAlertWnd` che la finestra si sta per la chiusura.|Non utilizzato.|Un puntatore all'oggetto di `CMFCDesktopAlertWnd`.|Non utilizzato.|  
|AFX\_WM\_ON\_DRAGCOMPLETE|Solo per utilizzo interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX\_WM\_ON\_GET\_TAB\_TOOLTIP|Inviato alla finestra cornice principale quando una finestra a schede sta per visualizzare una descrizione comandi della scheda, se le descrizioni comandi personalizzate abilitate.|Non utilizzato.|Un puntatore a una struttura di `CMFCTabToolTipInfo`.|Non utilizzato.|  
|AFX\_WM\_ON\_HSCROLL|Inviato al controllo ridimensionabile barra di controllo.  Elabora questo messaggio per ricevere le notifiche dagli oggetti di `CMFCTabCtrl` quando un evento dello scorrimento si trova nella barra di scorrimento orizzontale a schede widget.|Il word meno significativa specifica un valore della barra di scorrimento che indica la richiesta di scorrimento dell'utente.  Per ulteriori informazioni, vedere la tabella più avanti in questo argomento.|Non utilizzato.|Diverso da zero.|  
|AFX\_WM\_ON\_MOVE\_TAB|Inviato al padre di una finestra a schede quando un utente trascina una scheda in una nuova posizione.|L'indice in base zero della scheda nella posizione originale.|\[out\] l'indice in base zero della scheda nella nuova posizione.|Zero.|  
|AFX\_WM\_ON\_MOVETABCOMPLETE|Solo per utilizzo interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX\_WM\_ON\_MOVETOTABGROUP|Inviato alla finestra cornice principale quando un utente sposta una finestra figlio MDI da un gruppo assegnata la precedenza a un altro.|Un handle di finestra a schede \(`CMFCTabCtrl`\) dalla finestra figlio MDI viene rimossa.|\[out\] handle A finestra a schede \(`CMFCTabCtrl`\) a cui la finestra figlio MDI è stata inserita.|Ignorato.|  
|AFX\_WM\_ON\_PRESS\_CLOSE\_BUTTON|Inviato a un elemento padre di `CDockablePane` quando l'utente fa clic sul pulsante di **Chiudi** sulla barra del titolo della barra di controllo.|Non utilizzato.|Un puntatore a un riquadro ancorabile su cui l'utente ha fatto clic sul pulsante di **Chiudi**.|`TRUE` se un riquadro non può essere chiusa; in caso contrario FALSE.|  
|AFX\_WM\_ON\_RENAME\_TAB|Inviato al padre della finestra a schede dopo che l'utente rinominato una scheda modificabile.|L'indice in base zero della scheda rinominata.|\[out\] puntatore A una stringa contenente il nome della nuova scheda.|Diverso da zero se i processi dell'applicazione; questo messaggio il framework eliminata la chiamata a `CMFCBaseTabCtrl::SetTabLabel`.  Se viene restituito zero, quindi `CMFCBaseTabCtrl::SetTabLabel` viene chiamato dal framework.|  
|AFX\_WM\_ON\_RIBBON\_CUSTOMIZE|Inviato al frame padre quando l'utente inizia la personalizzazione.  Elabora questo messaggio se si desidera visualizzare una finestra di dialogo di personalizzazione.|Non utilizzato.|Un puntatore al controllo della barra multifunzione da personalizzare.|Diverso da zero se i processi dell'applicazione questo messaggio e visualizzare la relativa finestra di dialogo per la personalizzazione.  Se l'applicazione restituisce zero, il framework di visualizzare la finestra di dialogo incorporata di personalizzazione.|  
|AFX\_WM\_ON\_TABGROUPMOUSEMOVE|Solo per utilizzo interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX\_WM\_POSTSETPREVIEWFRAME|Inviato per notificare alla cornice principale che l'utente ha modificato la modalità anteprima di stampa|`TRUE` indica che la modalità anteprima di stampa viene impostata.  `FALSE` indica che la modalità anteprima di stampa è disabilitata.|Non utilizzato.|Non utilizzato.|  
|AFX\_WM\_PROPERTY\_CHANGED|Inviato al proprietario del controllo griglia delle proprietà \(`CMFCPropertyGridCtrl`\) quando l'utente modifica il valore della proprietà selezionata.|L'id del controllo dell'elenco di proprietà.|Un puntatore alla proprietà \(`CMFCProp``ertyGridProperty`\) modificato.|Non utilizzato.|  
|AFX\_WM\_RESETCONTEXTMENU|Inviato alla finestra cornice principale quando l'utente reimposta il menu di scelta rapida durante la personalizzazione.|ID di risorsa del menu di scelta rapida.|Un puntatore al menu di scelta rapida corrente, `CMFCPopupMenu`.|Non utilizzato.|  
|AFX\_WM\_RESETKEYBOARD|Il framework invia il messaggio alla finestra cornice principale quando l'utente reimposta tutti i tasti di scelta rapida durante la personalizzazione.|Non utilizzato.|Non utilizzato.|Non utilizzato.|  
|AFX\_WM\_RESETMENU|Il framework invia il messaggio al proprietario del menu \(una finestra cornice\) quando l'utente reimposta il menu di un frame dell'applicazione durante la personalizzazione|L'id della risorsa menu|Non utilizzato.|Non utilizzato.|  
|AFX\_WM\_RESETPROMPT|Il framework invia il messaggio quando l'utente reimposta una barra degli strumenti dalla barra degli strumenti della finestra di dialogo.  Il gestore predefinito di visualizzare una finestra di messaggio in cui viene richiesto se l'utente desidera reimpostare la barra degli strumenti.|Non utilizzato.|Non utilizzato.|Non utilizzato.|  
|AFX\_WM\_RESETTOOLBAR|Un oggetto di `CMFCToolBar` invia il messaggio quando una barra degli strumenti viene ripristinato allo stato originale, ovvero, caricato dalle risorse.  Elabora questo messaggio reinserire i pulsanti della barra degli strumenti di cui le classi che derivano da `CMFCToolbarButton`.  Per ulteriori informazioni, vedere `CMFCToolbarComboBoxButton`.|ID di risorsa di una barra degli strumenti del cui stato è stato ripristinato.|Non utilizzato.|Zero.|  
|AFX\_WM\_SHOWREGULARMENU|l'oggetto di`CMFCToolbarMenuButton` invia il messaggio al proprietario quando l'utente fa clic su un pulsante plain di menu.  Elaborare ogni volta che il messaggio che si utilizza `CMFCToolbarMenuButton` per visualizzare un menu di scelta rapida quando l'utente fa clic su un pulsante.|L'id di comando di un pulsante che invia il messaggio.|Coordinate dello schermo del cursore.  Il word meno significativa specifica la coordinata x.  Il word più significativa specifica la coordinata y.|Non utilizzato.|  
|AFX\_WM\_TOOLBARMENU|Inviato alla finestra cornice principale quando l'utente rilascia il pulsante destro del mouse mentre il puntatore del mouse si trova nell'area client o non client di un riquadro.|Non utilizzato.|Coordinate dello schermo del puntatore del mouse.  Il word meno significativa specifica la coordinata x.  Il word più significativa specifica la coordinata y.|Zero se i processi dell'applicazione; questo messaggio in caso contrario, diverso da zero.|  
|AFX\_WM\_UPDATETOOLTIPS|Inviato a tutti i proprietari di descrizione comandi per indicare che i controlli di descrizione comandi devono essere ricreati.|Il tipo di controllo che deve elaborare questo messaggio.  Vedere più avanti la tabella in questo argomento per un elenco di valori possibili.|Non utilizzato.|Non utilizzato.|  
|AFX\_WM\_WINDOW\_HELP|`CMFCWindowsManagerDialog` invia il messaggio al frame padre quando l'utente fa clic sul pulsante **?**, oppure attivata la modalità guida facendo clic sul pulsante della barra del titolo **?** o il tasto F1.|Non utilizzato.|Un puntatore a un'istanza di `CMFCWindowsManagerDialog`.|Non utilizzato.|  
  
 Nella tabella seguente vengono mostrati i valori in word inferiore del parametro di `lParam` del metodo di AFX\_WM\_HSCROLL:  
  
|||  
|-|-|  
|Valore|Significato|  
|SB\_ENDSCROLL|L'utente termina lo scorrimento.|  
|SB\_LEFT|Scorre dell'utente in alto a sinistra.|  
|SB\_RIGHT|Scorre dell'utente nella parte inferiore destra.|  
|SB\_LINELEFT|L'utente scorre sinistro da un'unità.|  
|SB\_LINERIGHT|Scorre dell'utente right da un'unità.|  
|SB\_PAGELEFT|L'utente scorre sinistro della larghezza della finestra.|  
|SB\_PAGERIGHT|Scorre dell'utente a destra della larghezza della finestra.|  
|SB\_THUMBPOSITION|L'utente ha trascinato la casella di scorrimento \(pollice\) e ha rilasciato il pulsante del mouse.  Il word più significativo indica la posizione della casella di scorrimento alla fine dell'operazione di trascinamento.|  
|SB\_THUMBTRACK|L'utente sta trascinando la casella di scorrimento.  Il messaggio di AFX\_WM\_ON\_HSCROLL viene inviato ripetutamente con questo valore finché l'utente non rilasciare il pulsante del mouse.  Il word più significativo indica la posizione in cui la casella di scorrimento è stato trascinato.|  
  
> [!NOTE]
>  Il word più significativa del parametro di `lParam` specifica la posizione corrente della casella di scorrimento se il word meno significativa è SB\_THUMBPOSITION o SB\_THUMBTRACK; in caso contrario, questa parola non viene utilizzata.  
  
 Nella tabella seguente sono elencati i valori di flag per il parametro di `lParam` del messaggio di AFX\_WM\_UPDATETOOLTIPS:  
  
|||  
|-|-|  
|Flag|Valore|  
|AFX\_TOOLTIP\_TYPE\_DEFAULT|0x0001|  
|AFX\_TOOLTIP\_TYPE\_TOOLBAR|0x0002|  
|AFX\_TOOLTIP\_TYPE\_TAB|0x0004|  
|AFX\_TOOLTIP\_TYPE\_MINIFRAME|0x0008|  
|AFX\_TOOLTIP\_TYPE\_DOCKBAR|0x0010|  
|AFX\_TOOLTIP\_TYPE\_EDIT|0x0020|  
|AFX\_TOOLTIP\_TYPE\_BUTTON|0x0040|  
|AFX\_TOOLTIP\_TYPE\_TOOLBOX|0x0080|  
|AFX\_TOOLTIP\_TYPE\_ALL|0xFFFF|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)