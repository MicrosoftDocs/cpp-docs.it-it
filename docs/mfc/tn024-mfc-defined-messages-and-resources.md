---
title: 'TN024: Risorse e messaggi definiti MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a21ae615a3f4c644f6f0aa7c8f1306378a00ae5c
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36957185"
---
# <a name="tn024-mfc-defined-messages-and-resources"></a>TN024: risorse e messaggi definiti da MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota vengono descritti i messaggi interni di Windows e formati di risorse utilizzati da MFC. Queste informazioni viene illustrata l'implementazione del framework e risposte saranno utili per il debug dell'applicazione. Per installati, anche se non sono ufficialmente supportate, tutte queste informazioni possono utilizzare alcune di queste informazioni per le implementazioni avanzate.  
  
 In questa nota contiene i dettagli dell'implementazione privata MFC; tutto il contenuto è soggetti a modifiche in futuro. Messaggi Windows privati MFC hanno un significato nell'ambito di un'applicazione solo ma verranno modificata in futuro per contenere i messaggi a livello di sistema.  
  
 I tipi di risorse e i messaggi Windows privati intervallo di MFC sono nell'intervallo riservato "system" riservare da Microsoft Windows. Attualmente non tutti i numeri compresi negli intervalli vengono utilizzati e, in futuro, nuovi numeri dell'intervallo possono essere utilizzati. È possibile modificare i numeri di attualmente in uso.  
  
 Windows privati MFC messaggi sono compresi nell'intervallo 0x360 -> 0x37F.  
  
 Risorsa privata MFC tipi sono compresi nell'intervallo 0xF0 -> 0xFF.  
  
 **Messaggi Windows privati MFC**  
  
 Questi messaggi di Windows vengono utilizzati al posto di funzioni virtuali C++ in cui è necessario relativamente regime di controllo libero tra oggetti delle finestre e in cui una funzione virtuale C++ non sarebbe appropriata.  
  
 Questi messaggi Windows privati e strutture di parametri associati vengono dichiarate nell'intestazione MFC privata ' AFXPRIV. H'. Verrai avvisato che qualsiasi del codice che include l'intestazione potrebbe essere basarsi su un comportamento non documentato e interruzione probabilmente verrà in futuro le versioni di MFC.  
  
 Nel raro caso di necessità di gestire uno di questi messaggi, è necessario utilizzare la macro di mappa messaggi ON_MESSAGE e gestire il messaggio nel formato LRESULT/WPARAM/LPARAM generico.  
  
 **WM_QUERYAFXWNDPROC**  
  
 Questo messaggio viene inviato a una finestra che viene creata. Questo messaggio viene inviato all'inizio del processo di creazione di un metodo per determinare se è WndProc **AfxWndProc. AfxWndProc** restituisce 1.  
  
|||  
|-|-|  
|wParam|Non utilizzato|  
|lParam|Non utilizzato|  
|restituisce|1 se elaborato da **AfxWndProc**|  
  
 **WM_SIZEPARENT**  
  
 Questo messaggio viene inviato da una finestra cornice per gli elementi figlio diretti durante il ridimensionamento (`CFrameWnd::OnSize` chiamate `CFrameWnd::RecalcLayout` quali chiamate `CWnd::RepositionBars`) per riposizionare le barre di controllo intorno al lato del frame. La struttura AFX_SIZEPARENTPARAMS contiene il rettangolo client disponibili corrente del padre e un HDWP (che può essere NULL) con cui si desidera chiamare `DeferWindowPos` per ridurre al minimo l'aggiornamento.  
  
|||  
|-|-|  
|wParam|Non utilizzato|  
|lParam|Indirizzo di una struttura AFX_SIZEPARENTPARAMS|  
|restituisce|Non usato (0)|  
  
 Ignorare il messaggio indica che la finestra non prendere parte nel layout.  
  
 **WM_SETMESSAGESTRING**  
  
 Questo messaggio viene inviato a una finestra cornice per richiedere di aggiornare la riga di messaggio nella barra di stato. Un ID di stringa o un LPCSTR può essere specificata (ma non entrambi).  
  
|||  
|-|-|  
|wParam|Stringa ID (o zero)|  
|lParam|LPCSTR per la stringa (o NULL)|  
|restituisce|Non usato (0)|  
  
 **WM_IDLEUPDATECMDUI**  
  
 Questo messaggio viene inviato nel tempo di inattività per implementare l'aggiornamento di tempo di inattività dei gestori di comando di aggiornamento dell'interfaccia utente. Se la finestra (in genere una barra di controllo) gestisce il messaggio, viene creata una `CCmdUI` oggetto (o un oggetto di una classe derivata) e chiamare `CCmdUI::DoUpdate` per ognuna delle "elementi" nella finestra. A sua volta verranno controllati per un gestore ON_UPDATE_COMMAND_UI per gli oggetti nella catena di gestori di comandi.  
  
|||  
|-|-|  
|wParam|BDisableIfNoHandler BOOL|  
|lParam|Non usato (0)|  
|restituisce|Non usato (0)|  
  
 *bDisableIfNoHandler* è diverso da zero per disabilitare l'oggetto dell'interfaccia utente, se non è né un ON_UPDATE_COMMAND_UI né un gestore ON_COMMAND.  
  
 **WM_EXITHELPMODE**  
  
 Questo messaggio viene pubblicato in un `CFrameWnd` che per uscire dall'installazione sensibile al contesto modalità Guida in linea. La ricezione di questo messaggio viene terminato il ciclo modale avviato da `CFrameWnd::OnContextHelp`.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|Non usato (0)|  
|restituisce|Non utilizzato|  
  
 **WM_INITIALUPDATE**  
  
 Questo messaggio viene inviato dal modello di documento per tutti i discendenti di una finestra cornice quando è sicuro per eseguire l'aggiornamento iniziale. Viene eseguito il mapping a una chiamata a `CView::OnInitialUpdate` ma può essere utilizzato in altre `CWnd`-derivate per altri monofase l'aggiornamento.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|Non usato (0)|  
|restituisce|Non usato (0)|  
  
 **WM_RECALCPARENT**  
  
 Questo messaggio viene inviato da una vista alla finestra padre (ottenuto tramite `GetParent`) per forzare un ricalcolo di layout (in genere, l'elemento padre chiamerà `RecalcLayout`). Viene utilizzato nelle applicazioni server OLE in cui è necessario per l'aumento delle dimensioni man mano che aumenta di dimensione totale della vista del frame.  
  
 Se la finestra padre elabora il messaggio deve restituire TRUE e compilare il rettangolo passato lParam con le nuove dimensioni dell'area client. Viene utilizzato per `CScrollView` gestire correttamente le barre di scorrimento (luogo quindi all'esterno della finestra quando vengono aggiunte) quando un oggetto server è attivato sul posto.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|LPRECT rectClient, può essere NULL|  
|restituisce|Rettangolo client TRUE se la nuova restituito, FALSE in caso contrario|  
  
 **WM_SIZECHILD**  
  
 Questo messaggio viene inviato dal `COleResizeBar` alla corrispondente finestra proprietario (tramite `GetOwner`) quando l'utente ridimensiona la barra di ridimensionamento con i quadratini di ridimensionamento. `COleIPFrameWnd` risponde al messaggio mediante un tentativo di modificare la posizione della finestra cornice come l'utente ha richiesto.  
  
 Il nuovo rettangolo, specificato nelle coordinate client relativo alla finestra cornice contenente la barra di ridimensionamento, punta a lParam.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|LPRECT rectNew|  
|restituisce|Non usato (0)|  
  
 **WM_DISABLEMODAL**  
  
 Questo messaggio viene inviato a tutte le finestre popup appartenenti a una finestra cornice che è in corso la disattivazione. La finestra cornice utilizza il risultato per determinare se disabilitare la finestra popup o meno.  
  
 Ciò è possibile utilizzare per eseguire un'elaborazione speciale nella finestra popup quando il frame entra in uno stato modale o per mantenere alcune finestre popup da ottenere disabilitato. Descrizioni comandi utilizzano questo messaggio per eliminare se stessi quando la finestra cornice passa a uno stato modale, ad esempio.  
  
|||  
|-|-|  
|wParam|Non usato (0)|  
|lParam|Non usato (0)|  
|restituisce|Diverso da zero per **non** disattivare la finestra, 0 indica che la finestra verrà disabilitata|  
  
 **WM_FLOATSTATUS**  
  
 Questo messaggio viene inviato a tutte le finestre popup appartenenti a una finestra cornice quando il frame è attivato o disattivato da un'altra finestra cornice di primo livello. Viene utilizzato dall'implementazione di MFS_SYNCACTIVE in `CMiniFrameWnd`, per mantenere sincronizzati con l'attivazione della finestra cornice di primo livello all'attivazione di queste finestre popup.  
  
|||  
|-|-|  
|wParam|È uno dei valori seguenti:<br /><br /> FS_SHOW<br /><br /> FS_HIDE<br /><br /> FS_ACTIVATE<br /><br /> FS_DEACTIVATE<br /><br /> FS_ENABLEFS_DISABLE<br /><br /> FS_SYNCACTIVE|  
|lParam|Non usato (0)|  
  
 Il valore restituito deve essere diverso da zero se FS_SYNCACTIVE viene impostato e sincronizza la finestra relativa attivazione con il frame padre. `CMiniFrameWnd` Restituisce diversi da zero quando lo stile è impostato su MFS_SYNCACTIVE.  
  
 Per altre informazioni, vedere l'implementazione di `CMiniFrameWnd`.  
  
## <a name="wmactivatetoplevel"></a>WM_ACTIVATETOPLEVEL  
 Questo messaggio viene inviato alla finestra di primo livello quando una finestra del "gruppo di livello superiore" è attivata o disattivata. Una finestra è parte di un gruppo di livello superiore è una finestra di primo livello (principale o proprietario), se appartiene a tale finestra. Questo messaggio è simile in uso a WM_ACTIVATEAPP, ma funziona in situazioni in cui windows appartenenti a diversi processi sono combinati in una gerarchia unica finestra (comune nelle applicazioni OLE).  
  
## <a name="wmcommandhelp-wmhelphittest-wmexithelpmode"></a>WM_EXITHELPMODE WM_COMMANDHELP, WM_HELPHITTEST,  
 Questi messaggi vengono utilizzati nell'implementazione della Guida sensibile al contesto. Consultare [28 Nota tecnica](../mfc/tn028-context-sensitive-help-support.md) per altre informazioni.  
  
## <a name="mfc-private-resource-formats"></a>Formati di risorse privati MFC  
 Attualmente, MFC definisce due formati di risorsa privata: RT_TOOLBAR e RT_DLGINIT.  
  
## <a name="rttoolbar-resource-format"></a>Formato della risorsa RT_TOOLBAR  
 La barra degli strumenti predefinita fornita dalla creazione guidata applicazioni è basato su una risorsa RT_TOOLBAR personalizzata, che è stata introdotta in 4.0 di MFC. È possibile modificare la risorsa utilizzando l'editor barra degli strumenti.  
  
## <a name="rtdlginit-resource-format"></a>Formato della risorsa RT_DLGINIT  
 Un formato di risorsa privata MFC viene utilizzato per archiviare le informazioni di inizializzazione finestra di dialogo aggiuntive. Sono incluse le stringhe iniziale archiviate in una casella combinata. Il formato della risorsa non è progettato per essere modificato manualmente, ma viene gestita da Visual C++.  
  
 Visual C++ e la risorsa RT_DLGINIT non è necessario utilizzare le funzionalità di MFC, poiché sono presenti alternativa API a utilizzando le informazioni nella risorsa. Utilizzo di Visual C++ rende molto più semplice scrivere, mantenere e tradurre l'applicazione a lungo termine.  
  
 La struttura di base di una risorsa RT_DLGINIT è il seguente:  
  
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
  
 Una sezione ripetuta contiene l'ID di controllo per inviare il messaggio, il messaggio # per trasmissione (un normale messaggio di Windows) e una lunghezza variabile di dati. In un form viene inviato il messaggio di Windows:  
  
```  
SendDlgItemMessage(<Control ID>, <Message #>, 0, &<Data>);
```  
  
 Si tratta di un formato molto generale, consentendo di eventuali messaggi di Windows e il contenuto dei dati. L'editor di risorse di Visual C++ e MFC supportano solo un sottoinsieme limitato dei messaggi di Windows: CB_ADDSTRING per le scelte elenco iniziale per le caselle combinate (i dati sono una stringa di testo).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

