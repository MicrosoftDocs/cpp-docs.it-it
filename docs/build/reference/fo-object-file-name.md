---
title: -Fo (nome File oggetto) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Fo
- VC.Project.VCCLCompilerTool.ObjectFile
- VC.Project.VCCLWCECompilerTool.ObjectFile
dev_langs:
- C++
helpviewer_keywords:
- Fo compiler option [C++]
- object files, naming
- /Fo compiler option [C++]
- -Fo compiler option [C++]
ms.assetid: 0e6d593e-4e7f-4990-9e6e-92e1dcbcf6e6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ea552b149270b8e644140a4dd51f220648ef376e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fo-object-file-name"></a>/Fo (Nome file oggetto)
Specifica un nome file oggetto (OBJ) o una directory da usare al posto dell'impostazione predefinita.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Fopathname  
```  
  
## <a name="remarks"></a>Note  
 Se non si utilizza questa opzione, il file oggetto utilizza il nome base del file di origine e l'estensione obj. È possibile utilizzare qualsiasi nome ed estensione desiderata, ma la convenzione consigliata consiste nell'usare. obj.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **File di output** .  
  
4.  Modificare il **nome File oggetto** proprietà.  Nell'ambiente di sviluppo, il file dell'oggetto deve avere un'estensione di. obj.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ObjectFile%2A>.  
  
## <a name="example"></a>Esempio  
 Riga di comando seguente crea un file oggetto denominato this. obj in una directory esistente, \OBJECT, nell'unità B.  
  
```  
CL /FoB:\OBJECT\ THIS.C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)