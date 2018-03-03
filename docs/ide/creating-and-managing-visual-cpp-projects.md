---
title: Creazione e gestione di progetti Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vcprojects
- creatingmanagingVC
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, creating
- Visual C++ projects, creating
- projects [C++], creating
- Visual C++ projects
- ATL projects
ms.assetid: 11003cd8-9046-4630-a189-a32bf3b88047
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0c38f4c75a41de8b2f2b494941c6a52b1ff46fa4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-and-managing-msbuild-based-visual-c-projects"></a>Creazione e gestione di progetti basati su MSBuild Visual C++
MSBuild è il sistema di compilazione nativa per Visual C++ ed è in genere che il miglior compila il sistema da utilizzare per App UWP, nonché di applicazioni Desktop che usano le librerie MFC o ATL. MSBuild è strettamente integrato con il sistema di progetto e l'IDE di Visual Studio, ma è possibile utilizzare anche dalla riga di comando. A partire da Visual Studio 2017, Visual C++ supporta [CMake e altri sistemi non MSBuild tramite la funzionalità Apri cartella](non-msbuild-projects.md).

Un progetto basato su MSBuild è un file di progetto in formato XML (con estensione vcxproj) che specifica tutti i file e le risorse necessarie per compilare il programma, nonché altre impostazioni di configurazione, ad esempio la piattaforma di destinazione (x86, x64 o ARM) e se si sta compilando un versione di rilascio o la versione di debug del programma. Un progetto (o più progetti) è contenuto in una *soluzione*che, a sua volta, può contenere ad esempio diversi progetti DLL Win32 e un'unica applicazione console Win32 che usa tali DLL. Quando si compila il progetto, il motore MSBuild usa il file di progetto e produce il file eseguibile e/o altri output personalizzati eventualmente specificati.

È possibile creare progetti di Visual C++ scegliendo **File &#124; Nuovo &#124; Progetto**, assicurandosi che Visual C++ sia selezionato nel riquadro a sinistra e quindi scegliendo dall'elenco dei modelli di progetto nel riquadro centrale. Quando si fa clic su un modello, in molti casi una procedura guidata viene visualizzata che consente di impostare diverse proprietà del progetto prima che venga creato il progetto. È possibile visualizzare e modificare tali proprietà in un secondo momento utilizzando le pagine delle proprietà del progetto (**progetto &#124; Proprietà**).  
  
 È anche possibile creare nuovi progetti:  
  
-   scelta di **File &#124; Nuovo &#124; Progetto da codice esistente** e seguendo le istruzioni per aggiungere i file di codice sorgente esistenti. Questa opzione è consigliata per i progetti relativamente piccoli e semplici, ad esempio 25 file di codice sorgente o meno con poche o nessuna dipendenza complesse.  
  
-   A partire da un makefile e scegliendo il modello di progetto Makefile nella scheda Generale.  
  
-   creazione di un progetto vuoto (sotto il **generale** scheda) e aggiungere manualmente i file del codice sorgente facendo clic sul nodo del progetto in Esplora soluzioni e scegliendo **Aggiungi &#124; Elemento esistente**.  
  
-   using the [Win32 Application Wizard](../windows/win32-application-wizard.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 [Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)  
 Descrive i tipi di progetto basato su MSBuild che sono disponibili in Visual C++.  
  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)  
 Descrive i tipi di file che vengono usati con diversi tipi di progetto MSBuild.  
  
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)  
 Descrive come usare le procedure guidate per creare progetti con Visual C++.  
  
 [Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)  
 Descrive come usare le pagine delle proprietà e le finestre delle proprietà per specificare le impostazioni di progetto.  
  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)  
 Descrive come aumentare la funzionalità di un progetto aggiungendo classi, metodi, variabili e altri elementi.  
  
 [Procedura: Organizzare file di output dei progetti per le compilazioni](../ide/how-to-organize-project-output-files-for-builds.md)  
 Descrive come organizzare i file di output del progetto.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)  
 Fornisce i collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato (IDE) di Visual Studio.  
  
 [Riferimenti a Visual C++](http://msdn.microsoft.com/en-us/1ba03b5c-8229-4f63-b08c-6c12141d6ab1)  
 Contiene collegamenti ad argomenti in cui sono descritti i riferimenti ai linguaggi C e C++, le librerie fornite con Visual C++, il modello a oggetti estensibilità di Visual C++ e Microsoft Macro Assembler (MASM).  
  
## <a name="see-also"></a>Vedere anche  
 [Visual Studio SDK](http://msdn.microsoft.com/vstudio/extend)
