---
title: 'TN062: Reflection per i controlli Windows dei messaggi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.controls.messages
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 683281af3d029dca7e8060bb250a49f8e095d597
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954582"
---
# <a name="tn062-message-reflection-for-windows-controls"></a>TN062: reflection messaggi per controlli Windows
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota tecnica descrive la reflection di messaggio, una nuova funzionalità di MFC 4.0. Include inoltre istruzioni per la creazione di un semplice controllo riutilizzabile che usa la reflection di messaggio.  
  
 In questa nota tecnica non descrive la reflection di messaggio come si applica ai controlli ActiveX (precedentemente denominati controlli OLE). Vedere l'articolo [controlli ActiveX: creazione di sottoclassi di un controllo Windows](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
 **Che cos'è la Reflection di messaggio**  
  
 Controlli Windows spesso inviano messaggi di notifica per le finestre padre. Ad esempio, molti controlli inviare un messaggio di notifica colore di controllo (WM_CTLCOLOR o una delle sue varianti) al relativo elemento padre per consentire l'elemento padre a fornire un pennello per disegnare lo sfondo del controllo.  
  
 In Windows e MFC precedenti alla versione 4.0, la finestra padre, spesso una finestra di dialogo, è responsabile della gestione di questi messaggi. Ciò significa che il codice per la gestione del messaggio deve essere nella classe della finestra padre e che deve essere duplicato in tutte le classi necessarie per gestire tale messaggio. Nel caso sopra, ogni finestra di dialogo che voleva controlli con sfondi personalizzati sarebbe necessario gestire il messaggio di notifica di colori di controllo. Sarebbe molto più semplice riutilizzare il codice se è possibile scrivere una classe del controllo che gestisce un colore di sfondo.  
  
 Nella versione 4.0 di MFC, il meccanismo precedente continui a funzionare, ovvero finestre padre possono gestire i messaggi di notifica. Inoltre, tuttavia, 4.0 di MFC facilita il riutilizzo, fornendo una funzionalità denominata "reflection di messaggio" che consente di questi messaggi di notifica deve essere gestito nella finestra del controllo figlio o la finestra padre o in entrambi. Nell'esempio di colore di sfondo controllo, è ora possibile scrivere una classe del controllo che consente di impostare un colore di sfondo per la gestione del messaggio WM_CTLCOLOR riflesso, tutto senza basarsi sull'oggetto padre. (Si noti che poiché la reflection di messaggio viene implementata da MFC, non da Windows, la classe della finestra padre deve essere derivata da `CWnd` per la reflection di messaggio funzionare.)  
  
 Le versioni precedenti di MFC ha un comportamento simile per la reflection di messaggio, fornendo funzioni virtuali per alcuni messaggi, ad esempio i messaggi per le caselle di riepilogo disegnato dal proprietario (WM_DRAWITEM e così via). Il nuovo meccanismo di reflection di messaggio viene generalizzata e coerente.  
  
 Riflessione messaggi è compatibile con il codice scritto per le versioni di MFC precedenti alla 4.0.  
  
 Se è stato fornito un gestore per un messaggio specifico o per un intervallo di messaggi nella classe della finestra padre, esso sostituirà riflessa gestori di messaggi per lo stesso messaggio purché non vengano chiamate di funzione del gestore di classe di base in un gestore personalizzato. Ad esempio, se si gestiscono WM_CTLCOLOR nella classe finestra di dialogo, la gestione sostituiranno eventuali gestori di messaggi riprodotti.  
  
 Se nella classe della finestra padre, si fornisce un gestore per uno specifico WM_NOTIFY o un intervallo di WM_NOTIFY messaggi, il gestore verrà chiamato solo se il controllo figlio l'invio di tali messaggi non dispone di un gestore di messaggi riprodotti tramite `ON_NOTIFY_REFLECT()`. Se si utilizza `ON_NOTIFY_REFLECT_EX()` nella mappa messaggi, il gestore di messaggi può o potrebbe non essere consentita la finestra padre gestire il messaggio. Se il gestore restituisce **FALSE**, il messaggio verrà gestito dall'elemento padre, anche durante una chiamata che restituisce **TRUE** non consente l'elemento padre di gestirlo. Si noti che il messaggio riflesso viene gestito prima del messaggio di notifica.  
  
 Quando viene inviato un messaggio WM_NOTIFY, il controllo viene offerta la prima opportunità di gestirlo. Se qualsiasi altro messaggio riflesso viene inviato, la finestra padre è la prima opportunità di gestirla e il controllo verrà visualizzato il messaggio riflesso. A tale scopo, è necessario una funzione del gestore e una voce appropriata nella mappa messaggi di classe del controllo.  
  
 La macro della mappa messaggi per messaggi riflessi è leggermente diversa da quello per le notifiche regolare: ha *_REFLECT* aggiunto al nome consueto. Ad esempio, per gestire un messaggio WM_NOTIFY nell'elemento padre, utilizzare la macro ON_NOTIFY nella mappa messaggi dell'elemento padre. Per gestire il messaggio riflesso nel controllo figlio, usare la macro ON_NOTIFY_REFLECT nella mappa messaggi del controllo figlio. In alcuni casi, i parametri sono diversi, nonché. Notare che ClassWizard possono in genere aggiungere le voci della mappa messaggi per l'utente e fornire le implementazioni delle funzioni di base con i parametri corretti.  
  
 Vedere [TN061: messaggi ON_NOTIFY e Wm_notify](../mfc/tn061-on-notify-and-wm-notify-messages.md) per informazioni sul nuovo messaggio WM_NOTIFY.  
  
 **Le voci della mappa messaggi e gestore prototipi di funzione per message riflessi**  
  
 Per gestire un messaggio di notifica di controllo riflesso, utilizzare le macro di mappe messaggi e prototipi di funzione elencati nella tabella seguente.  
  
 ClassWizard in genere possibile aggiungere queste voci della mappa messaggi per l'utente e forniscono le implementazioni delle funzioni di base. Vedere [definizione di un gestore di messaggi per un messaggio riflesse](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md) per informazioni su come definire i gestori per messaggi riflessi.  
  
 Per convertire dal nome del messaggio per il nome della macro riflesso, anteporre *on _* e aggiungere *_REFLECT*. Ad esempio, WM_CTLCOLOR diventa ON_WM_CTLCOLOR_REFLECT. (Per visualizzare i messaggi che possono essere riflesse, eseguire la conversione opposta alle voci presenti macro nella tabella seguente).  
  
 Le tre eccezioni alla regola precedente sono i seguenti:  
  
-   La macro per le notifiche WM_COMMAND è ON_CONTROL_REFLECT.  
  
-   La macro per i riflessi WM_NOTIFY è ON_NOTIFY_REFLECT.  
  
-   La macro per i riflessi ON_UPDATE_COMMAND_UI è ON_UPDATE_COMMAND_UI_REFLECT.  
  
 In ognuno dei casi speciali precedenti, è necessario specificare il nome della funzione membro del gestore. In altri casi, è necessario utilizzare il nome standard per la funzione del gestore.  
  
 I significati dei parametri e valori restituiti delle funzioni sono illustrati sotto il nome della funzione o il nome della funzione con *su* anteposto il simbolo. Ad esempio `CtlColor` è documentato `OnCtlColor`. Diversi gestori di messaggi riprodotti necessario meno parametri più gestori simili in una finestra padre. Appena corrispondano ai nomi nella tabella seguente con i nomi dei parametri formali nella documentazione.  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|**ON_CONTROL_REFLECT (** `wNotifyCode` **,** `memberFxn` **)**|**void afx_msg** `memberFxn` **();**|  
|**ON_NOTIFY_REFLECT (** `wNotifyCode` **,** `memberFxn` **)**|**void afx_msg** `memberFxn` **(NMHDR \***  `pNotifyStruct` **, LRESULT\***  *risultato* **);**|  
|**ON_UPDATE_COMMAND_UI_REFLECT (** `memberFxn` **)**|**void afx_msg** `memberFxn` **(CCmdUI\***  `pCmdUI` **);**|  
|**ON_WM_CTLCOLOR_REFLECT)**|**afx_msg CtlColor HBRUSH (CDC\***  `pDC` **, UINT** `nCtlColor` **);**|  
|**ON_WM_DRAWITEM_REFLECT)**|**afx_msg void DrawItem (LPDRAWITEMSTRUCT** `lpDrawItemStruct` **);**|  
|**ON_WM_MEASUREITEM_REFLECT)**|**afx_msg void MeasureItem (LPMEASUREITEMSTRUCT** `lpMeasureItemStruct` **);**|  
|**ON_WM_DELETEITEM_REFLECT)**|**afx_msg void DeleteItem (LPDELETEITEMSTRUCT** `lpDeleteItemStruct` **);**|  
|**ON_WM_COMPAREITEM_REFLECT)**|**int afx_msg CompareItem (LPCOMPAREITEMSTRUCT** `lpCompareItemStruct` **);**|  
|**ON_WM_CHARTOITEM_REFLECT)**|**int afx_msg CharToItem (UINT** `nKey` **, UINT** `nIndex` **);**|  
|**ON_WM_VKEYTOITEM_REFLECT)**|**int afx_msg VKeyToItem (UINT** `nKey` **, UINT** `nIndex` **);**|  
|**ON_WM_HSCROLL_REFLECT)**|**afx_msg void proprietà HScroll (UINT** `nSBCode` **, UINT** `nPos` **);**|  
|**ON_WM_VSCROLL_REFLECT)**|**afx_msg void VScroll (UINT** `nSBCode` **, UINT** `nPos` **);**|  
|**ON_WM_PARENTNOTIFY_REFLECT)**|**afx_msg void ParentNotify (UINT** `message` **, LPARAM** `lParam` **);**|  
  
 Le macro ON_NOTIFY_REFLECT e ON_CONTROL_REFLECT presentano variazioni che consentono a più di un oggetto (ad esempio il controllo e il relativo elemento padre) per gestire un determinato messaggio.  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|**ON_NOTIFY_REFLECT_EX (** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg BOOL** `memberFxn` **(NMHDR \***  `pNotifyStruct` **, LRESULT\***  *risultato* **);**|  
|**ON_CONTROL_REFLECT_EX (** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg BOOL** `memberFxn` **();**|  
  
## <a name="handling-reflected-messages-an-example-of-a-reusable-control"></a>Gestione di messaggi riprodotti: Un esempio di controllo riutilizzabile  
 Questo semplice esempio crea un controllo riutilizzabile chiamato `CYellowEdit`. Il controllo funziona come un controllo di modifica regolari ad eccezione del fatto che venga visualizzato testo nero su sfondo giallo. Sarebbe facile aggiungere funzioni membro che permetterebbero la `CYellowEdit` controllo da visualizzare colori diversi.  
  
#### <a name="to-try-the-example-that-creates-a-reusable-control"></a>Per provare l'esempio che crea un controllo riutilizzabile  
  
1.  Creare una nuova finestra di dialogo in un'applicazione esistente. Per altre informazioni, vedere la [editor finestre](../windows/dialog-editor.md) argomento.  
  
     È necessario disporre di un'applicazione in cui si desidera sviluppare controllo riutilizzabili. Se non si dispone di un'applicazione esistente da utilizzare, creare un'applicazione basata su finestra di dialogo mediante la creazione guidata applicazione.  
  
2.  Con il progetto caricato in Visual C++, utilizzare ClassWizard per creare una nuova classe denominata `CYellowEdit` base `CEdit`.  
  
3.  Aggiungere tre variabili membro per il `CYellowEdit` classe. Le prime due saranno *COLORREF* variabili per mantenere il colore del testo e il colore di sfondo. Il terzo sarà un `CBrush` che conterrà il pennello per disegnare lo sfondo. Il `CBrush` oggetto consente di creare il pennello una sola volta, semplicemente farvi riferimento successivamente e per eliminare il pennello automaticamente quando il `CYellowEdit` controllo viene eliminato definitivamente.  
  
4.  Inizializzare le variabili membro scrivendo il costruttore, come indicato di seguito:  
  
 ```  
    CYellowEdit::CYellowEdit() 
 {  
    m_clrText = RGB(0,
    0,
    0);

    m_clrBkgnd = RGB(255,
    255,
    0);

    m_brBkgnd.CreateSolidBrush(m_clrBkgnd);

 }  
 ```  
  
5.  Tramite ClassWizard, aggiungere un gestore per il messaggio WM_CTLCOLOR riflesso per il `CYellowEdit` classe. Si noti che il segno di uguale prima del nome di messaggio nell'elenco dei messaggi che è possibile gestire indica che il messaggio viene riprodotto. Questo aspetto è descritto nel [definizione di un gestore di messaggi per un messaggio riflesse](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).  
  
     ClassWizard aggiunge le funzioni seguenti di macro e scheletro della mappa messaggi per l'utente:  
  
 ```  
    ON_WM_CTLCOLOR_REFLECT() 
 *// Note: other code will be in between....  
 
    HBRUSH CYellowEdit::CtlColor(CDC* pDC, UINT nCtlColor)   
 { *// TODO: Change any attributes of the DC here  
 *// TODO: Return a non-NULL brush if the *//   parent's handler should not be called  
    return NULL;  
 }  
 ```  
  
6.  Sostituire il corpo della funzione con il codice seguente. Il codice specifica il colore del testo, il colore di sfondo del testo e il colore di sfondo per la parte restante del controllo.  
  
 ```  
    pDC->SetTextColor(m_clrText);
*// text  
    pDC->SetBkColor(m_clrBkgnd);
*// text bkgnd  
    return m_brBkgnd;            // ctl bkgnd  
 ```  
  
7.  Creare un controllo di modifica nella finestra di dialogo, quindi collegarlo a una variabile membro facendo doppio clic sul controllo di modifica premuto un tasto CTRL. Nella finestra di dialogo Aggiunta guidata variabile membro, terminare il nome della variabile e scegliere "Controllo" per la categoria, quindi "CYellowEdit" per il tipo di variabile. Non dimenticare di impostare l'ordine di tabulazione nella finestra di dialogo. Inoltre, assicurarsi di includere il file di intestazione per il `CYellowEdit` controllo nel file di intestazione della finestra di dialogo.  
  
8.  Compilare ed eseguire l'applicazione. Il controllo di modifica avrà uno sfondo giallo.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

