---
title: 'TN061: Messaggi ON_NOTIFY e Wm_notify | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- ON_NOTIFY
- WM_NOTIFY
dev_langs:
- C++
helpviewer_keywords:
- ON_NOTIFY_EX message [MFC]
- TN061
- ON_NOTIFY message [MFC]
- ON_NOTIFY_EX_RANGE message [MFC]
- ON_NOTIFY_RANGE message [MFC]
- notification messages
- WM_NOTIFY message
ms.assetid: 04a96dde-7049-41df-9954-ad7bb5587caf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dc8e49ec04e1932c7bac4faa9a8737b480d8ef54
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33384736"
---
# <a name="tn061-onnotify-and-wmnotify-messages"></a>TN061: messaggi ON_NOTIFY e WM_NOTIFY
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota tecnica vengono fornite informazioni sul nuovo **WM_NOTIFY** messaggio e viene descritta la modalità consigliata (e più comune) di gestione **WM_NOTIFY** messaggi nell'applicazione MFC.  
  
 **I messaggi di notifica in Windows 3.x**  
  
 In Windows 3. x, i controlli notificare padri di eventi, ad esempio clic del mouse, viene modificato nel contenuto e di selezione e di disegno dello sfondo del controllo inviando un messaggio per l'elemento padre. Semplice notifiche speciali **WM_COMMAND** messaggi, con il codice di notifica (ad esempio **BN_CLICKED**) e ID all'interno di controllo `wParam` e l'handle del controllo in `lParam`. Si noti che poiché `wParam` e `lParam` sono full, non è possibile passare i dati aggiuntivi, questi messaggi possono essere solo la notifica semplice. Ad esempio, il **BN_CLICKED** notifica, non è possibile inviare informazioni sulla posizione del cursore del mouse quando è stato fatto clic sul pulsante.  
  
 Quando i controlli in Windows 3. x è necessario inviare un messaggio di notifica che include dati aggiuntivi, usano un'ampia varietà di messaggi speciali, tra cui `WM_CTLCOLOR`, `WM_VSCROLL`, `WM_HSCROLL`, `WM_DRAWITEM`, `WM_MEASUREITEM`, `WM_COMPAREITEM`, `WM_DELETEITEM`, `WM_CHARTOITEM`, `WM_VKEYTOITEM`e così via. Questi messaggi possono essere riflesse al controllo che li ha inviati. Per ulteriori informazioni, vedere [TN062: Reflection messaggi per controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).  
  
 **Messaggi di notifica in Win32**  
  
 Per i controlli presenti in Windows 3.1, l'API Win32 utilizza la maggior parte dei messaggi di notifica utilizzati in Windows 3. x. Tuttavia, Win32 aggiunge inoltre una serie di controlli sofisticate e complesse a quelli supportati in Windows 3. x. Spesso, questi controlli è necessario inviare dati aggiuntivi con i relativi messaggi di notifica. Invece di aggiungere un nuovo **WM _\***  messaggio per ogni nuova notifica che richiede dati aggiuntivi, le finestre di progettazione dell'API Win32 scelto di aggiungere un solo messaggio, **WM_NOTIFY**, che è possibile passare qualsiasi quantità di dati aggiuntivi in modo standardizzato.  
  
 **WM_NOTIFY** i messaggi contengono l'ID del controllo che invia il messaggio `wParam` e un puntatore a una struttura in `lParam`. Questa struttura è un **NMHDR** struttura o una struttura più grande che dispone di un **NMHDR** struttura come il primo membro. Si noti che poiché il **NMHDR** è il primo membro, un puntatore alla struttura può essere utilizzato come puntatore a un **NMHDR** o come un puntatore alla struttura di dimensioni maggiore a seconda di come si eseguirne il cast.  
  
 Nella maggior parte dei casi, l'indicatore di misura punterà a una struttura più ampia e sarà necessario eseguire il cast quando viene utilizzata. In solo alcune notifiche, ad esempio le notifiche comuni (i cui nomi iniziano con **NM_**) e il controllo descrizione comandi **TTN_SHOW** e **TTN_POP** notifiche, è un **NMHDR** struttura effettivamente utilizzato.  
  
 Il **NMHDR** struttura o un membro iniziale contiene l'handle e l'ID del controllo che invia il messaggio e il codice di notifica (ad esempio **TTN_SHOW**). Il formato del **NMHDR** struttura è illustrata di seguito:  
  
```  
typedef struct tagNMHDR {  
    HWND hwndFrom;  
    UINT idFrom;  
    UINT code;  
} NMHDR;  
```  
  
 Per un **TTN_SHOW** messaggio, il **codice** membro verrebbe impostato su **TTN_SHOW**.  
  
 La maggior parte delle notifiche passare un puntatore a una struttura più ampia che contiene un **NMHDR** struttura come il primo membro. Ad esempio, si consideri la struttura utilizzata per il controllo visualizzazione elenco **LVN_KEYDOWN** messaggio di notifica, viene inviato quando viene premuto un tasto in un controllo visualizzazione elenco. Il puntatore punta a un **LV_KEYDOWN** struttura, è definito come illustrato di seguito:  
  
```  
typedef struct tagLV_KEYDOWN {  
    NMHDR hdr;     
    WORD wVKey;    
    UINT flags;    
} LV_KEYDOWN;  
```  
  
 Si noti che poiché il **NMHDR** membro è il primo in questa struttura, il puntatore passati nel messaggio di notifica può essere convertito in un puntatore a un **NMHDR** o un puntatore a un **LV_KEYDOWN** .  
  
 **Le notifiche comuni a tutti i nuovi controlli di Windows**  
  
 Alcune notifiche sono comuni a tutti i nuovi controlli di Windows. Queste notifiche passare un puntatore a un **NMHDR** struttura.  
  
|Codice di notifica|Inviato quanto|  
|-----------------------|------------------|  
|**NM_CLICK**|Utente fa clic sul pulsante sinistro del mouse sul controllo|  
|**NM_DBLCLK**|Pulsante utente fa doppio clic sinistro del mouse sul controllo|  
|**NM_RCLICK**|Utente fa clic sul pulsante destro del mouse sul controllo|  
|**NM_RDBLCLK**|Utente fa doppio clic sul pulsante destro del controllo|  
|**NM_RETURN**|Utente ha premuto il tasto INVIO quando il controllo ha lo stato attivo di input|  
|**NM_SETFOCUS**|Controllo ha lo stato attivo di input|  
|**NM_KILLFOCUS**|Controllo ha perso lo stato attivo di input|  
|**NM_OUTOFMEMORY**|Controllo non ha completato un'operazione perché non era disponibile memoria sufficiente|  
  
##  <a name="_mfcnotes_on_notify.3a_.handling_wm_notify_messages_in_mfc_applications"></a> ON_NOTIFY: La gestione dei messaggi WM_NOTIFY in applicazioni MFC  
 La funzione `CWnd::OnNotify` gestisce i messaggi di notifica. L'implementazione predefinita controlla la mappa messaggi per i gestori di notifica chiamare. In generale, non sostituire `OnNotify`. Invece fornire una funzione del gestore e aggiungere una voce della mappa messaggi per il gestore alla mappa messaggi della classe della finestra proprietaria.  
  
 ClassWizard, tramite la finestra delle proprietà ClassWizard, possibile creare il `ON_NOTIFY` voce della mappa messaggi e di fornire una funzione del gestore di base. Per ulteriori informazioni sull'utilizzo di ClassWizard per semplificare questa operazione, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
 Il `ON_NOTIFY` macro della mappa messaggi presenta la seguente sintassi:  
  
```  
 
ON_NOTIFY(
wNotifyCode  ,  
id  ,
    memberFxn)  
 
```  
  
 i parametri in corsivo in cui vengono sostituiti con:  
  
 `wNotifyCode`  
 Il codice per il messaggio di notifica da gestire, ad esempio **LVN_KEYDOWN**.  
  
 `id`  
 Identificatore dell'elemento figlio del controllo per il quale viene inviata la notifica.  
  
 `memberFxn`  
 La funzione membro da chiamare quando questa notifica viene inviata.  
  
 La funzione membro deve essere dichiarata con il seguente prototipo:  
  
```  
 
afx_msg void  
memberFxn  
(NMHDR* 
pNotifyStruct  , LRESULT* result);

 
```  
  
## <a name="remarks"></a>Note  
 dove i parametri in corsivo sono:  
  
 `pNotifyStruct`  
 Puntatore alla struttura di notifica, come descritto nella sezione precedente.  
  
 *Risultato*  
 Un puntatore per il codice del risultato verrà impostata prima della restituzione.  
  
## <a name="example"></a>Esempio  
 Per specificare che si desidera che la funzione membro `OnKeydownList1` per gestire **LVN_KEYDOWN** messaggi dal `CListCtrl` il cui ID è `IDC_LIST1`, ClassWizard consentono di aggiungere il seguente alla mappa del messaggio:  
  
```  
ON_NOTIFY(LVN_KEYDOWN,
    IDC_LIST1,
    OnKeydownList1)  
```  
  
 Nell'esempio precedente, la funzione fornita da ClassWizard è:  
  
```  
void CMessageReflectionDlg::OnKeydownList1(NMHDR* pNMHDR, LRESULT* pResult)  
{  
    LV_KEYDOWN* pLVKeyDow = (LV_KEYDOWN*)pNMHDR; *// TODO: Add your control notification handler *//       code here  
 
 *pResult = 0;  
}  
```  
  
 Si noti che ClassWizard fornisce automaticamente un puntatore di tipo appropriato. È possibile accedere alla struttura di notifica tramite `pNMHDR` o `pLVKeyDow`.  
  
##  <a name="_mfcnotes_on_notify_range"></a> ON_NOTIFY_RANGE  
 Se è necessario elaborare lo stesso **WM_NOTIFY** messaggio per un set di controlli, è possibile utilizzare **ON_NOTIFY_RANGE** anziché `ON_NOTIFY`. Ad esempio, potrebbe essere una serie di pulsanti per il quale si desidera eseguire la stessa azione per un determinato messaggio di notifica.  
  
 Quando si utilizza **ON_NOTIFY_RANGE**, specificare un intervallo contiguo di identificatori figlio per cui si desidera gestire il messaggio di notifica che specifica l'inizio e fine identificatori figlio dell'intervallo.  
  
 Non consente di gestire ClassWizard **ON_NOTIFY_RANGE**; per utilizzarla, è necessario modificare manualmente la mappa messaggi.  
  
 Il prototipo di immissione e la funzione della mappa messaggi per **ON_NOTIFY_RANGE** sono i seguenti:  
  
```  
 
ON_NOTIFY_RANGE(
wNotifyCode  ,   
id  ,   
idLast  ,
    memberFxn)  
 
```  
  
 i parametri in corsivo in cui vengono sostituiti con:  
  
 `wNotifyCode`  
 Il codice per il messaggio di notifica da gestire, ad esempio **LVN_KEYDOWN**.  
  
 `id`  
 Il primo identificatore nell'intervallo contiguo di identificatori.  
  
 `idLast`  
 L'ultimo identificatore nell'intervallo contiguo di identificatori.  
  
 `memberFxn`  
 La funzione membro da chiamare quando questa notifica viene inviata.  
  
 La funzione membro deve essere dichiarata con il seguente prototipo:  
  
```  
 
afx_msg void  
memberFxn  
(UINT   
id  ,
    NMHDR* 
pNotifyStruct  ,
    LRESULT* result);

 
```  
  
## <a name="remarks"></a>Note  
 dove i parametri in corsivo sono:  
  
 `id`  
 Identificatore dell'elemento figlio del controllo che ha inviato la notifica.  
  
 `pNotifyStruct`  
 Puntatore alla struttura di notifica, come descritto in precedenza.  
  
 *Risultato*  
 Un puntatore per il codice del risultato verrà impostata prima della restituzione.  
  
##  <a name="_mfcnotes_tn061_on_notify_ex.2c_.on_notify_ex_range"></a> ON_NOTIFY_EX, ON_NOTIFY_EX_RANGE  
 Se si desidera più di un oggetto della notifica di routing per gestire un messaggio, è possibile utilizzare **ON_NOTIFY_EX** (o **ON_NOTIFY_EX_RANGE**) anziché `ON_NOTIFY` (o **ON_NOTIFY_RANGE** ). L'unica differenza tra il **EX** versione e la versione regolare è che la funzione membro chiamata per il **EX** versione restituisce un **BOOL** che indica se l'elaborazione del messaggio deve continuare. Restituzione di **FALSE** da questa funzione consente di elaborare lo stesso messaggio in più di un oggetto.  
  
 Non consente di gestire ClassWizard **ON_NOTIFY_EX** o **ON_NOTIFY_EX_RANGE**; se si desidera utilizzare una di esse, è necessario modificare manualmente la mappa messaggi.  
  
 Il prototipo di immissione e la funzione della mappa messaggi per **ON_NOTIFY_EX** e **ON_NOTIFY_EX_RANGE** sono i seguenti. I significati dei parametri non sono uguali a quelli non**EX** versioni.  
  
```  
 
ON_NOTIFY_EX(
nCode  ,  
id  ,
    memberFxn) ON_NOTIFY_EX_RANGE(
wNotifyCode  ,   
id  ,   
idLast  ,
    memberFxn)  
 
```  
  
 Il prototipo di entrambi gli elementi elencati sopra è lo stesso:  
  
```  
 
afx_msg BOOL  
memberFxn  
(UINT   
id  ,
    NMHDR* 
pNotifyStruct  ,
    LRESULT* result);

 
```  
  
## <a name="remarks"></a>Note  
 In entrambi i casi, `id` contiene l'identificatore dell'elemento figlio del controllo che ha inviato la notifica.  
  
 La funzione deve restituire **TRUE** se il messaggio di notifica è stata completamente gestito o **FALSE** se gli altri oggetti del routing dei comandi devono avere un'opportunità di gestire il messaggio.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

