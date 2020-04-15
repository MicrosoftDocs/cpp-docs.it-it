---
title: 'TN024: risorse e messaggi definiti da MFC'
ms.date: 11/04/2016
helpviewer_keywords:
- resources [MFC]
- Windows messages [MFC], MFC-defined
- messages [MFC], MFC
- TN024
ms.assetid: c65353ce-8096-454b-ad22-1a7a1dd9a788
ms.openlocfilehash: 24bcacd46b839babe9c9c89facb1cc56d18c0ee5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370358"
---
# <a name="tn024-mfc-defined-messages-and-resources"></a>TN024: risorse e messaggi definiti da MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota vengono descritti i messaggi interni di Windows e i formati di risorse utilizzati da MFC. Queste informazioni illustrano l'implementazione del framework e consentono di eseguire il debug dell'applicazione. Per i più avventurosi, anche se tutte queste informazioni sono ufficialmente non supportate, è possibile utilizzare alcune di queste informazioni per implementazioni avanzate.

Questa nota contiene i dettagli di implementazione privata MFC; tutti i contenuti sono soggetti a modifiche in futuro. I messaggi privati di Windows MFC hanno significato nell'ambito di una sola applicazione, ma verranno modificati in futuro per contenere messaggi a livello di sistema.

L'intervallo di messaggi privati di Windows MFC e i tipi di risorse sono nell'intervallo riservato "sistema" accantonato da Microsoft Windows. Attualmente non vengono utilizzati tutti i numeri negli intervalli e, in futuro, è possibile utilizzare nuovi numeri nell'intervallo. I numeri attualmente utilizzati possono essere modificati.

I messaggi privati di Windows MFC sono compresi nell'intervallo 0x360->0x37F.

I tipi di risorse private MFC sono compresi nell'intervallo 0xF0->0xFF.

**Messaggi privati di Windows MFC**

Questi messaggi di Windows vengono utilizzati al posto delle funzioni virtuali di C, in cui è richiesto un accoppiamento relativamente debole tra gli oggetti finestra e in cui non sarebbe appropriata una funzione virtuale di C.

Questi messaggi privati di Windows e le strutture di parametri associate vengono dichiarati nell'intestazione privata MFC 'AFXPRIV. H'. Tenere presente che il codice che include questa intestazione potrebbe basarsi su un comportamento non documentato e probabilmente si interromperà nelle versioni future di MFC.

Nel raro caso in cui sia necessario gestire uno di questi messaggi, è necessario utilizzare la macro della mappa messaggi di ON_MESSAGE e gestire il messaggio nel formato lRESULT/WPARAM/LPARAM generico.

**WM_QUERYAFXWNDPROC**

Questo messaggio viene inviato a una finestra che viene creata. Viene inviato molto presto nel processo di creazione come metodo per determinare se WndProc è **AfxWndProc. AfxWndProc** restituisce 1.

|||
|-|-|
|wParam|Non usato|
|lParam|Non usato|
|Restituisce|1 se elaborato da **AfxWndProc**|

**WM_SIZEPARENT**

Questo messaggio viene inviato da una finestra cornice ai `CFrameWnd::RecalcLayout` relativi `CWnd::RepositionBars`elementi figlio immediati durante il ridimensionamento (`CFrameWnd::OnSize` chiamate che chiamano ) per riposizionare le barre di controllo intorno al lato del frame. Il AFX_SIZEPARENTPARAMS struttura contiene il rettangolo client disponibile corrente dell'elemento padre e `DeferWindowPos` un HDWP (che può essere NULL) con cui chiamare per ridurre al minimo il ridisegno.

|||
|-|-|
|wParam|Non usato|
|lParam|Indirizzo di una struttura AFX_SIZEPARENTPARAMS|
|Restituisce|Non utilizzato (0)|

Ignorare il messaggio indica che la finestra non prende parte al layout.

**WM_SETMESSAGESTRING**

Questo messaggio viene inviato a una finestra cornice per chiedere di aggiornare la riga del messaggio nella barra di stato. È possibile specificare un ID stringa o un LPCSTR (ma non entrambi).

|||
|-|-|
|wParam|ID stringa (o zero)|
|lParam|LPCSTR per la stringa (o NULL)|
|Restituisce|Non utilizzato (0)|

**WM_IDLEUPDATECMDUI**

Questo messaggio viene inviato in tempo di inattività per implementare l'aggiornamento in tempo di inattività dei gestori dell'interfaccia utente del comando di aggiornamento. Se la finestra (in genere una barra di `CCmdUI` controllo) gestisce il messaggio, `CCmdUI::DoUpdate` crea un oggetto (o un oggetto di una classe derivata) e chiamare per ognuno degli "elementi" nella finestra. Questo a sua volta controllerà un gestore di ON_UPDATE_COMMAND_UI per gli oggetti nella catena di gestori di comandi.

|||
|-|-|
|wParam|BOOL bDisableIfNoHandler|
|lParam|Non utilizzato (0)|
|Restituisce|Non utilizzato (0)|

*bDisableIfNoHandler* è diverso da zero per disabilitare l'oggetto dell'interfaccia utente se non è presente alcuna ON_UPDATE_COMMAND_UI né un gestore di ON_COMMAND.

**WM_EXITHELPMODE**

Questo messaggio viene inviato `CFrameWnd` a un che per uscire dalla modalità di aiuto sensibile al contesto. La ricezione di questo messaggio termina `CFrameWnd::OnContextHelp`il ciclo modale avviato da .

|||
|-|-|
|wParam|Non utilizzato (0)|
|lParam|Non utilizzato (0)|
|Restituisce|Non usato|

**WM_INITIALUPDATE**

Questo messaggio viene inviato dal modello di documento a tutti i discendenti di una finestra cornice quando è sicuro per loro di eseguire l'aggiornamento iniziale. Esegue il mapping `CView::OnInitialUpdate` a una chiamata `CWnd`a ma può essere utilizzato in altre classi derivate per altri aggiornamenti one-shot.

|||
|-|-|
|wParam|Non utilizzato (0)|
|lParam|Non utilizzato (0)|
|Restituisce|Non utilizzato (0)|

**WM_RECALCPARENT**

Questo messaggio viene inviato da una visualizzazione `GetParent`alla finestra padre (ottenuta tramite ) `RecalcLayout`per forzare un ricalcolo del layout (in genere, l'elemento padre chiamerà ). Viene utilizzato nelle applicazioni server OLE in cui è necessario che le dimensioni del frame aumentano man mano che aumenta la dimensione totale della visualizzazione.

Se la finestra padre elabora questo messaggio deve restituire TRUE e riempire il RECT passato lParam con le nuove dimensioni dell'area client. Viene utilizzato `CScrollView` per gestire correttamente le barre di scorrimento (posizionare quindi all'esterno della finestra quando vengono aggiunte) quando un oggetto server è attivato sul posto.

|||
|-|-|
|wParam|Non utilizzato (0)|
|lParam|LPRECT rectClient, può essere NULL|
|Restituisce|TRUE se viene restituito un nuovo rettangolo client, FALSE in caso contrario|

**WM_SIZECHILD**

Questo messaggio viene `COleResizeBar` inviato dalla finestra `GetOwner`proprietaria (tramite ) quando l'utente ridimensiona la barra di ridimensionamento con i quadratini di ridimensionamento. `COleIPFrameWnd`risponde a questo messaggio tentando di riposizionare la finestra cornice come richiesto dall'utente.

Il nuovo rettangolo, specificato in coordinate client relative alla finestra cornice che contiene la barra di ridimensionamento, è indicato da lParam.

|||
|-|-|
|wParam|Non utilizzato (0)|
|lParam|LPRECT rectNuovo|
|Restituisce|Non utilizzato (0)|

**WM_DISABLEMODAL**

Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice che viene disattivata. La finestra cornice utilizza il risultato per determinare se disabilitare o meno la finestra popup.

È possibile utilizzare questa opzione per eseguire un'elaborazione speciale nella finestra popup quando il frame entra in uno stato modale o per impedire che determinate finestre popup vengano disabilitate. Le descrizioni comandi usano questo messaggio per distruggersi quando la finestra cornice passa in uno stato modale, ad esempio.

|||
|-|-|
|wParam|Non utilizzato (0)|
|lParam|Non utilizzato (0)|
|Restituisce|Diverso da zero per **NON** disabilitare la finestra, 0 indica che la finestra sarà disabilitata|

**WM_FLOATSTATUS**

Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice quando il frame viene attivato o disattivato da un'altra finestra cornice di primo livello. Viene utilizzato dall'implementazione `CMiniFrameWnd`di MFS_SYNCACTIVE in , per mantenere sincronizzata l'attivazione di queste finestre popup con l'attivazione della finestra cornice di primo livello.

|||
|-|-|
|wParam|Uno dei valori seguenti:<br /><br /> FS_SHOW<br /><br /> FS_HIDE<br /><br /> FS_ACTIVATE<br /><br /> FS_DEACTIVATE<br /><br /> FS_ENABLEFS_DISABLE<br /><br /> FS_SYNCACTIVE|
|lParam|Non utilizzato (0)|

Il valore restituito deve essere diverso da zero se FS_SYNCACTIVE è impostata e la finestra sincronizza la relativa attivazione con il frame padre. `CMiniFrameWnd`restituisce diverso da zero quando lo stile è impostato su MFS_SYNCACTIVE.

Per ulteriori informazioni, vedere `CMiniFrameWnd`l'implementazione di .

## <a name="wm_activatetoplevel"></a>WM_ACTIVATETOPLEVEL

Questo messaggio viene inviato a una finestra di primo livello quando una finestra nel relativo "gruppo di primo livello" viene attivata o disattivata. Una finestra fa parte di un gruppo di primo livello se è una finestra di primo livello (nessun padre o proprietario) o è di proprietà di tale finestra. Questo messaggio è simile in termini di WM_ACTIVATEAPP, ma funziona in situazioni in cui le finestre appartenenti a processi diversi vengono mescolate in una singola gerarchia di finestre (comune nelle applicazioni OLE).

## <a name="wm_commandhelp-wm_helphittest-wm_exithelpmode"></a>WM_COMMANDHELP, WM_HELPHITTEST, WM_EXITHELPMODE

Questi messaggi vengono utilizzati nell'implementazione della Guida sensibile al contesto. Per ulteriori informazioni, fare riferimento alla [nota tecnica 28.](../mfc/tn028-context-sensitive-help-support.md)

## <a name="mfc-private-resource-formats"></a>Formati di risorse private MFC

Attualmente, MFC definisce due formati di risorse private: RT_TOOLBAR e RT_DLGINIT.

## <a name="rt_toolbar-resource-format"></a>RT_TOOLBAR il formato delle risorse

La barra degli strumenti predefinita fornita da AppWizard si basa su una RT_TOOLBAR risorsa personalizzata, introdotta in MFC 4.0. È possibile modificare questa risorsa utilizzando l'editor della barra degli strumenti.

## <a name="rt_dlginit-resource-format"></a>RT_DLGINIT formato delle risorse

Un formato di risorsa privata MFC viene utilizzato per archiviare informazioni aggiuntive sull'inizializzazione della finestra di dialogo. Sono incluse le stringhe iniziali archiviate in una casella combinata. Il formato di questa risorsa non è progettato per essere modificato manualmente, ma viene gestito da Visual C.

Non è necessario RT_DLGINIT utilizzare le funzionalità correlate di MFC, poiché esistono alternative API all'utilizzo delle informazioni nella risorsa. L'utilizzo di Visual Cè semplifica molto la scrittura, la gestione e la traduzione dell'applicazione a lungo termine.

La struttura di base di una risorsa RT_DLGINIT è la seguente:The basic structure of a RT_DLGINIT resource is as follows:

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

Una sezione ripetuta contiene l'ID di controllo a cui inviare il messaggio, il messaggio da inviare (un normale messaggio di Windows) e una lunghezza variabile dei dati. Il messaggio di Windows viene inviato in un formato:

```
SendDlgItemMessage(<Control ID>, <Message #>, 0, &<Data>);
```

Questo è un formato molto generale, che consente qualsiasi messaggio di Windows e il contenuto dei dati. L'editor di risorse di Visual C, e MFC supportano solo un sottoinsieme limitato di messaggi di Windows: CB_ADDSTRING per le scelte di elenco iniziali per le caselle combinate (i dati sono una stringa di testo).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
