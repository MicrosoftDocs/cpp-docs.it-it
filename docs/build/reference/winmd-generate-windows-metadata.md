---
title: -WINMD (genera i metadati di Windows) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadata
dev_langs:
- C++
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0d3e628713c8228675db3b34e70d670c88152462
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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