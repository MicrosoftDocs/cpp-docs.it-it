---
title: "Procedura dettagliata: distribuire un&#39;applicazione Visual C++ tramite un progetto di installazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distribuzione per Visual C++"
ms.assetid: 66735cda-8fe3-4211-a19a-2cf717a12a3f
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: distribuire un&#39;applicazione Visual C++ tramite un progetto di installazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene illustrato come utilizzare un progetto di installazione per distribuire un'applicazione di Visual C\+\+.  
  
## Prerequisiti  
 Per completare la procedura dettagliata, è necessario disporre dei componenti seguenti:  
  
-   Un computer con installato [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)].  
  
-   Un computer aggiuntivo che non dispone delle librerie Visual C\+\+.  
  
### Per distribuire un'applicazione utilizzando un progetto di installazione  
  
1.  Utilizzare **Creazione guidata applicazione MFC** per creare una nuova soluzione di Visual Studio.  Per trovare la procedura guidata, dalla finestra di dialogo **Nuovo progetto** espandere il nodo **Visual C\+\+**, selezionare **MFC** quindi **Applicazione MFC**, immettere un nome per il progetto e fare clic su **OK**.  
  
2.  Modificare la configurazione attiva della soluzione in **Rilascio**.  Selezionare **Gestione configurazione** dal menu **Compila**.  Dalla finestra di dialogo **Gestione configurazione** selezionare **Rilascio** dalla casella a discesa **Configurazione soluzione attiva**.  
  
3.  ‎Premere F7 per compilare l'applicazione.  In alternativa, scegliere **Compila soluzione** dal menu **Compila**.  In questo modo il progetto di installazione utilizzare l'output del progetto di applicazione MFC.  
  
4.  Se necessario, limited di InstallShield di download \(ISLE\), che è disponibile per gli sviluppatori di Visual Studio e sostituisce la funzionalità dei modelli di progetto in Visual Studio per l'impostazione e la distribuzione.  Quando si è connessi a Internet, aprire la finestra di dialogo **Nuovo progetto** scegliendo **File**, **Nuovo**, **Progetto** sulla barra dei menu, oppure fare clic con il pulsante destro del mouse sulla soluzione in **Esplora soluzioni** e scegliendo **Aggiungi**, **Nuovo progetto…**.  Espandere il nodo **Altri tipi di progetto**, scegliere **Abilita InstallShield Limited Edition** nel nodo **Configurazione e distribuzione** e seguire le istruzioni visualizzate.  Una volta scaricato, limited installazione e attivazione di InstallShield, chiudere Visual Studio e riaprirlo.  
  
5.  Aprire nuovamente la finestra di dialogo **Nuovo progetto**, espandere il nodo **Altri tipi di progetto** e scegliere **Progetto InstallShield Limited Edition** nel nodo **InstallShield Limited Edition**.  
  
6.  Seguire le istruzioni nel nodo **Guida introduttiva** del progetto di installazione creato dal modello di limited di InstallShield per aggiungere un riferimento restituito al progetto Visual Studio MFC.  
  
7.  Compilare il progetto di installazione per creare il file di installazione \(setup.exe\).  A tale scopo, fare clic con il pulsante destro del mouse sul nodo del progetto di installazione in **Esplora soluzioni** e selezionare **Compila**.  
  
     InstallShield limited edition crea il file di installazione nella struttura ad albero del progetto di installazione \(per impostazione predefinita, può essere collocata in un particolare \\ nella sottocartella SingleImage \\ DiskImages \\ DISK1 del progetto di installazione\).  
  
8.  Eseguire il programma di installazione in un secondo computer che non dispone delle librerie di Visual C\+\+.  
  
## Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)