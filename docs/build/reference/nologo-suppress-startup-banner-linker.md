---
title: -NOLOGO (Elimina il messaggio di avvio) (Linker) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.SuppressStartupBanner
- /nologo
dev_langs: C++
helpviewer_keywords:
- suppress startup banner linker option
- -NOLOGO linker option
- /NOLOGO linker option
- copyright message
- version numbers, preventing linker display
- banners, suppressing startup
- NOLOGO linker option
ms.assetid: 3b20dddd-eca6-4545-a331-9f70bf720197
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c9cffaea51ad1ba17462292f4feae531361200d8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nologo-suppress-startup-banner-linker"></a>/NOLOGO (Non visualizza il messaggio di avvio) (Linker)
```  
/NOLOGO  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /NOLOGO evita la visualizzazione del numero di versione e di messaggio di copyright.  
  
 Questa opzione disattiva anche la visualizzazione dei file di comando. Per informazioni dettagliate, vedere [file di comando LINK](../../build/reference/link-command-files.md).  
  
 Per impostazione predefinita, queste informazioni vengono inviate dal linker per la finestra di Output. Nella riga di comando, viene inviata all'output standard e può essere reindirizzato a un file.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Questa opzione deve essere utilizzata solo dalla riga di comando.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Impossibile modificare l'opzione del linker a livello di codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)