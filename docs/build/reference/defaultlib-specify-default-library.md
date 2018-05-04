---
title: -DEFAULTLIB (specifica la libreria predefinita) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.DefaultLibraries
- /defaultlib
dev_langs:
- C++
helpviewer_keywords:
- -DEFAULTLIB linker option
- DEFAULTLIB linker option
- /DEFAULTLIB linker option
- libraries, adding to list of
ms.assetid: 6af7ff49-c170-4a13-97e2-2b9ae2de20c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e48db05ea50917a09e618c782d86dace73a1bf7e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="defaultlib-specify-default-library"></a>/DEFAULTLIB (Specifica la libreria predefinita)
```  
/DEFAULTLIB:library  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *Libreria*  
 Il nome di una libreria per la ricerca durante la risoluzione di riferimenti esterni.  
  
## <a name="remarks"></a>Note  
 L'opzione /DEFAULTLIB aggiunge uno *libreria* all'elenco di librerie che cerca di collegamento quando la risoluzione dei riferimenti. Viene eseguita la ricerca di una libreria specificata con /DEFAULTLIB dopo le librerie specificate nella riga di comando e prima delle librerie predefinite specificate nei file obj.  
  
 Il [Ignora tutte le librerie predefinite](../../build/reference/nodefaultlib-ignore-libraries.md) (/ /NODEFAULTLIB) viene eseguito l'override di /DEFAULTLIB:*libreria*. Il [Ignora librerie](../../build/reference/nodefaultlib-ignore-libraries.md) (/ /NODEFAULTLIB:*libreria*) viene eseguito l'override di /DEFAULTLIB:*libreria* quando lo stesso *libreria* nome specificato in entrambe.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
-   Questa opzione del linker non è disponibile dall'ambiente di sviluppo di Visual Studio. Per aggiungere una libreria per la fase di collegamento, usare il **dipendenze aggiuntive** proprietà il **Input** pagina delle proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)