---
description: 'Altre informazioni su: AFX messages'
title: AFX (messaggi)
ms.date: 11/04/2016
f1_keywords:
- SB_LINELEFT
- SB_THUMBTRACK
- AFX_TOOLTIP_TYPE_EDIT
- AFX_WM_ON_HSCROLL
- SB_PAGERIGHT
- AFX_WM_RESETPROMPT
- AFX_WM_CHANGE_RIBBON_CATEGORY
- AFX_TOOLTIP_TYPE_MINIFRAME
- AFX_WM_CUSTOMIZETOOLBAR
- AFX_WM_CHANGE_ACTIVE_TAB
- AFX_WM_ACCGETOBJECT
- AFX_WM_TOOLBARMENU
- AFX_TOOLTIP_TYPE_DOCKBAR
- AFX_WM_CUSTOMIZEHELP
- AFX_WM_ON_GET_TAB_TOOLTIP
- AFX_WM_ON_RIBBON_CUSTOMIZE
- AFX_WM_ON_DRAGCOMPLETE
- AFX_WM_RESETTOOLBAR
- AFX_WM_ON_MOVETOTABGROUP
- AFX_WM_CHECKEMPTYMINIFRAME
- AFX_WM_GETDOCUMENTCOLORS
- SB_RIGHT
- AFX_WM_ON_BEFORE_SHOW_RIBBON_ITEM_MENU
- AFX_WM_ACCGETSTATE
- SB_PAGELEFT
- SB_ENDSCROLL
- AFX_WM_ON_CANCELTABMOVE
- AFX_TOOLTIP_TYPE_TAB
- AFX_WM_WINDOW_HELP
- AFX_WM_HIGHLIGHT_RIBBON_LIST_ITEM
- AFX_WM_SHOWREGULARMENU
- AFX_TOOLTIP_TYPE_TOOLBAR
- AFX_WM_CHANGE_CURRENT_FOLDER
- AFX_WM_UPDATETOOLTIPS
- AFX_WM_ON_MOVE_TAB
- AFX_WM_CHANGING_ACTIVE_TAB
- AFX_WM_RESETMENU
- AFX_WM_GETDRAGBOUNDS
- AFX_WM_RESETCONTEXTMENU
- AFX_TOOLTIP_TYPE_BUTTON
- AFX_WM_ON_CLOSEPOPUPWINDOW
- AFX_TOOLTIP_TYPE_TOOLBOX
- AFX_WM_CHANGEVISUALMANAGER
- SB_LINERIGHT
- AFX_WM_ON_RENAME_TAB
- AFX_TOOLTIP_TYPE_DEFAULT
- AFX_WM_ON_TABGROUPMOUSEMOVE
- SB_LEFT
- AFX_WM_DELETETOOLBAR
- AFX_WM_PROPERTY_CHANGED
- AFX_TOOLTIP_TYPE_ALL
- AFX_WM_ACCHITTEST
- AFX_WM_ON_AFTER_SHELL_COMMAND
- AFX_WM_ON_PRESS_CLOSE_BUTTON
- AFX_WM_RESETKEYBOARD
- AFX_WM_ON_MOVETABCOMPLETE
- AFX_WM_CREATETOOLBAR
- SB_THUMBPOSITION
- AFX_WM_POSTSETPREVIEWFRAME
helpviewer_keywords:
- AFX messages [MFC]
ms.assetid: 3d601f3c-af6d-47d3-8553-34f1318fa74f
ms.openlocfilehash: edda0bffd7077a9898a83ff1a530145a008d2d94
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322837"
---
# <a name="afx-messages"></a>AFX (messaggi)

Questi messaggi vengono utilizzati in MFC.

## <a name="messages"></a>Messaggi

Nella tabella seguente sono elencati i messaggi utilizzati nella libreria MFC:

|Message|Descrizione|in *wParam*|*lParam* (tutti i parametri sono [in] se non diversamente specificato).|Valore restituito|
|-|-|-|-|-|
|AFX_WM_ACCGETOBJECT|Non usato.|Non usato.|Non applicabile.|Non applicabile.|
|AFX_WM_ACCGETSTATE|Utilizzato per il supporto per l'accessibilità. Inviare questo messaggio a `CMFCPopupMenu` o `CMFCRibbonPanelMenu` per recuperare lo stato dell'elemento corrente.|Indice dell'elemento, che può essere un pulsante di menu o un separatore.|Non usato.|Stato dell'elemento. È-1 se l'indice non è valido, 0 se il pulsante di menu non ha attributi speciali. In caso contrario, si tratta di una combinazione dei flag seguenti:<br /><br /> TBBS_DISABLED-l'elemento è disabilitato<br /><br /> TBBS_CHECKED-l'elemento è selezionato<br /><br /> TBBS_BUTTON-l'elemento è un pulsante standard<br /><br /> TBBS_PRESSED-pulsante premuto<br /><br /> TBBS_INDETERMINATE: stato non definito<br /><br /> TBBS_SEPARATOR invece di un pulsante di menu, questo elemento costituisce una separazione tra le altre voci di menu|
|AFX_WM_CHANGE_ACTIVE_TAB|Il framework invia questo messaggio al controllo della barra di controllo ridimensionabile. Elaborare questo messaggio per ricevere notifiche dagli `CMFCTabCtrl` oggetti quando un utente modifica una scheda attiva.|Indice di una scheda.|Non usato.|Diverso da zero.|
|AFX_WM_CHANGE_CURRENT_FOLDER|Il framework invia questo messaggio al padre di `CMFCShellListCtrl` quando l'utente ha modificato la cartella corrente.|Non usato.|Non usato.|Non usato.|
|AFX_WM_CHANGEVISUALMANAGER|Il framework invia questo messaggio a tutte le finestre cornice quando l'utente modifica il gestore di visualizzazione corrente. In risposta a questo messaggio, una finestra cornice ricalcola l'area e modifica altri parametri in base alle esigenze. È possibile elaborare il messaggio di AFX_WM_CHANGEVISUALMANAGER nell'applicazione se è necessario ricevere notifiche relative a questo evento. È necessario chiamare il gestore della classe di base ( `OnChangeVisualManager` ) per assicurarsi che l'elaborazione interna del Framework di questo evento avvenga.|Non usato.|Non usato.|Non usato.|
|AFX_WM_CHANGING_ACTIVE_TAB|Inviato all'elemento padre dell' `CMFCTabCtrl` oggetto.  Elaborare questo messaggio se si desidera ricevere notifiche da `CMFCTabCtrl` oggetti quando un utente reimposta una scheda.|Indice della scheda attivata.|Non usato.|Diverso da zero.|
|AFX_WM_CHECKEMPTYMINIFRAME|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|
|AFX_WM_CREATETOOLBAR|Inviato da `CMFCToolBarsListPropertyPage` quando un utente crea una nuova barra degli strumenti durante il processo di personalizzazione. È possibile elaborare questo messaggio per creare un'istanza di un oggetto personalizzato derivato da CMFCToolBar. Se si gestisce questo messaggio e si crea una barra degli strumenti personalizzata, omettere la chiamata al gestore predefinito.|Non usato.|Puntatore a una stringa che contiene il nome della barra degli strumenti.|Puntatore alla barra degli strumenti appena creata. NULL indica che la creazione della barra degli strumenti è stata annullata.|
|AFX_WM_CUSTOMIZEHELP|Inviato alla finestra cornice principale dalla finestra delle proprietà di personalizzazione `CMFCToolbarCustomize Dialog` quando l'utente preme il pulsante  ? o il tasto F1.|Specifica la pagina attiva della finestra delle proprietà di personalizzazione.|Puntatore a un oggetto `CMFCToolbarCustomize Dialog`.|Zero.|
|AFX_WM_CUSTOMIZETOOLBAR|`CMFCToolbarCustomize Dialog`Invia questo messaggio per notificare al frame padre che l'utente sta creando una nuova barra degli strumenti.|TRUE quando la personalizzazione viene avviata, FALSE al termine della personalizzazione.|Non usato.|Zero.|
|AFX_WM_DELETETOOLBAR|Inviato alla finestra cornice principale quando l'utente sta per eliminare una barra degli strumenti in modalità di personalizzazione.<br /><br /> Elaborare questo messaggio per eseguire azioni aggiuntive quando un utente elimina una barra degli strumenti in modalità di personalizzazione. È anche necessario chiamare il gestore predefinito ( `OnToolbarDelete` ), che elimina la barra degli strumenti. Il gestore predefinito restituisce un valore che indica se è possibile eliminare la barra degli strumenti.|Non usato.|Puntatore a un `CMFCToolBar` oggetto da eliminare.|Diverso da zero se non è possibile eliminare una barra degli strumenti. in caso contrario, 0.|
|AFX_WM_GETDOCUMENTCOLORS|`CMFCColorMenuButton` Invia questo messaggio alla finestra cornice principale per recuperare i colori del documento.|Non usato.|[in, out] Puntatore a un `CList<COLORREF, COLORREF>` oggetto.|Zero.|
|AFX_WM_GETDRAGBOUNDS|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|
|AFX_WM_HIGHLIGHT_RIBBON_LIST_ITEM|Inviato alla finestra cornice principale quando un utente evidenzia un elemento dell'elenco della barra multifunzione.|Indice dell'elemento evidenziato|Puntatore a `CMFCBaseRibbonElement`|Non usato.|
|AFX_WM_ON_AFTER_SHELL_COMMAND|Inviato a un elemento padre `CMFCShellListCtrl` dei `CMFCShellTreeCtrl` controlli o quando un utente completa l'esecuzione di un comando della shell.|ID del comando eseguito dall'utente|Non usato.|Se l'applicazione elabora il messaggio, deve restituire zero.|
|AFX_WM_ON_BEFORE_SHOW_RIBBON_ITEM_MENU|Il framework invia questo messaggio al padre della barra multifunzione prima di visualizzare il menu di scelta rapida. È possibile elaborare questo messaggio e modificare i menu popup in qualsiasi momento.|Non usato.|Puntatore a `CMFCBaseRibbonElement`|Non usato.|
|AFX_WM_ON_CANCELTABMOVE|Solo per uso interno.|Non applicabile.|Non applicabile.||
|AFX_WM_ON_CHANGE_RIBBON_CATEGORY|Il framework invia questo messaggio al frame principale quando l'utente modifica la categoria di controllo della barra multifunzione attiva.|Non usato.|Puntatore a la `CMFCRibbonBar` cui categoria è stata modificata.|Non usato.|
|AFX_WM_ON_CLOSEPOPUPWINDOW|Il framework invia questo messaggio per notificare al proprietario `CMFCDesktopAlertWnd` che la finestra sta per essere chiusa.|Non usato.|Puntatore all' `CMFCDesktopAlertWnd` oggetto.|Non usato.|
|AFX_WM_ON_DRAGCOMPLETE|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|
|AFX_WM_ON_GET_TAB_TOOLTIP|Inviato alla finestra cornice principale quando si sta per visualizzare una descrizione comando di una scheda, se sono abilitate le descrizioni comandi personalizzate.|Non usato.|Puntatore a una `CMFCTabToolTipInfo` struttura.|Non usato.|
|AFX_WM_ON_HSCROLL|Inviato al controllo della barra di controllo ridimensionabile. Elabora questo messaggio per ricevere notifiche dagli `CMFCTabCtrl` oggetti quando si verifica un evento Scroll nella barra di scorrimento orizzontale del widget a schede.|La parola di ordine inferiore specifica un valore della barra di scorrimento che indica la richiesta di scorrimento dell'utente.  Per ulteriori informazioni, vedere la tabella più avanti in questo argomento.|Non usato.|Diverso da zero.|
|AFX_WM_ON_MOVE_TAB|Inviato al padre di una finestra a schede quando un utente trascina una scheda in una nuova posizione.|Indice in base zero della scheda nella posizione originale.|out Indice in base zero della scheda nella nuova posizione.|Zero.|
|AFX_WM_ON_MOVETABCOMPLETE|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|
|AFX_WM_ON_MOVETOTABGROUP|Inviato alla finestra cornice principale quando un utente sposta una finestra figlio MDI da un gruppo a schede a un altro.|Handle per la finestra a schede ( `CMFCTabCtrl` ) da cui è stata rimossa la finestra figlio MDI.|out Handle per la finestra a schede ( `CMFCTabCtrl` ) in cui è stata inserita la finestra figlio MDI.|Ignorato.|
|AFX_WM_ON_PRESS_CLOSE_BUTTON|Inviato a un elemento padre di `CDockablePane` quando l'utente fa clic sul pulsante **Chiudi** sulla didascalia della barra di controllo.|Non usato.|Puntatore a un riquadro ancorabile su cui l'utente ha fatto clic sul pulsante **Chiudi** .|TRUE se non è possibile chiudere un riquadro. in caso contrario, FALSE.|
|AFX_WM_ON_RENAME_TAB|Inviato all'elemento padre della finestra a schede dopo che l'utente ha rinominato una scheda modificabile.|Indice in base zero della scheda rinominata.|out Puntatore a una stringa che contiene il nome della nuova scheda.|Diverso da zero se l'applicazione elabora il messaggio; il Framework eliminerà la chiamata a `CMFCBaseTabCtrl::SetTabLabel` .  Se viene restituito zero, `CMFCBaseTabCtrl::SetTabLabel` viene chiamato dal Framework.|
|AFX_WM_ON_RIBBON_CUSTOMIZE|Inviato al frame padre quando l'utente avvia la personalizzazione. Elaborare questo messaggio se si desidera visualizzare una finestra di dialogo di personalizzazione personalizzata.|Non usato.|Puntatore al controllo Ribbon da personalizzare.|Diverso da zero se l'applicazione elabora questo messaggio e visualizza la propria finestra di dialogo di personalizzazione. Se l'applicazione restituisce zero, nel Framework viene visualizzata la finestra di dialogo personalizzazione incorporata.|
|AFX_WM_ON_TABGROUPMOUSEMOVE|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|
|AFX_WM_POSTSETPREVIEWFRAME|Inviato per notificare al frame principale che l'utente ha modificato la modalità di anteprima di stampa|TRUE indica che la modalità di anteprima di stampa è impostata. FALSE indica che la modalità di anteprima di stampa è disattivata.|Non usato.|Non usato.|
|AFX_WM_PROPERTY_CHANGED|Inviato al proprietario del controllo griglia delle proprietà ( `CMFCPropertyGridCtrl` ) quando l'utente modifica il valore della proprietà selezionata.|ID del controllo dell'elenco delle proprietà.|Puntatore alla proprietà ( `CMFCPropertyGridProperty` ) modificata.|Non usato.|
|AFX_WM_RESETCONTEXTMENU|Inviato alla finestra cornice principale quando l'utente reimposta il menu di scelta rapida durante la personalizzazione.|ID risorsa del menu di scelta rapida.|Puntatore al menu di scelta rapida corrente, `CMFCPopupMenu` .|Non usato.|
|AFX_WM_RESETKEYBOARD|Il framework invia questo messaggio alla finestra cornice principale quando l'utente Reimposta tutti i tasti di scelta rapida durante la personalizzazione.|Non usato.|Non usato.|Non usato.|
|AFX_WM_RESETMENU|Il framework invia questo messaggio al proprietario del menu (una finestra cornice) quando l'utente reimposta un menu del frame dell'applicazione durante la personalizzazione|ID della risorsa di menu.|Non usato.|Non usato.|
|AFX_WM_RESETPROMPT|Il framework invia questo messaggio quando l'utente reimposta una barra degli strumenti dalla finestra di dialogo Personalizza della barra degli strumenti. Il gestore predefinito Visualizza una finestra di messaggio in cui viene chiesto se l'utente desidera reimpostare la barra degli strumenti.|Non usato.|Non usato.|Non usato.|
|AFX_WM_RESETTOOLBAR|Un `CMFCToolBar` oggetto invia questo messaggio quando una barra degli strumenti viene ripristinata allo stato originale, ovvero caricata dalle risorse. Elaborare questo messaggio per reinserire i pulsanti della barra degli strumenti le cui classi sono derivate da `CMFCToolbarButton` . Per altre informazioni, vedere `CMFCToolbarComboBoxButton`.|ID risorsa di una barra degli strumenti il cui stato è stato ripristinato.|Non usato.|Zero.|
|AFX_WM_SHOWREGULARMENU|`CMFCToolbarMenuButton` l'oggetto invia questo messaggio al relativo proprietario quando l'utente fa clic su un normale pulsante di menu. Elabora questo messaggio ogni volta che usi `CMFCToolbarMenuButton` per visualizzare un menu di scelta rapida quando l'utente fa clic su un pulsante.|ID del comando di un pulsante che invia il messaggio.|Coordinate dello schermo del cursore. La parola di ordine inferiore specifica la coordinata x. La parola di ordine superiore specifica la coordinata y.|Non usato.|
|AFX_WM_TOOLBARMENU|Inviato alla finestra cornice principale quando l'utente rilascia il pulsante destro del mouse mentre il puntatore del mouse si trova nell'area client o non client di un riquadro.|Non usato.|Coordinate dello schermo del puntatore del mouse. La parola di ordine inferiore specifica la coordinata x. La parola di ordine superiore specifica la coordinata y.|Zero se l'applicazione elabora il messaggio; in caso contrario, diverso da zero.|
|AFX_WM_UPDATETOOLTIPS|Inviato a tutti i proprietari della descrizione comando per indicare che i controlli ToolTip devono essere ricreati.|Tipo di controllo che deve elaborare questo messaggio. Per un elenco dei valori possibili, vedere la tabella più avanti in questo argomento.|Non usato.|Non usato.|
|AFX_WM_WINDOW_HELP|`CMFCWindowsManagerDialog` Invia questo messaggio al frame padre quando l'utente fa clic sul **pulsante?** o passa alla modalità guida facendo clic sul pulsante della didascalia della **Guida** o sul tasto F1.|Non usato.|Puntatore all'istanza di `CMFCWindowsManagerDialog` .|Non usato.|

Nella tabella seguente vengono illustrati i valori per la parola bassa del parametro *lParam* del metodo AFX_WM_HSCROLL:

|Valore|Significato|
|-|-|
|SB_ENDSCROLL|L'utente termina lo scorrimento.|
|SB_LEFT|L'utente scorre in alto a sinistra.|
|SB_RIGHT|L'utente scorre in basso a destra.|
|SB_LINELEFT|L'utente scorre verso sinistra di un'unità.|
|SB_LINERIGHT|L'utente scorre verso destra di un'unità.|
|SB_PAGELEFT|L'utente scorre verso sinistra in base alla larghezza della finestra.|
|SB_PAGERIGHT|L'utente scorre a destra in base alla larghezza della finestra.|
|SB_THUMBPOSITION|L'utente ha trascinato la casella di scorrimento (Thumb) e ha rilasciato il pulsante del mouse. La parola di ordine superiore indica la posizione della casella di scorrimento alla fine dell'operazione di trascinamento.|
|SB_THUMBTRACK|L'utente sta trascinando la casella di scorrimento. Il messaggio AFX_WM_ON_HSCROLL viene inviato ripetutamente con questo valore fino a quando l'utente rilascia il pulsante del mouse. La parola più ordinata indica la posizione in cui è stata trascinata la casella di scorrimento.|

> [!NOTE]
> La parola più ordinata del parametro *lParam* specifica la posizione corrente della casella di scorrimento se la parola più bassa è SB_THUMBPOSITION o SB_THUMBTRACK; in caso contrario, la parola non viene utilizzata.

Nella tabella seguente sono elencati i valori dei flag per il parametro *lParam* del messaggio AFX_WM_UPDATETOOLTIPS:

|Flag|valore|
|-|-|
|AFX_TOOLTIP_TYPE_DEFAULT|0x0001|
|AFX_TOOLTIP_TYPE_TOOLBAR|0x0002|
|AFX_TOOLTIP_TYPE_TAB|0x0004|
|AFX_TOOLTIP_TYPE_MINIFRAME|0x0008|
|AFX_TOOLTIP_TYPE_DOCKBAR|0x0010|
|AFX_TOOLTIP_TYPE_EDIT|0x0020|
|AFX_TOOLTIP_TYPE_BUTTON|0x0040|
|AFX_TOOLTIP_TYPE_TOOLBOX|0x0080|
|AFX_TOOLTIP_TYPE_ALL|0xFFFF|

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
