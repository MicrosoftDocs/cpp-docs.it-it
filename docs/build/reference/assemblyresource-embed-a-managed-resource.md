---
title: "/ASSEMBLYRESOURCE (Incorpora una risorsa gestita) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.EmbedManagedResourceFile"
  - "/ASSEMBLYRESOURCE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ASSEMBLYRESOURCE (opzione del linker)"
  - "assembly [C++]"
  - "assembly [C++], collegamento di file di risorse"
  - "ASSEMBLYRESOURCE (opzione del linker)"
  - "-ASSEMBLYRESOURCE (opzione del linker)"
ms.assetid: 0ce6e1fb-921b-4b1b-a59c-d35388d789f2
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ASSEMBLYRESOURCE (Incorpora una risorsa gestita)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ASSEMBLYRESOURCE:filename[,[name][,PRIVATE]]  
```  
  
## Parametri  
 *filename*  
 Risorsa gestita che si desidera incorporare nell'assembly.  
  
 *name*  
 Facoltativa.  Nome logico della risorsa, utilizzato per caricare la risorsa stessa.  L'impostazione predefinita corrisponde al nome del file.  
  
 Facoltativamente è possibile specificare se il file deve essere privato nel manifesto dell'assembly.  Per impostazione predefinita, *name* è pubblico nell'assembly.  
  
## Note  
 Utilizzare l'opzione \/ASSEMBLYRESOURCE per incorporare una risorsa in un assembly.  
  
 Le risorse sono pubbliche nell'assembly quando vengono create con il linker.  Non è possibile assegnare un nuovo nome alla risorsa nell'assembly.  
  
 Se *nomefile* è un file di risorse di .NET Framework \(con estensione resources\) creato, ad esempio, nello strumento [Generatore di file di risorse \(Resgen.exe\)](../Topic/Resgen.exe%20\(Resource%20File%20Generator\).md) o nell'ambiente di sviluppo, sarà possibile accedervi con membri nello spazio dei nomi **System.Resources**. Per ulteriori informazioni, vedere [System.Resources.ResourceManager](https://msdn.microsoft.com/en-us/library/system.resources.resourcemanager.aspx).  Per tutte le altre risorse, utilizzare i metodi **GetManifestResource**\* della classe **System.Reflection.Assembly** per accedere alla risorsa in fase di esecuzione.  
  
 Di seguito sono elencate altre opzioni del linker che hanno effetto sulla generazione dell'assembly.  
  
-   [\/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [\/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [\/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
-   [\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Input**.  
  
4.  Modificare la proprietà **Incorpora file di risorse gestite**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EmbedManagedResourceFile%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)