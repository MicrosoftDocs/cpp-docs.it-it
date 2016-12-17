---
title: "Procedura dettagliata: creazione di un programma console Win32 (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
f1_keywords: 
  - "vcfirstapp"
  - "vccreatefirst"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni della riga di comando [C++], standard"
  - "applicazioni standard [C++]"
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
caps.latest.revision: 36
caps.handback.revision: 36
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: creazione di un programma console Win32 (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare Visual C\+\+ nell'ambiente di sviluppo integrato \(IDE\) di Visual Studio per creare programmi C\+\+ standard.  Seguendo i passaggi illustrati in questa procedura dettagliata è possibile creare un progetto, aggiungere un nuovo file al progetto, modificare il file per aggiungere il codice C\+\+ e infine compilare ed eseguire il programma utilizzando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 È possibile digitare un programma C\+\+ personalizzato oppure utilizzare uno dei programmi di esempio.  Il programma di esempio in questa procedura dettagliata è un'applicazione console.  In questa applicazione viene utilizzato il contenitore `set` nella libreria STL \(Standard Template Library\).  
  
 [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] è conforme a C\+\+ Standard 2003, con le seguenti eccezioni principali: ricerca del nome in due fasi, specifiche delle eccezioni ed esportazione.  Inoltre, [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] supporta diverse funzionalità C\+\+0x, ad esempio lambda, auto, static\_assert, riferimenti rvalue e modelli extern.  
  
> [!NOTE]
>  Se è necessaria la conformità allo standard, utilizzare l'opzione del compilatore **\/Za** per disabilitare le estensioni di Microsoft allo standard.  Per ulteriori informazioni, vedere [\/Za, \/Ze \(Disabilita estensioni linguaggio\)](../build/reference/za-ze-disable-language-extensions.md).  
  
## Prerequisiti  
 Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C\+\+.  
  
### Per creare un progetto e aggiungere un file di origine  
  
1.  Creare un progetto scegliendo **Nuovo** dal menu **File**, quindi **Progetto**.  
  
2.  Nel riquadro dei tipi di progetto di **Visual C\+\+** fare clic su **Win32**, quindi su **Progetto console Win32**.  
  
3.  Digitare il nome da assegnare al progetto.  
  
     Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, benché sia possibile digitarne uno diverso.  È inoltre possibile digitare un percorso diverso per il progetto.  
  
     Scegliere **OK** per creare il progetto.  
  
4.  In **Creazione guidata applicazione Win32** fare clic su **Avanti**, selezionare **Progetto vuoto**, quindi fare clic su **Fine**.  
  
5.  Se **Esplora soluzioni** non viene visualizzato, dal menu **Visualizza** scegliere **Esplora soluzioni**.  
  
6.  Aggiungere un nuovo file di origine al progetto come descritto di seguito.  
  
    1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sulla cartella **File di origine**, scegliere **Aggiungi**, quindi fare clic su **Nuovo elemento**.  
  
    2.  Fare clic su **File di C\+\+ \(.cpp\)** nel nodo **Codice**, digitare un nome per il file e scegliere **Aggiungi**.  
  
     Il file con estensione cpp verrà visualizzato nella cartella File di origine in **Esplora soluzioni** e verrà aperto nell'editor di Visual Studio.  
  
7.  Nel file nell'editor digitare un programma C\+\+ valido che utilizzi la libreria standard di C\+\+ oppure copiare uno dei programmi di esempio e incollarlo nel file.  
  
     È ad esempio possibile utilizzare il programma di esempio [set::find](../misc/set-find-stl-samples.md), vale a dire uno degli esempi della libreria STL \(Standard Template Library\) della Guida.  
  
     Se si utilizza il programma di esempio, si noti la direttiva `using namespace std;`,  che consente al programma di utilizzare `cout` e `endl` senza richiedere nomi completi \(`std::cout` e `std::endl`\).  
  
8.  Salvare il file.  
  
9. Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nella finestra **Output** vengono visualizzate informazioni relative allo stato della compilazione, ad esempio il percorso del log di compilazione e un messaggio indicante la riuscita dell'operazione.  
  
10. Scegliere **Avvia senza eseguire debug** dal menu **Debug**.  
  
     Se si è utilizzato il programma di esempio, verrà visualizzata una finestra di comando che segnalerà se nel set sono presenti determinati Integer.  
  
## Passaggi successivi  
 **Precedente:** [Creating Command\-Line Applications \(C\+\+\)](http://msdn.microsoft.com/it-it/2505d9ed-aca4-426a-9071-078a2d707254).  **Successivo:** [Procedura dettagliata: compilazione di un programma C\+\+ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)