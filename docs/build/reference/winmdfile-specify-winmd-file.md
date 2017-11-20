---
title: -/WINMDFILE (specificare il File winmd) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: VC.Project.VCLinkerTool.GenerateWindowsMetadataFile
dev_langs: C++
ms.assetid: 062b41b3-14d6-432c-a361-fdb66e918931
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a503ef23b6aa1c42bb4b480de7879d2392825869
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="winmdfile-specify-winmd-file"></a>/WINMDFILE (specificare il file winmd)
Specifica il nome di file per il file di output di metadati di Windows Runtime (winmd) generato dal [/WINMD](../../build/reference/winmd-generate-windows-metadata.md) l'opzione del linker.  
  
```  
/WINMDFILE:filename  
```  
  
## <a name="remarks"></a>Note  
 Utilizzare il valore specificato in `filename` per eseguire l'override del nome file predefinito con estensione winmd (`binaryname`.winmd). Si noti che non si aggiunge ". winmd" per `filename`.  Se più valori sono elencati nella **/WINMDFILE** l'ultima riga di comando, ha la precedenza.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **Linker** cartella.  
  
3.  Selezionare il **metadati di Windows** pagina delle proprietà.  
  
4.  Nel **File di metadati Windows** , immettere il percorso del file.  
  
## <a name="see-also"></a>Vedere anche  
 [/WINMD (generare metadati di Windows)](../../build/reference/winmd-generate-windows-metadata.md)   
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)