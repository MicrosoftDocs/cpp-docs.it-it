---
title: Installare il carico di lavoro Linux C++ in Visual Studio | Microsoft Docs
description: Descrive come scaricare, installare e configurare il carico di lavoro Linux per C++ in Visual Studio.
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-linux
ms.tgt_pltfrm: Linux
ms.topic: conceptual
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: 403f1bcd8634c3f471f34ff1266501de5bf05d52
ms.sourcegitcommit: 87d317ac62620c606464d860aaa9e375a91f4c99
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2018
ms.locfileid: "45601392"
---
# <a name="download-install-and-setup-the-linux-workload"></a>Scaricare, installare e configurare il carico di lavoro Linux

È possibile usare l'IDE di Visual Studio in Windows per creare, modificare ed eseguire il debug di progetti C++ eseguiti in un computer fisico Linux, in una macchina virtuale o nel [sottosistema Windows per Linux](/windows/wsl/about). Per uno qualsiasi di questi scenari, installare prima il carico di lavoro **Linux development with C++** (Sviluppo di applicazioni Linux con C++).

## <a name="visual-studio-setup"></a>Configurazione di Visual Studio

1. Digitare "Programma di installazione di Visual Studio" nel menu di ricerca di Windows. Cercarlo tra i risultati di **App** e fare doppio clic su di esso. Quando il programma di installazione si apre, scegliere **Modifica** e quindi fare clic sulla scheda **Carichi di lavoro**. Scorrere verso il basso fino ad **Altri set di strumenti** e selezionare il carico di lavoro **Linux development with C++** (Sviluppo di applicazioni Linux con C++).

   ![Carico di lavoro Visual C++ per lo sviluppo di applicazioni Linux](media/linuxworkload.png)

1. Se si usa CMake oppure si intende usare come destinazione piattaforme IoT o incorporate, passare al riquadro **Dettagli di installazione** sulla destra, sotto **Linux development with C++** (Sviluppo di applicazioni Linux con C++) espandere **Componenti facoltativi** e scegliere i componenti necessari. 

1. Fare clic su **Modifica** per continuare con l'installazione.


## <a name="options-for-creating-a-linux-environment"></a>Opzioni per la creazione di un ambiente Linux

Se non si ha già un computer Linux, è possibile creare una macchina virtuale Linux in Azure. Per altre informazioni, vedere [Guida introduttiva: Creare una macchina virtuale Linux nel portale di Azure](/azure/virtual-machines/linux/quick-create-portal).

Un'altra opzione, in Windows 10, prevede l'attivazione del sottosistema Windows per Linux. Per altre informazioni, vedere [Windows 10 Installation Guide](/windows/wsl/install-win10) (Guida all'installazione di Windows 10).

## <a name="linux-setup"></a>Configurazione di Linux

Nel computer Linux di destinazione devono essere installati **openssh-server**, **g + +**, **gdb**e **gdbserver** installato e il daemon ssh deve essere in esecuzione. **zip** è necessario per la sincronizzazione automatica delle intestazioni remote con il computer locale per il supporto di Intellisense. Se queste applicazioni non sono già presenti, è possibile installarle come indicato di seguito:

1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   `sudo apt-get install openssh-server g++ gdb gdbserver zip`

   È possibile che sia chiesta la password radice dato il comando sudo.  In questo caso, immetterla e continuare.  Al termine, verranno installati questi strumenti e servizi.

1. Assicurarsi che il servizio ssh sia in esecuzione nel computer Linux eseguendo il comando seguente:

   `sudo service ssh start`

   Il servizio sarà avviato ed eseguito in background, pronto per accettare le connessioni.
