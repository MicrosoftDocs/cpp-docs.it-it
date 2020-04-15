---
title: Installare il carico di lavoro Linux C++ in Visual Studio
description: Descrive come scaricare, installare e configurare il carico di lavoro Linux per C++ in Visual Studio.
ms.date: 06/11/2019
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
ms.openlocfilehash: 8e10521ab35f3d85ced8bffd771b4e101d4d4fe6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364336"
---
# <a name="download-install-and-set-up-the-linux-workload"></a>Scaricare, installare e configurare il carico di lavoro Linux

::: moniker range="vs-2015"

I progetti Linux sono supportati in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

È possibile utilizzare l'IDE di Visual Studio in Windows per creare, modificare ed eseguire il debug di progetti C , che vengono eseguiti in un sistema Linux remoto, in una macchina virtuale o nel [sottosistema Windows per Linux.](/windows/wsl/about)

È possibile lavorare sulla base di codice esistente che utilizza CMake senza doverlo convertire in un progetto di Visual Studio.You can work on your existing code base that uses CMake without having to convert it to a Visual Studio project. Se il codebase è multipiattaforma, è possibile scegliere sia Windows che Linux da Visual Studio. Ad esempio, è possibile modificare, compilare ed eseguire il debug del codice in Windows usando Visual Studio, quindi ridestinare rapidamente il progetto per Linux per compilare ed eseguire il debug in un ambiente Linux.For example, you can edit, build, and debug your code on Windows using Visual Studio, then quickly retarget the project for Linux to build and debug in a Linux environment. I file di intestazione Linux vengono copiati automaticamente nel computer locale, dove Visual Studio li usa per fornire il supporto IntelliSense completo (completamento istruzioni, Vai a definizione e così via).

Per questi scenari è necessario il carico di lavoro **Sviluppo di applicazioni Linux con C++**.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="visual-studio-setup"></a>Configurazione di Visual Studio

1. Digitare "Programma di installazione di Visual Studio" nella casella di ricerca di Windows:

   ![Casella di ricerca di Windows](media/visual-studio-installer-search.png)

1. Cercare il programma di installazione nei risultati **App** e farci doppio clic sopra. Quando si apre il programma di installazione, scegliere **Modifica**, **Other toolsets** quindi fare clic **Linux development with C++** sulla scheda **Carichi di** lavoro.

   ![Carico di lavoro Visual C++ per lo sviluppo di applicazioni Linux](media/linuxworkload.png)

1. Se la destinazione è IoT o piattaforme incorporate, passare al riquadro **Dettagli installazione** a destra. In **Sviluppo di Linux con il linguaggio C,** espandere Componenti **facoltativi**e scegliere i componenti necessari. Il supporto di CMake per Linux è selezionato per impostazione predefinita.

1. Fare clic su **Modifica** per continuare con l'installazione.

## <a name="options-for-creating-a-linux-environment"></a>Opzioni per la creazione di un ambiente Linux

Se non si ha già un computer Linux, è possibile creare una macchina virtuale Linux in Azure. Per altre informazioni, vedere [Guida introduttiva: Creare una macchina virtuale Linux nel portale di Azure](/azure/virtual-machines/linux/quick-create-portal).

In Windows 10 è possibile installare e impostare come destinazione la distribuzione Linux preferita nel sottosistema Windows per Linux (WSL). Per altre informazioni, vedere [Guida all'installazione del sottosistema Windows per Linux per Windows 10](/windows/wsl/install-win10). Se non riesci ad accedere a Windows Store, puoi [scaricare manualmente i pacchetti distro WSL.](/windows/wsl/install-manual) WSL è un ambiente di console pratico, ma non è consigliato per le applicazioni grafiche.

::: moniker-end

::: moniker range="vs-2019"

I progetti Linux in Visual Studio richiedono l'installazione delle dipendenze seguenti nel sistema Linux remoto o WSL:

- **Un compilatore** : Visual Studio 2019 dispone del supporto out-of-the-box per GCC e [Clang](/cpp/build/clang-support-cmake?view=vs-2019).
- **gdb:** Visual Studio avvia automaticamente gdb nel sistema Linux e usa il front-end del debugger di Visual Studio per fornire un'esperienza di debug con fedeltà completa in Linux.
- **rsync** e **zip** - l'inclusione di rsync e zip consente a Visual Studio di estrarre i file di intestazione dal sistema Linux al file system di Windows per l'utilizzo da parte di IntelliSense.
- **Fare**
- **openssh-server** (solo sistemi Linux remoti): Visual Studio si connette a sistemi Linux remoti tramite una connessione SSH sicura.
- **CMake** (solo progetti CMake) - È possibile installare i [file binari CMake collegati in modo statico](https://github.com/microsoft/CMake/releases)di Microsoft per Linux.
- **ninja-build** (solo progetti CMake)- [Ninja](https://ninja-build.org/) è il generatore predefinito per le configurazioni Linux e WSL in Visual Studio 2019 versione 16.6 o successiva.

I seguenti comandi presuppongono che si stia utilizzando g e clang.

::: moniker-end

::: moniker range="vs-2017"

I progetti Linux in Visual Studio richiedono l'installazione delle dipendenze seguenti nel sistema Linux remoto o WSL:

- **gcc** - Visual Studio 2017 include il supporto out-of-the-box per GCC.
- **gdb:** Visual Studio avvia automaticamente gdb nel sistema Linux e usa il front-end del debugger di Visual Studio per fornire un'esperienza di debug con fedeltà completa in Linux.
- **rsync** e **zip** - l'inclusione di rsync e zip consente a Visual Studio di estrarre i file di intestazione dal sistema Linux al file system di Windows da utilizzare per IntelliSense.
- **Fare**
- **openssh-server** - Visual Studio si connette a sistemi Linux remoti tramite una connessione SSH sicura.
- **CMake** (solo progetti CMake) - È possibile installare i [file binari CMake collegati in modo statico](https://github.com/microsoft/CMake/releases)di Microsoft per Linux.

::: moniker-end

::: moniker range="vs-2019"

## <a name="linux-setup-ubuntu-on-wsl"></a>Configurazione di Linux: Ubuntu su WSL

Quando si intende usare WSL, non è necessario aggiungere una connessione remota o configurare SSH per la compilazione e il debug. Per la sincronizzazione automatica delle intestazioni di Linux con Visual Studio per il supporto di Intellisense sono necessari **zip** e **rsync**. Se le applicazioni richieste non sono già presenti, è possibile installarle come segue. **ninja-build** è necessario solo per i progetti CMake.

```bash
sudo apt-get install g++ gdb make ninja-build rsync zip
```

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="ubuntu-on-remote-linux-systems"></a>Ubuntu nei sistemi Linux remoti

Il sistema Linux di destinazione deve avere **openssh-server**, **g,** **gdb**, **ninja-build** (solo progetti CMake) e **rendere** installato e il daemon ssh deve essere in esecuzione. **zip** e **rsync** sono necessari per la sincronizzazione automatica delle intestazioni remote con il computer locale per il supporto Intellisense. Se queste applicazioni non sono già presenti, è possibile installarle come indicato di seguito:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   ```bash
   sudo apt-get install openssh-server g++ gdb make ninja-build rsync zip
   ```

   È possibile che sia chiesta la password radice dato il comando sudo.  In questo caso, immetterla e continuare. Al termine, verranno installati gli strumenti e i servizi necessari.

1. Assicurarsi che il servizio ssh sia in esecuzione nel computer Linux eseguendo il comando seguente:

   ```bash
   sudo service ssh start
   ```

   Il servizio viene avviato ed eseguito in background, pronto per accettare le connessioni.

::: moniker-end

::: moniker range="vs-2019"

## <a name="fedora-on-wsl"></a>Fedora in WSL

Fedora usa il programma di installazione dei pacchetti **dnf**. Per scaricare il file **,** **gdb**, **make**, **rsync**, **ninja-build**e **zip**, eseguire:

   ```bash
   sudo dnf install gcc-g++ gdb rsync ninja-build make zip
   ```

Per la sincronizzazione automatica delle intestazioni di Linux con Visual Studio per il supporto di Intellisense sono necessari **zip** e **rsync**. **ninja-build** è necessario solo per i progetti CMake.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="fedora-on-remote-linux-systems"></a>Fedora nei sistemi Linux remoti

Il computer di destinazione che esegue Fedora usa il programma di installazione dei pacchetti **dnf**. Per scaricare **openssh-server**, **g,** **gdb**, **make**, **ninja-build**, **rsync**e **zip**e riavviare il daemon ssh , seguire queste istruzioni. **ninja-build** è necessario solo per i progetti CMake.

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   ```bash
   sudo dnf install openssh-server gcc-g++ gdb ninja-build make rsync zip
   ```

   È possibile che sia chiesta la password radice dato il comando sudo.  In questo caso, immetterla e continuare. Al termine, verranno installati gli strumenti e i servizi necessari.

1. Assicurarsi che il servizio ssh sia in esecuzione nel computer Linux eseguendo il comando seguente:

   ```bash
   sudo systemctl start sshd
   ```

   Il servizio viene avviato ed eseguito in background, pronto per accettare le connessioni.

::: moniker-end

::: moniker range="vs-2015"

Il supporto per lo sviluppo di Linux C++ è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

## <a name="next-steps"></a>Passaggi successivi

A questo punto si è pronti per creare o aprire un progetto Linux e configurarlo per l'esecuzione nel sistema di destinazione. Per altre informazioni, vedere:

- [Creare un nuovo progetto Linux](create-a-new-linux-project.md)
- [Configurare un progetto CMake per Linux](cmake-linux-project.md)
