---
title: -Gm (Attiva ricompilazione minima) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.MinimalRebuild
- /Gm
- /FD
- VC.Project.VCCLWCECompilerTool.MinimalRebuild
dev_langs:
- C++
helpviewer_keywords:
- /Gm compiler option [C++]
- minimal rebuild
- enable minimal rebuild compiler option [C++]
- Gm compiler option [C++]
- -Gm compiler option [C++]
ms.assetid: d8869ce0-d2ea-40eb-8dae-6d2cdb61dd59
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e0b83c34b0ff8cacbca9d21a40c6c9572f516d1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374570"
---
# <a name="gm-enable-minimal-rebuild"></a>/Gm (Attiva ricompilazione minima)
Abilita la ricompilazione minima, che determina se è necessario ricompilare i file di origine C++ che includono modifiche alle definizioni delle classi C++ archiviate nei file di intestazione con estensione h.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Gm  
```  
  
## <a name="remarks"></a>Note  
 Il compilatore archivia le informazioni sulla dipendenza tra i file di origine e le definizioni delle classi nel file con estensione idb del progetto durante la prima compilazione. (Informazioni sulla dipendenza indicano quale file di origine è dipendente dalla definizione di classe e il file h la definizione si trova) Compilazioni successive usare le informazioni archiviate nel file con estensione IDB per determinare se un file di origine deve essere compilato, anche se include un file h modificato.  
  
> [!NOTE]
>  La ricompilazione minima richiede che le definizioni delle classi non vengano modificate nei file di inclusione. Le definizioni delle classi devono essere globali per un progetto (dovrebbe esistere una sola definizione di una determinata classe) perché le informazioni sulla dipendenza nel file con estensione idb vengono create per l'intero progetto. Se esiste più di una definizione per una classe nel progetto, disabilitare la ricompilazione minima.  
  
 Poiché il collegamento incrementale non supporta i metadati di Windows inclusi nel file obj, utilizzare il [/ZW (compilazione di Windows Runtime)](../../build/reference/zw-windows-runtime-compilation.md) opzione, il **/Gm** opzione non è compatibile con  **/ZW**.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **la generazione di codice** pagina delle proprietà.  
  
4.  Modificare il **Abilita ricompilazione minima** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.MinimalRebuild%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)