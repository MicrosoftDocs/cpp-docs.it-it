---
title: Scaricare, installare e configurare il carico di lavoro Linux | Microsoft Docs
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
author: BrianPeek
ms.author: brpeek
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: dff1e9e03911f65dfcffcd078e0739224f73f4aa
ms.openlocfilehash: 09ce0024b7a98729b28968fff081ed105b5463e1
ms.lasthandoff: 02/24/2017

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

