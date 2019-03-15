---
title: Installare il carico di lavoro Linux C++ in Visual Studio
description: Descrive come scaricare, installare e configurare il carico di lavoro Linux per C++ in Visual Studio.
ms.date: 03/05/2019
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
ms.openlocfilehash: 74155724abb3a0e02cc27dd8a8d144f142ee4b6f
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57747722"
---
# <a name="download-install-and-set-up-the-linux-workload"></a>Scaricare, installare e configurare il carico di lavoro Linux

È possibile usare l'IDE di Visual Studio 2017 in Windows per creare, modificare ed eseguire il debug di progetti C++ eseguiti in un computer fisico o una macchina virtuale Linux oppure nel [sottosistema Windows per Linux](/windows/wsl/about). 

È possibile lavorare su una codebase esistente che usa CMake o qualsiasi altro sistema di compilazione senza la necessità di convertirla in un progetto Visual Studio. Se il codebase è multipiattaforma, è possibile scegliere sia Windows che Linux da Visual Studio. È ad esempio possibile modificare il codice, eseguirne il debug e profilarlo in Windows usando Visual Studio e quindi ridestinare rapidamente il progetto a Linux per altri test. I file di intestazione Linux vengono copiati automaticamente nel computer locale dove vengono usati da Visual Studio per offrire il supporto completo IntelliSense (completamento istruzioni, Vai a definizione e così via).
 
Per questi scenari è necessario il carico di lavoro **Sviluppo di applicazioni Linux con C++**. 

## <a name="visual-studio-setup"></a>Configurazione di Visual Studio

1. Digitare "Programma di installazione di Visual Studio" nella casella di ricerca di Windows: ![Casella di ricerca di Windows](media/visual-studio-installer-search.png)
2. Cercare il programma di installazione nei risultati **App** e farci doppio clic sopra. Quando il programma di installazione si apre, scegliere **Modifica** e quindi fare clic sulla scheda **Carichi di lavoro**. Scorrere verso il basso fino ad **Altri set di strumenti** e selezionare il carico di lavoro **Linux development with C++** (Sviluppo di applicazioni Linux con C++).

   ![Carico di lavoro Visual C++ per lo sviluppo di applicazioni Linux](media/linuxworkload.png)

1. Se si usa CMake oppure si intende usare come destinazione piattaforme IoT o incorporate, passare al riquadro **Dettagli di installazione** sulla destra, sotto **Linux development with C++** (Sviluppo di applicazioni Linux con C++) espandere **Componenti facoltativi** e scegliere i componenti necessari.

    **Visual Studio 2017 versione 15.4 e successive**<br/>: Quando si installa il carico di lavoro Linux C++ per Visual Studio, il supporto CMake per Linux è selezionato per impostazione predefinita.

1. Fare clic su **Modifica** per continuare con l'installazione.

## <a name="options-for-creating-a-linux-environment"></a>Opzioni per la creazione di un ambiente Linux

Se non si ha già un computer Linux, è possibile creare una macchina virtuale Linux in Azure. Per altre informazioni, vedere [Avvio rapido: Creare una macchina virtuale Linux nel portale di Azure](/azure/virtual-machines/linux/quick-create-portal).

Un'altra opzione, in Windows 10, prevede l'attivazione del sottosistema Windows per Linux. Per altre informazioni, vedere [Windows 10 Installation Guide](/windows/wsl/install-win10) (Guida all'installazione di Windows 10).

## <a name="linux-setup-ubuntu"></a>Configurazione di Linux: Ubuntu

Nel computer Linux di destinazione devono essere installati **openssh-server**, **g + +**, **gdb**e **gdbserver** installato e il daemon ssh deve essere in esecuzione. **zip** è necessario per la sincronizzazione automatica delle intestazioni remote con il computer locale per il supporto di Intellisense. Se queste applicazioni non sono già presenti, è possibile installarle come indicato di seguito:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   `sudo apt-get install openssh-server g++ gdb gdbserver zip`

   È possibile che sia chiesta la password radice dato il comando sudo.  In questo caso, immetterla e continuare. Al termine, verranno installati gli strumenti e i servizi necessari.

1. Assicurarsi che il servizio ssh sia in esecuzione nel computer Linux eseguendo il comando seguente:

   `sudo service ssh start`

   Il servizio viene avviato ed eseguito in background, pronto per accettare le connessioni.

## <a name="linux-setup-fedora"></a>Configurazione di Linux: Fedora

Il computer di destinazione che esegue Fedora usa il programma di installazione dei pacchetti **dnf**. Per scaricare **openssh-server**, **g++**, **gdb**, **gdbserver** e **zip** e riavviare il daemon ssh, seguire queste istruzioni:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   `sudo dnf install openssh-server gcc-g++ gdb gdb-gdbserver zip`

   È possibile che sia chiesta la password radice dato il comando sudo.  In questo caso, immetterla e continuare. Al termine, verranno installati gli strumenti e i servizi necessari.

1. Assicurarsi che il servizio ssh sia in esecuzione nel computer Linux eseguendo il comando seguente:

   `sudo systemctl start sshd`

   Il servizio viene avviato ed eseguito in background, pronto per accettare le connessioni.

## <a name="ensure-you-have-cmake-38-on-the-remote-linux-machine"></a>Verificare che il computer Linux remoto includa CMake 3.8

È possibile che nella distribuzione Linux sia disponibile una versione precedente di CMake. Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante di CMake offerta da Microsoft, scaricare nel computer Linux i file binari precompilati più recenti all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).
