---
title: AFX (messaggi) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs: C++
helpviewer_keywords: AFX messages [MFC]
ms.assetid: 3d601f3c-af6d-47d3-8553-34f1318fa74f
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 41f300f285fb4eaf1a6154a21cbbabc0253fc730
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="afx-messages"></a>AFX (messaggi)
Questi messaggi vengono utilizzati in MFC.  
  
## <a name="messages"></a>Messages  
 Nella tabella seguente elenca i messaggi che vengono utilizzati nella libreria MFC:  
  
||||||  
|-|-|-|-|-|  
|Messaggio|Descrizione|[in] `wParam`|`lParam`(Tutti i parametri sono [in] Se non diversamente specificato)|Valore restituito|  
|AFX_WM_ACCGETOBJECT|Non usato.|Non usato.|Non applicabile.|Non applicabile.|  
|AFX_WM_ACCGETSTATE|Usato per il supporto di accessibilità. Inviare il messaggio a `CMFCPopupMenu` o `CMFCRibbonPanelMenu` per recuperare lo stato dell'elemento corrente.|Indice dell'elemento, che può essere un pulsante di menu o un separatore.|Non usato.|Lo stato dell'elemento. È -1 se l'indice non è valido, 0 se il pulsante di menu non dispone di nessun attributo speciale. In caso contrario è una combinazione dei flag seguenti:<br /><br /> TBBS_DISABLED: l'elemento è disabilitato<br /><br /> TBBS_CHECKED: l'elemento è selezionato<br /><br /> TBBS_BUTTON: l'elemento è un pulsante standard<br /><br /> TBBS_PRESSED: pulsante<br /><br /> TBBS_INDETERMINATE: stato non definito<br /><br /> TBBS_SEPARATOR - piuttosto che un pulsante di menu, il form dell'elemento una separazione tra altre voci di menu|  
|AFX_WM_CHANGE_ACTIVE_TAB|Il framework invia il messaggio per il controllo barra di controllo ridimensionabile. Per elaborare questo messaggio per ricevere notifiche da `CMFCTabCtrl` oggetti quando un utente modifica una scheda attiva.|L'indice di una scheda.|Non usato.|Diverso da zero.|  
|AFX_WM_CHANGE_CURRENT_FOLDER|Il framework invia il messaggio per l'elemento padre di `CMFCShellListCtrl` quando l'utente ha modificato la cartella corrente.|Non usato.|Non usato.|Non usato.|  
|AFX_WM_CHANGEVISUALMANAGER|Il framework invia il messaggio a tutte le finestre cornice quando l'utente modifica il gestore Visual corrente. In risposta a questo messaggio, una finestra cornice Ricalcola dell'area e consente di regolare altri parametri in base alle esigenze. Se si desidera ricevere una notifica questo evento, è possibile elaborare il messaggio AFX_WM_CHANGEVISUALMANAGER nell'applicazione. È necessario chiamare il gestore della classe di base (`OnChangeVisualManager`) per garantire che il framework della interno l'elaborazione di questo evento si verifica.|Non usato.|Non usato.|Non usato.|  
|AFX_WM_CHANGING_ACTIVE_TAB|Inviato per l'elemento padre di `CMFCTabCtrl` oggetto.  Per elaborare questo messaggio se si desidera ricevere notifiche da `CMFCTabCtrl` oggetti quando un utente Reimposta una scheda.|Indice della scheda che viene attivata.|Non usato.|Diverso da zero.|  
|AFX_WM_CHECKEMPTYMINIFRAME|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX_WM_CREATETOOLBAR|Inviato da `CMFCToolBarsListPropertyPage` quando un utente crea una nuova barra degli strumenti durante il processo di personalizzazione. È possibile elaborare questo messaggio per creare un'istanza di un oggetto personalizzato derivato CMFCToolBar. Se si gestisce questo messaggio e crea una barra degli strumenti personalizzata, è possibile omettere la chiamata al gestore predefinito.|Non usato.|Un puntatore a una stringa che contiene il nome della barra degli strumenti.|Puntatore alla barra degli strumenti appena creato. NULL indica che la creazione della barra degli strumenti è stata annullata.|  
|AFX_WM_CUSTOMIZEHELP|Inviato alla finestra cornice principale dalla finestra delle proprietà di personalizzazione `CMFCToolbarCustomize Dialog` quando l'utente preme il **Guida** pulsante o il tasto F1.|Specifica la pagina attiva della finestra delle proprietà di personalizzazione.|Un puntatore a un `CMFCToolbarCustomize Dialog` oggetto.|Zero.|  
|AFX_WM_CUSTOMIZETOOLBAR|Il `CMFCToolbarCustomize Dialog` invia il messaggio per informare il frame padre che l'utente crea una nuova barra degli strumenti.|`TRUE`Quando viene avviata la personalizzazione, `FALSE` al termine della personalizzazione.|Non usato.|Zero.|  
|AFX_WM_DELETETOOLBAR|Inviato alla finestra cornice principale quando l'utente sta per eliminare una barra degli strumenti nella modalità di personalizzazione.<br /><br /> Elaborare il messaggio per eseguire azioni aggiuntive quando un utente elimina una barra degli strumenti in modalità di personalizzazione. È inoltre necessario chiamare il gestore predefinito (`OnToolbarDelete`), che consente di eliminare la barra degli strumenti. Il gestore predefinito restituisce un valore che indica se è possibile eliminare la barra degli strumenti.|Non usato.|Puntatore a un `CMFCToolBar` oggetto da eliminare.|Diverso da zero se non è possibile eliminare una barra degli strumenti; in caso contrario 0.|  
|AFX_WM_GETDOCUMENTCOLORS|`CMFCColorMenuButton`Invia il messaggio alla finestra cornice principale per recuperare i colori del documento.|Non usato.|[in, out] Puntatore a un `CList<COLORREF, COLORREF>` oggetto.|Zero.|  
|AFX_WM_GETDRAGBOUNDS|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX_WM_HIGHLIGHT_RIBBON_LIST_ITEM|Inviato alla finestra cornice principale quando un utente evidenzia una voce di elenco della barra multifunzione.|Indice dell'elemento evidenziato|Un puntatore a`CMFCBaseRibbonElement`|Non usato.|  
|AFX_WM_ON_AFTER_SHELL_COMMAND|Inviato a un elemento padre di `CMFCShellListCtrl` o `CMFCShellTreeCtrl` controlla quando un utente termina l'esecuzione di un comando della shell.|L'ID di comando che l'utente ha eseguito|Non usato.|Se l'applicazione elabora il messaggio, deve restituire zero.|  
|AFX_WM_ON_BEFORE_SHOW_RIBBON_ITEM_MENU|Il framework invia il messaggio al padre della barra multifunzione prima di visualizzare il menu a comparsa. È possibile elaborare questo messaggio e modificare i menu a comparsa in qualsiasi momento.|Non usato.|Un puntatore a`CMFCBaseRibbonElement`|Non usato.|  
|AFX_WM_ON_CANCELTABMOVE|Solo per uso interno.|Non applicabile.|Non applicabile.||  
|AFX_WM_ON_CHANGE_RIBBON_CATEGORY|Quando l'utente modifica la categoria di controllo della barra multifunzione attiva, il framework invia il messaggio per la cornice principale.|Non usato.|Un puntatore al `CMFCRibbonBar` la cui categoria è stata modificata.|Non usato.|  
|AFX_WM_ON_CLOSEPOPUPWINDOW|Il framework invia il messaggio per informare il proprietario di `CMFCDesktopAlertWnd` che la finestra sta per essere chiuso.|Non usato.|Un puntatore a `CMFCDesktopAlertWnd` oggetto.|Non usato.|  
|AFX_WM_ON_DRAGCOMPLETE|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX_WM_ON_GET_TAB_TOOLTIP|Inviato alla finestra cornice principale quando una finestra scheda per visualizzare una descrizione comando per una scheda, se sono abilitate le descrizioni comandi personalizzate.|Non usato.|Un puntatore a un `CMFCTabToolTipInfo` struttura.|Non usato.|  
|AFX_WM_ON_HSCROLL|Inviato al controllo barra di controllo ridimensionabile. Per elaborare questo messaggio per ricevere notifiche da `CMFCTabCtrl` oggetti quando si verifica un evento di scorrimento nella barra di scorrimento orizzontale del widget a schede.|La parola meno significativa specifica un valore della barra di scorrimento che indica l'utente scorrevole richiesta.  Per ulteriori informazioni, vedere la tabella più avanti in questo argomento.|Non usato.|Diverso da zero.|  
|AFX_WM_ON_MOVE_TAB|Quando si trascina una scheda in una nuova posizione, inviato per l'elemento padre di una finestra a schede.|Indice in base zero della scheda nella posizione originale.|[out] Indice in base zero della scheda nella nuova posizione.|Zero.|  
|AFX_WM_ON_MOVETABCOMPLETE|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX_WM_ON_MOVETOTABGROUP|Inviato alla finestra cornice principale quando si sposta una finestra figlio MDI da un gruppo di scheda a un altro.|Handle di finestra a schede (`CMFCTabCtrl`) da cui è stata rimossa la finestra figlio MDI.|[out] Handle di finestra a schede (`CMFCTabCtrl`) a cui è stata inserita la finestra figlio MDI.|Ignorato.|  
|AFX_WM_ON_PRESS_CLOSE_BUTTON|Inviato a un elemento padre di `CDockablePane` quando utente fa clic il **Chiudi** pulsante con la didascalia della barra di controllo.|Non usato.|Un puntatore a un riquadro ancorato in cui l'utente ha selezionato il **Chiudi** pulsante.|`TRUE`Se un riquadro non può essere chiusa. in caso contrario FALSE.|  
|AFX_WM_ON_RENAME_TAB|Inviato per l'elemento padre della finestra a schede dell'utente alla ridenominazione di una scheda modificabile.|Indice in base zero della scheda rinominata.|[out] Un puntatore a una stringa che contiene il nome della nuova scheda.|Diverso da zero se l'applicazione elabora il messaggio; il framework eliminerà la chiamata a `CMFCBaseTabCtrl::SetTabLabel`.  Se viene restituito zero, quindi `CMFCBaseTabCtrl::SetTabLabel` viene chiamato dal framework.|  
|AFX_WM_ON_RIBBON_CUSTOMIZE|Inviato al frame padre quando si inizia la personalizzazione. Elaborare il messaggio se si desidera visualizzare la propria finestra di dialogo di personalizzazione.|Non usato.|Un puntatore per il controllo della barra multifunzione per essere personalizzati.|Diverso da zero se l'applicazione elabora il messaggio e visualizza una finestra di dialogo di personalizzazione. Se l'applicazione restituisce zero, il framework visualizzerà la finestra di dialogo di personalizzazione incorporate.|  
|AFX_WM_ON_TABGROUPMOUSEMOVE|Solo per uso interno.|Non applicabile.|Non applicabile.|Non applicabile.|  
|AFX_WM_POSTSETPREVIEWFRAME|Inviato notificare la cornice principale che l'utente ha modificato la modalità di anteprima di stampa|`TRUE`indica che è impostata la modalità di anteprima di stampa. `FALSE`indica che la modalità di anteprima di stampa è disabilitata.|Non usato.|Non usato.|  
|AFX_WM_PROPERTY_CHANGED|Inviato al proprietario del controllo griglia delle proprietà (`CMFCPropertyGridCtrl`) quando l'utente modifica il valore della proprietà selezionata.|L'ID di controllo dell'elenco di proprietà.|Un puntatore alla proprietà (`CMFCPropertyGridProperty`) modificata.|Non usato.|  
|AFX_WM_RESETCONTEXTMENU|Inviato alla finestra cornice principale quando l'utente Reimposta il menu di scelta rapida durante la personalizzazione.|L'ID di risorsa di menu di scelta rapida.|Un puntatore al menu di scelta rapida di corrente, `CMFCPopupMenu`.|Non usato.|  
|AFX_WM_RESETKEYBOARD|Quando l'utente Reimposta tutti i tasti di scelta rapida durante la personalizzazione, il framework invia il messaggio alla finestra cornice principale.|Non usato.|Non usato.|Non usato.|  
|AFX_WM_RESETMENU|Il framework invia il messaggio al proprietario del menu (una finestra cornice) quando l'utente Reimposta un menu di frame dell'applicazione durante la personalizzazione|L'ID di risorsa di menu.|Non usato.|Non usato.|  
|AFX_WM_RESETPROMPT|Il framework invia il messaggio quando l'utente Reimposta una barra degli strumenti nella barra degli strumenti finestra di dialogo Personalizza. Il gestore predefinito consente di visualizzare una finestra di messaggio che chiede se l'utente desidera reimpostare la barra degli strumenti.|Non usato.|Non usato.|Non usato.|  
|AFX_WM_RESETTOOLBAR|Oggetto `CMFCToolBar` oggetto invia il messaggio quando una barra degli strumenti viene ripristinato lo stato originale, vale a dire caricati dalle risorse. Elaborare il messaggio a reinserire i pulsanti della barra degli strumenti cui classi sono derivate da `CMFCToolbarButton`. Per altre informazioni, vedere `CMFCToolbarComboBoxButton`.|L'ID di risorsa di una barra degli strumenti il cui stato è stato ripristinato.|Non usato.|Zero.|  
|AFX_WM_SHOWREGULARMENU|`CMFCToolbarMenuButton`oggetto invia il messaggio al relativo proprietario quando l'utente sceglie un pulsante di menu regolari. Per elaborare questo messaggio ogni volta che si utilizza `CMFCToolbarMenuButton` per visualizzare un menu popup quando l'utente sceglie un pulsante.|L'ID di comando di un pulsante che invia il messaggio.|Coordinate dello schermo del cursore. La parola meno significativa specifica la coordinata x. La parola più significativa specifica la coordinata y.|Non usato.|  
|AFX_WM_TOOLBARMENU|Inviato alla finestra cornice principale quando l'utente rilascia il pulsante destro del mouse mentre il puntatore del mouse si trova nell'area non client di un riquadro o client.|Non usato.|Coordinate dello schermo del puntatore del mouse. La parola meno significativa specifica la coordinata x. La parola più significativa specifica la coordinata y.|Zero se l'applicazione elabora il messaggio; in caso contrario, diverso da zero.|  
|AFX_WM_UPDATETOOLTIPS|Inviato a tutti i proprietari della descrizione comando per indicare che i controlli descrizione comando devono essere ricreati.|Il tipo di controllo che deve elaborare questo messaggio. Vedere la tabella più avanti in questo argomento per un elenco di valori possibili.|Non usato.|Non usato.|  
|AFX_WM_WINDOW_HELP|`CMFCWindowsManagerDialog`Invia il messaggio per il frame padre quando l'utente fa clic il **Guida** pulsante o attivata la modalità della Guida facendo clic di **Guida** pulsante didascalia o il tasto F1.|Non usato.|Un puntatore all'istanza di `CMFCWindowsManagerDialog`.|Non usato.|  
  
 Nella tabella seguente vengono illustrati i valori per la parola meno significativa del `lParam` parametro del metodo AFX_WM_HSCROLL:  
  
|||  
|-|-|  
|Valore|Significato|  
|SB_ENDSCROLL|L'utente termina di scorrimento.|  
|SB_LEFT|L'utente scorre verso l'alto a sinistra.|  
|SB_RIGHT|L'utente scorre verso il basso a destra.|  
|SB_LINELEFT|L'utente scorre verso sinistra di un'unità.|  
|SB_LINERIGHT|L'utente scorre verso destra di un'unità.|  
|SB_PAGELEFT|L'utente scorre verso sinistra in base alla larghezza della finestra.|  
|SB_PAGERIGHT|L'utente scorre verso destra in base alla larghezza della finestra.|  
|SB_THUMBPOSITION|L'utente ha trascinato la casella di scorrimento (anteprima) e rilasciato il pulsante del mouse. La parola significativo indica la posizione della casella di scorrimento alla fine dell'operazione di trascinamento.|  
|SB_THUMBTRACK|L'utente sta trascinando la casella di scorrimento. Il messaggio AFX_WM_ON_HSCROLL viene inviato ripetutamente con questo valore fino a quando l'utente rilascia il pulsante del mouse. La parola significativo indica la posizione in cui è stata trascinata la casella di scorrimento.|  
  
> [!NOTE]
>  La parola più significativa del `lParam` parametro specifica la posizione corrente della casella di scorrimento, se la parola meno significativa è SB_THUMBPOSITION o SB_THUMBTRACK; in caso contrario, non viene utilizzata la parola.  
  
 Nella tabella seguente sono elencati i valori di flag per il `lParam` parametro del messaggio AFX_WM_UPDATETOOLTIPS:  
  
|||  
|-|-|  
|Flag|Valore|  
|AFX_TOOLTIP_TYPE_DEFAULT|0x0001|  
|AFX_TOOLTIP_TYPE_TOOLBAR|0x0002|  
|AFX_TOOLTIP_TYPE_TAB|0x0004|  
|AFX_TOOLTIP_TYPE_MINIFRAME|0x0008|  
|AFX_TOOLTIP_TYPE_DOCKBAR|0x0010|  
|AFX_TOOLTIP_TYPE_EDIT|0x0020|  
|AFX_TOOLTIP_TYPE_BUTTON|0x0040|  
|AFX_TOOLTIP_TYPE_TOOLBOX|0x0080|  
|AFX_TOOLTIP_TYPE_ALL|0xFFFF|  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
