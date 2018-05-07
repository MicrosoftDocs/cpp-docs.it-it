---
title: Distribuire un'applicazione Visual C++ tramite un progetto di installazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- deployment for Visual C++
ms.assetid: 66735cda-8fe3-4211-a19a-2cf717a12a3f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 454507a3a3f33b43af0e50c25dab6703aa75a56b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="walkthrough-deploying-a-visual-c-application-by-using-a-setup-project"></a>Procedura dettagliata: distribuire un'applicazione Visual C++ tramite un progetto di installazione
Viene descritto come utilizzare un progetto di installazione per distribuire un'applicazione Visual C++.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Per completare la procedura dettagliata, è necessario disporre dei componenti seguenti:  
  
-   Un computer con [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] installato.  
  
-   Un computer aggiuntivo che non dispone delle librerie Visual C++.  
  
### <a name="to-deploy-an-application-by-using-a-setup-project"></a>Per distribuire un'applicazione utilizzando un progetto di installazione  
  
1.  Utilizzare il **ApplicationWizard MFC** per creare una nuova soluzione di Visual Studio. Per trovare la procedura guidata, il **nuovo progetto** finestra di dialogo espandere il **Visual C++** nodo, seleziona **MFC**selezionare **applicazione MFC**, immettere un assegnare un nome per il progetto e quindi fare clic su **OK**.  
  
2.  Modificare la configurazione di soluzione attiva su **versione**. Dal **compilare** dal menu **Configuration Manager**. Dal **Configuration Manager** nella finestra di dialogo **versione** dal **configurazione soluzione attiva** casella di riepilogo a discesa.  
  
3.  Premere F7 per compilare l'applicazione. Oppure scegliere di **compilare** menu, fare clic su **Compila soluzione**. In questo modo il progetto di installazione utilizzare l'output di questo progetto di applicazione MFC.  
  
4.  Se non già stato fatto, scaricare InstallShield Limited Edition (ISLE), che è gratuito per gli sviluppatori di Visual Studio e sostituisce la funzionalità dei modelli di progetto in Visual Studio per l'installazione e distribuzione. Quando si è connessi a Internet, aprire il **nuovo progetto** la finestra di dialogo scegliendo **File**, **New**, **progetto** nel menu della barra o da facendo clic sulla soluzione in **Esplora** e scegliendo **Aggiungi**, **nuovo progetto**. Espandere il **altri tipi di progetto** nodo, scegliere **Abilita InstallShield Limited Edition** nel **installazione e distribuzione** nodo e seguire le istruzioni visualizzate. Dopo aver scaricato, installato e attivato InstallShield Limited Edition, chiudere Visual Studio e aprirlo nuovamente.  
  
5.  Aprire il **nuovo progetto** la finestra di dialogo, espandere il **altri tipi di progetto** nodo e scegliere **progetto InstallShield Limited Edition** nel  **InstallShield Limited Edition** nodo.  
  
6.  Seguire le istruzioni di **Introduzione** nodo del progetto di installazione creato dal modello di InstallShield Limited Edition per aggiungere un riferimento all'output a un progetto MFC di Visual Studio.  
  
7.  Compilare il progetto di installazione per creare il file di programma di installazione (setup.exe). A tale scopo, fare clic il nodo di progetto di installazione in **Esplora** e selezionare **compilare**.  
  
     InstallShield Limited Edition crea il file di programma di installazione nella struttura di progetto di installazione (per impostazione predefinita, potrebbe essere che si trovano nella sottocartella Express\SingleImage\DiskImages\DISK1 del progetto di installazione).  
  
8.  Eseguire il programma di installazione in un secondo computer che non dispone delle librerie Visual C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)