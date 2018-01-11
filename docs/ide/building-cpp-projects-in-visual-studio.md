---
title: Compilazione di progetti C++ in Visual Studio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Visual C++ projects, building
- projects [C++], building
- builds [C++], about building in Visual Studio
ms.assetid: 9e8bc1a2-bb17-4951-937a-c757ed88d2d1
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cd4934f3075f963efe59e8d73d8c72347fd53912
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="building-c-projects-in-visual-studio"></a>Compilazione di progetti C++ in Visual Studio
Nell'ambiente di sviluppo integrato (IDE, Integrated Development Environment) di Visual Studio sono disponibili vari modi per compilare un'intera soluzione o un singolo progetto. È anche possibile modificare le impostazioni di compilazione e specificare procedure di compilazione personalizzate per aumentare l'efficienza del processo di sviluppo.  
  
 Per compilare una soluzione aperta in Visual Studio e selezionata in **Esplora**, è possibile:  
  
-   Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
-   O, in **Esplora**, aprire il menu di scelta rapida per la soluzione e quindi scegliere **Compila soluzione**.  
  
-   O ancora, premere F7. Si tratta della scelta rapida da tastiera predefinita per le impostazioni di sviluppo per C/C++.  
  
-   O, nel [finestra di comando](/visualstudio/ide/reference/command-window) (sulla barra dei menu, scegliere **vista**, **altre finestre**, **finestra di comando**), immettere `Build.BuildSolution`.  
  
-   In o il [veloce](/visualstudio/ide/reference/quick-launch-environment-options-dialog-box) immettere `build build solution`.  
  
 Per compilare un progetto selezionato in **Esplora**, è possibile:  
  
-   Nella barra dei menu, scegliere **compilare**, **compilare \<nome progetto >**.  
  
-   O, in **Esplora**, aprire il menu di scelta rapida per il progetto e quindi scegliere **compilare**.  
  
-   Oppure, nella finestra di comando (sulla barra dei menu, scegliere **vista**, **altre finestre**, **finestra di comando**), immettere `Build.BuildOnlyProject`.  
  
-   In alternativa, nella finestra di avvio veloce, immettere `build project only build only <project name>`.  
  
 Quando si compila un'applicazione Visual C++ in Visual Studio, è possibile modificare molte impostazioni di compilazione nella finestra di dialogo Pagine delle proprietà del progetto. Per informazioni su come impostare le proprietà del progetto, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
 Per un esempio su come usare l'IDE per creare, compilare ed eseguire il debug di un progetto C++, vedere [procedura dettagliata: esplorare l'IDE di Visual Studio con C++](/visualstudio/ide/getting-started-with-cpp-in-visual-studio). Per un esempio su come usare l'IDE per compilare C + + progetto CLR, vedere [procedura dettagliata: compilazione di un programma C++ destinato a CLR in Visual Studio](../ide/walkthrough-compiling-a-cpp-program-that-targets-the-clr-in-visual-studio.md). Per un esempio su come usare l'IDE per creare un'app di Windows Runtime, vedere [creare la prima app di Windows Runtime con C++](http://msdn.microsoft.com/library/windows/apps/hh974580.aspx).  
  
 Per altre informazioni su come eseguire la compilazione, modificare le impostazioni di compilazione e specificare procedure di compilazione personalizzate, vedere gli articoli seguenti.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)  
 Viene descritto come personalizzare il processo di compilazione nell'ambiente di sviluppo integrato (IDE).  
  
 [Macro comuni per i comandi e le proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)  
 Viene presentato un elenco di macro che è possibile usare laddove siano accettate stringhe.  
  
 [Compilazione di progetti esterni](../ide/building-external-projects.md)  
 Vengono illustrati i progetti di compilazione che usano funzionalità esterne all'ambiente IDE.  
  
 [File di progetto](../ide/project-files.md)  
 Viene presentata la struttura XML di un file con estensione vcxproj.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [VC + +, progetti di dialogo Opzioni](vcpp-directories-property-page.md)  
 (Solo progetti MSBuild) Viene descritto come modificare il percorso di ricerca per i file eseguibili e includere file, i file di libreria e file del codice sorgente durante una compilazione.  
  
 [Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio) (Compilazione e creazione)  
 Vengono fornite informazioni sulla compilazione in Visual Studio.  
  
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)  
 Fornisce i collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato (IDE) di Visual Studio.  
  
 [Riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md)  
 Vengono forniti collegamenti a una panoramica sulla compilazione di programmi in C++, sulle opzioni del compilatore e del linker e su altri strumenti di compilazione.  
  
 [Aggiornamento di progetti da versioni precedenti di Visual C++](../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md)  
 Vengono forniti collegamenti ad argomenti relativi a problemi di aggiornamento progetto C++ per le versioni più recenti del set di strumenti del compilatore.  
  
[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)  
  Informazioni dettagliate su come eseguire l'aggiornamento di applicazioni C++ che sono state create in versioni precedenti di Visual Studio e come eseguire la migrazione di applicazioni che sono state create usando strumenti diversi da Visual Studio.  
  
## <a name="see-also"></a>Vedere anche  
 [Guida di orientamento per applicazioni Windows Store con C++](http://msdn.microsoft.com/en-us/0b71e4a4-5d8a-4a20-b2ec-e40062675ec1)