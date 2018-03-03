---
title: 'TN024: Risorse e messaggi definiti MFC | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- resources [MFC]
- Windows messages [MFC], MFC-defined
- messages [MFC], MFC
- TN024
ms.assetid: c65353ce-8096-454b-ad22-1a7a1dd9a788
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 17aadfd089d6917cd8cded239287034026ff7ad3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn024-mfc-defined-messages-and-resources"></a>TN024: risorse e messaggi definiti da MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota vengono descritti i messaggi interni di Windows e i formati di risorse utilizzati da MFC. Queste informazioni viene illustrata l'implementazione del framework e consentono di eseguire il debug dell'applicazione. Per installati, anche se non sono ufficialmente supportate, tutte queste informazioni possono utilizzare alcune di queste informazioni per le implementazioni avanzate.  
  
 Questa nota contiene i dettagli di implementazione privati MFC; tutto il contenuto è soggetti a modifiche in futuro. Messaggi Windows privati MFC hanno un significato nell'ambito di un'applicazione solo ma verranno modificata in futuro per contenere i messaggi a livello di sistema.  
  
 I tipi di risorse e i messaggi Windows privati intervallo di MFC sono nell'intervallo riservato "system" riservare da Microsoft Windows. Attualmente non tutti i numeri compresi negli intervalli vengono utilizzati e, in futuro, nuovi numeri dell'intervallo possono essere utilizzati. È possibile modificare i numeri attualmente in uso.  
  
 Windows MFC private i messaggi sono incluse nell'intervallo 0x360 -> 0x37F.  
  
 Risorsa privata di MFC tipi sono inclusi nell'intervallo 0xF0 -> 0xFF.  
  
 **Messaggi Windows privati MFC**  
  
 Questi messaggi di Windows vengono utilizzati al posto di funzioni virtuali C++ relativamente a regime di controllo in cui è richiesto tra oggetti delle finestre e in cui una funzione virtuale C++ non sarebbe appropriata.  
  
 Questi messaggi Windows privati e strutture di parametri associati vengono dichiarate nell'intestazione MFC privata ' AFXPRIV. H'. Un avviso che qualsiasi codice che include l'intestazione può basarsi su un comportamento non documentato e interruzione probabilmente verrà in futuro le versioni di MFC.  
  
 Nel raro caso di necessità di gestire uno di questi messaggi, è necessario utilizzare il `ON_MESSAGE` macro di mappa dei messaggi e gestire il messaggio nel formato WPARAM/LRESULT/LPARAM generico.  
  
 **WM_QUERYAFXWNDPROC**  
  
 Questo messaggio viene inviato a una finestra che viene creata. Questo messaggio viene inviato all'inizio del processo di creazione di un metodo per determinare se è WndProc **AfxWndProc. AfxWndProc** restituisce 1.  
  
|||  
|-|-|  
|wParam|Non utilizzato|  
|lParam|Non utilizzato|  
|restituisce|1 se elaborato da **AfxWndProc**|  
  
 **WM_SIZEPARENT**  
  
 Questo messaggio viene inviato da una finestra cornice per gli elementi figlio diretti durante il ridimensionamento (**CFrameWnd::OnSize** chiamate `CFrameWnd::RecalcLayout` che chiama `CWnd::RepositionBars`) per riposizionare le barre di controllo intorno al lato del frame. Il **AFX_SIZEPARENTPARAMS** struttura contiene il rettangolo client disponibili corrente del padre e un HDWP (che può essere NULL) da utilizzare per chiamare `DeferWindowPos` per ridurre al minimo l'aggiornamento.  
  
|||  
|-|-|  
|wParam|Non utilizzato|  
|lParam|Indirizzo di un **AFX_SIZEPARENTPARAMS** struttura|  
|restituisce|Non usato (0)|  
  
 Ignorare il messaggio indica che la finestra non partecipare nel layout.  
  
 **WM_SETMESSAGESTRING**  
  
 Questo messaggio viene inviato a una finestra cornice per richiedere di aggiornare la riga di messaggio nella barra di stato. Un ID di stringa o un LPCSTR può essere specificata (ma non entrambi).  
  
|||  
|-|-|  
|wParam|Stringa ID (o zero)|  
|lParam|LPCSTR per la stringa (o NULL)|  
|restituisce|Non usato (0)|  
  
 **WM_IDLEUPDATECMDUI**  
  
 Questo messaggio viene inviato nel tempo di inattività per implementare l'aggiornamento del tempo di inattività di gestori di comando di aggiornamento dell'interfaccia utente. Se la finestra (in genere una barra di controllo) gestisce il messaggio, viene creato un `CCmdUI` oggetto (o un oggetto di una classe derivata) e chiamare **CCmdUI::DoUpdate** per ogni "elementi" nella finestra. A sua volta verranno controllati per un `ON_UPDATE_COMMAND_UI` gestore per gli oggetti nella catena di gestori di comandi.  
  
|||  
|-|-|  
|wParam|BOOL bDisableIfNoHandler|  
|lParam|Non usato (0)|  
|restituisce|Non usato (0)|  
  
 *bDisableIfNoHandler* è diverso da zero per disabilitare l'oggetto dell'interfaccia utente, se non è presente un `ON_UPDATE_COMMAND_UI` né un `ON_COMMAND` gestore.  
  
 **WM_EXITHELPMODE**  
  
 Questo messaggio viene inserito un `CFrameWnd` che per uscire dall'installazione sensibile al contesto modalità Guida in linea. Ricezione del messaggio termina il ciclo modale tramito **CFrameWnd::OnContextHelp.**  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|Non usato (0)|  
|restituisce|Non utilizzato|  
  
 **WM_INITIALUPDATE**  
  
 Questo messaggio viene inviato tramite il modello di documento per tutti i discendenti di una finestra cornice è sicuro per eseguire l'aggiornamento iniziale. Viene eseguito il mapping a una chiamata a `CView::OnInitialUpdate` ma può essere utilizzato in altre `CWnd`-classe derivata per altri l'aggiornamento monofase.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|Non usato (0)|  
|restituisce|Non usato (0)|  
  
 **WM_RECALCPARENT**  
  
 Questo messaggio viene inviato da una vista alla finestra padre (ottenuto tramite `GetParent`) per forzare un ricalcolo del layout (in genere, si chiamerà l'elemento padre `RecalcLayout`). Viene utilizzato nelle applicazioni server OLE in cui è necessario che l'aumento delle dimensioni man mano che aumenta la dimensione totale della vista del frame.  
  
 Se la finestra padre elabora il messaggio deve restituire TRUE e compilare il rettangolo passato lParam con la nuova dimensione dell'area client. Viene utilizzato per `CScrollView` per gestire correttamente le barre di scorrimento (posto quindi all'esterno della finestra quando vengono aggiunte) quando un oggetto server è attivato sul posto.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|LPRECT rectClient, può essere NULL|  
|restituisce|Rettangolo client TRUE se la nuova restituito, FALSE in caso contrario|  
  
 **WM_SIZECHILD**  
  
 Questo messaggio viene inviato da `COleResizeBar` alla finestra proprietario (tramite `GetOwner`) quando l'utente ridimensiona la barra di ridimensionamento con quadratini di ridimensionamento. `COleIPFrameWnd`il tentativo di modificare la posizione della finestra cornice come l'utente ha richiesto risponde al messaggio.  
  
 Il nuovo rettangolo, specificato nelle coordinate client rispetto alla finestra cornice contenente la barra di ridimensionamento è a cui punta lParam.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|LPRECT rectNew|  
|restituisce|Non usato (0)|  
  
 **WM_DISABLEMODAL**  
  
 Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice viene disattivato. La finestra cornice utilizza il risultato per determinare se si desidera disattivare la finestra popup.  
  
 Questo è possibile utilizzare per eseguire un'elaborazione speciale nella finestra popup quando il frame entra in uno stato modale o per mantenere alcune finestre popup da ottenere disabilitato. Descrizioni comandi utilizzano questo messaggio da eliminare se stessi quando la finestra cornice entra in uno stato modale, ad esempio.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|Non usato (0)|  
|restituisce|Diverso da zero a **non** disattivare la finestra, 0 indica che la finestra verrà disabilitata|  
  
 **WM_FLOATSTATUS**  
  
 Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice quando il frame viene attivato o disattivato da un'altra finestra cornice di primo livello. Viene utilizzato l'implementazione di **MFS_SYNCACTIVE** in `CMiniFrameWnd`, per sincronizzare l'attivazione di queste finestre popup con l'attivazione della finestra cornice di primo livello.  
  
|||  
|-|-|  
|wParam|È uno dei valori seguenti:<br /><br /> **FS_SHOW**<br /><br /> **FS_HIDE**<br /><br /> **FS_ACTIVATE**<br /><br /> **FS_DEACTIVATE**<br /><br /> **FS_ENABLEFS_DISABLE**<br /><br /> **FS_SYNCACTIVE**|  
|lParam|Non usato (0)|  
  
 Il valore restituito deve essere diverso da zero se **FS_SYNCACTIVE** viene impostato e sincronizza la finestra relativa attivazione con il frame padre. `CMiniFrameWnd`Restituisce diverso da zero quando lo stile è impostato su **MFS_SYNCACTIVE.**  
  
 Per ulteriori informazioni, vedere l'implementazione di `CMiniFrameWnd`.  
  
## <a name="wmactivatetoplevel"></a>WM_ACTIVATETOPLEVEL  
 Questo messaggio viene inviato a una finestra di primo livello quando una finestra del "gruppo di livello superiore" viene attivata o disattivata. Se si tratta di una finestra di primo livello (principale o proprietario) o appartiene a tale finestra, una finestra è parte di un gruppo di livello superiore. Questo messaggio è simile in uso per **WM_ACTIVATEAPP,** ma funziona in situazioni in cui windows appartenenti a processi diversi vengono combinati in una gerarchia unica finestra (comune nelle applicazioni OLE).  
  
## <a name="wmcommandhelp-wmhelphittest-wmexithelpmode"></a>WM_EXITHELPMODE WM_COMMANDHELP, WM_HELPHITTEST,  
 Questi messaggi vengono utilizzati nell'implementazione della Guida sensibile al contesto. Consultare [28 Nota tecnica](../mfc/tn028-context-sensitive-help-support.md) per ulteriori informazioni.  
  
## <a name="mfc-private-resource-formats"></a>Formati di risorse MFC privato  
 Attualmente, MFC definisce due formati di risorsa privata: **RT_TOOLBAR** e **RT_DLGINIT**.  
  
## <a name="rttoolbar-resource-format"></a>Formato della risorsa RT_TOOLBAR  
 La barra degli strumenti predefinita fornita dalla creazione guidata applicazioni è basato su un **RT_TOOLBAR** risorsa personalizzata, che è stata introdotta in 4.0 di MFC. È possibile modificare la risorsa utilizzando l'editor barra degli strumenti.  
  
## <a name="rtdlginit-resource-format"></a>Formato della risorsa RT_DLGINIT  
 Un formato di risorsa privata MFC viene utilizzato per archiviare le informazioni di inizializzazione finestra di dialogo aggiuntive. Sono incluse le stringhe iniziale archiviate in una casella combinata. Il formato della risorsa non è progettato per essere modificato manualmente, ma viene gestita da Visual C++.  
  
 Visual C++ e questo **RT_DLGINIT** risorsa non è necessario utilizzare le funzionalità di MFC, poiché sono presenti alternativa API a utilizzando le informazioni della risorsa. Utilizzo di Visual C++ rende molto più semplice da scrivere, mantenere e convertire l'applicazione a lungo termine.  
  
 La struttura di base di un **RT_DLGINIT** risorse sono indicato di seguito:  
  
```  
+---------------+    \  
| Control ID    |   UINT             |  
+---------------+    |  
| Message #     |   UINT             |  
+---------------+    |  
|length of data |   DWORD            |  
+---------------+    |   Repeated  
|   Data        |   Variable Length  |   for each control  
|   ...         |   and Format       |   and message  
+---------------+    /  
|     0         |   BYTE  
+---------------+  
```  
  
 Una sezione ripetuta contiene l'ID di controllo per inviare il messaggio, il messaggio # Invia (un normale messaggio di Windows) e una lunghezza variabile di dati. In un form viene inviato il messaggio di Windows:  
  
```  
SendDlgItemMessage(<Control ID>, <Message #>, 0, &<Data>);
```  
  
 Questo è un formato molto generale, consentendo di eventuali messaggi di Windows e il contenuto dei dati. L'editor di risorse di Visual C++ e MFC supportano solo un sottoinsieme limitato di messaggi di Windows: CB_ADDSTRING per le opzioni di elenco iniziale per le caselle combinate (i dati sono una stringa di testo).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

