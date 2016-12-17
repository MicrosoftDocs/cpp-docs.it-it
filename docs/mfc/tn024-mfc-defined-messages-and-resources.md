---
title: "TN024: risorse e messaggi definiti da MFC | Microsoft Docs"
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
  - "vc.mfc.messages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messaggi [C++], MFC"
  - "risorse [MFC]"
  - "TN024"
  - "messaggi Windows [C++], definizione di MFC"
ms.assetid: c65353ce-8096-454b-ad22-1a7a1dd9a788
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN024: risorse e messaggi definiti da MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota vengono descritti i messaggi di windows e i formati interni delle risorse utilizzate da MFC.  Queste informazioni vengono illustrati l'implementazione del framework e viene assisteranno il debug dell'applicazione.  Per la avventuroso, anche se tutte queste informazioni sono ufficialmente non supportate, è possibile utilizzare alcune di queste informazioni per le implementazioni avanzate.  
  
 Questa nota contiene i dettagli di implementazione privati di MFC; qualsiasi contenuto è soggetto a modifiche in futuro.  I messaggi privati delle finestre MFC ha senso solo in un'applicazione ma cambiano in futuro per contenere i messaggi a livello di sistema.  
  
 L'intervallo dei messaggi privati delle finestre di MFC e i tipi di risorsa sono nell'intervallo riservato "system" shelving da Microsoft Windows.  Attualmente non tutti i numeri negli intervalli vengono utilizzati e, successivamente, i nuovi numeri nell'intervallo possono essere utilizzati.  I numeri attualmente utilizzati possono essere modificati.  
  
 I messaggi privati delle finestre di MFC sono nell'intervallo 0x360\-0x37F\>.  
  
 Tipi di risorsa privati di MFC sono nell'intervallo 0xF0\-0xFF\>.  
  
 **Messaggi privati delle finestre MFC**  
  
 Questi messaggi di windows vengono utilizzati anziché le funzioni virtuali C\+\+ in cui il motore relativamente separato è necessario tra gli oggetti della finestra e in cui la funzione virtuale di visual c\+\+ non sarebbe appropriata.  
  
 Questi messaggi privati di windows e strutture collegate dei parametri sono dichiarati nell'intestazione privata "AFXPRIV.H" MFC.  Sia avvisato che qualsiasi del codice che include questa intestazione possono basarsi su un comportamento non documentato e probabilmente irromperanno le versioni future di MFC.  
  
 Nel caso di necessità comune necessario gestire uno di questi messaggi, è necessario utilizzare la macro della mappa messaggi di `ON_MESSAGE` e gestire il messaggio in formato generico di LRESULT\/WPARAM\/LPARAM.  
  
 **WM\_QUERYAFXWNDPROC**  
  
 Questo messaggio viene inviato a una finestra che viene creata.  Ciò viene inviata molto presto nel processo di creazione di un metodo di determinazione di l WndProc è restituisce 1. **AfxWndProc.**di**AfxWndProc**.  
  
|||  
|-|-|  
|wParam|Non utilizzato|  
|lParam|Non utilizzato|  
|restituisce|1 se elaborato da **AfxWndProc**|  
  
 **WM\_SIZEPARENT**  
  
 Questo messaggio viene inviato da una finestra cornice gli elementi figlio immediati durante il ridimensionamento \(**CFrameWnd::OnSize** chiama `CFrameWnd::RecalcLayout` che chiama `CWnd::RepositionBars`\) per riposizionare le barre di controllo nel lato del frame.  La struttura di **AFX\_SIZEPARENTPARAMS** contiene il rettangolo client disponibile corrente del padre e un HDWP \(che possono essere NULL\) con cui chiamare `DeferWindowPos` per ridurre aggiornare.  
  
|||  
|-|-|  
|wParam|Non utilizzato|  
|lParam|Indirizzo di una struttura di **AFX\_SIZEPARENTPARAMS**|  
|restituisce|Non utilizzato \(0\)|  
  
 La disabilitazione del messaggio indica che la finestra non fa parte del layout.  
  
 **WM\_SETMESSAGESTRING**  
  
 Questo messaggio viene inviato a una finestra cornice per chiederle di aggiornare la riga del messaggio nella barra di stato.  Un ID stringa o un LPCSTR può essere specificato \(ma non entrambi\).  
  
|||  
|-|-|  
|wParam|ID stringa \(o zero\)|  
|lParam|LPCSTR per la stringa \(o NULL\)|  
|restituisce|Non utilizzato \(0\)|  
  
 **WM\_IDLEUPDATECMDUI**  
  
 Questo messaggio viene inviato il tempo di inattività per l'implementazione dell'aggiornamento di tempo di inattività dei gestori dell'interfaccia utente di aggiornamento\- comando.  Se la finestra in genere una barra di controllo\) gestisce il messaggio, creare un oggetto di `CCmdUI` \(o un oggetto di una classe derivata\) e la chiamata **CCmdUI::DoUpdate** "per ciascuno degli elementi" nella finestra.  Questa operazione consente a sua volta verificherà la presenza di un gestore di `ON_UPDATE_COMMAND_UI` per gli oggetti nella catena del gestore comando.  
  
|||  
|-|-|  
|wParam|BDisableIfNoHandler di BOOL|  
|lParam|Non utilizzato \(0\)|  
|restituisce|Non utilizzato \(0\)|  
  
 *il bDisableIfNoHandler* è diverso da zero disabilitare l'oggetto dell'interfaccia utente se è presente né `ON_UPDATE_COMMAND_UI` né un gestore di `ON_COMMAND`.  
  
 **WM\_EXITHELPMODE**  
  
 Questo messaggio viene inviato a `CFrameWnd` che per uscire dalla modalità di guida sensibile al contesto.  La ricezione del messaggio termina il ciclo modale avviato da **CFrameWnd::OnContextHelp.**  
  
|||  
|-|-|  
|wParam|Non utilizzato \(0\)|  
|lParam|Non utilizzato \(0\)|  
|restituisce|Non utilizzato|  
  
 **WM\_INITIALUPDATE**  
  
 Questo messaggio viene inviato dal modello di documento a tutti i discendenti di una finestra cornice quando si preferisce è possibile fare il relativo aggiornamento iniziale.  Esegue il mapping a una chiamata a `CView::OnInitialUpdate` ma può essere utilizzato nell'altro `CWnd`\- classi derivate per aggiornare un singolo.  
  
|||  
|-|-|  
|wParam|Non utilizzato \(0\)|  
|lParam|Non utilizzato \(0\)|  
|restituisce|Non utilizzato \(0\)|  
  
 **WM\_RECALCPARENT**  
  
 Questo messaggio viene inviato da una visualizzazione alla finestra padre \(ottenuta tramite `GetParent`\) per forzare un nuovo calcolo del layout in genere, il padre chiamerà `RecalcLayout`\).  Viene utilizzato nelle applicazioni server OLE in cui è necessario che il frame verrà compilare la dimensione quando la dimensione totale della visualizzazione si compila.  
  
 Se la finestra padre elabora questo messaggio deve restituire TRUE e riempire l'elemento RECT passato in lParam di nuovo ridimensionamento dell'area client.  Viene utilizzato in `CScrollView` correttamente per gestire le barre di scorrimento \(place quindi sull'esterno della finestra quando si aggiungono\) quando un oggetto server è disponibile attivato.  
  
|||  
|-|-|  
|wParam|Non utilizzato \(0\)|  
|lParam|LPRECT rectClient, può essere NULL|  
|restituisce|TRUE se il nuovo rettangolo client restituito in caso contrario, FALSE|  
  
 **WM\_SIZECHILD**  
  
 Questo messaggio viene inviato da `COleResizeBar` alla finestra proprietaria \(tramite `GetOwner`\) quando l'utente ridimensiona la barra di ridimensionamento con quadratini di ridimensionamento.  `COleIPFrameWnd` rispondere a questo messaggio tentando di riposizionare la finestra cornice come l'utente ha richiesto.  
  
 Il nuovo rettangolo, fornite coordinate del client alla finestra cornice contenente la barra di ridimensionamento, è puntata da lParam.  
  
|||  
|-|-|  
|wParam|Non utilizzato \(0\)|  
|lParam|RectNew di LPRECT|  
|restituisce|Non utilizzato \(0\)|  
  
 **WM\_DISABLEMODAL**  
  
 Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice in disattivanda.  La finestra cornice utilizza il risultato per determinare se è presente disabilitare la finestra popup.  
  
 È possibile utilizzare questo metodo per eseguire l'elaborazione speciale nella finestra popup al frame immette uno stato modale o per mantenere alcune finestre popup da ottenere disabilitato.  Le descrizioni comandi utilizzano questo messaggio per distruggere quando la finestra cornice passa allo stato modale, ad esempio.  
  
|||  
|-|-|  
|wParam|Non utilizzato \(0\)|  
|lParam|Non utilizzato \(0\)|  
|restituisce|Diverso da zero a **NON** disabilitare la finestra, 0 indica che la finestra verrà disabilitata|  
  
 **WM\_FLOATSTATUS**  
  
 Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice quando il frame viene attivato o disattivato da un'altra finestra cornice di primo livello.  Viene utilizzato dall'implementazione di **MFS\_SYNCACTIVE** in `CMiniFrameWnd`, per impedire l'attivazione delle finestre popup sincronizzato con l'attivazione della finestra cornice di primo livello.  
  
|||  
|-|-|  
|wParam|È uno dei seguenti valori:<br /><br /> **FS\_SHOW**<br /><br /> **FS\_HIDE**<br /><br /> **FS\_ACTIVATE**<br /><br /> **FS\_DEACTIVATE**<br /><br /> **FS\_ENABLEFS\_DISABLE**<br /><br /> **FS\_SYNCACTIVE**|  
|lParam|Non utilizzato \(0\)|  
  
 Il valore restituito deve essere diverso da zero se **FS\_SYNCACTIVE** viene stabilito e la finestra syncronizes la proprietà attivazione con il frame padre.  restituisce`CMiniFrameWnd` diverso da zero quando lo stile è impostato su **MFS\_SYNCACTIVE.**  
  
 Per ulteriori informazioni, vedere l'implementazione di `CMiniFrameWnd`.  
  
## WM\_ACTIVATETOPLEVEL  
 Questo messaggio viene inviato a una finestra di livello principale quando una finestra nel gruppo "di primo livello" viene attivata o disattivata.  Una finestra appartiene a un gruppo di primo livello se è una finestra di livello principale \(alcun elemento padre proprietaria\), oppure è di proprietà di tale finestra.  Questo messaggio è simile in uso a **WM\_ACTIVATEAPP,** ma a funziona nelle situazioni in cui le finestre che appartengono ai processi differenti vengono combinati in una singola gerarchia della finestra \(comune nelle applicazioni OLE\).  
  
## WM\_COMMANDHELP, WM\_HELPHITTEST, WM\_EXITHELPMODE  
 Questi messaggi sono utilizzati nell'implementazione della guida sensibile al contesto.  In alternativa fare riferimento a [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per ulteriori informazioni.  
  
## Formati privati delle risorse MFC  
 Attualmente, MFC definisce due formati privati risorse: **RT\_TOOLBAR** e **RT\_DLGINIT**.  
  
## Formato delle risorse di RT\_TOOLBAR  
 La barra degli strumenti predefinita fornita da AppWizard è basata su una risorsa personalizzata di **RT\_TOOLBAR**, introdotta in MFC 4,0.  È possibile modificare questa risorsa utilizzando l'editor barra degli strumenti.  
  
## Formato delle risorse di RT\_DLGINIT  
 Un formato privato delle risorse MFC sono archiviate le informazioni di inizializzazione aggiuntive della finestra di dialogo.  Comprende stringhe iniziali archiviate in una casella combinata.  Il formato di questa risorsa non è progettato manualmente per essere modificato, ma è gestito da Visual C\+\+.  
  
 Visual C\+\+ e tale risorsa di **RT\_DLGINIT** non sono necessarie per utilizzare le funzionalità correlate di MFC poiché c'è alternativa di API a utilizzare le informazioni nella risorsa.  Utilizzando Visual C\+\+ rende più facile scrivere, gestire e traslare a lungo termine l'applicazione.  
  
 La struttura di base di una risorsa di **RT\_DLGINIT** è la seguente:  
  
```  
+---------------+                    \  
| Control ID    |   UINT             |  
+---------------+                    |  
| Message #     |   UINT             |  
+---------------+                    |  
|length of data |   DWORD            |  
+---------------+                    |   Repeated  
|   Data        |   Variable Length  |   for each control  
|   ...         |   and Format       |   and message  
+---------------+                    /  
|     0         |   BYTE  
+---------------+  
```  
  
 Una sezione ripetuta contiene l'id del controllo per inviare il messaggio al messaggio, \# \(inviare un messaggio semplice di windows\) e una lunghezza variabile dei dati.  Il messaggio di windows è stato introdotto un form:  
  
```  
SendDlgItemMessage(<Control ID>, <Message #>, 0, &<Data>);  
```  
  
 È molto uno schema generale, consentendo tutti i messaggi di windows e contenuto.  L'editor di risorse di Visual C\+\+ e MFC supportano solo un sottoinsieme limitato dei messaggi di windows: CB\_ADDSTRING per le scelte di iniziali per le caselle combinate \(i dati corrispondono a una stringa di testo.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)