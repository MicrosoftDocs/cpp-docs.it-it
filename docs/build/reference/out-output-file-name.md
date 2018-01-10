---
title: -OUT (Output File Name) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.OutputFile
- /out
dev_langs: C++
helpviewer_keywords:
- output files, name linker option
- -OUT linker option
- OUT linker option
- /OUT C++ linker option
- linker [C++], output files
ms.assetid: 976210a4-e51f-4cfb-af5e-c16344455834
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2a548e21e6bb485a326a2a9e34c6f47d968bbb6f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="out-output-file-name"></a>/OUT (nome file di output)
```  
/OUT:filename  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *filename*  
 Un nome utente specificato per il file di output. Sostituisce il nome predefinito.  
  
## <a name="remarks"></a>Note  
 L'opzione /OUT esegue l'override, il nome predefinito e il percorso del programma creato dal linker.  
  
 Per impostazione predefinita, il linker costituisce il nome del file utilizzando il nome base del primo file obj specificato e l'estensione appropriata (.exe o DLL).  
  
 Questa opzione, il nome di base predefinito per una libreria di importazione o file MAP. Per informazioni dettagliate, vedere [genera file map](../../build/reference/map-generate-mapfile.md) (/Map) e [/IMPLIB](../../build/reference/implib-name-import-library.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **generale** pagina delle proprietà.  
  
4.  Modificare il **File di Output** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)