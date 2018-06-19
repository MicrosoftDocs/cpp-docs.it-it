---
title: Scaricare, installare e configurare il carico di lavoro Linux | Microsoft Docs
ms.custom: ''
ms.date: 11/16/2016
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
ms.openlocfilehash: 1d28f0db0ff91dbdb08c9ca88dfe197e8942a7f4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33329436"
---
# <a name="download-install-and-setup-the-linux-workload"></a>Scaricare, installare e configurare il carico di lavoro Linux

## <a name="visual-studio-setup"></a>Configurazione di Visual Studio
1. Avviare il programma di installazione di Visual Studio e selezionare il carico di lavoro **Sviluppo di applicazioni Linux con C++**.

   ![Estensione di Sviluppo di applicazioni Linux con C++](media/linuxworkload.png)

2. Fare clic su **Installa** per continuare con l'installazione.

## <a name="linux-setup"></a>Configurazione di Linux
Nel computer Linux di destinazione devono essere installati **openssh-server**, **g + +**, **gdb**e **gdbserver** installato e il daemon ssh deve essere in esecuzione.  Se non sono già presenti, è possibile installarli come indicato di seguito:
 
1. Al prompt dei comandi della shell nel computer Linux, eseguire le operazioni seguenti:

   `sudo apt-get install openssh-server g++ gdb gdbserver`

   È possibile che sia chiesta la password radice dato il comando sudo.  In questo caso, immetterla e continuare.  Al termine, verranno installati questi strumenti e servizi.

1. Assicurarsi che il servizio ssh sia in esecuzione nel computer Linux eseguendo il comando seguente:

   `sudo service ssh start`
   
   Il servizio sarà avviato ed eseguito in background, pronto per accettare le connessioni.
