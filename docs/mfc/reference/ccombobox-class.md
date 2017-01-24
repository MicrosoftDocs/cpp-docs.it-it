---
title: "CComboBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComboBox (classe)"
  - "caselle combinate, CComboBox objects"
ms.assetid: 4e73b5df-0d2e-4658-9706-38133fb10513
caps.latest.revision: 25
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComboBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di una casella combinata di Windows.  
  
## Sintassi  
  
```  
class CComboBox : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBox::CComboBox](../Topic/CComboBox::CComboBox.md)|Costruisce un oggetto `CComboBox`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBox::AddString](../Topic/CComboBox::AddString.md)|Aggiunge una stringa all'elenco nella casella di riepilogo di una casella combinata, o alla posizione ordinata per le caselle di riepilogo con lo stile **CBS\_SORT**.|  
|[CComboBox::Clear](../Topic/CComboBox::Clear.md)|Elimina \(definito\) la selezione corrente, se presente, nel controllo di modifica.|  
|[CComboBox::CompareItem](../Topic/CComboBox::CompareItem.md)|Chiamato dal framework per determinare la posizione relativa di nuovo elemento di elenco in una casella combinata creata dal proprietario ordinata.|  
|[CComboBox::Copy](../Topic/CComboBox::Copy.md)|Copiare la selezione corrente, se presente, negli Appunti nel formato **CF\_TEXT**.|  
|[CComboBox::Create](../Topic/CComboBox::Create.md)|Crea la casella combinata e allegarlo all'oggetto `CComboBox`.|  
|[CComboBox::Cut](../Topic/CComboBox::Cut.md)|Elimina \(ridurre\) la selezione corrente, se presente, nel controllo di modifica in e copia il testo estratto gli Appunti nel formato **CF\_TEXT**.|  
|[CComboBox::DeleteItem](../Topic/CComboBox::DeleteItem.md)|Chiamato dal framework quando un elemento di elenco viene eliminato da una casella combinata creata dal proprietario.|  
|[CComboBox::DeleteString](../Topic/CComboBox::DeleteString.md)|Elimina una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::Dir](../Topic/CComboBox::Dir.md)|Aggiunge un elenco di nomi di file alla casella di riepilogo di una casella combinata.|  
|[CComboBox::DrawItem](../Topic/CComboBox::DrawItem.md)|Chiamato dal framework quando un aspetto visivo delle modifiche create dal proprietario di una casella combinata.|  
|[CComboBox::FindString](../Topic/CComboBox::FindString.md)|Cercare la prima stringa contenente il prefisso specificato nella casella di riepilogo di una casella combinata.|  
|[CComboBox::FindStringExact](../Topic/CComboBox::FindStringExact.md)|Cercare la prima stringa della casella di riepilogo in una casella combinata\) che corrisponde alla stringa specificata.|  
|[CComboBox::GetComboBoxInfo](../Topic/CComboBox::GetComboBoxInfo.md)|Recupera informazioni sull'oggetto `CComboBox`.|  
|[CComboBox::GetCount](../Topic/CComboBox::GetCount.md)|Recupera il numero di elementi della casella di riepilogo di una casella combinata.|  
|[CComboBox::GetCueBanner](../Topic/CComboBox::GetCueBanner.md)|Ottiene il testo per indicare che verrà visualizzato per una casella combinata.|  
|[CComboBox::GetCurSel](../Topic/CComboBox::GetCurSel.md)|Recupera l'indice dell'elemento attualmente selezionato, se presente, nella casella di riepilogo di una casella combinata.|  
|[CComboBox::GetDroppedControlRect](../Topic/CComboBox::GetDroppedControlRect.md)|Recupera le coordinate dello schermo \(rilasciato in basso\) della casella di riepilogo o di una casella combinata a discesa.|  
|[CComboBox::GetDroppedState](../Topic/CComboBox::GetDroppedState.md)|Determina se la casella di riepilogo di una casella combinata a discesa è visibile \(rilasciato giù\).|  
|[CComboBox::GetDroppedWidth](../Topic/CComboBox::GetDroppedWidth.md)|Recupera la larghezza minima per consentire la parte dell'elenco a discesa della casella combinata.|  
|[CComboBox::GetEditSel](../Topic/CComboBox::GetEditSel.md)|Ottiene le posizioni dei caratteri iniziale e finale della selezione corrente nel controllo di modifica di una casella combinata.|  
|[CComboBox::GetExtendedUI](../Topic/CComboBox::GetExtendedUI.md)|Determina se una casella combinata è l'interfaccia utente predefinita o l'interfaccia utente estesa.|  
|[CComboBox::GetHorizontalExtent](../Topic/CComboBox::GetHorizontalExtent.md)|Restituisce la larghezza in pixel che la parte di tipo casella di riepilogo della casella combinata può essere scorre orizzontalmente.|  
|[CComboBox::GetItemData](../Topic/CComboBox::GetItemData.md)|Recupera il valore a 32 bit applicazione fornito associato all'elemento casella combinata specificato.|  
|[CComboBox::GetItemDataPtr](../Topic/CComboBox::GetItemDataPtr.md)|Recupera il puntatore all'intera fornito a 32 bit associato all'elemento casella combinata specificato.|  
|[CComboBox::GetItemHeight](../Topic/CComboBox::GetItemHeight.md)|Recupera l'altezza voci di elenco in una casella combinata.|  
|[CComboBox::GetLBText](../Topic/CComboBox::GetLBText.md)|Ottiene una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::GetLBTextLen](../Topic/CComboBox::GetLBTextLen.md)|Ottiene la lunghezza di una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::GetLocale](../Topic/CComboBox::GetLocale.md)|Recupera l'identificatore impostazioni locali per una casella combinata.|  
|[CComboBox::GetMinVisible](../Topic/CComboBox::GetMinVisible.md)|Ottiene il numero minimo degli elementi visibili nell'elenco a discesa della casella combinata corrente.|  
|[CComboBox::GetTopIndex](../Topic/CComboBox::GetTopIndex.md)|Restituisce l'indice del primo elemento visibile nella parte di tipo casella di riepilogo della casella combinata.|  
|[CComboBox::InitStorage](../Topic/CComboBox::InitStorage.md)|Preassegna i blocchi di memoria per gli elementi e le stringhe della parte di tipo casella di riepilogo della casella combinata.|  
|[CComboBox::InsertString](../Topic/CComboBox::InsertString.md)|Inserisce una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::LimitText](../Topic/CComboBox::LimitText.md)|Limita la lunghezza del testo che l'utente può immettere nel controllo di modifica di una casella combinata.|  
|[CComboBox::MeasureItem](../Topic/CComboBox::MeasureItem.md)|Chiamato dal framework per determinare le dimensioni della casella combinata quando una casella combinata creata dal proprietario viene creata.|  
|[CComboBox::Paste](../Topic/CComboBox::Paste.md)|Inserisce i dati dagli Appunti nel controllo di modifica nella posizione corrente del cursore.  I dati vengono immessi solo se gli Appunti contengono dati nel formato **CF\_TEXT**.|  
|[CComboBox::ResetContent](../Topic/CComboBox::ResetContent.md)|Rimuove tutti gli elementi dalla casella di riepilogo e dal controllo di modifica di una casella combinata.|  
|[CComboBox::SelectString](../Topic/CComboBox::SelectString.md)|Cerca una stringa nella casella di riepilogo di una casella combinata e, se la stringa viene trovata, selezionare la stringa nella casella di riepilogo e copia della stringa nel controllo di modifica.|  
|[CComboBox::SetCueBanner](../Topic/CComboBox::SetCueBanner.md)|Imposta il testo di selezione di visualizzare per un controllo casella combinata.|  
|[CComboBox::SetCurSel](../Topic/CComboBox::SetCurSel.md)|Selezionare una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::SetDroppedWidth](../Topic/CComboBox::SetDroppedWidth.md)|Imposta la larghezza minima per consentire la parte dell'elenco a discesa della casella combinata.|  
|[CComboBox::SetEditSel](../Topic/CComboBox::SetEditSel.md)|Selezionare i caratteri nel controllo di modifica di una casella combinata.|  
|[CComboBox::SetExtendedUI](../Topic/CComboBox::SetExtendedUI.md)|Selezionare l'interfaccia utente predefinita o l'interfaccia utente estesa per una casella combinata con lo stile **CBS\_DROPDOWNLIST** o **CBS\_DROPDOWN**.|  
|[CComboBox::SetHorizontalExtent](../Topic/CComboBox::SetHorizontalExtent.md)|Imposta la larghezza in pixel che la parte di tipo casella di riepilogo della casella combinata può essere scorre orizzontalmente.|  
|[CComboBox::SetItemData](../Topic/CComboBox::SetItemData.md)|Imposta il valore a 32 bit associato con l'elemento specificato in una casella combinata.|  
|[CComboBox::SetItemDataPtr](../Topic/CComboBox::SetItemDataPtr.md)|Imposta il puntatore a 32 bit associato con l'elemento specificato in una casella combinata.|  
|[CComboBox::SetItemHeight](../Topic/CComboBox::SetItemHeight.md)|L'altezza voci di elenco in una casella combinata o l'altezza della parte elettricità\- testo o del controllo di modifica\) della casella combinata.|  
|[CComboBox::SetLocale](../Topic/CComboBox::SetLocale.md)|Imposta l'identificatore impostazioni locali per una casella combinata.|  
|[CComboBox::SetMinVisibleItems](../Topic/CComboBox::SetMinVisibleItems.md)|Imposta il numero minimo degli elementi visibili nell'elenco a discesa della casella combinata corrente.|  
|[CComboBox::SetTopIndex](../Topic/CComboBox::SetTopIndex.md)|Indica la parte di tipo casella di riepilogo della casella combinata di visualizzare l'elemento all'indice specificato all'inizio.|  
|[CComboBox::ShowDropDown](../Topic/CComboBox::ShowDropDown.md)|Mostra o nasconde la casella di riepilogo di una casella combinata con lo stile **CBS\_DROPDOWNLIST** o **CBS\_DROPDOWN**.|  
  
## Note  
 Una casella combinata è costituito da una casella di riepilogo combinata con un controllo statico o un controllo di modifica.  La parte di tipo casella di riepilogo del controllo può essere visualizzato sempre oppure solo menu a discesa quando l'utente seleziona la freccia a discesa accanto al controllo.  
  
 L'elemento attualmente selezionato \(se presenti\) nella casella di riepilogo vengono visualizzate in l o statica nel controllo di modifica.  Inoltre, se la casella combinata dispone dello stile dell'elenco a discesa, l'utente può immettere il carattere iniziale di uno degli elementi nell'elenco e la casella di riepilogo, se visibile, verrà evidenziato l'elemento seguente con il carattere iniziale.  
  
 Nella tabella seguente vengono confrontate tre la casella combinata [stili](../../mfc/reference/combo-box-styles.md).  
  
|Stile|Quando è la casella di riepilogo visibile?|Statico o controllo di modifica?|  
|-----------|------------------------------------------------|--------------------------------------|  
|Simple|Sempre|Edit|  
|Elenco a discesa|Una volta rilasciato giù|Edit|  
|Elenco a discesa|Una volta rilasciato giù|Static|  
  
 È possibile creare un oggetto `CComboBox` da un modello di finestra di dialogo o direttamente nel codice.  In entrambi i casi, chiamare prima il costruttore `CComboBox` per costruire l'oggetto `CComboBox` ; chiamare la funzione membro [Crea](../Topic/CComboBox::Create.md) per creare il controllo e per associarlo all'oggetto `CComboBox`.  
  
 Se si desidera gestire i messaggi di notifica di Windows inviati da una casella combinata al controllo padre \(in genere una classe derivata da `CDialog`\), aggiungere una voce della mappa messaggi e una funzione membro per la gestione dei messaggi nella classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi accetta il formato seguente:  
  
 Notifica**\(**`id`**,**`memberFxn`**\)**di**ON\_**  
  
 dove specifica `id` la finestra figlio ID del controllo casella combinata che invia una notifica e `memberFxn` è il nome della funzione membro che padre è stato scritto per gestire la notifica.  
  
 Il prototipo del padre è la seguente:  
  
 **afx\_msg** `void` `memberFxn` **\(**\);  
  
 L'ordine in cui verranno determinate notifiche inviate non può essere previsto.  In particolare, una notifica **CBN\_SELCHANGE** può verificarsi prima o dopo una notifica **CBN\_CLOSEUP**.  
  
 Le voci della mappa messaggi potenziali sono le seguenti:  
  
-   **ON\_CBN\_CLOSEUP** \(Windows 3.1 e versioni successive\). La casella di riepilogo di una casella combinata è chiusa.  Questo messaggio di notifica viene inviato per una casella combinata con lo stile [CBS\_SIMPLE](../../mfc/reference/combo-box-styles.md).  
  
-   **ON\_CBN\_DBLCLK** l'utente fa doppio clic su una stringa nella casella di riepilogo di una casella combinata.  Questo messaggio di notifica viene inviato solo per una casella combinata con lo stile **CBS\_SIMPLE**.  Per una casella combinata con lo stile [CBS\_DROPDOWNLIST](../../mfc/reference/combo-box-styles.md) o [CBS\_DROPDOWN](../../mfc/reference/combo-box-styles.md), quindi fare doppio clic non può verificarsi poiché un singolo clic su nasconde la casella di riepilogo.  
  
-   **ON\_CBN\_DROPDOWN** la casella di riepilogo di una casella combinata sta nel menu a discesa \(venga reso visibile\).  Questo messaggio di notifica può verificarsi solo per una casella combinata con lo stile **CBS\_DROPDOWNLIST** o **CBS\_DROPDOWN**.  
  
-   **ON\_CBN\_EDITCHANGE** l'utente ha intraprendere le azioni che possono modificare il testo nella parte del controllo di modifica della casella combinata.  A differenza del messaggio **CBN\_EDITUPDATE**, il messaggio viene inviato agli aggiornamenti di Windows lo schermo.  Non viene inviato se la casella combinata dispone dello stile **CBS\_DROPDOWNLIST**.  
  
-   **ON\_CBN\_EDITUPDATE** la parte del controllo di modifica casella combinata sta il testo modificato visualizzazione.  Questo messaggio di notifica viene inviato dopo che il controllo ha il testo formattato ma prima di visualizzare il testo.  Non viene inviato se la casella combinata dispone dello stile **CBS\_DROPDOWNLIST**.  
  
-   **ON\_CBN\_ERRSPACE** la casella combinata impossibile allocare memoria sufficiente per soddisfare una richiesta specifica.  
  
-   **ON\_CBN\_SELENDCANCEL** \(Windows 3.1 e versioni successive\). Indica che la selezione utente deve essere annullata.  L'utente fa clic su un elemento quindi fare clic su un'altra finestra o controllo per nascondere la casella di riepilogo di una casella combinata.  Questo messaggio di notifica viene inviato prima che il messaggio di notifica **CBN\_CLOSEUP** per indicare che la selezione utente deve essere ignorato.  Il messaggio di notifica **CBN\_SELENDOK** o **CBN\_SELENDCANCEL** viene inviato anche se il messaggio di notifica **CBN\_CLOSEUP** non viene inviato ad esempio nel caso di una casella combinata con lo stile **CBS\_SIMPLE** \).  
  
-   **ON\_CBN\_SELENDOK** l'utente seleziona un elemento e premere il tasto INVIO oppure scegliere il tasto FRECCIA GIÙ per nascondere la casella di riepilogo di una casella combinata.  Questo messaggio di notifica viene inviato prima che il messaggio **CBN\_CLOSEUP** per indicare che la selezione utente deve essere considerata valida.  Il messaggio di notifica **CBN\_SELENDOK** o **CBN\_SELENDCANCEL** viene inviato anche se il messaggio di notifica **CBN\_CLOSEUP** non viene inviato ad esempio nel caso di una casella combinata con lo stile **CBS\_SIMPLE** \).  
  
-   **ON\_CBN\_KILLFOCUS** la casella combinata è perdendo lo stato attivo per l'input.  
  
-   **ON\_CBN\_SELCHANGE** che la selezione nella casella di riepilogo di una casella combinata sta per essere modificato come risultato dell'utente fa clic su nella casella di riepilogo o che modifica la selezione utilizzando i tasti di direzione.  Nell'elaborare questo messaggio, il testo nel controllo di modifica della casella combinata è possibile recuperare solo tramite `GetLBText` o un'altra funzione simile.  `GetWindowText` non può essere utilizzato.  
  
-   **ON\_CBN\_SETFOCUS** la casella combinata riceve lo stato attivo per l'input.  
  
 Se si crea un oggetto `CComboBox` di una finestra di dialogo tramite una risorsa finestra di dialogo, l'oggetto `CComboBox` automaticamente eliminato quando l'utente chiude la finestra di dialogo.  
  
 Se si importa un oggetto `CComboBox` all'interno di un altro oggetto finestra, non è necessario distruggerlo.  Se si crea l'oggetto `CComboBox` nello stack, verrà automaticamente eliminato.  Se si crea l'oggetto `CComboBox` nell'heap mediante la funzione **new**, è necessario chiamare **delete** sull'oggetto per distruggerlo quando la casella combinata di Windows viene eliminato.  
  
 **Note** se si desidera gestire `WM_KEYDOWN` e messaggi `WM_CHAR`, è necessario sottoclasse i controlli di modifica e la casella di riepilogo casella combinata, derivare classi da `CEdit` e da `CListBox`e aggiungere i gestori per i messaggi alle classi derivate.  Per ulteriori informazioni, vedere [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;Q174667](http://support.microsoft.com/default.aspx?scid=kb;en-us;Q174667) e [CWnd::SubclassWindow](../Topic/CWnd::SubclassWindow.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CComboBox`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione in CTRLBARS](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [CScrollBar Class](../../mfc/reference/cscrollbar-class.md)   
 [CStatic Class](../../mfc/reference/cstatic-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)