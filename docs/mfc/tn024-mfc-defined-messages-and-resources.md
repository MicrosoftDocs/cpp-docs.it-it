---
title: 'TN024: Risorse e messaggi definiti MFC'
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.messages
helpviewer_keywords:
- resources [MFC]
- Windows messages [MFC], MFC-defined
- messages [MFC], MFC
- TN024
ms.assetid: c65353ce-8096-454b-ad22-1a7a1dd9a788
ms.openlocfilehash: 029177821d37d5d26abe0b39ea1581e8a5ad602b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57278132"
---
# <a name="tn024-mfc-defined-messages-and-resources"></a>TN024: Risorse e messaggi definiti MFC

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive i messaggi interni di Windows e i formati di risorse utilizzati da MFC. Queste informazioni viene illustrata l'implementazione di framework e facilitano il debug dell'applicazione. Per, avventurarci Sebbene tutte queste informazioni non sono ufficialmente supportate, puoi utilizzare alcune di queste informazioni per le implementazioni avanzate.

In questa nota contiene dettagli sull'implementazione privata MFC; tutto il contenuto è soggetti a modifiche in futuro. Messaggi Windows privati MFC hanno un significato nell'ambito di un'applicazione solo ma verranno modificato in futuro per contenere i messaggi a livello di sistema.

I messaggi Windows privati intervallo di MFC e i tipi di risorsa sono nell'intervallo riservato "sistema" riservare da Microsoft Windows. Attualmente non tutti i numeri compresi negli intervalli vengono usati e, in futuro, nuovi numeri nell'intervallo possono essere utilizzati. I numeri di attualmente in uso possono essere modificati.

Windows privati MFC i messaggi sono nell'intervallo 0x360 -> 0x37F.

Risorsa privata MFC tipi sono nell'intervallo 0xF0 -> 0xFF.

**Messaggi Windows privati MFC**

Questi messaggi di Windows vengono utilizzati al posto di funzioni virtuali C++ in cui è necessario relativamente regime di controllo libero tra gli oggetti finestra e in cui una funzione virtuale C++ potrebbe non essere appropriata.

Questi messaggi Windows privati e le strutture di parametro associato vengono dichiarate nell'intestazione privati MFC ' AFXPRIV. H'. Un avviso che qualsiasi codice che include l'intestazione del può basarsi su comportamento non documentato e verranno probabilmente interruzione nelle future versioni di MFC.

Nel raro caso di necessità di gestire uno di questi messaggi, è necessario utilizzare la macro della mappa messaggi ON_MESSAGE e gestire il messaggio nel formato LRESULT/WPARAM/LPARAM generico.

**WM_QUERYAFXWNDPROC**

Questo messaggio viene inviato a una finestra che viene creata. Questo messaggio viene inviato all'inizio del processo di creazione come metodo per determinare se è WndProc **AfxWndProc. AfxWndProc** restituisce 1.

|||
|-|-|
|wParam|Non utilizzato|
|lParam|Non utilizzato|
|restituisce|1 se elaborato da **AfxWndProc**|

**WM_SIZEPARENT**

Questo messaggio viene inviato da una finestra cornice agli immediati elementi figlio durante il ridimensionamento (`CFrameWnd::OnSize` chiamate `CFrameWnd::RecalcLayout` che chiama `CWnd::RepositionBars`) per riposizionare le barre di controllo intorno al lato del frame. La struttura AFX_SIZEPARENTPARAMS contiene il corrente rettangolo client disponibili del padre e un HDWP (che può essere NULL) con cui chiamare il metodo `DeferWindowPos` per ridurre al minimo l'aggiornamento.

|||
|-|-|
|wParam|Non utilizzato|
|lParam|Indirizzo di una struttura AFX_SIZEPARENTPARAMS|
|restituisce|Non usato (0)|

Ignorare il messaggio indica che la finestra non partecipa il layout.

**WM_SETMESSAGESTRING**

Questo messaggio viene inviato a una finestra cornice per richiedere di aggiornare la riga del messaggio nella barra di stato. Un ID di stringa o un LPCSTR può essere specificata (ma non entrambi).

|||
|-|-|
|wParam|Stringa ID (o zero)|
|lParam|LPCSTR per la stringa (o NULL)|
|restituisce|Non usato (0)|

**WM_IDLEUPDATECMDUI**

Questo messaggio viene inviato nel tempo di inattività per implementare l'aggiornamento di tempo di inattività dei gestori di comando di aggiornamento dell'interfaccia utente. Se la finestra (in genere una barra di controllo) gestisce il messaggio, crea una `CCmdUI` oggetto (o un oggetto di una classe derivata) e chiamare `CCmdUI::DoUpdate` per ogni "elemento" nella finestra. Ciò a sua volta cercano un gestore ON_UPDATE_COMMAND_UI per gli oggetti nella catena del gestore comando.

|||
|-|-|
|wParam|BDisableIfNoHandler BOOL|
|lParam|Non usato (0)|
|restituisce|Non usato (0)|

*bDisableIfNoHandler* è diverso da zero per disabilitare l'oggetto dell'interfaccia utente se non è né un ON_UPDATE_COMMAND_UI né un gestore ON_COMMAND.

**WM_EXITHELPMODE**

Questo messaggio viene inviato a un `CFrameWnd` ottimizzati per uscire dalla sensibile al contesto per la modalità. La ricezione del messaggio di questo termina il ciclo modale avviato da `CFrameWnd::OnContextHelp`.

|||
|-|-|
|wParam|Non usato (0)|
|lParam|Non usato (0)|
|restituisce|Non utilizzato|

**WM_INITIALUPDATE**

Questo messaggio viene inviato dal modello di documento per tutti i discendenti di una finestra cornice quando si è sicuro per le loro di svolgere il loro aggiornamento iniziale. Viene eseguito il mapping a una chiamata a `CView::OnInitialUpdate` ma può essere usato in altri `CWnd`-le classi per l'altro aggiornamento monofase derivate.

|||
|-|-|
|wParam|Non usato (0)|
|lParam|Non usato (0)|
|restituisce|Non usato (0)|

**WM_RECALCPARENT**

Questo messaggio viene inviato da una visualizzazione alla finestra padre (ottenuto tramite `GetParent`) per forzare un'operazione di ricalcolo del layout (in genere, l'elemento padre chiamerà `RecalcLayout`). Viene utilizzato nelle applicazioni server OLE in cui è necessario per il frame di aumento delle dimensioni man mano che aumenta di dimensione totale della visualizzazione.

Se la finestra padre elabora il messaggio deve restituire TRUE e riempire il rettangolo passato nel parametro lParam con le nuove dimensioni dell'area client. Viene utilizzato per `CScrollView` gestire correttamente le barre di scorrimento (luogo quindi all'esterno della finestra quando vengono aggiunti) quando un oggetto server è attivato sul posto.

|||
|-|-|
|wParam|Non usato (0)|
|lParam|LPRECT rectClient, può essere NULL|
|restituisce|Rettangolo client TRUE se nuovo restituito, FALSE in caso contrario|

**WM_SIZECHILD**

Questo messaggio viene inviato dal `COleResizeBar` alla finestra del proprietario (tramite `GetOwner`) quando l'utente ridimensiona la barra di ridimensionamento con i quadratini di ridimensionamento. `COleIPFrameWnd` tentativo di modificare la posizione della finestra cornice come l'utente ha richiesto risponde a questo messaggio.

Il nuovo rettangolo, specificato nelle coordinate del client relativa alla finestra cornice che contiene la barra di ridimensionamento, a cui fa riferimento lParam.

|||
|-|-|
|wParam|Non usato (0)|
|lParam|LPRECT rectNew|
|restituisce|Non usato (0)|

**WM_DISABLEMODAL**

Questo messaggio viene inviato a tutte le finestre popup appartenenti a una finestra cornice viene disattivato. La finestra cornice utilizza il risultato per determinare se disabilitare la finestra popup o meno.

Ciò è possibile usare per eseguire un'elaborazione speciale nella finestra popup quando il frame entra in uno stato modale o per impedire che determinate finestre popup per essere disattivato. Le descrizioni comandi usano questo messaggio da eliminare definitivamente autonomamente quando la finestra cornice entra in uno stato modale, ad esempio.

|||
|-|-|
|wParam|Non usato (0)|
|lParam|Non usato (0)|
|restituisce|Diverso da zero per **non** disattivare la finestra, 0 indica che la finestra verrà disabilitata|

**WM_FLOATSTATUS**

Questo messaggio viene inviato a tutte le finestre popup appartenenti a una finestra cornice, quando il frame viene attivato o disattivato da un'altra finestra del frame di primo livello. Viene utilizzato dall'implementazione di MFS_SYNCACTIVE in `CMiniFrameWnd`, per sincronizzare l'attivazione di queste finestre a comparsa con l'attivazione della finestra cornice di primo livello.

|||
|-|-|
|wParam|È uno dei valori seguenti:<br /><br /> FS_SHOW<br /><br /> FS_HIDE<br /><br /> FS_ACTIVATE<br /><br /> FS_DEACTIVATE<br /><br /> FS_ENABLEFS_DISABLE<br /><br /> FS_SYNCACTIVE|
|lParam|Non usato (0)|

Il valore restituito deve essere diverso da zero se FS_SYNCACTIVE è impostata e la finestra Sincronizza l'attivazione con il frame padre. `CMiniFrameWnd` Restituisce diverso da zero quando lo stile è impostato su MFS_SYNCACTIVE.

Per altre informazioni, vedere l'implementazione di `CMiniFrameWnd`.

## <a name="wmactivatetoplevel"></a>WM_ACTIVATETOPLEVEL

Questo messaggio viene inviato alla finestra di primo livello quando una finestra in un "gruppo livello superiore" viene attivata o disattivata. Una finestra è parte di un gruppo di livello superiore, se si tratta di una finestra di primo livello (padre o proprietario) o è di proprietà tale finestra. Questo messaggio è simile in uso a WM_ACTIVATEAPP, ma funziona nelle situazioni in cui windows appartenenti a diversi processi vengono combinati in una gerarchia di singola finestra (problema comune in applicazioni OLE).

## <a name="wmcommandhelp-wmhelphittest-wmexithelpmode"></a>WM_COMMANDHELP, WM_HELPHITTEST, WM_EXITHELPMODE

Questi messaggi vengono usati nell'implementazione della Guida sensibile al contesto. Consultare [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per altre informazioni.

## <a name="mfc-private-resource-formats"></a>Formati di risorse Private MFC

Attualmente, MFC definisce due formati di risorsa privata: RT_TOOLBAR e RT_DLGINIT.

## <a name="rttoolbar-resource-format"></a>Formato della risorsa RT_TOOLBAR

Barra degli strumenti predefinita fornita dalla creazione guidata applicazioni si basa su una risorsa RT_TOOLBAR personalizzata, che è stata introdotta in 4.0 di MFC. È possibile modificare questa risorsa usando l'editor barra degli strumenti.

## <a name="rtdlginit-resource-format"></a>Formato della risorsa RT_DLGINIT

Un formato di risorsa privata MFC viene usato per archiviare informazioni di inizializzazione della finestra di dialogo aggiuntive. Sono incluse le stringhe iniziale archiviate in una casella combinata. Il formato di questa risorsa non è progettato per essere modificato manualmente, ma viene gestita da Visual C++.

Visual C++ e questa risorsa RT_DLGINIT non è necessario utilizzare le relative funzionalità di MFC in quanto non esistono alternativa API a utilizzando le informazioni nelle sezioni della risorsa. Utilizzo di Visual C++ rende molto più semplice da scrivere, gestire e convertire l'applicazione a lungo termine.

La struttura di base di una risorsa RT_DLGINIT è come segue:

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

Una sezione ripetuta contiene l'ID di controllo per inviare il messaggio, il messaggio # per send (un normale messaggio di Windows) e una lunghezza variabile di dati. In un form viene inviato il messaggio di Windows:

```
SendDlgItemMessage(<Control ID>, <Message #>, 0, &<Data>);
```

Questo è un formato molto generico, consentendo tutti i messaggi di Windows e il contenuto dei dati. L'editor di risorse di Visual C++ e MFC supportano solo un subset limitato di messaggi di Windows: CB_ADDSTRING per le scelte elenco iniziale per le caselle combinate (i dati sono una stringa di testo).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
