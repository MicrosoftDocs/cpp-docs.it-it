---
title: "Ottimizzazione GPO nell&#39;hub Prestazioni e diagnostica | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: dc3a1914-dbb6-4401-bc63-10665a8c8943
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Ottimizzazione GPO nell&#39;hub Prestazioni e diagnostica
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il plug\-in di ottimizzazione PGO per Visual C\+\+ nell'hub Prestazioni e diagnostica migliora l'esperienza di ottimizzazione PGO per gli sviluppatori.  È possibile [scaricare il plug\-in](http://go.microsoft.com/fwlink/p/?LinkId=327915) dal sito Web di Visual Studio.  
  
 L'ottimizzazione PGO consente di creare compilazioni per applicazioni native x86 e x64 ottimizzate per il modo in cui gli utenti interagiscono con esse.  PGO è un processo in più passaggi: si crea una compilazione dell'applicazione instrumentata per il profiling e quindi si esegue la "formazione", ovvero si esegue l'applicazione instrumentata attraverso scenari di interazione dell'utente comune.  Salvare i dati di profiling acquisiti e quindi ricompilare l'applicazione utilizzando i risultati per guidare l'ottimizzazione dell'intero programma.  Sebbene sia possibile eseguire singolarmente queste operazioni in Visual Studio o dalla riga di comando, il plug\-in PGO centralizza e semplifica il processo.  Il plug\-in PGO imposta tutte le opzioni richieste, guida l'utente per ogni passaggio, mostra l'analisi e quindi utilizza i risultati per configurare la compilazione e ottimizzare ogni funzione per dimensione o velocità.  Il plug\-in PGO consente inoltre di eseguire nuovamente la formazione dell'applicazione ed aggiornare i dati dell'ottimizzazione della compilazione non appena si modifica il codice.  
  
## Prerequisiti  
 È necessario [scaricare il plug\-in PGO](http://go.microsoft.com/fwlink/p/?LinkId=327915) e installarlo in Visual Studio prima di poterlo usare nell'hub Prestazioni e diagnostica.  
  
## Procedura dettagliata: utilizzare il plug\-in PGO per ottimizzare un'applicazione  
 Innanzitutto, verrà creata un'applicazione desktop Win32 di base in Visual Studio.  Se si dispone già di un'applicazione che si desidera ottimizzare, è possibile utilizzarla e saltare questo passaggio.  
  
#### Per creare un'applicazione  
  
1.  Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
2.  Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** espandere **Installato**, **Modelli**, **Visual C\+\+**, quindi selezionare **MFC**  
  
3.  Nel riquadro centrale selezionare **Applicazione MFC**.  
  
4.  Specificare il nome del progetto, ad esempio SamplePGOProject, nella casella **Nome**.  Fare clic su **OK**.  
  
5.  Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione MFC**, scegliere il pulsante **Fine**.  
  
 Quindi, impostare la configurazione della compilazione dell'applicazione su Rilascio per prepararla ai passaggi di compilazione e di formazione PGO.  
  
#### Per impostare la configurazione di compilazione  
  
1.  Nella barra dei menu scegliere **Compilazione**, **Gestione configurazione**.  
  
2.  Nella finestra di dialogo **Gestione configurazione**, scegliere il pulsante nell'elenco a discesa **Configurazione soluzione attiva** e selezionare **Rilascio**.  Scegliere il pulsante **Chiudi**.  
  
 Aprire l'hub Prestazioni e diagnostica, sulla barra dei menu, scegliere **Analizza**, **Prestazioni e diagnostica**.  Viene aperta una pagina della sessione di diagnostica con gli strumenti di analisi disponibili per il tipo di progetto.  
  
 ![PGO nell'hub Prestazioni e diagnostica](../../build/reference/media/pgofig0hub.png "PGOFig0Hub")  
  
 In **Strumenti disponibili**, selezionare la casella di controllo **Ottimizzazione PGO**.  Scegliere il pulsante **Avvia** per avviare il plug\-in PGO.  
  
 ![Pagina Introduzione PGO](../../build/reference/media/pgofig1start.png "PGOFig1Start")  
  
 Nella pagina **Ottimizzazione PGO** sono descritte le operazioni che il plug\-in utilizza per migliorare le prestazioni dell'applicazione.  Fare clic sul pulsante **Avvia**.  
  
 ![Pagina Strumentazione PGO](../../build/reference/media/pgofig2instrument.png "PGOFig2Instrument")  
  
 Nella sezione **Strumentazione**, utilizzare l'opzione **Formazione inizialmente abilitata** per scegliere se includere la fase di avvio dell'applicazione come parte della formazione.  Se questa opzione non è selezionata, i dati della formazione non vengono registrati in un'applicazione instrumentata in esecuzione finché non si abilita la formazione in modo esplicito.  
  
 Scegliere il pulsante **Strumento** per compilare l'applicazione con uno speciale set di opzioni del compilatore.  Il compilatore inserisce istruzioni probe nel codice generato.  Queste istruzioni registrano i dati di profiling durante la fase di formazione.  
  
 ![Pagina Build instrumentata PGO](../../build/reference/media/pgofig3build.PNG "PGOFig3Build")  
  
 Quando la compilazione instrumentata dell'applicazione è completa, l'applicazione viene avviata automaticamente.  
  
 Se vengono generati errori o avvisi durante la compilazione, correggerli e quindi scegliere **Riavvia compilazione** per riavviare la compilazione instrumentata.  
  
 Quando l'applicazione viene avviata, è possibile utilizzare i collegamenti **Avvia formazione** e **Sospendi formazione** nella sezione **Formazione** per controllare quando le informazioni di profiling vengono registrate.  È possibile utilizzare collegamenti **Arresta applicazione** e **Avvia applicazione** per arrestare e riavviare l'applicazione.  
  
 ![Pagina Formazione PGO](../../build/reference/media/pgofig4training.PNG "PGOFig4Training")  
  
 Durante la formazione, eseguire gli scenari utente per acquisire le informazioni di profiling di cui il plug\-in PGO necessita per ottimizzare il codice.  Una volta completata la formazione, chiudere l'applicazione o scegliere il collegamento **Arresta applicazione**.  Scegliere il pulsante **Analizza** per avviare il passaggio di analisi.  
  
 Quando l'analisi viene completata, nella sezione **Analisi** viene visualizzato un report con le informazioni di profiling che sono state acquisite durante la fase di formazione dello scenario utente.  È possibile utilizzare questo report per esaminare le funzioni che sono state più chiamate e che hanno richiesto la maggior quantità di tempo da parte dell'applicazione.  Il plug\-in PGO utilizza le informazioni per determinare quale funzione dell'applicazione ottimizzare per velocità e quali ottimizzare per dimensione.  Il plug\-in PGO configura le ottimizzazioni di compilazione per creare la più piccola e veloce applicazione per gli scenari utente registrati durante la formazione.  
  
 ![Pagina Analisi PGO](../../build/reference/media/pgofig5analyze.png "PGOFig5Analyze")  
  
 Se la formazione ha acquisito le informazioni di profiling previste, è possibile scegliere **Salva modifiche** per salvare i dati di profiling analizzati nel progetto per ottimizzare le compilazioni future.  Per rimuovere i dati di profiling ed avviare la formazione dall'inizio, scegliere **Ripeti formazione**.  
  
 Il file dei dati di profiling viene salvato nel progetto in una cartella dei **dati di formazione PGO**.  Questi dati vengono utilizzati per controllare le impostazioni dell'ottimizzazione della compilazione del compilatore nell'applicazione.  
  
 ![File di dati PGO in Esplora soluzioni](../../build/reference/media/pgofig6data.png "PGOFig6Data")  
  
 Dopo le analisi, il plug\-in PGO imposta le opzioni di compilazione nel progetto per utilizzare i dati di profiling per ottimizzare in modo selettivo l'applicazione durante la compilazione.  È possibile continuare a modificare e compilare l'applicazione con gli stessi dati di profiling.  Quando l'applicazione viene compilata, l'output della compilazione mostra quante funzioni e istruzioni sono state ottimizzate utilizzando i dati di profiling.  
  
 ![Diagnostica output PGO](../../build/reference/media/pgofig7diagnostics.png "PGOFig7Diagnostics")  
  
 Se si apportano modifiche significative al codice durante lo sviluppo, potrebbe essere necessario riqualificare l'applicazione per ottenere le migliori ottimizzazioni.  È consigliabile riqualificare l'applicazione quando l'output di compilazione mostra che meno dell'80% delle funzioni o delle istruzioni sono state ottimizzate utilizzando i dati di profiling.