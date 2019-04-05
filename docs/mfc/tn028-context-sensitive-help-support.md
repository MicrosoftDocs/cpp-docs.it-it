---
title: 'TN028: Supporto della Guida sensibile al contesto'
ms.date: 11/04/2016
f1_keywords:
- vc.help
helpviewer_keywords:
- context-sensitive Help [MFC], MFC applications
- TN028
- resource identifiers, context-sensitive Help
ms.assetid: 884f1c55-fa27-4d4c-984f-30907d477484
ms.openlocfilehash: 5689e314c2ba94068619a066e5f458e06819b2b7
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58773476"
---
# <a name="tn028-context-sensitive-help-support"></a>TN028: Supporto della Guida sensibile al contesto

In questa nota descrive le regole per l'assegnazione degli ID di contesti della Guida e altri problemi della Guida in MFC. Supporto della Guida sensibile al contesto richiede al compilatore della Guida che è disponibile in Visual C++.

> [!NOTE]
>  Oltre all'implementazione della Guida sensibile al contesto tramite WinHelp, MFC supporta anche l'utilizzo della Guida HTML. Per altre informazioni su questo supporto e la programmazione con la Guida HTML, vedere [della Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md).

## <a name="types-of-help-supported"></a>Tipi di Guida in linea è supportato

Esistono due tipi di Guida sensibile al contesto implementato nelle applicazioni di Windows. Il primo, definita come "F1 Help" comporta l'avvio di WinHelp con il contesto appropriato in base all'oggetto attivo. Il secondo è la modalità "MAIUSC + F1". In questa modalità, il cursore del mouse cambia per il cursore della Guida e l'utente procede a fare clic su un oggetto. A questo punto, WinHelp viene avviato per offrire supporto per l'oggetto che l'utente ha selezionato.

Le classi Microsoft Foundation implementano entrambe queste forme di Guida in linea. Inoltre, il framework supporta due comandi della Guida semplice, indice della Guida e l'uso di contribuire.

## <a name="help-files"></a>File della Guida

Microsoft Foundation classes presuppongono un singolo file della Guida. Il file creato deve avere lo stesso nome e percorso dell'applicazione. Ad esempio, se il file eseguibile è C:\MyApplication\MyHelp.exe il file della Guida deve essere C:\MyApplication\MyHelp.hlp. Impostare il percorso tramite il *m_pszHelpFilePath* variabile membro della [CWinApp (classe)](../mfc/reference/cwinapp-class.md).

## <a name="help-context-ranges"></a>Gli intervalli di contesto della Guida

L'implementazione predefinita di MFC richiede un programma da seguire alcune regole relative all'assegnazione di ID del contesto della Guida. Queste regole sono un intervallo di ID allocati a controlli specifici. È possibile eseguire l'override di queste regole, fornendo implementazioni diverse delle varie funzioni membro correlate alla Guida.

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

## <a name="simple-help-commands"></a>"Help" semplici comandi

Esistono due semplici comandi della Guida che sono implementati da Microsoft Foundation Classes:

- ID_HELP_INDEX implementata dagli [CWinApp::OnHelpIndex](../mfc/reference/cwinapp-class.md#onhelpindex)

- ID_HELP_USING implementata dagli [CWinApp::OnHelpUsing](../mfc/reference/cwinapp-class.md#onhelpusing)

Il primo comando Mostra l'indice della Guida per l'applicazione. Il secondo Mostra Guida per l'utente utilizzando il programma di WinHelp.

## <a name="context-sensitive-help-f1-help"></a>Guida sensibile al contesto (F1 Guida)

Il tasto F1 in genere viene convertito in un comando con un ID di ID_HELP da un tasto di scelta rapida inserito nella tabella di tasti di scelta rapida della finestra principale. ID_HELP (comando) può anche essere generato da un pulsante con un ID di ID_HELP nella finestra di dialogo o finestra principale.

Indipendentemente dal modo in cui viene generato il ID_HELP (comando), viene indirizzato come un normale comando fino a raggiungere un gestore comando. Per altre informazioni sull'architettura di routing di comandi MFC, vedere [21 Nota tecnica](../mfc/tn021-command-and-message-routing.md). Se l'applicazione ha la Guida abilitata, il comando ID_HELP verrà gestito dal [CWinApp::OnHelp](../mfc/reference/cwinapp-class.md#onhelp). L'oggetto applicazione riceve il messaggio della Guida e instrada quindi il comando in modo appropriato. Ciò è necessario perché il routing dei comandi predefinita non è sufficiente per determinare il contesto più specifico.

`CWinApp::OnHelp` tenta di avviare WinHelp nell'ordine seguente:

1. Verifica la presenza di un oggetto attivo `AfxMessageBox` chiamata con un ID della Guida. Se una finestra di messaggio è attualmente attiva, WinHelp viene avviato con il contesto appropriato per tale finestra di messaggio.

1. Invia un messaggio WM_COMMANDHELP alla finestra attiva. Se tale finestra non risponde avviando WinHelp, lo stesso messaggio viene quindi inviato per i predecessori di tale finestra fino a quando non viene elaborato il messaggio o la finestra corrente è una finestra di primo livello.

1. Invia un comando ID_DEFAULT_HELP alla finestra principale. Questa operazione chiama il valore predefinito della Guida. Questo comando è in genere mappato a `CWinApp::OnHelpIndex`.

Per eseguire l'override a livello globale i ID base valori predefiniti (ad esempio, per i comandi 0x10000 e 0x20000 per le risorse, ad esempio le finestre di dialogo), l'applicazione deve eseguire l'override [CWinApp::WinHelp](../mfc/reference/cwinapp-class.md#winhelp).

Per eseguire l'override di questa funzionalità e il modo in cui che viene determinato un contesto della Guida, è necessario gestire il messaggio WM_COMMANDHELP. È possibile fornire routing più specifici della Guida in linea rispetto a quelle fornite, il framework tragitto solo approfondimenti come finestra figlio MDI corrente. È anche possibile fornire una Guida più specifica per una particolare finestra o finestra di dialogo, forse basata sullo stato interno corrente di tale oggetto o il controllo attivo nella finestra di dialogo.

## <a name="wmcommandhelp"></a>WM_COMMANDHELP

```

afx_msg LRESULT CWnd::OnCommandHelp(WPARAM wParam, LPARAM lParam)
```

WM_COMMANDHELP è un messaggio Windows MFC privato che viene ricevuto dalla finestra attiva quando viene richiesto il supporto. Quando la finestra riceve questo messaggio, è possibile chiamare `CWinApp::WinHelp` con contesto che corrisponde allo stato interno della finestra.

*lParam*<br/>
Contiene il contesto della Guida attualmente disponibile. *lParam* è uguale a zero se non è stato determinato alcun contesto. Un'implementazione di `OnCommandHelp` possibile usare l'ID del contesto nel *lParam* per stabilire un contesto diverso oppure può semplicemente passarlo a `CWinApp::WinHelp`.

*wParam*<br/>
Non viene utilizzato e saranno pari a zero.

Se il `OnCommandHelp` chiamate di funzione `CWinApp::WinHelp`, dovrebbe restituire **TRUE**. Restituzione **TRUE** interrompe il routing di questo comando per le altre classi e le altre finestre.

## <a name="help-mode-shiftf1-help"></a>Modalità della Guida (MAIUSC + F1)

Questa è la seconda forma della Guida sensibile al contesto. In genere, questa modalità viene immessa, premere MAIUSC + F1 o tramite la barra dei menu /. Viene implementato come un comando (ID_CONTEXT_HELP). Hook di filtro del messaggio non viene utilizzato per convertire questo comando durante una finestra di dialogo modale o menu è attivo, pertanto questo comando è disponibile solo all'utente quando l'applicazione è in esecuzione il message pump principale (`CWinApp::Run`).

Dopo aver immesso questa modalità, il cursore del mouse della Guida viene visualizzato in tutte le aree dell'applicazione, anche se l'applicazione normalmente visualizzerebbe un proprio cursore per tale area (ad esempio il bordo di ridimensionamento attorno alla finestra). L'utente è in grado di utilizzare il mouse o tastiera per selezionare un comando. Invece di eseguire il comando, viene visualizzata la Guida per il comando. Inoltre, l'utente può fare clic su un oggetto visibile sullo schermo, ad esempio un pulsante sulla barra degli strumenti e sarà visualizzata la Guida per l'oggetto. Questa modalità della Guida in linea viene fornita da `CWinApp::OnContextHelp`.

Durante l'esecuzione di questo ciclo, tutti i tasti di input non è attivo, ad eccezione di chiavi di accedere al menu. Inoltre, la traduzione di comando viene comunque eseguita tramite `PreTranslateMessage` per consentire all'utente di premere un tasto di scelta rapida e ricevere informazioni su tale comando.

Se sono presenti particolare traduzioni o azioni prendendo posto la `PreTranslateMessage` funzione che non si verificano durante modalità MAIUSC + F1 Guida in linea, è consigliabile controllare il *m_bHelpMode* membro del `CWinApp` prima di eseguire quelli operazioni. Il `CDialog` implementazione di `PreTranslateMessage` esegue questa verifica prima di chiamare `IsDialogMessage`, ad esempio. In questo modo viene disabilitata chiavi "spostamento di finestra di dialogo" nelle finestre di dialogo non modali durante la modalità MAIUSC+F1. Inoltre, `CWinApp::OnIdle` viene ancora chiamato durante il ciclo.

Se l'utente sceglie un comando dal menu, viene gestito come guida sul comando (tramite WM_COMMANDHELP, vedere di seguito). Se l'utente fa clic su un'area visibile della finestra di applicazioni, una determinazione viene effettuata da fatto che sia un clic non client o fare clic su un client. `OnContextHelp` mapping di handle di non client fa clic automaticamente ai client clic. Se si tratta di fare clic su un client, quindi invia un WM_HELPHITTEST alla finestra che è stato fatto clic. Se tale finestra viene restituito un valore diverso da zero, tale valore viene usato come contesto per la Guida. Se viene restituito zero, `OnContextHelp` Cerca la finestra padre (e in mancanza di padre e così via). Se non è possibile determinare un contesto della Guida, il valore predefinito è per inviare un ID_DEFAULT_HELP (comando) per la finestra principale in cui (in genere) viene quindi mappata a `CWinApp::OnHelpIndex`.

## <a name="wmhelphittest"></a>WM_HELPHITTEST

```

afx_msg LRESULT CWnd::OnHelpHitTest(
WPARAM, LPARAM lParam)
```

WM_HELPHITTEST è un messaggio di windows privati MFC ricevuto dalla finestra attiva selezionata durante la modalità Guida rapida MAIUSC+F1. Quando la finestra riceve questo messaggio, viene restituito un **DWORD** ID della Guida per l'uso da WinHelp.

LOWORD(lParam) contiene la coordinata di dispositivo dell'asse x in cui il mouse è stato fatto clic relativo all'area client della finestra.

HIWORD(lParam) contiene la coordinata dell'asse y.

*wParam*<br/>
Non viene utilizzato e saranno pari a zero. Se il valore restituito è diverso da zero, WinHelp viene chiamato con quel contesto. Se il valore restituito è zero, viene eseguita una query della finestra padre per la Guida.

In molti casi, è possibile sfruttare il codice di hit testing che è già presente. Vedere l'implementazione di `CToolBar::OnHelpHitTest` per un esempio di gestione del messaggio WM_HELPHITTEST (il codice Usa il codice di hit test utilizzato sui pulsanti e le descrizioni comandi in `CControlBar`).

## <a name="mfc-application-wizard-support-and-makehm"></a>MAKEHM e supporto della procedura guidata applicazione MFC

La creazione guidata applicazione MFC crea i file necessari per compilare un file della Guida (file CNT e hpj). Contiene inoltre un numero di file. RTF predefiniti che vengono accettate dal compilatore della Guida Microsoft. Molti degli argomenti sono state completate, ma alcune potrebbero dover essere modificati per l'applicazione specifica.

Creazione automatica di un file "help mapping" è supportata da un'utilità denominata MAKEHM. L'utilità MAKEHM può eseguire la conversione delle risorse di un'applicazione. File H da un file di mapping della Guida. Ad esempio:

```
#define IDD_MY_DIALOG   2000
#define ID_MY_COMMAND   150
```

verrà convertita in:

```
HIDD_MY_DIALOG    0x207d0
HID_MY_COMMAND    0x10096
```

Questo formato è compatibile con la funzione del compilatore della Guida, che esegue il mapping degli ID di contesto (i numeri a destra) con i nomi di argomento (simboli sul lato sinistro).

Il codice sorgente per MAKEHM è disponibile nell'esempio di utilità di programmazione MFC [MAKEHM](../overview/visual-cpp-samples.md).

## <a name="adding-help-support-after-running-the-mfc-application-wizard"></a>Aggiunta del supporto della Guida in linea dopo aver eseguito la procedura guidata applicazione MFC

Il modo migliore per aggiungere supporto per l'applicazione deve controllare l'opzione "Della Guida sensibile al contesto" nella pagina di funzionalità avanzate della creazione guidata applicazione MFC prima di creare l'applicazione. In questo modo la creazione guidata applicazione MFC aggiunge automaticamente le voci della mappa messaggi necessari per il `CWinApp`-classe per supportare la Guida derivata.

## <a name="help-on-message-boxes"></a>Guida per le finestre di messaggio

Informazioni sulle finestre di messaggio (talvolta denominate avvisi) sono supportato tramite il `AfxMessageBox` (funzione), un wrapper per il `MessageBox` API Windows.

Esistono due versioni di `AfxMessageBox`, uno per l'uso con un ID stringa e un altro per l'uso con un puntatore alla stringa (`LPCSTR`):

```
int AFXAPI AfxMessageBox(LPCSTR lpszText,
    UINT nType,
    UINT nIDHelp);

int AFXAPI AfxMessageBox(UINT nIDPrompt,
    UINT nType,
    UINT nIDHelp);
```

In entrambi i casi, è un facoltativo ID della Guida.

Nel primo caso, il valore predefinito per nIDHelp è 0, che non indica nessun supporto per questa finestra di messaggio. Se l'utente preme F1 mentre, ad esempio messaggi finestra è attiva, l'utente non riceverà Help (anche se l'applicazione supporta la Guida). Se non è auspicabile, è necessario specificare un ID della Guida per nIDHelp.

Nel secondo caso, il valore predefinito per nIDHelp è -1, che indica che l'ID della Guida è lo stesso come nIDPrompt. Guida funzionerà solo se l'applicazione è abilitato per la Guida, ovviamente). Se si vuole che la finestra di messaggio non esiste supporto della Guida, è necessario fornire 0 per nIDHelp. Qualora si volesse il messaggio di aiuto abilitata, ma l'esigenza di un ID della Guida diversi rispetto a nIDPrompt, è sufficiente fornire un valore positivo per nIDHelp diverso da quello del nIDPrompt.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
