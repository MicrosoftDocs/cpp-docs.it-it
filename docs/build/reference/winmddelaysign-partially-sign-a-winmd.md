---
title: -WINMDDELAYSIGN (firmare parzialmente un winmd) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: VC.Project.VCLinkerTool.WINMDDelaySign
dev_langs: C++
ms.assetid: 445cd602-62cb-400a-8e3a-4beb6572724d
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 18f168c9a3faf4a6bc2676e142a35ee6314db391
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="winmddelaysign-partially-sign-a-winmd"></a>/WINMDDELAYSIGN (firmare parzialmente un winmd)
Abilita la firma parziale di un file di metadati Runtime di Windows (con estensione winmd) inserendo la chiave pubblica nel file.  
  
```  
/WINMDDELAYSIGN[:NO]  
```  
  
## <a name="remarks"></a>Note  
 È simile al [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) l'opzione del linker che viene applicato il file. winmd. Utilizzare **/WINMDDELAYSIGN** se si desidera inserire solo la chiave pubblica nel file con estensione winmd. Per impostazione predefinita, il linker agisce come se **/winmddelaysign: No** sia stato specificato, ovvero non firma il file. winmd.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **Linker** cartella.  
  
3.  Selezionare il **metadati di Windows** pagina delle proprietà.  
  
4.  Nel **firma ritardata metadati Windows** elenco a discesa, selezionare l'opzione desiderata.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)