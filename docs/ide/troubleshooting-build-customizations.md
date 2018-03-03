---
title: Risoluzione dei problemi delle personalizzazioni compilazioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- build events [C++], troubleshooting
- builds [C++], build events
- troubleshooting [C++], builds
- build steps [C++], troubleshooting
- events [C++], build
- builds [C++], troubleshooting
- custom build steps [C++], troubleshooting
ms.assetid: e4ceb177-fbee-4ed3-a7d7-80f0d78c1d07
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5fa3b2d3910a71d189f5177e13fbd91930e15ee8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="troubleshooting-build-customizations"></a>Risoluzione dei problemi relativi alle personalizzazioni della compilazione
Se istruzioni di compilazione personalizzata o gli eventi non si comporta come previsto, esistono diverse operazioni da eseguire per cercare di identificare il problema.  
  
-   Assicurarsi che i file in cui che generano le istruzioni di compilazione personalizzata corrispondano ai file dichiarati come output.  
  
-   Se le istruzioni di compilazione personalizzata generano tutti i file di input o dipendenze di altre istruzioni (personalizzati o meno) di compilazione, assicurarsi che tali file vengono aggiunti al progetto. E verificare che gli strumenti che utilizzano tali file eseguito dopo l'istruzione di compilazione personalizzata.  
  
-   Per visualizzare gli effetti dell'istruzione di compilazione personalizzato, aggiungere `@echo on` come primo comando. Gli eventi di compilazione le istruzioni di compilazione sono inserire in un file con estensione bat temporaneo e quando viene compilato il progetto. Pertanto, è possibile aggiungere all'evento di compilazione di controllo degli errori o i comandi di passaggio di compilazione.  
  
-   Esaminare il log di compilazione nella directory dei file intermedi per verificare ciò che effettivamente eseguito. Il percorso e il nome del log di compilazione è rappresentato dal **MSBuild** espressione (macro), **$ (IntDir)\\$(MSBuildProjectName) log**.  
  
-   Modificare le impostazioni del progetto per raccogliere più la quantità di informazioni nel log di compilazione predefinita. Scegliere **Opzioni** dal menu **Strumenti**. Nel **opzioni** nella finestra di dialogo fare clic su di **progetti e soluzioni** nodo e quindi fare clic su di **compilare ed eseguire** nodo. Quindi, nel **livello di dettaglio file log di MSBuild project build** fare clic su **Detailed**.  
  
-   Verificare che i valori di qualsiasi file directory o nome di macro in uso. È possibile ripetere le macro singolarmente oppure è possibile aggiungere `copy %0 command.bat` all'inizio dell'istruzione di compilazione personalizzata, che verranno copiati i comandi dell'istruzione di compilazione personalizzata a bat con tutte le macro espanse.  
  
-   Eseguire istruzioni di compilazione personalizzate e gli eventi singolarmente per controllarne il comportamento di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)