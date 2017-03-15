---
title: "Pagine delle propriet&#224; Linker | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.RegisterOutput"
  - "VC.Project.VCLinkerTool.IgnoreImportLibrary"
  - "VC.Project.VCLinkerTool.UseLibraryDependencyInputs"
  - "VC.Project.VCLinkerTool.LinkLibraryDependencies"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reindirizzamento per utente"
  - "Linker (pagine delle proprietà)"
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Pagine delle propriet&#224; Linker
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento sono illustrate le seguenti proprietà dalla pagina delle proprietà **Generale** del linker:  
  
 **Ignora libreria di importazione**  
 Consente di indicare al linker di non collegare i file LIB generati dal progetto ad alcun progetto dipendente da quello corrente.  In questo modo, i file DLL che non producono un file LIB quando vengono compilati possono essere gestiti dal sistema del progetto.  Se un progetto dipende da un altro progetto che produce una DLL, il file LIB prodotto da tale progetto figlio verrà collegato automaticamente dal sistema del progetto.  L'operazione può non essere necessaria per i progetti che producono DLL COM o DLL di sole risorse, che non hanno esportazioni significative.  Se una DLL non ha esportazioni, il linker non genererà un file LIB.  Se sul disco non sono presenti file LIB di esportazione e il sistema del progetto specifica al linker di collegarsi con questa DLL mancante, il collegamento avrà esito negativo.  
  
 Utilizzare **Ignora libreria di importazione** per risolvere questo problema.  Se l'opzione è impostata su `Yes`, la presenza o l'assenza del file LIB verrà ignorata dal sistema del progetto e i progetti dipendenti da questo progetto non potranno eseguire il collegamento al file LIB inesistente.  
  
 Per accedere a questa proprietà a livello di codice, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.  
  
 **Registra output**  
 Consente di eseguire regsvr32.exe \/s $\(TargetPath\), valido solo per i progetti DLL.  Per i progetti EXE questa proprietà viene ignorata.  Per registrare un output EXE, impostare un evento di post\-compilazione sulla configurazione per eseguire la registrazione personalizzata, che è sempre necessaria per i file EXE registrati.  
  
 Per accedere a questa proprietà a livello di codice, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.  
  
 **Reindirizzamento per utente**  
 A registrazione in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è stata sempre eseguita in HKEY\_CLASSES\_ROOT \(HKCR\).  Con [!INCLUDE[wiprlhext](../c-runtime-library/reference/includes/wiprlhext_md.md)], per accedere a HKCR è necessario eseguire [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in modalità elevata.  Gli sviluppatori non sempre desiderano eseguire in modalità elevata ma devono comunque lavorare con la registrazione.  Il reindirizzamento per utente consente di effettuare la registrazione senza dovere eseguire in questa modalità.  
  
 Il reindirizzamento per utente forza il reindirizzamento di tutte le scritture presenti in HKCR in HKEY\_CURRENT\_USER \(HKCU\).  Se il reindirizzamento per utente è disattivato, può determinare un [Errore di compilazione progetto PRJ0050](../error-messages/tool-errors/project-build-error-prj0050.md) quando il programma tenta di scrivere in HKCR.  
  
 **Collega dipendenze libreria**  
 Consente il collegamento dei file LIB creati da progetti dipendenti.  È in genere opportuno collegare il file LIB.  
  
 È inoltre possibile specificare un file .obj fornendo il nome e il percorso relativi al file, ad esempio **..\\..\\MyLibProject\\MyObjFile.obj**.  Se il codice sorgente per il file .obj include un header precompilato, ad esempio pch.h, allora il file pch.obj si trova nella stessa cartella di **MyObjFile.obj** ed è inoltre necessario aggiungere **pch.obj** come dipendenza aggiuntiva.  
  
 **Usa input dipendenze di libreria**  
 In un progetto di grandi dimensioni, quando in un progetto dipendente viene creato un file LIB viene disabilitato il collegamento incrementale.  In presenza di numerosi progetti dipendenti in cui vengono creati file LIB, la compilazione dell'applicazione può richiedere un'elevata quantità di tempo.  Quando questa proprietà è impostata su `Yes`, il sistema del progetto collega i file OBJ per i file LIB creati da progetti dipendenti, consentendo in questo modo il collegamento incrementale.  
  
 Per informazioni sull'accesso alla pagina delle proprietà **Generale** per il linker, vedere [Procedura: specificare le proprietà del progetto tramite le pagine delle proprietà](../misc/how-to-specify-project-properties-with-property-pages.md).  
  
## Vedere anche  
 [VC\+\+ Directories, Projects and Solutions, Options Dialog Box](http://msdn.microsoft.com/it-it/e027448b-c811-4c3d-8531-4325ad3f6e02)   
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)