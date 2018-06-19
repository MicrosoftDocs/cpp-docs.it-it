---
title: 'Comando TN021: Routing e messaggi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.routing
dev_langs:
- C++
helpviewer_keywords:
- TN021
- command routing [MFC], technical note TN021
- Windows messages [MFC], routing
ms.assetid: b5952c8b-123e-406c-a36d-a6ac7c6df307
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a1061f4a7d4394cb84c26514795c406f78146df
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33384956"
---
# <a name="tn021-command-and-message-routing"></a>TN021: routing di comandi e messaggi
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive l'architettura di routing e l'invio di comandi, nonché argomenti avanzati nel routing dei messaggi finestra generale.  
  
 Fare riferimento a Visual C++ per informazioni generali sulle architetture descritte di seguito, in particolare la distinzione tra i messaggi, le notifiche dei controlli e i comandi di Windows. Questa nota si presuppone che si ha dimestichezza con i problemi descritti nella documentazione di stampa e solo indirizzi argomenti molto avanzati.  
  
## <a name="command-routing-and-dispatch-mfc-10-functionality-evolves-to-mfc-20-architecture"></a>Comandi (Routing) e l'invio MFC 1.0 funzionalità si evolve a MFC 2.0 architettura  
 Windows ha il **WM_COMMAND** messaggio in cui è sottoposto a overload per fornire le notifiche delle notifiche dei controlli di finestra di dialogo, i comandi di menu e tasti di scelta rapida.  
  
 MFC 1.0 sviluppato su una leggermente, consentendo un gestore del comando (ad esempio, "OnFileNew") in un **CWnd** derivata da una chiamata in risposta a una specifica **WM_COMMAND**. Questo viene associato insieme a una struttura di dati denominata la mappa dei messaggi e comporta un meccanismo di comando molto spazio efficiente.  
  
 MFC 1.0 fornito anche funzionalità aggiuntive per separare le notifiche dei controlli dai messaggi di comando. I comandi sono rappresentati da un ID a 16 bit, talvolta noto anche come un ID di comando. I comandi in genere iniziano da un **CFrameWnd** (vale a dire, selezionare un menu o un acceleratore tradotto) e vengono instradati a una varietà di altre finestre.  
  
 MFC 1.0 utilizzato il routing di comandi in senso limitato per l'implementazione dell'interfaccia di documenti multipli (MDI). (Una finestra cornice MDI delega i comandi alla finestra figlio MDI attivo).  
  
 Questa funzionalità è stata generalizzata ed estesa in MFC 2.0 per consentire i comandi devono essere gestiti da una vasta gamma di oggetti (non solo finestra). Fornisce un più formali e architettura estendibile per il routing dei messaggi e riutilizza il routing di destinazione di comando per non solo la gestione dei comandi, ma anche per l'aggiornamento di oggetti dell'interfaccia utente (ad esempio voci di menu e pulsanti della barra degli strumenti) in modo da riflettere la disponibilità di un comando corrente .  
  
## <a name="command-ids"></a>ID comandi  
 Per una spiegazione del routing e processo di associazione del comando, vedere Visual C++. [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) contiene informazioni sulla denominazione degli ID.  
  
 Il prefisso generico "ID _" è usato per gli ID di comando. Gli ID di comando sono > = 0x8000. Barra di stato o di riga dei messaggi verrà visualizzata la stringa di descrizione comando se sussiste una risorsa STRINGTABLE con gli stessi ID come ID di comando.  
  
 Nelle risorse dell'applicazione, un possibile ID di comando viene visualizzata in diverse posizioni:  
  
-   In una risorsa STRINGTABLE con lo stesso ID il prompt della riga di messaggio.  
  
-   Probabilmente molti MENU risorse che sono associati alle voci di menu che richiamano il comando stesso.  
  
-   (Avanzate) in un pulsante della finestra di dialogo per un comando GOSUB.  
  
 Nel codice sorgente dell'applicazione, un possibile ID di comando viene visualizzata in diverse posizioni:  
  
-   Nella risorsa. H (o altri file di intestazione simboli principale) per definire gli ID di comando specifici dell'applicazione.  
  
-   Ad esempio In una matrice di ID utilizzata per creare una barra degli strumenti.  
  
-   In un **ON_COMMAND** (macro).  
  
-   Ad esempio In un **ON_UPDATE_COMMAND_UI** (macro).  
  
 Attualmente, l'unica implementazione in MFC che richiede l'ID di comando essere > = 0x8000 è l'implementazione di finestre di dialogo GOSUB/comandi.  
  
## <a name="gosub-commands-using-command-architecture-in-dialogs"></a>Comandi GOSUB, l'utilizzo dell'architettura di comando nelle finestre di dialogo  
 L'architettura di comando di routing e l'abilitazione di comandi funziona bene con finestre cornice, le voci di menu, pulsanti, pulsanti della barra di finestra di dialogo, altre barre di controllo e altri elementi dell'interfaccia utente progettati per l'aggiornamento su richiesta e route comandi o gli ID di controllo per una funzione main destinazione del comando (in genere una finestra cornice principale). Tale destinazione comando principale può inviare le notifiche di comando o il controllo ad altri oggetti destinazione comando come appropriato.  
  
 Una finestra di dialogo (modale o non modale) può trarre vantaggio da alcune delle funzionalità dell'architettura di comando, se si assegna l'ID di controllo del controllo finestra di dialogo per l'ID di comando appropriato. Supporto per le finestre di dialogo non è automatico, pertanto potrebbe essere necessario scrivere codice aggiuntivo.  
  
 Si noti che per tutte queste funzionalità per il corretto funzionamento, l'ID di comando deve essere > = 0x8000. Poiché molte finestre di dialogo può ottenere indirizzati al frame stesso, i comandi condivisi devono essere > = 0x8000, mentre il IDCs non condivisa in una finestra di dialogo specifica deve essere < = 0x7FFF.  
  
 È possibile inserire un pulsante normale in una normale finestra di dialogo modale con IDC del pulsante impostato per l'ID di comando appropriato. Quando l'utente seleziona il pulsante, il proprietario della finestra di dialogo (in genere una finestra cornice principale) Ottiene il comando esattamente come qualsiasi altro comando. Si tratta di un comando GOSUB perché in genere utilizzata per aprire un'altra finestra di dialogo (GOSUB della finestra di dialogo prima).  
  
 È inoltre possibile chiamare la funzione **CWnd::UpdateDialogControls** nella finestra di dialogo e passare l'indirizzo della finestra cornice principale. Questa funzione verrà abilitare o disabilitare i controlli finestra di dialogo in base al fatto che dispongano di gestori di comandi nel frame. Questa funzione viene chiamata automaticamente per l'utente per le barre di controllo nel ciclo di inattività dell'applicazione, ma è necessario chiamarlo direttamente per le normali finestre di dialogo che si desidera che questa funzionalità.  
  
## <a name="when-onupdatecommandui-is-called"></a>Quando viene chiamato ON_UPDATE_COMMAND_UI  
 Gestione dello stato abilitato selezionata di tutti un programma voci di menu costantemente può essere un problema onerosa. Una tecnica comune è attiva o selezionare le voci di menu solo quando l'utente seleziona la finestra POPUP. L'implementazione MFC 2.0 di **CFrameWnd** handle di **WM_INITMENUPOPUP** del messaggio e utilizza l'architettura di routing di comandi per determinare gli stati dei menu tramite **ON_UPDATE_COMMAND_ Interfaccia utente** gestori.  
  
 **CFrameWnd** gestisce inoltre il **WM_ENTERIDLE** messaggio per descrivere il menu corrente elemento selezionato della barra di stato (noto anche come il messaggio).  
  
 Struttura di menu di un'applicazione, modificata da Visual C++, viene utilizzata per rappresentare i potenziali comandi disponibili in **WM_INITMENUPOPUP** ora. **ON_UPDATE_COMMAND_UI** gestori eventi possono modificare lo stato o il testo di un menu o per utilizzi avanzati (ad esempio l'elenco di File MRU o il menu a comparsa OLE verbi), in realtà modifica la struttura di menu prima il menu viene disegnato.  
  
 Lo stesso tipo di **ON_UPDATE_COMMAND_UI** elaborazione viene eseguita per le barre degli strumenti e altre barre di controllo, quando l'applicazione immette il ciclo inattivo. Vedere il *riferimenti alla libreria di classi* e [Nota tecnica 31](../mfc/tn031-control-bars.md) per ulteriori informazioni sulle barre di controllo.  
  
## <a name="nested-pop-up-menus"></a>Menu a comparsa nidificati  
 Se si utilizza una struttura nidificata, si noterà che il **ON_UPDATE_COMMAND_UI** gestore per la prima voce di menu nel menu a comparsa viene chiamato in due diversi casi.  
  
 Innanzitutto, viene chiamato per il menu a comparsa. Ciò è necessario perché i menu a comparsa non dispongono di ID e l'ID della voce di menu prima del menu a comparsa utilizzato per indicare l'intero menu a comparsa. In questo caso, il **m_pSubMenu** variabile membro del **CCmdUI** oggetto sarà non NULL e punterà al menu di scelta rapida.  
  
 In secondo luogo, viene chiamato prima che le voci di menu nel menu a comparsa sono da disegnare. In questo caso, l'ID fa riferimento solo per la prima voce di menu e **m_pSubMenu** variabile membro del **CCmdUI** oggetto saranno NULL.  
  
 Consente di attivare il menu a comparsa diverso da quello di voci di menu, ma richiede la scrittura di codice compatibile con menu. Ad esempio, in un menu annidato con la struttura seguente:  
  
```  
File>  
    New> 
    Sheet (ID_NEW_SHEET)  
    Chart (ID_NEW_CHART)  
```  
  
 I comandi ID_NEW_SHEET e ID_NEW_CHART possono essere abilitati o disabilitati in modo indipendente. Il **New** menu di scelta rapida deve essere abilitato se uno dei due è abilitata.  
  
 Il gestore del comando per ID_NEW_SHEET (il primo comando nella finestra a comparsa) avrà un aspetto simile al seguente:  
  
```  
void CMyApp::OnUpdateNewSheet(CCmdUI* pCmdUI)  
{  
    if (pCmdUI->m_pSubMenu != NULL)  
 { *// enable entire pop-up for "New" sheet and chart  
    BOOL bEnable = m_bCanCreateSheet || m_bCanCreateChart;  
 *// CCmdUI::Enable is a no-op for this case,
    so we *//   must do what it would have done.  
    pCmdUI->m_pMenu->EnableMenuItem(pCmdUI->m_nIndex, 
    MF_BYPOSITION |   
 (bEnable  MF_ENABLED : (MF_DISABLED | MF_GRAYED)));

    return; 
 } *// otherwise just the New Sheet command  
    pCmdUI->Enable(m_bCanCreateSheet);

} 
```  
  
 Il gestore del comando per ID_NEW_CHART sarebbe un gestore del comando aggiornamento normale e un aspetto simile:  
  
```  
void CMyApp::OnUpdateNewChart(CCmdUI* pCmdUI)  
{  
    pCmdUI->Enable(m_bCanCreateChart);

} 
```  
  
## <a name="oncommand-and-onbnclicked"></a>ON_COMMAND e ON_BN_CLICKED  
 La macro della mappa messaggi per **ON_COMMAND** e **ON_BN_CLICKED** sono uguali. Per decidere dove indirizzare a, il comando e controllo notifica routing meccanismo MFC utilizza solo l'ID di comando. Controllare le notifiche con codice di notifica del controllo pari a zero (**BN_CLICKED**) vengono interpretate come comandi.  
  
> [!NOTE]
>  In effetti, tutti i messaggi di notifica di controllo passano attraverso la catena di gestore del comando. Ad esempio, è tecnicamente possibile scrivere un gestore della notifica di controllo per **EN_CHANGE** nella classe del documento. Non si tratta in genere consigliabile perché sono poche le applicazioni pratiche di questa funzionalità, la funzionalità non è supportata da ClassWizard e uso della funzionalità può generare codice fragili.  
  
## <a name="disabling-the-automatic-disabling-of-button-controls"></a>La disabilitazione automatica la disabilitazione di pulsanti  
 Se si posiziona un controllo pulsante su una barra di finestra di dialogo, o in una finestra di dialogo con cui si sta chiamando **CWnd::UpdateDialogControls** per proprio conto, si noterà che i pulsanti che non hanno **ON_COMMAND** o **ON_UPDATE_COMMAND_UI** gestori verranno disabilitati automaticamente per l'utente dal framework. In alcuni casi, non è necessario disporre di un gestore, ma è possibile che il pulsante rimanga abilitata. Il modo più semplice per ottenere questo risultato consiste nell'aggiungere un gestore del comando fittizio (un'operazione semplice con ClassWizard) e non eseguire alcuna operazione in essa contenuti.  
  
## <a name="window-message-routing"></a>Routing dei messaggi di finestra  
 Di seguito vengono descritti alcuni argomenti più avanzati in cui le classi MFC e il routing dei messaggi Windows e altri argomenti impatto di tali. Le informazioni qui solo brevemente descritte. Consultare la *riferimenti alla libreria di classe* per informazioni dettagliate sulle API pubbliche. Consultare il codice sorgente della libreria MFC per ulteriori informazioni sui dettagli di implementazione.  
  
 Consultare [17 Nota tecnica](../mfc/tn017-destroying-window-objects.md) per i dettagli nel processo di pulizia di finestra, un argomento molto importante per tutti i **CWnd**-classi derivate.  
  
## <a name="cwnd-issues"></a>Problemi di CWnd  
 La funzione membro di implementazione **CWnd:: OnChildNotify** fornisce un'architettura estendibile e potente per le finestre figlio (noto anche come controlli) associare o in caso contrario informata del controllo messaggi e comandi notifiche che fa riferimento alla loro padre (o "proprietario"). Se la finestra figlio (/ controllare) è C++ **CWnd** dell'oggetto stesso, la funzione virtuale **OnChildNotify** viene chiamato per primo con i parametri del messaggio originale (vale a dire un **MSG**struttura). La finestra figlio può lasciare invariato il messaggio, trasmissione o modificare il messaggio per l'elemento padre (raro).  
  
 Il valore predefinito **CWnd** implementazione gestisce i messaggi seguenti e utilizza il **OnChildNotify** hook per consentire al bambino windows (controlli) al primo accesso, il messaggio:  
  
- **WM_MEASUREITEM** e **WM_DRAWITEM** (di disegno automatico)  
  
- **WM_COMPAREITEM** e **WM_DELETEITEM** (di disegno automatico)  
  
- **WM_HSCROLL** e **WM_VSCROLL**  
  
- **WM_CTLCOLOR**  
  
- **WM_PARENTNOTIFY**  
  
 Si noterà la **OnChildNotify** hook viene utilizzata per modificare i messaggi di disegno personalizzato in messaggi di disegno automatico.  
  
 Oltre al **OnChildNotify** hook, messaggi di scorrimento sono ulteriormente il comportamento di routing. Vedere di seguito per ulteriori informazioni sulle barre di scorrimento e le fonti di **WM_HSCROLL** e **WM_VSCROLL** messaggi.  
  
## <a name="cframewnd-issues"></a>CFrameWnd problemi  
 Il **CFrameWnd** la maggior parte dei comandi (routing) e dell'interfaccia utente fornisce l'implementazione di aggiornamento. Viene utilizzato principalmente per la finestra cornice principale dell'applicazione (**CWinApp:: M_pmainwnd**) ma si applica a tutte le finestre cornice.  
  
 La finestra cornice principale è la finestra con barra dei menu ed è il padre della barra di stato o riga del messaggio. Fare riferimento alla trattazione precedente nel routing dei comandi e **WM_INITMENUPOPUP.**  
  
 Il **CFrameWnd** classe fornisce la gestione della visualizzazione attiva. I messaggi seguenti vengono indirizzati attraverso la visualizzazione attiva:  
  
-   Tutti i messaggi di comando (la visualizzazione attiva ottiene accesso prima).  
  
- **WM_HSCROLL** e **WM_VSCROLL** messaggi dall'elemento di pari livello scorrere le barre (vedere sotto).  
  
- **WM_ACTIVATE** (e **WM_MDIACTIVATE** per MDI) ottenere trasformata in chiamate alla funzione virtuale **CView::OnActivateView**.  
  
## <a name="cmdiframewndcmdichildwnd-issues"></a>CMDIFrameWnd/CMDIChildWnd problemi  
 Entrambe le classi di finestra cornice MDI derivano da **CFrameWnd** e pertanto sono entrambe abilitate per lo stesso tipo di comandi (routing) e l'aggiornamento dell'interfaccia utente fornita **CFrameWnd**. In una tipica applicazione MDI, solo la finestra cornice principale (vale a dire il **CMDIFrameWnd** oggetto) contiene una barra dei menu e barra di stato e pertanto è l'origine principale dell'implementazione del routing di comandi.  
  
 Lo schema di routing generale è che la finestra figlio MDI attiva Ottiene prima accedere ai comandi. Il valore predefinito **PreTranslateMessage** funzioni di gestiscono delle tabelle di tasti di scelta rapida per entrambe le finestre figlio MDI (prima) e la cornice MDI (secondo) nonché i standard MDI comando del sistema di scelta rapida in genere gestiti da  **TranslateMDISysAccel** (ultimo).  
  
## <a name="scroll-bar-issues"></a>Problemi di barra di scorrimento  
 Quando si gestiscono messaggi di scorrimento (**WM_HSCROLL**/**OnHScroll** e/o **WM_VSCROLL**/**OnVScroll**), è consigliabile provare a scrivere il codice del gestore in modo non si basa su provenienza del messaggio sulla barra di scorrimento. Questo non è solo un problema Windows generale, poiché i messaggi di scorrimento possono provenire da true scorrimento controlli barra dei comandi o da **WS_HSCROLL**/**WS_VSCROLL** barre che non sono controlli barra di scorrimento di scorrimento.  
  
 Estende MFC per controlli barra di scorrimento deve essere figlio o elementi di pari livello della finestra sottoposto a scorrimento (in realtà, la relazione padre-figlio tra la barra di scorrimento e sottoposto a scorrimento finestra può essere qualsiasi elemento). Questo è particolarmente importante per le barre di scorrimento condiviso con finestre con separatore. Consultare [29 Nota tecnica](../mfc/tn029-splitter-windows.md) per informazioni dettagliate sull'implementazione di **CSplitterWnd** con ulteriori informazioni su shared problemi barra di scorrimento.  
  
 In una nota, sono disponibili due **CWnd** in cui gli stili barra di scorrimento specificati al momento della creazione di classi derivate vengono intercettate e non è state passate a Windows. Quando viene passato a una routine di creazione, **WS_HSCROLL** e **WS_VSCROLL** possono essere impostate in modo indipendente, ma dopo la creazione non può essere modificata. Naturalmente, è consigliabile non direttamente test o impostare il bit di stile WS_SCROLL della finestra che hanno creato.  
  
 Per **CMDIFrameWnd** gli stili barra di scorrimento viene passato a **crea** o **LoadFrame** vengono utilizzati per creare il MDICLIENT. Se si desidera che un'area scorrevole MDICLIENT (come il programma di gestione Windows) assicurarsi di impostare gli stili delle barre di scorrimento entrambi (**WS_HSCROLL** &#124; **WS_VSCROLL**) per lo stile utilizzato per creare il **CMDIFrameWnd**.  
  
 Per **CSplitterWnd** si applicano gli stili barra di scorrimento per le barre di scorrimento condiviso speciali per le aree della barra di divisione. Per le finestre con separatore statico, in genere non si imposteranno uno stile della barra di scorrimento. Per le finestre con separatore dinamico, è in genere lo scorrimento della barra di uno stile è impostato per la direzione in cui verrà suddivisa, vale a dire **WS_HSCROLL** se è possibile suddividere le righe, **WS_VSCROLL** che sia possibile dividere le colonne.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

