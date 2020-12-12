---
description: 'Altre informazioni su: TN021: comando e routing di messaggi'
title: 'TN021: routing di comandi e messaggi'
ms.date: 06/28/2018
f1_keywords:
- vc.routing
helpviewer_keywords:
- TN021
- command routing [MFC], technical note TN021
- Windows messages [MFC], routing
ms.assetid: b5952c8b-123e-406c-a36d-a6ac7c6df307
ms.openlocfilehash: 3cc481585fa2f1eacc3deb575e163d5a1644002c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215846"
---
# <a name="tn021-command-and-message-routing"></a>TN021: routing di comandi e messaggi

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive l'architettura di routing e invio dei comandi, nonché gli argomenti avanzati nel routing dei messaggi della finestra generale.

Per informazioni generali sulle architetture descritte qui, in particolare la distinzione tra i messaggi di Windows, le notifiche di controllo e i comandi, vedere Visual C++. Questa nota presuppone che l'utente abbia familiarità con i problemi descritti nella documentazione stampata e indirizzi solo argomenti molto avanzati.

## <a name="command-routing-and-dispatch-mfc-10-functionality-evolves-to-mfc-20-architecture"></a>La funzionalità MFC 1,0 per il routing e la distribuzione di comandi si evolve nell'architettura MFC 2,0

In Windows è presente il messaggio WM_COMMAND sottocarico per fornire notifiche di comandi di menu, tasti di scelta rapida e notifiche del controllo della finestra di dialogo.

MFC 1,0, basato su questo, consente un gestore di comando (ad esempio, "OnFileNew") in una `CWnd` classe derivata per essere chiamato in risposta a una specifica WM_COMMAND. Questa operazione è associata a una struttura di dati denominata mappa messaggi e comporta un meccanismo di comando molto efficiente.

MFC 1,0 fornisce inoltre funzionalità aggiuntive per separare le notifiche di controllo dai messaggi di comando. I comandi sono rappresentati da un ID a 16 bit, talvolta noto come ID di comando. I comandi iniziano normalmente da un `CFrameWnd` (ovvero, un menu selezionato o un acceleratore tradotto) e vengono instradati a un'ampia gamma di altre finestre.

MFC 1,0 usava il routing dei comandi in un senso limitato per l'implementazione dell'interfaccia a documenti multipli (MDI). Una finestra cornice MDI consente di delegare comandi alla relativa finestra figlio MDI attiva.

Questa funzionalità è stata generalizzata ed estesa in MFC 2,0 per consentire la gestione dei comandi da una più ampia gamma di oggetti (non solo oggetti finestra). Fornisce un'architettura più formale ed estendibile per il routing dei messaggi e riutilizza il routing della destinazione del comando per non solo la gestione dei comandi, ma anche per l'aggiornamento di oggetti dell'interfaccia utente (ad esempio voci di menu e pulsanti della barra degli strumenti) per riflettere la disponibilità corrente di un comando.

## <a name="command-ids"></a>ID comandi

Per una spiegazione del processo di routing e associazione dei comandi, vedere Visual C++. [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) contiene informazioni sulla denominazione degli ID.

Per gli ID comando viene usato il prefisso generico "ID_". Gli ID di comando sono >= 0x8000. La riga del messaggio o la barra di stato visualizzerà la stringa di descrizione del comando se è presente una risorsa un'STRINGTABLE con gli stessi ID dell'ID di comando.

Nelle risorse dell'applicazione, un ID comando può essere visualizzato in diverse posizioni:

- In una risorsa un'STRINGTABLE con lo stesso ID del prompt della riga di messaggio.

- In molte risorse di MENU associate a voci di menu che richiamano lo stesso comando.

- (Avanzate) in un pulsante della finestra di dialogo per un comando GOSUB.

Nel codice sorgente dell'applicazione, un ID comando può essere visualizzato in diverse posizioni:

- Nella risorsa. H (o un altro file di intestazione del simbolo principale) per definire ID comando specifici dell'applicazione.

- PROBABILMENTE in una matrice di ID utilizzata per creare una barra degli strumenti.

- In una ON_COMMAND macro.

- PROBABILMENTE in una ON_UPDATE_COMMAND_UI macro.

Attualmente, l'unica implementazione di MFC che richiede gli ID comando è >= 0x8000 è l'implementazione di finestre di dialogo/comandi GOSUB.

## <a name="gosub-commands-using-command-architecture-in-dialogs"></a>Comandi GOSUB, utilizzo dell'architettura del comando nelle finestre di dialogo

L'architettura del comando di routing e abilitazione dei comandi funziona bene con le finestre cornice, le voci di menu, i pulsanti della barra degli strumenti, i pulsanti della barra della finestra di dialogo, altre barre di controllo e altri elementi dell'interfaccia utente progettati per aggiornare su richiesta e indirizzare comandi o ID controllo a una destinazione del comando principale (in genere la finestra cornice principale) Tale destinazione principale del comando può instradare il comando o controllare le notifiche ad altri oggetti di destinazione del comando nel modo appropriato.

Una finestra di dialogo (modale o non modale) può trarre vantaggio da alcune delle funzionalità dell'architettura del comando se si assegna l'ID del controllo della finestra di dialogo all'ID di comando appropriato. Il supporto per le finestre di dialogo non è automatico, quindi potrebbe essere necessario scrivere codice aggiuntivo.

Si noti che per il corretto funzionamento di tutte queste funzionalità, gli ID di comando devono essere >= 0x8000. Poiché molti dialoghi possono essere indirizzati allo stesso frame, i comandi condivisi devono essere >= 0x8000, mentre i IDC non condivisi in una finestra di dialogo specifica devono essere <= 0x7FFF.

È possibile inserire un pulsante normale in una normale finestra di dialogo modale con l'IDC del pulsante impostato sull'ID di comando appropriato. Quando l'utente seleziona il pulsante, il proprietario della finestra di dialogo, in genere la finestra cornice principale, ottiene il comando esattamente come qualsiasi altro comando. Si tratta di un comando GOSUB, perché in genere viene usato per visualizzare un'altra finestra di dialogo (un GOSUB della prima finestra di dialogo).

È anche possibile chiamare la funzione `CWnd::UpdateDialogControls` nella finestra di dialogo e passarla all'indirizzo della finestra cornice principale. Questa funzione consente di abilitare o disabilitare i controlli della finestra di dialogo in base alla presenza di gestori di comandi nel frame. Questa funzione viene chiamata automaticamente per le barre di controllo nel ciclo inattivo dell'applicazione, ma è necessario chiamarla direttamente per le finestre di dialogo normali che si desidera includere in questa funzionalità.

## <a name="when-on_update_command_ui-is-called"></a>Quando viene chiamato ON_UPDATE_COMMAND_UI

La gestione dello stato abilitato/selezionato di tutte le voci di menu di un programma può essere un problema a costo di calcolo. Una tecnica comune consiste nell'abilitare o controllare le voci di menu solo quando l'utente seleziona il POPUP. L'implementazione di MFC 2,0 di `CFrameWnd` gestisce il messaggio di WM_INITMENUPOPUP e utilizza l'architettura di routing dei comandi per determinare lo stato dei menu tramite ON_UPDATE_COMMAND_UI gestori.

`CFrameWnd` gestisce anche il messaggio di WM_ENTERIDLE per descrivere la voce di menu corrente selezionata sulla barra di stato, nota anche come riga del messaggio.

La struttura di menu di un'applicazione, modificata da Visual C++, viene utilizzata per rappresentare i potenziali comandi disponibili in fase di WM_INITMENUPOPUP. I gestori ON_UPDATE_COMMAND_UI possono modificare lo stato o il testo di un menu oppure, per usi avanzati (ad esempio, l'elenco di file MRU o il menu popup dei verbi OLE), modificare effettivamente la struttura del menu prima che il menu venga disegnato.

Lo stesso tipo di elaborazione ON_UPDATE_COMMAND_UI viene eseguito per le barre degli strumenti (e altre barre di controllo) quando l'applicazione entra nel ciclo inattivo. Per ulteriori informazioni sulle barre di controllo, vedere il *riferimento alla libreria di classi* e la [Nota tecnica 31](../mfc/tn031-control-bars.md) .

## <a name="nested-pop-up-menus"></a>Menu a comparsa annidati

Se si usa una struttura di menu nidificata, si noterà che il gestore ON_UPDATE_COMMAND_UI per la prima voce di menu nel menu a comparsa viene chiamato in due casi diversi.

Per prima cosa, viene chiamato per il menu di scelta rapida. Questa operazione è necessaria perché i menu a comparsa non hanno ID e si usa l'ID della prima voce di menu del menu a comparsa per fare riferimento all'intero menu a comparsa. In questo caso, la variabile membro *m_pSubMenu* dell' `CCmdUI` oggetto sarà non null e punterà al menu di scelta rapida.

In secondo luogo, viene chiamato immediatamente prima che le voci di menu nel menu a comparsa debbano essere disegnate. In questo caso, l'ID si riferisce solo alla prima voce di menu e la variabile membro *m_pSubMenu* dell' `CCmdUI` oggetto sarà null.

In questo modo è possibile abilitare il menu popup distinto dalle voci di menu, ma è necessario scrivere un codice in grado di riconoscere i menu. Ad esempio, in un menu annidato con la struttura seguente:

```Output
File>
    New>
    Sheet (ID_NEW_SHEET)
    Chart (ID_NEW_CHART)
```

I comandi ID_NEW_SHEET e ID_NEW_CHART possono essere abilitati o disabilitati in modo indipendente. Il **nuovo** menu popup dovrebbe essere abilitato se uno dei due è abilitato.

Il gestore di comandi per ID_NEW_SHEET (il primo comando nel popup) avrà un aspetto simile al seguente:

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

Il gestore di comandi per ID_NEW_CHART sarebbe un normale gestore del comando di aggiornamento e avrà un aspetto simile al seguente:

```cpp
void CMyApp::OnUpdateNewChart(CCmdUI* pCmdUI)
{
    pCmdUI->Enable(m_bCanCreateChart);
}
```

## <a name="on_command-and-on_bn_clicked"></a>ON_COMMAND e ON_BN_CLICKED

Le macro della mappa messaggi per **ON_COMMAND** e **ON_BN_CLICKED** sono le stesse. Il meccanismo di routing delle notifiche di comando e controllo MFC utilizza solo l'ID di comando per decidere dove eseguire il routing. Le notifiche di controllo con il codice di notifica del controllo zero (**BN_CLICKED**) vengono interpretate come comandi.

> [!NOTE]
> In realtà, tutti i messaggi di notifica del controllo passano attraverso la catena di gestori di comandi. Ad esempio, è tecnicamente possibile scrivere un gestore delle notifiche di controllo per **EN_CHANGE** nella classe del documento. Questo non è generalmente consigliabile perché le applicazioni pratiche di questa funzionalità sono poche, la funzionalità non è supportata da ClassWizard e l'uso della funzionalità può produrre codice fragile.

## <a name="disabling-the-automatic-disabling-of-button-controls"></a>Disabilitazione della disabilitazione automatica dei controlli Button

Se si posiziona un controllo Button su una barra della finestra di dialogo o in una finestra di dialogo che usa la posizione in cui si chiama **CWnd:: UpdateDialogControls** autonomamente, si noterà che i pulsanti che non hanno **ON_COMMAND** o gestori di **ON_UPDATE_COMMAND_UI** verranno automaticamente disabilitati dal Framework. In alcuni casi, non sarà necessario disporre di un gestore, ma si vuole che il pulsante rimanga abilitato. Il modo più semplice per ottenere questo risultato consiste nell'aggiungere un gestore di comandi fittizio (facile da eseguire con ClassWizard) e non eseguire alcuna operazione.

## <a name="window-message-routing"></a>Routing messaggi finestra

Di seguito vengono descritti alcuni argomenti più avanzati sulle classi MFC e il modo in cui influiscano sul routing dei messaggi di Windows e su altri argomenti. Le informazioni riportate di seguito sono descritte brevemente. Per informazioni dettagliate sulle API pubbliche, vedere il *riferimento alla libreria di classi* . Per ulteriori informazioni sui dettagli di implementazione, fare riferimento al codice sorgente della libreria MFC.

Per informazioni dettagliate sulla pulizia della finestra, vedere la [Nota tecnica 17](../mfc/tn017-destroying-window-objects.md) , un argomento molto importante per tutte le classi derivate da **CWnd**.

## <a name="cwnd-issues"></a>Problemi di CWnd

La funzione membro di implementazione **CWnd:: OnChildNotify** fornisce un'architettura potente ed estendibile per le finestre figlio (note anche come controlli) per eseguire l'hook o altrimenti ricevere informazioni sui messaggi, i comandi e le notifiche di controllo che vengono indirizzati al relativo padre (o "proprietario"). Se la finestra figlio (/Control) è un oggetto **CWnd** C++, la funzione virtuale **OnChildNotify** viene chiamata per prima con i parametri del messaggio originale, ovvero una struttura **msg** . La finestra figlio può lasciare solo il messaggio, mangiarlo o modificare il messaggio per l'elemento padre (rare).

L'implementazione **CWnd** predefinita gestisce i messaggi seguenti e usa l'hook **OnChildNotify** per consentire a Windows figlio (controlli) di accedere prima al messaggio:

- **WM_MEASUREITEM** e **WM_DRAWITEM** (per l'autoestraente)

- **WM_COMPAREITEM** e **WM_DELETEITEM** (per l'autoestraente)

- **WM_HSCROLL** e **WM_VSCROLL**

- **WM_CTLCOLOR**

- **WM_PARENTNOTIFY**

Si noterà che l'hook **OnChildNotify** viene usato per modificare i messaggi di prelievo del proprietario in messaggi autoestraenti.

Oltre all'hook **OnChildNotify** , i messaggi Scroll hanno un ulteriore comportamento di routing. Per ulteriori informazioni sulle barre di scorrimento e le origini dei messaggi **WM_HSCROLL** e **WM_VSCROLL** , vedere di seguito.

## <a name="cframewnd-issues"></a>Problemi di CFrameWnd

La classe **CFrameWnd** fornisce la maggior parte delle implementazioni di routing dei comandi e di aggiornamento dell'interfaccia utente. Viene usato principalmente per la finestra cornice principale dell'applicazione (**CWinApp:: m_pMainWnd**) ma si applica a tutte le finestre cornice.

La finestra cornice principale è la finestra con la barra dei menu e è l'elemento padre della barra di stato o della riga del messaggio. Per informazioni sul routing dei comandi e sulla WM_INITMENUPOPUP, vedere la discussione precedente **.**

La classe **CFrameWnd** fornisce la gestione della visualizzazione attiva. I messaggi seguenti vengono instradati tramite la visualizzazione attiva:

- Tutti i messaggi di comando (la visualizzazione attiva ne ottiene il primo accesso).

- **WM_HSCROLL** e **WM_VSCROLL** i messaggi dalle barre di scorrimento di pari livello (vedere di seguito).

- **WM_ACTIVATE** (e **WM_MDIACTIVATE** per MDI) vengono convertite in chiamate alla funzione virtuale **CView:: OnActivateView**.

## <a name="cmdiframewndcmdichildwnd-issues"></a>Problemi relativi a CMDIFrameWnd/CMDIChildWnd

Entrambe le classi della finestra cornice MDI derivano da **CFrameWnd** e pertanto sono entrambe abilitate per lo stesso tipo di routing dei comandi e di aggiornamento dell'interfaccia utente fornito in **CFrameWnd**. In una tipica applicazione MDI, solo la finestra cornice principale, ovvero l'oggetto **CMDIFrameWnd** , include la barra dei menu e la barra di stato e pertanto è l'origine principale dell'implementazione del routing dei comandi.

Lo schema di routing generale è che la finestra figlio MDI attiva ottiene il primo accesso ai comandi. Le funzioni **PreTranslateMessage** predefinite gestiscono le tabelle dei tasti di scelta rapida per le finestre figlio MDI (prima) e per il frame MDI (secondo), nonché gli acceleratori del comando di sistema MDI standard normalmente gestiti da **TranslateMDISysAccel** (Last).

## <a name="scroll-bar-issues"></a>Problemi della barra di scorrimento

Quando si gestisce Message Scroll (**WM_HSCROLL** / **OnHScroll** e/o **WM_VSCROLL** / **OnVScroll**), è consigliabile provare a scrivere il codice del gestore in modo che non si basi da dove proviene il messaggio della barra di scorrimento. Non si tratta solo di un problema generale di Windows, dal momento che i messaggi di scorrimento possono provenire da controlli della barra di scorrimento true o da **WS_HSCROLL** / **WS_VSCROLL** barre di scorrimento che non sono controlli barra di scorrimento.

MFC estende questa impostazione per consentire ai controlli barra di scorrimento di essere elementi figlio o di pari livello della finestra da scorrere (infatti, la relazione padre/figlio tra la barra di scorrimento e la finestra che si sta scorrendo può essere qualsiasi). Questa operazione è particolarmente importante per le barre di scorrimento condivise con le finestre con separatore. Vedere la [Nota tecnica 29](../mfc/tn029-splitter-windows.md) per informazioni dettagliate sull'implementazione di **CSplitterWnd** , incluse altre informazioni sui problemi della barra di scorrimento condivisa.

Si noti che sono presenti due classi derivate **CWnd** in cui gli stili della barra di scorrimento specificati in fase di creazione vengono intercettati e non vengono passati a Windows. Quando viene passato a una routine di creazione, **WS_HSCROLL** e **WS_VSCROLL** possono essere impostati in modo indipendente, ma dopo la creazione non è possibile modificarla. Naturalmente, non è consigliabile testare o impostare direttamente i bit di stile WS_SCROLL della finestra creata.

Per **CMDIFrameWnd** gli stili della barra di scorrimento passati a **create** o **LoadFrame** vengono usati per creare il MdiClient. Se si vuole avere un'area MDICLIENT scorrevole, ad esempio gestione programmi di Windows, assicurarsi di impostare entrambi gli stili della barra di scorrimento (**WS_HSCROLL** &#124; **WS_VSCROLL**) per lo stile usato per creare il **CMDIFrameWnd**.

Per **CSplitterWnd** gli stili della barra di scorrimento si applicano alle barre di scorrimento condivise speciali per le aree di divisione. Per le finestre con separatore statico, in genere non si imposta uno stile della barra di scorrimento. Per le finestre con separatore dinamico, in genere è impostato lo stile della barra di scorrimento per la direzione di suddivisione, ovvero **WS_HSCROLL** se è possibile suddividere le righe **WS_VSCROLL** se è possibile suddividere le colonne.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
