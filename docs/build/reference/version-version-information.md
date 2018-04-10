---
title: -VERSION (le informazioni sulla versione) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.Version
- /version
dev_langs:
- C++
helpviewer_keywords:
- -VERSION linker option
- Version Information linker option
- version numbers, specifying in .exe
- /VERSION linker option
- VERSION linker option
ms.assetid: b86d0e86-dca6-4316-aee2-d863ccb9f223
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: aeb8d2845c5e8daa931e354b149fc1c35b37fbd7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="version-version-information"></a>/VERSION (Informazioni sulla versione)
```  
/VERSION:major[.minor]  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *principali*e *secondaria*  
 Il numero di versione da nell'intestazione del file .exe o DLL.  
  
## <a name="remarks"></a>Note  
 L'opzione /VERSION indica al linker di inserire un numero di versione nell'intestazione del file .exe o DLL. Utilizzare DUMPBIN [/HEADERS](../../build/reference/headers.md) per visualizzare il campo versione immagine di OPTIONAL HEADER VALUES per visualizzare l'effetto di /Version.  
  
 Il *principali* e *secondaria* gli argomenti sono numeri decimali compresi nell'intervallo compreso tra 0 e 65.535. La versione predefinita è 0,0.  
  
 Le informazioni specificate con /VERSION non hanno alcun effetto sulle informazioni sulla versione indicate per un'applicazione quando se ne visualizzano le proprietà in Esplora file. Tali informazioni provengono da un file di risorse che viene utilizzato per compilare l'applicazione. Vedere [Editor di informazioni sulla versione](../../windows/version-information-editor.md) per ulteriori informazioni.  
  
 È possibile inserire un numero di versione con la [versione](../../build/reference/version-c-cpp.md) istruzione di definizione moduli.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **generale** pagina delle proprietà.  
  
4.  Modificare il **versione** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Version%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)