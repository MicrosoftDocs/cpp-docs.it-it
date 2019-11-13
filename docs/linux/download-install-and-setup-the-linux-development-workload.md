---
title: Installare il carico di lavoro Linux C++ in Visual Studio
description: Descrive come scaricare, installare e configurare il carico di lavoro Linux per C++ in Visual Studio.
ms.date: 06/11/2019
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
ms.openlocfilehash: 1dad17756cbc12fdf65250b7c54314ff2a645287
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966204"
---
# <a name="download-install-and-set-up-the-linux-workload"></a>Scaricare, installare e configurare il carico di lavoro Linux

::: moniker range="vs-2015"

I progetti Linux sono supportati in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

È possibile usare l'IDE di Visual Studio in Windows per creare, modificare ed C++ eseguire il debug di progetti eseguiti in un sistema Linux remoto, in una macchina virtuale o nel [sottosistema Windows per Linux](/windows/wsl/about). 

È possibile lavorare sulla codebase esistente che usa CMake senza doverlo convertire in un progetto di Visual Studio. Se il codebase è multipiattaforma, è possibile scegliere sia Windows che Linux da Visual Studio. Ad esempio, è possibile modificare, compilare ed eseguire il debug del codice in Windows con Visual Studio, quindi ridestinare rapidamente il progetto per Linux per compilare ed eseguire il debug in un ambiente Linux. I file di intestazione di Linux vengono copiati automaticamente nel computer locale, in cui Visual Studio li usa per fornire supporto IntelliSense completo (completamento istruzioni, vai a definizione e così via). 
 
Per questi scenari è necessario il carico di lavoro **Sviluppo di applicazioni Linux con C++** . 

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="visual-studio-setup"></a>Configurazione di Visual Studio

1. Digitare "Programma di installazione di Visual Studio" nella casella di ricerca di Windows:

   ![Casella di ricerca di Windows](media/visual-studio-installer-search.png)

2. Cercare il programma di installazione nei risultati **App** e farci doppio clic sopra. Quando si apre il programma di installazione, scegliere **modifica**, quindi fare clic sulla scheda **carichi di lavoro** . scorrere verso il basso fino ad **altri set di strumenti** e selezionare lo sviluppo per **Linux con C++**  carico di lavoro.

   ![Carico di lavoro Visual C++ per lo sviluppo di applicazioni Linux](media/linuxworkload.png)

1. Se la destinazione è Internet delle cose o piattaforme incorporate, passare al riquadro dei **Dettagli di installazione** a destra. In **sviluppo Linux con C++** espandere **componenti facoltativi**e scegliere i componenti necessari. Il supporto di CMake per Linux è selezionato per impostazione predefinita.

1. Fare clic su **Modifica** per continuare con l'installazione.

## <a name="options-for-creating-a-linux-environment"></a>Opzioni per la creazione di un ambiente Linux

Se non si ha già un computer Linux, è possibile creare una macchina virtuale Linux in Azure. Per altre informazioni, vedere [Guida introduttiva: Creare una macchina virtuale Linux nel portale di Azure](/azure/virtual-machines/linux/quick-create-portal).

In Windows 10 è possibile installare e impostare come destinazione la distribuzione Linux preferita nel sottosistema Windows per Linux (WSL). Per altre informazioni, vedere [Guida all'installazione del sottosistema Windows per Linux per Windows 10](/windows/wsl/install-win10). Se non si è in grado di accedere a Windows Store, è possibile [scaricare manualmente i pacchetti di distribuzione WSL](/windows/wsl/install-manual). WSL è un ambiente console pratico, ma non è consigliato per le applicazioni grafiche.

::: moniker-end

::: moniker range="vs-2019"

Per i progetti Linux in Visual Studio è necessario che le dipendenze seguenti siano installate nel sistema Linux remoto o in WSL:

- **Un compilatore** -Visual Studio 2019 include il supporto predefinito per GCC e [Clang](/cpp/build/clang-support-cmake?view=vs-2019).
- **GDB** -Visual Studio avvia automaticamente gdb nel sistema Linux e usa il front-end del debugger di Visual Studio per offrire un'esperienza di debug completa in Linux.
- **rsync** e **zip** : l'inclusione di rsync e zip consente a Visual Studio di estrarre i file di intestazione dal sistema Linux al file System di Windows per l'uso da parte di IntelliSense.
- **Assicurarsi**
- **OpenSSH-server** (solo sistemi Linux remoti): Visual Studio si connette a sistemi Linux remoti tramite una connessione SSH sicura.
- **CMake** (solo progetti CMake): è possibile installare [i file binari CMake collegati staticamente da Microsoft per Linux](https://github.com/microsoft/CMake/releases).

I comandi seguenti presuppongono che si usi g + + anziché Clang.

::: moniker-end

::: moniker range="vs-2017"

Per i progetti Linux in Visual Studio è necessario che le dipendenze seguenti siano installate nel sistema Linux remoto o in WSL:

- **GCC** -Visual Studio 2017 include il supporto predefinito per GCC.
- **GDB** -Visual Studio avvia automaticamente gdb sul sistema Linux e usa il front-end del debugger di Visual Studio per offrire un'esperienza di debug completa in Linux.
- **rsync** e **zip** : l'inclusione di rsync e zip consente a Visual Studio di estrarre i file di intestazione dal sistema Linux al file System di Windows da usare per IntelliSense.
- **Assicurarsi**
- **OpenSSH-server** -Visual Studio si connette a sistemi Linux remoti tramite una connessione SSH sicura.
- **CMake** (solo progetti CMake): è possibile installare [i file binari CMake collegati staticamente da Microsoft per Linux](https://github.com/microsoft/CMake/releases).

::: moniker-end

::: moniker range="vs-2019"

## <a name="linux-setup-ubuntu-on-wsl"></a>Installazione di Linux: Ubuntu in WSL

Quando si intende usare WSL, non è necessario aggiungere una connessione remota o configurare SSH per la compilazione e il debug. Per la sincronizzazione automatica delle intestazioni di Linux con Visual Studio per il supporto di Intellisense sono necessari **zip** e **rsync**. Se le applicazioni richieste non sono già presenti, è possibile installarle come indicato di seguito:

```bash
sudo apt-get install g++ gdb make rsync zip
```

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="ubuntu-on-remote-linux-systems"></a>Ubuntu nei sistemi Linux remoti

Il sistema Linux di destinazione deve avere **OpenSSH-server**, **g + +** , **GDB**e **make** installato e il daemon ssh deve essere in esecuzione. **zip** e **rsync** sono necessari per la sincronizzazione automatica delle intestazioni remote con il computer locale per il supporto IntelliSense. Se queste applicazioni non sono già presenti, è possibile installarle come indicato di seguito:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   ```bash
   sudo apt-get install openssh-server g++ gdb make rsync zip
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

Fedora usa il programma di installazione dei pacchetti **dnf**. Per scaricare **g + +** , **GDB**, **make**, **rsync** e **zip**, eseguire:

   ```bash
   sudo dnf install gcc-g++ gdb rsync make zip
   ```

Per la sincronizzazione automatica delle intestazioni di Linux con Visual Studio per il supporto di Intellisense sono necessari **zip** e **rsync**.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="fedora-on-remote-linux-systems"></a>Fedora nei sistemi Linux remoti

Il computer di destinazione che esegue Fedora usa il programma di installazione dei pacchetti **dnf**. Per scaricare **OpenSSH-server**, **g + +** , **GDB**, **make**, **rsync**e **zip**e riavviare il daemon ssh, seguire queste istruzioni:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   ```bash
   sudo dnf install openssh-server gcc-g++ gdb make rsync zip
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
