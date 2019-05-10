---
title: Creare progetti multipiattaforma C++ in Visual Studio
description: Questa esercitazione illustra come configurare, compilare ed eseguire il debug di un progetto CMake open source C++ in Visual Studio che ha come destinazione Linux e Windows.
author: mikeblome
ms.topic: tutorial
ms.date: 03/05/2019
ms.openlocfilehash: f184cc2ce3eaf3adcc936bd723019956b5b23dc9
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220854"
---
# <a name="tutorial-create-c-cross-platform-projects-in-visual-studio"></a>Esercitazione: Creare progetti multipiattaforma C++ in Visual Studio 

Lo sviluppo C e C++ di Visual Studio non è più limitato a Windows. Questa esercitazione illustra come usare Visual Studio per lo sviluppo multipiattaforma C++ basato su CMake senza la necessità di creare o generare progetti Visual Studio. Quando si apre una cartella contenente un file CMakeLists.txt, Visual Studio configura automaticamente IntelliSense e le impostazioni di compilazione. È possibile modificare, compilare ed eseguire rapidamente il debug del codice in locale in Windows e quindi passare a un'altra configurazione per eseguire le stesse operazioni in Linux, tutto all'interno di Visual Studio.

In questa esercitazione si imparerà a:

> [!div class="checklist"]
> * clonare un progetto CMake open source da GitHub
> * aprire il progetto in Visual Studio 
> * compilare ed eseguire il debug di una destinazione eseguibile in Windows
> * aggiungere una connessione a un computer Linux
> * compilare ed eseguire il debug della stessa destinazione in Linux

## <a name="prerequisites"></a>Prerequisiti

- Configurare Visual Studio per lo sviluppo C++ multipiattaforma
    - È necessario innanzitutto aver [installato Visual Studio](https://visualstudio.microsoft.com/vs/). Verificare quindi di aver installato i carichi di lavoro **Sviluppo di applicazioni desktop con C++** e **Sviluppo di applicazioni Linux con C++**. L'installazione minima è di soli 3 GB. A seconda della velocità di download, l'installazione non dovrebbe richiedere più di 10 minuti.
- Configurare un computer Linux per lo sviluppo C++ multipiattaforma
    - Visual Studio non richiede alcuna distribuzione specifica di Linux. Il sistema operativo può essere eseguito in un computer fisico, in una macchina virtuale, sul cloud o nel sottosistema Windows per Linux (WSL). Tuttavia, poiché per questa esercitazione è richiesto un ambiente grafico, non è consigliabile usare il sottosistema Windows per Linux (WSL) destinato principalmente alle operazioni dalla riga di comando.
    - Visual Studio richiede nel computer Linux gli strumenti seguenti: Compilatori C++, GDB, ssh e zip. Nei sistemi basati su Debian è possibile installare queste dipendenze come indicato di seguito.
    
    ```cmd
        sudo apt install -y openssh-server build-essential gdb zip
    ```
    - Visual Studio richiede che il computer Linux abbia installata una versione recente di CMake con modalità server abilitata (almeno la versione 3.8). Microsoft produce una build universale di CMake che è possibile installare in qualsiasi distribuzione Linux. È consigliabile usare questa build per assicurarsi di avere le funzionalità più recenti. È possibile ottenere i file binari di CMake dalla [fork Microsoft del repository CMake](https://github.com/Microsoft/CMake/releases) in GitHub. Passare alla pagina e scaricare la versione corrispondente all'architettura di sistema nel computer Linux, quindi contrassegnarla con eseguibile:
    
    ```cmd
        wget <path to binary>
        chmod +x cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh
    ```
    - È possibile visualizzare le opzioni per l'esecuzione dello script con `-–help`. È consigliabile usare l'opzione `–prefix` per specificare l'installazione nel percorso **/usr/local** che corrisponde al percorso predefinito in cui Visual Studio cerca CMake. L'esempio seguente illustra lo script Linux-x86_64. Modificare lo script come necessario se si usa una piattaforma di destinazione diversa. 
    
    ```cmd
        sudo ./cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh --skip-license --prefix=/usr/local
    ```
- GIT per Windows installato nel computer Windows.
- Account GitHub.

## <a name="clone-an-open-source-cmake-project-from-github"></a>Clonare un progetto CMake open source da GitHub

Questa esercitazione usa Bullet Physics SDK in GitHub che offre il rilevamento delle collisioni e simulazioni fisiche per un'ampia gamma di applicazioni. Include programmi eseguibili di esempio che vengono compilati ed eseguiti senza dover scrivere codice aggiuntivo. Questa esercitazione non modifica alcun codice sorgente o script di compilazione. Per iniziare, clonare il repository bullet3 di GitHub nel computer in cui è installato Visual Studio. 

```cmd

git clone https://github.com/bulletphysics/bullet3.git

```

1. Dal menu principale di Visual Studio, scegliere **File > Apri > CMake** e passare al file CMakeLists.txt nella radice del repository bullet3 appena scaricato.

    ![Menu di Visual Studio per il File > Apri > CMake](media/cmake-open-cmake.png)

    Non appena si apre la cartella, la struttura di cartelle sarà visibile in **Esplora soluzioni**.

    ![Visualizzazione delle cartelle di Esplora soluzioni in Visual Studio](media/cmake-bullet3-solution-explorer.png)

    Questa visualizzazione mostra esattamente gli elementi presenti nel disco. Non si tratta di una visualizzazione logica o filtrata. Per impostazione predefinita, la visualizzazione non mostra i file nascosti. 

2. Fare clic sul pulsante **Mostra tutti i file** per visualizzare tutti i file nella cartella.

    ![Pulsante Mostra tutti i file di Esplora soluzioni in Visual Studio](media/cmake-bullet3-show-all-files.png)

## <a name="switch-to-targets-view"></a>Passare alla visualizzazione delle destinazioni

Quando si apre una cartella che usa CMake, Visual Studio genera automaticamente la cache di CMake. Questa operazione potrebbe richiedere alcuni istanti, a seconda delle dimensioni del progetto. 

1. Nella **finestra di output** selezionare **Mostra output di** e quindi scegliere **CMake** per monitorare lo stato del processo di generazione della cache. Quando l'operazione è stata completata, viene visualizzato il messaggio "L'estrazione delle informazioni sulle destinazioni è stata completata".

    ![Finestra di output di Visual Studio che mostra l'output di CMake](media/cmake-bullet3-output-window.png)

    Al termine di questa operazione, viene configurato IntelliSense, il progetto può essere compilato ed è possibile eseguire il debug dell'applicazione. Visual Studio può ora offrire una visualizzazione logica della soluzione basata sulle destinazioni specificate nei file CMakeLists. 

2. Usare il pulsante **Soluzioni e cartelle** in **Esplora soluzioni** per passare alla visualizzazione delle destinazioni CMake.

    ![Pulsante Soluzioni e cartelle in Esplora soluzioni per passare alla visualizzazione delle destinazioni CMake](media/cmake-bullet3-show-targets.png)

    Per Bullet SDK la visualizzazione sarà la seguente:

    ![Visualizzazione destinazioni CMake di Esplora soluzioni](media/cmake-bullet3-targets-view.png)

    La visualizzazione delle destinazioni offre una visualizzazione più intuitiva del contenuto della base di origine. È possibile osservare che alcune destinazioni sono librerie e altri sono file eseguibili. 

3. Espandere un nodo nella visualizzazione delle destinazioni CMake per visualizzare i file del codice sorgente, indipendentemente dal percorso dei file nel disco.

## <a name="set-a-breakpoint-build-and-run"></a>Impostare un punto di interruzione, compilare ed eseguire

In questo passaggio verrà eseguito il debug di un programma di esempio che illustra la libreria Bullet Physics.
  
1. In **Esplora soluzioni** selezionare AppBasicExampleGui ed espanderlo. 
1. Aprire il file `BasicExample.cpp`. 
1. Impostare un punto di interruzione che verrà raggiunto quando si fa clic nell'applicazione in esecuzione. L'evento Click è gestito in un metodo all'interno di una classe helper. Per passare rapidamente al punto specifico:

    1. Selezionare `CommonRigidBodyBase` da cui deriva lo struct `BasicExample` in prossimità della riga 30.
    1. Fare clic con il pulsante destro del mouse e scegliere **Vai a definizione**. È stata raggiunta l'intestazione CommonRigidBodyBase.h. 
    1. Nella visualizzazione precedente del browser è possibile osservare di trovarsi in `CommonRigidBodyBase`. A destra è possibile selezionare i membri da esaminare. Fare clic sull'elenco a discesa e selezionare `mouseButtonCallback` per passare alla definizione della funzione nell'intestazione.

        ![Barra degli strumenti dell'elenco dei membri di Visual Studio](media/cmake-bullet3-member-list-toolbar.png)

1. Inserire un punto di interruzione nella prima riga all'interno della funzione. Il punto di interruzione verrà raggiunto quando si fa clic all'interno della finestra dell'applicazione avviata nel debugger di Visual Studio.

1. Per avviare l'applicazione, selezionare l'elenco a discesa di avvio con l'icona di riproduzione e la descrizione "Seleziona elemento di avvio" sulla barra degli strumenti. Nell'elenco a discesa selezionare AppBasicExampleGui.exe. Il nome dell'eseguibile è ora visibile sul pulsante di avvio:

    ![Elenco a discesa di avvio della barra degli strumenti di Visual Studio per Seleziona elemento di avvio](media/cmake-bullet3-launch-button.png)

5.  Fare clic sul pulsante di avvio per compilare l'applicazione e le dipendenze necessarie, quindi avviarla con il debugger di Visual Studio. Dopo alcuni istanti viene visualizzata l'applicazione in esecuzione:

    ![Debug di un'applicazione Windows in Visual Studio](media/cmake-bullet3-launched.png)

6. Spostare il puntatore del mouse nella finestra dell'applicazione, quindi fare clic su un pulsante per attivare il punto di interruzione. Visual Studio viene nuovamente visualizzato in primo piano con l'editor che mostra la riga in cui l'esecuzione è sospesa. È possibile controllare le variabili, gli oggetti, i thread e la memoria dell'applicazione. È possibile esaminare il codice in modo interattivo. Fare clic su **Continua** per riprendere l'esecuzione dell'applicazione e chiuderla normalmente o interrompere l'esecuzione all'interno di Visual Studio usando il pulsante di interruzione.

## <a name="add-an-explicit-windows-x64-debug-configuration"></a>Aggiungere una configurazione x64-Debug Windows esplicita

Finora è stata usata la configurazione predefinita **x64-Debug** per Windows. Le configurazioni indicano a Visual Studio la piattaforma di destinazione da usare per CMake. La configurazione predefinita non è rappresentata nel disco. Quando si aggiunge in modo esplicito una configurazione, Visual Studio crea un file denominato CMakeSettings.json popolato con le impostazioni per tutte le configurazioni specificate. 

1. Aggiungere una nuova configurazione facendo clic sull'elenco a discesa Configurazione nella barra degli strumenti e selezionare **Gestisci configurazioni**

    ![Elenco a discesa Gestisci configurazioni](media/cmake-bullet3-manage-configurations.png)

    Viene visualizzata la finestra di dialogo **Aggiungi configurazione a CMakeSettings**.

    ![Finestra di dialogo Aggiungi configurazione a CMakeSettings](media/cmake-bullet3-add-configuration-x64-debug.png)

    Questa finestra di dialogo mostra tutte le configurazioni incluse in Visual Studio nonché eventuali configurazioni personalizzate che è possibile creare. Se si vuole continuare a usare la configurazione predefinita **x64-Debug**, aggiungerla per prima. L'aggiunta della configurazione consentirà di passare da una configurazione Windows a una configurazione Linux e viceversa. Selezionare **x64-Debug** e fare clic su **Seleziona**. Viene creato il file CMakeSettings.json con una configurazione per **x64-Debug** e viene visualizzato Visual Studio in modo che venga usata quella configurazione anziché la configurazione predefinita. Sarà possibile osservare che l'elenco a discesa delle configurazioni non include più "(predefinito)" nel nome. È possibile impostare il nome desiderato per le configurazioni modificando il parametro name direttamente in CMakeSettings.json.

##  <a name="add-a-linux-configuration-and-connect-to-the-remote-machine"></a>Aggiungere una configurazione Linux e connettersi al computer remoto

1. Aggiungere ora una configurazione Linux. Fare clic con il pulsante destro del mouse sul file CMakeSettings.json in **Esplora soluzioni** e selezionare **Aggiungi configurazione**. Viene visualizzata la finestra di dialogo Aggiungi configurazione a CMakeSettings descritta in precedenza. Selezionare **Linux-Debug**, quindi salvare il file CMakeSettings.json. 
2. A questo punto selezionare **Linux-Debug** nell'elenco a discesa delle configurazioni.

    ![Elenco a discesa di avvio delle configurazioni con le opzioni X64-Debug e Linux-Debug](media/cmake-bullet3-linux-configuration-item.png)

    Se è la prima volta che ci si connette a un sistema Linux, viene visualizzata la finestra di dialogo **Connetti a sistema remoto**.

    ![Finestra di dialogo Connetti a sistema remoto di Visual Studio](media/cmake-bullet3-connection-manager.png)

    Se è già stata aggiunta una connessione remota è possibile aprire questa finestra scegliendo **Strumenti > Opzioni > Multipiattaforma > Gestione connessioni**.
 
3. Specificare le informazioni di connessione per il computer Linux e fare clic su **Connetti**. Visual Studio aggiunge il computer in CMakeSettings.json come impostazione predefinita per **Linux-Debug**. Visual Studio scarica anche le intestazioni dal computer remoto per ottenere IntelliSense specifico per il computer. Visual Studio invierà i file al computer remoto dove genererà la cache di CMake. Visual Studio verrà quindi configurato per l'uso della stessa base di origine con il computer Linux remoto. Queste operazioni possono richiedere alcuni minuti, a seconda della velocità della rete e della potenza del computer remoto. Le operazioni saranno completate quando verrà visualizzato il messaggio "L'estrazione delle informazioni sulle destinazioni è stata completata" nella finestra di output di CMake.

## <a name="set-a-breakpoint-build-and-run-on-linux"></a>Impostare un punto di interruzione, compilare ed eseguire in Linux

Poiché si tratta di un'applicazione desktop, è necessario specificare alcune informazioni di configurazione aggiuntive per la configurazione di debug. 

1. Nella visualizzazione delle destinazioni CMake fare clic con il pulsante destro del mouse su AppBasicExampleGui e scegliere **Impostazioni per debug e avvio** per aprire il file launch.vs.json contenuto nella sottocartella **.vs** nascosta. Il file è un file locale dell'ambiente di sviluppo. È possibile spostarlo nella radice del progetto se si vuole archiviarlo e salvarlo con il team. In questo file è stata aggiunta una configurazione per AppBasicExampleGui. Queste impostazioni predefinite sono adatte alla maggior parte dei casi, ma poiché si tratta di un'applicazione desktop è necessario specificare alcune informazioni aggiuntive per avviare il programma in modo che sia visibile nel computer Linux. 
2. Poiché è necessario conoscere il valore della variabile di ambiente `DISPLAY` nel computer Linux, eseguire questo comando per ottenerla.

    ```cmd
    echo $DISPLAY
    ```

    Nella configurazione per AppBasicExampleGui è inclusa una matrice di parametri "pipeArgs". All'interno della matrice è presente una riga "${debuggerCommand}". Questo è il comando che avvia gdb nel computer remoto. Visual Studio deve esportare la visualizzazione in questo contesto prima dell'esecuzione del comando. Ad esempio, se il valore della visualizzazione è :1, modificare la riga come indicato di seguito:

    ```cmd
    "export DISPLAY=:1;${debuggerCommand}",
    ```
3. A questo punto per avviare ed eseguire il debug dell'applicazione, scegliere l'elenco a discesa **Seleziona elemento di avvio** nella barra degli strumenti e scegliere AppBasicExampleGui. A questo punto fare clic sul pulsante o premere **F5**. L'applicazione e le relative dipendenze verranno compilate nel computer Linux remoto. Avviare l'applicazione con il debugger di Visual Studio. Nel computer Linux remoto verrà visualizzata una finestra dell'applicazione.

4. Spostare il puntatore del mouse nella finestra dell'applicazione, quindi fare clic su un pulsante per raggiungere il punto di interruzione. L'esecuzione del programma viene sospesa, Visual Studio torna in primo piano e viene raggiunto il punto di interruzione. Viene visualizzata anche una finestra della console Linux in Visual Studio. La finestra fornisce l'output del computer Linux remoto e accetta anche l'input per `stdin`. Come tutte le finestre di Visual Studio, la finestra può essere ancorata nella posizione desiderata e la sua posizione viene mantenuta nelle sessioni future.

    ![Finestra della console Linux in Visual Studio](media/cmake-bullet3-linux-console.png)

5. È possibile esaminare le variabili, gli oggetti, i thread, la memoria dell'applicazione e analizzare il codice in modo interattivo usando Visual Studio. Tuttavia, tutte queste operazioni possono essere eseguite ora in un computer Linux remoto anziché nell'ambiente Windows locale. È possibile fare clic su **Continua** per riprendere l'esecuzione dell'applicazione e chiuderla normalmente oppure usare il pulsante di interruzione come nell'esecuzione locale.

6. Nella finestra Stack di chiamate osservare le Chiamate a `x11OpenGLWindow` effettuate dal momento in cui Visual Studio ha avviato l'applicazione in Linux.

    ![Finestra Stack di chiamate che mostra lo stack di chiamate Linux](media/cmake-bullet3-linux-callstack.png)

## <a name="what-you-learned"></a>Conoscenze acquisite 

In questa esercitazione è stato illustrato un codice di base clonato direttamente da GitHub e compilato, eseguito e sottoposto a debug in Windows senza apportare alcuna modifica. Il codice di base, con modifiche minime alla configurazione, è stato compilato, eseguito e sottoposto a debug in un computer Linux remoto. 

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
