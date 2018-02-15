---
title: -WINMD (genera i metadati di Windows) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadata
dev_langs:
- C++
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7517ec459677659067e80930ee48caccf84d52f3
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="winmd-generate-windows-metadata"></a>/WINMD (generare metadati di Windows)
Abilita la generazione di file di metadati di Windows Runtime (con estensione winmd).  
  
```  
/WINMD[:{NO|ONLY}]  
```  
  
## <a name="remarks"></a>Note  
 /WINMD  
 L'impostazione predefinita per le app Universal Windows Platform. Il linker genera sia il file eseguibile binario che il file di metadati con estensione winmd.  
  
 /WINMD:NO  
 Il linker genera solo il file eseguibile binario, ma non un file con estensione winmd.  
  
 /WINMD:ONLY  
 Il linker genera solo il file con estensione winmd, ma non un file eseguibile binario.  
  
 Per impostazione predefinita, il nome file di output avrà il formato `binaryname`.winmd. Per specificare un nome file diverso, utilizzare il [/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md) opzione.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **Linker** cartella.  
  
3.  Selezionare il **metadati di Windows** pagina delle proprietà.  
  
4.  Nel **genera metadati Windows** elenco a discesa, selezionare l'opzione desiderata.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)