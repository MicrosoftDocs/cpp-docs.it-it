---
title: -ASSEMBLYLINKRESOURCE (collegamento a risorsa .NET Framework) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /ASSEMBLYLINKRESOURCE
- VC.Project.VCLinkerTool.AssemblyLinkResource
dev_langs:
- C++
helpviewer_keywords:
- -ASSEMBLYLINKRESOURCE linker option
- ASSEMBLYLINKRESOURCE linker option
- /ASSEMBLYLINKRESOURCE linker option
ms.assetid: 8b6ad184-1b33-47a4-8513-4803cf915b64
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a922ac1a96a59d574f46f7b04db8b160a5079918
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="assemblylinkresource-link-to-net-framework-resource"></a>/ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)
```  
/ASSEMBLYLINKRESOURCE:filename  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *filename*  
 File di risorse .NET Framework a cui si vuole stabilire un collegamento dall'assembly.  
  
## <a name="remarks"></a>Note  
 L'opzione /ASSEMBLYLINKRESOURCE crea un collegamento a una risorsa di .NET Framework nel file di output. il file di risorse non viene inserito nel file di output. [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md) incorpora un file di risorse nel file di output.  
  
 Risorse collegate sono pubbliche nell'assembly quando creato con il linker.  
  
 /ASSEMBLYLINKRESOURCE richiede che la compilazione includa [/clr](../../build/reference/clr-common-language-runtime-compilation.md); [/LN](../../build/reference/ln-create-msil-module.md) o [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md) non è consentito con /ASSEMBLYLINKRESOURCE.  
  
 Se *filename* è un file di risorse di .NET Framework creato ad esempio, dal [Resgen.exe](/dotnet/framework/tools/resgen-exe-resource-file-generator) oppure nell'ambiente di sviluppo, è possibile accedervi con i membri di **Resources** dello spazio dei nomi. Per ulteriori informazioni, vedere [System.Resources.ResourceManager](https://msdn.microsoft.com/en-us/library/system.resources.resourcemanager.aspx). Per tutte le altre risorse, usare il **GetManifestResource** \* metodi di **casi** classe per accedere alla risorsa in fase di esecuzione.  
  
 *nome del file* può avere qualsiasi formato di file. Potrebbe ad esempio, si desidera includere una DLL nativa dell'assembly, pertanto può essere installato nella Global Assembly Cache e accedervi dal codice gestito nell'assembly.  
  
 Altre opzioni dei linker che influiscono sulla generazione di assembly sono:  
  
-   [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
-   [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)