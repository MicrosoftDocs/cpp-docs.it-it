---
title: -I (altre directory di inclusione) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.AdditionalIncludeDirectories
- VC.Project.VCCLCompilerTool.AdditionalIncludeDirectories
- /I
- VC.Project.VCNMakeTool.IncludeSearchPath
dev_langs:
- C++
helpviewer_keywords:
- /I compiler option [C++]
- Additional Include Directories compiler option
- I compiler option [C++]
- -I compiler option [C++]
- set include directories
- include directories, compiler option [C++]
ms.assetid: 3e9add2a-5ed8-4d15-ad79-5b411e313a49
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bfbf962a92af22d3e724c592fec6cf812b610dc7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="i-additional-include-directories"></a>/I (Directory di inclusione aggiuntive)
Aggiunge una directory all'elenco delle directory ricercato i file di inclusione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/I[ ]directory  
```  
  
## <a name="arguments"></a>Argomenti  
 `directory`  
 La directory da aggiungere all'elenco delle directory ricerca i file di inclusione.  
  
## <a name="remarks"></a>Note  
 Per aggiungere più di una directory, utilizzare questa opzione più volte. La ricerca di directory vengono eseguite solo fino a quando non viene trovato il file di inclusione specificato.  
  
 È possibile utilizzare questa opzione con le Ignora percorsi di inclusione Standard ([/X (Ignora a percorsi di inclusione Standard)](../../build/reference/x-ignore-standard-include-paths.md)) opzione.  
  
 Il compilatore cerca per le directory nell'ordine seguente:  
  
1.  Directory contenente il file di origine.  
  
2.  Directory specificate con il **/I** opzione, nell'ordine che vengono rilevate da CL.  
  
3.  Directory specificate nel **INCLUDE** variabile di ambiente.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **generale** pagina delle proprietà.  
  
4.  Modificare il **directory di inclusione aggiuntive** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.  
  
## <a name="example"></a>Esempio  
 Il comando seguente esegue la ricerca di file di inclusione richiesti da Main. c nell'ordine seguente: prima nella directory contenente Main. c, quindi nella directory \INCLUDE, quindi nella directory \MY\INCLUDE e infine nelle directory assegnato a di inclusione variabile di ambiente.  
  
```  
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)