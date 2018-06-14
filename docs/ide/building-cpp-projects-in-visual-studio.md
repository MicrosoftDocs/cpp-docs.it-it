---
title: Compilazione di progetti C++ in Visual Studio | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Visual C++ projects, building
- projects [C++], building
- builds [C++], about building in Visual Studio
ms.assetid: 9e8bc1a2-bb17-4951-937a-c757ed88d2d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a7008e7fe670471301968482fbd4c6c758f0ff5e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340502"
---
# <a name="building-c-projects-in-visual-studio"></a>Compilazione di progetti C++ in Visual Studio
Nell'ambiente di sviluppo integrato (IDE, Integrated Development Environment) di Visual Studio sono disponibili vari modi per compilare un'intera soluzione o un singolo progetto. È anche possibile modificare le impostazioni di compilazione e specificare procedure di compilazione personalizzate per aumentare l'efficienza del processo di sviluppo.  
  
 Per compilare una soluzione aperta in Visual Studio e selezionata in **Esplora soluzioni**, è possibile seguire queste procedure:  
  
-   Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
-   In alternativa, in **Esplora soluzioni** aprire il menu di scelta rapida della soluzione e scegliere **Compila soluzione**.  
  
-   O ancora, premere F7. Si tratta della scelta rapida da tastiera predefinita per le impostazioni di sviluppo per C/C++.  
  
-   Oppure nella [finestra di comando](/visualstudio/ide/reference/command-window) (scegliere **Visualizza** **Altre finestre** **Finestra di comando** sulla barra dei menu) digitare `Build.BuildSolution`.  
  
-   In alternativa, nella casella [Avvio veloce](/visualstudio/ide/reference/quick-launch-environment-options-dialog-box) digitare `build build solution`.  
  
 Per compilare un progetto selezionato in **Esplora soluzioni**, seguire queste procedure:  
  
-   Nella barra dei menu scegliere **Compila** **Compila \<Nome progetto>**.  
  
-   In alternativa, in **Esplora soluzioni** aprire il menu di scelta rapida del progetto e scegliere **Compila**.  
  
-   Oppure nella finestra di comando (scegliere **Visualizza** **Altre finestre** **Finestra di comando** sulla barra dei menu) digitare `Build.BuildOnlyProject`.  
  
-   In alternativa, nella casella Avvio veloce digitare `build project only build only <project name>`.  
  
 Quando si compila un'applicazione Visual C++ in Visual Studio, è possibile modificare molte impostazioni di compilazione nella finestra di dialogo Pagine delle proprietà del progetto. Per informazioni su come impostare le proprietà del progetto, vedere [Utilizzo di proprietà di progetto](../ide/working-with-project-properties.md).  
  
 Per un esempio che illustra come usare l'ambiente IDE per creare, compilare ed eseguire il debug di un progetto C++, vedere [Procedura dettagliata: Esplorare l'IDE di Visual Studio con C++](/visualstudio/ide/getting-started-with-cpp-in-visual-studio). Per un esempio d'uso dell'IDE per compilare un progetto C++/CLR, vedere [Procedura dettagliata: Compilazione di un programma C++ destinato a CLR in Visual Studio](../ide/walkthrough-compiling-a-cpp-program-that-targets-the-clr-in-visual-studio.md). Per un esempio d'uso dell'ambiente IDE per creare un'app di Windows Runtime, vedere [Create your first Windows Runtime app using C++](http://msdn.microsoft.com/library/windows/apps/hh974580.aspx) (Creare per la prima volta un'app Windows Runtime usando C++).  
  
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
 [VC++ Directories, Projects, Options Dialog Box](vcpp-directories-property-page.md) (Directory di VC++, Progetti, Finestra di dialogo Opzioni)  
 (Solo progetti MSBuild) Descrive come modificare il percorso di ricerca per i file eseguibili e includere file, file di libreria e file del codice sorgente durante una compilazione.  
  
 [Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio) (Compilazione e creazione)  
 Vengono fornite informazioni sulla compilazione in Visual Studio.  
  
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)  
 Fornisce i collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato (IDE) di Visual Studio.  
  
 [Riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md)  
 Vengono forniti collegamenti a una panoramica sulla compilazione di programmi in C++, sulle opzioni del compilatore e del linker e su altri strumenti di compilazione.  
  
 [Aggiornamento di progetti da versioni precedenti di Visual C++](../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md)  
 Visualizza collegamenti ad argomenti per l'aggiornamento del progetto C++ a versioni più recenti del set di strumenti del compilatore.  
  
[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)  
  Informazioni dettagliate per l'aggiornamento di applicazioni C++ create nelle versioni precedenti di Visual Studio, nonché per la migrazione di applicazioni create usando strumenti diversi da Visual Studio.  
  
## <a name="see-also"></a>Vedere anche  
 [App di Windows universale (C++)](../windows/universal-windows-apps-cpp.md)