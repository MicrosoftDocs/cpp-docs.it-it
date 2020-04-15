---
title: 'TN061: messaggi ON_NOTIFY e WM_NOTIFY'
ms.date: 06/28/2018
helpviewer_keywords:
- ON_NOTIFY_EX message [MFC]
- TN061
- ON_NOTIFY message [MFC]
- ON_NOTIFY_EX_RANGE message [MFC]
- ON_NOTIFY_RANGE message [MFC]
- notification messages
- WM_NOTIFY message
ms.assetid: 04a96dde-7049-41df-9954-ad7bb5587caf
ms.openlocfilehash: 845558dad6b9f6e820c759cb83fce2c6cbceaa0c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366603"
---
# <a name="tn061-on_notify-and-wm_notify-messages"></a>TN061: messaggi ON_NOTIFY e WM_NOTIFY

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota tecnica vengono fornite informazioni di base sul nuovo messaggio WM_NOTIFY e viene descritto il modo consigliato (e più comune) di gestire i messaggi WM_NOTIFY nell'applicazione MFC.

**Messaggi di notifica in Windows 3.x**

In Windows 3.x i controlli notificano agli elementi padre eventi quali clic con il mouse, modifiche al contenuto e alla selezione e controllano il disegno in background inviando un messaggio all'elemento padre. Le notifiche semplici vengono inviate come messaggi speciali WM_COMMAND, con il codice di notifica (ad esempio BN_CLICKED) e l'ID di controllo compressi in *wParam* e l'handle del controllo in *lParam*. Si noti che poiché *wParam* e *lParam* sono pieni, non è possibile passare dati aggiuntivi: questi messaggi possono essere solo semplici notifiche. Ad esempio, nella notifica BN_CLICKED, non è possibile inviare informazioni sulla posizione del cursore del mouse quando si è fatto clic sul pulsante.

Quando i controlli in Windows 3.x devono inviare un messaggio di notifica che include dati aggiuntivi, usano una varietà di messaggi per scopi speciali, tra cui WM_CTLCOLOR, WM_VSCROLL, WM_HSCROLL, WM_DRAWITEM, WM_MEASUREITEM, WM_COMPAREITEM, WM_DELETEITEM, WM_CHARTOITEM, WM_VKEYTOITEM e così via. Questi messaggi possono essere riportati al controllo che li ha inviati. Per ulteriori informazioni, vedere [TN062: Riflessione dei messaggi per](../mfc/tn062-message-reflection-for-windows-controls.md)i controlli Windows .

**Messaggi di notifica in Win32**

Per i controlli esistenti in Windows 3.1, l'API Win32 utilizza la maggior parte dei messaggi di notifica utilizzati in Windows 3.x. Tuttavia, Win32 aggiunge anche una serie di controlli complessi e sofisticati a quelli supportati in Windows 3.x. Spesso, questi controlli devono inviare dati aggiuntivi con i messaggi di notifica. Anziché aggiungere un nuovo messaggio **di WM_** <strong>\*</strong> per ogni nuova notifica che richiede dati aggiuntivi, i progettisti dell'API Win32 hanno scelto di aggiungere un solo messaggio, WM_NOTIFY, che può passare qualsiasi quantità di dati aggiuntivi in modo standardizzato.

WM_NOTIFY messaggi di messaggi contengono l'ID del controllo che invia il messaggio in *wParam* e un puntatore a una struttura in *lParam*. Questa struttura è una struttura **NMHDR** o una struttura più grande che ha una struttura **NMHDR** come primo membro. Si noti che poiché il membro **NMHDR** è il primo, un puntatore a questa struttura può essere utilizzato come puntatore a un **NMHDR** o come puntatore alla struttura più grande a seconda di come si esegue il cast.

Nella maggior parte dei casi, il puntatore punterà a una struttura più grande e sarà necessario eseguire il cast quando lo si utilizza. Solo in poche notifiche, ad esempio le notifiche comuni (i cui nomi iniziano con **NM_**) e le notifiche TTN_SHOW e TTN_POP del controllo descrizione comandi del controllo descrizione comandi è una struttura **NMHDR** effettivamente utilizzata.

La struttura o il membro iniziale **NMHDR** contiene l'handle e l'ID del controllo che invia il messaggio e il codice di notifica (ad esempio TTN_SHOW). Il formato della struttura **NMHDR** è illustrato di seguito:

```cpp
typedef struct tagNMHDR {
    HWND hwndFrom;
    UINT idFrom;
    UINT code;
} NMHDR;
```

Per un messaggio TTN_SHOW, il membro del **codice** viene impostato su TTN_SHOW.

La maggior parte delle notifiche passa un puntatore a una struttura più grande che contiene una struttura **NMHDR** come primo membro. Si consideri, ad esempio, la struttura utilizzata dal messaggio di notifica LVN_KEYDOWN del controllo visualizzazione elenco, che viene inviato quando viene premuto un tasto in un controllo visualizzazione elenco. Il puntatore punta a una struttura **LV_KEYDOWN,** definita come illustrato di seguito:The pointer points to an LV_KEYDOWN structure, which is defined as shown below:

```cpp
typedef struct tagLV_KEYDOWN {
    NMHDR hdr;
    WORD wVKey;
    UINT flags;
} LV_KEYDOWN;
```

Si noti che poiché il membro **NMHDR** è il primo in questa struttura, è possibile eseguire il cast del puntatore passato nel messaggio di notifica a un puntatore a un **NMHDR** o a un puntatore a **un LV_KEYDOWN**.

**Notifiche comuni a tutti i nuovi controlli di Windows**

Alcune notifiche sono comuni a tutti i nuovi controlli di Windows.Some notifications are common to all of the new Windows controls. Queste notifiche passano un puntatore a una struttura **NMHDR.**

|Codice di notifica|Inviato perché|
|-----------------------|------------------|
|NM_CLICK|L'utente ha fatto clic con il pulsante sinistro del mouse nel controllo|
|NM_DBLCLK|L'utente ha fatto doppio clic con il pulsante sinistro del mouse nel controllo|
|NM_RCLICK|L'utente ha fatto clic con il pulsante destro del mouse nel controllo|
|NM_RDBLCLK|L'utente ha fatto doppio clic con il pulsante destro del mouse nel controllo|
|NM_RETURN|L'utente ha premuto il tasto INVIO mentre il controllo ha lo stato attivo per l'input|
|NM_SETFOCUS|Al controllo è stato assegnato lo stato attivo per l'input|
|NM_KILLFOCUS|Il controllo ha perso lo stato attivo per l'input|
|NM_OUTOFMEMORY|Impossibile completare un'operazione perché la memoria disponibile non è sufficiente|

## <a name="on_notify-handling-wm_notify-messages-in-mfc-applications"></a><a name="_mfcnotes_on_notify.3a_.handling_wm_notify_messages_in_mfc_applications"></a>ON_NOTIFY: gestione di messaggi di WM_NOTIFY nelle applicazioni MFC

La `CWnd::OnNotify` funzione gestisce i messaggi di notifica. L'implementazione predefinita controlla la mappa messaggi per i gestori di notifica da chiamare. In generale, non `OnNotify`si esegue l'override di . Si fornisce invece una funzione del gestore e si aggiunge una voce della mappa messaggi per tale gestore alla mappa messaggi della classe della finestra proprietaria.

ClassWizard, tramite la finestra delle proprietà di ClassWizard, può creare la ON_NOTIFY voce della mappa messaggi e fornire una funzione di gestione dello scheletro. Per ulteriori informazioni sull'utilizzo di ClassWizard per semplificare questa operazione, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

La ON_NOTIFY macro della mappa messaggi ha la sintassi seguente:

```cpp
ON_NOTIFY(wNotifyCode, id, memberFxn)
```

dove i parametri sono:

*wNotifyCode (codice wNotifyCode)*<br/>
Codice per il messaggio di notifica da gestire, ad esempio LVN_KEYDOWN.

*id*<br/>
Identificatore figlio del controllo per il quale viene inviata la notifica.

*memberFxn (parte utente)*<br/>
Funzione membro da chiamare quando viene inviata questa notifica.

La funzione membro deve essere dichiarata con il prototipo seguente:Your member function must be declared with the following prototype:

```cpp
afx_msg void memberFxn(NMHDR* pNotifyStruct, LRESULT* result);
```

dove i parametri sono:

*pNotifyStruct (Informazioni in base ai pNotify*<br/>
Puntatore alla struttura di notifica, come descritto nella sezione precedente.

*result*<br/>
Puntatore al codice del risultato che verrà impostato prima della restituzione.

## <a name="example"></a>Esempio

Per specificare che si `OnKeydownList1` desidera che la `CListCtrl` funzione `IDC_LIST1`membro gestisca LVN_KEYDOWN i messaggi dal cui ID è , utilizzare ClassWizard per aggiungere quanto segue alla mappa messaggi:

```cpp
ON_NOTIFY(LVN_KEYDOWN, IDC_LIST1, OnKeydownList1)
```

Nell'esempio precedente, la funzione fornita da ClassWizard è:In the example above, the function provided by ClassWizard is:

```cpp
void CMessageReflectionDlg::OnKeydownList1(NMHDR* pNMHDR, LRESULT* pResult)
{
    LV_KEYDOWN* pLVKeyDow = (LV_KEYDOWN*)pNMHDR;

    // TODO: Add your control notification handler
    //       code here

    *pResult = 0;
}
```

Si noti che ClassWizard fornisce automaticamente un puntatore del tipo corretto. È possibile accedere alla struttura di notifica tramite *pNMHDR* o *pLVKeyDow*.

## <a name="on_notify_range"></a><a name="_mfcnotes_on_notify_range"></a>ON_NOTIFY_RANGE

Se è necessario elaborare lo stesso WM_NOTIFY messaggio per un set di controlli, è possibile utilizzare ON_NOTIFY_RANGE anziché ON_NOTIFY. Ad esempio, è possibile disporre di un set di pulsanti per cui si desidera eseguire la stessa azione per un determinato messaggio di notifica.

Quando si utilizza ON_NOTIFY_RANGE, si specifica un intervallo contiguo di identificatori figlio per cui gestire il messaggio di notifica specificando gli identificatori figlio iniziale e finale dell'intervallo.

ClassWizard non gestisce ON_NOTIFY_RANGE; per utilizzarlo, è necessario modificare la mappa messaggi manualmente.

La voce della mappa messaggi e il prototipo di funzione per ON_NOTIFY_RANGE sono i seguenti:

```cpp
ON_NOTIFY_RANGE(wNotifyCode, id, idLast, memberFxn)
```

dove i parametri sono:

*wNotifyCode (codice wNotifyCode)*<br/>
Codice per il messaggio di notifica da gestire, ad esempio LVN_KEYDOWN.

*id*<br/>
Primo identificatore nell'intervallo contiguo di identificatori.

*idUltimo*<br/>
Ultimo identificatore nell'intervallo contiguo di identificatori.

*memberFxn (parte utente)*<br/>
Funzione membro da chiamare quando viene inviata questa notifica.

La funzione membro deve essere dichiarata con il prototipo seguente:Your member function must be declared with the following prototype:

```cpp
afx_msg void memberFxn(UINT id, NMHDR* pNotifyStruct, LRESULT* result);
```

dove i parametri sono:

*id*<br/>
Identificatore figlio del controllo che ha inviato la notifica.

*pNotifyStruct (Informazioni in base ai pNotify*<br/>
Puntatore alla struttura di notifica, come descritto in precedenza.

*result*<br/>
Puntatore al codice del risultato che verrà impostato prima della restituzione.

## <a name="on_notify_ex-on_notify_ex_range"></a><a name="_mfcnotes_tn061_on_notify_ex.2c_.on_notify_ex_range"></a>ON_NOTIFY_EX, ON_NOTIFY_EX_RANGE

Se si desidera che più oggetti nel routing delle notifiche gestiscano un messaggio, è possibile utilizzare ON_NOTIFY_EX (o ON_NOTIFY_EX_RANGE) anziché ON_NOTIFY (o ON_NOTIFY_RANGE). L'unica differenza tra la versione **EX** e la versione normale è che la funzione membro chiamata per la versione **EX** restituisce un **BOOL** che indica se l'elaborazione dei messaggi deve continuare o meno. La restituzione di **FALSE** da questa funzione consente di elaborare lo stesso messaggio in più oggetti.

ClassWizard non gestisce ON_NOTIFY_EX o ON_NOTIFY_EX_RANGE; se si desidera utilizzare uno di essi, è necessario modificare la mappa messaggi manualmente.

La voce della mappa messaggi e il prototipo di funzione per ON_NOTIFY_EX e ON_NOTIFY_EX_RANGE sono i seguenti. I significati dei parametri sono gli stessi delle versioni non**EX.**

```cpp
ON_NOTIFY_EX(nCode, id, memberFxn)
ON_NOTIFY_EX_RANGE(wNotifyCode, id, idLast, memberFxn)
```

Il prototipo per entrambi i precedenti è lo stesso:

```cpp
afx_msg BOOL memberFxn(UINT id, NMHDR* pNotifyStruct, LRESULT* result);
```

In entrambi i casi, *id* contiene l'identificatore figlio del controllo che ha inviato la notifica.

La funzione deve restituire **TRUE** se il messaggio di notifica è stato completamente gestito o **FALSE** se altri oggetti nel routing dei comandi devono avere la possibilità di gestire il messaggio.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
