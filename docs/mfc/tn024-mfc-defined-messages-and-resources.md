---
description: 'Altre informazioni su: TN024: MFC-Defined messaggi e risorse'
title: 'TN024: risorse e messaggi definiti da MFC'
ms.date: 11/04/2016
helpviewer_keywords:
- resources [MFC]
- Windows messages [MFC], MFC-defined
- messages [MFC], MFC
- TN024
ms.assetid: c65353ce-8096-454b-ad22-1a7a1dd9a788
ms.openlocfilehash: 7ead4d72588b9acae125cbe90be67d1e03230de8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215755"
---
# <a name="tn024-mfc-defined-messages-and-resources"></a>TN024: risorse e messaggi definiti da MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive i messaggi interni di Windows e i formati di risorse utilizzati da MFC. Queste informazioni spiegano l'implementazione del Framework e consentono di eseguire il debug dell'applicazione. Per gli avventurosi, sebbene tutte queste informazioni non siano ufficialmente supportate, è possibile utilizzare alcune di queste informazioni per implementazioni avanzate.

Questa nota contiene i dettagli di implementazione privata MFC; tutto il contenuto è soggetto a modifiche in futuro. I messaggi di Windows privati MFC hanno un significato nell'ambito di un'applicazione, ma in futuro cambieranno in modo da contenere messaggi a livello di sistema.

L'intervallo dei tipi di risorse e dei messaggi di Windows privati MFC si trova nell'intervallo "sistema" riservato, accantonato da Microsoft Windows. Attualmente non vengono utilizzati tutti i numeri degli intervalli e, in futuro, è possibile utilizzare nuovi numeri nell'intervallo. È possibile modificare i numeri attualmente in uso.

I messaggi di Windows privati MFC sono compresi nell'intervallo 0x360->0x37F.

I tipi di risorse private MFC sono compresi nell'intervallo 0xF0->0xFF.

**Messaggi Windows privati MFC**

Questi messaggi di Windows vengono utilizzati al posto delle funzioni virtuali C++ in cui è necessario un accoppiamento relativamente libero tra gli oggetti finestra e in cui una funzione virtuale C++ non è appropriata.

Questi messaggi di Windows privati e le strutture di parametri associate sono dichiarati nell'intestazione privata MFC ' AFXPRIV '. H. Viene visualizzato un avviso per segnalare che qualsiasi codice che includa questa intestazione può basarsi su un comportamento non documentato e probabilmente si interrompe nelle versioni future di MFC.

In rari casi in cui è necessario gestire uno di questi messaggi, è necessario utilizzare la ON_MESSAGE macro della mappa messaggi e gestire il messaggio nel formato generico LRESULT/WPARAM/LPARAM.

**WM_QUERYAFXWNDPROC**

Questo messaggio viene inviato a una finestra in fase di creazione. Questa operazione viene inviata molto presto nel processo di creazione come metodo per determinare se WndProc è **AfxWndProc. AfxWndProc** restituisce 1.

| Parametri e valore restituito | Description |
|-|-|
|wParam|Non usato|
|lParam|Non usato|
|Restituisce|1 se elaborato da **AfxWndProc**|

**WM_SIZEPARENT**

Questo messaggio viene inviato da una finestra cornice agli elementi figlio immediati durante il ridimensionamento (chiama le chiamate `CFrameWnd::OnSize` `CFrameWnd::RecalcLayout` `CWnd::RepositionBars` ) per riposizionare le barre di controllo intorno al lato del frame. La struttura AFX_SIZEPARENTPARAMS contiene il rettangolo client attualmente disponibile dell'elemento padre e un HDWP, che può essere NULL, con il quale chiamare `DeferWindowPos` per ridurre al minimo il ridisegno.

| Parametri e valore restituito | Description |
|-|-|
|wParam|Non usato|
|lParam|Indirizzo di una struttura di AFX_SIZEPARENTPARAMS|
|Restituisce|Non usato (0)|

Ignorando il messaggio si indica che la finestra non partecipa al layout.

**WM_SETMESSAGESTRING**

Questo messaggio viene inviato a una finestra cornice per richiedere di aggiornare la riga del messaggio nella barra di stato. È possibile specificare un ID stringa o un LPCSTR (ma non entrambi).

| Parametri e valore restituito | Description |
|-|-|
|wParam|ID stringa (o zero)|
|lParam|LPCSTR per la stringa (o NULL)|
|Restituisce|Non usato (0)|

**WM_IDLEUPDATECMDUI**

Questo messaggio viene inviato in tempo di inattività per implementare l'aggiornamento del tempo di inattività dei gestori dell'interfaccia utente Update-Command. Se la finestra (in genere una barra di controllo) gestisce il messaggio, viene creato un `CCmdUI` oggetto (o un oggetto di una classe derivata) e viene chiamato `CCmdUI::DoUpdate` per ogni "elemento" nella finestra. In questo modo, a sua volta, viene verificata la presenza di un gestore ON_UPDATE_COMMAND_UI per gli oggetti nella catena del gestore dei comandi.

| Parametri e valore restituito | Description |
|-|-|
|wParam|BOOL bDisableIfNoHandler|
|lParam|Non usato (0)|
|Restituisce|Non usato (0)|

*bDisableIfNoHandler* è diverso da zero per disabilitare l'oggetto UI se non sono presenti né un ON_UPDATE_COMMAND_UI né un gestore ON_COMMAND.

**WM_EXITHELPMODE**

Questo messaggio viene inserito in un oggetto `CFrameWnd` per uscire dalla modalità della Guida sensibile al contesto. La ricezione di questo messaggio termina il ciclo modale avviato da `CFrameWnd::OnContextHelp` .

| Parametro e valore restituito | Description |
|-|-|
|wParam|Non usato (0)|
|lParam|Non usato (0)|
|Restituisce|Non usato|

**WM_INITIALUPDATE**

Questo messaggio viene inviato dal modello di documento a tutti i discendenti di una finestra cornice quando è sicuro che esegua l'aggiornamento iniziale. Viene eseguito il mapping a una chiamata a, `CView::OnInitialUpdate` ma è possibile utilizzarlo in altre `CWnd` classi derivate per l'aggiornamento singolo.

| Parametri e valore restituito | Description |
|-|-|
|wParam|Non usato (0)|
|lParam|Non usato (0)|
|Restituisce|Non usato (0)|

**WM_RECALCPARENT**

Questo messaggio viene inviato da una visualizzazione alla relativa finestra padre (ottenuta tramite `GetParent` ) per forzare un ricalcolo del layout (in genere, l'elemento padre chiamerà `RecalcLayout` ). Questa operazione viene utilizzata nelle applicazioni server OLE in cui è necessario che le dimensioni del frame aumentino in base alla crescita delle dimensioni totali della visualizzazione.

Se la finestra padre elabora questo messaggio, deve restituire TRUE e riempire il RECT passato in lParam con le nuove dimensioni dell'area client. Questa operazione viene utilizzata in `CScrollView` per gestire correttamente le barre di scorrimento (Posizionare quindi all'esterno della finestra quando vengono aggiunte) quando un oggetto server è attivato sul posto.

| Parametri e valore restituito | Description |
|-|-|
|wParam|Non usato (0)|
|lParam|LPRECT rectClient, può essere NULL|
|Restituisce|TRUE se il nuovo rettangolo client viene restituito; in caso contrario, FALSE.|

**WM_SIZECHILD**

Questo messaggio viene inviato da `COleResizeBar` alla finestra proprietaria (via `GetOwner` ) quando l'utente ridimensiona la barra di ridimensionamento con i quadratini di ridimensionamento. `COleIPFrameWnd` risponde a questo messaggio tentando di riposizionare la finestra cornice come richiesto dall'utente.

Il nuovo rettangolo, fornito in coordinate client rispetto alla finestra cornice che contiene la barra di ridimensionamento, è puntato da lParam.

| Parametri e valore restituito | Description |
|-|-|
|wParam|Non usato (0)|
|lParam|RectNew LPRECT|
|Restituisce|Non usato (0)|

**WM_DISABLEMODAL**

Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice che è in fase di disattivazione. La finestra cornice usa il risultato per determinare se disabilitare o meno la finestra popup.

È possibile usarlo per eseguire un'elaborazione speciale nella finestra popup quando il frame entra in uno stato modale o per impedire la disabilitazione di determinate finestre popup. Le descrizioni comandi usano questo messaggio per eliminare le stesse quando la finestra cornice entra in uno stato modale, ad esempio.

| Parametri e valore restituito | Description |
|-|-|
|wParam|Non usato (0)|
|lParam|Non usato (0)|
|Restituisce|Diverso da zero per **non** disabilitare la finestra, 0 indica che la finestra sarà disabilitata|

**WM_FLOATSTATUS**

Questo messaggio viene inviato a tutte le finestre popup di proprietà di una finestra cornice quando il frame viene attivato o disattivato da un'altra finestra cornice di primo livello. Viene utilizzato dall'implementazione di MFS_SYNCACTIVE in `CMiniFrameWnd` per impedire l'attivazione di queste finestre popup sincronizzate con l'attivazione della finestra cornice di primo livello.

| Parametri | Description |
|-|-|
|wParam|Uno dei valori seguenti:<br /><br /> FS_SHOW<br /><br /> FS_HIDE<br /><br /> FS_ACTIVATE<br /><br /> FS_DEACTIVATE<br /><br /> FS_ENABLEFS_DISABLE<br /><br /> FS_SYNCACTIVE|
|lParam|Non usato (0)|

Il valore restituito deve essere diverso da zero se FS_SYNCACTIVE è impostato e la finestra syncronizes l'attivazione con il frame padre. `CMiniFrameWnd` Restituisce un valore diverso da zero quando lo stile è impostato su MFS_SYNCACTIVE.

Per ulteriori informazioni, vedere l'implementazione di `CMiniFrameWnd` .

## <a name="wm_activatetoplevel"></a>WM_ACTIVATETOPLEVEL

Questo messaggio viene inviato a una finestra di primo livello quando una finestra nel relativo gruppo di livello superiore viene attivata o disattivata. Una finestra fa parte di un gruppo di livello principale se si tratta di una finestra di primo livello (nessun elemento padre o proprietario) o di proprietà di tale finestra. Questo messaggio è analogo all'utilizzo di WM_ACTIVATEAPP, ma funziona in situazioni in cui le finestre appartenenti a processi diversi vengono combinate in una singola gerarchia di finestre (comuni nelle applicazioni OLE).

## <a name="wm_commandhelp-wm_helphittest-wm_exithelpmode"></a>WM_COMMANDHELP, WM_HELPHITTEST, WM_EXITHELPMODE

Questi messaggi vengono utilizzati nell'implementazione della Guida sensibile al contesto. Per ulteriori informazioni, fare riferimento alla [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) .

## <a name="mfc-private-resource-formats"></a>Formati di risorse private MFC

Attualmente, MFC definisce due formati di risorse private: RT_TOOLBAR e RT_DLGINIT.

## <a name="rt_toolbar-resource-format"></a>Formato risorsa RT_TOOLBAR

La barra degli strumenti predefinita fornita da Creazione guidata applicazioni è basata su una risorsa RT_TOOLBAR personalizzata, introdotta in MFC 4,0. È possibile modificare questa risorsa usando l'editor della barra degli strumenti.

## <a name="rt_dlginit-resource-format"></a>Formato risorsa RT_DLGINIT

Un formato di risorsa privata MFC viene utilizzato per archiviare informazioni di inizializzazione aggiuntive del dialogo. Sono incluse le stringhe iniziali archiviate in una casella combinata. Il formato di questa risorsa non è progettato per essere modificato manualmente, ma viene gestito da Visual C++.

Visual C++ e questa risorsa RT_DLGINIT non sono necessarie per usare le funzionalità correlate di MFC poiché esistono alternative API all'uso delle informazioni nella risorsa. L'uso di Visual C++ rende molto più semplice scrivere, gestire e tradurre l'applicazione a lungo termine.

La struttura di base di una risorsa RT_DLGINIT è la seguente:

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

Una sezione ripetuta contiene l'ID del controllo a cui inviare il messaggio, il messaggio # da inviare (un normale messaggio di Windows) e una lunghezza variabile di dati. Il messaggio di Windows viene inviato in un formato:

```
SendDlgItemMessage(<Control ID>, <Message #>, 0, &<Data>);
```

Si tratta di un formato molto generale che consente tutti i messaggi di Windows e il contenuto dei dati. L'editor di risorse Visual C++ e MFC supporta solo un subset limitato di messaggi di Windows: CB_ADDSTRING per l'elenco iniziale-scelte per le caselle combinate (i dati sono una stringa di testo).

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
