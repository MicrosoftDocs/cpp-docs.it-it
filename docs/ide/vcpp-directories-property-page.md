---
title: "Pagina delle proprietà Directory VC + + | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCDirectories.IncludePath
- VC.Project.VCDirectories.ReferencePath
- VC.Project.VCDirectories.SourcePath
- VC.Project.VCDirectories.LibraryWPath
- VC.Project.VCDirectories.ExecutablePath
- VC.Project.VCDirectories.LibraryPath
- VS.ToolsOptionsPages.Projects.VCDirectories
- VC.Project.VCDirectories.ExcludePath
dev_langs: C++
helpviewer_keywords: VC++ Directories Property Page
ms.assetid: 428eeef6-f127-4271-b3ea-0ae6f2c3d624
caps.latest.revision: "25"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 30a54b1d90585e6433f059acf30991ca53948d60
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="vc-directories-property-page"></a>Directory di VC++ (pagina delle proprietà)
Specifica le directory che dovranno essere utilizzate da Visual Studio per la compilazione di un progetto. Per accedere a questa pagina delle proprietà, in **Esplora**, aprire il menu di scelta rapida per il progetto e scegliere **proprietà**e quindi nel riquadro sinistro della finestra di **pagine delle proprietà** finestra di dialogo espandere **le proprietà di configurazione** e selezionare **directory di VC + +**.  
  
 Quando si utilizza Visual Studio per creare un progetto, alcune directory vengono ereditate. Molte di queste vengono fornite come macro. Per analizzare il valore corrente di una macro, nel riquadro destro del **directory di VC + +** pagina, selezionare una riga, ad esempio, **directory di inclusione**, fare clic sul pulsante freccia in giù a destra, scegliere  **Modifica**, quindi nella finestra di dialogo visualizzata, scegliere il **macro** pulsante. Per ulteriori informazioni, vedere questi post di blog: [directory di VC + +](http://blogs.msdn.com/b/vsproject/archive/2009/07/07/vc-directories.aspx), [proprietà ereditata e finestre delle proprietà](http://blogs.msdn.com/b/vsproject/archive/2009/06/23/inherited-properties-and-property-sheets.aspx), e [Visual Studio 2010 C++ progetto Guida all'aggiornamento](http://blogs.msdn.com/b/vcblog/archive/2010/03/02/visual-studio-2010-c-project-upgrade-guide.aspx).  
  
## <a name="directory-types"></a>Tipi di directory  
 È anche possibile specificare altre directory, come segue.  
  
 **Directory file eseguibili**  
 Directory in cui cercare file eseguibili. Corrisponde alla **percorso** variabile di ambiente.  
  
 **Directory di inclusione**  
 Cartelle in cui cercare file di inclusione a cui viene fatto riferimento nel codice sorgente. Corrisponde alla **INCLUDE** variabile di ambiente.  
  
 **Directory riferimenti**  
 Directory in cui cercare gli assembly e i file di modulo (metadati) che fanno riferimento a codice sorgente tramite la [#using](../preprocessor/hash-using-directive-cpp.md) direttiva. Corrisponde alla **LIBPATH** variabile di ambiente.  
  
 **Directory delle librerie**  
 Directory in cui cercare i file delle librerie (LIB), incluse le librerie di runtime. Corrisponde alla **LIB** variabile di ambiente. Questa impostazione non riguarda i file con estensione obj. Per collegare un file con estensione obj, nel [Linker](../ide/linker-property-pages.md)**generale** pagina delle proprietà, seleziona **dipendenze libreria aggiuntiva** e quindi specificare il percorso relativo del file.  
  
 **Directory di origine**  
 Directory in cui cercare file di origine da utilizzare per IntelliSense.  
  
 **Escludi directory**  
 Directory in cui non cercare le dipendenze di compilazione.  
  
#### <a name="to-specify-or-modify-directory-settings"></a>Per specificare o modificare le impostazioni delle directory  
  
1.  In **Esplora**, aprire il menu di scelta rapida per il progetto che si desidera modificare, quindi scegliere **proprietà**.  
  
2.  Nel riquadro a sinistra del **pagine delle proprietà** finestra di dialogo espandere **le proprietà di configurazione** e quindi selezionare **directory di VC + +**.  
  
3.  Per modificare uno degli elenchi di directory, selezionarla, fare clic sul pulsante freccia in giù a destra e quindi scegliere **modifica**.  
  
     Nella casella della finestra di dialogo che viene visualizzata è possibile aggiungere o rimuovere valori e cambiare l'ordine di visualizzazione dei valori. È possibile modificare anche se il progetto eredita le impostazioni selezionando o deselezionando **eredita da padre o progetto predefinite**.  
  
## <a name="sharing-the-settings"></a>Condivisione delle impostazioni  
 È possibile condividere le proprietà del progetto con altri utenti o tra più computer. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
