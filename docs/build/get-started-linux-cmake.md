---
title: Creare progetti multipiattaforma C++ in Visual Studio
description: Questa esercitazione illustra come configurare, compilare ed eseguire il debug di un progetto CMake open source di C++ in Visual Studio che ha come destinazione sia Windows che Linux.
author: mikeblome
ms.topic: tutorial
ms.date: 03/05/2019
ms.openlocfilehash: deb2c91d6d09d8945e5eb57a7ac742c5b1705e83
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57825314"
---
# <a name="tutorial-create-c-cross-platform-projects-in-visual-studio"></a>Esercitazione: Creare progetti multipiattaforma C++ in Visual Studio 

Sviluppo di Visual Studio C e C++ non è più solo per Windows. Questa esercitazione illustra come usare Visual Studio per C++ lo sviluppo multipiattaforma basato su CMake senza la necessità di creare o generare i progetti di Visual Studio. Quando si apre una cartella che contiene un file cmakelists. txt, Visual Studio consente di configurare le impostazioni di compilazione e IntelliSense automaticamente. Si rapidamente può essere la modifica, la compilazione e debug del codice in locale in Windows e quindi passare la configurazione allo stesso scopo in Linux, tutto da Visual Studio.

In questa esercitazione si imparerà a:

> [!div class="checklist"]
> * clonare un progetto CMake open source da GitHub
> * Aprire il progetto in Visual Studio 
> * compilare ed eseguire il debug di una destinazione eseguibile su Windows
> * aggiungere una connessione a un computer Linux
> * compilare ed eseguire il debug la stessa destinazione in Linux

## <a name="prerequisites"></a>Prerequisiti

- Configurazione di Visual Studio per sviluppo C++ multipiattaforma
    - Prima di tutto è necessario disporre [installato Visual Studio](https://visualstudio.microsoft.com/vs/). Successivamente, verificare di avere il **sviluppo di applicazioni Desktop con C++** e **sviluppo di applicazioni Linux con carichi di lavoro C++** installato. Questa installazione minimo è solo di 3 GB, a seconda del download installazione velocità non dovrebbe richiedere più di 10 minuti.
- Configurare un computer Linux per sviluppo C++ multipiattaforma
    - Visual Studio non richiede che qualsiasi distribuzione di Linux specifica. Il sistema operativo può essere eseguiti in un computer fisico, in una macchina virtuale, sul cloud o il sottosistema Windows per Linux (WSL). Tuttavia, per questa esercitazione un ambiente grafico è obbligatorio. di conseguenza WSL non è consigliato poiché è destinato principalmente per operazioni dalla riga di comando.
    - Gli strumenti di Visual Studio è necessario nel computer Linux sono: I compilatori C++, GDB, ssh e zip. Nei sistemi basati su Debian, è possibile installare queste dipendenze come indicato di seguito.
    
    ```cmd
        sudo apt install -y openssh-server build-essential gdb zip
    ```
    - Visual Studio richiede che il computer Linux installata una versione recente di CMake con modalità server abilitata (almeno 3,8). Microsoft produce una compilazione universale di CMake che è possibile installare in qualsiasi distribuzione Linux. È consigliabile usare questa compilazione per assicurarsi di avere le funzionalità più recenti. È possibile ottenere i file binari di CMake dalla [fork di Microsoft del repository CMake](https://github.com/Microsoft/CMake/releases) su GitHub. Passare alla pagina e scaricare la versione corrispondente all'architettura di sistema nel computer Linux e quindi lo segnala con un file eseguibile:
    
    ```cmd
        wget <path to binary>
        chmod +x cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh
    ```
    - È possibile visualizzare le opzioni per l'esecuzione dello script con `-–help`. È consigliabile usare la `–prefix` opzione per specificare l'installazione nel **usr/local** percorso perché questo è il percorso predefinito in cui Visual Studio cerca CMake. Nell'esempio seguente viene illustrato lo script di Linux-x86_64. Modificarlo in base alle esigenze se si usa una piattaforma di destinazione diverso. 
    
    ```cmd
        sudo ./cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh --skip-license --prefix=/usr/local
    ```
- GIT per windows installato nel computer Windows.
- Un account GitHub.

## <a name="clone-an-open-source-cmake-project-from-github"></a>Clonare un progetto CMake open source da GitHub

Questa esercitazione Usa il SDK di fisica Bullet su GitHub, che offre rilevamento delle collisioni e simulazioni fisica per un'ampia gamma di applicazioni diverse. Include i programmi eseguibili di esempio che compilare ed eseguire senza dover scrivere codice aggiuntivo. Questa esercitazione non modificare qualsiasi codice sorgente o gli script di compilazione. Per iniziare, clonare il bullet3 repository di GitHub nel computer in cui è installato Visual Studio. 

```cmd

git clone https://github.com/bulletphysics/bullet3.git

```

1. Dal menu principale di Visual Studio, scegliere **File > Apri > CMake** e passare al file cmakelists. txt nella radice del repository bullet3 appena scaricato.

    ![Menu di Visual Studio per il File > Apri > CMake](media/cmake-open-cmake.png)

    Non appena si apre la cartella, la struttura di cartelle saranno visibile nel **Esplora soluzioni**.

    ![Visualizzazione cartelle di Esplora soluzioni di Visual Studio](media/cmake-bullet3-solution-explorer.png)

    In questa vista viene illustrato che cos'è esattamente su disco, non una vista logica o filtrato. Per impostazione predefinita, non visualizza i file nascosti. 

2. Premere il **Mostra tutti i file** pulsante per visualizzare tutti i file nella cartella.

    ![Pulsante di Visual Studio Explorer Mostra tutti i file di soluzione](media/cmake-bullet3-show-all-files.png)

## <a name="switch-to-targets-view"></a>Passare alla visualizzazione delle destinazioni

Quando si apre una cartella che usa CMake, Visual Studio genera automaticamente la cache di CMake. Questa operazione potrebbe richiedere alcuni istanti, a seconda delle dimensioni del progetto. 

1. Nel **finestra di Output**, selezionare **Mostra output di** e quindi scegliere **CMake** per monitorare lo stato del processo di generazione della cache. Una volta completata l'operazione, verrà visualizzato il numero "Estrazione delle informazioni sulle destinazione eseguito".

    ![Finestra di Visual Studio Output che Mostra output da CMake](media/cmake-bullet3-output-window.png)

    Al termine di questa operazione, IntelliSense è configurato, può compilare il progetto ed è possibile eseguire il debug dell'applicazione. Visual Studio è ora possibile fornire una vista logica della soluzione in base a destinazioni specificate nei file di elenchi Cmakelist. 

2. Usare la **soluzioni e cartelle** pulsante il **Esplora soluzioni** per passare alla visualizzazione destinazioni CMake.

    ![Pulsante di soluzioni e cartelle in Esplora soluzioni per mostrare CMake è destinato a vista](media/cmake-bullet3-show-targets.png)

    Ecco quali tale visualizzazione simile per il SDK di punto elenco:

    ![Visualizzazione destinazioni CMake di Esplora soluzioni](media/cmake-bullet3-targets-view.png)

    Visualizzazione delle destinazioni fornisce una vista più intuitiva delle novità in questa base di origine. È possibile visualizzare alcune destinazioni librerie e altri sono file eseguibili. 

3. Espandere un nodo nella visualizzazione di destinazioni CMake per vedere i file del codice sorgente, ogni volta che tali file potrebbero essere presenti nel disco.

## <a name="set-a-breakpoint-build-and-run"></a>Impostare un punto di interruzione, compila ed Esegui

In questo passaggio, si sarà eseguire il debug di un programma di esempio che illustra la libreria fisica di punto elenco.
  
1. Nelle **Esplora soluzioni**, selezionare AppBasicExampleGui ed espanderlo. 
1. Aprire il file `BasicExample.cpp`. 
1. Impostare un punto di interruzione verrà raggiunto quando si fa clic nell'applicazione in esecuzione. In un metodo all'interno di una classe helper viene gestito l'evento click. Per ottenere rapidamente presenti:

    1. Selezionare `CommonRigidBodyBase` che lo struct `BasicExample` è derivato da intorno alla riga 30.
    1. Pulsante destro del mouse e scegliere **Vai a definizione**. A questo punto è nell'intestazione CommonRigidBodyBase.h. 
    1. Nella vista del browser in precedenza, l'origine si dovrebbe vedere che sei nel `CommonRigidBodyBase`. A destra, è possibile selezionare i membri da esaminare. Fare clic sul menu a discesa e selezionare `mouseButtonCallback` per passare alla definizione di funzione nell'intestazione.

        ![Barra degli strumenti di Visual Studio membro elenco](media/cmake-bullet3-member-list-toolbar.png)

1. Inserire un punto di interruzione sulla prima riga all'interno di questa funzione. Questo verrà raggiunto quando si fa clic su un pulsante del mouse all'interno della finestra dell'applicazione quando avviate nel debugger di Visual Studio.

1. Per avviare l'applicazione, selezionare l'elenco a discesa con l'icona di riproduzione con la dicitura "Seleziona avvio elemento" sulla barra degli strumenti di avvio. In AppBasicExampleGui.exe selezionare l'elenco a discesa. Visualizza ora il nome dell'eseguibile nel pulsante di avvio:

    ![Barra degli strumenti di Visual Studio avvia l'elenco a discesa per selezionare elemento di avvio](media/cmake-bullet3-launch-button.png)

5.  Premere il pulsante di avvio per compilare l'applicazione e le dipendenze necessarie, quindi avviarlo con il debugger di Visual Studio. Dopo alcuni istanti, viene visualizzata l'applicazione in esecuzione:

    ![Debug di un'applicazione Windows di Visual Studio](media/cmake-bullet3-launched.png)

6. Spostare il puntatore del mouse nella finestra dell'applicazione, quindi fare clic su un pulsante per attivare il punto di interruzione. Visual Studio verrà visualizzata nuovamente in primo piano con l'editor che mostra la riga in cui l'esecuzione viene sospesa. Sarà in grado di controllare le variabili di applicazione, gli oggetti, thread e memoria. È possibile esaminare il codice in modo interattivo. È possibile fare clic su **continuazione** per consentire all'applicazione di riprendere e uscire dall'attività normalmente o interrompere l'esecuzione all'interno di Visual Studio usando il pulsante di arresto.

## <a name="add-an-explicit-windows-x64-debug-configuration"></a>Aggiungere una configurazione esplicita di x64-Debug Windows

Finora è stato usato il valore predefinito **x64-Debug** configurazione per Windows. Le configurazioni sono modo in cui Visual Studio riconosce quale piattaforma di destinazione verrà utilizzato per CMake. La configurazione predefinita non viene rappresentata sul disco. Quando si aggiunge in modo esplicito una configurazione, Visual Studio crea un file denominato Cmakesettings popolato con le impostazioni per tutte le configurazioni specificate. 

1. Aggiungere una nuova configurazione, fare clic il la configurazione di elenco a discesa sulla barra degli strumenti e selezionando **Gestisci configurazioni...**

    ![Gestire la configurazione di elenco a discesa](media/cmake-bullet3-manage-configurations.png)

    Il **Aggiungi configurazione a CMakeSettings** nella finestra di dialogo.

    ![Aggiungi configurazione alla finestra di dialogo CMakeSettings](media/cmake-bullet3-add-configuration-x64-debug.png)

    Questa finestra di dialogo Mostra tutte le configurazioni che sono incluse con Visual Studio, nonché eventuali configurazioni personalizzate che è possibile creare. Se si desidera continuare a usare il valore predefinito **x64-Debug** configurazione, che deve essere il primo è aggiungere. Tramite l'aggiunta che la configurazione, sarà in grado di spostarsi avanti e indietro tra Windows e Linux le configurazioni. Selezionare **x64-Debug** e fare clic su **seleziona**. Ciò consente di creare il file Cmakesettings JSON con una configurazione per **x64-Debug** e passa a Visual Studio per usare tale configurazione anziché il valore predefinito. Verrà visualizzato l'elenco a discesa Configurazione non indicato non è più "(predefinito)" come parte del nome. È possibile usare qualsiasi nome desiderato per le configurazioni modificando il parametro name direttamente in Cmakesettings.

##  <a name="add-a-linux-configuration-and-connect-to-the-remote-machine"></a>Aggiungere una configurazione di Linux e connettersi al computer remoto

1. Ora aggiungere una configurazione di Linux. Fare doppio clic il file Cmakesettings JSON nel **Esplora soluzioni** consente di visualizzare e selezionare **Aggiungi configurazione**. Verrà visualizzata la stessa configurazione aggiungere alla finestra di dialogo CMakeSettings come prima. Selezionare **Linux-Debug** questa volta, quindi salvare il file Cmakesettings JSON. 
2. A questo punto selezionare **Linux-Debug** nella configurazione dell'elenco a discesa.

    ![Avvia Configurazione elenco a discesa con X64-Debug e le opzioni di Linux-Debug](media/cmake-bullet3-linux-configuration-item.png)

    Se questa è la prima volta che ci si connette a un sistema Linux, il **Connetti al sistema remoto** nella finestra di dialogo.

    ![Visual Studio Connect alla finestra di dialogo di sistema remoto](media/cmake-bullet3-connection-manager.png)

    Se è stato già aggiunto una connessione remota è possibile aprire questa finestra, passare a **strumenti > Opzioni > multipiattaforma > Gestione connessione**.
 
3. Specificare le informazioni di connessione al computer Linux, quindi scegliere **Connect**. Visual Studio aggiunge tale macchina per quanto riguarda Cmakesettings come predefinito per **Linux-Debug**. Inoltre acquisisce le intestazioni dal computer remoto che ottenere IntelliSense specifico per quel computer quando viene usata. Ora Visual Studio verrà inviare i file nel computer remoto, quindi generare la cache CMake presenti e al termine, Visual Studio verrà configurato per l'uso della stessa origine di base con computer Linux remoto. Questa procedura potrebbe richiedere alcuni minuti a seconda della velocità della rete e la potenza del computer remoto. Sarà possibile sapere che ciò è completa quando viene visualizzato il messaggio "Estrazione delle informazioni sulle destinazione eseguita" nella finestra di output di CMake.

## <a name="set-a-breakpoint-build-and-run-on-linux"></a>Impostare un punto di interruzione, compilare ed eseguire su Linux

Poiché si tratta di un'applicazione desktop, è necessario fornire alcune informazioni di configurazione aggiuntive per la configurazione di debug. 

1. Nella visualizzazione destinazioni CMake, fare doppio clic su AppBasicExampleGui e scegliere **impostazioni per Debug e avvio veloce** per aprire il file Launch in nascosto **VS** sottocartella. Questo file è locale rispetto all'ambiente di sviluppo. È possibile spostarlo nella radice del progetto se si desidera controllare e salvarlo con il tuo team. In questo file è stata aggiunta una configurazione per AppBasicExampleGui. Queste impostazioni predefinite funzionano nella maggior parte dei casi, ma poiché si tratta di un'applicazione desktop, che è necessario fornire alcune informazioni aggiuntive per avviare il programma in modo è possibile visualizzarlo nel computer Linux. 
2. È necessario conoscere il valore della variabile di ambiente `DISPLAY` nel computer Linux, eseguire questo comando per ottenerlo.

    ```cmd
    echo $DISPLAY
    ```

    Nella configurazione per AppBasicExampleGui è una matrice di parametri "pipeArgs". In questa posizione è una linea "${debuggerCommand}". Questo è il comando che consente di avviare gdb nel computer remoto. Visual Studio deve esportare la visualizzazione in questo contesto prima esecuzione del comando. Ad esempio, se il valore di visualizzazione: 1, modificare la riga come indicato di seguito:

    ```cmd
    "export DISPLAY=:1;${debuggerCommand}",
    ```
3. A questo punto per avviare ed eseguire il debug dell'applicazione, scegliere il **seleziona avvio elemento** elenco a discesa sulla barra degli strumenti e scegliere AppBasicExampleGui. A questo punto preme il pulsante o raggiunto **F5**. Questa impostazione crea l'applicazione e le relative dipendenze nel computer Linux remoto quindi avviarlo con il debugger di Visual Studio. I computer Linux remoto, si verrà visualizzato una finestra dell'applicazione.

4. Spostare il puntatore del mouse nella finestra dell'applicazione, fare clic su un pulsante e il punto di interruzione verrà raggiunto. Sospende l'esecuzione di programma, Visual Studio torna in primo piano e sarà possibile al punto di interruzione. È visualizzato anche una finestra della Console Linux vengono visualizzati in Visual Studio. Questa finestra viene fornito l'output dal computer Linux remoto e può anche accettare input per `stdin`. Come qualsiasi finestra di Visual Studio, può essere ancorata in cui si preferisce visualizzarlo e posizione verrà mantenuta nelle sessioni future.

    ![Finestra della Console di Linux di Visual Studio](media/cmake-bullet3-linux-console.png)

5. È possibile esaminare le variabili di applicazione, gli oggetti, thread, memoria e passaggio attraverso il codice in modo interattivo tramite Visual Studio. Ma questa volta si eseguono tutte queste operazioni in un computer Linux remoto anziché l'ambiente locale in Windows. È possibile fare clic su **continuazione** per consentire all'applicazione di riprendere e uscire in genere, oppure è possibile premere il pulsante di arresto, proprio come con l'esecuzione locale.

6. Esaminare la finestra Stack di chiamate e visualizzare le chiamate a `x11OpenGLWindow` poiché Visual Studio ha avviato l'applicazione in Linux.

    ![Chiamare finestra Stack di chiamate che mostra stack di chiamate di Linux](media/cmake-bullet3-linux-callstack.png)

## <a name="what-you-learned"></a>Quello che hai imparato 

In questa esercitazione è stato illustrato un codice di base clonato direttamente da GitHub e compilata, esecuzione e sottoposto a debug in Windows senza modifiche. Questa documentazione di base di codice, con modifiche minime alla configurazione, è stata compilata, eseguire e il debug in un computer Linux remoto. 

## <a name="next-steps"></a>Passaggi successivi

Altre informazioni sulla configurazione e debug di progetti CMake in Visual Studio:

> [!div class="nextstepaction"]
> [Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/><br/>
> [Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/><br/>
> [Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/><br/>
> [Personalizzare le impostazioni di compilazione di CMake](customize-cmake-settings.md)<br/><br/>
> [Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/><br/>
> [Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/><br/>
> [Riferimento di configurazione CMake predefinite](cmake-predefined-configuration-reference.md)
> 
