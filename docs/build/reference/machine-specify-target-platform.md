---
title: -MACHINE (specifica della piattaforma di destinazione) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.TargetMachine
- /machine
dev_langs: C++
helpviewer_keywords:
- mapfiles, creating linker
- target platform
- -MACHINE linker option
- /MACHINE linker option
- MACHINE linker option
ms.assetid: 8d41bf4b-7e53-4ab9-9085-d852b08d31c2
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e00c4f6478390c2c859b4340f38847873f4e7aed
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="machine-specify-target-platform"></a>/MACHINE (Specifica la piattaforma di destinazione)
```  
/MACHINE:{ARM|EBC|X64|X86}  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /MACHINE specifica la piattaforma di destinazione per il programma.  
  
 In genere non è necessario specificare l'opzione /MACHINE. COLLEGAMENTO deduce il tipo di computer dal file obj. In alcuni casi, tuttavia, non è possibile determinare collegamento i tipo di computer e i problemi un [degli strumenti del linker LNK1113 errore](../../error-messages/tool-errors/linker-tools-error-lnk1113.md). Se si verifica un errore di questo tipo, è possibile specificare questa opzione.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **avanzate** pagina delle proprietà.  
  
4.  Modificare il **inviala** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)