---
title: 'TN021: routing di comandi e messaggi'
ms.date: 06/28/2018
f1_keywords:
- vc.routing
helpviewer_keywords:
- TN021
- command routing [MFC], technical note TN021
- Windows messages [MFC], routing
ms.assetid: b5952c8b-123e-406c-a36d-a6ac7c6df307
ms.openlocfilehash: bdd405bda5c0af9e04a50eee4ef5738f3a53259e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370405"
---
# <a name="tn021-command-and-message-routing"></a>TN021: routing di comandi e messaggi

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive il routing dei comandi e l'architettura di invio, nonché argomenti avanzati nel routing generale dei messaggi della finestra.

Per informazioni generali sulle architetture descritte di seguito, fare riferimento a Visual C, in particolare alla distinzione tra messaggi di Windows, notifiche di controllo e comandi. Questa nota presuppone che l'utente abbia familiarità con i problemi descritti nella documentazione stampata e affronta solo argomenti molto avanzati.

## <a name="command-routing-and-dispatch-mfc-10-functionality-evolves-to-mfc-20-architecture"></a>Il routing dei comandi e la funzionalità di invio della funzionalità MFC 1.0 si evolve nell'architettura di MFC 2.0

Windows ha il WM_COMMAND messaggio che viene sottoposto a overload per fornire notifiche di comandi di menu, tasti di scelta rapida e notifiche di controllo della finestra di dialogo.

MFC 1.0 si è basato su questo poco consentendo un gestore `CWnd` di comando (ad esempio, "OnFileNew") in una classe derivata per ottenere chiamato in risposta a un WM_COMMAND specifico. Questo è incollato insieme a una struttura di dati chiamata mappa messaggi e si traduce in un meccanismo di comando molto efficiente in termini di spazio.

MFC 1.0 ha inoltre fornito funzionalità aggiuntive per separare le notifiche di controllo dai messaggi di comando. I comandi sono rappresentati da un ID a 16 bit, talvolta noto come ID di comando. I comandi in `CFrameWnd` genere partono da un (ovvero, una selezione di menu o un acceleratore tradotto) e vengono indirizzati a una varietà di altre finestre.

MFC 1.0 utilizzato il routing dei comandi in senso limitato per l'implementazione di interfaccia a documenti multipli (MDI). (Una finestra cornice MDI delega i comandi alla finestra figlio MDI attiva.)

Questa funzionalità è stata generalizzata ed estesa in MFC 2.0 per consentire ai comandi di essere gestiti da una gamma più ampia di oggetti (non solo gli oggetti della finestra). Fornisce un'architettura più formale ed estensibile per il routing dei messaggi e riutilizza il routing della destinazione del comando non solo per la gestione dei comandi, ma anche per l'aggiornamento degli oggetti dell'interfaccia utente (ad esempio voci di menu e pulsanti della barra degli strumenti) per riflettere la disponibilità corrente di un comando.

## <a name="command-ids"></a>ID comandi

Per una spiegazione del routing dei comandi e del processo di associazione, vedere Visual C. [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) contiene informazioni sulla denominazione degli ID.

Usiamo il prefisso generico "ID_" per gli ID di comando. Gli ID di comando sono >0x8000. La riga del messaggio o la barra di stato mostrerà la stringa di descrizione del comando se è presente una risorsa STRINGTABLE con gli stessi ID dell'ID di comando.

Nelle risorse dell'applicazione, un ID di comando può essere visualizzato in diverse posizioni:In the resources of your application, a command ID can appears in several places:

- In una risorsa STRINGTABLE con lo stesso ID del prompt della riga di messaggio.

- In possibili molte risorse MENU che sono collegate alle voci di menu che richiamano lo stesso comando.

- (ADVANCED) in un pulsante della finestra di dialogo per un comando GOSUB.

Nel codice sorgente dell'applicazione, un ID di comando può essere visualizzato in diverse posizioni:In the source code of your application, a command ID can appears in several places:

- Nella tua RESOURCE. H (o un altro file di intestazione del simbolo principale) per definire gli ID di comando specifici dell'applicazione.

- PERHAPS In una matrice di ID utilizzata per creare una barra degli strumenti.

- In una macro ON_COMMAND.

- FORSE In una macro ON_UPDATE_COMMAND_UI.

Attualmente, l'unica implementazione in MFC che richiede ID di comando essere >0x8000 è l'implementazione di finestre di dialogo/comandi GOSUB.

## <a name="gosub-commands-using-command-architecture-in-dialogs"></a>Comandi GOSUB, utilizzo dell'architettura dei comandi nelle finestre di dialogo

L'architettura dei comandi di routing e abilitazione dei comandi funziona bene con le finestre cornice, le voci di menu, i pulsanti della barra degli strumenti, i pulsanti della barra delle finestre di dialogo, altre barre di controllo e altri elementi dell'interfaccia utente progettati per aggiornare su richiesta e instradare i comandi o gli ID di controllo a una destinazione di comando principale (in genere la finestra cornice principale). Tale destinazione comando principale può instradare le notifiche di comando o controllo ad altri oggetti destinazione comando in base alle esigenze.

Una finestra di dialogo (modale o non modale) può trarre vantaggio da alcune delle funzionalità dell'architettura dei comandi se si assegna l'ID di controllo del controllo della finestra di dialogo all'ID di comando appropriato. Il supporto per le finestre di dialogo non è automatico, pertanto potrebbe essere necessario scrivere codice aggiuntivo.

Si noti che per il corretto funzionamento di tutte queste funzionalità, gli ID di comando devono essere >0x8000. Poiché molte finestre di dialogo potrebbero essere indirizzate allo stesso frame, i comandi condivisi devono essere >0x8000, mentre gli IDC non condivisi in una finestra di dialogo specifica devono essere <0x7FFF.

È possibile inserire un pulsante normale in una normale finestra di dialogo modale con l'IDC del pulsante impostato sull'ID di comando appropriato. Quando l'utente seleziona il pulsante, il proprietario della finestra di dialogo (in genere la finestra cornice principale) ottiene il comando come qualsiasi altro comando. Questo è chiamato un comando GOSUB dal momento che di solito viene utilizzato per visualizzare un'altra finestra di dialogo (un GOSUB della prima finestra di dialogo).

È inoltre possibile `CWnd::UpdateDialogControls` chiamare la funzione nella finestra di dialogo e passarle l'indirizzo della finestra cornice principale. Questa funzione abiliterà o disabiliterà i controlli della finestra di dialogo in base alla loro proprietà nel frame. Questa funzione viene chiamata automaticamente per le barre di controllo nel ciclo inattivo dell'applicazione, ma è necessario chiamarla direttamente per le normali finestre di dialogo che si desidera avere questa funzionalità.

## <a name="when-on_update_command_ui-is-called"></a>Quando viene chiamato ON_UPDATE_COMMAND_UI

Mantenere lo stato abilitato/selezionato di tutte le voci di menu di un programma per tutto il tempo può essere un problema costoso dal punto di vista computazionale. Una tecnica comune consiste nell'abilitare/controllare le voci di menu solo quando l'utente seleziona il POPUP. L'implementazione DI `CFrameWnd` MFC 2.0 gestisce il messaggio di WM_INITMENUPOPUP e utilizza l'architettura di routing dei comandi per determinare gli stati dei menu tramite i gestori di ON_UPDATE_COMMAND_UI.

`CFrameWnd`gestisce anche il messaggio di WM_ENTERIDLE per descrivere la voce di menu corrente selezionata sulla barra di stato (nota anche come riga del messaggio).

La struttura di menu di un'applicazione, modificata da Visual C, viene utilizzata per rappresentare i potenziali comandi disponibili in fase di WM_INITMENUPOPUP. ON_UPDATE_COMMAND_UI gestori di ON_UPDATE_COMMAND_UI possono modificare lo stato o il testo di un menu o per usi avanzati (ad esempio l'elenco File MRU o il menu a comparsa Verbi OLE), modificare effettivamente la struttura del menu prima che venga disegnato il menu.

Lo stesso tipo di elaborazione ON_UPDATE_COMMAND_UI viene eseguita per le barre degli strumenti (e altre barre di controllo) quando l'applicazione entra nel ciclo inattivo. Per ulteriori informazioni sulle barre di controllo, vedere *Riferimenti alla libreria* di classi e [Nota tecnica 31.](../mfc/tn031-control-bars.md)

## <a name="nested-pop-up-menus"></a>Menu a comparsa nidificati

Se si utilizza una struttura di menu annidata, si noterà che il gestore di ON_UPDATE_COMMAND_UI per la prima voce di menu nel menu a comparsa viene chiamato in due casi diversi.

In primo luogo, viene chiamato per il menu a comparsa stesso. Ciò è necessario perché i menu a comparsa non hanno ID e usiamo l'ID della prima voce di menu del menu a comparsa per fare riferimento all'intero menu a comparsa. In questo caso, la variabile `CCmdUI` membro *m_pSubMenu* dell'oggetto sarà non NULL e punterà al menu a comparsa.

In secondo luogo, viene chiamato appena prima che le voci di menu nel menu a comparsa devono essere disegnate. In questo caso, l'ID fa riferimento *m_pSubMenu* solo alla prima `CCmdUI` voce di menu e la m_pSubMenu variabile membro dell'oggetto sarà NULL.

Ciò consente di abilitare il menu a comparsa distinto dalle relative voci di menu, ma richiede la scrittura di codice in grado di riconoscere i menu. Ad esempio, in un menu nidificato con la struttura seguente:

```Output
File>
    New>
    Sheet (ID_NEW_SHEET)
    Chart (ID_NEW_CHART)
```

I comandi ID_NEW_SHEET e ID_NEW_CHART possono essere abilitati o disabilitati in modo indipendente. Il menu a comparsa **Nuovo** deve essere abilitato se uno dei due è abilitato.

Il gestore di comando per ID_NEW_SHEET (il primo comando nel popup) sarebbe simile al seguente:The command handler for ID_NEW_SHEET (the first command in the pop-up) would look something like:

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

Il gestore di comando per ID_NEW_CHART sarebbe un normale gestore di comando di aggiornamento e simile al seguente:The command handler for ID_NEW_CHART would be a normal update command handler and look something like:

```cpp
void CMyApp::OnUpdateNewChart(CCmdUI* pCmdUI)
{
    pCmdUI->Enable(m_bCanCreateChart);
}
```

## <a name="on_command-and-on_bn_clicked"></a>ON_COMMAND e ON_BN_CLICKED

Le macro della mappa messaggi per **ON_COMMAND** e **ON_BN_CLICKED** sono le stesse. Il comando MFC e il meccanismo di routing delle notifiche di controllo utilizza solo l'ID di comando per decidere dove instradare. Le notifiche di controllo con codice di notifica del controllo pari a zero (**BN_CLICKED**) vengono interpretate come comandi.

> [!NOTE]
> Infatti, tutti i messaggi di notifica di controllo passano attraverso la catena di gestori di comandi. Ad esempio, è tecnicamente possibile scrivere un gestore di notifica del controllo per **EN_CHANGE** nella classe documento. Questo non è generalmente consigliabile perché le applicazioni pratiche di questa funzionalità sono poche, la funzionalità non è supportata da ClassWizard e l'uso della funzionalità può causare codice fragile.

## <a name="disabling-the-automatic-disabling-of-button-controls"></a>Disattivazione della disattivazione automatica dei controlli dei pulsanti

Se si inserisce un controllo pulsante su una barra della finestra di dialogo o in una finestra di dialogo utilizzando il punto in cui si chiama **CWnd::UpdateDialogControls** da soli, si noterà che i pulsanti che non dispongono di **ON_COMMAND** o **ON_UPDATE_COMMAND_UI** i gestori verranno disabilitati automaticamente dal framework. In alcuni casi, non è necessario disporre di un gestore, ma si desidera che il pulsante rimanga abilitato. Il modo più semplice per ottenere questo risultato consiste nell'aggiungere un gestore di comando fittizio (facile da fare con ClassWizard) e non eseguire alcuna operazione in esso.

## <a name="window-message-routing"></a>Routing dei messaggi di Windows

Di seguito vengono descritti alcuni argomenti più avanzati sulle classi MFC e l'impatto del routing dei messaggi di Windows e di altri argomenti. Le informazioni qui sono descritte solo brevemente. Fare riferimento a *Class Library Reference* per informazioni dettagliate sulle API pubbliche. Fare riferimento al codice sorgente della libreria MFC per ulteriori informazioni sui dettagli di implementazione.

Fare riferimento alla [nota tecnica 17](../mfc/tn017-destroying-window-objects.md) per informazioni dettagliate sulla pulizia della finestra, un argomento molto importante per tutte le classi derivate da **CWnd.**

## <a name="cwnd-issues"></a>Problemi relativi a CWnd

La funzione membro di implementazione **CWnd::OnChildNotify** fornisce un'architettura potente ed estensibile per le finestre figlio (noto anche come controlli) per associare o altrimenti essere informati di messaggi, comandi e notifiche di controllo che vanno al loro padre (o "proprietario"). Se la finestra figlio (/control) è un oggetto **CWnd** di C, la funzione virtuale **OnChildNotify** viene chiamata per prima con i parametri del messaggio originale (ovvero una struttura **MSG).** La finestra figlio può lasciare il messaggio da solo, usarlo o modificare il messaggio per l'elemento padre (raro).

L'implementazione predefinita **di CWnd** gestisce i messaggi seguenti e usa l'hook **OnChildNotify** per consentire alle finestre figlio (controlli) di accedere innanzitutto al messaggio:

- **WM_MEASUREITEM** e **WM_DRAWITEM** (per autodisegno)

- **WM_COMPAREITEM** e **WM_DELETEITEM** (per autodisegno)

- **WM_HSCROLL** e **WM_VSCROLL**

- **Wm_ctlcolor**

- **WM_PARENTNOTIFY**

Si noterà che l'hook **OnChildNotify** viene utilizzato per modificare i messaggi di disegno del proprietario in messaggi auto-disegnare.

Oltre all'hook **OnChildNotify,** i messaggi di scorrimento hanno un ulteriore comportamento di routing. Si prega di vedere di seguito per maggiori dettagli sulle barre di scorrimento e le fonti di WM_HSCROLL e **messaggi di WM_VSCROLL.** **WM_HSCROLL**

## <a name="cframewnd-issues"></a>Problemi di CFrameWnd

La classe **CFrameWnd** fornisce la maggior parte del routing dei comandi e dell'implementazione dell'aggiornamento dell'interfaccia utente. Viene utilizzato principalmente per la finestra cornice principale dell'applicazione (**CWinApp::m_pMainWnd**), ma si applica a tutte le finestre cornice.

La finestra cornice principale è la finestra con la barra dei menu ed è l'elemento padre della barra di stato o della riga del messaggio. Si prega di fare riferimento alla discussione di cui sopra sul routing dei comandi e **WM_INITMENUPOPUP.**

Il **CFrameWnd** classe fornisce la gestione della visualizzazione attiva. I seguenti messaggi vengono instradati attraverso la vista attiva:

- Tutti i messaggi di comando (la vista attiva ottiene il primo accesso ad essi).

- **WM_HSCROLL** e **WM_VSCROLL** messaggi dalle barre di scorrimento di pari livello (vedere di seguito).

- **WM_ACTIVATE** (e **WM_MDIACTIVATE** per MDI) vengono trasformati in chiamate alla funzione virtuale **CView::OnActivateView**.

## <a name="cmdiframewndcmdichildwnd-issues"></a>Problemi di CMDIFrameWnd/CMDIChildWnd

Entrambe le classi della finestra cornice MDI derivano da **CFrameWnd** e pertanto sono entrambe abilitate per lo stesso tipo di routing dei comandi e di aggiornamento dell'interfaccia utente fornito in **CFrameWnd**. In una tipica applicazione MDI, solo la finestra cornice principale (vale a dire, il **CMDIFrameWnd** oggetto) contiene la barra dei menu e la barra di stato e pertanto è l'origine principale dell'implementazione del routing dei comandi.

Lo schema di routing generale è che la finestra figlio MDI attiva ottiene il primo accesso ai comandi. Le funzioni **predefinite PreTranslateMessage** gestiscono le tabelle dei tasti di scelta rapida sia per le finestre figlio MDI (prima) che per il frame MDI (secondo) e per gli acceleratori di comandi di sistema MDI standard normalmente gestiti da **TranslateMDISysAccel** (ultimo).

## <a name="scroll-bar-issues"></a>Problemi relativi alla barra di scorrimento

Quando si gestisce il messaggio di scorrimento (**WM_HSCROLL**/**OnHScroll** e/o **WM_VSCROLL**/**OnVScroll**), è consigliabile provare a scrivere il codice del gestore in modo che non si basi sulla provenigimento del messaggio della barra di scorrimento. Questo non è solo un problema generale di Windows, poiché i messaggi di scorrimento possono provenire da veri controlli barra di scorrimento o da **WS_HSCROLL**/**WS_VSCROLL** barre di scorrimento che non sono controlli barra di scorrimento.

MFC estende che per consentire ai controlli barra di scorrimento essere figlio o elementi di pari livello della finestra da scorrere (in realtà, la relazione padre/figlio tra la barra di scorrimento e la finestra da scorrere può essere qualsiasi elemento). Ciò è particolarmente importante per le barre di scorrimento condivise con finestre con separatore. Fare riferimento alla [nota tecnica 29](../mfc/tn029-splitter-windows.md) per informazioni dettagliate sull'implementazione di **CSplitterWnd,** incluse ulteriori informazioni sui problemi della barra di scorrimento condivisa.

In una nota a margine, esistono due **CWnd** classi derivate in cui gli stili della barra di scorrimento specificati in fase di creazione vengono intercettati e non passati a Windows. Quando si passa a una routine di creazione, **WS_HSCROLL** e **WS_VSCROLL** possono essere impostati in modo indipendente, ma dopo la creazione non possono essere modificati. Naturalmente, non è necessario testare o impostare direttamente i bit di stile WS_SCROLL della finestra che hanno creato.

Per **CMDIFrameWnd** gli stili della barra di scorrimento passati a **Create** o **LoadFrame** vengono utilizzati per creare MDICLIENT. Se si desidera disporre di un'area MDICLIENT scorrevole (ad esempio il Program Manager di Windows) assicurarsi di impostare entrambi gli stili della barra di scorrimento (**WS_HSCROLL** &#124; **WS_VSCROLL**) per lo stile utilizzato per creare **CMDIFrameWnd**.

Per **CSplitterWnd** gli stili della barra di scorrimento si applicano alle barre di scorrimento condivise speciali per le aree della barra di divisione. Per le finestre con separatore statico, in genere non si imposta lo stile della barra di scorrimento. Per le finestre con separatore dinamico, di solito è necessario impostare lo stile della barra di scorrimento per la direzione di divisione, ovvero **WS_HSCROLL** se è possibile dividere le righe, **WS_VSCROLL** se è possibile dividere le colonne.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
