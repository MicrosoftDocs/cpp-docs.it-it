---
title: "CListBox Class | Microsoft Docs"
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
  - "CListBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CListBox (classe)"
  - "caselle di riepilogo"
ms.assetid: 7ba3c699-c286-4cd9-9066-532c41ec05d1
caps.latest.revision: 26
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CListBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di una casella di riepilogo di Windows.  
  
## Sintassi  
  
```  
class CListBox : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListBox::CListBox](../Topic/CListBox::CListBox.md)|Costruisce un oggetto `CListBox`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListBox::AddString](../Topic/CListBox::AddString.md)|Aggiunge una stringa a una casella di riepilogo.|  
|[CListBox::CharToItem](../Topic/CListBox::CharToItem.md)|Override per fornire `WM_CHAR` personalizzato che gestisce per le caselle di riepilogo del disegno personalizzato che non dispongono di stringhe.|  
|[CListBox::CompareItem](../Topic/CListBox::CompareItem.md)|Chiamato dal framework per determinare la posizione di un nuovo elemento in una casella di riepilogo ordinata del disegno personalizzato.|  
|[CListBox::Create](../Topic/CListBox::Create.md)|Crea la casella di riepilogo di Windows e allegarlo all'oggetto `CListBox`.|  
|[CListBox::DeleteItem](../Topic/CListBox::DeleteItem.md)|Chiamato dal framework quando l'utente rimuove un elemento da una casella di riepilogo Owner Draw.|  
|[CListBox::DeleteString](../Topic/CListBox::DeleteString.md)|Elimina una stringa di una casella di riepilogo.|  
|[CListBox::Dir](../Topic/CListBox::Dir.md)|Aggiunge i nomi file, unità, entrambi nella directory corrente a una casella di riepilogo.|  
|[CListBox::DrawItem](../Topic/CListBox::DrawItem.md)|Chiamato dal framework quando un aspetto visivo di una casella di riepilogo del disegno personalizzato.|  
|[CListBox::FindString](../Topic/CListBox::FindString.md)|Cerca una stringa in una casella di riepilogo.|  
|[CListBox::FindStringExact](../Topic/CListBox::FindStringExact.md)|Cercare la prima stringa della casella di riepilogo che corrisponde a una stringa specificata.|  
|[CListBox::GetAnchorIndex](../Topic/CListBox::GetAnchorIndex.md)|Recupera l'indice in base zero dell'elemento corrente di ancoraggio in una casella di riepilogo.|  
|[CListBox::GetCaretIndex](../Topic/CListBox::GetCaretIndex.md)|Determina il valore dell'elemento che presenta il rettangolo di attivazione in una casella di riepilogo a selezione multipla.|  
|[CListBox::GetCount](../Topic/CListBox::GetCount.md)|Restituisce il numero di stringhe in una casella di riepilogo.|  
|[CListBox::GetCurSel](../Topic/CListBox::GetCurSel.md)|Restituisce l'indice in base zero della stringa selezionata in una casella di riepilogo.|  
|[CListBox::GetHorizontalExtent](../Topic/CListBox::GetHorizontalExtent.md)|Restituisce la larghezza in pixel di una casella di riepilogo può essere scorre orizzontalmente.|  
|[CListBox::GetItemData](../Topic/CListBox::GetItemData.md)|Restituisce il valore a 32 bit associato all'elemento della casella di riepilogo.|  
|[CListBox::GetItemDataPtr](../Topic/CListBox::GetItemDataPtr.md)|Restituisce un puntatore a un elemento della casella di riepilogo.|  
|[CListBox::GetItemHeight](../Topic/CListBox::GetItemHeight.md)|Determina l'altezza degli elementi in una casella di riepilogo.|  
|[CListBox::GetItemRect](../Topic/CListBox::GetItemRect.md)|Restituisce il rettangolo di delimitazione dell'elemento della casella di riepilogo mentre attualmente visualizzate.|  
|[CListBox::GetListBoxInfo](../Topic/CListBox::GetListBoxInfo.md)|Recupera il numero di elementi di colonna.|  
|[CListBox::GetLocale](../Topic/CListBox::GetLocale.md)|Recupera l'identificatore impostazioni locali per una casella di riepilogo.|  
|[CListBox::GetSel](../Topic/CListBox::GetSel.md)|Restituisce lo stato di selezione di un elemento della casella di riepilogo.|  
|[CListBox::GetSelCount](../Topic/CListBox::GetSelCount.md)|Restituisce il numero di stringhe attualmente selezionate in una casella di riepilogo a selezione multipla.|  
|[CListBox::GetSelItems](../Topic/CListBox::GetSelItems.md)|Restituisce gli indici di stringhe attualmente selezionate in una casella di riepilogo.|  
|[CListBox::GetText](../Topic/CListBox::GetText.md)|Copia un elemento della casella di riepilogo in un buffer.|  
|[CListBox::GetTextLen](../Topic/CListBox::GetTextLen.md)|Restituisce la lunghezza in byte di un elemento della casella di riepilogo.|  
|[CListBox::GetTopIndex](../Topic/CListBox::GetTopIndex.md)|Restituisce l'indice della prima stringa visibile in una casella di riepilogo.|  
|[CListBox::InitStorage](../Topic/CListBox::InitStorage.md)|Preassegna i blocchi di memoria per gli elementi e le stringhe della casella di riepilogo.|  
|[CListBox::InsertString](../Topic/CListBox::InsertString.md)|Inserisce una stringa a una posizione specifica in una casella di riepilogo.|  
|[CListBox::ItemFromPoint](../Topic/CListBox::ItemFromPoint.md)|Restituisce l'indice dell'elemento della casella di riepilogo il più vicino un punto.|  
|[CListBox::MeasureItem](../Topic/CListBox::MeasureItem.md)|Chiamato dal framework quando una casella di riepilogo Owner Draw viene creata per determinare le dimensioni della casella di riepilogo.|  
|[CListBox::ResetContent](../Topic/CListBox::ResetContent.md)|Rimuove tutte le voci di una casella di riepilogo.|  
|[CListBox::SelectString](../Topic/CListBox::SelectString.md)|Le ricerche di e selezionare una stringa in una casella di riepilogo a selezione singola.|  
|[CListBox::SelItemRange](../Topic/CListBox::SelItemRange.md)|Seleziona o deseleziona un intervallo delle stringhe in una casella di riepilogo a selezione multipla.|  
|[CListBox::SetAnchorIndex](../Topic/CListBox::SetAnchorIndex.md)|Impostare l'ancoraggio in una casella di riepilogo a selezione multipla per avviare una selezione estesa.|  
|[CListBox::SetCaretIndex](../Topic/CListBox::SetCaretIndex.md)|Imposta il rettangolo di attivazione all'elemento all'indice specificato in una casella di riepilogo a selezione multipla.|  
|[CListBox::SetColumnWidth](../Topic/CListBox::SetColumnWidth.md)|Impostare la larghezza di una casella di riepilogo a più colonne.|  
|[CListBox::SetCurSel](../Topic/CListBox::SetCurSel.md)|Selezionare una stringa della casella di riepilogo.|  
|[CListBox::SetHorizontalExtent](../Topic/CListBox::SetHorizontalExtent.md)|Imposta la larghezza in pixel di una casella di riepilogo può essere scorre orizzontalmente.|  
|[CListBox::SetItemData](../Topic/CListBox::SetItemData.md)|Imposta il valore a 32 bit associato all'elemento della casella di riepilogo.|  
|[CListBox::SetItemDataPtr](../Topic/CListBox::SetItemDataPtr.md)|Imposta un puntatore all'elemento della casella di riepilogo.|  
|[CListBox::SetItemHeight](../Topic/CListBox::SetItemHeight.md)|L'altezza degli elementi in una casella di riepilogo.|  
|[CListBox::SetLocale](../Topic/CListBox::SetLocale.md)|Imposta l'identificatore impostazioni locali per una casella di riepilogo.|  
|[CListBox::SetSel](../Topic/CListBox::SetSel.md)|Seleziona o deseleziona un elemento della casella di riepilogo in una casella di riepilogo a selezione multipla.|  
|[CListBox::SetTabStops](../Topic/CListBox::SetTabStops.md)|Imposta le posizioni tabstop in una casella di riepilogo.|  
|[CListBox::SetTopIndex](../Topic/CListBox::SetTopIndex.md)|Imposta l'indice in base zero della prima stringa visibile in una casella di riepilogo.|  
|[CListBox::VKeyToItem](../Topic/CListBox::VKeyToItem.md)|Override per fornire `WM_KEYDOWN` personalizzato che gestisce per le caselle di riepilogo con il set di stile **LBS\_WANTKEYBOARDINPUT**.|  
  
## Note  
 Una casella di riepilogo viene visualizzato un elenco di elementi, quali nomi file, che l'utente può visualizzare e selezionare.  
  
 In una casella di riepilogo a selezione singola, l'utente può selezionare solo un elemento.  In una casella di riepilogo a selezione multipla, un intervallo di elementi selezionabili.  Quando l'utente seleziona un elemento, viene evidenziato e la casella di riepilogo invia un messaggio di notifica alla finestra padre.  
  
 È possibile creare una casella di riepilogo da un modello di finestra di dialogo o direttamente nel codice.  Per crearla direttamente, costruire l'oggetto `CListBox`, quindi chiamare la funzione membro [Crea](../Topic/CListBox::Create.md) per creare il controllo casella di riepilogo di Windows e per associarlo all'oggetto `CListBox`.  Per utilizzare una casella di riepilogo in un modello di finestra di dialogo, dichiarare una variabile della casella di riepilogo nella classe della finestra di dialogo, quindi utilizzare `DDX_Control` nella funzione `DoDataExchange` della classe della finestra di dialogo per connettersi la variabile membro al controllo.  Questa operazione viene eseguita automaticamente quando si aggiunge una variabile di controllo alla classe della finestra di dialogo.\)  
  
 La costruzione può essere un processo una fase in una classe derivata da `CListBox`.  Scrivere un costruttore per la classe derivata e chiamare **Crea** dal costruttore.  
  
 Se si desidera gestire i messaggi di notifica di Windows inviati da una casella di riepilogo al controllo padre \(in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)\), aggiungere una voce della mappa messaggi e una funzione membro per la gestione dei messaggi nella classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi accetta il formato seguente:  
  
 `ON_Notification( id, memberFxn )`  
  
 dove specifica `id` la finestra figlio ID del controllo casella di riepilogo che invia una notifica e `memberFxn` è il nome della funzione membro che padre è stato scritto per gestire la notifica.  
  
 Il prototipo del padre è la seguente:  
  
 `afx_msg void memberFxn( );`  
  
 Segue un elenco di voci della mappa messaggi potenziali e una descrizione dei casi in cui verrà inviata al padre:  
  
-   **ON\_LBN\_DBLCLK** l'utente fa doppio clic su una stringa in una casella di riepilogo.  Solo una casella di riepilogo con lo stile [LBS\_NOTIFY](../../mfc/reference/list-box-styles.md) invierà il messaggio di notifica.  
  
-   **ON\_LBN\_ERRSPACE** la casella di riepilogo impossibile allocare memoria sufficiente per soddisfare la richiesta.  
  
-   **ON\_LBN\_KILLFOCUS** la casella di riepilogo viene perdendo lo stato attivo per l'input.  
  
-   **ON\_LBN\_SELCANCEL** la selezione corrente della casella di riepilogo viene annullato.  Questo messaggio viene inviato solo quando una casella di riepilogo con lo stile **LBS\_NOTIFY**.  
  
-   **ON\_LBN\_SELCHANGE** che la selezione nella casella di riepilogo viene modificato.  Questa notifica non viene inviata se la selezione viene modificata dalla funzione membro [CListBox::SetCurSel](../Topic/CListBox::SetCurSel.md).  Questa notifica viene applicato solo a una casella di riepilogo con lo stile **LBS\_NOTIFY**.  Il messaggio di notifica **LBN\_SELCHANGE** viene inviato per una casella di riepilogo a selezione multipla quando l'utente preme un tasto di direzione, anche se la selezione non cambia.  
  
-   **ON\_LBN\_SETFOCUS** la casella di riepilogo riceve lo stato attivo per l'input.  
  
-   **ON\_WM\_CHARTOITEM** una casella di riepilogo Owner Draw che non dispone di stringhe riceve un messaggio `WM_CHAR`.  
  
-   La casella di riepilogo di**ON\_WM\_VKEYTOITEM** con lo stile **LBS\_WANTKEYBOARDINPUT** riceve un messaggio `WM_KEYDOWN`.  
  
 Se si crea un oggetto `CListBox` di una finestra di dialogo tramite una risorsa finestra di dialogo, l'oggetto `CListBox` automaticamente eliminato quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un oggetto `CListBox` interno di una finestra, potrebbe essere necessario distruggere l'oggetto `CListBox`.  Se si crea l'oggetto `CListBox` nello stack, verrà automaticamente eliminato.  Se si crea l'oggetto `CListBox` nell'heap mediante la funzione **new**, è necessario chiamare **delete** sull'oggetto per distruggerlo quando l'utente chiude la finestra padre.  
  
 Se allocare memoria in qualsiasi oggetto `CListBox`, eseguire l'override del distruttore `CListBox` per disporre di allocazione.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CListBox`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione CTRLTEST](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CScrollBar Class](../../mfc/reference/cscrollbar-class.md)   
 [CStatic Class](../../mfc/reference/cstatic-class.md)