---
title: -WINMDKEYFILE (il File di chiave winmd specificare) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.WINMDKeyFile
dev_langs:
- C++
ms.assetid: 65d88fdc-fff9-49ea-8cfc-b2f408741734
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bc6fa7ff554a15e2d9f13ebfa21e577581ddbad0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="winmdkeyfile-specify-winmd-key-file"></a>/WINMDKEYFILE (specificare il file di chiave winmd)
Specifica una chiave o una coppia di chiavi per la firma di un file di metadati di Windows Runtime (con estensione winmd).  
  
```  
/WINMDKEYFILE:filename  
```  
  
## <a name="remarks"></a>Note  
 È simile al [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) l'opzione del linker che viene applicato a un file con estensione winmd.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **Linker** cartella.  
  
3.  Selezionare il **metadati di Windows** pagina delle proprietà.  
  
4.  Nel **File di chiave di metadati Windows** , immettere il percorso del file.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)