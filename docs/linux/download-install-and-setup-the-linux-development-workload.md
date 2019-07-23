---
title: Installare il carico di lavoro Linux C++ in Visual Studio
description: Descrive come scaricare, installare e configurare il carico di lavoro Linux per C++ in Visual Studio.
ms.date: 06/11/2019
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
ms.openlocfilehash: 5df7b323d202f398059e92abaeeeedbf73439fa4
ms.sourcegitcommit: 7f5b29e24e1be9b5985044a030977485fea0b50c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 07/17/2019
ms.locfileid: "68299803"
---
# <a name="download-install-and-set-up-the-linux-workload"></a>Scaricare, installare e configurare il carico di lavoro Linux

::: moniker range="vs-2015"

I progetti Linux sono supportati in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

È possibile usare l'IDE di Visual Studio in Windows per creare, modificare ed eseguire il debug di progetti C++ eseguiti in un computer fisico Linux, in una macchina virtuale o nel [sottosistema Windows per Linux](/windows/wsl/about). 

È possibile lavorare su una codebase esistente che usa CMake o qualsiasi altro sistema di compilazione senza la necessità di convertirla in un progetto Visual Studio. Se il codebase è multipiattaforma, è possibile scegliere sia Windows che Linux da Visual Studio. È ad esempio possibile modificare il codice, eseguirne il debug e profilarlo in Windows usando Visual Studio e quindi ridestinare rapidamente il progetto a Linux per altri test. I file di intestazione Linux vengono copiati automaticamente nel computer locale dove vengono usati da Visual Studio per offrire il supporto completo IntelliSense (completamento istruzioni, Vai a definizione e così via). 
 
Per questi scenari è necessario il carico di lavoro **Sviluppo di applicazioni Linux con C++** . 

::: moniker-end

::: moniker range="vs-2019"

In Visual Studio 2019 è possibile specificare destinazioni separate per la compilazione e il debug. Se la destinazione è WSL non è più necessario aggiungere una connessione remota o configurare SSH.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="visual-studio-setup"></a>Configurazione di Visual Studio

1. Digitare "Programma di installazione di Visual Studio" nella casella di ricerca di Windows:

   ![Casella di ricerca di Windows](media/visual-studio-installer-search.png)

2. Cercare il programma di installazione nei risultati **App** e farci doppio clic sopra. Quando il programma di installazione si apre, scegliere **Modifica** e quindi fare clic sulla scheda **Carichi di lavoro**. Scorrere verso il basso fino ad **Altri set di strumenti** e selezionare il carico di lavoro **Linux development with C++** (Sviluppo di applicazioni Linux con C++).

   ![Carico di lavoro Visual C++ per lo sviluppo di applicazioni Linux](media/linuxworkload.png)

1. Se si intende usare come destinazione piattaforme IoT o incorporate, passare al riquadro **Dettagli di installazione** sulla destra, sotto **Sviluppo di applicazioni Linux con C++** espandere **Componenti facoltativi** e scegliere i componenti necessari. Il supporto di CMake per Linux è selezionato per impostazione predefinita.

1. Fare clic su **Modifica** per continuare con l'installazione.

## <a name="options-for-creating-a-linux-environment"></a>Opzioni per la creazione di un ambiente Linux

Se non si ha già un computer Linux, è possibile creare una macchina virtuale Linux in Azure. Per altre informazioni, vedere [Avvio rapido: Creare una macchina virtuale Linux nel portale di Azure](/azure/virtual-machines/linux/quick-create-portal).

In Windows 10 è possibile installare e impostare come destinazione la distribuzione Linux preferita nel sottosistema Windows per Linux (WSL). Per altre informazioni, vedere [Guida all'installazione del sottosistema Windows per Linux per Windows 10](/windows/wsl/install-win10). Il sottosistema Windows per Linux è un ambiente console pratico ma non consigliato per le applicazioni grafiche. 

::: moniker-end

::: moniker range="vs-2019"

## <a name="linux-setup-ubuntu-on-wsl"></a>Configurazione di Linux: Ubuntu in WSL

Quando si intende usare WSL, non è necessario aggiungere una connessione remota o configurare SSH per la compilazione e il debug. Per la sincronizzazione automatica delle intestazioni di Linux con Visual Studio per il supporto di Intellisense sono necessari **zip** e **rsync**. Se le applicazioni richieste non sono già presenti, è possibile installarle come indicato di seguito:

```bash
sudo apt-get install g++ gdb make rsync zip
```
::: moniker-end

::: moniker range=">=vs-2017"

## <a name="ubuntu-on-remote-linux-systems"></a>Ubuntu nei sistemi Linux remoti

Nel computer Linux di destinazione devono essere installati **openssh-server**, **g++** , **gdb** e **gdbserver** e deve essere in esecuzione il daemon ssh. **zip** è necessario per la sincronizzazione automatica delle intestazioni remote con il computer locale per il supporto di Intellisense. Se queste applicazioni non sono già presenti, è possibile installarle come indicato di seguito:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   ```bash
   sudo apt-get install openssh-server g++ gdb gdbserver zip
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

Fedora usa il programma di installazione dei pacchetti **dnf**. Per scaricare **g++** , **gdb**, **rsync** e **zip**, eseguire:

   ```bash
   sudo dnf install gcc-g++ gdb rsync zip
   ```

Per la sincronizzazione automatica delle intestazioni di Linux con Visual Studio per il supporto di Intellisense sono necessari **zip** e **rsync**.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="fedora-on-remote-linux-systems"></a>Fedora nei sistemi Linux remoti

Il computer di destinazione che esegue Fedora usa il programma di installazione dei pacchetti **dnf**. Per scaricare **openssh-server**, **g++** , **gdb**, **gdbserver** e **zip** e riavviare il daemon ssh, seguire queste istruzioni:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   ```bash
   sudo dnf install openssh-server gcc-g++ gdb gdb-gdbserver zip
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
