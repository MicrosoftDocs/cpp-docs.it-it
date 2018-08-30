---
title: 'TN061: Messaggi ON_NOTIFY e Wm_notify | Microsoft Docs'
ms.custom: ''
ms.date: 06/28/2018
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
ms.openlocfilehash: 5d2f1259227fa8d27778dbf0e40b13f5460b7041
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43218785"
---
# <a name="tn061-onnotify-and-wmnotify-messages"></a>TN061: messaggi ON_NOTIFY e WM_NOTIFY

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota tecnica vengono fornite informazioni sul nuovo messaggio WM_NOTIFY e viene descritta la modalità consigliata (e più comune) di gestione dei messaggi WM_NOTIFY nell'applicazione MFC.

**I messaggi di notifica in Windows 3.x**

In Windows 3.x, controlli notificare padri di eventi, ad esempio clic del mouse, viene modificato nel contenuto e di selezione e di disegno dello sfondo del controllo inviando un messaggio per l'elemento padre. Notifiche semplice vengono inviate come messaggi WM_COMMAND speciali, con il codice di notifica (ad esempio BN_CLICKED) e controllare l'ID raggruppate *wParam* e l'handle del controllo nella *lParam*. Si noti che, essendo *wParam* e *lParam* sono completa, non è possibile passare dati aggiuntivi, questi messaggi possono essere solo notifica semplice. Ad esempio, nella notifica BN_CLICKED, non vi è alcuna possibilità di inviare informazioni sulla posizione del cursore del mouse quando è stato scelto il pulsante.

Quando i controlli in Windows 3.x necessario inviano un messaggio di notifica che include dati aggiuntivi, usano un'ampia varietà di messaggi con scopi speciali, tra cui WM_CTLCOLOR, WM_VSCROLL, WM_HSCROLL, WM_DRAWITEM, WM_MEASUREITEM, WM_COMPAREITEM, WM_DELETEITEM, WM _ CHARTOITEM WM_VKEYTOITEM e così via. Questi messaggi possono essere riflesse al controllo che li ha inviati. Per altre informazioni, vedere [TN062: Reflection messaggi per i controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).

**Messaggi di notifica in Win32**

Per i controlli presenti in Windows 3.1, l'API Win32 utilizza la maggior parte dei messaggi di notifica che sono stati usati in Windows 3.x. Tuttavia, Win32 aggiunge anche alcuni controlli sofisticati e complessi di quelle supportate in Windows 3.x. Spesso, questi controlli devono inviare dati aggiuntivi con i relativi messaggi di notifica. Invece di aggiungere una nuova **WM _** <strong>\*</strong> del messaggio per ogni nuova notifica che necessita di ulteriori dati, le finestre di progettazione dell'API Win32 ha scelto di aggiungere un solo messaggio WM_NOTIFY, che può passare qualsiasi quantità di dati aggiuntivi in una modalità standardizzata.

WM_NOTIFY messaggi contengono l'ID del controllo che invia il messaggio *wParam* e un puntatore a una struttura nel *lParam*. Questa struttura può essere un' **NMHDR** struttura o una struttura più grande che dispone di un **NMHDR** struttura come il primo membro. Si noti che, essendo il **NMHDR** membro è il primo, un puntatore a questa struttura può essere utilizzato come un puntatore a un **NMHDR** o come un puntatore alla struttura di dimensioni maggiori a seconda del modo in cui è eseguirne il cast.

Nella maggior parte dei casi, l'indicatore di misura punterà a una struttura di dimensioni maggiori e sarà necessario eseguire il cast quando viene usata. In solo pochi notifiche, ad esempio le notifiche più comuni (i cui nomi iniziano con **NM_**) e lo strumento di suggerimento del controllo TTN_SHOW e TTN_POP notifiche, è un **NMHDR** struttura effettivamente usato.

Il **NMHDR** struttura o un membro iniziale contiene l'handle e l'ID del controllo che invia il messaggio e il codice di notifica (ad esempio TTN_SHOW). Il formato del **NMHDR** struttura è la seguente:

```cpp
typedef struct tagNMHDR {
    HWND hwndFrom;
    UINT idFrom;
    UINT code;
} NMHDR;
```

Per un messaggio TTN_SHOW, il **codice** TTN_SHOW verrebbe impostato membro.

La maggior parte delle notifiche passare un puntatore a una struttura di dimensioni maggiori che contiene un' **NMHDR** struttura come il primo membro. Ad esempio, si consideri la struttura utilizzata dal messaggio di notifica LVN_KEYDOWN del controllo visualizzazione elenco, viene inviato quando viene premuto un tasto in un controllo visualizzazione elenco. Il puntatore punta a un **LV_KEYDOWN** struttura, che viene definito come illustrato di seguito:

```cpp
typedef struct tagLV_KEYDOWN {
    NMHDR hdr;
    WORD wVKey;
    UINT flags;
} LV_KEYDOWN;
```

Si noti che, essendo il **NMHDR** membro è la primo in questa struttura, il puntatore è passato nel messaggio di notifica può essere convertito in un puntatore a un **NMHDR** o un puntatore a un **LV_KEYDOWN** .

**Le notifiche comuni a tutti i nuovi controlli di Windows**

Alcune notifiche sono comuni a tutti i nuovi controlli di Windows. Queste notifiche passare un puntatore a un **NMHDR** struttura.

|Codice di notifica|Inviato quanto|
|-----------------------|------------------|
|NM_CLICK|Utente fa clic sul pulsante sinistro del mouse sul controllo|
|NM_DBLCLK|Pulsante utente sinistro fare doppio clic del mouse sul controllo|
|NM_RCLICK|Utente fa clic sul pulsante destro del mouse sul controllo|
|NM_RDBLCLK|Pulsante utente fa doppio clic sul pulsante destro del mouse sul controllo|
|NM_RETURN|Utente ha premuto il tasto INVIO, mentre il controllo ha lo stato attivo di input|
|NM_SETFOCUS|Controllo è stato assegnato lo stato attivo|
|NM_KILLFOCUS|Controllo ha perso lo stato attivo|
|NM_OUTOFMEMORY|Controllo non è stato possibile completare un'operazione perché non era disponibile memoria sufficiente|

##  <a name="_mfcnotes_on_notify.3a_.handling_wm_notify_messages_in_mfc_applications"></a> ON_NOTIFY: La gestione dei messaggi WM_NOTIFY in applicazioni MFC

La funzione `CWnd::OnNotify` gestisce i messaggi di notifica. L'implementazione predefinita controlla la mappa messaggi per i gestori di notifica da chiamare. In generale, non ignorare `OnNotify`. In alternativa, fornire una funzione del gestore e aggiungere una voce della mappa messaggi per tale gestore alla mappa messaggi della classe della finestra proprietaria.

ClassWizard, tramite la finestra delle proprietà ClassWizard, è possibile creare la voce della mappa messaggi ON_NOTIFY e fornire una funzione del gestore scheletro. Per altre informazioni sull'uso di ClassWizard per semplificare questa operazione, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

La macro della mappa messaggi ON_NOTIFY presenta la sintassi seguente:

```cpp
ON_NOTIFY(wNotifyCode, id, memberFxn)
```

dove i parametri sono:

*wNotifyCode*  
 Il codice per il messaggio di notifica da gestire, ad esempio LVN_KEYDOWN.

*ID*  
 L'identificatore dell'elemento figlio del controllo per il quale viene inviata la notifica.

*memberFxn*  
 La funzione membro da chiamare quando la notifica viene inviata.

La funzione membro deve essere dichiarata con il seguente prototipo:

```cpp
afx_msg void memberFxn(NMHDR* pNotifyStruct, LRESULT* result);
```

dove i parametri sono:

*pNotifyStruct*  
 Puntatore alla struttura di notifica, come descritto nella sezione precedente.

*Risultato*  
 Un puntatore al codice di risultato imposterai prima della restituzione.

## <a name="example"></a>Esempio

Per specificare che si desidera che la funzione membro `OnKeydownList1` per gestire i messaggi LVN_KEYDOWN dal `CListCtrl` il cui ID è `IDC_LIST1`, ClassWizard consente di aggiungere il codice seguente alla mappa del messaggio:

```cpp
ON_NOTIFY(LVN_KEYDOWN, IDC_LIST1, OnKeydownList1)
```

Nell'esempio precedente, la funzione fornita da ClassWizard è:

```cpp
void CMessageReflectionDlg::OnKeydownList1(NMHDR* pNMHDR, LRESULT* pResult)
{
    LV_KEYDOWN* pLVKeyDow = (LV_KEYDOWN*)pNMHDR;
    
    // TODO: Add your control notification handler
    //       code here

    *pResult = 0;
}
```

Si noti che la creazione guidata classe fornisce un puntatore di tipo corretto automaticamente. È possibile accedere alla struttura di notifica tramite uno *pNMHDR viene convertito nel* oppure *pLVKeyDow*.

##  <a name="_mfcnotes_on_notify_range"></a> ON_NOTIFY_RANGE

Se è necessario elaborare il messaggio WM_NOTIFY stesso per un set di controlli, è possibile usare ON_NOTIFY_RANGE anziché a messaggi ON_NOTIFY. Ad esempio, potrebbe essere un set di pulsanti per il quale si desidera eseguire la stessa azione per un determinato messaggio di notifica.

Quando si usa ON_NOTIFY_RANGE, specificare un intervallo contiguo di identificatori figlio per cui si desidera gestire il messaggio di notifica che specifica l'inizio e fine identificatori figlio dell'intervallo.

ClassWizard non gestisce ON_NOTIFY_RANGE; per usarla, è necessario modificare manualmente la mappa messaggi.

La voce nella mappa messaggi e prototipo di funzione per ON_NOTIFY_RANGE sono i seguenti:

```cpp
ON_NOTIFY_RANGE(wNotifyCode, id, idLast, memberFxn)
```

dove i parametri sono:

*wNotifyCode*  
 Il codice per il messaggio di notifica da gestire, ad esempio LVN_KEYDOWN.

*ID*  
 Il primo identificatore nell'intervallo contiguo di identificatori.

*idLast*  
 L'ultimo identificatore nell'intervallo contiguo di identificatori.

*memberFxn*  
 La funzione membro da chiamare quando la notifica viene inviata.

La funzione membro deve essere dichiarata con il seguente prototipo:

```cpp
afx_msg void memberFxn(UINT id, NMHDR* pNotifyStruct, LRESULT* result);
```

dove i parametri sono:

*ID*  
 L'identificatore dell'elemento figlio del controllo che riceve la notifica.

*pNotifyStruct*  
 Puntatore alla struttura di notifica, come descritto in precedenza.

*Risultato*  
 Un puntatore al codice di risultato imposterai prima della restituzione.

##  <a name="_mfcnotes_tn061_on_notify_ex.2c_.on_notify_ex_range"></a> ON_NOTIFY_EX, ON_NOTIFY_EX_RANGE

Se si vuole più di un oggetto della notifica di routing per gestire un messaggio, è possibile utilizzare ON_NOTIFY_EX (o ON_NOTIFY_EX_RANGE) anziché messaggi ON_NOTIFY (o ON_NOTIFY_RANGE). L'unica differenza tra il **EX** versione e la versione normale è che la funzione membro chiamata per il **EX** versione restituisce un **BOOL** che indica o meno l'elaborazione dei messaggi deve continuare. Restituzione **FALSE** da questa funzione consente di elaborare lo stesso messaggio in più di un oggetto.

ClassWizard non gestisce ON_NOTIFY_EX o ON_NOTIFY_EX_RANGE; Se si desidera usare una di esse, è necessario modificare manualmente la mappa messaggi.

La voce nella mappa messaggi e prototipo di funzione per ON_NOTIFY_EX e ON_NOTIFY_EX_RANGE sono i seguenti. I significati dei parametri sono gli stessi non**EX** versioni.

```cpp
ON_NOTIFY_EX(nCode, id, memberFxn)
ON_NOTIFY_EX_RANGE(wNotifyCode, id, idLast, memberFxn)
```

Il prototipo per entrambe le finestre è la stessa:

```cpp
afx_msg BOOL memberFxn(UINT id, NMHDR* pNotifyStruct, LRESULT* result);
```

In entrambi i casi *id* contiene l'identificatore dell'elemento figlio del controllo che riceve la notifica.

La funzione deve restituire **TRUE** se il messaggio di notifica è stata completamente gestito oppure **FALSE** se altri oggetti nel routing dei comandi devono avere la possibilità di gestire il messaggio.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  
