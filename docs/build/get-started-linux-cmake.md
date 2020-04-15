---
title: Creare progetti multipiattaforma C++ in Visual Studio
description: Come impostare, compilare ed eseguire il debug di un progetto CMake open source in Visual Studio che è destinato sia a Linux che a Windows.
ms.topic: tutorial
ms.date: 01/08/2020
ms.openlocfilehash: aac536f488cf22adf5aa835c9fe5b884fc5d7298
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328750"
---
# <a name="tutorial-create-c-cross-platform-projects-in-visual-studio"></a>Esercitazione: Creare progetti multipiattaforma in Visual StudioTutorial: Create C's cross-platform projects in Visual Studio

Lo sviluppo C e C++ di Visual Studio non è più limitato a Windows. In questa esercitazione viene illustrato come usare lo sviluppo multipiattaforma di Visual Studio per C, in Windows e Linux.This tutorial shows how to use Visual Studio for C'è cross platform development on Windows and Linux. È basato su CMake, quindi non è necessario creare o generare progetti di Visual Studio. Quando si apre una cartella che contiene un file CMakeLists.txt, Visual Studio configura automaticamente IntelliSense e le impostazioni di compilazione. È possibile avviare rapidamente la modifica, la compilazione e il debug del codice in locale in Windows.You can quickly start editing, building, and debugging your code locally on Windows. Quindi, cambiare la configurazione per eseguire la stessa operazione su Linux, il tutto dall'interno di Visual Studio.Then, switch your configuration to do the same on Linux, all from within Visual Studio.

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
  * In primo luogo, [installare Visual Studio](https://visualstudio.microsoft.com/vs/) e scegliere lo sviluppo di desktop con **c'è** e lo sviluppo Linux con carichi di **lavoro C**. Questa installazione minima è di soli 3 GB. A seconda della velocità di download, l'installazione non dovrebbe richiedere più di 10 minuti.

* Configurare un computer Linux per lo sviluppo C++ multipiattaforma
  * Visual Studio non richiede alcuna distribuzione specifica di Linux. Il sistema operativo può essere in esecuzione in un computer fisico, in una macchina virtuale o nel cloud. È inoltre possibile utilizzare il sottosistema Windows per Linux (WSL). Tuttavia, per questa esercitazione è necessario un ambiente grafico. WSL non è consigliato in questo caso, perché è destinato principalmente per le operazioni della riga di comando.
  * Visual Studio richiede questi strumenti nel computer Linux: compilatori C , gdb, ssh, rsync, ninja e zip. Nei sistemi basati su Debian, è possibile utilizzare questo comando per installare queste dipendenze:On Debian-based systems, you can use this command to install these dependencies:

    ```cmd
    sudo apt install -y openssh-server build-essential gdb rsync ninja-build zip
    ```

  * Visual Studio richiede una versione recente di CMake nel computer Linux con la modalità server abilitata (almeno 3.8). Microsoft produce una build universale di CMake che è possibile installare in qualsiasi distribuzione Linux. Si consiglia di utilizzare questa build per assicurarsi di disporre delle funzionalità più recenti. È possibile ottenere i file binari di CMake dalla [fork Microsoft del repository CMake](https://github.com/Microsoft/CMake/releases) in GitHub. Vai a quella pagina e scarica la versione che corrisponde all'architettura del sistema sul tuo computer Linux, quindi contrassegnala come eseguibile:

    ```cmd
    wget <path to binary>
    chmod +x cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh
    ```

  * È possibile visualizzare le opzioni per l'esecuzione dello script con `-–help`. È consigliabile utilizzare `–prefix` l'opzione per specificare l'installazione nel percorso **/usr,** poiché **/usr/bin** è il percorso predefinito in cui Visual Studio cerca CMake. L'esempio seguente illustra lo script Linux-x86_64. Modificarlo in base alle esigenze se si utilizza una piattaforma di destinazione diversa.

    ```cmd
    sudo ./cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh --skip-license --prefix=/usr
    ```

* GIT per Windows installato nel computer Windows.
* Un account GitHub.

## <a name="clone-an-open-source-cmake-project-from-github"></a>Clonare un progetto CMake open source da GitHub

Questa esercitazione usa Bullet Physics SDK su GitHub.This tutorial uses the Bullet Physics SDK on GitHub. Fornisce il rilevamento delle collisioni e simulazioni fisiche per molte applicazioni. L'SDK include programmi eseguibili di esempio che vengono compilati ed eseguiti senza dover scrivere codice aggiuntivo. Questa esercitazione non modifica il codice sorgente o gli script di compilazione. Per iniziare, clonare il repository *bullet3* da GitHub nel computer in cui è installato Visual Studio.

```cmd
git clone https://github.com/bulletphysics/bullet3.git
```

1. Nel menu principale di Visual Studio scegliere **Apri > > file cMake**. Passare al file CMakeLists.txt nella radice del repository bullet3 appena scaricato.

    ![Menu di Visual Studio per il File > Apri > CMake](media/cmake-open-cmake.png)

    Non appena si apre la cartella, la struttura di cartelle diventa visibile in **Esplora soluzioni**.

    ![Visualizzazione delle cartelle di Esplora soluzioni in Visual Studio](media/cmake-bullet3-solution-explorer.png)

    Questa visualizzazione mostra esattamente gli elementi presenti nel disco. Non si tratta di una visualizzazione logica o filtrata. Per impostazione predefinita, la visualizzazione non mostra i file nascosti.

1. Scegliere il pulsante **Mostra tutti i file** per visualizzare tutti i file nella cartella.

    ![Pulsante Mostra tutti i file di Esplora soluzioni in Visual Studio](media/cmake-bullet3-show-all-files.png)

## <a name="switch-to-targets-view"></a>Passare alla visualizzazione delle destinazioni

Quando si apre una cartella che usa CMake, Visual Studio genera automaticamente la cache di CMake. Questa operazione potrebbe richiedere alcuni istanti, a seconda delle dimensioni del progetto.

1. Nella **finestra di output** selezionare **Mostra output di** e quindi scegliere **CMake** per monitorare lo stato del processo di generazione della cache. Quando l'operazione è stata completata, viene visualizzato il messaggio "L'estrazione delle informazioni sulle destinazioni è stata completata".

   ![Finestra di output di Visual Studio che mostra l'output di CMake](media/cmake-bullet3-output-window.png)

   Al termine dell'operazione, IntelliSense viene configurato. È possibile compilare il progetto ed eseguire il debug dell'applicazione. Visual Studio ora mostra una visualizzazione logica della soluzione, in base alle destinazioni specificate nel CMakeLists file.

1. Usare il pulsante **Soluzioni e cartelle** in **Esplora soluzioni** per passare alla visualizzazione delle destinazioni CMake.

   ![Pulsante Soluzioni e cartelle in Esplora soluzioni per passare alla visualizzazione delle destinazioni CMake](media/cmake-bullet3-show-targets.png)

   Per Bullet SDK la visualizzazione sarà la seguente:

   ![Visualizzazione destinazioni CMake di Esplora soluzioni](media/cmake-bullet3-targets-view.png)

   La visualizzazione delle destinazioni offre una visualizzazione più intuitiva del contenuto della base di origine. È possibile osservare che alcune destinazioni sono librerie e altri sono file eseguibili.

1. Espandere un nodo nella visualizzazione delle destinazioni CMake per visualizzare i file del codice sorgente, indipendentemente dal percorso dei file nel disco.

## <a name="add-an-explicit-windows-x64-debug-configuration"></a>Aggiungere una configurazione x64-Debug Windows esplicita

Visual Studio crea una configurazione x64-Debug predefinita per Windows.Visual Studio creates a default **x64-Debug** configuration for Windows. Le configurazioni indicano a Visual Studio la piattaforma di destinazione da usare per CMake. La configurazione predefinita non è rappresentata nel disco. Quando si aggiunge in modo esplicito una configurazione, Visual Studio crea un file denominato *CMakeSettings.json*. Viene popolato con le impostazioni per tutte le configurazioni specificate.

1. Aggiungere una nuova configurazione. Aprire l'elenco a discesa **Configurazione** nella barra degli strumenti e selezionare **Gestisci configurazioni**.

   ![Elenco a discesa Gestisci configurazioni](media/cmake-bullet3-manage-configurations.png)

   Viene aperto [l'Editor impostazioni di CMake.](customize-cmake-settings.md) Selezionare il segno più verde sul lato sinistro dell'editor per aggiungere una nuova configurazione. Viene visualizzata la finestra di dialogo **Aggiungi configurazione a CMakeSettings.**

   ![Finestra di dialogo Aggiungi configurazione a CMakeSettings](media/cmake-bullet3-add-configuration-x64-debug.png)

   Questa finestra di dialogo mostra tutte le configurazioni incluse in Visual Studio, oltre a tutte le configurazioni personalizzate create. Se si desidera continuare a utilizzare una configurazione **x64-Debug,** che dovrebbe essere il primo che si aggiunge. Selezionare **x64-Debug**, quindi scegliere il pulsante **Seleziona** . Visual Studio crea il file CMakeSettings.json con una configurazione per **x64-Debug**e lo salva su disco. È possibile impostare il nome desiderato per le configurazioni modificando il parametro name direttamente in CMakeSettings.json.

## <a name="set-a-breakpoint-build-and-run-on-windows"></a>Impostare un punto di interruzione, compilare ed eseguire in WindowsSet a breakpoint, build, and run on Windows

In questo passaggio verrà eseguito il debug di un programma di esempio che illustra la libreria Bullet Physics.
  
1. In **Esplora soluzioni** selezionare AppBasicExampleGui ed espanderlo.

1. Aprire il file `BasicExample.cpp`.

1. Impostare un punto di interruzione che viene raggiunto quando si fa clic nell'applicazione in esecuzione. L'evento Click è gestito in un metodo all'interno di una classe helper. Per passare rapidamente al punto specifico:

   1. Selezionare `CommonRigidBodyBase` da `BasicExample` cui deriva lo struct. È intorno alla linea 30.

   1. Fare clic con il pulsante destro del mouse e scegliere **Vai a definizione**. Ora sei nell'intestazione CommonRigidBodyBase.h.

   1. Nella visualizzazione del browser sopra la sorgente, si `CommonRigidBodyBase`dovrebbe vedere che ci si'è nel . A destra è possibile selezionare i membri da esaminare. Aprire l'elenco a `mouseButtonCallback` discesa e selezionare per passare alla definizione di tale funzione nell'intestazione.

      ![Barra degli strumenti dell'elenco dei membri di Visual Studio](media/cmake-bullet3-member-list-toolbar.png)

1. Inserire un punto di interruzione nella prima riga all'interno della funzione. Viene visualizzato quando si fa clic su un pulsante del mouse all'interno della finestra dell'applicazione, quando viene eseguito nel debugger di Visual Studio.

1. Per avviare l'applicazione, selezionare l'elenco a discesa di avvio nella barra degli strumenti. È quello con l'icona di riproduzione verde che dice "Seleziona elemento di avvio". Nell'elenco a discesa selezionare AppBasicExampleGui.exe. Il nome dell'eseguibile è ora visibile sul pulsante di avvio:

   ![Elenco a discesa di avvio della barra degli strumenti di Visual Studio per Seleziona elemento di avvio](media/cmake-bullet3-launch-button.png)

1. Scegliere il pulsante di avvio per compilare l'applicazione e le dipendenze necessarie, quindi avviarlo con il debugger di Visual Studio collegato. Dopo alcuni istanti viene visualizzata l'applicazione in esecuzione:

   ![Debug di un'applicazione Windows in Visual Studio](media/cmake-bullet3-launched.png)

1. Spostare il puntatore del mouse nella finestra dell'applicazione, quindi fare clic su un pulsante per attivare il punto di interruzione. Il punto di interruzione riporta Visual Studio in primo piano e l'editor mostra la riga in cui viene sospesa l'esecuzione. È possibile esaminare le variabili dell'applicazione, gli oggetti, i thread e la memoria oppure eseguire il codice in modo interattivo. Scegliere **Continua** per consentire la riattivazione dell'applicazione e quindi chiuderla normalmente. In alternativa, interrompere l'esecuzione all'interno di Visual Studio utilizzando il pulsante di arresto.

## <a name="add-a-linux-configuration-and-connect-to-the-remote-machine"></a>Aggiungere una configurazione Linux e connettersi al computer remoto

1. Aggiungere una configurazione Linux.Add a Linux configuration. Fare clic con il pulsante destro del mouse sul file CMakeSettings.json in **Esplora soluzioni** e selezionare **Aggiungi configurazione**. Viene visualizzata la finestra di dialogo Aggiungi configurazione a CMakeSettings descritta in precedenza. Selezionare **Linux-Debug** questa volta, quindi salvare il file CMakeSettings.json (ctrl

1. Selezionare **Linux-Debug** nell'elenco a discesa di configurazione.

   ![Elenco a discesa di avvio delle configurazioni con le opzioni X64-Debug e Linux-Debug](media/cmake-bullet3-linux-configuration-item.png)

   Se è la prima volta che ci si connette a un sistema Linux, viene visualizzata la finestra di dialogo **Connetti al sistema remoto.**

   ![Finestra di dialogo Connetti a sistema remoto di Visual Studio](media/cmake-bullet3-connection-manager.png)

   Se è già stata aggiunta una connessione remota, è possibile aprire questa finestra passando a **Strumenti > Opzioni > Multipiattaforma > Connection Manager**.

1. Fornire le [informazioni di connessione al computer Linux](/cpp/linux/connect-to-your-remote-linux-computer) e scegliere **Connetti**. Visual Studio aggiunge tale computer come CMakeSettings.json come connessione predefinita per **Linux-Debug**. Inoltre, estrae le intestazioni dal computer remoto, in modo da ottenere [IntelliSense specifico per tale connessione remota.](/cpp/linux/configure-a-linux-project?view=vs-2019#remote_intellisense) Successivamente, Visual Studio invia i file al computer remoto e genera la cache CMake nel sistema remoto. Questi passaggi possono richiedere del tempo, a seconda della velocità della rete e dell'alimentazione del computer remoto. Saprai che è completo quando il messaggio "Estrazione delle informazioni di destinazione completata" viene visualizzato nella finestra di output di CMake.

## <a name="set-a-breakpoint-build-and-run-on-linux"></a>Impostare un punto di interruzione, compilare ed eseguire su LinuxSet a breakpoint, build, and run on Linux

Poiché si tratta di un'applicazione desktop, è necessario fornire alcune informazioni di configurazione aggiuntive per la configurazione di debug.

1. Nella visualizzazione Destinazioni CMake fare clic con il pulsante destro del mouse su AppBasicExampleGui e **scegliere Impostazioni di debug e avvio** per aprire il file launch.vs.json nella sottocartella **vs** nascosta. Il file è un file locale dell'ambiente di sviluppo. È possibile spostarlo nella radice del progetto se si vuole archiviarlo e salvarlo con il team. In this file, a configuration has been added for AppBasicExampleGui. Queste impostazioni predefinite funzionano nella maggior parte dei casi, ma non qui. Poiché si tratta di un'applicazione desktop, è necessario fornire alcune informazioni aggiuntive per avviare il programma in modo da poterlo vedere sulla macchina Linux.

1. Per trovare il valore `DISPLAY` della variabile di ambiente nel computer Linux, eseguire questo comando:

   ```cmd
   echo $DISPLAY
   ```

   Nella configurazione per AppBasicExampleGui è presente una matrice di parametri, "pipeArgs". Contiene una riga: "'debuggerCommand'". È il comando che avvia gdb sul computer remoto. Visual Studio deve esportare la visualizzazione in questo contesto prima dell'esecuzione del comando. Ad esempio, se il valore `:1`della visualizzazione è , modificare tale riga come segue:

   ```cmd
   "export DISPLAY=:1;${debuggerCommand}",
   ```

1. Avviare ed eseguire il debug dell'applicazione. Aprire l'elenco a discesa Seleziona elemento di **avvio** nella barra degli strumenti e scegliere **AppBasicExampleGui**. Successivamente, scegliere l'icona di riproduzione verde nella barra degli strumenti o premere **F5**. L'applicazione e le relative dipendenze vengono compilate nel computer Linux remoto, quindi avviate con il debugger di Visual Studio collegato. Nel computer Linux remoto verrà visualizzata una finestra dell'applicazione.

1. Spostare il mouse nella finestra dell'applicazione e fare clic su un pulsante. Il punto di interruzione viene raggiunto. L'esecuzione del programma viene sospesa, Visual Studio torna in primo piano e viene visualizzato il punto di interruzione. Viene visualizzata anche una finestra della console Linux in Visual Studio. La finestra fornisce l'output dalla macchina Linux remota `stdin`e può anche accettare l'input per . Come qualsiasi finestra di Visual Studio, è possibile ancorarla dove si preferisce visualizzarla. La sua posizione è perseverata nelle sessioni future.

   ![Finestra della console Linux in Visual Studio](media/cmake-bullet3-linux-console.png)

1. È possibile esaminare le variabili, gli oggetti, i thread, la memoria dell'applicazione e analizzare il codice in modo interattivo usando Visual Studio. Ma questa volta, si sta facendo tutto su un computer Linux remoto invece del vostro ambiente Windows locale. È possibile scegliere **Continua** per consentire all'applicazione di riprendere e uscire normalmente oppure è possibile scegliere il pulsante di arresto, come con l'esecuzione locale.

1. Nella finestra Stack di chiamate osservare le Chiamate a `x11OpenGLWindow` effettuate dal momento in cui Visual Studio ha avviato l'applicazione in Linux.

   ![Finestra Stack di chiamate che mostra lo stack di chiamate Linux](media/cmake-bullet3-linux-callstack.png)

## <a name="what-you-learned"></a>Conoscenze acquisite

In this tutorial, you cloned a code base directly from GitHub. È stato compilato, eseguito e ne è stato eseguito il debug in Windows senza modifiche. È quindi stata utilizzata la stessa base di codice, con modifiche di configurazione minori, per compilare, eseguire ed eseguire il debug in un computer Linux remoto.

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
