---
title: "Controlli ActiveX MFC: creazione di una sottoclasse per un controllo Windows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "precreatewindow"
  - "IsSubclassed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DoSuperclassPaint (metodo)"
  - "IsSubclassed (metodo)"
  - "MFC (controlli ActiveX), creazione"
  - "MFC (controlli ActiveX), controlli sottoclassati"
  - "OnDraw (metodo), controlli ActiveX MFC"
  - "PreCreateWindow (metodo), override"
  - "message riflessi, nei controlli ActiveX"
  - "creazione di sottoclassi"
  - "sottoclassamento di controlli Windows"
  - "creazione di sottoclassi, controlli Windows"
ms.assetid: 3236d4de-401f-49b7-918d-c84559ecc426
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Controlli ActiveX MFC: creazione di una sottoclasse per un controllo Windows
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto il processo per la creazione di una sottoclasse di un controllo Windows comune per creare un controllo ActiveX.  La creazione di una sottoclasse di un controllo Windows esistente è un modo rapido per compilare un controllo ActiveX.  Il nuovo controllo disporrà delle funzionalità dei controlli Windows sottoclassati, come il disegno e la risposta ai clic del mouse.  L'esempio dei controlli ActiveX MFC [BUTTON](../top/visual-cpp-samples.md) è un esempio di creazione di una sottoclasse di un controllo Windows.  
  
 Per creare una sottoclasse di un controllo Windows, completare le seguenti attività:  
  
-   [Eseguire l'override delle funzioni membro PreCreateWindow e IsSubclassedControl di COleControl](#_core_overriding_issubclassedcontrol_and_precreatewindow)  
  
-   [Modificare la funzione membro OnDraw](#_core_modifying_the_ondraw_member_function)  
  
-   [Gestire tutti i messaggi del controllo ActiveX \(OCM\) applicati al controllo](#_core_handling_reflected_window_messages)  
  
    > [!NOTE]
    >  Gran parte di queste operazioni vengono eseguite automaticamente dalla Creazione guidata controllo ActiveX se si seleziona il controllo da sottoclassare mediante l'elenco a discesa **Seleziona classe finestra padre** nella pagina **Impostazioni controllo**.  
  
 Vedere l'articolo Knowledge Base Q243454 per ulteriori informazioni sulla creazione di una sottoclasse di un controllo.  
  
##  <a name="_core_overriding_issubclassedcontrol_and_precreatewindow"></a> Eseguire l'override di IsSubclassedControl e PreCreateWindow  
 Per eseguire l'override di `PreCreateWindow` e `IsSubclassedControl`, aggiungere le seguenti righe di codice alla sezione `protected` della dichiarazione della classe del controllo:  
  
 [!code-cpp[NVC_MFC_AxSub#1](../mfc/codesnippet/CPP/mfc-activex-controls-subclassing-a-windows-control_1.h)]  
  
 Nel file di implementazione del controllo \(.CPP\), aggiungere le seguenti righe di codice per implementare le due funzioni sottoposte a override:  
  
 [!code-cpp[NVC_MFC_AxSub#2](../mfc/codesnippet/CPP/mfc-activex-controls-subclassing-a-windows-control_2.cpp)]  
  
 Si noti che, in questo esempio, il pulsante Windows viene specificato in `PreCreateWindow`.  Tuttavia, tutti i controlli Windows standard possono essere sottoclassati.  Per ulteriori informazioni sui controlli Windows standard, vedere [Controlli](../mfc/controls-mfc.md).  
  
 Quando si crea una sottoclasse di un controllo Windows, è possibile specificare uno stile particolare per la finestra \(**WS\_**\) o lo stile esteso della finestra \(**WS\_EX\_**\) contrassegnata per essere utilizzato nella creazione della finestra del controllo.  È possibile impostare valori per questi parametri nella funzione membro `PreCreateWindow` modificando **cs.style** e i campi della struttura **cs.dwExStyle**.  Le modifiche apportate a questi campi devono essere apportate mediante un'operazione `OR`, per conservare i flag di impostazione predefinita impostati dalla classe `COleControl`.  Ad esempio, se il controllo è una sottoclasse del pulsante e si desidera che il controllo venga visualizzato come casella di controllo, inserire la seguente riga di codice nell'implementazione di `CSampleCtrl::PreCreateWindow`, prima dell'istruzione return:  
  
 [!code-cpp[NVC_MFC_AxSub#3](../mfc/codesnippet/CPP/mfc-activex-controls-subclassing-a-windows-control_3.cpp)]  
  
 Questo passaggio aggiunge il flag di stile **BS\_CHECKBOX**, mentre lascia il flag dello stile predefinito \(**WS\_CHILD**\) della classe `COleControl` invariato.  
  
##  <a name="_core_modifying_the_ondraw_member_function"></a> Modificare la funzione membro OnDraw  
 Se si desidera che il controllo sottoclassato mantenga lo stesso aspetto del controllo Windows corrispondente, la funzione membro `OnDraw` per il controllo deve contenere solo una chiamata a una funzione membro `DoSuperclassPaint`, come nel seguente esempio:  
  
 [!code-cpp[NVC_MFC_AxSub#4](../mfc/codesnippet/CPP/mfc-activex-controls-subclassing-a-windows-control_4.cpp)]  
  
 La funzione membro `DoSuperclassPaint`, implementata da `COleControl`, utilizza la procedura della finestra del controllo Windows per disegnare il controllo nel contesto di dispositivo specificato, all'interno del rettangolo di delimitazione.  In questo modo il controllo viene visualizzato anche quando non è attivo.  
  
> [!NOTE]
>  La funzione membro `DoSuperclassPaint` funziona solo con i tipi di controllo che consentono ad un contesto di dispositivo di essere passato come **wParam** di un messaggio `WM_PAINT`.  Ciò include alcuni controlli Windows standard, ad esempio **SCROLLBAR** e **BUTTON** e tutti i controlli comuni.  Per i controlli che non supportano questo comportamento, è necessario fornire il proprio codice correttamente per visualizzare un controllo inattivo.  
  
##  <a name="_core_handling_reflected_window_messages"></a> Gestire i messaggi riprodotti della finestra  
 I controlli Windows in genere inviano determinati messaggi finestra alla loro finestra padre.  Alcuni di questi messaggi, ad esempio **WM\_COMMAND**, forniscono le notifiche di un'azione dell'utente.  Altri, come `WM_CTLCOLOR`, vengono utilizzati per ottenere informazioni dalla finestra padre.  Un controllo ActiveX in genere comunica con la finestra padre in altri modi.  Le notifiche vengono passate generando eventi \(inviando notifiche di eventi\) e le informazioni sul contenitore di controlli vengono ottenute accedendo alle proprietà di ambiente del contenitore.  Poiché queste tecniche di comunicazione esistono, i contenitori di controllo ActiveX non prevedono l'elaborazione di alcuni messaggi finestra inviati dal controllo.  
  
 Per impedire al contenitore di ricevere dei messaggi finestra inviati da un controllo Windows sottoclassato, `COleControl` crea una finestra aggiuntiva che serve da controllo padre.  Questa finestra aggiuntiva, denominata "riflettore," viene creata solo per un controllo ActiveX che estende un controllo Windows e dispone della stessa dimensione e posizione della finestra di controllo.  La finestra di ricezione intercetta determinati messaggi della finestra e li invia al controllo.  Il controllo, nella routine della finestra, può quindi elaborare questi messaggi di ricezione intraprendendo le opportune azioni su un controllo ActiveX \(ad esempio, generando un evento\).  Vedere [ID del messaggio della finestra di ricezione](../mfc/reflected-window-message-ids.md) per un elenco di messaggi della finestra intercettati e dei relativi messaggi di ricezione corrispondenti.  
  
 Un contenitore di controlli ActiveX può essere progettato per eseguire la reflection del messaggio stesso, eliminando a `COleControl` la necessità di creare la finestra di ricezione e riducendo il sovraccarico di runtime per un controllo Windows sottoclassato.  `COleControl` determina se il contenitore supporta questa funzionalità verificando una proprietà di ambiente MessageReflect con un valore **TRUE**.  
  
 Per gestire un messaggio della finestra di ricezione, aggiungere una voce alla mappa dei messaggi del controllo ed implementare una funzione di gestione.  Poiché i messaggi riprodotti non fanno parte dello standard dei messaggi definiti da Windows, la Visualizzazione classi non supporta l'aggiunta di tali gestori di messaggi.  Tuttavia, non è difficile aggiungere un gestore manualmente.  
  
 Per aggiungere un gestore messaggi per un messaggio della finestra di ricezione manualmente effettuare le operazioni seguenti:  
  
-   Nel file .H della classe del controllo, dichiarare una funzione di gestione.  La funzione deve avere un tipo restituito **LRESULT** e due parametri, con tipi **WPARAM** e **LPARAM**, rispettivamente.  Di seguito è riportato un esempio.  
  
     [!code-cpp[NVC_MFC_AxSub#5](../mfc/codesnippet/CPP/mfc-activex-controls-subclassing-a-windows-control_5.h)]  
    [!code-cpp[NVC_MFC_AxSub#6](../mfc/codesnippet/CPP/mfc-activex-controls-subclassing-a-windows-control_6.h)]  
  
-   Nel file .CPP della classe del controllo, aggiungere una voce `ON_MESSAGE` alla mappa messaggi.  I parametri di questa voce devono essere l'identificatore del messaggio e il nome della funzione di gestione.  Di seguito è riportato un esempio.  
  
     [!code-cpp[NVC_MFC_AxSub#7](../mfc/codesnippet/CPP/mfc-activex-controls-subclassing-a-windows-control_7.cpp)]  
  
-   Sempre nel file .CPP, implementare la funzione membro **OnOcmCommand** per elaborare il messaggio riprodotto.  I parametri **wParam** e **lParam** sono uguali a quelli del messaggio originale della finestra.  
  
 Per un esempio di come i messaggi riprodotti vengono elaborati, fare riferimento all'esempio dei controlli ActiveX MFC [BUTTON](../top/visual-cpp-samples.md).  Viene illustrato un gestore **OnOcmCommand** che rileva codice della notifica **BN\_CLICKED** e risponde generando \(inviando\) un evento Click.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)