---
title: Creare progetti multipiattaforma C++ in Visual Studio
description: Come configurare, compilare ed eseguire il debug di un progetto CMake Open Source C++ in Visual Studio destinato a Linux e Windows.
ms.topic: tutorial
ms.date: 01/08/2020
ms.openlocfilehash: 3fdd9b1dfb5075f3a71f62bc4f1e2f3c646f9e6b
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040483"
---
# <a name="tutorial-create-c-cross-platform-projects-in-visual-studio"></a>Esercitazione: Creare progetti multipiattaforma C++ in Visual Studio

Lo sviluppo C e C++ di Visual Studio non è più limitato a Windows. Questa esercitazione illustra come usare Visual Studio per lo sviluppo multipiattaforma C++ in Windows e Linux. Si basa su CMake, pertanto non è necessario creare o generare progetti di Visual Studio. Quando si apre una cartella che contiene un file di CMakeLists.txt, Visual Studio configura automaticamente le impostazioni di IntelliSense e di compilazione. È possibile avviare rapidamente la modifica, la compilazione e il debug del codice in locale in Windows. Modificare quindi la configurazione per eseguire la stessa operazione in Linux, tutto da Visual Studio.

In questa esercitazione verranno illustrate le procedure per:

> [!div class="checklist"]
>
> * clonare un progetto CMake open source da GitHub
> * aprire il progetto in Visual Studio
> * compilare ed eseguire il debug di una destinazione eseguibile in Windows
> * aggiungere una connessione a un computer Linux
> * compilare ed eseguire il debug della stessa destinazione in Linux

## <a name="prerequisites"></a>Prerequisiti

* Configurare Visual Studio per lo sviluppo C++ multipiattaforma
  * Per prima cosa, [installare Visual Studio](https://visualstudio.microsoft.com/vs/) e scegliere lo sviluppo **di applicazioni desktop con** i carichi di lavoro di sviluppo con C++ e **Linux con c++**. Questa installazione minima è di 3 GB. A seconda della velocità di download, l'installazione non deve durare più di 10 minuti.

* Configurare un computer Linux per lo sviluppo C++ multipiattaforma
  * Visual Studio non richiede alcuna distribuzione specifica di Linux. Il sistema operativo può essere eseguito in un computer fisico, in una VM o nel cloud. È anche possibile usare il sottosistema Windows per Linux (WSL). Tuttavia, per questa esercitazione è necessario un ambiente grafico. WSL non è consigliato perché è destinato principalmente alle operazioni da riga di comando.
  * Visual Studio richiede questi strumenti nel computer Linux: compilatori C++, GDB, SSH, rsync, Ninja e zip. Nei sistemi basati su Debian è possibile usare questo comando per installare le dipendenze seguenti:

    ```cmd
    sudo apt install -y openssh-server build-essential gdb rsync ninja-build zip
    ```

  * Visual Studio richiede una versione recente di CMake nel computer Linux in cui è abilitata la modalità server (almeno 3,8). Microsoft produce una build universale di CMake che è possibile installare in qualsiasi distribuzione Linux. Si consiglia di usare questa compilazione per assicurarsi di disporre delle funzionalità più recenti. È possibile ottenere i file binari di CMake dalla [fork Microsoft del repository CMake](https://github.com/Microsoft/CMake/releases) in GitHub. Passare a questa pagina e scaricare la versione corrispondente all'architettura di sistema nel computer Linux e quindi contrassegnarla come eseguibile:

    ```cmd
    wget <path to binary>
    chmod +x cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh
    ```

  * È possibile visualizzare le opzioni per l'esecuzione dello script con `-–help`. Si consiglia di usare l' `–prefix` opzione per specificare l'installazione nel percorso **/usr** , perché **/usr/bin** è il percorso predefinito in cui Visual Studio cerca CMake. L'esempio seguente illustra lo script Linux-x86_64. Modificarlo in base alle esigenze se si usa una piattaforma di destinazione diversa.

    ```cmd
    sudo ./cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh --skip-license --prefix=/usr
    ```

* GIT per Windows installato nel computer Windows.
* Un account GitHub.

## <a name="clone-an-open-source-cmake-project-from-github"></a>Clonare un progetto CMake open source da GitHub

Questa esercitazione usa Bullet Physics SDK su GitHub. Fornisce funzionalità di rilevamento dei conflitti e simulazioni fisiche per molte applicazioni. L'SDK include programmi eseguibili di esempio che vengono compilati ed eseguiti senza dover scrivere codice aggiuntivo. Questa esercitazione non modifica gli script di codice sorgente o di compilazione. Per iniziare, clonare il repository *bullet3* da GitHub nel computer in cui è installato Visual Studio.

```cmd
git clone https://github.com/bulletphysics/bullet3.git
```

1. Dal menu principale di Visual Studio scegliere **File > apri > CMake**. Passare al file CMakeLists.txt nella radice del repository bullet3 appena scaricato.

    ![Menu di Visual Studio per il File > Apri > CMake](media/cmake-open-cmake.png)

    Non appena si apre la cartella, la struttura di cartelle diventa visibile nel **Esplora soluzioni**.

    ![Visualizzazione delle cartelle di Esplora soluzioni in Visual Studio](media/cmake-bullet3-solution-explorer.png)

    Questa visualizzazione mostra esattamente gli elementi presenti nel disco. Non si tratta di una visualizzazione logica o filtrata. Per impostazione predefinita, la visualizzazione non mostra i file nascosti.

1. Scegliere il pulsante **Mostra tutti i file** per visualizzare tutti i file nella cartella.

    ![Pulsante Mostra tutti i file di Esplora soluzioni in Visual Studio](media/cmake-bullet3-show-all-files.png)

## <a name="switch-to-targets-view"></a>Passare alla visualizzazione delle destinazioni

Quando si apre una cartella che usa CMake, Visual Studio genera automaticamente la cache di CMake. Questa operazione potrebbe richiedere alcuni istanti, a seconda delle dimensioni del progetto.

1. Nella **finestra di output** selezionare **Mostra output di** e quindi scegliere **CMake** per monitorare lo stato del processo di generazione della cache. Quando l'operazione è stata completata, viene visualizzato il messaggio "L'estrazione delle informazioni sulle destinazioni è stata completata".

   ![Finestra di output di Visual Studio che mostra l'output di CMake](media/cmake-bullet3-output-window.png)

   Al termine dell'operazione, viene configurato IntelliSense. È possibile compilare il progetto ed eseguire il debug dell'applicazione. Visual Studio ora Mostra una visualizzazione logica della soluzione, in base alle destinazioni specificate nei file CMakeLists.

1. Usare il pulsante **Soluzioni e cartelle** in **Esplora soluzioni** per passare alla visualizzazione delle destinazioni CMake.

   ![Pulsante Soluzioni e cartelle in Esplora soluzioni per passare alla visualizzazione delle destinazioni CMake](media/cmake-bullet3-show-targets.png)

   Per Bullet SDK la visualizzazione sarà la seguente:

   ![Visualizzazione destinazioni CMake di Esplora soluzioni](media/cmake-bullet3-targets-view.png)

   La visualizzazione delle destinazioni offre una visualizzazione più intuitiva del contenuto della base di origine. È possibile osservare che alcune destinazioni sono librerie e altri sono file eseguibili.

1. Espandere un nodo nella visualizzazione delle destinazioni CMake per visualizzare i file del codice sorgente, indipendentemente dal percorso dei file nel disco.

## <a name="add-an-explicit-windows-x64-debug-configuration"></a>Aggiungere una configurazione x64-Debug Windows esplicita

Visual Studio crea una configurazione di **debug x64** predefinita per Windows. Le configurazioni indicano a Visual Studio la piattaforma di destinazione da usare per CMake. La configurazione predefinita non è rappresentata nel disco. Quando si aggiunge in modo esplicito una configurazione, Visual Studio crea un file denominato *CMakeSettings.json*. Viene popolato con le impostazioni per tutte le configurazioni specificate.

1. Aggiungere una nuova configurazione. Aprire l'elenco a discesa **configurazione** sulla barra degli strumenti e selezionare **Gestisci configurazioni**.

   ![Elenco a discesa Gestisci configurazioni](media/cmake-bullet3-manage-configurations.png)

   Si apre l' [Editor delle impostazioni CMake](customize-cmake-settings.md) . Selezionare il segno più verde sul lato sinistro dell'editor per aggiungere una nuova configurazione. Viene visualizzata la finestra **di dialogo Aggiungi configurazione a CMakeSettings** .

   ![Finestra di dialogo Aggiungi configurazione a CMakeSettings](media/cmake-bullet3-add-configuration-x64-debug.png)

   Questa finestra di dialogo Mostra tutte le configurazioni incluse in Visual Studio, oltre a tutte le configurazioni personalizzate create dall'utente. Se si vuole continuare a usare una configurazione di **debug x64** , deve essere la prima aggiunta. Selezionare **x64-debug**, quindi scegliere il pulsante **Seleziona** . Visual Studio crea il CMakeSettings.jsnel file con una configurazione per **x64-debug**e lo salva su disco. È possibile impostare il nome desiderato per le configurazioni modificando il parametro name direttamente in CMakeSettings.json.

## <a name="set-a-breakpoint-build-and-run-on-windows"></a>Impostazione di un punto di interruzione, compilazione ed esecuzione in Windows

In questo passaggio verrà eseguito il debug di un programma di esempio che illustra la libreria Bullet Physics.
  
1. In **Esplora soluzioni** selezionare AppBasicExampleGui ed espanderlo.

1. Aprire il file `BasicExample.cpp`.

1. Impostare un punto di interruzione che viene raggiunto quando si fa clic sull'applicazione in esecuzione. L'evento Click è gestito in un metodo all'interno di una classe helper. Per passare rapidamente al punto specifico:

   1. Consente `CommonRigidBodyBase` di selezionare che lo struct `BasicExample` è derivato da. È intorno alla riga 30.

   1. Fare clic con il pulsante destro del mouse e scegliere **Vai a definizione**. A questo punto si è nell'intestazione CommonRigidBodyBase. h.

   1. Nella visualizzazione del browser sopra l'origine dovrebbe essere visualizzato il `CommonRigidBodyBase` . A destra è possibile selezionare i membri da esaminare. Aprire l'elenco a discesa e selezionare `mouseButtonCallback` per passare alla definizione della funzione nell'intestazione.

      ![Barra degli strumenti dell'elenco dei membri di Visual Studio](media/cmake-bullet3-member-list-toolbar.png)

1. Inserire un punto di interruzione nella prima riga all'interno della funzione. Viene raggiunto quando si fa clic su un pulsante del mouse all'interno della finestra dell'applicazione, quando viene eseguito nel debugger di Visual Studio.

1. Per avviare l'applicazione, selezionare l'elenco a discesa Launch (Avvia) sulla barra degli strumenti. È quello con l'icona di riproduzione verde che indica "Select Startup Item". Nell'elenco a discesa selezionare AppBasicExampleGui.exe. Il nome dell'eseguibile è ora visibile sul pulsante di avvio:

   ![Elenco a discesa di avvio della barra degli strumenti di Visual Studio per Seleziona elemento di avvio](media/cmake-bullet3-launch-button.png)

1. Scegliere il pulsante Launch (Avvia) per compilare l'applicazione e le dipendenze necessarie, quindi avviarla con il debugger di Visual Studio collegato. Dopo alcuni istanti viene visualizzata l'applicazione in esecuzione:

   ![Debug di un'applicazione Windows in Visual Studio](media/cmake-bullet3-launched.png)

1. Spostare il puntatore del mouse nella finestra dell'applicazione, quindi fare clic su un pulsante per attivare il punto di interruzione. Il punto di interruzione riporta Visual Studio nuovamente in primo piano e l'editor Mostra la riga in cui l'esecuzione è sospesa. È possibile esaminare le variabili dell'applicazione, gli oggetti, i thread e la memoria oppure eseguire il codice un'istruzione alla volta in modo interattivo. Scegliere **continua** per consentire all'applicazione di riprendere, quindi uscire normalmente. In alternativa, arrestare l'esecuzione in Visual Studio usando il pulsante Interrompi.

## <a name="add-a-linux-configuration-and-connect-to-the-remote-machine"></a>Aggiungere una configurazione Linux e connettersi al computer remoto

1. Aggiungere una configurazione Linux. Fare clic con il pulsante destro del mouse sul file CMakeSettings.json in **Esplora soluzioni** e selezionare **Aggiungi configurazione**. Viene visualizzata la finestra di dialogo Aggiungi configurazione a CMakeSettings descritta in precedenza. Selezionare **Linux-debug** questa volta, quindi salvare il CMakeSettings.jsnel file (Ctrl + s).

1. Selezionare **Linux-debug** nell'elenco a discesa configurazione.

   ![Elenco a discesa di avvio delle configurazioni con le opzioni X64-Debug e Linux-Debug](media/cmake-bullet3-linux-configuration-item.png)

   Se è la prima volta che si esegue la connessione a un sistema Linux, viene visualizzata la finestra di dialogo **Connetti al sistema remoto** .

   ![Finestra di dialogo Connetti a sistema remoto di Visual Studio](media/cmake-bullet3-connection-manager.png)

   Se è già stata aggiunta una connessione remota, è possibile aprire questa finestra passando a **strumenti > opzioni > multipiattaforma > gestione connessione**.

1. Fornire le [informazioni di connessione al computer Linux](../linux/connect-to-your-remote-linux-computer.md) e scegliere **Connetti**. Visual Studio aggiunge il computer come CMakeSettings.jscome connessione predefinita per **Linux-debug**. Estrae anche le intestazioni dal computer remoto, in modo da ottenere [IntelliSense specifico per tale connessione remota](../linux/configure-a-linux-project.md#remote_intellisense). Successivamente, Visual Studio invia i file al computer remoto e genera la cache CMake nel sistema remoto. Questa procedura può richiedere del tempo, a seconda della velocità della rete e della potenza del computer remoto. Si saprà che è completa quando viene visualizzato il messaggio "estrazione delle informazioni di destinazione completata" nella finestra di output di CMake.

## <a name="set-a-breakpoint-build-and-run-on-linux"></a>Impostare un punto di interruzione, compilare ed eseguire in Linux

Poiché si tratta di un'applicazione desktop, è necessario fornire altre informazioni di configurazione alla configurazione di debug.

1. Nella visualizzazione destinazioni CMake fare clic con il pulsante destro del mouse su AppBasicExampleGui e scegliere **debug e avvia Impostazioni** per aprire il launch.vs.jsnel file che si trova nella sottocartella hidden **. vs** . Il file è un file locale dell'ambiente di sviluppo. È possibile spostarlo nella radice del progetto se si vuole archiviarlo e salvarlo con il team. In questo file è stata aggiunta una configurazione per AppBasicExampleGui. Queste impostazioni predefinite funzionano nella maggior parte dei casi, ma non qui. Poiché si tratta di un'applicazione desktop, è necessario fornire alcune informazioni aggiuntive per avviare il programma in modo che sia possibile visualizzarlo nel computer Linux.

1. Per trovare il valore della variabile di ambiente `DISPLAY` nel computer Linux, eseguire questo comando:

   ```cmd
   echo $DISPLAY
   ```

   Nella configurazione di AppBasicExampleGui è presente una matrice di parametri, "pipeArgs". Contiene una riga: "$ {debuggerCommand}". Si tratta del comando che avvia gdb nel computer remoto. Visual Studio deve esportare la visualizzazione in questo contesto prima dell'esecuzione del comando. Ad esempio, se il valore della visualizzazione è `:1` , modificare la riga come segue:

   ```cmd
   "export DISPLAY=:1;${debuggerCommand}",
   ```

1. Avviare ed eseguire il debug dell'applicazione. Aprire l'elenco a discesa **selezionare l'elemento di avvio** nella barra degli strumenti e scegliere **AppBasicExampleGui**. Quindi, scegliere l'icona di riproduzione verde sulla barra degli strumenti oppure premere **F5**. L'applicazione e le relative dipendenze sono compilate nel computer Linux remoto, quindi avviate con il debugger di Visual Studio collegato. Nel computer Linux remoto verrà visualizzata una finestra dell'applicazione.

1. Spostare il puntatore del mouse nella finestra dell'applicazione e fare clic su un pulsante. Il punto di interruzione viene raggiunto. L'esecuzione del programma viene sospesa, Visual Studio torna in primo piano e viene visualizzato il punto di interruzione. Viene visualizzata anche una finestra della console Linux in Visual Studio. La finestra fornisce l'output del computer Linux remoto e può anche accettare l'input per `stdin` . Come qualsiasi finestra di Visual Studio, è possibile ancorarla dove si preferisce visualizzarla. La relativa posizione viene mantenute in sessioni future.

   ![Finestra della console Linux in Visual Studio](media/cmake-bullet3-linux-console.png)

1. È possibile esaminare le variabili, gli oggetti, i thread, la memoria dell'applicazione e analizzare il codice in modo interattivo usando Visual Studio. Questa volta, tuttavia, si esegue l'operazione in un computer Linux remoto anziché nell'ambiente Windows locale. È possibile scegliere **continua** per consentire all'applicazione di riprendere e uscire normalmente oppure è possibile scegliere il pulsante Arresta, come per l'esecuzione locale.

1. Nella finestra Stack di chiamate osservare le Chiamate a `x11OpenGLWindow` effettuate dal momento in cui Visual Studio ha avviato l'applicazione in Linux.

   ![Finestra Stack di chiamate che mostra lo stack di chiamate Linux](media/cmake-bullet3-linux-callstack.png)

## <a name="what-you-learned"></a>Conoscenze acquisite

In questa esercitazione è stata clonata una codebase direttamente da GitHub. È stata compilata, eseguita e sottoposta a debug in Windows senza modifiche. È stata quindi usata la stessa codebase, con modifiche di configurazione secondarie, per compilare, eseguire ed eseguire il debug in un computer Linux remoto.

## <a name="next-steps"></a>Passaggi successivi

Altre informazioni sulla configurazione e il debug di progetti CMake in Visual Studio:

> [!div class="nextstepaction"]
> [Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/><br/>
> [Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/><br/>
> [Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/><br/>
> [Personalizzare le impostazioni di compilazione di CMake](customize-cmake-settings.md)<br/><br/>
> [Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/><br/>
> [Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/><br/>
> [Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)
>
