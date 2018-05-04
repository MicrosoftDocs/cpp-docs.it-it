---
title: -/NODEFAULTLIB (Ignora librerie) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.OVERWRITEAllDefaultLibraries
- VC.Project.VCLinkerTool.OVERWRITEDefaultLibraryNames
- /nodefaultlib
dev_langs:
- C++
helpviewer_keywords:
- default libraries, removing
- -NODEFAULTLIB linker option
- libraries, ignore
- NODEFAULTLIB linker option
- /NODEFAULTLIB linker option
- ignore libraries linker option
ms.assetid: 7270b673-6711-468e-97a7-c2925ac2be6e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 51caac10218d5f4d1787b2256875001ac32dc2b9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="nodefaultlib-ignore-libraries"></a>/NODEFAULTLIB (Ignora librerie)
```  
/NODEFAULTLIB[:library]   
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *Libreria*  
 Una libreria che si desidera al linker di ignorare durante la risoluzione di riferimenti esterni.  
  
## <a name="remarks"></a>Note  
 L'opzione /NODEFAULTLIB indica al linker di rimuovere uno o più librerie predefinite dall'elenco delle librerie che la ricerca durante la risoluzione di riferimenti esterni.  
  
 Per creare un file obj che non contiene riferimenti alle librerie predefinite, utilizzare [/Zl (omette nome di libreria predefinito)](../../build/reference/zl-omit-default-library-name.md).  
  
 Per impostazione predefinita, /NODEFAULTLIB rimuove tutte le librerie predefinite dall'elenco delle librerie che la ricerca durante la risoluzione di riferimenti esterni. Facoltativo *libreria* parametro consente di rimuovere una o più librerie specificate dall'elenco delle librerie la ricerca durante la risoluzione di riferimenti esterni. Specificare un'opzione /NODEFAULTLIB per ogni libreria che si desidera escludere.  
  
 Il linker risolve i riferimenti a definizioni esterne eseguendo una ricerca prima nelle librerie che si specifica esplicitamente, quindi nelle librerie predefinite specificate con l'opzione /DEFAULTLIB e quindi nelle librerie predefinite specificate nei file obj.  
  
 /NODEFAULTLIB:*libreria* esegue l'override [/DEFAULTLIB:](../../build/reference/defaultlib-specify-default-library.md)*libreria* quando lo stesso *libreria* nome è specificato in entrambe.  
  
 Se si utilizza /NODEFAULTLIB, ad esempio, per compilare il programma senza la libreria di runtime C, è possibile utilizzare anche [/ENTRY](../../build/reference/entry-entry-point-symbol.md) per specificare il punto di ingresso (funzione) nel programma. Per altre informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **Input**pagina delle proprietà.  
  
4.  Selezionare il **Ignora tutte le librerie predefinite** proprietà o specificare un elenco delle librerie di cui si desidera ignorare nel **Ignora libreria specifica** proprietà. Il **riga di comando** pagina delle proprietà verrà visualizzato l'effetto delle modifiche apportate a queste proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)