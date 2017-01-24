---
title: "TN062: reflection messaggi per controlli Windows | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.controls.messages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "riflessione messaggi"
  - "messaggi di notifica"
  - "ON_CONTROL_REFLECT (macro)"
  - "ON_CONTROL_REFLECT_EX (macro)"
  - "ON_NOTIFY (messaggio)"
  - "ON_NOTIFY_REFLECT (messaggio)"
  - "ON_NOTIFY_REFLECT_EX (messaggio)"
  - "ON_UPDATE_COMMAND_UI_REFLECT (macro)"
  - "ON_WM_CHARTOITEM_REFLECT (macro)"
  - "ON_WM_COMPAREITEM_REFLECT (macro)"
  - "ON_WM_CTLCOLOR_REFLECT (macro)"
  - "ON_WM_DELETEITEM_REFLECT (macro)"
  - "ON_WM_DRAWITEM_REFLECT (macro)"
  - "ON_WM_HSCROLL_REFLECT (macro)"
  - "ON_WM_MEASUREITEM_REFLECT (macro)"
  - "ON_WM_PARENTNOTIFY_REFLECT (macro)"
  - "ON_WM_VKEYTOITEM_REFLECT (macro)"
  - "ON_WM_VSCROLL_REFLECT (macro)"
  - "TN062"
  - "WM_COMMAND"
  - "WM_CTLCOLOR (messaggio)"
  - "WM_NOTIFY (messaggio)"
ms.assetid: 53efb0ba-fcda-4fa0-a3c7-14e0b78fb494
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN062: reflection messaggi per controlli Windows
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota tecnica viene descritta la reflection di messaggio, una nuova funzionalità di MFC 4,0.  Contiene inoltre fornite indicazioni per creare un controllo riutilizzabile semplice che utilizza la reflection di messaggio.  
  
 Questa nota tecnica non viene descritta la reflection di messaggio mentre si applica ai controlli ActiveX \(precedentemente denominati controlli OLE\).  Vedere l'articolo [Controlli ActiveX: Creazione di una sottoclasse di un controllo Windows](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
 **Qual è la reflection di messaggio?**  
  
 I controlli Windows inviano spesso i messaggi di notifica alle finestre padre.  Ad esempio, molti controlli inviare un messaggio di notifica colore del controllo \(`WM_CTLCOLOR` o una delle varianti\) al relativo padre per consentire al padre fornisca un pennello per il disegno dello sfondo del controllo.  
  
 In windows e a MFC precedenti alla versione 4,0, la finestra padre, spesso una finestra di dialogo, è responsabile della gestione dei messaggi.  Ciò significa che il codice di gestione che il messaggio deve trovarsi nella classe della finestra padre e che deve essere duplicato in ogni classe che deve gestire il messaggio.  Nel caso precedente, tutte le finestre di dialogo che i controlli desiderati con sfondi personalizzati devono gestire il messaggio di notifica colore del controllo.  Sarebbe molto più facile riutilizzare il codice se una classe del controllo potrebbe essere scritta che gestirebbe il relativo colore di sfondo.  
  
 In MFC 4,0, il meccanismo funziona obsoleti nuovamente alle finestre padre possono gestire i messaggi di notifica.  Inoltre, tuttavia, MFC 4,0 semplifica il riutilizzo fornendo una funzionalità denominata "reflection di messaggio" che consente i messaggi di notifica da gestire nella finestra di controllo figlio o nella finestra padre, o in entrambi.  Nell'esempio di colore di sfondo del controllo, è possibile scrivere una classe di controllo che imposta il relativo colore di sfondo del messaggio riprodotto di `WM_CTLCOLOR` \- tutto senza utilizzare il padre. Notare che poiché la reflection di messaggio viene implementata da MFC, non da windows, la classe della finestra padre deve essere derivata da `CWnd` per la reflection di messaggio funzioni\).  
  
 Le versioni di MFC precedenti a un'operazione simile alla reflection di messaggio svolgendo le funzioni virtuali per alcuni messaggi, ad esempio i messaggi per le caselle di riepilogo create dal proprietario \(`WM_DRAWITEM`, e così via\).  Il nuovo meccanismo di reflection di messaggio è generalizzato e coerente.  
  
 La reflection di messaggio sono compatibili con codice scritto per le versioni di MFC precedenti a 4,0.  
  
 Se è stato fornito un gestore per un messaggio specifico, o per un intervallo dei messaggi, nella classe della finestra padre, di override presenta riflesso i gestori di messaggi per lo stesso messaggio viene fornito non chiama la funzione di gestione della classe base nel proprio gestore.  Ad esempio, se si gestiscono `WM_CTLCOLOR` nella classe della finestra di dialogo, la gestione eseguire l'override di eventuali gestori di messaggi riprodotti.  
  
 Se, nella classe della finestra padre, fornire un gestore per un messaggio specifico di **WM\_NOTIFY** o un intervallo dei messaggi di **WM\_NOTIFY**, il gestore viene chiamato solo se il controllo figlio che invia i messaggi non dispone di un gestore messaggi riprodotto con **ON\_NOTIFY\_REFLECT\(\)**.  Se si utilizza **ON\_NOTIFY\_REFLECT\_EX\(\)** nella mappa messaggi, il gestore di messaggi può consentire la finestra padre gestire il messaggio.  Se il gestore restituisce **FALSE**, il messaggio verrà gestito dal padre anche, mentre una chiamata che restituisce **TRUE** non permette al padre di gestione.  Si noti che il messaggio riprodotto viene gestito prima del messaggio di notifica.  
  
 Quando un messaggio di **WM\_NOTIFY** viene inviato, il controllo viene offerto la prima probabilità gestirla.  Se qualsiasi altro messaggio riprodotto viene inviato, la finestra padre è la prima probabilità di gestirlo e il controllo riceve il messaggio riprodotto.  A tale scopo, sarà necessario disporre di una funzione di gestione e di una voce appropriata nella mappa messaggi la classe del controllo.  
  
 La macro della mappa messaggi per i messaggi riprodotti è leggermente diversa rispetto alle notifiche normali: è **\_REFLECT** aggiunto al nome comune.  Ad esempio, per gestire un messaggio di **WM\_NOTIFY** pannello padre, utilizzare macro `ON_NOTIFY` della mappa messaggi padre.  Per gestire il messaggio riprodotto nel controllo figlio, utilizzare la macro di **ON\_NOTIFY\_REFLECT** della mappa messaggi del controllo figlio.  In alcuni casi, i parametri sono diversi, anche.  Si noti che ClassWizard in genere aggiungere voci della mappa messaggi per l'utente e fornire implementazioni di base di funzione con parametri corretti.  
  
 Vedere [TN061: Messaggi di WM\_NOTIFY e di ON\_NOTIFY](../mfc/tn061-on-notify-and-wm-notify-messages.md) per informazioni sul nuovo messaggio di **WM\_NOTIFY**.  
  
 **Le voci della mappa messaggi e prototipi di funzione di gestione per i messaggi riprodotti**  
  
 Per gestire un messaggio riprodotto di notifica di controllo, utilizzare le macro della mappa messaggi e prototipi di funzione elencati nella tabella riportata di seguito.  
  
 ClassWizard in genere aggiungere queste voci della mappa messaggi per l'utente e fornire implementazioni di base di funzione.  Vedere [Definizione di un gestore messaggi per un messaggio riprodotto](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md) per informazioni su come definire i gestori per i messaggi riprodotti.  
  
 Per convertire il nome del messaggio in nome della macro riflesso, anteporre **ON\_** e aggiungere **\_REFLECT**.  Ad esempio, `WM_CTLCOLOR` diventa **ON\_WM\_CTLCOLOR\_REFLECT**. \(Per visualizzare i messaggi possono essere riprodotti, effettuare la conversione opposta sulle macro voci nella tabella riportata di seguito.\)  
  
 Le tre eccezioni alla regola precedente sono le seguenti:  
  
-   La macro per le notifiche di **WM\_COMMAND** è **ON\_CONTROL\_REFLECT**.  
  
-   La macro per reflection di **WM\_NOTIFY** è **ON\_NOTIFY\_REFLECT**.  
  
-   La macro per reflection di `ON_UPDATE_COMMAND_UI` è **ON\_UPDATE\_COMMAND\_UI\_REFLECT**.  
  
 In ognuno dei casi speciali in precedenza, è necessario specificare il nome della funzione membro gestore.  In altri casi, è necessario utilizzare il nome standard per la funzione di gestione.  
  
 I significati di parametri e i valori restituiti da funzioni sono documentati in o il nome della funzione o il nome di funzione con **In** è anteposto.  Ad esempio, **CtlColor** è documentato in `OnCtlColor`.  Diversi gestori di messaggi riprodotti sono necessarie meno parametri simili che i gestori in una finestra padre.  Corrispondenza dei nomi indicati nella tabella seguente con i nomi dei parametri formali nella documentazione.  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|**ON\_CONTROL\_REFLECT\(**  `wNotifyCode` **,**  `memberFxn`  **\)**|**afx\_msg void**  `memberFxn`  **\( \);**|  
|**ON\_NOTIFY\_REFLECT\(**  `wNotifyCode` **,**  `memberFxn`  **\)**|**afx\_msg void**  `memberFxn`  **\( NMHDR \***  `pNotifyStruct` **, LRESULT\***  *risultato*  **\);**|  
|**ON\_UPDATE\_COMMAND\_UI\_REFLECT\(**  `memberFxn`  **\)**|**afx\_msg void**  `memberFxn`  **\( CCmdUI\***  `pCmdUI`\);|  
|**ON\_WM\_CTLCOLOR\_REFLECT\( \)**|**afx\_msg HBRUSH CtlColor \( CDC\***  `pDC` **, UINT**  `nCtlColor`  **\);**|  
|**ON\_WM\_DRAWITEM\_REFLECT\( \)**|**afx\_msg void DrawItem \( LPDRAWITEMSTRUCT**  `lpDrawItemStruct`  **\);**|  
|**ON\_WM\_MEASUREITEM\_REFLECT\( \)**|**afx\_msg void MeasureItem \( LPMEASUREITEMSTRUCT**  `lpMeasureItemStruct`  **\);**|  
|**ON\_WM\_DELETEITEM\_REFLECT\( \)**|**afx\_msg void DeleteItem \( LPDELETEITEMSTRUCT**  `lpDeleteItemStruct`  **\);**|  
|**ON\_WM\_COMPAREITEM\_REFLECT\( \)**|**afx\_msg int CompareItem \( LPCOMPAREITEMSTRUCT**  `lpCompareItemStruct`  **\);**|  
|**ON\_WM\_CHARTOITEM\_REFLECT\( \)**|**afx\_msg int CharToItem \( UINT**  `nKey` **, UINT**  `nIndex`  **\);**|  
|**ON\_WM\_VKEYTOITEM\_REFLECT\( \)**|**afx\_msg int VKeyToItem \( UINT**  `nKey` **, UINT**  `nIndex`  **\);**|  
|**ON\_WM\_HSCROLL\_REFLECT\( \)**|**afx\_msg void HScroll \( UINT**  `nSBCode` **, UINT**  `nPos`  **\);**|  
|**ON\_WM\_VSCROLL\_REFLECT\( \)**|**afx\_msg void VScroll \( UINT**  `nSBCode` **, UINT**  `nPos`  **\);**|  
|**ON\_WM\_PARENTNOTIFY\_REFLECT\( \)**|**afx\_msg void ParentNotify \( UINT**  `message` **, LPARAM**  `lParam`  **\);**|  
  
 Le macro di **ON\_CONTROL\_REFLECT** e di **ON\_NOTIFY\_REFLECT** sono variazioni che consentono a più oggetti \(come il controllo e il relativo padre\) gestire un messaggio specificato.  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|**ON\_NOTIFY\_REFLECT\_EX\(**  `wNotifyCode` **,**  `memberFxn`  **\)**|**afx\_msg BOOL**  `memberFxn`  **\( NMHDR \***  `pNotifyStruct` **, LRESULT\***  *risultato*  **\);**|  
|**ON\_CONTROL\_REFLECT\_EX\(**  `wNotifyCode` **,**  `memberFxn`  **\)**|**afx\_msg BOOL**  `memberFxn`  **\( \);**|  
  
## Gestire i messaggi riprodotti: Un esempio di un controllo riutilizzabile  
 In questo semplice esempio viene creato un controllo riutilizzabile chiamato `CYellowEdit`.  Il controllo funziona come se fosse controllo di modifica normale salvo che visualizzano testo nero su uno sfondo giallo.  Risulta facile aggiungere funzioni membro che avrebbe consentito il controllo di `CYellowEdit` in colori diversi di visualizzazione.  
  
#### Per provare l'esempio che crea un controllo riutilizzabile  
  
1.  Creare una nuova finestra di dialogo in un'applicazione esistente.  Per ulteriori informazioni, vedere l'argomento di [editor finestre](../mfc/dialog-editor.md).  
  
     È necessario che un'applicazione in cui compilare il controllo riutilizzabile.  Se non si dispone di un'applicazione esistente da utilizzare, creare un'applicazione a finestre mediante AppWizard.  
  
2.  Con il progetto caricato in Visual C\+\+, utilizzare ClassWizard per creare una nuova classe denominata `CYellowEdit` basato su `CEdit`.  
  
3.  Aggiungere le variabili di tre membri alla classe di `CYellowEdit`.  I primi due verranno variabili di **COLORREF** per utilizzare il colore del testo e il colore di sfondo.  Il terzo sarà un oggetto di `CBrush` che conterrà il pennello per il disegno dello sfondo.  L'oggetto di `CBrush` consente di creare una volta il pennello, solo facendo riferimento successivamente e distruggiate il pennello automaticamente quando il controllo di `CYellowEdit` viene eliminato.  
  
4.  Inizializzare le variabili membro scrivendo il costruttore come segue:  
  
    ```  
    CYellowEdit::CYellowEdit()  
    {  
       m_clrText = RGB( 0, 0, 0 );  
       m_clrBkgnd = RGB( 255, 255, 0 );  
       m_brBkgnd.CreateSolidBrush( m_clrBkgnd );  
    }  
    ```  
  
5.  Utilizzo di ClassWizard, aggiungere un gestore per il messaggio riprodotto di `WM_CTLCOLOR` alla classe di `CYellowEdit`.  Si noti che il segno di uguale davanti al nome del messaggio nell'elenco dei messaggi che è possibile gestire indica che il messaggio viene applicato.  Ciò viene descritto in [Definizione di un gestore messaggi per un messaggio riprodotto](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).  
  
     ClassWizard aggiunge la macro riportata della mappa messaggi e la funzione di base automaticamente:  
  
    ```  
    ON_WM_CTLCOLOR_REFLECT()  
  
    // Note: other code will be in between....  
  
    HBRUSH CYellowEdit::CtlColor(CDC* pDC, UINT nCtlColor)   
    {  
       // TODO: Change any attributes of the DC here  
  
       // TODO: Return a non-NULL brush if the  
       //   parent's handler should not be called  
       return NULL;  
    }  
    ```  
  
6.  Sostituire il corpo della funzione con il codice seguente.  Il codice consente di specificare il colore del testo, il colore di sfondo del testo e il colore di sfondo per resto del controllo.  
  
    ```  
    pDC->SetTextColor( m_clrText );   // text  
    pDC->SetBkColor( m_clrBkgnd );   // text bkgnd  
    return m_brBkgnd;            // ctl bkgnd  
    ```  
  
7.  Creare un controllo di modifica nella finestra di dialogo, quindi alleghilo a una variabile membro facendo doppio clic sul controllo di modifica tenendo premuto un tasto di un controllo verso il basso.  Nella finestra di dialogo variabile membro aggiungi, completare il nome della variabile e scegliere il "controllo" per categoria, pertanto "CYellowEdit" per il tipo di variabile.  Non dimentichi di impostare l'ordine di tabulazione nella finestra di dialogo.  Inoltre, assicurarsi di includere il file di intestazione per il controllo di `CYellowEdit` in file di intestazione della finestra di dialogo.  
  
8.  Compilare ed eseguire l'applicazione.  Il controllo di modifica avrà uno sfondo giallo.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)