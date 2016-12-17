---
title: "TN021: routing di comandi e messaggi | Microsoft Docs"
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
  - "vc.routing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "routine dei comandi [C++], nota tecnica TN021"
  - "TN021"
  - "messaggi Windows [C++], routing"
ms.assetid: b5952c8b-123e-406c-a36d-a6ac7c6df307
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN021: routing di comandi e messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritta l'architettura di invio e di routing dei comandi nonché gli argomenti avanzati di routing dei messaggi generale della finestra.  
  
 Fare riferimento in a Visual C\+\+ per informazioni generali su architetture descritte in questo argomento, in particolare la distinzione tra i messaggi di windows, notifiche di controllo e controlli.  Questa nota si presuppone una conoscenza di ora con i problemi descritti nella documentazione e stampata solo negli argomenti più avanzati degli indirizzi.  
  
## La funzionalità di invio e di routing dei comandi MFC 1,0 si evolve all'architettura di MFC 2,0  
 Le finestre del messaggio di **WM\_COMMAND** che viene sottoposto a overload per fornire notifiche dei comandi di menu, i tasti di scelta rapida e le notifiche di dialogo\- controllo.  
  
 MFC 1,0 generato su quello di un piccolo consentendo a un gestore comando, ad esempio "OnFileNew"\) in una classe derivata di **CWnd** venga chiamato in risposta a **WM\_COMMAND**specifico.  Ciò viene incollata insieme a una struttura di dati denominata mappa messaggi e comporta un meccanismo più efficiente quella del comando.  
  
 Funzionalità aggiuntiva fornita anche di MFC 1,0 per la separazione delle notifiche di controllo dai messaggi di comando.  I controlli sono rappresentati da un ID 16 bit, talvolta noto come un ID di comando  I controlli in genere iniziano da **CFrameWnd** ovvero un menu selezionato o un tasto di scelta rapida traduzione\) e vengono indirizzati a varie altre finestre.  
  
 MFC 1,0 è stato utilizzato il routing dei comandi in senso limitato per l'implementazione multiple\-document interface \(MDI\). \(Un delegato della finestra cornice MDI ordina alla finestra figlio MDI attiva.\)  
  
 Questa funzionalità è stata generalizzata e stata estesa di MFC 2,0 per consentire i controlli essere gestito mediante una più vasta gamma di oggetti \(non solo gli oggetti window.  Fornisce un'architettura più formale e più versatile per inviare messaggi e riutilizzata il routing di destinazione comando non solo per la gestione dei comandi, ma anche per aggiornare l'interfaccia utente oggetti \(ad esempio voci di menu e pulsanti della barra degli strumenti\) per riflettere la disponibilità corrente di un comando.  
  
## ID di comando  
 Vedere Visual C\+\+ per una spiegazione del routing dei comandi e del processo di associazione.  [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) contiene le informazioni sulla denominazione di ID.  
  
 Utilizzare il prefisso generico "ID\_" per gli ID di comando.  ID di comandi sono \>\= 0x8000.  La riga del messaggio o la barra di stato verrà visualizzata la stringa descrittiva del comando nel caso di una risorsa STRINGTABLE con gli stessi ID dell'ID di comando  
  
 Nelle risorse dell'applicazione, accade ID comando viene visualizzato in vari elementi:  
  
-   In una risorsa STRINGTABLE con lo stesso ID della richiesta di riga del messaggio.  
  
-   Probabilmente in molte risorse di menu associati alle voci di menu che include lo stesso comando.  
  
-   \(ANTICIPATO\) in un pulsante della finestra di dialogo per un comando di GOSUB.  
  
 Nel codice sorgente dell'applicazione, accade ID comando viene visualizzato in vari elementi:  
  
-   Nel RESOURCE.H o altro file di intestazione simboli principale\) per definire gli ID di comandi specifici.  
  
-   FORSE in una matrice di ID per creare una barra degli strumenti.  
  
-   In una macro di **ON\_COMMAND**.  
  
-   FORSE in una macro di **ON\_UPDATE\_COMMAND\_UI**.  
  
 Attualmente, l'unica implementazione in MFC che richiede ID di comandi è \>\= 0x8000 è l'implementazione delle finestre di dialogo e controlli di GOSUB.  
  
## Controlli di GOSUB, utilizzando l'architettura del comando nelle finestre di dialogo  
 L'architettura di comando di routing e controlli abilitare è compatibile con le finestre, le voci di menu, pulsanti della barra degli strumenti, barra della finestra di dialogo i pulsanti, le altre barre di controllo e altri elementi di interfaccia utente progettati per aggiornare i controlli di route e su richiesta o il controllo ID a una destinazione comando principale \(in genere la finestra cornice principale\).  Che la destinazione comando principale può utilizzare il comando o le notifiche di controllo a un'altra destinazione comando oggetti in base alle proprie esigenze.  
  
 Una finestra di dialogo \(modale o non modale\) può trarre vantaggio da alcune delle funzionalità dell'architettura di comando se si assegna l'id del controllo della finestra di dialogo l'identificazione corretta del comando  Il supporto per le finestre di dialogo non è automatico, pertanto è possibile che sia necessario scrivere un codice aggiuntivo.  
  
 Si noti che per tutte queste funzionalità funzionino correttamente, gli ID di comando deve essere \>\= 0x8000.  Poiché molte finestre di dialogo potrebbero ottenere destinate allo stesso frame, i controlli condivisi devono essere \>\= 0x8000, mentre il IDCs non condiviso in una finestra di dialogo specifica deve essere \<\= 0x7FFF.  
  
 È possibile inserire un pulsante plain in una finestra di dialogo modale con il normale IDC dell'insieme di pulsanti all'identificazione corretta del comando  Quando l'utente seleziona il pulsante, il proprietario della finestra di dialogo \(in genere la finestra cornice principale\) ottiene il comando come qualsiasi altro comando.  Si tratta di un comando di GOSUB poiché in genere viene utilizzata per accedere a un'altra finestra di dialogo \(un GOSUB della prima finestra di dialogo.  
  
 È anche possibile chiamare la funzione **CWnd::UpdateDialogControls** nella finestra di dialogo e passare l'indirizzo della finestra cornice principale.  Questa funzione attiva o disabilita i comandi della finestra di dialogo in base al fatto che dispongono di gestori comandi in un frame.  Questa funzione viene chiamata automaticamente automaticamente per le barre di controllo nel ciclo inattivo dell'applicazione, ma è necessario chiamarlo direttamente per le finestre di dialogo standard e si desidera ottenere questa funzionalità.  
  
## Quando viene chiamato ON\_UPDATE\_COMMAND\_UI  
 Gestione dell'attivazione\/stato di selezione di tutte le voci di un programma continuamente possono rappresentare un problema dispendiosa in termini di calcolo.  Una tecnica comune è voci di menu controllo\/abilitare solo quando l'utente seleziona il POPUP.  L'implementazione di MFC 2,0 di **CFrameWnd** gestisce il messaggio di **WM\_INITMENUPOPUP** e utilizza l'architettura di routing dei comandi per determinare gli stati dei menu tramite i gestori di **ON\_UPDATE\_COMMAND\_UI**.  
  
 **CFrameWnd** gestisce inoltre il messaggio di **WM\_ENTERIDLE** per descrivere la voce di menu corrente selezionata nella barra di stato \(anche nota come riga del messaggio\).  
  
 La struttura di menu di un'applicazione, modificata da Visual C\+\+, viene utilizzata per rappresentare i controlli potenziali disponibili al momento di **WM\_INITMENUPOPUP**.  I gestori di**ON\_UPDATE\_COMMAND\_UI** possono modificare lo stato o il testo di un menu, o per utilizzi avanzati \(come nell'elenco dei file utilizzati di recente o il menu di scelta rapida OLE di verbi\), effettivamente modificare la struttura di menu prima che il menu venga applicato lo stile.  
  
 Lo stesso tipo di elaborazione di **ON\_UPDATE\_COMMAND\_UI** avviene per le barre degli strumenti \(e altre barre di controllo\) quando l'applicazione passa nel ciclo inattivo.  Vedere riferimenti e [Nota tecnica 31](../mfc/tn031-control-bars.md)*libreria di classi* per ulteriori informazioni sulle barre di controllo.  
  
## Menu di scelta rapida annidati  
 Se si utilizza una struttura annidata del menu, si noterà che il gestore di **ON\_UPDATE\_COMMAND\_UI** per la prima voce del menu di scelta rapida viene chiamato in due casi diversi.  
  
 Innanzitutto, viene chiamato dal menu di scelta rapida stesso.  Questa operazione è necessaria perché i menu di scelta rapida non presentano ID e utilizzato l'id della prima voce di menu di menu di scelta rapida per riferirci all'intero menu di scelta rapida.  In questo caso, la variabile membro di **m\_pSubMenu** dell'oggetto di **CCmdUI** sarà diverso da Null e indicherà il menu di scelta rapida.  
  
 In secondo luogo, viene chiamato immediatamente prima delle voci del menu di scelta rapida devono essere disegnati.  In questo caso, l'id si riferisce solo alla prima voce di menu e la variabile membro di **m\_pSubMenu** dell'oggetto di **CCmdUI** sarà NULL.  
  
 Ciò consente di attivare il menu di scelta rapida distinto dalle relative voci di menu, ma che richiede la scrittura in un determinato menu il codice.  Ad esempio, in un menu annidato con la struttura seguente:  
  
```  
File>  
    New>  
        Sheet (ID_NEW_SHEET)  
        Chart (ID_NEW_CHART)  
```  
  
 I controlli di ID\_NEW\_CHART e di ID\_NEW\_SHEET possono essere abilitati o disabilitati indipendente.  Il menu di scelta rapida di **Nuova** deve essere abilitato se uno dei due è abilitato.  
  
 Il gestore comando per ID\_NEW\_SHEET \(il primo comando nel popup\) è simile al seguente:  
  
```  
void CMyApp::OnUpdateNewSheet(CCmdUI* pCmdUI)  
{  
    if (pCmdUI->m_pSubMenu != NULL)  
    {  
        // enable entire pop-up for "New" sheet and chart  
        BOOL bEnable = m_bCanCreateSheet || m_bCanCreateChart;  
  
        // CCmdUI::Enable is a no-op for this case, so we  
        //   must do what it would have done.  
        pCmdUI->m_pMenu->EnableMenuItem(pCmdUI->m_nIndex,  
            MF_BYPOSITION |   
                (bEnable ? MF_ENABLED : (MF_DISABLED | MF_GRAYED)));  
        return;  
    }  
    // otherwise just the New Sheet command  
    pCmdUI->Enable(m_bCanCreateSheet);  
}  
```  
  
 Il gestore comando per ID\_NEW\_CHART sarebbe un gestore comando e un aspetto normali update simile al seguente:  
  
```  
void CMyApp::OnUpdateNewChart(CCmdUI* pCmdUI)  
{  
    pCmdUI->Enable(m_bCanCreateChart);  
}  
```  
  
## ON\_COMMAND e ON\_BN\_CLICKED  
 Le macro di mapping dei messaggi per **ON\_COMMAND** e **ON\_BN\_CLICKED** sono uguali.  Il meccanismo di routing di comando e di notifica di controllo MFC utilizza solo l'id di comando per decidere dove address.  Le notifiche di controllo con un codice di notifica di controllo di zero \(**BN\_CLICKED**\) vengono interpretate come controlli.  
  
> [!NOTE]
>  Infatti, tutti i messaggi di notifica di controllo attraversano la catena del gestore comando.  Ad esempio, è possibile tecnicamente di scrivere un gestore di notifica per **EN\_CHANGE** nella classe del documento.  Questa operazione non è in genere consigliabile perché le applicazioni pratiche di questa funzionalità sono poche, la funzionalità non è supportata da ClassWizard e l'utilizzo della funzionalità può generare codice fragile.  
  
## Disabilitare disabilitare automatico dei pulsanti  
 Se si inserisce un pulsante di una barra della finestra di dialogo, o in una finestra di dialogo utilizzando dove si chiama **CWnd::UpdateDialogControls** sui propri, si noterà che i pulsanti che non dispongono di gestori **ON\_UPDATE\_COMMAND\_UI** o di **ON\_COMMAND** automaticamente verranno disabilitati automaticamente dal framework.  In alcuni casi, non è necessario disporre di un gestore, ma sarà il pulsante per rimanere attivo.  Il modo più semplice per ottenere questo risultato consiste nell'aggiungere un gestore comando fittizio \(semplificare con ClassWizard\) e non effettuare alcuna operazione.  
  
## Routing dei messaggi finestra  
 Di seguito viene descritto un certo " più di argomenti avanzati sulle classi MFC e su l " routing dei messaggi di windows e altri argomenti riguardano le.  Le informazioni di seguito vengono descritte solo brevemente.  Riferimento al *riferimento della libreria di classi* per informazioni dettagliate sulle API pubblici.  Fare riferimento al codice sorgente della libreria MFC per ulteriori informazioni sui dettagli di implementazione.  
  
 In alternativa fare riferimento a [Nota tecnica 17](../mfc/tn017-destroying-window-objects.md) per informazioni dettagliate sulla pulizia della finestra, un argomento molto importante per qualsiasi **CWnd**\- classi derivate.  
  
## Problemi CWnd  
 La funzione membro **CWnd::OnChildNotify** di implementazione fornisce un'architettura potente ed estensibile per le finestre figlio \(denominate anche i controlli\) all'hook oppure tenere presente i messaggi, i controlli e delle notifiche di controllo che corrispondono ai relativi elementi padre \(o "al proprietario"\).  Se la finestra figlio \(\/control\) è stesso oggetto c\+\+ **CWnd**, la funzione virtuale **OnChildNotify** viene chiamata prima con i parametri dal messaggio originale \(ovvero una struttura di **MSG** \).  La finestra figlio può lasciare il messaggio solo, mangiarla, o modificare il messaggio per il padre \(comune\).  
  
 L'implementazione di **CWnd** di impostazione predefinita gestisce i seguenti messaggi e utilizza la funzione hook di **OnChildNotify** per consentire le finestre figlio \(controlli\) al primo accesso al messaggio:  
  
-   **WM\_MEASUREITEM** e **WM\_DRAWITEM** \(automatica per disegnare\)  
  
-   **WM\_COMPAREITEM** e **WM\_DELETEITEM** \(automatica per disegnare\)  
  
-   **WM\_HSCROLL** e **WM\_VSCROLL**  
  
-   **WM\_CTLCOLOR**  
  
-   **WM\_PARENTNOTIFY**  
  
 Si noterà che l'hook di **OnChildNotify** consente di modificare i messaggi per il disegno personalizzato nei messaggi di disegno automatico.  
  
 Oltre a hook di **OnChildNotify**, i messaggi di scorrimento denominate ulteriore comportamento di routing.  Vedere seguito per informazioni dettagliate sulle barre di scorrimento e le origini dei messaggi di **WM\_VSCROLL** e di **WM\_HSCROLL**.  
  
## Problemi di CFrameWnd  
 La classe di **CFrameWnd** fornisce il routing dei comandi e dell'interfaccia utente che aggiorna l'implementazione.  Ciò viene utilizzata principalmente per la propria finestra cornice principale dell'applicazione \(**CWinApp::m\_pMainWnd**\) ma si applica a tutte le finestre cornici.  
  
 La finestra cornice principale è la finestra con la barra dei menu e costituisce l'elemento padre della barra di stato o riga del messaggio.  In alternativa fare riferimento alla discussione di precedenza sul routing dei comandi e su **WM\_INITMENUPOPUP.**  
  
 La classe di **CFrameWnd** fornisce la gestione della visualizzazione attiva.  I seguenti messaggi vengono indirizzati alla visualizzazione attiva:  
  
-   Tutti i messaggi di comando \(la visualizzazione attiva ottiene il primo accesso relative\).  
  
-   Messaggi di **WM\_VSCROLL** e di**WM\_HSCROLL** barre di scorrimento di pari livello \(vedere di seguito\).  
  
-   **WM\_ACTIVATE** \(e **WM\_MDIACTIVATE** per MDI\) vengono ruotati nelle chiamate alla funzione virtuale **CView::OnActivateView**.  
  
## Problemi di CMDIFrameWnd\/CMDIChildWnd  
 Entrambe le classi della finestra cornice MDI derivano da **CFrameWnd** e pertanto sono abilitate per lo stesso tipo di routing dei comandi di aggiornamento dell'interfaccia utente descritti in **CFrameWnd**.  In un'applicazione MDI tipica, solo la finestra cornice principale ovvero l'oggetto di **CMDIFrameWnd** \) utilizza la barra dei menu e la barra di stato e pertanto è l'origine principale dell'implementazione di routing dei comandi.  
  
 Il formato generale di routing è che la finestra figlio MDI attiva ottiene il primo accesso ai controlli.  Le funzioni di **PreTranslateMessage** di impostazione predefinita gestiscono le tabelle dei tasti di scelta rapida per le finestre figlio MDI primo\) che la cornice MDI \(secondo\) nonché i tasti di scelta rapida comando di sistema standard MDI in genere gestiti da **TranslateMDISysAccel** \('\).  
  
## Problemi scrollbar  
 Nella gestione del scorrimento\- messaggio \(**WM\_HSCROLL**\/**OnHScroll** e\/o **WM\_VSCROLL**\/**OnVScroll**\), tentare di scrivere il codice del gestore in modo da non si basa su se il messaggio della barra di scorrimento non.  Ciò non solo è finestre generali pubblica, poiché i messaggi di scorrimento possono provenire da true controlli barra di scorrimento o barre di scorrimento**WS\_VSCROLL** \/ **WS\_HSCROLL**che non sono controlli barra di scorrimento.  
  
 MFC che estende per consentire ai controlli barra di scorrimento sia figlio o elementi di pari livello della finestra che viene scorsa \(infatti, la relazione tra la barra di scorrimento e finestra padre\/figlio che viene scorsa possono essere qualsiasi elemento\).  Ciò è particolarmente importante per le barre di scorrimento condivise con finestre con separatore.  In alternativa fare riferimento a [Nota tecnica 29](../mfc/tn029-splitter-windows.md) per informazioni dettagliate sull'implementazione di **CSplitterWnd** inclusi ulteriori informazioni sui problemi condivisi della barra di scorrimento.  
  
 In una nota rapida, esistono due classi derivate di **CWnd** in cui gli stili scrollbar specificati crea il tempo sono bloccate e non sono stati passati alle finestre.  Una volta passato a una routine di creazione, **WS\_HSCROLL** e **WS\_VSCROLL** possono essere impostati in modo indipendente, ma a creazione non può essere modificata.  Naturalmente, non è necessario verificare direttamente o impostare il WS\_? Tenere premuto il tasto MAIUSC i bit di stile della finestra che hanno creato.  
  
 Per **CMDIFrameWnd** gli stili scrollbar che passati a **Crea** o **LoadFrame** viene utilizzato per creare il MDICLIENT.  Se si desidera ottenere un'area scorrevole di MDICLIENT \(ad esempio windows Program Manager\) assicurarsi di impostare entrambi gli stili scrollbar \(**WS\_HSCROLL** &#124; **WS\_VSCROLL**\) per lo stile utilizzato per creare **CMDIFrameWnd**.  
  
 Per **CSplitterWnd** gli stili della barra di scorrimento vengono applicate le barre di scorrimento condivise speciali per le aree splitter.  Per finestre con separatore statico, in genere non verrà impostata qualsiasi stile di scrollbar.  Per le finestre con separatore dinamico, in genere impostare lo stile di scrollbar per la direzione che suddividerete, ovvero, **WS\_HSCROLL** se è possibile suddividere le righe, **WS\_VSCROLL** se è possibile suddividere le colonne.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)