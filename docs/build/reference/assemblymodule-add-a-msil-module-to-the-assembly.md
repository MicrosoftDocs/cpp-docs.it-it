---
title: "/ASSEMBLYMODULE (Aggiunge un modulo MSIL all&#39;assembly) | Microsoft Docs"
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
  - "/assemblymodule"
  - "VC.Project.VCLinkerTool.AddModuleNamesToAssembly"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ASSEMBLYMODULE (opzione del linker)"
  - "assembly [C++]"
  - "assembly [C++], aggiunta di moduli"
  - "ASSEMBLYMODULE (opzione del linker)"
  - "-ASSEMBLYMODULE (opzione del linker)"
ms.assetid: 67357da8-e4b6-49fd-932c-329a5777f143
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ASSEMBLYMODULE (Aggiunge un modulo MSIL all&#39;assembly)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ASSEMBLYMODULE:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Modulo che si desidera includere nell'assembly.  
  
## Note  
 L'opzione \/ASSEMBLYMODULE consente di aggiungere a un assembly un riferimento a un modulo.  Le informazioni sui tipi presenti nel modulo non saranno disponibili al programma assembly in cui è stato aggiunto il riferimento al modulo.  Tali informazioni saranno tuttavia disponibili a qualsiasi programma in cui viene fatto riferimento all'assembly.  
  
 Utilizzare [\#using](../../preprocessor/hash-using-directive-cpp.md) per aggiungere a un assembly un riferimento a un modulo e per rendere disponibili al programma assembly le informazioni sul tipo del modulo.  
  
 Si consideri ad esempio il seguente scenario:  
  
1.  Creare un modulo con [\/LN](../../build/reference/ln-create-msil-module.md).  
  
2.  Utilizzare \/ASSEMBLYMODULE in un progetto differente per includere il modulo nella compilazione corrente, con la conseguente creazione di un assembly.  In questo progetto non verrà fatto riferimento al modulo con `#using`.  
  
3.  In qualsiasi progetto in cui viene fatto riferimento all'assembly sarà ora possibile utilizzare tipi definiti nel modulo.  
  
 Di seguito sono elencate altre opzioni del linker che hanno effetto sulla generazione dell'assembly.  
  
-   [\/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [\/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [\/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
-   [\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [\/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
 Il linker di Visual C\+\+ accetta i file .netmodule come input e il file di output generato dal linker sarà un assembly o un .netmodule senza dipendenza di runtime da uno dei .netmodule che sono stati introdotti nel linker.  Per ulteriori informazioni, vedere [.File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Input**.  
  
4.  Modificare la proprietà **Aggiungi modulo all'assembly**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)