---
title: 'TN021: Comando e il routing dei messaggi'
ms.date: 06/28/2018
f1_keywords:
- vc.routing
helpviewer_keywords:
- TN021
- command routing [MFC], technical note TN021
- Windows messages [MFC], routing
ms.assetid: b5952c8b-123e-406c-a36d-a6ac7c6df307
ms.openlocfilehash: ce8aa2013c8f2f351ca1028f0d6103135ba5ecd8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62306181"
---
# <a name="tn021-command-and-message-routing"></a>TN021: Comando e il routing dei messaggi

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive l'architettura di routing e l'invio di comandi, nonché argomenti avanzati nel routing dei messaggi finestra generale.

Consultare Visual C++ per informazioni generali sulle architetture descritte di seguito, in particolare la distinzione tra i messaggi, le notifiche dei controlli e comandi di Windows. In questa nota si presuppone che si ha dimestichezza con i problemi descritti nella documentazione stampata e viene fatto riferimento solo scenari molto avanzati.

## <a name="command-routing-and-dispatch-mfc-10-functionality-evolves-to-mfc-20-architecture"></a>Routing dei comandi e l'invio MFC 1.0 funzionalità si evolve a MFC 2.0 architettura

Windows include il messaggio WM_COMMAND che viene sottoposto a overload per fornire notifiche di comandi di menu, tasti di scelta rapida e le notifiche di controllo di finestra di dialogo.

MFC 1.0 basato su esso leggermente, consentendo a un gestore di comandi (ad esempio, "OnFileNew") in un `CWnd` classe richiamato in risposta a un specifiche WM_COMMAND derivata. Questo viene associato insieme a una struttura di dati denominata la mappa dei messaggi e comporta un meccanismo molto efficienti nello spazio di comando.

MFC 1.0 offre anche funzionalità aggiuntive per separare le notifiche dei controlli dai messaggi di comando. I comandi sono rappresentati da un ID di 16 bit, talvolta noto anche come un ID di comando. I comandi iniziano in genere da un `CFrameWnd` (vale a dire, un menu, selezionare o un tasto di scelta rapida tradotto) e vengono instradati a una varietà di altre finestre.

MFC 1.0 usato routing dei comandi in un certo senso limitato per l'implementazione di Multiple Document Interface (MDI). (Una finestra cornice MDI delega i comandi alla finestra figlio MDI attivo).

Questa funzionalità è stata generalizzata ed estesa in MFC 2.0 per consentire i comandi gestire una vasta gamma di oggetti (non solo finestra). Fornisce una più formali e architettura estendibile per il routing dei messaggi e viene riutilizzato il routing di destinazione di comando per non solo la gestione dei comandi, ma anche per l'aggiornamento di oggetti dell'interfaccia utente (ad esempio voci di menu e pulsanti della barra degli strumenti) in modo da riflettere la disponibilità corrente di un comando .

## <a name="command-ids"></a>ID comandi

Per una spiegazione del routing e processo di associazione del comando, vedere Visual C++. [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) contiene informazioni sulla denominazione degli ID.

Usiamo il prefisso generico "Con ID _" per gli ID di comando. ID di comando sono > = 0x8000. Barra di riga o lo stato dei messaggi verrà visualizzata la stringa di descrizione comando se vi è una risorsa STRINGTABLE con gli stessi ID come ID di comando.

Nelle risorse dell'applicazione, un comando che ID è visualizzato in diverse posizioni:

- In una sola risorsa STRINGTABLE con lo stesso ID prompt della riga di messaggio.

- In probabilmente molti MENU delle risorse associate alle voci di menu che richiamano il comando stesso.

- (Avanzate) in un pulsante di finestra di dialogo per un comando GOSUB.

Nel codice sorgente dell'applicazione, un comando che ID è visualizzato in diverse posizioni:

- Nella risorsa. H (o altri file di intestazione simboli principale) per definire gli ID di comando specifici dell'applicazione.

- Ad esempio In una matrice di ID utilizzata per creare una barra degli strumenti.

- In un ON_COMMAND (macro).

- Ad esempio In una macro ON_UPDATE_COMMAND_UI.

Attualmente, l'unica implementazione in MFC che richiede gli ID comando essere > = 0x8000 è l'implementazione di finestre di dialogo GOSUB/comandi.

## <a name="gosub-commands-using-command-architecture-in-dialogs"></a>Comandi GOSUB, architettura comando nelle finestre di dialogo

L'architettura di comando di routing e comandi per abilitare funziona bene con finestre cornice, le voci di menu, pulsanti della barra degli strumenti, pulsanti della barra della finestra di dialogo, altre barre di controllo e altri elementi dell'interfaccia utente progettati per aggiornare la domanda e instradare i comandi di accensione o ID di controllo per una funzione main destinazione del comando (in genere la finestra cornice principale). Che hanno come destinazione il comando principale può instradare le notifiche di comando o il controllo ad altri oggetti destinazione comando come appropriato.

Una finestra di dialogo (modale o non modale) può usufruire di alcune delle funzionalità dell'architettura del comando se si assegna l'ID di controllo del controllo finestra di dialogo per l'ID del comando appropriato. Supporto per le finestre di dialogo non è automatico, pertanto potrebbe essere necessario scrivere codice aggiuntivo.

Si noti che per tutte queste funzionalità per il corretto funzionamento, l'ID di comando deve essere > = 0x8000. Poiché molte finestre di dialogo potrebbe essere indirizzate a stesso frame, comandi condivisi devono essere > = 0x8000, mentre il IDCs non condivisa in una finestra di dialogo specifico deve essere < = 0x7FFF.

È possibile inserire un pulsante normale in una normale finestra di dialogo modale con IDC del pulsante impostato per l'ID del comando appropriato. Quando l'utente seleziona il pulsante, il proprietario della finestra di dialogo (in genere la finestra cornice principale) Ottiene il comando come qualsiasi altro comando. Si tratta di un comando GOSUB perché in genere utilizzata per visualizzare un'altra finestra di dialogo (GOSUB della finestra di dialogo prima).

È inoltre possibile chiamare la funzione `CWnd::UpdateDialogControls` nella finestra di dialogo e passare l'indirizzo della finestra cornice principale. Questa funzione verrà abilitare o disabilitare i controlli di finestra di dialogo basati sul fatto che dispongano di gestori di comandi nel frame. Questa funzione viene chiamata automaticamente per l'utente per le barre di controllo ciclo inattivo dell'applicazione, ma è necessario chiamarlo direttamente per le normali finestre di dialogo che si vuole che questa funzionalità.

## <a name="when-onupdatecommandui-is-called"></a>Quando viene chiamato ON_UPDATE_COMMAND_UI

Mantenere lo stato abilitato/controllati di tutti del programma voci di menu tutto il tempo può essere un problema di un'operazione costosa. Una tecnica comune è attiva/selezionare le voci di menu solo quando l'utente seleziona la finestra POPUP. L'implementazione MFC 2.0 di `CFrameWnd` gestisce il messaggio WM_INITMENUPOPUP e Usa l'architettura di routing di comandi per determinare gli stati dei menu tramite i gestori ON_UPDATE_COMMAND_UI.

`CFrameWnd` gestisce anche il messaggio WM_ENTERIDLE per descrivere il menu corrente elemento selezionato in barra di stato (noto anche come il messaggio).

Struttura menu di scelta di un'applicazione, modificata dall'oggetto visivo C++, viene usato per rappresentare i potenziali comandi disponibili in fase di WM_INITMENUPOPUP. I gestori ON_UPDATE_COMMAND_UI possono modificare lo stato o il testo di un menu o utilizzi avanzati (ad esempio, l'elenco di File usati di recente o il menu a comparsa OLE verbi), effettivamente modificare la struttura di menu prima che venga disegnato il menu di scelta.

Lo stesso tipo di elaborazione ON_UPDATE_COMMAND_UI avviene per le barre degli strumenti e altre barre di controllo, quando l'applicazione passerà il ciclo inattivo. Vedere le *Class Library Reference* e [Nota tecnica 31](../mfc/tn031-control-bars.md) per altre informazioni sulle barre di controllo.

## <a name="nested-pop-up-menus"></a>Menu a comparsa annidati

Se si usa una struttura annidata, si noterà che viene chiamato il gestore ON_UPDATE_COMMAND_UI per la prima voce di menu nel menu a comparsa in due diversi casi.

In primo luogo, viene chiamato per il menu a comparsa. Ciò è necessario perché i menu a comparsa non dispongono di ID e si usa l'ID della voce di menu prima del menu a comparsa per indicare l'intero menu a comparsa. In questo caso, il *m_pSubMenu* variabile membro del `CCmdUI` oggetto sarà diverso da NULL e faranno riferimento al menu a comparsa.

In secondo luogo, viene chiamato appena prima che le voci di menu nel menu a comparsa devono essere disegnati. In questo caso, l'ID si riferisce solo alla prima voce di menu e il *m_pSubMenu* variabile membro del `CCmdUI` oggetto saranno NULL.

Ciò consente di attivare il menu di scelta rapida diverso dalle voci di menu, ma richiede la scrittura di codice con riconoscimento dal menu. Ad esempio, in un menu annidato con la struttura seguente:

```Output
File>
    New>
    Sheet (ID_NEW_SHEET)
    Chart (ID_NEW_CHART)
```

I comandi ID_NEW_SHEET e ID_NEW_CHART possono essere abilitati o disabilitati in modo indipendente. Il **New** menu di scelta rapida deve essere abilitata se uno dei due è abilitata.

Il gestore del comando per ID_NEW_SHEET (il primo comando nella finestra popup) sarebbe simile al:

```cpp
void CMyApp::OnUpdateNewSheet(CCmdUI* pCmdUI)
{
    if (pCmdUI->m_pSubMenu != NULL)
    {
        // enable entire pop-up for "New" sheet and chart
        BOOL bEnable = m_bCanCreateSheet || m_bCanCreateChart;
        // CCmdUI::Enable is a no-op for this case, so we
        // must do what it would have done.
        pCmdUI->m_pMenu->EnableMenuItem(pCmdUI->m_nIndex,
            MF_BYPOSITION |
            (bEnable  MF_ENABLED : (MF_DISABLED | MF_GRAYED)));

        return;
    }
    // otherwise just the New Sheet command
    pCmdUI->Enable(m_bCanCreateSheet);
}
```

Il gestore del comando per ID_NEW_CHART sarebbe un gestore comando normale degli aggiornamenti e l'aspetto è simile a:

```cpp
void CMyApp::OnUpdateNewChart(CCmdUI* pCmdUI)
{
    pCmdUI->Enable(m_bCanCreateChart);
}
```

## <a name="oncommand-and-onbnclicked"></a>ON_COMMAND e ON_BN_CLICKED

La macro della mappa messaggi per **ON_COMMAND** e **ON_BN_CLICKED** sono uguali. Il comando e controllo notifica routing meccanismo MFC Usa solo l'ID di comando per decidere dove indirizzare a. Controllare le notifiche con codice di notifica di controllo pari a zero (**BN_CLICKED**) vengono interpretate come comandi.

> [!NOTE]
> In effetti, tutti i messaggi di notifica passano attraverso la catena del gestore comando. Ad esempio, è tecnicamente possibile per la scrittura di un gestore di notifica di controllo per **EN_CHANGE** nella classe del documento. Non si tratta in genere consigliabile perché sono poche le applicazioni pratiche di questa funzionalità, la funzionalità non è supportata da ClassWizard e uso della funzionalità può generare codice fragile.

## <a name="disabling-the-automatic-disabling-of-button-controls"></a>La disabilitazione automatica la disabilitazione dei controlli pulsante

Se si posiziona un controllo pulsante su una barra di finestra di dialogo, o in una finestra di dialogo utilizzo della clausola where si chiama **CWnd::UpdateDialogControls** per conto proprio, si noterà che i pulsanti che non hanno **ON_COMMAND** o**ON_UPDATE_COMMAND_UI** gestori verranno automaticamente disabilitati automaticamente dal framework. In alcuni casi, non è necessario disporre di un gestore, ma è consigliabile lasciare abilitato il pulsante. Il modo più semplice per ottenere questo risultato consiste nell'aggiungere un gestore comando fittizio (un'operazione semplice con la creazione guidata classe) e non eseguire alcuna azione in esso.

## <a name="window-message-routing"></a>Routing dei messaggi di finestra

Di seguito vengono descritti alcuni argomenti più avanzati su classi MFC e il routing dei messaggi Windows e altri argomenti impatto della loro. Le informazioni qui solo brevemente descritte. Vedere le *Class Library Reference* per informazioni dettagliate sulle API pubbliche. Consultare il codice sorgente della libreria MFC per ulteriori informazioni sui dettagli dell'implementazione.

Consultare [17 Nota tecnica](../mfc/tn017-destroying-window-objects.md) per informazioni dettagliate sulla pulitura di finestra, un argomento molto importante per tutte le **CWnd**-le classi derivate.

## <a name="cwnd-issues"></a>Problemi di CWnd

La funzione membro di implementazione **CWnd:: OnChildNotify** fornisce un'architettura potente ed estendibile per le finestre figlio (noto anche come controlli) associare o in caso contrario essere informati dei messaggi, i comandi e controllo notifiche viene inviato a loro padre (o "owner"). Se la finestra figlio (/ controllo) è un C++ **CWnd** dell'oggetto stesso, la funzione virtuale **OnChildNotify** viene chiamato prima di tutto con i parametri del messaggio originale (vale a dire un **MSG**struttura). La finestra figlio può lasciare invariato il messaggio, mangiare o modificare il messaggio per l'elemento padre (raro).

Il valore predefinito **CWnd** implementazione gestisce i messaggi seguenti e Usa le **OnChildNotify** hook per consentire al bambino windows (controlli) al primo accesso il messaggio:

- **WM_MEASUREITEM** e **WM_DRAWITEM** (di disegno automatico)

- **WM_COMPAREITEM** e **WM_DELETEITEM** (di disegno automatico)

- **WM_HSCROLL** e **WM_VSCROLL**

- **WM_CTLCOLOR**

- **WM_PARENTNOTIFY**

Si noterà il **OnChildNotify** hook viene utilizzato per modificare i messaggi di disegno in messaggi di disegno automatico.

Oltre al **OnChildNotify** hook, messaggi di scorrimento sono ulteriormente il comportamento di routing. Vedere di seguito per informazioni dettagliate sulle origini di e le barre di scorrimento **WM_HSCROLL** e **WM_VSCROLL** messaggi.

## <a name="cframewnd-issues"></a>Problemi di CFrameWnd

Il **CFrameWnd** classe fornisce la maggior parte del routing dei comandi e interfaccia utente aggiornamento implementazione. Viene utilizzato principalmente per la finestra cornice principale dell'applicazione (**M_pmainwnd**) ma si applica a tutte le finestre cornice.

La finestra cornice principale è la finestra con barra dei menu ed è l'elemento padre della barra di stato o riga del messaggio. Vedere la discussione precedente nel routing dei comandi e **WM_INITMENUPOPUP.**

Il **CFrameWnd** classe fornisce la gestione della visualizzazione attiva. I messaggi seguenti vengono indirizzati attraverso la visualizzazione attiva:

- Tutti i messaggi di comando (la visualizzazione attiva Ottiene prima di accedervi).

- **WM_HSCROLL** e **WM_VSCROLL** barre (vedere sotto) di scorrimento di messaggi dall'elemento di pari livello.

- **WM_ACTIVATE** (e **WM_MDIACTIVATE** per MDI) ottenere convertiti in chiamate alla funzione virtuale **CView::OnActivateView**.

## <a name="cmdiframewndcmdichildwnd-issues"></a>CMDIFrameWnd/CMDIChildWnd problemi

Entrambe le classi di finestre cornice MDI derivano da **CFrameWnd** e pertanto sono entrambe abilitate per lo stesso tipo di routing dei comandi e aggiornamento dell'interfaccia utente fornito nel **CFrameWnd**. In una tipica applicazione MDI, solo la finestra cornice principale (vale a dire il **CMDIFrameWnd** oggetto) contiene una barra dei menu e barra di stato e pertanto è la fonte principale dell'implementazione del routing di comandi.

Lo schema di routing generale è che la finestra figlio MDI attiva Ottiene prima accedere ai comandi. Il valore predefinito **PreTranslateMessage** funzioni di gestiscono delle tabelle di tasti di scelta rapida per entrambe le finestre figlio MDI (prima) e la cornice MDI (secondo), nonché gli acceleratori di comando di sistema MDI standard di norma gestiti da  **TranslateMDISysAccel** (ultimo).

## <a name="scroll-bar-issues"></a>Problemi di barra di scorrimento

Quando si gestiscono messaggi di scorrimento (**WM_HSCROLL**/**OnHScroll** e/o **WM_VSCROLL**/**OnVScroll**), è consigliabile provare a scrivere il codice del gestore in modo che non si basa su dove proviene il messaggio visualizzato sulla barra di scorrimento. Questo non è solo un problema Windows generale, poiché i messaggi di scorrimento possono provenire da true scorrimento controlli barra o dal **WS_HSCROLL**/**WS_VSCROLL** barre che non sono controlli barra di scorrimento di scorrimento.

MFC estende consentire per i controlli barra di scorrimento figlio o nodi di pari livello della finestra sottoposto a scorrimento (in effetti, la relazione padre/figlio tra la barra di scorrimento e finestra sottoposto a scorrimento può essere qualsiasi elemento). Ciò è particolarmente importante per le barre di scorrimento condiviso con le finestre con separatore. Consultare [29 Nota tecnica](../mfc/tn029-splitter-windows.md) per informazioni dettagliate sull'implementazione di **CSplitterWnd** incluse ulteriori informazioni su shared problemi sulla barra di scorrimento.

Nella nota a margine, sono presenti due **CWnd** classi derivate in cui gli stili di barra di scorrimento specificati al momento della creazione vengono intercettate e non è state passate a Windows. Quando viene passato a una routine, la creazione **WS_HSCROLL** e **WS_VSCROLL** può essere impostata in modo indipendente, ma dopo la creazione non può essere modificata. Naturalmente, devi non direttamente di test o impostare i bit di stile WS_SCROLL della finestra che hanno creato.

Per **CMDIFrameWnd** gli stili di barra di scorrimento è passare al **Create** oppure **LoadFrame** vengono usati per creare il MDICLIENT. Se si vuole che un'area scorrevole di MDICLIENT (ad esempio Windows Program Manager) assicurarsi di impostare gli stili delle barre di scorrimento entrambi (**WS_HSCROLL** &#124; **WS_VSCROLL**) per lo stile utilizzato per creare il **CMDIFrameWnd**.

Per la **CSplitterWnd** si applicano gli stili di barra di scorrimento per le barre di scorrimento condiviso speciali per le aree di barra di divisione. Per le finestre con separatore statico, in genere non si imposterà entrambi gli stili di barra di scorrimento. Per le finestre con separatore dinamico, in genere è necessario lo scorrimento della barra di set di stili per la direzione suddivideranno, vale a dire **WS_HSCROLL** se è possibile suddividere le righe, **WS_VSCROLL** se è possibile suddividere le colonne.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
