---
title: -NOLOGO (Elimina il messaggio di avvio) (Linker) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.SuppressStartupBanner
- /nologo
dev_langs:
- C++
helpviewer_keywords:
- suppress startup banner linker option
- -NOLOGO linker option
- /NOLOGO linker option
- copyright message
- version numbers, preventing linker display
- banners, suppressing startup
- NOLOGO linker option
ms.assetid: 3b20dddd-eca6-4545-a331-9f70bf720197
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a76e99496114c0ebdc60f81724e67dd88a482055
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374193"
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