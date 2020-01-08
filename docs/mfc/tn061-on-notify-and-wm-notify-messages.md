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
ms.openlocfilehash: aa1efb628ee45be3dfaee320cf64c4b2cbb91f04
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302237"
---
# <a name="tn061-on_notify-and-wm_notify-messages"></a>TN061: messaggi ON_NOTIFY e WM_NOTIFY

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota tecnica fornisce informazioni di base sul nuovo messaggio WM_NOTIFY e descrive la modalità consigliata e più comune per la gestione dei messaggi WM_NOTIFY nell'applicazione MFC.

**Messaggi di notifica in Windows 3. x**

In Windows 3. x, i controlli inviano notifiche ai padri degli eventi, ad esempio clic del mouse, modifiche al contenuto e alla selezione, e controllano il disegno dello sfondo inviando un messaggio all'elemento padre. Le notifiche semplici vengono inviate come messaggi speciali WM_COMMAND, con il codice di notifica, ad esempio BN_CLICKED, e con l'ID di controllo compresso in *wParam* e l'handle del controllo in *lParam*. Si noti che poiché *wParam* e *lParam* sono pieni, non esiste alcun modo per passare dati aggiuntivi. questi messaggi possono essere solo notifiche semplici. Nel BN_CLICKED notifica, ad esempio, non è possibile inviare informazioni sulla posizione del cursore del mouse quando si fa clic sul pulsante.

Quando i controlli in Windows 3. x devono inviare un messaggio di notifica che include dati aggiuntivi, usano un'ampia gamma di messaggi per scopi specifici, tra cui WM_CTLCOLOR, WM_VSCROLL, WM_HSCROLL, WM_DRAWITEM, WM_MEASUREITEM, WM_COMPAREITEM, WM_DELETEITEM WM_ CHARTOITEM, WM_VKEYTOITEM e così via. Questi messaggi possono essere riflessi al controllo che li ha inviati. Per ulteriori informazioni, vedere [TN062: Reflection del messaggio per i controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).

**Messaggi di notifica in Win32**

Per i controlli esistenti in Windows 3,1, l'API Win32 utilizza la maggior parte dei messaggi di notifica utilizzati in Windows 3. x. Tuttavia, Win32 aggiunge anche una serie di controlli sofisticati e complessi a quelli supportati in Windows 3. x. Spesso, questi controlli devono inviare dati aggiuntivi con i messaggi di notifica. Anziché aggiungere un nuovo **WM_** <strong>\*</strong> messaggio per ogni nuova notifica che necessita di dati aggiuntivi, le finestre di progettazione dell'API Win32 hanno scelto di aggiungere un solo messaggio, WM_NOTIFY, che può passare qualsiasi quantità di dati aggiuntivi in modo standardizzato.

WM_NOTIFY messaggi contengono l'ID del controllo che invia il messaggio in *wParam* e un puntatore a una struttura in *lParam*. Questa struttura è una struttura **NMHDR** o una struttura più grande con una struttura **NMHDR** come primo membro. Si noti che poiché il membro **NMHDR** è primo, un puntatore a questa struttura può essere utilizzato come puntatore a un **NMHDR** o come puntatore alla struttura più grande a seconda della modalità di cast.

Nella maggior parte dei casi, il puntatore punterà a una struttura più grande ed è necessario eseguirne il cast quando lo si usa. In poche notifiche, ad esempio le notifiche comuni (i cui nomi iniziano con **NM_**) e le notifiche TTN_SHOW e TTN_POP del controllo ToolTip, è una struttura **NMHDR** effettivamente usata.

La struttura **NMHDR** o il membro iniziale contiene l'handle e l'ID del controllo che invia il messaggio e il codice di notifica, ad esempio TTN_SHOW. Il formato della struttura **NMHDR** è illustrato di seguito:

```cpp
typedef struct tagNMHDR {
    HWND hwndFrom;
    UINT idFrom;
    UINT code;
} NMHDR;
```

Per un messaggio di TTN_SHOW, il membro del **codice** viene impostato su TTN_SHOW.

La maggior parte delle notifiche passa un puntatore a una struttura più grande che contiene una struttura **NMHDR** come primo membro. Si consideri, ad esempio, la struttura utilizzata dal messaggio di notifica LVN_KEYDOWN del controllo di visualizzazione elenco, che viene inviato quando si preme un tasto in un controllo di visualizzazione elenco. Il puntatore punta a una struttura di **LV_KEYDOWN** , definita come illustrato di seguito:

```cpp
typedef struct tagLV_KEYDOWN {
    NMHDR hdr;
    WORD wVKey;
    UINT flags;
} LV_KEYDOWN;
```

Si noti che poiché il membro **NMHDR** è il primo in questa struttura, è possibile eseguire il cast del puntatore passato al messaggio di notifica in un puntatore a un **NMHDR** o un puntatore a un **LV_KEYDOWN**.

**Notifiche comuni a tutti i nuovi controlli Windows**

Alcune notifiche sono comuni a tutti i nuovi controlli Windows. Queste notifiche passano un puntatore a una struttura **NMHDR** .

|Codice di notifica|Inviato perché|
|-----------------------|------------------|
|NM_CLICK|Clic con il pulsante sinistro del mouse sul controllo|
|NM_DBLCLK|Utente con doppio clic con il pulsante sinistro del mouse nel controllo|
|NM_RCLICK|Pulsante destro del mouse sull'utente selezionato nel controllo|
|NM_RDBLCLK|Pulsante destro del mouse sull'utente con doppio clic nel controllo|
|NM_RETURN|L'utente ha premuto il tasto INVIO mentre il controllo ha lo stato attivo per l'input|
|NM_SETFOCUS|Al controllo è stato assegnato lo stato attivo per l'input|
|NM_KILLFOCUS|Il controllo ha perso lo stato attivo per l'input|
|NM_OUTOFMEMORY|Il controllo non è riuscito a completare un'operazione perché la memoria disponibile non è sufficiente|

##  <a name="_mfcnotes_on_notify.3a_.handling_wm_notify_messages_in_mfc_applications"></a>ON_NOTIFY: gestione dei messaggi di WM_NOTIFY nelle applicazioni MFC

La funzione `CWnd::OnNotify` gestisce i messaggi di notifica. La relativa implementazione predefinita controlla la mappa messaggi per i gestori delle notifiche da chiamare. In generale, non è possibile eseguire l'override di `OnNotify`. Viene invece fornita una funzione di gestione e viene aggiunta una voce della mappa messaggi per tale gestore alla mappa messaggi della classe della finestra proprietaria.

ClassWizard, tramite la finestra delle proprietà ClassWizard, è in grado di creare la ON_NOTIFY voce della mappa messaggi e fornire una funzione di gestione scheletrica. Per altre informazioni sull'uso di ClassWizard per semplificare questa operazione, vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

La ON_NOTIFY macro della mappa messaggi presenta la sintassi seguente:

```cpp
ON_NOTIFY(wNotifyCode, id, memberFxn)
```

dove i parametri sono:

*wNotifyCode*<br/>
Codice per il messaggio di notifica da gestire, ad esempio LVN_KEYDOWN.

*ID*<br/>
Identificatore figlio del controllo per cui viene inviata la notifica.

*memberFxn*<br/>
Funzione membro da chiamare quando viene inviata la notifica.

La funzione membro deve essere dichiarata con il prototipo seguente:

```cpp
afx_msg void memberFxn(NMHDR* pNotifyStruct, LRESULT* result);
```

dove i parametri sono:

*pNotifyStruct*<br/>
Puntatore alla struttura di notifica, come descritto nella sezione precedente.

*result*<br/>
Puntatore al codice risultato che verrà impostato prima di restituire.

## <a name="example"></a>Esempio

Per specificare che la funzione membro `OnKeydownList1` gestire LVN_KEYDOWN messaggi dal `CListCtrl` il cui ID è `IDC_LIST1`, usare ClassWizard per aggiungere il codice seguente alla mappa messaggi:

```cpp
ON_NOTIFY(LVN_KEYDOWN, IDC_LIST1, OnKeydownList1)
```

Nell'esempio precedente la funzione fornita da ClassWizard è:

```cpp
void CMessageReflectionDlg::OnKeydownList1(NMHDR* pNMHDR, LRESULT* pResult)
{
    LV_KEYDOWN* pLVKeyDow = (LV_KEYDOWN*)pNMHDR;

    // TODO: Add your control notification handler
    //       code here

    *pResult = 0;
}
```

Si noti che ClassWizard fornisce automaticamente un puntatore del tipo appropriato. È possibile accedere alla struttura di notifica tramite *pNMHDR* o *pLVKeyDow*.

##  <a name="_mfcnotes_on_notify_range"></a>ON_NOTIFY_RANGE

Se è necessario elaborare lo stesso messaggio di WM_NOTIFY per un set di controlli, è possibile usare ON_NOTIFY_RANGE invece di ON_NOTIFY. Ad esempio, è possibile disporre di un set di pulsanti per i quali si desidera eseguire la stessa azione per un determinato messaggio di notifica.

Quando si utilizza ON_NOTIFY_RANGE, si specifica un intervallo contiguo di identificatori figlio per cui gestire il messaggio di notifica specificando gli identificatori figlio iniziali e finali dell'intervallo.

ClassWizard non gestisce ON_NOTIFY_RANGE; per usarlo, è necessario modificare manualmente la mappa messaggi.

La voce e il prototipo di funzione della mappa messaggi per ON_NOTIFY_RANGE sono i seguenti:

```cpp
ON_NOTIFY_RANGE(wNotifyCode, id, idLast, memberFxn)
```

dove i parametri sono:

*wNotifyCode*<br/>
Codice per il messaggio di notifica da gestire, ad esempio LVN_KEYDOWN.

*ID*<br/>
Primo identificatore nell'intervallo contiguo di identificatori.

*idLast*<br/>
Ultimo identificatore nell'intervallo contiguo di identificatori.

*memberFxn*<br/>
Funzione membro da chiamare quando viene inviata la notifica.

La funzione membro deve essere dichiarata con il prototipo seguente:

```cpp
afx_msg void memberFxn(UINT id, NMHDR* pNotifyStruct, LRESULT* result);
```

dove i parametri sono:

*ID*<br/>
Identificatore figlio del controllo che ha inviato la notifica.

*pNotifyStruct*<br/>
Puntatore alla struttura di notifica, come descritto in precedenza.

*result*<br/>
Puntatore al codice risultato che verrà impostato prima di restituire.

##  <a name="_mfcnotes_tn061_on_notify_ex.2c_.on_notify_ex_range"></a> ON_NOTIFY_EX, ON_NOTIFY_EX_RANGE

Se si desidera che più di un oggetto nel routing delle notifiche gestisca un messaggio, è possibile utilizzare ON_NOTIFY_EX (o ON_NOTIFY_EX_RANGE) anziché ON_NOTIFY (o ON_NOTIFY_RANGE). L'unica differenza tra la versione **ex** e la versione normale è che la funzione membro chiamata per la versione **ex** restituisce un valore **bool** che indica se l'elaborazione dei messaggi deve continuare. La restituzione di **false** da questa funzione consente di elaborare lo stesso messaggio in più di un oggetto.

ClassWizard non gestisce ON_NOTIFY_EX o ON_NOTIFY_EX_RANGE; Se si vuole usare uno di essi, è necessario modificare manualmente la mappa messaggi.

La voce e il prototipo di funzione della mappa messaggi per ON_NOTIFY_EX e ON_NOTIFY_EX_RANGE sono i seguenti. Il significato dei parametri è identico a quello delle versioni non**ex** .

```cpp
ON_NOTIFY_EX(nCode, id, memberFxn)
ON_NOTIFY_EX_RANGE(wNotifyCode, id, idLast, memberFxn)
```

Il prototipo per entrambi i precedenti è lo stesso:

```cpp
afx_msg BOOL memberFxn(UINT id, NMHDR* pNotifyStruct, LRESULT* result);
```

In entrambi i casi, *ID* include l'identificatore figlio del controllo che ha inviato la notifica.

La funzione deve restituire **true** se il messaggio di notifica è stato completamente gestito o **false** se altri oggetti nel routing dei comandi devono avere la possibilità di gestire il messaggio.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
