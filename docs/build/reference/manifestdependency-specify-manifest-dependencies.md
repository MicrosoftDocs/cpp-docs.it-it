---
title: -/MANIFESTDEPENDENCY (specifica le dipendenze tra manifesti) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.AdditionalManifestDependencies
dev_langs:
- C++
helpviewer_keywords:
- MANIFESTDEPENDENCY linker option
- /MANIFESTDEPENDENCY linker option
- -MANIFESTDEPENDENCY linker option
ms.assetid: e4b68313-33a2-4c3e-908e-ac2b9f7d6a73
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f9b2de39f5b5340eff22c7e22244aca3d05af67
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376572"
---
# <a name="manifestdependency-specify-manifest-dependencies"></a>/MANIFESTDEPENDENCY (Specifica le dipendenze tra manifesti)
```  
/MANIFESTDEPENDENCY:manifest_dependency  
```  
  
## <a name="remarks"></a>Note  
 /MANIFESTDEPENDENCY consente di specificare gli attributi che verranno inseriti nella \<dipendenza > della sezione del file manifesto.  
  
 Vedere [/MANIFEST (Crea Side-by-Side Assembly manifesto)](../../build/reference/manifest-create-side-by-side-assembly-manifest.md) per informazioni su come creare un file manifesto.  
  
 Per ulteriori informazioni sul \<dipendenza > sezione del file manifesto, vedere [file di configurazione dell'editore](http://msdn.microsoft.com/library/aa375682).  
  
 /MANIFESTDEPENDENCY informazioni possono essere passate al linker in uno dei due modi:  
  
-   Direttamente nella riga di comando (o in un file di risposta) con /MANIFESTDEPENDENCY.  
  
-   Tramite il [commento](../../preprocessor/comment-c-cpp.md) pragma.  
  
 L'esempio seguente mostra un commento di /MANIFESTDEPENDENCY tramite il pragma,  
  
```  
#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"")  
```  
  
 che genera la seguente voce nel file manifesto:  
  
```  
<dependency>  
  <dependentAssembly>  
    <assemblyIdentity type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*' />  
  </dependentAssembly>  
</dependency>  
```  
  
 I commenti /MANIFESTDEPENDENCY stesso possono essere passati dalla riga di comando come segue:  
  
```  
"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"  
```  
  
 Il linker raccogliere commenti /MANIFESTDEPENDENCY, eliminare le voci duplicate e quindi aggiungere la stringa XML risultante nel file manifesto.  Se il linker rileva le voci in conflitto, il file manifesto verrà danneggiato e l'applicazione non verrà avviata (è possibile aggiungere una voce nel registro eventi, che indica l'origine dell'errore).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **File manifesto** pagina delle proprietà.  
  
5.  Modificare il **dipendenze aggiuntive manifesto** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalManifestDependencies%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)