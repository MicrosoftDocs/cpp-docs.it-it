---
title: 'Procedura: abilitare IntelliSense per progetti Makefile | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCNMakeTool.IntelliSense
dev_langs:
- C++
helpviewer_keywords:
- Makefile projects, IntelliSense
- IntelliSense, Makefile projects
ms.assetid: 9443f453-f18f-4f12-a9a1-ef9dbf8b188f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9de79d56c6e8b6e496c0e7988ada07ed7595ea70
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-enable-intellisense-for-makefile-projects"></a>Procedura: abilitare IntelliSense per progetti makefile
Funzionamento dell'IDE per progetti makefile Visual C++ quando determinate impostazioni o le opzioni del compilatore, del progetto di IntelliSense vengono impostati in modo non corretto. Utilizzare questa procedura per configurare i progetti makefile Visual C++, in modo che il funzionamento di IntelliSense è quando i progetti makefile sono aperti nell'ambiente di sviluppo di Visual Studio.  
  
### <a name="to-enable-intellisense-for-makefile-projects-in-the-ide"></a>Per abilitare IntelliSense per progetti makefile nell'IDE  
  
1.  Aprire il **pagine delle proprietà** la finestra di dialogo. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Selezionare il **NMake** proprietà pagina e quindi modificare le proprietà di **IntelliSense** come appropriato.  
  
    -   Impostare il **definizioni preprocessore** proprietà per definire i simboli del preprocessore nel progetto makefile. Vedere [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md), per ulteriori informazioni.  
  
    -   Impostare il **percorsi di ricerca** proprietà per specificare l'elenco delle directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file che vengono passati alle direttive del preprocessore nel progetto makefile. Vedere [/I (directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md), per ulteriori informazioni.  
  
         Per i progetti vengono compilati utilizzando CL. EXE da una finestra di comando, impostare il **INCLUDE** variabile di ambiente per specificare directory di cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file che vengono passati alle direttive del preprocessore nel progetto makefile.  
  
    -   Impostare il **inclusioni** proprietà per specificare quali file di intestazione al processo durante la compilazione del progetto makefile. Vedere [/FI (nome forzato File di inclusione)](../build/reference/fi-name-forced-include-file.md), per ulteriori informazioni.  
  
    -   Impostare il **percorso di ricerca Assembly** proprietà per specificare l'elenco delle directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti agli assembly .NET nel progetto. Vedere [/AI (specifica le directory di metadati)](../build/reference/ai-specify-metadata-directories.md), per ulteriori informazioni.  
  
    -   Impostare il **assembly imposti** proprietà per specificare quali assembly .NET per l'elaborazione durante la compilazione del progetto makefile. Vedere [/FU (Name Forced #using File)](../build/reference/fu-name-forced-hash-using-file.md), per ulteriori informazioni.  
  
    -   Impostare il **opzioni aggiuntive** proprietà per specificare opzioni aggiuntive del compilatore devono essere utilizzati da Intellisense durante l'analisi di file C++.  
  
4.  Fare clic su **OK** per chiudere le pagine delle proprietà.  
  
5.  Utilizzare il **Salva tutto** comando per salvare le impostazioni di progetto modificato.  
  
 Alla successiva apertura del progetto makefile nell'ambiente di sviluppo di Visual Studio, eseguire il **Pulisci soluzione** comando e quindi la **Compila soluzione** comando progetto makefile. IntelliSense dovrebbe funzionare correttamente nell'IDE.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di IntelliSense](/visualstudio/ide/using-intellisense)   
 [Riferimenti a NMAKE](../build/nmake-reference.md)   
 [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)