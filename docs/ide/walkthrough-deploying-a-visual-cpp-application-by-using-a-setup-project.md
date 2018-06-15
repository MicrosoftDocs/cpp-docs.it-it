---
title: Distribuire un'applicazione Visual C++ tramite un progetto di installazione | Microsoft Docs
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
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33332780"
---
# <a name="walkthrough-deploying-a-visual-c-application-by-using-a-setup-project"></a>Procedura dettagliata: distribuire un'applicazione Visual C++ tramite un progetto di installazione
Descrive come usare un progetto di installazione per distribuire un'applicazione Visual C++.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Per completare la procedura dettagliata, è necessario disporre dei componenti seguenti:  
  
-   Un computer in cui è installato [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)].  
  
-   Un altro computer che non dispone delle librerie Visual C++.  
  
### <a name="to-deploy-an-application-by-using-a-setup-project"></a>Per distribuire un'applicazione tramite un progetto di installazione  
  
1.  Usare **Creazione guidata applicazione MFC** per creare una nuova soluzione di Visual Studio. Per trovare la procedura guidata, nella finestra di dialogo **Nuovo progetto** espandere il nodo **Visual C++**, selezionare **MFC**, selezionare **Applicazione MFC**, immettere un nome per il progetto e fare clic su **OK**.  
  
2.  Modificare la configurazione attiva della soluzione impostandola su **Rilascio**. Nel menu **Compila** selezionare **Gestione configurazione**. Nella finestra di dialogo **Gestione configurazione** selezionare **Rilascio** nell'elenco a discesa **Configurazione soluzione attiva**.  
  
3.  Premere F7 per compilare l'applicazione. Oppure nel menu **Compila** scegliere **Compila soluzione**. In questo modo il progetto di installazione usa l'output di questo progetto di applicazione MFC.  
  
4.  Se non già stato fatto, scaricare InstallShield Limited Edition (ISLE), che è gratuito per gli sviluppatori di Visual Studio e sostituisce la funzionalità dei modelli di progetto in Visual Studio per l'installazione e distribuzione. Con una connessione a Internet attiva, aprire la finestra di dialogo **Nuovo progetto** scegliendo **File** **Nuovo** **Progetto** sulla barra dei menu o facendo clic con il pulsante destro del mouse sulla propria soluzione in **Esplora soluzioni** e scegliendo **Aggiungi**, **Nuovo progetto**. Espandere il nodo **Altri tipi di progetti**, scegliere **Abilita InstallShield Limited Edition** nel nodo **Installazione e distribuzione** e seguire le istruzioni visualizzate. Dopo aver scaricato, installato e attivato InstallShield Limited Edition, chiudere Visual Studio e riaprirlo.  
  
5.  Aprire di nuovo la finestra di dialogo **Nuovo progetto**, espandere il nodo **Altri tipi di progetti** e scegliere **InstallShield Limited Edition Project** (Progetto InstallShield Limited Edition) nel nodo **InstallShield Limited Edition**.  
  
6.  Seguire le istruzioni nel nodo **Introduzione** del progetto di installazione creato dal modello InstallShield Limited Edition per aggiungere un riferimento di output al progetto MFC di Visual Studio.  
  
7.  Compilare il progetto di installazione per creare il file di installazione (setup.exe). A tale scopo fare clic con il pulsante destro del mouse sul nodo del progetto di installazione in **Esplora soluzioni** e selezionare **Compila**.  
  
     InstallShield Limited Edition crea il file di installazione nella struttura del progetto di installazione (per impostazione predefinita, la sottocartella Express\SingleImage\DiskImages\DISK1 del progetto di installazione).  
  
8.  Eseguire il programma di installazione in un secondo computer che non dispone delle librerie Visual C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)