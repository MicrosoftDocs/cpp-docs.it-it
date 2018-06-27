---
title: 'TN028: Supporto della Guida sensibile al contesto | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.help
dev_langs:
- C++
helpviewer_keywords:
- context-sensitive Help [MFC], MFC applications
- TN028
- resource identifiers, context-sensitive Help
ms.assetid: 884f1c55-fa27-4d4c-984f-30907d477484
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 45a8835b43225a8e134da0f983f7c86d461a0636
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954897"
---
# <a name="tn028-context-sensitive-help-support"></a>TN028: supporto della guida sensibile al contesto
In questa nota descrive le regole per l'assegnazione della Guida contesti ID e altri problemi della Guida in MFC. Supporto della Guida sensibile al contesto richiede il compilatore della Guida che è disponibile in Visual C++.  
  
> [!NOTE]
>  Oltre all'implementazione della Guida sensibile al contesto tramite WinHelp, MFC supporta inoltre l'utilizzo della Guida HTML. Per ulteriori informazioni su questo supporto e la programmazione con la Guida HTML, vedere [della Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md).  
  
## <a name="types-of-help-supported"></a>Tipi di Guida supportato  
 Esistono due tipi di Guida sensibile al contesto implementato nelle applicazioni Windows. Il primo, definito come "Della Guida F1" comporta l'avvio WinHelp con il contesto appropriato in base all'oggetto attivo. La seconda è la modalità "MAIUSC + F1". In questa modalità, il cursore del mouse cambia per il cursore della Guida e l'utente continua a fare clic su un oggetto. A questo punto, WinHelp viene avviata per fornire la Guida per l'oggetto che l'utente fa clic su.  
  
 Le classi Microsoft Foundation implementano entrambi questi formati della Guida in linea. Inoltre, il framework supporta due comandi della Guida semplice, indice della Guida e Guida di utilizzo.  
  
## <a name="help-files"></a>File della Guida  
 Microsoft Foundation classes presuppongono un singolo file della Guida. Tale file della Guida in linea deve avere lo stesso nome e percorso dell'applicazione. Ad esempio, se il file eseguibile è C:\MyApplication\MyHelp.exe il file della Guida deve essere C:\MyApplication\MyHelp.hlp. Impostare il percorso tramite il *m_pszHelpFilePath* variabile membro del [CWinApp (classe)](../mfc/reference/cwinapp-class.md).  
  
## <a name="help-context-ranges"></a>Gli intervalli di contesto della Guida  
 L'implementazione predefinita di MFC è necessario un programma a seguire alcune regole relative all'assegnazione dell'ID di contesto. Queste regole sono un intervallo di ID allocato a controlli specifici. È possibile eseguire l'override di queste regole fornendo implementazioni diverse delle varie funzioni membro correlate alla Guida.  
  
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
  
## <a name="simple-help-commands"></a>Comandi semplice "Help"  
 Esistono due comandi della Guida semplici che vengono implementati da Microsoft Foundation Classes:  
  
-   ID_HELP_INDEX implementato da [CWinApp::OnHelpIndex](../mfc/reference/cwinapp-class.md#onhelpindex)  
  
-   ID_HELP_USING implementato da [CWinApp::OnHelpUsing](../mfc/reference/cwinapp-class.md#onhelpusing)  
  
 Il primo comando Mostra l'indice della Guida per l'applicazione. Il secondo mostra la Guida dell'utente in utilizzando il programma WinHelp.  
  
## <a name="context-sensitive-help-f1-help"></a>Guida sensibile al contesto (F1 Guida)  
 In genere, il tasto F1 viene convertito in un comando con un ID di ID_HELP da un acceleratore inserito nella tabella di tasti di scelta rapida della finestra principale. ID_HELP (comando) può essere generato anche tramite un pulsante con un ID di ID_HELP nella finestra di dialogo o finestra principale.  
  
 Indipendentemente dalla modalità di generazione ID_HELP (comando), viene indirizzato come un normale comando fino a raggiungere un gestore del comando. Per ulteriori informazioni sull'architettura di routing di comandi di MFC, consultare [21 Nota tecnica](../mfc/tn021-command-and-message-routing.md). Se l'applicazione ha Guida abilitata, il comando ID_HELP verrà gestito dal [CWinApp::OnHelp](../mfc/reference/cwinapp-class.md#onhelp). L'oggetto applicazione riceve il messaggio della Guida e quindi indirizza il comando in modo appropriato. Ciò è necessario poiché il routing di comandi predefinito non è sufficiente per determinare il contesto più specifico.  
  
 `CWinApp::OnHelp` è stato effettuato un tentativo di avviare WinHelp nell'ordine seguente:  
  
1.  Verifica la presenza di un oggetto attivo `AfxMessageBox` chiamata con un ID della Guida. Se è attiva una finestra di messaggio, WinHelp viene avviata con il contesto appropriato per tale finestra di messaggio.  
  
2.  Invia un messaggio WM_COMMANDHELP sulla finestra attiva. Se tale finestra non risponde avviando WinHelp, lo stesso messaggio viene quindi inviato per i predecessori di tale finestra fino a quando non viene elaborato il messaggio o la finestra corrente sia una finestra di primo livello.  
  
3.  Invia un comando ID_DEFAULT_HELP alla finestra principale. Viene richiamato il valore predefinito della Guida. Questo comando è in genere mappato a `CWinApp::OnHelpIndex`.  
  
 Per eseguire l'override a livello globale i ID base valori predefiniti (ad esempio 0x10000 per comandi e 0x20000 per le risorse, ad esempio le finestre di dialogo), l'applicazione deve eseguire l'override [CWinApp::WinHelp](../mfc/reference/cwinapp-class.md#winhelp).  
  
 Per eseguire l'override di questa funzionalità e la modalità che è determinato un contesto della Guida, è necessario gestire il messaggio WM_COMMANDHELP. Si potrebbe voler fornire routing più specifici della Guida che fornisce il framework, tragitto solo come deep come finestra figlio MDI corrente. È possibile inoltre fornite informazioni più specifiche di una particolare finestra o finestra di dialogo, forse basata sullo stato corrente interno di tale oggetto o il controllo attivo nella finestra di dialogo.  
  
## <a name="wmcommandhelp"></a>WM_COMMANDHELP  
  
```  
 
afx_msg LRESULT CWnd::OnCommandHelp(WPARAM wParam, LPARAM lParam)  
 
```  
  
 WM_COMMANDHELP è un messaggio Windows MFC privato ricevuto dalla finestra attiva quando viene richiesta la Guida. Quando la finestra riceve questo messaggio, è possibile chiamare `CWinApp::WinHelp` con contesto che corrisponde allo stato interno della finestra.  
  
 *lParam*  
 Contiene il contesto della Guida disponibile. *lParam* è uguale a zero se non è stato determinato alcun contesto. Un'implementazione di `OnCommandHelp` può usare l'ID di contesto nel *lParam* per stabilire un contesto diverso oppure può semplicemente passarlo a `CWinApp::WinHelp`.  
  
 *wParam*  
 Non viene utilizzato e sarà zero.  
  
 Se il `OnCommandHelp` chiamate di funzione `CWinApp::WinHelp`, dovrebbe restituire **TRUE**. Restituzione **TRUE** Arresta il routing di questo comando ad altre classi e alle altre finestre.  
  
## <a name="help-mode-shiftf1-help"></a>Modalità della Guida (MAIUSC + F1)  
 Questa è la seconda forma della Guida sensibile al contesto. In genere, questa modalità viene immesso premendo MAIUSC + F1 o tramite il menu/barra degli strumenti. Viene implementato come un comando (ID_CONTEXT_HELP). Hook di filtro del messaggio non viene utilizzato per convertire questo comando durante la finestra di dialogo modale o menu è attivo, pertanto questo comando è disponibile solo all'utente quando l'applicazione è in esecuzione il message pump principale (`CWinApp::Run`).  
  
 Dopo aver immesso questa modalità, il cursore del mouse viene visualizzato su tutte le aree dell'applicazione, anche se l'applicazione verrà visualizzato normalmente il proprio cursore per tale area (ad esempio il bordo di ridimensionamento intorno alla finestra). L'utente è in grado di utilizzare il mouse o tastiera per selezionare un comando. Anziché eseguire il comando, viene visualizzata la Guida per il comando. Inoltre, l'utente può fare clic su un oggetto visibile sullo schermo, ad esempio un pulsante sulla barra degli strumenti, e verrà visualizzata la Guida per l'oggetto. Questa modalità della Guida in linea viene fornita da `CWinApp::OnContextHelp`.  
  
 Durante l'esecuzione di questo ciclo, tutti i tasti di input non è attivo, ad eccezione di chiavi di accedere al menu. Inoltre, la traduzione di comando continua ad avvenire mediante `PreTranslateMessage` per consentire all'utente di premere un tasto di scelta rapida e ottenere assistenza per il comando.  
  
 Se esistono particolare traduzioni o azioni che posizionare nel `PreTranslateMessage` funzione che non si verificano durante modalità MAIUSC + F1 Guida in linea, è consigliabile controllare il *m_bHelpMode* membro di `CWinApp` prima di eseguire quelli operazioni. Il `CDialog` attuazione `PreTranslateMessage` verificato questo requisito prima di chiamare `IsDialogMessage`, ad esempio. Disabilita la "finestra di dialogo" tasti sulle finestre di dialogo non modali durante la modalità MAIUSC + F1. Inoltre, `CWinApp::OnIdle` viene ancora chiamato durante il ciclo.  
  
 Se l'utente sceglie un comando dal menu, viene gestita come guida per il comando (tramite WM_COMMANDHELP, vedere di seguito). Se l'utente fa clic su un'area visibile della finestra di applicazioni, determinare lo stato viene effettuato sia in un clic non client oppure fare clic su un client. `OnContextHelp` mapping di handle di eliminazione fa clic automaticamente ai client clic. Se è, fare clic su un client invia quindi un WM_HELPHITTEST alla finestra che è stato fatto clic. Se tale finestra viene restituito un valore diverso da zero, tale valore viene utilizzato come contesto per la Guida. Se viene restituito zero, `OnContextHelp` tenta la finestra padre (mancanza, l'elemento padre e così via). Se non è possibile determinare un contesto della Guida, il valore predefinito è inviare un comando ID_DEFAULT_HELP alla finestra principale, che viene quindi (in genere) mappato a `CWinApp::OnHelpIndex`.  
  
## <a name="wmhelphittest"></a>WM_HELPHITTEST  
  
```  
 
afx_msg LRESULT CWnd::OnHelpHitTest(
WPARAM, LPARAM lParam)  
```  
  
 WM_HELPHITTEST è un messaggio di windows privati MFC che viene ricevuto da scelto durante la modalità MAIUSC + F1 della finestra attiva. Quando la finestra riceve questo messaggio, viene restituito un **DWORD** ID della Guida per l'utilizzo da WinHelp.  
  
 LOWORD(lParam)  
 contiene la coordinata di dispositivo asse x in cui il mouse ha fatto clic relativo all'area client della finestra.  
  
 HIWORD(lParam)  
 contiene la coordinata y.  
  
 *wParam*  
 non viene utilizzato e sarà zero. Se il valore restituito è diverso da zero, viene chiamato WinHelp con tale contesto. Se il valore restituito è zero, la finestra padre viene eseguita una query per la Guida.  
  
 In molti casi, è possibile sfruttare il codice ed eseguire hit testing che è già presente. Vedere l'implementazione di `CToolBar::OnHelpHitTest` per un esempio di gestione del messaggio WM_HELPHITTEST (il codice utilizza il codice di hit test utilizzato per i pulsanti e le descrizioni comandi in `CControlBar`).  
  
## <a name="mfc-application-wizard-support-and-makehm"></a>MAKEHM e supporto della procedura guidata applicazione MFC  
 La creazione guidata applicazione MFC crea i file necessari per compilare un file della Guida (file CNT e hpj). Include inoltre un numero di file RTF predefiniti che vengono accettate dal compilatore della Guida Microsoft. Molti degli argomenti sono completi, ma alcuni potrebbe essere necessario modificare per l'applicazione specifica.  
  
 Creazione automatica di un file "help mapping" è supportata da un'utilità denominata MAKEHM. L'utilità MAKEHM può tradurre risorse dell'applicazione. File H da un file di mapping della Guida. Ad esempio:  
  
```  
#define IDD_MY_DIALOG   2000  
#define ID_MY_COMMAND   150  
```  
  
 viene convertito in:  
  
```  
HIDD_MY_DIALOG    0x207d0  
HID_MY_COMMAND    0x10096  
```  
  
 Questo formato è compatibile con la funzione del compilatore della Guida, che consente di associare gli ID di contesto (i numeri a destra) con i nomi di argomento (simboli sul lato sinistro).  
  
 Il codice sorgente per MAKEHM è disponibile nell'esempio dell'utilità di programmazione MFC [MAKEHM](../visual-cpp-samples.md).  
  
## <a name="adding-help-support-after-running-the-mfc-application-wizard"></a>Aggiunta del supporto della Guida in linea dopo aver eseguito la creazione guidata applicazione MFC  
 Il modo migliore per aggiungere una Guida per l'applicazione è per selezionare l'opzione "Della Guida sensibile al contesto" nella pagina funzionalità avanzate della creazione guidata applicazione MFC prima di creare l'applicazione. In questo modo la creazione guidata applicazione MFC aggiunge automaticamente le voci della mappa messaggi necessari per il `CWinApp`-derivata per supportare la Guida.  
  
## <a name="help-on-message-boxes"></a>Guida in linea nelle finestre di messaggio  
 Informazioni sulle finestre di messaggio, talvolta denominata avvisi, sono supportato tramite il `AfxMessageBox` (funzione), un wrapper per il `MessageBox` API Windows.  
  
 Sono disponibili due versioni di `AfxMessageBox`, uno per l'utilizzo con un ID di stringa e un altro per l'utilizzo con un puntatore alla stringa (`LPCSTR`):  
  
```  
int AFXAPI AfxMessageBox(LPCSTR lpszText,
    UINT nType,
    UINT nIDHelp);

int AFXAPI AfxMessageBox(UINT nIDPrompt,
    UINT nType,
    UINT nIDHelp);
```  
  
 In entrambi i casi, è un parametro facoltativo ID della Guida.  
  
 Nel primo caso, il valore predefinito per nIDHelp è 0, che indica alcuna informazione della Guida per questa finestra di messaggio. Se l'utente preme F1 mentre, ad esempio messaggio casella è attiva, l'utente non riceverà della Guida (anche se l'applicazione supporta Help). Se ciò non è opportuno, è necessario specificare un ID della Guida per nIDHelp.  
  
 Nel secondo caso, il valore predefinito per nIDHelp è -1, che indica che l'ID della Guida è lo stesso come nIDPrompt. Guida in linea funziona solo se l'applicazione è abilitata per la Guida, naturalmente). Se si desidera che la finestra di messaggio non esiste supporto della Guida, è necessario fornire 0 per nIDHelp. Se si vuole il messaggio da Guida abilitata, ma richiede un ID della Guida diverse rispetto a nIDPrompt, è sufficiente fornire un valore positivo per nIDHelp diverso da quello del nIDPrompt.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

