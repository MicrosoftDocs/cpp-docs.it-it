---
description: 'Altre informazioni su: TN028: supporto della Guida Context-Sensitive'
title: 'TN028: supporto della guida sensibile al contesto'
ms.date: 11/04/2016
f1_keywords:
- vc.help
helpviewer_keywords:
- context-sensitive Help [MFC], MFC applications
- TN028
- resource identifiers, context-sensitive Help
ms.assetid: 884f1c55-fa27-4d4c-984f-30907d477484
ms.openlocfilehash: 96dd1d4356ac226d9377e14985de46e3d0f680ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215651"
---
# <a name="tn028-context-sensitive-help-support"></a>TN028: supporto della guida sensibile al contesto

Questa nota descrive le regole per l'assegnazione di ID contesti della guida e altri problemi della Guida in MFC. Il supporto per la Guida sensibile al contesto richiede il compilatore della Guida disponibile in Visual C++.

> [!NOTE]
> Oltre a implementare la Guida sensibile al contesto utilizzando WinHelp, MFC supporta anche l'utilizzo della Guida HTML. Per ulteriori informazioni su questo supporto e sulla programmazione con la Guida HTML, vedere [la Guida HTML: Context-Sensitive della Guida per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md).

## <a name="types-of-help-supported"></a>Tipi di guida supportati

Sono disponibili due tipi di guida sensibile al contesto implementata nelle applicazioni Windows. Il primo, denominato "Guida sensibile al contesto", prevede l'avvio di WinHelp con il contesto appropriato basato sull'oggetto attualmente attivo. Il secondo è la modalità "Shift + F1". In questa modalità il cursore del mouse viene modificato nel cursore della guida e l'utente continua a fare clic su un oggetto. A questo punto, WinHelp viene avviato per fornire supporto per l'oggetto su cui l'utente ha fatto clic.

Il Microsoft Foundation Classes implementare entrambe le forme di guida. Il Framework supporta inoltre due semplici comandi della guida, la guida per l'indice e l'utilizzo della guida.

## <a name="help-files"></a>File della Guida

Le classi Microsoft Foundation presuppongono un singolo file della guida. Il nome e il percorso del file della guida devono essere identici a quelli dell'applicazione. Se, ad esempio, l'eseguibile è C:\MyApplication\MyHelp.exe il file della guida deve essere C:\MyApplication\MyHelp.hlp. Il percorso viene impostato tramite la variabile membro *m_pszHelpFilePath* della [classe CWinApp](../mfc/reference/cwinapp-class.md).

## <a name="help-context-ranges"></a>Intervalli di contesto della Guida

Per l'implementazione predefinita di MFC è necessario che un programma segua alcune regole sull'assegnazione degli ID del contesto della guida. Queste regole sono un intervallo di ID allocato a controlli specifici. È possibile eseguire l'override di queste regole fornendo diverse implementazioni delle varie funzioni membro correlate alla guida.

```
0x00000000 - 0x0000FFFF : user defined
0x00010000 - 0x0001FFFF : commands (menus/command buttons)
0x00010000 + ID_
(note: 0x18000-> 0x1FFFF is the practical range since command IDs are>=0x8000)
0x00020000 - 0x0002FFFF : windows and dialogs
0x00020000 + IDR_
(note: 0x20000-> 0x27FFF is the practical range since IDRs are <= 0x7FFF)
0x00030000 - 0x0003FFFF : error messages (based on error string ID)
0x00030000 + IDP_
0x00040000 - 0x0004FFFF : special purpose (non-client areas)
0x00040000 + HitTest area
0x00050000 - 0x0005FFFF : controls (those that are not commands)
0x00040000 + IDW_
```

## <a name="simple-help-commands"></a>Semplici comandi "Guida"

Sono disponibili due semplici comandi della Guida implementati dal Microsoft Foundation Classes:

- ID_HELP_INDEX implementato da [CWinApp:: OnHelpIndex](../mfc/reference/cwinapp-class.md#onhelpindex)

- ID_HELP_USING implementato da [CWinApp:: OnHelpUsing](../mfc/reference/cwinapp-class.md#onhelpusing)

Il primo comando Mostra l'indice della Guida per l'applicazione. Il secondo Mostra la guida dell'utente sull'uso del programma WinHelp.

## <a name="context-sensitive-help-f1-help"></a>Guida Context-Sensitive (Guida sensibile al contesto)

Il tasto F1 viene in genere convertito in un comando con ID ID_HELP da un tasto di scelta rapida inserito nella tabella dei tasti di scelta rapida della finestra principale. Il ID_HELP comando può anche essere generato da un pulsante con un ID di ID_HELP nella finestra principale o nella finestra di dialogo.

Indipendentemente dalla modalità di generazione del comando ID_HELP, viene indirizzato come normale comando fino a quando non raggiunge un gestore di comando. Per ulteriori informazioni sull'architettura di routing dei comandi MFC, consultare la [Nota tecnica 21](../mfc/tn021-command-and-message-routing.md). Se per l'applicazione è abilitata la guida, il ID_HELP comando verrà gestito da [CWinApp:: OnHelp](../mfc/reference/cwinapp-class.md#onhelp). L'oggetto applicazione riceve il messaggio della guida e quindi instrada il comando in modo appropriato. Questa operazione è necessaria perché il routing dei comandi predefinito non è adatto per determinare il contesto più specifico.

`CWinApp::OnHelp` tenta di avviare WinHelp nell'ordine seguente:

1. Verifica la presenza di una `AfxMessageBox` chiamata attiva con un ID della guida. Se una finestra di messaggio è attualmente attiva, WinHelp viene avviato con il contesto appropriato per tale finestra di messaggio.

1. Invia un messaggio di WM_COMMANDHELP alla finestra attiva. Se tale finestra non risponde avviando WinHelp, lo stesso messaggio viene quindi inviato ai predecessori di tale finestra finché il messaggio non viene elaborato o la finestra corrente è una finestra di primo livello.

1. Invia un comando ID_DEFAULT_HELP alla finestra principale. Viene richiamata la guida predefinita. Questo comando viene in genere mappato a `CWinApp::OnHelpIndex` .

Per eseguire l'override a livello globale dei valori di base degli ID predefiniti, ad esempio 0x10000 per i comandi e 0x20000 per le risorse, ad esempio le finestre di dialogo, l'applicazione deve eseguire l'override di [CWinApp:: WinHelp](../mfc/reference/cwinapp-class.md#winhelp).

Per eseguire l'override di questa funzionalità e il modo in cui viene determinato il contesto della guida, è necessario gestire il messaggio di WM_COMMANDHELP. Potrebbe essere necessario fornire un routing della guida più specifico rispetto a quello fornito dal Framework, in quanto va oltre la finestra figlio MDI corrente. È anche possibile fornire una guida più specifica per una finestra o una finestra di dialogo specifica, probabilmente basata sullo stato interno corrente di tale oggetto o sul controllo attivo all'interno della finestra di dialogo.

## <a name="wm_commandhelp"></a>WM_COMMANDHELP

```

afx_msg LRESULT CWnd::OnCommandHelp(WPARAM wParam, LPARAM lParam)
```

WM_COMMANDHELP è un messaggio Windows MFC privato ricevuto dalla finestra attiva quando viene richiesta la guida. Quando la finestra riceve questo messaggio, può chiamare `CWinApp::WinHelp` con context che corrisponde allo stato interno della finestra.

*lParam*<br/>
Contiene il contesto della Guida attualmente disponibile. *lParam* è zero se non è stato determinato alcun contesto della guida. Un'implementazione di `OnCommandHelp` può utilizzare l'ID del contesto in *lParam* per determinare un contesto diverso oppure può semplicemente passarlo a `CWinApp::WinHelp` .

*wParam*<br/>
Non viene utilizzato e sarà zero.

Se la `OnCommandHelp` funzione chiama `CWinApp::WinHelp` , deve restituire **true**. Restituisce **true** interrompe il routing di questo comando ad altre classi e ad altre finestre.

## <a name="help-mode-shiftf1-help"></a>Modalità guida (Guida di MAIUSC + F1)

Questa è la seconda forma di guida sensibile al contesto. In genere, questa modalità viene immessa premendo MAIUSC + F1 o tramite il menu o la barra degli strumenti. Viene implementato come comando (ID_CONTEXT_HELP). L'hook del filtro messaggi non viene usato per tradurre questo comando mentre una finestra di dialogo o un menu modale è attivo, pertanto questo comando è disponibile solo per l'utente quando l'applicazione esegue il pump del messaggio principale ( `CWinApp::Run` ).

Dopo l'immissione di questa modalità, il cursore del mouse viene visualizzato su tutte le aree dell'applicazione, anche se in genere l'applicazione Visualizza il proprio cursore per l'area (ad esempio, il bordo di ridimensionamento intorno alla finestra). L'utente è in grado di utilizzare il mouse o la tastiera per selezionare un comando. Anziché eseguire il comando, viene visualizzata la guida per il comando. Inoltre, l'utente può fare clic su un oggetto visibile sullo schermo, ad esempio un pulsante sulla barra degli strumenti, e verrà visualizzata la guida per l'oggetto. Questa modalità di guida viene fornita da `CWinApp::OnContextHelp` .

Durante l'esecuzione di questo ciclo, tutti gli input da tastiera sono inattivi, ad eccezione delle chiavi che accedono al menu. Inoltre, la conversione dei comandi viene ancora eseguita tramite `PreTranslateMessage` per consentire all'utente di premere un tasto di scelta rapida e ricevere informazioni sul comando.

Se la `PreTranslateMessage` funzione non deve essere eseguita durante la modalità della Guida Shift + F1, è consigliabile controllare il membro *m_bHelpMode* di `CWinApp` prima di eseguire tali operazioni. L' `CDialog` implementazione di `PreTranslateMessage` Controlla questo oggetto prima `IsDialogMessage` di chiamare, ad esempio. In questo modo vengono disabilitati i tasti "navigazione finestra di dialogo" nelle finestre di dialogo non modali durante la modalità MAIUSC + F1. Inoltre, `CWinApp::OnIdle` viene ancora chiamato durante questo ciclo.

Se l'utente sceglie un comando dal menu, viene gestito come guida su tale comando (tramite WM_COMMANDHELP, vedere di seguito). Se l'utente fa clic su un'area visibile della finestra applicazioni, viene eseguita una determinazione che indica se si tratta di un clic non client o se si fa clic su un client. `OnContextHelp` gestisce il mapping dei clic non client ai clic del client automaticamente. Se si fa clic su un client, viene inviato un WM_HELPHITTEST alla finestra su cui è stato fatto clic. Se tale finestra restituisce un valore diverso da zero, tale valore viene utilizzato come contesto per la guida. Se restituisce zero, `OnContextHelp` tenta la finestra padre (e ha esito negativo, l'elemento padre e così via). Se non è possibile determinare un contesto della guida, l'impostazione predefinita prevede l'invio di un comando ID_DEFAULT_HELP alla finestra principale, che in genere viene mappato a `CWinApp::OnHelpIndex` .

## <a name="wm_helphittest"></a>WM_HELPHITTEST

```

afx_msg LRESULT CWnd::OnHelpHitTest(
WPARAM, LPARAM lParam)
```

WM_HELPHITTEST è un messaggio di Windows privato MFC ricevuto dalla finestra attiva con clic durante la modalità di guida MAIUSC + F1. Quando la finestra riceve questo messaggio, restituisce un ID della Guida **DWORD** per l'uso da parte di WinHelp.

LOWORD (lParam) contiene la coordinata del dispositivo dell'asse X in cui è stato fatto clic sul mouse rispetto all'area client della finestra.

HIWORD (lParam) contiene la coordinata dell'asse Y.

*wParam*<br/>
non viene utilizzato e sarà zero. Se il valore restituito è diverso da zero, WinHelp viene chiamato con tale contesto. Se il valore restituito è zero, per la guida viene eseguita una query sulla finestra padre.

In molti casi, è possibile sfruttare il codice di hit testing già presente. Vedere l'implementazione di `CToolBar::OnHelpHitTest` per un esempio di gestione del messaggio di WM_HELPHITTEST (il codice sfrutta il codice di hit test usato sui pulsanti e sulle descrizioni comandi in `CControlBar` ).

## <a name="mfc-application-wizard-support-and-makehm"></a>Supporto per la creazione guidata applicazione MFC e MAKEHM

La creazione guidata applicazione MFC crea i file necessari per compilare un file della guida (file con estensione cnt e hpj). Include inoltre una serie di file RTF predefiniti accettati dal compilatore della Guida Microsoft. Molti degli argomenti sono completati, ma potrebbe essere necessario modificare alcuni per l'applicazione specifica.

La creazione automatica di un file "mapping della Guida" è supportata da un'utilità denominata MAKEHM. L'utilità MAKEHM può tradurre la risorsa di un'applicazione. File H in un file di mapping della guida. Ad esempio:

```
#define IDD_MY_DIALOG   2000
#define ID_MY_COMMAND   150
```

verranno convertiti in:

```
HIDD_MY_DIALOG    0x207d0
HID_MY_COMMAND    0x10096
```

Questo formato è compatibile con la funzionalità del compilatore della guida, che esegue il mapping degli ID di contesto (i numeri sul lato destro) con i nomi degli argomenti (i simboli sul lato sinistro).

Il codice sorgente per MAKEHM è disponibile nell'esempio di utilità di programmazione MFC [MAKEHM](../overview/visual-cpp-samples.md).

## <a name="adding-help-support-after-running-the-mfc-application-wizard"></a>Aggiunta del supporto della guida dopo l'esecuzione della creazione guidata applicazione MFC

Il modo migliore per aggiungere assistenza all'applicazione consiste nel selezionare l'opzione "Guida sensibile al contesto" nella pagina funzionalità avanzate della creazione guidata applicazione MFC prima di creare l'applicazione. In questo modo, la creazione guidata applicazione MFC aggiunge automaticamente le voci della mappa messaggi necessarie alla `CWinApp` classe derivata da per supportare la guida.

## <a name="help-on-message-boxes"></a>Guida nelle finestre di messaggio

La guida per le finestre di messaggio (talvolta denominate avvisi) è supportata tramite la `AfxMessageBox` funzione, un wrapper per l' `MessageBox` API Windows.

Esistono due versioni di `AfxMessageBox` , una da usare con un ID di stringa e un'altra da usare con un puntatore a String ( `LPCSTR` ):

```
int AFXAPI AfxMessageBox(LPCSTR lpszText,
    UINT nType,
    UINT nIDHelp);

int AFXAPI AfxMessageBox(UINT nIDPrompt,
    UINT nType,
    UINT nIDHelp);
```

In entrambi i casi, è disponibile un ID della guida facoltativo.

Nel primo caso, l'impostazione predefinita per nIDHelp è 0, che indica nessuna guida per questa finestra di messaggio. Se l'utente preme F1 mentre la finestra di messaggio è attiva, l'utente non riceverà la guida (anche se l'applicazione supporta la guida). Se non è consigliabile, è necessario specificare un ID Guida per nIDHelp.

Nel secondo caso, il valore predefinito per nIDHelp è-1, che indica che l'ID della guida è uguale a quello di nIDPrompt. La guida funziona solo se l'applicazione è ovviamente abilitata per la guida. È necessario specificare 0 per nIDHelp se si desidera che la finestra di messaggio non disponga del supporto per la guida. Se si desidera che il messaggio sia abilitato, ma si desidera un ID della Guida diverso da nIDPrompt, è sufficiente fornire un valore positivo per nIDHelp diverso da quello di nIDPrompt.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
