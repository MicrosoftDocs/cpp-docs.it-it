---
title: -X (ignorare Standard includono i percorsi) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /x
- VC.Project.VCCLCompilerTool.OVERWRITEStandardIncludePath
- VC.Project.VCCLWCECompilerTool.OVERWRITEStandardIncludePath
dev_langs:
- C++
helpviewer_keywords:
- /X compiler option [C++]
- include files, ignore standard path
- -X compiler option [C++]
- include directories, ignore standard
- X compiler option
- Ignore Standard Include Paths compiler option
ms.assetid: 16bdf2cc-c8dc-46e4-bdcc-f3caeba5e1ef
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5d246c43a1f234426b33ac640b3e1bb706d2f72
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="x-ignore-standard-include-paths"></a>/X (Ignora percorso di inclusione standard)
Impedisce al compilatore di cercare i file di inclusione nelle directory specificate nelle variabili di ambiente PATH e INCLUDE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/X  
```  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare questa opzione con il [/I (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md) (**/I**`directory`) opzione.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **preprocessore** pagina delle proprietà.  
  
4.  Modificare il **Ignora percorso di inclusione Standard** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.IgnoreStandardIncludePath%2A>.  
  
## <a name="example"></a>Esempio  
 Il comando seguente, `/X` indica al compilatore di ignorare percorsi specificati dalle variabili di ambiente PATH e INCLUDE e `/I` specifica la directory in cui cercare i file di inclusione:  
  
```  
CL /X /I \ALT\INCLUDE MAIN.C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)