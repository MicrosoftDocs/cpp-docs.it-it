---
title: '-FU (Name Forced #using File) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.ForcedUsingFiles
- /FU
- VC.Project.VCNMakeTool.ForcedUsingAssemblies
dev_langs:
- C++
helpviewer_keywords:
- -FU compiler option [C++]
- FU compiler option [C++]
- /FU compiler option [C++]
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c9a27d8c689b198bde47047969d38cf14b41c46
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fu-name-forced-using-file"></a>/FU (Specifica file #using da utilizzare)
Un'opzione del compilatore che è possibile utilizzare in alternativa al passaggio di un nome di file per [# direttiva using](../../preprocessor/hash-using-directive-cpp.md) nel codice sorgente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/FU file  
```  
  
## <a name="arguments"></a>Argomenti  
 `file`  
 Specifica il file di metadati per fare riferimento a questa compilazione.  
  
## <a name="remarks"></a>Note  
 L'opzione /FU accetta solo un nome file. Per specificare più file, utilizzare /FU con ciascuno di essi.  
  
 Se si utilizza [!INCLUDE[cppcli](../../build/reference/includes/cppcli_md.md)] e fanno riferimento i metadati per utilizzare il [assembly Friend](../../dotnet/friend-assemblies-cpp.md) funzionalità, è possibile utilizzare **/FU**. È necessario fare riferimento ai metadati nel codice utilizzando `#using` insieme all'attributo `[as friend]`. Gli assembly friend non sono supportati in [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]).  
  
 Per informazioni su come creare un assembly o un modulo per common language runtime (CLR), vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md). Per informazioni su come compilare in [!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)], vedere [compilazione di applicazioni e librerie](../../cppcx/building-apps-and-libraries-c-cx.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **avanzate** pagina delle proprietà.  
  
4.  Modificare il **Imponi #using** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)