---
title: -AI (specifica le directory di metadati) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.AdditionalUsingDirectories
- VC.Project.VCNMakeTool.AssemblySearchPath
- /AI
- VC.Project.VCCLWCECompilerTool.AdditionalUsingDirectories
dev_langs:
- C++
helpviewer_keywords:
- /AI compiler option [C++]
- AI compiler option [C++]
- -AI compiler option [C++]
ms.assetid: fb9c1846-504c-4a3b-bb39-c8696de32f6f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bde5c93c8a211bb0fc66028932a0a7d50415236d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369432"
---
# <a name="ai-specify-metadata-directories"></a>/AI (Specifica le directory di metadati)
Specifica una directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file passati alla direttiva `#using`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/AIdirectory  
```  
  
## <a name="arguments"></a>Argomenti  
 `directory`  
 Directory o percorso in cui il compilatore effettua la ricerca.  
  
## <a name="remarks"></a>Note  
 Solo una directory può essere passata a un **/AI** chiamata. Specificare uno **/AI** opzione per ogni percorso in cui il compilatore effettuerà la ricerca. Ad esempio, per aggiungere C:\Project\Meta e C:\Common\Meta al percorso di ricerca del compilatore per `#using` aggiungere le direttive, `/AI"C:\Project\Meta" /AI"C:\Common\Meta"` alla riga di comando del compilatore o aggiungere ogni directory di **aggiuntivi #using directory** proprietà in Visual Studio.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro di spostamento, selezionare **le proprietà di configurazione**, **C/C++**, **generale**.  
  
3.  Modificare il **aggiuntivi #using directory** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalUsingDirectories%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Direttiva #using](../../preprocessor/hash-using-directive-cpp.md)