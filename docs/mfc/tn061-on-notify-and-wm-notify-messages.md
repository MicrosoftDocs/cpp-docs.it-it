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
ms.openlocfilehash: 4afa05fa8bf21b6e324e9ac14a1b092933a99d55
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954422"
---
# <a name="tn061-onnotify-and-wmnotify-messages"></a>TN061: messaggi ON_NOTIFY e WM_NOTIFY
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota tecnica fornisce informazioni generali sul messaggio WM_NOTIFY nuova e viene descritta la modalità consigliata (e più comune) di gestione dei messaggi WM_NOTIFY MFC nell'applicazione in uso.  
  
 **I messaggi di notifica in Windows 3.x**  
  
 In Windows 3.x, controlli notificare padri di eventi, ad esempio clic del mouse, viene modificato nel contenuto e di selezione e di disegno dello sfondo del controllo inviando un messaggio per l'elemento padre. Le notifiche semplici vengono inviate come messaggi WM_COMMAND speciale, con il codice di notifica (ad esempio BN_CLICKED) e ID all'interno di controllo *wParam* e l'handle del controllo in *lParam*. Si noti che poiché *wParam* e *lParam* sono completa, non è possibile passare i dati aggiuntivi, questi messaggi possono essere solo la notifica semplice. Ad esempio, nella notifica BN_CLICKED non è alcuna possibilità di inviare informazioni sulla posizione del cursore del mouse quando è stato fatto clic sul pulsante.  
  
 Quando i controlli in Windows 3.x necessario inviano un messaggio di notifica che include dati aggiuntivi, usano un'ampia varietà di messaggi con scopi speciali, inclusi WM_CTLCOLOR WM_VSCROLL, WM_HSCROLL, WM_DRAWITEM, WM_MEASUREITEM, WM_COMPAREITEM, WM_DELETEITEM, WM _ CHARTOITEM WM_VKEYTOITEM e così via. Questi messaggi possono essere riflesse al controllo che li ha inviati. Per altre informazioni, vedere [TN062: Reflection messaggi per controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).  
  
 **Messaggi di notifica in Win32**  
  
 Per i controlli presenti in Windows 3.1, l'API Win32 utilizza la maggior parte dei messaggi di notifica che sono stati usati in Windows 3.x. Tuttavia, Win32 aggiunge anche numerosi controlli sofisticati e complessi a quelli supportati in Windows 3.x. Spesso, questi controlli necessario inviare dati aggiuntivi con i relativi messaggi di notifica. Invece di aggiungere un nuovo **WM\***  messaggio per ogni nuova notifica che richiede dati aggiuntivi, le finestre di progettazione dell'API Win32 scelto di aggiungere un solo messaggio, WM_NOTIFY, che è possibile passare qualsiasi valore di dati aggiuntivi in un modo standardizzato.  
  
 Messaggi WM_NOTIFY contengano l'ID del controllo che invia il messaggio *wParam* e un puntatore a una struttura in *lParam*. Questa struttura è un **NMHDR** struttura o una struttura più grande che si dispone di un' **NMHDR** struttura come il primo membro. Si noti che poiché il **NMHDR** è il primo membro, un puntatore alla struttura può essere utilizzato come un puntatore a un **NMHDR** o come un puntatore alla struttura di dimensioni maggiore a seconda del modo in cui è eseguirne il cast.  
  
 Nella maggior parte dei casi, l'indicatore di misura punterà a una struttura più ampia e sarà necessario eseguire il cast quando si utilizza. In solo alcune notifiche, ad esempio le notifiche comuni (i cui nomi iniziano con **NM_**) e lo strumento suggerimento del controllo TTN_SHOW e TTN_POP per le notifiche, è un **NMHDR** struttura effettivamente utilizzato.  
  
 Il **NMHDR** struttura o un membro iniziale contiene l'ID del controllo che invia il messaggio e il codice di notifica (ad esempio TTN_SHOW) e handle. Il formato del **NMHDR** struttura è illustrata di seguito:  
  
```  
typedef struct tagNMHDR {  
    HWND hwndFrom;  
    UINT idFrom;  
    UINT code;  
} NMHDR;  
```  
  
 Per un messaggio TTN_SHOW, il **codice** membro verrebbe impostato su TTN_SHOW.  
  
 La maggior parte delle notifiche passare un puntatore a una struttura più ampia che contiene un' **NMHDR** struttura come il primo membro. Ad esempio, considerare la struttura utilizzata dal messaggio di notifica LVN_KEYDOWN di controllo di visualizzazione elenco, viene inviato quando viene premuto un tasto in un controllo visualizzazione elenco. Il puntatore punta a un **LV_KEYDOWN** struttura, di cui è definito nel modo illustrato di seguito:  
  
```  
typedef struct tagLV_KEYDOWN {  
    NMHDR hdr;     
    WORD wVKey;    
    UINT flags;    
} LV_KEYDOWN;  
```  
  
 Si noti che poiché il **NMHDR** membro primo in questa struttura è possibile eseguire il cast di puntatore passati nel messaggio di notifica a un puntatore a un **NMHDR** o un puntatore a un **LV_KEYDOWN** .  
  
 **Le notifiche comuni a tutti i nuovi controlli di Windows**  
  
 Alcune notifiche sono comuni a tutti i nuovi controlli di Windows. Queste notifiche passare un puntatore a un **NMHDR** struttura.  
  
|Codice di notifica|Inviato perché|  
|-----------------------|------------------|  
|NM_CLICK|Utente ha fatto clic sul pulsante sinistro del mouse nel controllo|  
|NM_DBLCLK|Utente fa doppio clic su sinistro del mouse sul controllo|  
|NM_RCLICK|Utente ha fatto clic destro del mouse sul controllo.|  
|NM_RDBLCLK|Utente fa doppio clic sul pulsante nel controllo|  
|NM_RETURN|Utente ha premuto il tasto INVIO mentre controllo ha lo stato attivo di input|  
|NM_SETFOCUS|Controllo assegnato lo stato attivo|  
|NM_KILLFOCUS|Controllo ha perso lo stato attivo|  
|NM_OUTOFMEMORY|Controllo non è stato possibile completare un'operazione era disponibile memoria sufficiente|  
  
##  <a name="_mfcnotes_on_notify.3a_.handling_wm_notify_messages_in_mfc_applications"></a> ON_NOTIFY: La gestione dei messaggi WM_NOTIFY in applicazioni MFC  
 La funzione `CWnd::OnNotify` gestisce i messaggi di notifica. L'implementazione predefinita controlla la mappa messaggi per i gestori di notifica chiamare. In generale, non si esegue l'override `OnNotify`. Al contrario, si fornisca una funzione del gestore e aggiungere una voce della mappa messaggi per il gestore alla mappa messaggi della classe della finestra proprietaria.  
  
 ClassWizard, tramite la finestra delle proprietà di ClassWizard, è possibile creare la voce della mappa messaggi ON_NOTIFY e fornire una funzione del gestore scheletro. Per ulteriori informazioni sull'uso di ClassWizard per semplificare questa operazione, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
 La macro della mappa messaggi ON_NOTIFY presenta la sintassi seguente:  
  
```  
 
ON_NOTIFY(
wNotifyCode  ,  
id  ,
    memberFxn)  
 
```  
  
 i parametri in corsivo in cui verranno sostituiti con:  
  
 *wNotifyCode*  
 Il codice per il messaggio di notifica deve essere gestito, ad esempio LVN_KEYDOWN.  
  
 *ID*  
 Identificatore dell'elemento figlio del controllo per il quale viene inviata la notifica.  
  
 *memberFxn*  
 La funzione membro da chiamare quando questa notifica viene inviata.  
  
 La funzione membro deve essere dichiarata con il seguente prototipo:  
  
```  
 
afx_msg void  
memberFxn  
(NMHDR* 
pNotifyStruct  , LRESULT* result);

 
```  
  
## <a name="remarks"></a>Note  
 in cui i parametri in corsivo sono:  
  
 *pNotifyStruct*  
 Puntatore alla struttura di notifica, come descritto nella sezione precedente.  
  
 *Risultato*  
 Un puntatore per il codice di risultato imposterai prima della restituzione.  
  
## <a name="example"></a>Esempio  
 Per specificare che si desidera che la funzione membro `OnKeydownList1` per gestire i messaggi LVN_KEYDOWN dal `CListCtrl` il cui ID è `IDC_LIST1`, ClassWizard consente di aggiungere quanto segue alla mappa del messaggio:  
  
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
  
 Si noti che ClassWizard fornisce automaticamente un puntatore di tipo appropriato. È possibile accedere alla struttura di notifica tramite *pNMHDR viene convertito nel* oppure *pLVKeyDow*.  
  
##  <a name="_mfcnotes_on_notify_range"></a> ON_NOTIFY_RANGE  
 Se è necessario elaborare il messaggio WM_NOTIFY stesso per un set di controlli, è possibile utilizzare ON_NOTIFY_RANGE anziché a messaggi ON_NOTIFY. Ad esempio, è possibile una serie di pulsanti per il quale si desidera eseguire la stessa azione per un determinato messaggio di notifica.  
  
 Quando si utilizza ON_NOTIFY_RANGE, specificare un intervallo contiguo di identificatori figlio per cui si desidera gestire il messaggio di notifica specificando l'inizio e fine identificatori figlio dell'intervallo.  
  
 ClassWizard non gestisce ON_NOTIFY_RANGE; per utilizzarlo, è necessario modificare manualmente la mappa messaggi.  
  
 La voce della mappa messaggi e prototipo di funzione per ON_NOTIFY_RANGE sono i seguenti:  
  
```  
 
ON_NOTIFY_RANGE(
wNotifyCode  ,   
id  ,   
idLast  ,
    memberFxn)  
 
```  
  
 i parametri in corsivo in cui verranno sostituiti con:  
  
 *wNotifyCode*  
 Il codice per il messaggio di notifica deve essere gestito, ad esempio LVN_KEYDOWN.  
  
 *ID*  
 Il primo identificatore nell'intervallo contiguo di identificatori.  
  
 *idLast*  
 L'ultimo identificatore nell'intervallo contiguo di identificatori.  
  
 *memberFxn*  
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
 in cui i parametri in corsivo sono:  
  
 *ID*  
 Identificatore dell'elemento figlio del controllo che ha inviato la notifica.  
  
 *pNotifyStruct*  
 Puntatore alla struttura di notifica, come descritto in precedenza.  
  
 *Risultato*  
 Un puntatore per il codice di risultato imposterai prima della restituzione.  
  
##  <a name="_mfcnotes_tn061_on_notify_ex.2c_.on_notify_ex_range"></a> ON_NOTIFY_EX, ON_NOTIFY_EX_RANGE  
 Se si desidera più di un oggetto della notifica di routing per gestire un messaggio, è possibile utilizzare ON_NOTIFY_EX (o ON_NOTIFY_EX_RANGE) anziché messaggi ON_NOTIFY (o ON_NOTIFY_RANGE). L'unica differenza tra i **EX** versione e la versione regolare è che la funzione membro chiamata per il **EX** versione restituisce un **BOOL** che indica o meno l'elaborazione dei messaggi deve continuare. Restituzione **FALSE** da questa funzione consente di elaborare lo stesso messaggio in più di un oggetto.  
  
 ClassWizard non gestisce ON_NOTIFY_EX o ON_NOTIFY_EX_RANGE; Se si desidera utilizzare uno di essi, è necessario modificare manualmente la mappa messaggi.  
  
 La voce della mappa messaggi e prototipo di funzione per ON_NOTIFY_EX e ON_NOTIFY_EX_RANGE sono i seguenti. I significati dei parametri non sono uguali a quelli non**EX** versioni.  
  
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
  
 Il prototipo per entrambe le finestre è lo stesso:  
  
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
 In entrambi i casi *id* contiene l'identificatore dell'elemento figlio del controllo che ha inviato la notifica.  
  
 La funzione deve restituire **TRUE** se il messaggio di notifica è stata completamente gestito o **FALSE** se gli altri oggetti del routing dei comandi devono avere un'opportunità per gestire il messaggio.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

