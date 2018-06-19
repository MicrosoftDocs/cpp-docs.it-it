---
title: -doc (elabora i commenti di documentazione) (C/C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles
- /doc
- VC.Project.VCCLCompilerTool.XMLDocumentationFileName
dev_langs:
- C++
helpviewer_keywords:
- /doc compiler option [C++]
- comments, C++ code
- XML documentation, comments in source files
- -doc compiler option [C++]
ms.assetid: b54f7e2c-f28f-4f46-9ed6-0db09be2cc63
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 899ff6b774c365ce9df3019ef5ba6d08d0d7b93d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371281"
---
# <a name="doc-process-documentation-comments-cc"></a>/doc (Elabora i commenti per la documentazione) (C/C++)
Indica al compilatore di commenti relativi alla documentazione di processo nel file di codice sorgente e di creare un file xdc per ogni file di codice sorgente con i commenti della documentazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/doc[name]  
```  
  
## <a name="arguments"></a>Argomenti  
 `name`  
 Il nome del file xdc che verrà creato. Valido solo quando la compilazione viene passato un file con estensione cpp.  
  
## <a name="remarks"></a>Note  
 I file xdc vengono elaborati in un file XML con xdcmake.exe. Per ulteriori informazioni, vedere [riferimento a XDCMake](../../ide/xdcmake-reference.md).  
  
 È possibile aggiungere commenti relativi alla documentazione per i file del codice sorgente. Per ulteriori informazioni, vedere [tag consigliati per i commenti relativi alla documentazione](../../ide/recommended-tags-for-documentation-comments-visual-cpp.md).  
  
 Per usare il file XML generato con IntelliSense, verificare il nome del file del file XML lo stesso nome di assembly che si desidera supportare e inserire il file con estensione XML è nella stessa directory dell'assembly. Quando l'assembly viene fatto riferimento nel progetto di Visual Studio, il file XML è inoltre disponibili. Per ulteriori informazioni, vedere [utilizzando IntelliSense](/visualstudio/ide/using-intellisense) e [XML commenti al codice](/visualstudio/ide/supplying-xml-code-comments).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **C/C++** nodo.  
  
4.  Selezionare il **i file di Output** pagina delle proprietà.  
  
5.  Modificare il **genera file di documentazione XML** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GenerateXMLDocumentationFiles%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)