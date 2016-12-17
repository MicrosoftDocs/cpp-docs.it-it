---
title: "/ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework) | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ASSEMBLYLINKRESOURCE"
  - "VC.Project.VCLinkerTool.AssemblyLinkResource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ASSEMBLYLINKRESOURCE (opzione del linker)"
  - "ASSEMBLYLINKRESOURCE (opzione del linker)"
  - "-ASSEMBLYLINKRESOURCE (opzione del linker)"
ms.assetid: 8b6ad184-1b33-47a4-8513-4803cf915b64
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ASSEMBLYLINKRESOURCE:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Rappresenta il file di risorse .NET Framework cui si desidera stabilire un collegamento dall'assembly.  
  
## Note  
 L'opzione \/ASSEMBLYLINKRESOURCE crea un collegamento a una risorsa .NET Framework nel file di output. Il file di risorse non viene inserito nel file di output.  [\/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md) incorpora un file di risorse nel file di output.  
  
 Le risorse collegate sono pubbliche nell'assembly quando vengono create con il linker.  
  
 \/ASSEMBLYLINKRESOURCE richiede che la compilazione includa [\/clr](../../build/reference/clr-common-language-runtime-compilation.md); non è consentito utilizzare [\/LN](../../build/reference/ln-create-msil-module.md) o [\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md) con \/ASSEMBLYLINKRESOURCE.  
  
 Se *filename* è un file di risorse .NET Framework creato, ad esempio, mediante [Resgen.exe](../Topic/Resgen.exe%20\(Resource%20File%20Generator\).md) oppure nell'ambiente di sviluppo, sarà accessibile con i membri dello spazio dei nomi **System.Resources**.  Per ulteriori informazioni, vedere [System.Resources.ResourceManager](https://msdn.microsoft.com/en-us/library/system.resources.resourcemanager.aspx).  Per tutte le altre risorse, utilizzare i metodi **GetManifestResource**\* della classe **System.Reflection.Assembly** per accedere alla risorsa in fase di esecuzione.  
  
 *Filename* può rappresentare un qualsiasi formato di file.  Può ad esempio risultare opportuno includere una DLL nativa nell'assembly, in modo da consentirne l'installazione nella Global Assembly Cache e l'accesso dal codice gestito nell'assembly.  
  
 Di seguito sono elencate altre opzioni del linker che hanno effetto sulla generazione dell'assembly.  
  
-   [\/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [\/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [\/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
-   [\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
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