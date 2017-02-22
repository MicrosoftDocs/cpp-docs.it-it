---
title: "Risoluzione dei problemi relativi alle personalizzazioni della compilazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "eventi di compilazione [C++], risoluzione dei problemi"
  - "istruzioni di compilazione [C++], risoluzione dei problemi"
  - "compilazioni [C++], eventi di compilazione"
  - "compilazioni [C++], risoluzione dei problemi"
  - "istruzioni di compilazione personalizzate [C++], risoluzione dei problemi"
  - "eventi (C++), compilazione"
  - "risoluzione dei problemi [C++], compilazioni"
ms.assetid: e4ceb177-fbee-4ed3-a7d7-80f0d78c1d07
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Risoluzione dei problemi relativi alle personalizzazioni della compilazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se gli eventi o le istruzioni di compilazione personalizzata hanno un comportamento insolito, è possibile eseguire diverse operazioni per cercare di identificare il problema.  
  
-   Assicurarsi che i file generati dalle istruzioni di compilazione personalizzata corrispondano ai file dichiarati come output.  
  
-   Se le istruzioni di compilazione personalizzata generano dei file che rappresentano input o dipendenze di altre istruzioni di compilazione \(personalizzata o di altro tipo\), assicurarsi che quei file vengano aggiunti al progetto.  Verifica inoltre che gli strumenti che utilizzano tali file eseguano l'istruzione dopo l'istruzione di compilazione personalizzata.  
  
-   Per visualizzare gli effetti dell'istruzione di compilazione personalizzata, aggiungere `@echo on` come primo comando.  Gli eventi e le istruzioni di compilazione vengono inseriti in un file .bat temporaneo e vengono eseguiti quando il progetto è compilato.  Pertanto, è possibile aggiungere il controllo degli errori all'evento di compilazione o ai comandi di istruzione di compilazione.  
  
-   Esaminare il log di compilazione nella directory dei file intermedi per verificare che cosa è stato effettivamente eseguito.  Il percorso e il nome del log di compilazione vengono rappresentati dall'espressione della macro **MSBuild**, **$\(IntDir\)\\$\(MSBuildProjectName\).log**.  
  
-   Modificare le impostazioni del progetto per raccogliere una quantità di informazioni maggiore di quella predefinita nel log di compilazione.  Scegliere **Opzioni** dal menu **Strumenti**.  Nella finestra di dialogo **Opzioni** fare clic sul nodo **Progetti e soluzioni**, quindi fare clic sul nodo **Compila ed esegui**.  Quindi, nella casella **Livello di dettaglio file di log di compilazione progetto MSBuild**, fare clic su **Dettagliata**.  
  
-   Verificare i valori di tutte le macro del nome file o delle directory utilizzate.  È possibile ripetere le macro singolarmente oppure è possibile aggiungere `copy %0 command.bat` all'inizio dell'istruzione di compilazione personalizzata. In questo modo i comandi dell'istruzione di compilazione personalizzata verranno copiati in command.bat con tutte le macro espanse.  
  
-   Eseguire le istruzioni di compilazione personalizzata e gli eventi di compilazione singolarmente per controllarne il comportamento.  
  
## Vedere anche  
 [Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)