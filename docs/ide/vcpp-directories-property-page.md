---
title: "Directory di VC++ (pagina delle propriet&#224;) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCDirectories.IncludePath"
  - "VC.Project.VCDirectories.ReferencePath"
  - "VC.Project.VCDirectories.SourcePath"
  - "VC.Project.VCDirectories.LibraryWPath"
  - "VC.Project.VCDirectories.ExecutablePath"
  - "VC.Project.VCDirectories.LibraryPath"
  - "VS.ToolsOptionsPages.Projects.VCDirectories"
  - "VC.Project.VCDirectories.ExcludePath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Directory di VC++ (pagina delle proprietà)"
ms.assetid: 428eeef6-f127-4271-b3ea-0ae6f2c3d624
caps.latest.revision: 25
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Directory di VC++ (pagina delle propriet&#224;)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica le directory che dovranno essere utilizzate da Visual Studio per la compilazione di un progetto.  Per accedere a questa pagina delle proprietà, in **Esplora soluzioni** aprire il menu di scelta rapida del progetto e scegliere **Proprietà**, quindi nel riquadro sinistro della finestra di dialogo **Pagine delle proprietà** espandere **Proprietà di configurazione** e selezionare **Directory di VC\+\+**.  
  
 Quando si utilizza Visual Studio per creare un progetto, alcune directory vengono ereditate.  Molte di queste vengono fornite come macro.  Per esaminare il valore corrente di una macro, nel riquadro destro della pagina **Directory di VC\+\+** selezionare una riga, ad esempio **Directory di inclusione**, scegliere il pulsante freccia giù sulla destra, scegliere **Modifica**, quindi fare clic sul pulsante **Macro** nella finestra di dialogo che viene visualizzata.  Per ulteriori informazioni, vedere i post di blog seguenti: [Directory di VC\+\+](http://blogs.msdn.com/b/vsproject/archive/2009/07/07/vc-directories.aspx), [Proprietà ereditate e finestre delle proprietà](http://blogs.msdn.com/b/vsproject/archive/2009/06/23/inherited-properties-and-property-sheets.aspx) e [Guida all'aggiornamento dei progetti di Visual Studio 2010 C\+\+](http://blogs.msdn.com/b/vcblog/archive/2010/03/02/visual-studio-2010-c-project-upgrade-guide.aspx).  
  
## Tipi di directory  
 È anche possibile specificare altre directory, come segue.  
  
 **Directory file eseguibili**  
 Directory in cui cercare file eseguibili.  Corrisponde alla variabile di ambiente **PATH**.  
  
 **Directory di inclusione**  
 Cartelle in cui cercare file di inclusione a cui viene fatto riferimento nel codice sorgente.  Corrisponde alla variabile di ambiente **INCLUDE**.  
  
 **Directory riferimenti**  
 Directory in cui cercare file di modulo \(metadati\) e assembly a cui viene fatto riferimento nel codice sorgente tramite la direttiva [\#using](../preprocessor/hash-using-directive-cpp.md).  Corrisponde alla variabile di ambiente **LIBPATH**.  
  
 **Directory di libreria**  
 Directory in cui cercare i file delle librerie \(LIB\), incluse le librerie di runtime.  Corrisponde alla variabile di ambiente **LIB**.  Questa impostazione non riguarda i file OBJ. Per creare un collegamento a un file OBJ, selezionare **Dipendenze libreria aggiuntiva** nella pagina delle proprietà [Linker](../ide/linker-property-pages.md) **Generale** e specificare il percorso relativo del file.  
  
 **Directory file di origine**  
 Directory in cui cercare file di origine da utilizzare per IntelliSense.  
  
 **Escludi directory**  
 Directory in cui non cercare le dipendenze di compilazione.  
  
#### Per specificare o modificare le impostazioni delle directory  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida del progetto che si desidera modificare, quindi scegliere **Proprietà**.  
  
2.  Nel riquadro sinistro della finestra di dialogo **Pagine delle proprietà** espandere **Proprietà di configurazione**, quindi selezionare **Directory di VC\+\+**.  
  
3.  Per modificare uno degli elenchi di directory, scegliere il pulsante freccia giù sulla destra, quindi fare clic su **Modifica**.  
  
     Nella casella della finestra di dialogo che viene visualizzata è possibile aggiungere o rimuovere valori e cambiare l'ordine di visualizzazione dei valori.  È anche possibile abilitare o disabilitare l'ereditarietà del progetto per eventuali impostazioni selezionando o deselezionando **Eredita da padre o da impostazioni predefinite progetto**.  
  
## Condivisione delle impostazioni  
 È possibile condividere le proprietà del progetto con altri utenti o tra più computer.  Per ulteriori informazioni, vedere [Utilizzo di proprietà di progetto](../ide/working-with-project-properties.md).  
  
## Vedere anche  
 [Utilizzo di proprietà di progetto](../ide/working-with-project-properties.md)