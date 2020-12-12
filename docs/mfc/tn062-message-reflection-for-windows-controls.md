---
description: 'Altre informazioni su: TN062: reflection dei messaggi per i controlli Windows'
title: 'TN062: reflection messaggi per controlli Windows'
ms.date: 06/28/2018
f1_keywords:
- vc.controls.messages
helpviewer_keywords:
- ON_WM_VKEYTOITEM_REFLECT macro [MFC]
- ON_WM_DRAWITEM_REFLECT macro [MFC]
- ON_WM_VSCROLL_REFLECT macro [MFC]
- ON_NOTIFY_REFLECT message [MFC]
- ON_CONTROL_REFLECT_EX macro [MFC]
- ON_UPDATE_COMMAND_UI_REFLECT macro [MFC]
- ON_NOTIFY_REFLECT_EX message [MFC]
- ON_WM_HSCROLL_REFLECT macro [MFC]
- message reflection [MFC]
- ON_WM_COMPAREITEM_REFLECT macro [MFC]
- ON_WM_MEASUREITEM_REFLECT macro [MFC]
- ON_NOTIFY message [MFC]
- WM_COMMAND [MFC]
- WM_CTLCOLOR message [MFC]
- TN062 [MFC]
- ON_WM_CHARTOITEM_REFLECT macro [MFC]
- ON_WM_CTLCOLOR_REFLECT macro [MFC]
- ON_WM_DELETEITEM_REFLECT macro [MFC]
- notification messages [MFC]
- ON_WM_PARENTNOTIFY_REFLECT macro [MFC]
- WM_NOTIFY message [MFC]
- ON_CONTROL_REFLECT macro
ms.assetid: 53efb0ba-fcda-4fa0-a3c7-14e0b78fb494
ms.openlocfilehash: 9dc106c1513032e654acfc2c4b86b8eb3b939578
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214728"
---
# <a name="tn062-message-reflection-for-windows-controls"></a>TN062: reflection messaggi per controlli Windows

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota tecnica descrive la reflection del messaggio, una nuova funzionalità di MFC 4,0. Contiene inoltre istruzioni per la creazione di un semplice controllo riutilizzabile che utilizza la reflection del messaggio.

Questa nota tecnica non illustra la reflection del messaggio applicata ai controlli ActiveX (in precedenza denominati controlli OLE). Vedere l'articolo [controlli ActiveX: sottoclasse di un controllo Windows](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).

**Descrizione della reflection del messaggio**

I controlli Windows inviano spesso messaggi di notifica alle finestre padre. Molti controlli inviano ad esempio un messaggio di notifica del colore di controllo (WM_CTLCOLOR o una delle relative varianti) al rispettivo elemento padre per consentire all'elemento padre di fornire un pennello per disegnare lo sfondo del controllo.

In Windows e in MFC prima della versione 4,0, la finestra padre, spesso una finestra di dialogo, è responsabile della gestione di questi messaggi. Questo significa che il codice per la gestione del messaggio deve trovarsi nella classe della finestra padre e deve essere duplicato in ogni classe che deve gestire il messaggio. Nel caso precedente, ogni finestra di dialogo che desiderava controllare con sfondi personalizzati avrebbe dovuto gestire il messaggio di notifica del colore del controllo. Sarebbe molto più semplice riutilizzare il codice se fosse possibile scrivere una classe di controllo che gestirebbe il proprio colore di sfondo.

In MFC 4,0, il meccanismo precedente funziona ancora: le finestre padre possono gestire i messaggi di notifica. Tuttavia, MFC 4,0 facilita il riutilizzo fornendo una funzionalità denominata "Reflection del messaggio" che consente di gestire i messaggi di notifica nella finestra del controllo figlio o nella finestra padre oppure in entrambi. Nell'esempio relativo al colore di sfondo del controllo è ora possibile scrivere una classe del controllo che imposta il proprio colore di sfondo gestendo il messaggio WM_CTLCOLOR riflesso, il tutto senza basarsi sull'elemento padre. Si noti che poiché la reflection del messaggio è implementata da MFC, non da Windows, la classe della finestra padre deve essere derivata da per il corretto `CWnd` funzionamento della reflection del messaggio.

Le versioni precedenti di MFC hanno un aspetto simile alla reflection del messaggio fornendo funzioni virtuali per alcuni messaggi, ad esempio i messaggi per le caselle di riepilogo create dal proprietario (WM_DRAWITEM e così via). Il nuovo meccanismo di reflection dei messaggi è generalizzato e coerente.

La reflection del messaggio è compatibile con le versioni precedenti del codice scritto per le versioni di MFC precedenti alla 4,0.

Se è stato fornito un gestore per un messaggio specifico o per un intervallo di messaggi, nella classe della finestra padre, eseguirà l'override dei gestori di messaggi riflessi per lo stesso messaggio purché non venga chiamata la funzione gestore della classe base nel proprio gestore. Se, ad esempio, si gestiscono WM_CTLCOLOR nella classe della finestra di dialogo, la gestione eseguirà l'override di tutti i gestori di messaggi riflessi.

Se nella classe della finestra padre si fornisce un gestore per un messaggio di WM_NOTIFY specifico o un intervallo di messaggi di WM_NOTIFY, il gestore verrà chiamato solo se il controllo figlio che invia tali messaggi non dispone di un gestore di messaggi riflesso tramite `ON_NOTIFY_REFLECT()` . Se si utilizza `ON_NOTIFY_REFLECT_EX()` nella mappa messaggi, è possibile che il gestore di messaggi non consenta alla finestra padre di gestire il messaggio. Se il gestore restituisce **false**, il messaggio verrà gestito anche dal padre, mentre una chiamata che restituisce **true** non consente all'elemento padre di gestirlo. Si noti che il messaggio riflesso viene gestito prima del messaggio di notifica.

Quando viene inviato un messaggio di WM_NOTIFY, al controllo viene offerta la prima possibilità di gestirla. Se viene inviato un altro messaggio riflesso, la finestra padre avrà la prima possibilità di gestirla e il controllo riceverà il messaggio riflesso. A tale scopo, sarà necessaria una funzione di gestione e una voce appropriata nella mappa messaggi della classe del controllo.

La macro della mappa messaggi per i messaggi riflessi è leggermente diversa rispetto a quella per le notifiche regolari: è *_REFLECT* aggiunta al nome consueto. Ad esempio, per gestire un messaggio di WM_NOTIFY nell'elemento padre, usare la macro ON_NOTIFY nella mappa messaggi dell'elemento padre. Per gestire il messaggio riflesso nel controllo figlio, usare la macro ON_NOTIFY_REFLECT nella mappa messaggi del controllo figlio. In alcuni casi, anche i parametri sono diversi. Si noti che ClassWizard può in genere aggiungere le voci della mappa messaggi e fornire implementazioni di funzioni di scheletro con parametri corretti.

Per informazioni sul nuovo messaggio WM_NOTIFY, vedere [TN061: ON_NOTIFY e WM_NOTIFY](../mfc/tn061-on-notify-and-wm-notify-messages.md) messages.

**Voci della mappa messaggi e prototipi delle funzioni del gestore per i messaggi riflessi**

Per gestire un messaggio di notifica del controllo riflesso, utilizzare le macro della mappa messaggi e i prototipi di funzione elencati nella tabella seguente.

ClassWizard può in genere aggiungere le voci della mappa messaggi e fornire implementazioni di funzioni di scheletro. Per informazioni su come definire i gestori per i messaggi riflessi, vedere [definizione di un gestore di messaggi per un messaggio riflesso](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md) .

Per eseguire la conversione dal nome del messaggio al nome della macro riflessa, anteporre *ON_* e accodare *_REFLECT*. Ad esempio, WM_CTLCOLOR diventa ON_WM_CTLCOLOR_REFLECT. Per visualizzare i messaggi che possono essere riflessi, effettuare la conversione opposta sulle voci della macro nella tabella seguente.

Le tre eccezioni alla regola precedente sono le seguenti:

- La macro per le notifiche WM_COMMAND è ON_CONTROL_REFLECT.

- La macro per riflessioni WM_NOTIFY è ON_NOTIFY_REFLECT.

- La macro per riflessioni ON_UPDATE_COMMAND_UI è ON_UPDATE_COMMAND_UI_REFLECT.

In ognuno dei casi speciali precedenti, è necessario specificare il nome della funzione membro del gestore. Negli altri casi, è necessario usare il nome standard per la funzione del gestore.

I significati dei parametri e dei valori restituiti delle funzioni sono documentati in base al nome della funzione o al nome della funzione con anteposto *a* . Ad esempio, `CtlColor` è documentato in `OnCtlColor` . Per diversi gestori di messaggi riflessi è necessario un minor numero di parametri rispetto ai gestori simili in una finestra padre. È sufficiente trovare la corrispondenza dei nomi nella tabella seguente con i nomi dei parametri formali nella documentazione.

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|**ON_CONTROL_REFLECT (** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg void** `memberFxn` **( );**|
|**ON_NOTIFY_REFLECT (** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg void** `memberFxn` **(NMHDR** <strong>\*</strong> `pNotifyStruct` **, LRESULT** <strong>\*</strong> *risultato* **);**|
|**ON_UPDATE_COMMAND_UI_REFLECT (** `memberFxn` **)**|**afx_msg void** `memberFxn` **(CCmdUI** <strong>\*</strong> `pCmdUI` **);**|
|**ON_WM_CTLCOLOR_REFLECT ()**|**afx_msg HBRUSH CtlColor (CDC** <strong>\*</strong> `pDC` **, Uint** `nCtlColor` **);**|
|**ON_WM_DRAWITEM_REFLECT ()**|**afx_msg void DrawItem (LPDRAWITEMSTRUCT** `lpDrawItemStruct` **);**|
|**ON_WM_MEASUREITEM_REFLECT ()**|**afx_msg void MeasureItem (LPMEASUREITEMSTRUCT** `lpMeasureItemStruct` **);**|
|**ON_WM_DELETEITEM_REFLECT ()**|**afx_msg void DeleteItem (LPDELETEITEMSTRUCT** `lpDeleteItemStruct` **);**|
|**ON_WM_COMPAREITEM_REFLECT ()**|**afx_msg int CompareItem (LPCOMPAREITEMSTRUCT** `lpCompareItemStruct` **);**|
|**ON_WM_CHARTOITEM_REFLECT ()**|**afx_msg int CharToItem (uint** `nKey` **, uint** `nIndex` **);**|
|**ON_WM_VKEYTOITEM_REFLECT ()**|**afx_msg int VKeyToItem (uint** `nKey` **, uint** `nIndex` **);**|
|**ON_WM_HSCROLL_REFLECT ()**|**afx_msg void HScroll (uint** `nSBCode` **, uint** `nPos` **);**|
|**ON_WM_VSCROLL_REFLECT ()**|**afx_msg void VScroll (uint** `nSBCode` **, uint** `nPos` **);**|
|**ON_WM_PARENTNOTIFY_REFLECT ()**|**afx_msg void ParentNotify (uint** `message` **, lParam** `lParam` **);**|

Le macro ON_NOTIFY_REFLECT e ON_CONTROL_REFLECT includono varianti che consentono a più di un oggetto, ad esempio il controllo e il relativo elemento padre, di gestire un determinato messaggio.

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|**ON_NOTIFY_REFLECT_EX (** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg bool** `memberFxn` **(NMHDR** <strong>\*</strong> `pNotifyStruct` **, LRESULT** <strong>\*</strong> *risultato* **);**|
|**ON_CONTROL_REFLECT_EX (** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg bool** `memberFxn` **( );**|

## <a name="handling-reflected-messages-an-example-of-a-reusable-control"></a>Gestione dei messaggi riflessi: un esempio di controllo riutilizzabile

In questo semplice esempio viene creato un controllo riutilizzabile denominato `CYellowEdit` . Il controllo funziona allo stesso modo di un normale controllo di modifica ad eccezione del fatto che Visualizza il testo nero su uno sfondo giallo. È facile aggiungere funzioni membro che consentono al `CYellowEdit` controllo di visualizzare colori diversi.

### <a name="to-try-the-example-that-creates-a-reusable-control"></a>Per provare l'esempio in cui viene creato un controllo riutilizzabile

1. Crea una nuova finestra di dialogo in un'applicazione esistente. Per ulteriori informazioni, vedere l'argomento relativo all' [editor finestre](../windows/dialog-editor.md) .

   È necessario disporre di un'applicazione in cui sviluppare il controllo riutilizzabile. Se non si dispone di un'applicazione esistente da usare, creare un'applicazione basata su finestre di dialogo usando creazione guidata applicazioni.

2. Con il progetto caricato in Visual C++, usare ClassWizard per creare una nuova classe denominata `CYellowEdit` basata su `CEdit` .

3. Aggiungere tre variabili membro alla `CYellowEdit` classe. Le prime due verranno *COLORREF* variabili per contenere il colore del testo e il colore di sfondo. Il terzo sarà un `CBrush` oggetto che conterrà il pennello per disegnare lo sfondo. L' `CBrush` oggetto consente di creare il pennello una volta, semplicemente facendovi riferimento dopo tale oggetto e di eliminare automaticamente il pennello quando il `CYellowEdit` controllo viene eliminato definitivamente.

4. Inizializzare le variabili membro scrivendo il costruttore come segue:

    ```cpp
    CYellowEdit::CYellowEdit()
    {
        m_clrText = RGB(0, 0, 0);
        m_clrBkgnd = RGB(255, 255, 0);
        m_brBkgnd.CreateSolidBrush(m_clrBkgnd);
    }
    ```

5. Usando ClassWizard, aggiungere un gestore per il messaggio di WM_CTLCOLOR riflesso alla `CYellowEdit` classe. Si noti che il segno di uguale davanti al nome del messaggio nell'elenco dei messaggi che è possibile gestire indica che il messaggio viene riflesso. Questa operazione è descritta in [definizione di un gestore di messaggi per un messaggio riflesso](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).

   ClassWizard aggiunge automaticamente la seguente funzione di scheletro e macro della mappa messaggi:

    ```cpp
    ON_WM_CTLCOLOR_REFLECT()
    // Note: other code will be in between....

    HBRUSH CYellowEdit::CtlColor(CDC* pDC, UINT nCtlColor)
    {
        // TODO: Change any attributes of the DC here
        // TODO: Return a non-NULL brush if the
        //       parent's handler should not be called
        return NULL;
    }
    ```

6. Sostituire il corpo della funzione con il codice seguente. Il codice specifica il colore del testo, il colore di sfondo del testo e il colore di sfondo per il resto del controllo.

    ```cpp
    pDC->SetTextColor(m_clrText);   // text
    pDC->SetBkColor(m_clrBkgnd);    // text bkgnd
    return m_brBkgnd;               // ctl bkgnd
    ```

7. Creare un controllo di modifica nella finestra di dialogo e quindi collegarlo a una variabile membro facendo doppio clic sul controllo di modifica tenendo premuto il tasto CTRL. Nella finestra di dialogo Aggiungi variabile membro, terminare il nome della variabile e scegliere "controllo" per la categoria, quindi "CYellowEdit" per il tipo di variabile. Non dimenticare di impostare l'ordine di tabulazione nella finestra di dialogo. Inoltre, assicurarsi di includere il file di intestazione per il `CYellowEdit` controllo nel file di intestazione della finestra di dialogo.

8. Compilare ed eseguire l'applicazione. Il controllo di modifica avrà uno sfondo giallo.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
