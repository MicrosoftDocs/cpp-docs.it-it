---
title: 'TN062: Reflection messaggi per controlli Windows'
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
ms.openlocfilehash: aa189eec430d72bef753fef7ebbe9ad929d76c87
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62351845"
---
# <a name="tn062-message-reflection-for-windows-controls"></a>TN062: Reflection messaggi per controlli Windows

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota tecnica descrive la reflection di messaggio, una nuova funzionalità di 4.0 di MFC. Contiene inoltre istruzioni per la creazione di un controllo riutilizzabile semplice che usa la reflection di messaggio.

In questa nota tecnica non viene illustrata la reflection di messaggio perché si applica ai controlli ActiveX (precedentemente denominati controlli OLE). Vedere l'articolo [controlli ActiveX: Crea una sottoclasse di un controllo Windows](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).

**Che cos'è la Reflection di messaggio**

I controlli Windows spesso inviano messaggi di notifica alle finestre padre. Molti controlli, ad esempio, inviano un messaggio di notifica controllo colore (WM_CTLCOLOR o una delle relative varianti) al relativo elemento padre per consentire l'elemento padre fornire un pennello per disegnare lo sfondo del controllo.

In Windows e in MFC precedenti alla versione 4.0, la finestra padre, spesso una finestra di dialogo è responsabile della gestione di questi messaggi. Ciò significa che il codice per gestire il messaggio deve essere nella classe della finestra padre e che deve essere duplicato in ogni classe che deve gestire tale messaggio. Nel caso precedente, ogni finestra di dialogo che desiderava controlli con sfondi personalizzati sarebbe necessario gestire il messaggio di notifica di controllo colore. Sarebbe molto più semplice riutilizzare il codice se è stato possibile scrivere una classe di controlli che gestirà il proprio colore di sfondo.

4.0 di MFC, il meccanismo precedente funziona ancora, ovvero finestre padre possono gestire i messaggi di notifica. Inoltre, tuttavia, 4.0 di MFC facilita il riutilizzo, fornendo una funzionalità denominata "reflection di messaggio" che consente a questi messaggi di notifica per essere gestite nella finestra del controllo figlio o la finestra padre, o in entrambi. Nell'esempio colore sfondo controllo, è ora possibile scrivere una classe del controllo che consente di impostare un colore di sfondo gestendo le WM_CTLCOLOR (messaggio riflesso), ovvero senza basarsi sull'oggetto padre. (Si noti che poiché la reflection di messaggio viene implementata da MFC, non da Windows, la classe della finestra padre deve essere derivata `CWnd` per la reflection di messaggio lavorare.)

Le versioni precedenti di MFC è stata una schermata simile alla reflection di messaggio, fornendo funzioni virtuali per alcuni messaggi, ad esempio i messaggi per le caselle di riepilogo creato dal proprietario (WM_DRAWITEM e così via). Il nuovo meccanismo di reflection di messaggio è generalizzato e coerente.

Reflection di messaggio è compatibile con il codice scritto per le versioni di MFC precedenti alla 4.0.

Se è stato fornito un gestore per un messaggio specifico o per un intervallo di messaggi, nella classe della finestra padre, verrà eseguito l'override riflette i gestori di messaggi dello stesso messaggio purché si non chiama la funzione di gestore di classe di base in un gestore personalizzato. Ad esempio, se si gestisce WM_CTLCOLOR nella classe finestra di dialogo, la gestione sostituirà eventuali gestori di messaggi riprodotti.

Se, nella classe della finestra padre, si fornisce un gestore per un messaggio WM_NOTIFY specifico o un intervallo di WM_NOTIFY dei messaggi, il gestore verrà chiamato solo se il controllo figlio l'invio di tali messaggi non dispone di un gestore di messaggi riflessi tramite `ON_NOTIFY_REFLECT()`. Se si usa `ON_NOTIFY_REFLECT_EX()` nella mappa messaggi, il gestore di messaggi può o potrebbe non essere consentita la finestra padre gestire il messaggio. Se il gestore restituisce **FALSE**, il messaggio verrà gestito dal controllo padre, anche durante una chiamata che restituisce **TRUE** non consente l'elemento padre possa gestirla. Si noti che il messaggio riflesso viene gestito prima il messaggio di notifica.

Quando viene inviato un messaggio WM_NOTIFY, il controllo è disponibile la prima possibilità di gestirla. Se qualsiasi altro messaggio riflesso viene inviato, la finestra padre ha la prima possibilità di gestirla e il controllo verrà visualizzato il messaggio riflesso. A tale scopo, è necessario una funzione del gestore e voce appropriata nella mappa messaggi di classe del controllo.

La macro della mappa messaggi per messaggi riflessi è leggermente diversa da quello notifiche periodiche: dispone *_REFLECT* aggiunto al nome normale. Ad esempio, per gestire un messaggio WM_NOTIFY nell'elemento padre, utilizzare la macro ON_NOTIFY nella mappa messaggi dell'elemento padre. Per gestire il messaggio riflesso nel controllo figlio, usare la macro ON_NOTIFY_REFLECT nella mappa messaggi del controllo figlio. In alcuni casi, i parametri sono diversi, anche. Si noti che ClassWizard in genere possibile aggiungere le voci della mappa messaggi per l'utente e fornire implementazioni lo scheletro della funzione con i parametri corretti.

Vedere [TN061: Messaggi ON_NOTIFY e Wm_notify](../mfc/tn061-on-notify-and-wm-notify-messages.md) per informazioni sul nuovo messaggio WM_NOTIFY.

**Le voci della mappa messaggi e prototipi di funzione del gestore di messaggi riprodotti**

Per gestire un messaggio di notifica controllo riflesso, utilizzare la macro della mappa messaggi e i prototipi delle funzioni elencati nella tabella seguente.

ClassWizard possono in genere aggiungere queste voci della mappa messaggi per l'utente e fornire implementazioni lo scheletro della funzione. Visualizzare [definizione di un gestore di messaggi per un messaggio riflesse](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md) per informazioni su come definire i gestori per messaggi riflessi.

Per convertire dal nome del messaggio per il nome della macro riflesso, anteporre *on _* e aggiungere *_REFLECT*. Ad esempio, WM_CTLCOLOR diventa ON_WM_CTLCOLOR_REFLECT. (Per visualizzare i messaggi che possono essere riflesse, eseguire la conversione inversa dei movimenti macro nella tabella riportata di seguito).

Le tre eccezioni alla regola precedente sono i seguenti:

- La macro per le notifiche WM_COMMAND è ON_CONTROL_REFLECT.

- La macro per riflessi WM_NOTIFY è ON_NOTIFY_REFLECT.

- La macro per riflessi ON_UPDATE_COMMAND_UI è ON_UPDATE_COMMAND_UI_REFLECT.

In ognuno dei casi speciali precedenti, è necessario specificare il nome della funzione membro del gestore. In altri casi, è necessario usare il nome standard per la funzione del gestore.

I significati dei parametri e valori restituiti delle funzioni sono documentati con il nome della funzione o al nome della funzione *su* anteposto. Ad esempio, `CtlColor` è documentato in `OnCtlColor`. Alcuni gestori di messaggi riprodotti necessari meno parametri più gestori simili in una finestra padre. Semplicemente corrispondere ai nomi nella tabella seguente con i nomi dei parametri formali nella documentazione.

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|**ON_CONTROL_REFLECT(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg void** `memberFxn` **( );**|
|**ON_NOTIFY_REFLECT(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg void** `memberFxn` **( NMHDR** <strong>\*</strong> `pNotifyStruct` **, LRESULT**<strong>\*</strong> *result* **);**|
|**ON_UPDATE_COMMAND_UI_REFLECT(** `memberFxn` **)**|**afx_msg void** `memberFxn` **( CCmdUI**<strong>\*</strong> `pCmdUI` **);**|
|**ON_WM_CTLCOLOR_REFLECT( )**|**afx_msg CtlColor HBRUSH (CDC** <strong>\*</strong> `pDC` **, UINT** `nCtlColor` **);**|
|**ON_WM_DRAWITEM_REFLECT( )**|**afx_msg void DrawItem (LPDRAWITEMSTRUCT** `lpDrawItemStruct` **);**|
|**ON_WM_MEASUREITEM_REFLECT( )**|**afx_msg void MeasureItem ( LPMEASUREITEMSTRUCT** `lpMeasureItemStruct` **);**|
|**ON_WM_DELETEITEM_REFLECT( )**|**afx_msg void DeleteItem (LPDELETEITEMSTRUCT** `lpDeleteItemStruct` **);**|
|**ON_WM_COMPAREITEM_REFLECT( )**|**int afx_msg CompareItem (LPCOMPAREITEMSTRUCT** `lpCompareItemStruct` **);**|
|**ON_WM_CHARTOITEM_REFLECT( )**|**int afx_msg CharToItem (UINT** `nKey` **, UINT** `nIndex` **);**|
|**ON_WM_VKEYTOITEM_REFLECT( )**|**int afx_msg VKeyToItem (UINT** `nKey` **, UINT** `nIndex` **);**|
|**ON_WM_HSCROLL_REFLECT( )**|**afx_msg void proprietà HScroll (UINT** `nSBCode` **, UINT** `nPos` **);**|
|**ON_WM_VSCROLL_REFLECT( )**|**afx_msg void VScroll (UINT** `nSBCode` **, UINT** `nPos` **);**|
|**ON_WM_PARENTNOTIFY_REFLECT( )**|**afx_msg void ParentNotify (UINT** `message` **, LPARAM** `lParam` **);**|

Le macro ON_NOTIFY_REFLECT e ON_CONTROL_REFLECT presentano variazioni che consentono a più di un oggetto (ad esempio il controllo e il relativo elemento padre) per gestire un determinato messaggio.

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|**ON_NOTIFY_REFLECT_EX(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg BOOL** `memberFxn` **( NMHDR** <strong>\*</strong> `pNotifyStruct` **, LRESULT**<strong>\*</strong> *result* **);**|
|**ON_CONTROL_REFLECT_EX(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg BOOL** `memberFxn` **( );**|

## <a name="handling-reflected-messages-an-example-of-a-reusable-control"></a>Gestione di messaggi riprodotti: Un esempio di un controllo riutilizzabile

Questo semplice esempio viene creato un controllo riutilizzabile chiamato `CYellowEdit`. Il controllo funziona esattamente come un controllo di modifica normali, ad eccezione del fatto che visualizza testo nero su sfondo giallo. Sarebbe facile aggiungere funzioni membro che consentirebbero di `CYellowEdit` controllo da visualizzare colori diversi.

### <a name="to-try-the-example-that-creates-a-reusable-control"></a>Per eseguire il codice di esempio che crea un controllo riutilizzabile

1. Creare una nuova finestra di dialogo in un'applicazione esistente. Per altre informazioni, vedere la [editor finestre](../windows/dialog-editor.md) argomento.

   È necessario disporre di un'applicazione in cui si desidera sviluppare il controllo riutilizzabile. Se non si dispone di un'applicazione esistente da usare, creare un'applicazione basata su finestra di dialogo mediante la creazione guidata applicazione.

2. Con il progetto caricato in Visual C++, usare ClassWizard per creare una nuova classe denominata `CYellowEdit` base `CEdit`.

3. Aggiungere tre variabili membro per il `CYellowEdit` classe. I primi due saranno *COLORREF* variabili per contenere il colore del testo e il colore di sfondo. Il terzo una `CBrush` che conterrà il pennello per disegnare lo sfondo. Il `CBrush` oggetto consente di creare il pennello una sola volta, si limita farvi riferimento in seguito e per eliminare il pennello automaticamente quando il `CYellowEdit` controllo viene eliminato definitivamente.

4. Inizializzare le variabili membro scrivendo il costruttore, come indicato di seguito:

    ```cpp
    CYellowEdit::CYellowEdit()
    {
        m_clrText = RGB(0, 0, 0);
        m_clrBkgnd = RGB(255, 255, 0);
        m_brBkgnd.CreateSolidBrush(m_clrBkgnd);
    }
    ```

5. Tramite la creazione guidata classe, aggiungere un gestore per il messaggio WM_CTLCOLOR riflesso per il `CYellowEdit` classe. Si noti che il segno di uguale davanti al nome del messaggio nell'elenco dei messaggi che è possibile gestire indica che il messaggio viene riprodotto. Come descritto nella [definizione di un gestore di messaggi per un messaggio riflesse](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).

   ClassWizard aggiunge la seguente funzione di macro e struttura della mappa messaggi per l'utente:

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

6. Sostituire il corpo della funzione con il codice seguente. Il codice specifica il colore del testo, il colore di sfondo del testo e il colore di sfondo per la parte restante del controllo.

    ```cpp
    pDC->SetTextColor(m_clrText);   // text
    pDC->SetBkColor(m_clrBkgnd);    // text bkgnd
    return m_brBkgnd;               // ctl bkgnd
    ```

7. Creare un controllo di modifica nella finestra di dialogo, quindi collegarlo a una variabile membro facendo doppio clic sul controllo di modifica premuto un tasto di controllo. Nella finestra di dialogo Aggiunta guidata variabile membro, completare il nome della variabile e scegliere "Controllo" per la categoria, quindi "CYellowEdit" per il tipo della variabile. Non dimenticare di impostare l'ordine di tabulazione nella finestra di dialogo. Inoltre, assicurarsi di includere il file di intestazione per il `CYellowEdit` controllo nel file di intestazione della finestra di dialogo.

8. Compilare ed eseguire l'applicazione. Il controllo di modifica avrà uno sfondo giallo.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
