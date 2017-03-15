---
title: "Compilazione di progetti C++ in Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "compilazioni [C++], informazioni sulla compilazione in Visual Studio"
  - "progetti [C++], compilazione"
  - "progetti Visual C++, compilazione"
ms.assetid: 9e8bc1a2-bb17-4951-937a-c757ed88d2d1
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compilazione di progetti C++ in Visual Studio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) di Visual Studio sono disponibili vari modi per compilare un'intera soluzione o un singolo progetto.  È anche possibile modificare le impostazioni di compilazione e specificare procedure di compilazione personalizzate per aumentare l'efficienza del processo di sviluppo.  
  
 Per compilare una soluzione aperta in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e selezionata in **Esplora soluzioni**, è possibile procedere nei modi seguenti:  
  
-   Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
-   In alternativa, in **Esplora soluzioni** aprire il menu di scelta rapida della soluzione, quindi scegliere **Compila soluzione**.  
  
-   O ancora, premere F7.  Si tratta della scelta rapida da tastiera predefinita per le impostazioni di sviluppo per C\/C\+\+.  
  
-   Oppure, nella [Finestra di comando](../Topic/Command%20Window.md) \(scegliere **Visualizza**, **Altre finestre**, **Finestra di comando** sulla barra dei menu\), digitare `Build.BuildSolution`.  
  
-   In alternativa, nella casella [Avvio veloce](../Topic/Quick%20Launch,%20Environment,%20Options%20Dialog%20Box.md) digitare semplicemente `compila compila soluzione`.  
  
 Per compilare un progetto selezionato in **Esplora soluzioni**, è possibile procedere nei modi seguenti:  
  
-   Nella barra dei menu scegliere **Compila \<Nome progetto\>** dal menu **Compila**.  
  
-   In alternativa, in **Esplora soluzioni** aprire il menu di scelta rapida del progetto, quindi scegliere **Compila**.  
  
-   Oppure, nella Finestra di comando \(scegliere **Visualizza**, **Altre finestre**, **Finestra di comando** sulla barra dei menu\), digitare `Build.BuildOnlyProject`.  
  
-   In alternativa, nella casella Avvio veloce digitare semplicemente `compila solo il progetto compila solo <nome progetto>`.  
  
 Quando si compila un'applicazione Visual C\+\+ in Visual Studio, è possibile modificare molte impostazioni di compilazione nella finestra di dialogo Pagine delle proprietà del progetto.  Per informazioni su come impostare le proprietà del progetto, vedere [Utilizzo di proprietà di progetto](../ide/working-with-project-properties.md).  
  
 Per un esempio che illustra come usare l'ambiente IDE per creare, compilare ed eseguire il debug di un progetto C\+\+, vedere [Procedura dettagliata: esplorare l'IDE di Visual Studio con C\+\+](../Topic/Getting%20Started%20with%20C++%20in%20Visual%20Studio.md).  Per un esempio su come usare l'ambiente IDE per compilare un progetto C\+\+\/CLR, vedere [Procedura dettagliata: compilazione di un programma C\+\+ destinato a CLR in Visual Studio](../ide/walkthrough-compiling-a-cpp-program-that-targets-the-clr-in-visual-studio.md).  Per un esempio su come usare l'ambiente IDE per creare un'app di Windows Runtime, vedere [Creare la prima app di Windows Runtime scritta in C\+\+](http://msdn.microsoft.com/library/windows/apps/hh974580.aspx).  
  
 Per altre informazioni su come eseguire la compilazione, modificare le impostazioni di compilazione e specificare procedure di compilazione personalizzate, vedere gli articoli seguenti.  
  
## In questa sezione  
 [Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)  
 Viene descritto come personalizzare il processo di compilazione nell'ambiente di sviluppo integrato \(IDE\).  
  
 [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)  
 Viene presentato un elenco di macro che è possibile usare laddove siano accettate stringhe.  
  
 [Compilazione di progetti esterni](../ide/building-external-projects.md)  
 Vengono illustrati i progetti di compilazione che usano funzionalità esterne all'ambiente IDE.  
  
 [File di progetto](../ide/project-files.md)  
 Viene presentata la struttura XML di un file con estensione vcxproj.  
  
## Sezioni correlate  
 [VC\+\+ Directories, Projects, Options Dialog Box](http://msdn.microsoft.com/it-it/e027448b-c811-4c3d-8531-4325ad3f6e02)  
 Viene descritto come modificare il percorso di ricerca per i file eseguibili e includere file, file di libreria e file del codice sorgente durante una compilazione.  
  
 [Compilazione di applicazioni in Visual Studio](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)  
 Vengono fornite informazioni sulla compilazione in Visual Studio.  
  
 [Compilazione di programmi C\/C\+\+](../build/building-c-cpp-programs.md)  
 Vengono forniti collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato \(IDE\) di Visual Studio.  
  
 [Riferimenti alla compilazione in C\/C\+\+](../build/reference/c-cpp-building-reference.md)  
 Vengono forniti collegamenti a una panoramica sulla compilazione di programmi in C\+\+, sulle opzioni del compilatore e del linker e su altri strumenti di compilazione.  
  
 [Aggiornamento di progetti da versioni precedenti di Visual C\+\+](../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md)  
 Vengono forniti collegamenti ad articoli relativi ai problemi di aggiornamento di progetti Visual C\+\+ 6.0 e versioni successive a Visual C\+\+ .NET.  
  
 [Porting and Upgrading Programs](http://msdn.microsoft.com/it-it/c36c44b3-5a9b-4bb4-9b7a-469aa770ed00)  
 Vengono fornite informazioni dettagliate sul porting di applicazioni e vengono illustrati i makefile.  
  
## Vedere anche  
 [Roadmap for Windows Store apps using C\+\+](http://msdn.microsoft.com/it-it/0b71e4a4-5d8a-4a20-b2ec-e40062675ec1)