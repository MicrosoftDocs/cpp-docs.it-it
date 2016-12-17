---
title: "TN028: supporto della guida sensibile al contesto | Microsoft Docs"
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
  - "vc.help"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Guida sensibile al contesto, MFC (applicazioni)"
  - "identificatori di risorsa, Guida sensibile al contesto"
  - "TN028"
ms.assetid: 884f1c55-fa27-4d4c-984f-30907d477484
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN028: supporto della guida sensibile al contesto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota descrive le regole per l'assegnazione dei contesti ID e il resto della guida problemi della guida in MFC.  Il supporto della guida sensibile al contesto richiede il compilatore della guida disponibile in Visual C\+\+.  
  
> [!NOTE]
>  Oltre all'implementazione della guida sensibile al contesto utilizzando WinHelp, supporto MFC anche utilizzando guida HTML.  Per ulteriori informazioni su questi supporto e programmazione con la guida HTML, vedere [Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md).  
  
## Tipi di guida di supporto  
 Esistono due tipi di guida sensibili al contesto implementati nelle applicazioni Windows.  Il primo, definito "Guida online" include avviare WinHelp al contesto appropriato in base a \- sull'oggetto attivo.  Il secondo è "modalità di Shift\+ F1".  In questa modalità, nel cursore del mouse in corrispondenza della guida e procede nell'utente di fare clic su un oggetto.  A questo punto, WinHelp viene attivato per effettuare supporto per l'oggetto su cui l'utente ha fatto clic.  
  
 Le classi MFC \(Microsoft Foundation Class\) implementano entrambi form della guida.  Inoltre, il framework supporta due controlli semplici della guida, indice della guida e la utilizza.  
  
## File della Guida  
 Le classi MFC \(Microsoft Foundation presuppongono un singolo file della Guida.  Il file della Guida deve avere lo stesso nome e percorso dell'applicazione.  Ad esempio, se l'eseguibile è C:\\MyApplication\\MyHelp.exe il file della Guida deve essere C:\\MyApplication\\MyHelp.hlp.  Impostare il percorso tramite la variabile membro di `m_pszHelpFilePath` di [CWinApp Class](../mfc/reference/cwinapp-class.md).  
  
## Intervalli di contesto della guida  
 L'implementazione predefinita di MFC richiede un programma di seguire alcune regole sull'assegnazione di contesto ID della guida.  Queste regole sono un intervallo degli ID allocati in controlli specifici.  È possibile eseguire l'override di queste regole fornendo implementazioni diverse delle diverse funzioni membro Guida\- correlate.  
  
```  
0x00000000 - 0x0000FFFF : user defined  
0x00010000 - 0x0001FFFF : commands (menus/command buttons)  
   0x00010000 + ID_  
   (note: 0x18000-> 0x1FFFF is the practical range since command IDs are >=0x8000)  
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
  
## Controlli semplici "della guida"  
 Esistono due controlli semplici della guida in cui vengono implementati da Microsoft Foundation Class\):  
  
-   ID\_HELP\_INDEX implementato da [CWinApp::OnHelpIndex](../Topic/CWinApp::OnHelpIndex.md)  
  
-   ID\_HELP\_USING implementato da [CWinApp::OnHelpUsing](../Topic/CWinApp::OnHelpUsing.md)  
  
 Il primo comando mostra l'indice della guida per l'applicazione.  Nel secondo viene illustrata la guida utente sull'utilizzo del programma di WinHelp.  
  
## Guida sensibile al contesto \(Guida online\)  
 Il tasto F1 in genere viene convertito in un comando con un ID di `ID_HELP` da una scelta rapida posizionato nella tabella dei tasti di scelta rapida della finestra principale.  Il comando di `ID_HELP` può essere generato da un pulsante con un ID di `ID_HELP` nella finestra principale o nella finestra di dialogo.  
  
 Indipendentemente da come il comando di `ID_HELP` viene generato, viene indirizzato come comando normale fino a raggiungere un gestore comando.  Per ulteriori informazioni sull'architettura di routing dei comandi MFC, fare riferimento a [Nota tecnica 21](../mfc/tn021-command-and-message-routing.md).  Se l'applicazione include guida abilitata, il comando di `ID_HELP` verrà gestito da [CWinApp::OnHelp](../Topic/CWinApp::OnHelp.md).  L'oggetto application riceve il messaggio della guida e quindi indirizza il comando in modo appropriato.  Questa operazione è necessaria poiché il routing di comandi predefinito non è appropriato per la determinazione del contesto più specifico.  
  
 tentativi di`CWinApp::OnHelp` di avviare WinHelp nell'ordine seguente:  
  
1.  Verificare una chiamata diretta di `AfxMessageBox` con un ID della guida  Se una finestra di messaggio è attualmente attive, WinHelp viene attivato al contesto appropriato a tale finestra di messaggio.  
  
2.  Invia un messaggio di WM\_COMMANDHELP alla finestra attiva.  Se la finestra non risponde in WinHelp, lo stesso messaggio viene inviato ai predecessori della finestra fino all'elaborazione del messaggio o la finestra corrente sia una finestra di primo livello.  
  
3.  Invia un comando di ID\_DEFAULT\_HELP alla finestra principale.  In questo modo viene richiamato la guida predefinita.  Questo comando è mappato in genere a `CWinApp::OnHelpIndex`.  
  
 Per globalmente eseguire l'override dei valori di base di ID predefinito \(ad esempio 0x10000 per i controlli e 0x20000 per risorse come finestre di dialogo\), l'applicazione deve eseguire l'override [CWinApp::WinHelp](../Topic/CWinApp::WinHelp.md).  
  
 Per eseguire l'override di questa funzionalità e il modo in cui un contesto della guida è determinato, è necessario un messaggio di WM\_COMMANDHELP.  È possibile fornire il routing più specifico della guida che il framework fornirà, poiché andare solo in profondità della finestra figlio MDI corrente.  È inoltre possibile fornire la guida più specifica per una finestra o una finestra di dialogo particolare, magari in base allo stato interno corrente dell'oggetto o sul controllo attivo nella finestra di dialogo.  
  
## WM\_COMMANDHELP  
  
```  
  
afx_msg LRESULT CWnd::OnCommandHelp(WPARAM wParam, LPARAM lParam)  
```  
  
 WM\_COMMANDHELP è un messaggio privato delle finestre MFC ricevuto dalla finestra attiva quando la guida è richiesta.  Quando la finestra riceve il messaggio, può chiamare `CWinApp::WinHelp` al contesto che corrisponda allo stato interno della finestra.  
  
 `lParam`  
 Contiene il contesto attualmente disponibile della guida.  `lParam` è zero se nessun contesto della guida è stato stabilito.  Un'implementazione di `OnCommandHelp` può utilizzare l'id del contesto in `lParam` per determinare un contesto diverso o può essere passata solo a `CWinApp::WinHelp`.  
  
 `wParam`  
 Non viene utilizzato e sarà zero.  
  
 Se le chiamate di funzione `CWinApp::WinHelp`, di `OnCommandHelp` restituiscono `TRUE`.  Restituire `TRUE` interrompe il routing di questo comando da altre classi e alle altre finestre.  
  
## Modalità guida \(guida Shift\+F1\)  
 Si tratta della seconda forma di guida sensibile al contesto.  In genere, questo modo viene inserita premendo SHIFT\+F1 o tramite menu o barra degli strumenti.  Viene implementato come comando \(**ID\_CONTEXT\_HELP**\).  L'hook del filtro messaggi non viene utilizzato per convertire questo comando mentre una finestra di dialogo modale o un menu è attivo, questo comando è disponibile solo dell'utente quando l'applicazione esegue il message pump principale \(`CWinApp::Run`\).  
  
 Dopo avere immesso in questa modalità, il cursore del mouse della guida visualizzata sopra i campi dell'applicazione, anche se l'applicazione in genere visualizzano il proprio cursore per l'area \(ad esempio il bordo di ridimensionamento attorno alla finestra.  L'utente può utilizzare il mouse o la tastiera per selezionare un comando.  Anziché esecuzione del comando, la guida su tale comando visualizza.  Inoltre, l'utente può fare clic su un oggetto visibile sullo schermo, ad esempio un pulsante nella barra degli strumenti e la guida visualizzata per tale oggetto.  Questa modalità di guida è fornita da `CWinApp::OnContextHelp`.  
  
 Durante l'esecuzione del ciclo, tutti gli input della tastiera è inattivo, fatta eccezione per le chiavi che accedono al menu.  Inoltre, la conversione del comando viene comunque eseguita tramite `PreTranslateMessage` per consentire all'utente di premere un tasto di scelta rapida e ricezione della guida su tale comando.  
  
 Se sono presenti conversioni particolari o azioni che vengono eseguite in `PreTranslateMessage` esecuzione che non è necessario eseguire durante la modalità guida SHIFT\+F1, estrarre il membro di `m_bHelpMode` di `CWinApp` prima di eseguire queste operazioni.  L'implementazione di `CDialog` di `PreTranslateMessage` controlla questa prima di chiamare `IsDialogMessage`, ad esempio.  Verranno disabilitati "chiavi di navigazione della finestra di dialogo" sulle finestre di dialogo non modali in modalità SHIFT\+F1.  Inoltre, `CWinApp::OnIdle` ancora viene chiamato durante tale ciclo.  
  
 Se l'utente sceglie un comando di menu, viene gestito come guida su tale comando \(con **WM\_COMMANDHELP**, vedere di seguito\).  Se l'utente fa clic su un'area visibile della finestra di applicazioni, la determinazione viene eseguita se è un clic non client o un clic client.  eseguire il mapping degli handle di`OnContextHelp` di clic non client agli eventi click client automaticamente.  Se è un clic client, quindi invia **WM\_HELPHITTEST** alla finestra da cui è stato fatto clic.  Se tale finestra restituisce un valore diverso da zero, tale valore viene utilizzato come contesto della guida.  Se restituisce zero, `OnContextHelp` provare la finestra padre \(e non riesce, quello relativo padre, e così via\).  Se un contesto della guida non può essere determinato, il valore predefinito è 1.048.576 inviare un comando di **ID\_DEFAULT\_HELP** alla finestra principale, che viene in genere\) viene mappato a `CWinApp::OnHelpIndex`.  
  
## WM\_HELPHITTEST  
  
```  
  
afx_msg LRESULT CWnd::OnHelpHitTest(  
WPARAM, LPARAM lParam)  
```  
  
 **WM\_HELPHITTEST** è un messaggio privato delle finestre MFC ricevuto dalla finestra attiva selezionato durante la modalità guida SHIFT\+F1.  Quando la finestra riceve il messaggio, restituisce una guida ID DWORD per l'utilizzo di WinHelp.  
  
 LOWORD \(lParam\)  
 contiene la coordinata di periferica dell'asse X in cui il mouse è stato fatto clic all'area client della finestra.  
  
 HIWORD \(lParam\)  
 contiene la coordinata dell'asse Y.  
  
 `wParam`  
 non viene utilizzato e sarà zero.  Se il valore restituito è diverso da zero, WinHelp viene chiamato con tale contesto.  Se il valore restituito è zero, la finestra padre viene eseguita una query per guida.  
  
 In molti casi, è possibile utilizzare il codice di hit testing è già presente.  Vedere l'implementazione di **CToolBar::OnHelpHitTest** per un esempio di gestire il messaggio di **WM\_HELPHITTEST** \(il codice si basa il codice dell'hit test utilizzato sui pulsanti e le descrizioni comandi in `CControlBar`\).  
  
## Supporto della Creazione guidata applicazione MFC e MAKEHM  
 La Creazione guidata applicazione MFC crea i file necessari per compilare un file della Guida \(file di .hpj e di .cnt\).  Comprende una serie di file .rtf preesistenti accettati dal compilatore della guida Microsoft.  Molti degli argomenti sono full, ma alcune possono essere necessario modificare per l'applicazione specifica.  
  
 La creazione automatica "di un file di mapping della guida" è supportata da un'utilità denominata MAKEHM.  L'utilità MAKEHM è possibile convertire il file di RESOURCE.H di un'applicazione in un file di mapping della guida.  Di seguito è riportato un esempio.  
  
```  
#define IDD_MY_DIALOG   2000  
#define ID_MY_COMMAND   150  
```  
  
 viene convertita in:  
  
```  
HIDD_MY_DIALOG    0x207d0  
HID_MY_COMMAND    0x10096  
```  
  
 Questo formato è compatibile con la funzionalità del compilatore della guida, che esegue il mapping del contesto gli ID \(i numeri dalla destra\) con i nomi degli argomenti \(simboli lato sinistro\).  
  
 Il codice sorgente di MAKEHM è disponibile nell'esempio [MAKEHM](../top/visual-cpp-samples.md)di utilità di programmazione MFC.  
  
## Supporto della Guida aggiungi dopo aver eseguito la Creazione guidata applicazione MFC  
 Il modo migliore per aggiungere la guida all'applicazione consiste nel verificare l'opzione "della guida sensibile al contesto" nella pagina funzionalità avanzate della Creazione guidata applicazione MFC prima di creare l'applicazione.  In questo modo la Creazione guidata applicazione MFC automaticamente aggiunge voci della mappa messaggi necessarie al `CWinApp`\- classe derivata la guida di supporto.  
  
## Guida sulle finestre di messaggio  
 La guida sulle finestre di messaggio \(talvolta chiamate avvisi\) è supportata tramite la funzione di `AfxMessageBox`, un wrapper per `MessageBox` API Windows.  
  
 Esistono due versioni di `AfxMessageBox`, uno per l'utilizzo con un ID stringa e un altro per l'utilizzo con un puntatore mettere insieme \(`LPCSTR`\):  
  
```  
int AFXAPI AfxMessageBox(LPCSTR lpszText, UINT nType, UINT nIDHelp);  
int AFXAPI AfxMessageBox(UINT nIDPrompt, UINT nType, UINT nIDHelp);  
```  
  
 In entrambi i casi, esiste un ID facoltativa della guida  
  
 Nella prima caso, l'impostazione predefinita per nIDHelp è 0, che indica l'assenza guida per questa finestra di messaggio.  Se l'utente preme F1 e come finestra di messaggio è attivo, l'utente non riceverà la guida \(anche se la guida di supportare di applicazione\).  Se questo non è appropriato, una guida ID deve essere fornita per nIDHelp.  
  
 Nella seconda caso, il valore predefinito per nIDHelp è \-1, che indica che la guida ID corrisponde al nIDPrompt.  La guida verrà eseguita solo se l'applicazione Guida\- è abilitata, naturalmente\).  È necessario fornire 0 per nIDHelp se si desidera che la finestra di messaggio non dispongono di supporto della Guida.  Se si desidera che il messaggio per essere guida abilitata, ma si desidera una guida diverso ID che il nIDPrompt, fornire semplicemente un valore positivo per nIDHelp diverso da quello di nIDPrompt.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)