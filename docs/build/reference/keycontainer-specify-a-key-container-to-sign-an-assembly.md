---
title: "/KEYCONTAINER (Specifica un contenitore di chiavi per firmare un assembly) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.KeyContainer"
  - "/keycontainer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/KEYCONTAINER (opzione del linker)"
  - "KEYCONTAINER (opzione del linker)"
  - "-KEYCONTAINER (opzione del linker)"
ms.assetid: 94882d12-b77a-49c7-96d0-18a31aee001e
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /KEYCONTAINER (Specifica un contenitore di chiavi per firmare un assembly)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/KEYCONTAINER:name  
```  
  
## Note  
 dove  
  
 *name*  
 Il contenitore che contiene la chiave.  Se la stringa contiene uno spazio, racchiuderla tra doppie virgolette \(" "\).  
  
## Note  
 Il linker crea un assembly firmato mediante l'inserimento di una chiave pubblica nel manifesto dell'assembly e la firma dell'assembly finale con la chiave privata.  Per generare un file di chiave, immettere [sn \-k](../Topic/Sn.exe%20\(Strong%20Name%20Tool\).md) `file` sulla riga di comando.  L'opzione **sn \-i** installa la coppia di chiavi in un contenitore.  
  
 Se si esegue la compilazione con [\/LN](../../build/reference/ln-create-msil-module.md), il nome del file di chiave è contenuto nel modulo e incorporato nell'assembly che viene creato quando si compila un assembly che include un riferimento esplicito al modulo, mediante [\#using](../../preprocessor/hash-using-directive-cpp.md), oppure quando si esegue il collegamento con [\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md).  
  
 È anche possibile passare al compilatore le informazioni di crittografia mediante [\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md).  Utilizzare [\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) per ottenere un assembly parzialmente firmato.  Per ulteriori informazioni sulla firma di un assembly, vedere [Assembly con nome sicuro \(firma degli assembly\)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
 Di seguito sono elencate altre opzioni del linker che hanno effetto sulla generazione dell'assembly.  
  
-   [\/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [\/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [\/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)