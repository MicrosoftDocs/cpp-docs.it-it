---
title: "TN061: messaggi ON_NOTIFY e WM_NOTIFY | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_NOTIFY"
  - "WM_NOTIFY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messaggi di notifica"
  - "ON_NOTIFY (messaggio)"
  - "ON_NOTIFY_EX (messaggio)"
  - "ON_NOTIFY_EX_RANGE (messaggio)"
  - "ON_NOTIFY_RANGE (messaggio)"
  - "TN061"
  - "WM_NOTIFY (messaggio)"
ms.assetid: 04a96dde-7049-41df-9954-ad7bb5587caf
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# TN061: messaggi ON_NOTIFY e WM_NOTIFY
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota tecnica fornisce informazioni di background sul nuovo messaggio **WM\_NOTIFY** e descrive la modalità consigliata \(e più comune\) per gestire i messaggi **WM\_NOTIFY** nell'applicazione MFC.  
  
 **Messaggi di notifica in Windows 3.x**  
  
 In Windows 3.x, i controlli notificano ai relativi elementi padre di eventi quali i clic del mouse, le modifiche di contenuto e selezione e il controllo del disegno di sfondo inviando un messaggio al padre.  Le notifiche semplici sono inviate come messaggi **WM\_COMMAND** speciali, con il codice di notifica \(ad esempio **BN\_CLICKED**\) e l'id del controllo compressi in `wParam` e il gestore di controllo in `lParam`.  Si noti che se `wParam` e `lParam` sono pieni, non esiste un modo per passare dati aggiuntivi — questi messaggi possono essere solo notifiche semplici.  Ad esempio, nella notifica **BN\_CLICKED**, non è possibile inviare le informazioni sulla posizione del cursore del mouse quando il pulsante è stato cliccato.  
  
 Quando i controlli in Windows 3.x necessitano di inviare un messaggio di notifica che include dati aggiuntivi, utilizzano diversi messaggi con scopo specifico, inclusi `WM_CTLCOLOR`, `WM_VSCROLL`, `WM_HSCROLL`, `WM_DRAWITEM`, `WM_MEASUREITEM`, `WM_COMPAREITEM`, `WM_DELETEITEM`, `WM_CHARTOITEM`, `WM_VKEYTOITEM`, e così via.  Questi messaggi possono essere ritornati al controllo che li ha inviati.  Per ulteriori informazioni, vedere [TN062: Riflessione di messaggio per i controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).  
  
 **Messaggi di notifica in Win32**  
  
 Per i controlli presenti in Windows 3.1, le API di Win32 utilizzano la maggior parte dei messaggi di notifica utilizzati in Windows 3.x.  Tuttavia, Win32 aggiunge anche una serie di controlli sofisticati e complessi a quelli supportati in Windows 3.x.  Spesso, questi controlli necessitano di inviare dati aggiuntivi con i loro messaggi di notifica.  Anziché aggiungere un nuovo messaggio **WM\_\*** per ogni nuova notifica che necessita di dati aggiuntivi, le finestre di progettazione dell'API Win32 hanno scelto di aggiungere un solo messaggio, **WM\_NOTIFY**, che può passare qualsiasi quantità di dati aggiuntivi in un modo standard.  
  
 I messaggi **WM\_NOTIFY** contengono l'ID del controllo che invia il messaggio in `wParam` e un puntatore ad una struttura in `lParam`.  Questa struttura rappresenta una struttura **NMHDR** oppure una struttura più grande con una struttura **NMHDR** come primo membro.  Si noti che poiché il membro **NMHDR** è il primo, un puntatore a questa struttura può essere utilizzato come puntatore a **NMHDR** o come puntatore a una struttura più grande a seconda di come si esegue il cast.  
  
 Nella maggior parte dei casi, il puntatore punterà ad una struttura più grande e sarà necessario eseguirne il cast quando la si utilizza.  Solo in determinate notifiche, ad esempio le notifiche comuni \(dei cui nomi iniziano con **NM\_**\) e le notifiche di tool tip del controllo **TTN\_SHOW** e **TTN\_POP**, è una struttura **NMHDR** effettivamente utilizzata.  
  
 La struttura **NMHDR** o il membro iniziale contiene l'handle e l'ID del controllo che invia il messaggio e il codice di notifica \(ad esempio **TTN\_SHOW**\).  Il formato della struttura **NMHDR** è mostrato di seguito:  
  
```  
typedef struct tagNMHDR {  
    HWND hwndFrom;  
    UINT idFrom;  
    UINT code;  
} NMHDR;  
```  
  
 Per un messaggio **TTN\_SHOW**, il membro **codice** verrebbe impostato su **TTN\_SHOW**.  
  
 La maggior parte delle notifiche passano un puntatore ad una struttura più grande che contiene una struttura **NMHDR** come primo membro.  Ad esempio, si consideri la struttura utilizzata dal messaggio di notifica **LVN\_KEYDOWN** del controllo visualizzazione elenco, che viene inviato quando viene premuta una chiave in un controllo visualizzazione elenco.  Il puntatore punta ad una struttura **LV\_KEYDOWN**, definita come illustrato di seguito:  
  
```  
typedef struct tagLV_KEYDOWN {  
    NMHDR hdr;     
    WORD wVKey;    
    UINT flags;    
} LV_KEYDOWN;  
```  
  
 Si noti che poiché il membro **NMHDR** è il primo in questa struttura, il puntatore che viene passato nel messaggio di notifica può essere castato ad un puntatore **NMHDR** o un puntatore a **LV\_KEYDOWN**.  
  
 **Notifiche comuni a tutti i nuovi controlli Windows**  
  
 Alcune notifiche sono comuni a tutti i nuovi controlli Windows.  Queste notifiche passano un puntatore ad una struttura **NMHDR**.  
  
|Codice di notifica|Inviato perché|  
|------------------------|--------------------|  
|**NM\_CLICK**|L'utente ha fatto clic col pulsante sinistro del mouse sul controllo|  
|**NM\_DBLCLK**|L'utente ha fatto doppio clic col pulsante sinistro del mouse sul controllo|  
|**NM\_RCLICK**|L'utente ha fatto clic col pulsante destro del mouse sul controllo|  
|**NM\_RDBLCLK**|L'utente ha fatto doppio clic col pulsante destro del mouse sul controllo|  
|**NM\_RETURN**|L'utente ha premuto il tasto INVIO mentre il controllo ha lo stato attivo per l'input|  
|**NM\_SETFOCUS**|Il controllo ha ricevuto lo stato attivo per l'input|  
|**NM\_KILLFOCUS**|Il controllo ha perso lo stato attivo per l'input|  
|**NM\_OUTOFMEMORY**|Il controllo potrebbe non completare un'operazione perché non è disponibile memoria sufficiente|  
  
##  <a name="_mfcnotes_on_notify.3a_.handling_wm_notify_messages_in_mfc_applications"></a> ON\_NOTIFY: Messaggi di gestione WM\_NOTIFY nelle applicazioni MFC  
 La funzione `CWnd::OnNotify` gestisce i messaggi di notifica.  L'implementazione predefinita controlla la mappa messaggi per i gestori di notifica da chiamare.  In genere, non si esegue l'override di `OnNotify`.  Al contrario, si fornisce una funzione di gestione e si aggiunge una voce della mappa messaggi per tale gestore alla mappa messaggi della classe della finestra proprietaria.  
  
 ClassWizard, tramite il foglio delle proprietà di ClassWizard, si può creare la voce della mappa messaggi `ON_NOTIFY` e fornire una funzione di gestione di base.  Per ulteriori informazioni sull'utilizzo di ClassWizard per semplificare questa procedura, vedere [Mapping di messaggi su funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
 La macro della mappa messaggi `ON_NOTIFY` ha la seguente sintassi:  
  
```  
  
ON_NOTIFY( wNotifyCode, id, memberFxn )  
```  
  
 dove i parametri visualizzati in corsivo vengono sostituiti con:  
  
 `wNotifyCode`  
 Il codice del messaggio di notifica da gestire, come **LVN\_KEYDOWN**.  
  
 `id`  
 L'identificatore figlio del controllo per il quale la notifica viene inviata.  
  
 `memberFxn`  
 La funzione membro da chiamare quando questa notifica viene inviata.  
  
 La funzione membro deve essere dichiarata con il prototipo seguente:  
  
```  
  
afx_msg void memberFxn( NMHDR * pNotifyStruct, LRESULT * result );  
```  
  
## Note  
 dove i parametri visualizzati in corsivo sono:  
  
 `pNotifyStruct`  
 Un puntatore alla struttura di notifica, come descritto nella sezione precedente.  
  
 *result*  
 Un puntatore al codice di risultato impostato prima del completamento.  
  
## Esempio  
 Per specificare che si vuole che la funzione membro `OnKeydownList1` gestisca i messaggi **LVN\_KEYDOWN** da `CListCtrl` il cui ID è `IDC_LIST1`, si utilizza ClassWizard per aggiungere quanto segue alla mappa messaggi:  
  
```  
ON_NOTIFY( LVN_KEYDOWN, IDC_LIST1, OnKeydownList1 )  
```  
  
 Nell'esempio precedente, la funzione fornita da ClassWizard è:  
  
```  
void CMessageReflectionDlg::OnKeydownList1(NMHDR* pNMHDR, LRESULT* pResult)  
{  
   LV_KEYDOWN* pLVKeyDow = (LV_KEYDOWN*)pNMHDR;  
   // TODO: Add your control notification handler  
   //       code here  
  
   *pResult = 0;  
}  
```  
  
 Si noti che ClassWizard fornisce un puntatore del tipo appropriato automaticamente.  È possibile accedere alla struttura di notifica attraverso `pNMHDR` o `pLVKeyDow`.  
  
##  <a name="_mfcnotes_on_notify_range"></a> ON\_NOTIFY\_RANGE  
 Se è necessario elaborare lo stesso messaggio **WM\_NOTIFY** per un insieme di controlli, è possibile utilizzare **ON\_NOTIFY\_RANGE** anziché `ON_NOTIFY`.  Ad esempio, si può avere un insieme di pulsanti per i quali si desidera eseguire la stessa azione per un determinato messaggio di notifica.  
  
 Quando si utilizza **ON\_NOTIFY\_RANGE**, si specifica un intervallo contiguo di identificatori figlio per il quale gestire il messaggio di notifica specificando gli identificatori figlio di inizio e di fine dell'intervallo.  
  
 ClassWizard non gestisce **ON\_NOTIFY\_RANGE**; per utilizzarlo, è necessario modificare la mappa messaggi manualmente.  
  
 La voce mappa messaggio e il prototipo di funzione per **ON\_NOTIFY\_RANGE** sono come segue:  
  
```  
  
ON_NOTIFY_RANGE(   
wNotifyCode  
,   
id  
,   
idLast  
,   
memberFxn  
 )  
  
```  
  
 dove i parametri visualizzati in corsivo vengono sostituiti con:  
  
 `wNotifyCode`  
 Il codice del messaggio di notifica da gestire, come **LVN\_KEYDOWN**.  
  
 `id`  
 Il primo identificatore nell'intervallo contiguo di identificatori.  
  
 `idLast`  
 L'ultimo identificatore nell'intervallo contiguo di identificatori.  
  
 `memberFxn`  
 La funzione membro da chiamare quando questa notifica viene inviata.  
  
 La funzione membro deve essere dichiarata con il prototipo seguente:  
  
```  
  
afx_msg void memberFxn( UINT id, NMHDR * pNotifyStruct, LRESULT * result );  
```  
  
## Note  
 dove i parametri visualizzati in corsivo sono:  
  
 `id`  
 L'identificatore figlio del controllo che ha inviato la notifica.  
  
 `pNotifyStruct`  
 Un puntatore alla struttura di notifica, come descritto in precedenza.  
  
 *result*  
 Un puntatore al codice di risultato impostato prima del completamento.  
  
##  <a name="_mfcnotes_tn061_on_notify_ex.2c_.on_notify_ex_range"></a> ON\_NOTIFY\_EX, ON\_NOTIFY\_EX\_RANGE  
 Se si desidera più oggetti nel routing di notifica per gestire un messaggio, è possibile utilizzare **ON\_NOTIFY\_EX** \(o **ON\_NOTIFY\_EX\_RANGE**\) anziché `ON_NOTIFY` \(o **ON\_NOTIFY\_RANGE**\).  L'unica differenza tra la versione **EX** e la versione regolare è che la funzione membro chiamata per la versione **EX** restituisce un **BOOL** che indica se l'elaborazione dei messaggi deve continuare o no.  Restituendo **FALSE** da questa funzione consente di elaborare lo stesso messaggio in più di un oggetto.  
  
 ClassWizard non gestisce **ON\_NOTIFY\_EX** o **ON\_NOTIFY\_EX\_RANGE**; se si desidera utilizzare uno di essi, è necessario modificare la mappa messaggi manualmente.  
  
 La voce mappa messaggio e il prototipo di funzione per **ON\_NOTIFY\_EX** e **ON\_NOTIFY\_EX\_RANGE** sono indicati di seguito.  I significati dei parametri sono gli stessi delle versioni non\-**EX**.  
  
```  
  
ON_NOTIFY_EX( nCode, id, memberFxn ) ON_NOTIFY_EX_RANGE( wNotifyCode, id, idLast, memberFxn )  
```  
  
 Il prototipo per entrambi i precedenti è lo stesso:  
  
```  
  
afx_msg BOOL memberFxn( UINT id, NMHDR * pNotifyStruct, LRESULT * result );  
```  
  
## Note  
 In entrambi i casi, `id` tiene l'identificatore figlio del controllo che ha inviato le notifiche.  
  
 La funzione deve restituire **TRUE** se il messaggio di notifica è stato completamente gestito o **FALSE** se altri oggetti nel routing dei comandi hanno la possibilità di gestire il messaggio.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)