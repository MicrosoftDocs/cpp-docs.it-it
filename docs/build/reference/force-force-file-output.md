---
title: -FORCE (Output File Force) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.ForceLink
- /force
dev_langs:
- C++
helpviewer_keywords:
- FORCE linker option
- file output in linker
- /FORCE linker option
- -FORCE linker option
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8ec19beec52a217df1237de41d0bd81ab447a56d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="force-force-file-output"></a>/FORCE (Forza l'output del file)
```  
/FORCE:[MULTIPLE|UNRESOLVED]  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /FORCE indica al linker di creare un file valido .exe o DLL anche se un simbolo viene fatto riferimento ma non definito o è definito più volte.  
  
 L'opzione /FORCE può assumere un argomento facoltativo:  
  
-   Utilizzare /FORCE: multiple per creare un file di output LINK trovi più di una definizione per un simbolo o meno.  
  
-   Utilizzare /FORCE: UNRESOLVED per creare un file di output LINK trovi un simbolo non definito o meno. /Force: non risolto viene ignorata se il simbolo del punto di ingresso non è stato risolto.  
  
 /Force senza argomenti implica multipli e risolti.  
  
 Creata un file con questa opzione potrebbe non funzionare come previsto. Il linker non verrà collegato in modo incrementale quando è specificata l'opzione /FORCE.  
  
 Se un modulo compilato con **/clr**, **/Force** non creerà un'immagine.  
  
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