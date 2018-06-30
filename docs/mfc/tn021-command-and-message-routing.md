---
title: 'Comando TN021: Routing e messaggi | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
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
ms.openlocfilehash: e31a35878564fc09fa6c045566811a3ff9e4b0ef
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122017"
---
# <a name="tn021-command-and-message-routing"></a>TN021: routing di comandi e messaggi

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive l'architettura di routing e l'invio di comandi, nonché argomenti avanzati nel routing dei messaggi finestra generale.

Consultare Visual C++ per i dettagli generali su architetture descritti di seguito, in particolare la distinzione tra i messaggi, le notifiche dei controlli e i comandi di Windows. In questa nota presuppone che si ha dimestichezza con i problemi descritti nella documentazione di stampa e solo indirizzi argomenti molto avanzati.

## <a name="command-routing-and-dispatch-mfc-10-functionality-evolves-to-mfc-20-architecture"></a>Comandi (Routing) e l'invio MFC 1.0 funzionalità si evolve a MFC 2.0 architettura

Windows ha il messaggio WM_COMMAND che è stato sottoposto a overload per fornire le notifiche di comandi di menu, tasti di scelta rapida e notifiche dei controlli di finestra di dialogo.

MFC 1.0 compilata su tale leggermente, consentendo un gestore del comando (ad esempio, "OnFileNew") in un `CWnd` derivata per chiamata in risposta a un WM_COMMAND specifico. Questo viene associato insieme a una struttura di dati denominata la mappa dei messaggi e comporta un meccanismo di comando molto spazio efficiente.

MFC 1.0 fornito anche funzionalità aggiuntive per la separazione delle notifiche dei controlli dai messaggi di comando. I comandi sono rappresentati da un ID a 16 bit, talvolta noto anche come un ID di comando. I comandi in genere iniziano da un `CFrameWnd` (vale a dire, un'istruzione select menu o un acceleratore tradotto) e vengono instradati a una varietà di altre finestre.

MFC 1.0 utilizzato comandi (routing) in senso limitato per l'implementazione dell'interfaccia di documenti multipli (MDI). (Una finestra cornice MDI delega i comandi alla finestra figlio MDI attivo).

Questa funzionalità è stata generalizzata ed estesa in MFC 2.0 per consentire i comandi devono essere gestiti da una vasta gamma di oggetti (non solo finestra). Fornisce un più formali e architettura estendibile per il routing dei messaggi e riutilizza il routing di destinazione di comando per non solo la gestione dei comandi, ma anche per l'aggiornamento degli oggetti dell'interfaccia utente (ad esempio voci di menu e pulsanti della barra degli strumenti) in modo da riflettere la disponibilità corrente di un comando .

## <a name="command-ids"></a>ID comandi

Per una spiegazione del comando di routing e processo di associazione, vedere Visual C++. [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) contiene informazioni sulla denominazione degli ID.

Il prefisso generico "ID _" è usato per gli ID di comando. Gli ID di comando sono > = 0x8000. Barra di riga o lo stato dei messaggi verrà visualizzata la stringa di descrizione comandi è una risorsa STRINGTABLE con gli stessi ID come ID di comando.

Nelle risorse dell'applicazione, un comando che può ID viene visualizzato in diverse posizioni:

-   In una risorsa STRINGTABLE con lo stesso ID prompt della riga di messaggio.

-   In probabilmente molte risorse di MENU che vengono collegate alle voci di menu che richiamano il comando stesso.

-   (Avanzate) in un pulsante della finestra di dialogo per un comando GOSUB.

Nel codice sorgente dell'applicazione, un comando che può ID viene visualizzato in diverse posizioni:

-   Nella risorsa. H (o altri file di intestazione simboli principale) per definire gli ID di comando specifici dell'applicazione.

-   Ad esempio In una matrice di ID utilizzata per creare una barra degli strumenti.

-   In un ON_COMMAND (macro).

-   Ad esempio In un ON_UPDATE_COMMAND_UI (macro).

Attualmente, l'unica implementazione in MFC che richiede l'ID di comando essere > = 0x8000 è l'implementazione di finestre di dialogo GOSUB/comandi.

## <a name="gosub-commands-using-command-architecture-in-dialogs"></a>Comandi GOSUB, l'utilizzo dell'architettura di comando nelle finestre di dialogo

Architettura del comando di routing e comandi per abilitare funziona bene con finestre cornice, voci di menu, pulsanti, pulsanti della barra di finestra di dialogo, altre barre di controllo e altri elementi dell'interfaccia utente progettati per l'aggiornamento su richiesta e route comandi o gli ID di controllo a una funzione main destinazione del comando (in genere una finestra cornice principale). Tale destinazione comando principale può indirizzare le notifiche di comando o il controllo ad altri oggetti destinazione comando come appropriato.

Una finestra di dialogo (modale o non modale) può trarre vantaggio da alcune delle funzionalità dell'architettura di comando, se si assegna l'ID di controllo del controllo finestra di dialogo per l'ID del comando appropriato. Supporto per le finestre di dialogo non è automatico, pertanto potrebbe essere necessario scrivere codice aggiuntivo.

Si noti che per tutte queste funzionalità funzionino correttamente, l'ID di comando deve essere > = 0x8000. Poiché molte finestre di dialogo è stato possibile ottenere instradati a stesso frame, i comandi condivisi devono essere > = 0x8000, mentre il IDCs non condivisa in una finestra di dialogo specifica deve essere < = 0x7FFF.

È possibile inserire un pulsante normale in una normale finestra di dialogo modale con IDC del pulsante impostato per l'ID del comando appropriato. Quando l'utente seleziona il pulsante, il proprietario della finestra di dialogo (in genere una finestra cornice principale) riceve il comando esattamente come qualsiasi altro comando. Si tratta di un comando GOSUB perché in genere utilizzata per aprire un'altra finestra di dialogo (GOSUB della finestra di dialogo prima).

È inoltre possibile chiamare la funzione `CWnd::UpdateDialogControls` nella finestra di dialogo e passare l'indirizzo della finestra cornice principale. Questa funzione verrà abilitare o disabilitare i controlli di finestra di dialogo basati sul fatto che dispongano di gestori di comandi nel frame. Questa funzione viene chiamata automaticamente per l'utente per le barre di controllo nel ciclo inattivo dell'applicazione, ma è necessario chiamare direttamente per i dialoghi normale che si desiderano che questa funzionalità.

## <a name="when-onupdatecommandui-is-called"></a>Quando viene chiamato ON_UPDATE_COMMAND_UI

Mantenere lo stato abilitato/selezionata di tutti un programma voci di menu costantemente può rappresentare un problema onerosa. Una tecnica comune è attiva/selezionare voci di menu solo quando l'utente seleziona la finestra POPUP. L'implementazione MFC 2.0 di `CFrameWnd` gestisce il messaggio WM_INITMENUPOPUP e utilizza l'architettura di routing di comandi per determinare gli stati dei menu tramite gestori ON_UPDATE_COMMAND_UI.

`CFrameWnd` gestisce inoltre il messaggio WM_ENTERIDLE per descrivere il menu corrente elemento selezionato della barra di stato (noto anche come il messaggio).

Struttura di menu dell'applicazione, modificata da Visual C++, viene utilizzata per rappresentare i potenziali comandi disponibili in fase di WM_INITMENUPOPUP. Gestori ON_UPDATE_COMMAND_UI possono modificare lo stato o il testo di un menu o per le operazioni avanzate (ad esempio l'elenco di File MRU o il menu a comparsa OLE verbi), in realtà modifica la struttura di menu prima che venga disegnato il menu di scelta.

Lo stesso tipo di elaborazione ON_UPDATE_COMMAND_UI avviene per le barre degli strumenti e altre barre di controllo, quando l'applicazione immette il ciclo inattivo. Vedere la *riferimenti alla libreria di classi* e [Nota tecnica 31](../mfc/tn031-control-bars.md) per ulteriori informazioni sulle barre di controllo.

## <a name="nested-pop-up-menus"></a>Menu a comparsa nidificati

Se si utilizza una struttura nidificata, si noterà che in due diversi casi viene chiamato il gestore ON_UPDATE_COMMAND_UI della prima voce di menu nel menu a comparsa.

Prima di tutto, viene chiamato per il menu a comparsa. Ciò è necessario perché i menu a comparsa non dispongono di ID e viene usato l'ID della voce di menu prima del menu a comparsa per fare riferimento per l'intero menu a comparsa. In questo caso, il *m_pSubMenu* variabile membro del `CCmdUI` oggetto sarà diverso da NULL e misuratore punterà al menu di scelta rapida.

In secondo luogo, viene chiamato appena prima che le voci di menu nel menu a comparsa siano da disegnare. In questo caso, l'ID si riferisce solo alla prima voce di menu e il *m_pSubMenu* variabile membro del `CCmdUI` oggetto saranno NULL.

Ciò consente di attivare il menu di scelta rapida diverso dal relativo voci di menu, ma richiede la scrittura di codice compatibile con alcuni menu. Ad esempio, in un menu annidato con la struttura seguente:

```Output
File>
    New>
    Sheet (ID_NEW_SHEET)
    Chart (ID_NEW_CHART)
```

I comandi ID_NEW_SHEET e ID_NEW_CHART possono essere abilitati o disabilitati in modo indipendente. Il **New** menu di scelta rapida deve essere abilitato se uno dei due è abilitata.

Il gestore del comando per ID_NEW_SHEET (il primo comando nella finestra a comparsa) sarebbe simile al seguente:

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

Il gestore del comando per ID_NEW_CHART sarebbe un gestore del comando normale degli aggiornamenti e l'aspetto, ad esempio:

```cpp
void CMyApp::OnUpdateNewChart(CCmdUI* pCmdUI)
{
    pCmdUI->Enable(m_bCanCreateChart);
}
```

## <a name="oncommand-and-onbnclicked"></a>ON_COMMAND e ON_BN_CLICKED

La macro della mappa messaggi per **ON_COMMAND** e **ON_BN_CLICKED** sono uguali. Per decidere dove indirizzare a, il comando e controllo notifica routing meccanismo MFC utilizza solo l'ID di comando. Controllare le notifiche con codice di notifica del controllo pari a zero (**BN_CLICKED**) vengono interpretate come comandi.

> [!NOTE]
> In realtà, tutti i messaggi di notifica di controllo passano attraverso la catena di gestore del comando. Ad esempio, è tecnicamente possibile scrivere un gestore di notifica di controllo per **EN_CHANGE** nella classe del documento. Non si tratta in genere consigliabile perché sono relativamente ridotto, le applicazioni pratiche di questa funzionalità, la funzionalità non è supportata da ClassWizard e l'uso della funzionalità può comportare codice fragili.

## <a name="disabling-the-automatic-disabling-of-button-controls"></a>La disabilitazione automatica la disabilitazione dei controlli pulsante

Se si posiziona un controllo pulsante in una barra di finestra di dialogo, o in una finestra di dialogo utilizzo della clausola where che si sta chiamando **CWnd::UpdateDialogControls** autonomamente, si noterà che i pulsanti che non hanno **ON_COMMAND** o**ON_UPDATE_COMMAND_UI** gestori verranno disabilitati automaticamente per l'utente dal framework. In alcuni casi, non è necessario disporre di un gestore, ma è opportuno pulsante rimanga abilitata. Il modo più semplice per ottenere questo risultato consiste nell'aggiungere un gestore del comando fittizio (facile da fare con ClassWizard) e non eseguire alcuna azione in essa contenuti.

## <a name="window-message-routing"></a>Routing dei messaggi di finestra

Di seguito vengono descritti alcuni argomenti più avanzati in classi MFC e routing dei messaggi di Windows e altri argomenti impatto li. Le informazioni qui solo brevemente descritte. Vedere il *riferimenti alla libreria di classe* per informazioni dettagliate sulle API pubbliche. Consultare il codice sorgente della libreria MFC per ulteriori informazioni sui dettagli dell'implementazione.

Consultare [17 Nota tecnica](../mfc/tn017-destroying-window-objects.md) per i dettagli nel processo di pulizia di finestra, un argomento molto importante per tutte **CWnd**-classi derivate.

## <a name="cwnd-issues"></a>Problemi di CWnd

La funzione membro di implementazione **CWnd:: OnChildNotify** fornisce un'architettura estendibile e potente per le finestre figlio (noto anche come controlli) associare o in caso contrario, essere informati dei messaggi, i comandi e controllo notifiche che fa riferimento alla loro padre (o "proprietario"). Se la finestra figlio (/ controllare) è un C++ **CWnd** dell'oggetto stesso, la funzione virtuale **OnChildNotify** viene chiamata per prima con i parametri del messaggio originale (vale a dire, una **MSG**struttura). La finestra figlio può lasciare invariato il messaggio di trasmissione o modificare il messaggio per l'elemento padre (raro).

Il valore predefinito **CWnd** implementazione gestisce i messaggi seguenti e utilizza il **OnChildNotify** hook per consentire al bambino windows (controlli) al primo accesso del messaggio:

- **WM_MEASUREITEM** e **WM_DRAWITEM** (di disegno automatico)

- **WM_COMPAREITEM** e **WM_DELETEITEM** (di disegno automatico)

- **WM_HSCROLL** e **WM_VSCROLL**

- **WM_CTLCOLOR**

- **WM_PARENTNOTIFY**

Si noterà il **OnChildNotify** hook viene utilizzata per modificare i messaggi di disegno in messaggi di disegno automatico.

Oltre ai **OnChildNotify** hook, messaggi di scorrimento sono ulteriormente il comportamento di routing. Vedere di seguito per ulteriori informazioni sulle barre di scorrimento e le origini **WM_HSCROLL** e **WM_VSCROLL** messaggi.

## <a name="cframewnd-issues"></a>CFrameWnd problemi

Il **CFrameWnd** classe fornisce la maggior parte dei comandi (routing) dell'interfaccia utente aggiornamento implementazione. Vengono principalmente utilizzate per la finestra cornice principale dell'applicazione (**M_pmainwnd**) ma si applica a tutte le finestre cornice.

La finestra cornice principale è la finestra con barra dei menu ed è il padre della barra di stato o riga del messaggio. Fare riferimento alla trattazione precedente nel routing dei comandi e **WM_INITMENUPOPUP.**

Il **CFrameWnd** classe fornisce la gestione della visualizzazione attiva. Tramite la visualizzazione attiva vengono indirizzati i messaggi seguenti:

- Tutti i messaggi di comando (la visualizzazione attiva Ottiene prima accedervi).

- **WM_HSCROLL** e **WM_VSCROLL** messaggi dall'elemento di pari livello scorrere le barre (vedere sotto).

- **WM_ACTIVATE** (e **WM_MDIACTIVATE** per MDI) ottenere trasformata in chiamate alla funzione virtuale **CView::OnActivateView**.

## <a name="cmdiframewndcmdichildwnd-issues"></a>CMDIFrameWnd/CMDIChildWnd problemi

Entrambe le classi finestra cornice MDI derivano da **CFrameWnd** e pertanto sono entrambe abilitate per lo stesso tipo di comandi (routing) e l'aggiornamento dell'interfaccia utente fornita **CFrameWnd**. In una tipica applicazione MDI, solo la finestra cornice principale (vale a dire, il **CMDIFrameWnd** oggetto) contiene la barra dei menu e barra di stato e pertanto è l'origine principale dell'implementazione del routing di comandi.

Lo schema di routing generale è che la finestra figlio MDI attiva Ottiene prima accedere ai comandi. Il valore predefinito **PreTranslateMessage** funzioni di gestiscono delle tabelle di tasti di scelta rapida per entrambe le finestre figlio MDI (prima) e il frame MDI (secondo), nonché i standard MDI system-command tasti di scelta rapida di norma gestiti da  **TranslateMDISysAccel** (ultimo).

## <a name="scroll-bar-issues"></a>Problemi di barra di scorrimento

Quando si gestiscono messaggi di scorrimento (**WM_HSCROLL**/**OnHScroll** e/o **WM_VSCROLL**/**OnVScroll**), è consigliabile provare a scrivere il codice del gestore in modo non si basa su provenienza del messaggio di barra di scorrimento. Non si tratta solo un problema Windows generale, poiché i messaggi di scorrimento possono provenire da true scorrimento controlli barra o da **WS_HSCROLL**/**WS_VSCROLL** barre che non sono controlli barra di scorrimento di scorrimento.

MFC estende la possibilità di controlli della barra di scorrimento deve essere figlio o elementi di pari livello della finestra sottoposto a scorrimento (in realtà, la relazione padre/figlio tra la barra di scorrimento e finestra sottoposto a scorrimento può essere qualsiasi elemento). Ciò è particolarmente importante per le barre di scorrimento condiviso con finestre con separatore. Consultare [29 Nota tecnica](../mfc/tn029-splitter-windows.md) per informazioni dettagliate sull'implementazione di **CSplitterWnd** quali informazioni aggiuntive su condiviso problemi barra di scorrimento.

Una nota, esistono altri due **CWnd** in cui gli stili barra di scorrimento specificati al momento della creazione di classi derivate vengono intercettate e non passate a Windows. Quando viene passato a una routine di creazione **WS_HSCROLL** e **WS_VSCROLL** possono essere impostate in modo indipendente, ma dopo la creazione non può essere modificata. È ovviamente, non direttamente test o impostare il bit di stile WS_SCROLL della finestra che hanno creato.

Per **CMDIFrameWnd** gli stili barra di scorrimento viene passato a **Create** oppure **LoadFrame** vengono utilizzate per creare il MDICLIENT. Se si desidera che un'area scorrevole MDICLIENT (come il programma di gestione Windows) assicurarsi di impostare gli stili delle barre di scorrimento entrambi (**WS_HSCROLL** &#124; **WS_VSCROLL**) per lo stile utilizzato per creare il **CMDIFrameWnd**.

Per **CSplitterWnd** si applicano gli stili barra di scorrimento per le barre di scorrimento condiviso speciali per le aree della barra di divisione. Per le finestre con separatore statico, in genere non si imposteranno uno stile della barra di scorrimento. Per le finestre con separatore dinamico, in genere è necessario lo scorrimento della barra di uno stile è impostato per la direzione verrà suddivisa, vale a dire **WS_HSCROLL** se è possibile suddividere le righe, **WS_VSCROLL** che sia possibile dividere le colonne.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  
