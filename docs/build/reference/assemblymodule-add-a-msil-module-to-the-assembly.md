---
title: -ASSEMBLYMODULE (aggiungere un modulo MSIL all'Assembly) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /assemblymodule
- VC.Project.VCLinkerTool.AddModuleNamesToAssembly
dev_langs:
- C++
helpviewer_keywords:
- ASSEMBLYMODULE linker option
- assemblies [C++], adding modules to
- assemblies [C++]
- /ASSEMBLYMODULE linker option
- -ASSEMBLYMODULE linker option
ms.assetid: 67357da8-e4b6-49fd-932c-329a5777f143
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f408bcf58808f64c652f0b1715c47aba7237c160
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32373855"
---
# <a name="assemblymodule-add-a-msil-module-to-the-assembly"></a>/ASSEMBLYMODULE (Aggiunge un modulo MSIL all'assembly)
```  
/ASSEMBLYMODULE:filename  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *filename*  
 Il modulo che si desidera includere in questo assembly.  
  
## <a name="remarks"></a>Note  
 L'opzione /ASSEMBLYMODULE consente di aggiungere un riferimento al modulo a un assembly. Informazioni sul tipo di modulo non sarà disponibile per il programma assembly a cui aggiunta il riferimento modulo. Informazioni sul tipo di modulo, tuttavia, saranno disponibili per tutti i programmi che fa riferimento all'assembly.  
  
 Utilizzare [#using](../../preprocessor/hash-using-directive-cpp.md) per aggiungere un riferimento al modulo a un assembly e rendere disponibile al programma assembly informazioni sul tipo del modulo.  
  
 Prendere ad esempio in considerazione i seguenti scenari:  
  
1.  Creare un modulo con [/LN](../../build/reference/ln-create-msil-module.md).  
  
2.  Per includere i moduli nella compilazione corrente, verrà creato un assembly, utilizzare /ASSEMBLYMODULE in un progetto diverso. Questo progetto non verrà fatto riferimento il modulo con `#using`.  
  
3.  Qualsiasi progetto che fa riferimento questo assembly ora possibile usare anche tipi definiti nel modulo.  
  
 Altre opzioni dei linker che influiscono sulla generazione di assembly sono:  
  
-   [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
-   [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
 Il linker di Visual C++ accetta i file con estensione netmodule come input e il file di output generato dal linker sarà un assembly o un file netmodule senza dipendenza di runtime dai file netmodule che sono stati introdotti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **Input** pagina delle proprietà.  
  
4.  Modificare il **Aggiungi modulo all'Assembly** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)