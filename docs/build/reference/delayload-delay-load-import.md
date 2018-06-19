---
title: -DELAYLOAD (importazione a caricamento ritardato) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /delayload
- VC.Project.VCLinkerTool.DelayLoadDLLS
dev_langs:
- C++
helpviewer_keywords:
- DELAYLOAD linker option
- -DELAYLOAD linker option
- /DELAYLOAD linker option
- delayed loading of DLLs, /DELAYLOAD option
ms.assetid: 39ea0f1e-5c01-450f-9c75-2d9761ff9b28
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 74d65caa8a0ea140f93bf156e3c14a85232e6e56
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32372256"
---
# <a name="delayload-delay-load-import"></a>/DELAYLOAD (Importazione a caricamento ritardato)
```  
/DELAYLOAD:dllname  
```  
  
## <a name="parameters"></a>Parametri  
 `dllname`  
 Il nome di una DLL di cui si vuole ritardare il caricamento.  
  
## <a name="remarks"></a>Note  
 L'opzione /DELAYLOAD fa sì che la DLL specificata da `dllname` venga caricata solo alla prima chiamata da parte del programma a una funzione nella DLL. Per ulteriori informazioni, vedere [supporto per le DLL a caricamento ritardato nel Linker](../../build/reference/linker-support-for-delay-loaded-dlls.md). È possibile usare questa opzione tutte le volte necessarie per specificare tutte le DLL scelte. È necessario usare Delayimp.lib quando il programma viene collegato oppure implementare una funzione di supporto al caricamento ritardato.  
  
 Il [/Delay](../../build/reference/delay-delay-load-import-settings.md) opzione specifica l'associazione e il caricamento di opzioni per ogni DLL a caricamento ritardato.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel **Linker** cartella, selezionare il **Input** pagina delle proprietà.  
  
3.  Modificare il **DLL a caricamento ritardato** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)