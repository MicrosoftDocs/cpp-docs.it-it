---
title: -/ASSEMBLYRESOURCE (incorpora una risorsa gestita) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.EmbedManagedResourceFile
- /ASSEMBLYRESOURCE
dev_langs:
- C++
helpviewer_keywords:
- ASSEMBLYRESOURCE linker option
- assemblies [C++]
- -ASSEMBLYRESOURCE linker option
- assemblies [C++], linking resource files
- /ASSEMBLYRESOURCE linker option
ms.assetid: 0ce6e1fb-921b-4b1b-a59c-d35388d789f2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 88afe292905ee46c1e939d29f787055f98058dc9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="assemblyresource-embed-a-managed-resource"></a>/ASSEMBLYRESOURCE (Incorpora una risorsa gestita)
```  
/ASSEMBLYRESOURCE:filename[,[name][,PRIVATE]]  
```  
  
## <a name="parameters"></a>Parametri  
 *filename*  
 La risorsa gestita che si desidera incorporare nell'assembly.  
  
 *name*  
 Facoltativo. Il nome logico per la risorsa. il nome utilizzato per caricare la risorsa. L'impostazione predefinita corrisponde al nome del file.  
  
 Facoltativamente, è possibile specificare se il file deve essere privato nel manifesto dell'assembly. Per impostazione predefinita, *nome* è pubblico nell'assembly.  
  
## <a name="remarks"></a>Note  
 Utilizzare l'opzione /ASSEMBLYRESOURCE per incorporare una risorsa in un assembly.  
  
 Le risorse sono pubbliche nell'assembly quando creato con il linker. Il linker non è possibile rinominare la risorsa nell'assembly.  
  
 Se *filename* è un file di risorse (con estensione resources) di .NET Framework creato, ad esempio, mediante il [generatore di File di risorse (Resgen.exe)](/dotnet/framework/tools/resgen-exe-resource-file-generator) oppure nell'ambiente di sviluppo, è possibile accedervi con i membri il **System. Resources** dello spazio dei nomi (vedere [System.Resources.ResourceManager](https://msdn.microsoft.com/en-us/library/system.resources.resourcemanager.aspx) per altre informazioni). Per tutte le altre risorse, usare il **GetManifestResource** \* metodi **casi** classe per accedere alla risorsa in fase di esecuzione.  
  
 Altre opzioni dei linker che influiscono sulla generazione di assembly sono:  
  
-   [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
-   [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **Input** pagina delle proprietà.  
  
4.  Modificare il **incorpora File di risorse gestite** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EmbedManagedResourceFile%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)