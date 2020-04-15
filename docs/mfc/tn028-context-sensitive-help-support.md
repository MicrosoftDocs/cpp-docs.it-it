---
title: 'TN028: supporto della guida sensibile al contesto'
ms.date: 11/04/2016
f1_keywords:
- vc.help
helpviewer_keywords:
- context-sensitive Help [MFC], MFC applications
- TN028
- resource identifiers, context-sensitive Help
ms.assetid: 884f1c55-fa27-4d4c-984f-30907d477484
ms.openlocfilehash: 502edc837d7886dd60ab5107fb194c1490a76928
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370335"
---
# <a name="tn028-context-sensitive-help-support"></a>TN028: supporto della guida sensibile al contesto

In questa nota vengono descritte le regole per l'assegnazione di ID dei contesti della Guida e altri problemi della Guida in MFC. Supporto della Guida sensibile al contesto richiede il compilatore della Guida disponibile in Visual C.

> [!NOTE]
> Oltre a implementare la Guida sensibile al contesto utilizzando WinHelp, MFC supporta anche l'utilizzo della Guida HTML. Per ulteriori informazioni su questo supporto e sulla programmazione con la Guida HTML, vedere [Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md).

## <a name="types-of-help-supported"></a>Tipi di Guida supportati

Esistono due tipi di Guida sensibile al contesto implementati nelle applicazioni Windows.There are two types of context-sensitive help implemented in Windows applications. Il primo, denominato "F1 Help" comporta l'avvio di WinHelp con il contesto appropriato in base all'oggetto attualmente attivo. Il secondo è la modalità "Maiusc-F1". In questa modalità, il cursore del mouse si trasforma nel cursore della Guida e l'utente procede a fare clic su un oggetto. A questo punto, WinHelp viene avviato per fornire la Guida per l'oggetto su cui l'utente ha fatto clic.

Le classi Microsoft Foundation implementano entrambe queste forme di aiuto. Inoltre, il framework supporta due semplici comandi della Guida, Indice della Guida e Utilizzo della Guida.

## <a name="help-files"></a>File della Guida

Le classi di Microsoft Foundation presuppongono un singolo file della Guida. Tale file della Guida deve avere lo stesso nome e percorso dell'applicazione. Se, ad esempio, l'eseguibile è C:. Impostare il percorso tramite la variabile membro *m_pszHelpFilePath* della [classe CWinApp](../mfc/reference/cwinapp-class.md).

## <a name="help-context-ranges"></a>Intervalli di contesto della Guida

L'implementazione predefinita di MFC richiede che un programma segua alcune regole sull'assegnazione degli ID di contesto della Guida. Queste regole sono un intervallo di ID allocati a controlli specifici. È possibile eseguire l'override di queste regole fornendo diverse implementazioni delle varie funzioni membro correlate alla Guida.

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

## <a name="simple-help-commands"></a>Semplici comandi "Aiuto"

Esistono due semplici comandi della Guida implementati dalle classi di Microsoft Foundation:

- ID_HELP_INDEX implementate da [CWinApp::OnHelpIndex](../mfc/reference/cwinapp-class.md#onhelpindex)

- ID_HELP_USING implementata da [CWinApp::OnHelpUsing](../mfc/reference/cwinapp-class.md#onhelpusing)

Il primo comando mostra l'indice della Guida per l'applicazione. Il secondo mostra la Guida dell'utente sull'utilizzo del programma WinHelp.

## <a name="context-sensitive-help-f1-help"></a>Guida sensibile al contesto (F1 Help)

Il tasto F1 viene in genere convertito in un comando con ID di ID_HELP da un tasto di scelta rapida inserito nella tabella dei tasti di scelta rapida della finestra principale. Il comando ID_HELP può anche essere generato da un pulsante con ID di ID_HELP nella finestra principale o nella finestra di dialogo.

Indipendentemente da come viene generato il comando ID_HELP, viene indirizzato come un comando normale fino a raggiungere un gestore di comando. Per ulteriori informazioni sull'architettura di routing dei comandi MFC, fare riferimento alla [Nota tecnica 21](../mfc/tn021-command-and-message-routing.md). Se l'applicazione ha attivato la Guida, il comando ID_HELP verrà gestito da [CWinApp::OnHelp](../mfc/reference/cwinapp-class.md#onhelp). L'oggetto applicazione riceve il messaggio della Guida e quindi indirizza il comando in modo appropriato. Ciò è necessario poiché il routing dei comandi predefinito non è adeguato per determinare il contesto più specifico.

`CWinApp::OnHelp`tenta di avviare WinHelp nel seguente ordine:

1. Verifica la `AfxMessageBox` presenza di una chiamata attiva con un ID della Guida. Se una finestra di messaggio è attualmente attiva, Viene avviato WinHelp con il contesto appropriato a tale finestra di messaggio.

1. Invia un messaggio WM_COMMANDHELP alla finestra attiva. Se tale finestra non risponde avviando WinHelp, lo stesso messaggio viene quindi inviato ai predecessori di tale finestra fino a quando il messaggio non viene elaborato o la finestra corrente è una finestra di primo livello.

1. Invia un comando ID_DEFAULT_HELP alla finestra principale. In questo modo viene richiamata la Guida predefinita. Questo comando è in `CWinApp::OnHelpIndex`genere mappato a .

Per eseguire l'override globale dei valori di base ID predefiniti (ad esempio 0x10000 per i comandi e 0x20000 per le risorse, ad esempio le finestre di dialogo), l'applicazione deve eseguire l'override di [CWinApp::WinHelp](../mfc/reference/cwinapp-class.md#winhelp).

Per eseguire l'override di questa funzionalità e del modo in cui viene determinato un contesto della Guida, è necessario gestire il messaggio WM_COMMANDHELP. È possibile fornire un routing della Guida più specifico rispetto a quello fornito dal framework, in quanto diventa solo profondo come la finestra figlio MDI corrente. È anche possibile fornire una Guida più specifica per una determinata finestra o finestra di dialogo, ad esempio in base allo stato interno corrente dell'oggetto o al controllo attivo all'interno della finestra di dialogo.

## <a name="wm_commandhelp"></a>WM_COMMANDHELP

```

afx_msg LRESULT CWnd::OnCommandHelp(WPARAM wParam, LPARAM lParam)
```

WM_COMMANDHELP è un messaggio MFC di Windows privato che viene ricevuto dalla finestra attiva quando viene richiesta la Guida. Quando la finestra riceve questo messaggio, può chiamare `CWinApp::WinHelp` con un contesto che corrisponde allo stato interno della finestra.

*lParam*<br/>
Contiene il contesto della Guida attualmente disponibile. *lParam* è zero se non è stato determinato alcun contesto della Guida.lParam is zero if no Help context has been determined. Un'implementazione di `OnCommandHelp` può utilizzare l'ID di contesto in `CWinApp::WinHelp` *lParam* per determinare un contesto diverso o può semplicemente passarlo a .

*wParam*<br/>
Non viene utilizzato e sarà zero.

Se `OnCommandHelp` la `CWinApp::WinHelp`funzione chiama , deve restituire **TRUE**. La restituzione di **TRUE** interrompe il routing di questo comando ad altre classi e ad altre finestre.

## <a name="help-mode-shiftf1-help"></a>Modalità Guida (MAIUSC-F1 Guida)

Questa è la seconda forma di Guida sensibile al contesto. In genere, questa modalità viene inserita premendo Maiusc-F1 o tramite il menu/barra degli strumenti. Viene implementato come comando (ID_CONTEXT_HELP). L'hook del filtro messaggi non viene utilizzato per convertire questo comando mentre è attiva una finestra di dialogo modale`CWinApp::Run`o un menu, pertanto questo comando è disponibile solo per l'utente quando l'applicazione esegue il message pump principale ( ).

Dopo aver inserito questa modalità, il cursore del mouse della Guida viene visualizzato su tutte le aree dell'applicazione, anche se l'applicazione normalmente visualizza il proprio cursore per quell'area (ad esempio il bordo di ridimensionamento intorno alla finestra). L'utente è in grado di utilizzare il mouse o la tastiera per selezionare un comando. Anziché eseguire il comando, viene visualizzata la Guida su tale comando. Inoltre, l'utente può fare clic su un oggetto visibile sullo schermo, ad esempio un pulsante sulla barra degli strumenti e verrà visualizzata la Guida per tale oggetto. Questa modalità di `CWinApp::OnContextHelp`Aiuto è fornita da .

Durante l'esecuzione di questo ciclo, tutto l'input da tastiera è inattivo, ad eccezione dei tasti che accedono al menu. Inoltre, la traduzione `PreTranslateMessage` dei comandi viene comunque eseguita tramite per consentire all'utente di premere un tasto di scelta rapida e ricevere aiuto su tale comando.

Se nella `PreTranslateMessage` funzione vengono eseguite traduzioni o azioni particolari che non devono essere eseguite durante la modalità Guida di MAIUSC e F1, è necessario controllare il membro di *m_bHelpMode* prima di `CWinApp` eseguire tali operazioni. L'implementazione `CDialog` di controlla this prima di `PreTranslateMessage` chiamare `IsDialogMessage`, ad esempio. In questo modo vengono disabilitati i tasti "navigazione delle finestre di dialogo" nelle finestre di dialogo non modali durante la modalità MAIUSC e F1. Inoltre, `CWinApp::OnIdle` viene ancora chiamato durante questo ciclo.

Se l'utente sceglie un comando dal menu, viene gestito come guida su tale comando (tramite WM_COMMANDHELP, vedere di seguito). Se l'utente fa clic su un'area visibile della finestra delle applicazioni, viene presa una determinazione se si tratta di un clic non client o di un clic del client. `OnContextHelp`gestisce automaticamente il mapping dei clic non client ai clic del client. Se si tratta di un clic del client, invia un WM_HELPHITTEST alla finestra su cui è stato fatto clic. Se tale finestra restituisce un valore diverso da zero, tale valore viene utilizzato come contesto per la Guida. Se restituisce `OnContextHelp` zero, prova la finestra padre (e in caso contrario, il relativo elemento padre e così via). Se non è possibile determinare un contesto della Guida, l'impostazione predefinita prevede l'invio di un comando ID_DEFAULT_HELP alla finestra principale, che viene quindi (in genere) mappata a `CWinApp::OnHelpIndex`.

## <a name="wm_helphittest"></a>WM_HELPHITTEST

```

afx_msg LRESULT CWnd::OnHelpHitTest(
WPARAM, LPARAM lParam)
```

WM_HELPHITTEST è un messaggio di Windows privato MFC che viene ricevuto dalla finestra attiva su cui è stato fatto clic durante la modalità Guida di MAIUSC e F1. Quando la finestra riceve questo messaggio, restituisce un ID della Guida **DWORD** per l'utilizzo da parte di WinHelp.

LOWORD(lParam) contiene la coordinata del dispositivo dell'asse X in cui è stato fatto clic con il mouse rispetto all'area client della finestra.

HIWORD(lParam) contiene la coordinata dell'asse Y.

*wParam*<br/>
non viene utilizzato e sarà zero. Se il valore restituito è diverso da zero, WinHelp viene chiamato con tale contesto. Se il valore restituito è zero, viene eseguita una query sulla finestra padre per la Guida.

In molti casi, è possibile sfruttare il codice di hit testing che si può già avere. Vedere l'implementazione di `CToolBar::OnHelpHitTest` per un esempio di gestione del messaggio di WM_HELPHITTEST (il `CControlBar`codice sfrutta il codice di hit test utilizzato nei pulsanti e nelle descrizioni comandi in ).

## <a name="mfc-application-wizard-support-and-makehm"></a>Supporto della Creazione guidata applicazione MFC e MAKEHM

La Creazione guidata applicazione MFC crea i file necessari per compilare un file della Guida (file con estensione cnt e hpj). Include inoltre una serie di file RTF predefiniti accettati dal compilatore della Guida Microsoft. Molti degli argomenti sono completi, ma alcuni potrebbero dover essere modificati per l'applicazione specifica.

La creazione automatica di un file di "help mapping" è supportata da un'utilità denominata MAKEHM. L'utilità MAKEHM può tradurre il RESOURCE di un'applicazione. H in un file di mapping della Guida. Ad esempio:

```
#define IDD_MY_DIALOG   2000
#define ID_MY_COMMAND   150
```

saranno tradotti in:

```
HIDD_MY_DIALOG    0x207d0
HID_MY_COMMAND    0x10096
```

Questo formato è compatibile con la funzionalità del compilatore della Guida, che esegue il mapping degli ID di contesto (i numeri sul lato destro) con i nomi degli argomenti (i simboli sul lato sinistro).

Il codice sorgente per MAKEHM è disponibile nell'esempio di utilità di programmazione MFC [MAKEHM](../overview/visual-cpp-samples.md).

## <a name="adding-help-support-after-running-the-mfc-application-wizard"></a>Aggiunta del supporto della Guida dopo l'esecuzione della Creazione guidata applicazione MFC

Il modo migliore per aggiungere la Guida all'applicazione consiste nel controllare l'opzione "Guida sensibile al contesto" nella pagina Funzionalità avanzate della Creazione guidata applicazione MFC prima di creare l'applicazione. In questo modo la Creazione guidata applicazione MFC `CWinApp`aggiunge automaticamente le voci necessarie alla mappa messaggi alla classe derivata dalla classe per supportare la Guida.

## <a name="help-on-message-boxes"></a>Guida alle finestre di messaggio

La Guida nelle finestre di messaggio (talvolta chiamate avvisi) è supportata tramite la funzione, un wrapper per l'API di Windows.Help on Message Boxes (sometimes called alerts) is supported through the `AfxMessageBox` function, a wrapper for the `MessageBox` Windows API.

Esistono due versioni `AfxMessageBox`di , una per l'utilizzo con un ID`LPCSTR`stringa e un'altra per l'utilizzo con un puntatore a stringa ( ):

```
int AFXAPI AfxMessageBox(LPCSTR lpszText,
    UINT nType,
    UINT nIDHelp);

int AFXAPI AfxMessageBox(UINT nIDPrompt,
    UINT nType,
    UINT nIDHelp);
```

In entrambi i casi, è presente un ID della Guida facoltativo.

Nel primo caso, il valore predefinito per nIDHelp è 0, che indica nessuna Guida per questa finestra di messaggio. Se l'utente preme F1 mentre è attiva una finestra di messaggio, l'utente non riceverà la Guida (anche se l'applicazione supporta la Guida). Se ciò non è auspicabile, è necessario fornire un ID della Guida per nIDHelp.If this is not desirable, a Help ID should be provided for nIDHelp.

Nel secondo caso, il valore predefinito per nIDHelp è -1, che indica che l'ID della Guida è lo stesso di nIDPrompt. La Guida funzionerà solo se l'applicazione è abilitata per la Guida, ovviamente). È necessario fornire 0 per nIDHelp se si desidera che la finestra di messaggio non dispone di alcun supporto della Guida. Se si desidera che il messaggio sia abilitato per la Guida, ma si desidera un ID della Guida diverso da nIDPrompt, è sufficiente fornire un valore positivo per nIDHelp diverso da quello di nIDPrompt.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
