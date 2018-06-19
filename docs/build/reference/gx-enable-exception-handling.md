---
title: -GX (Attiva gestione eccezioni) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /gx
dev_langs:
- C++
helpviewer_keywords:
- exception handling, enabling
- /GX compiler option [C++]
- -GX compiler option [C++]
- cl.exe compiler, exception handling
- enable exception handling compiler option [C++]
- GX compiler option [C++]
ms.assetid: 933b43ba-de77-4ff8-a48b-7074de90bc1c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ee2d3d31a9f091e6aa3fbed39f702471047a01dd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376715"
---
# <a name="gx-enable-exception-handling"></a>/GX (Attiva gestione eccezioni)
Deprecato. Consente la gestione delle eccezioni sincrona con il presupposto che le funzioni dichiarata utilizzando `extern "C"` non generano mai un'eccezione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GX  
```  
  
## <a name="remarks"></a>Note  
 **/GX** è deprecata. Utilizzare l'equivalente [/EHsc](../../build/reference/eh-exception-handling-model.md) opzione. Per un elenco di opzioni del compilatore obsolete, vedere il **deprecate o rimosse le opzioni del compilatore** sezione [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
 Per impostazione predefinita, **/EHsc**, l'equivalente di **/GX**, è disponibile quando esegue la compilazione con l'ambiente di sviluppo di Visual Studio. Quando si utilizzano gli strumenti da riga di comando, non viene specificata alcun la gestione delle eccezioni. Questo è l'equivalente di **/GX-**.  
  
 Per ulteriori informazioni, vedere [gestione delle eccezioni C++](../../cpp/cpp-exception-handling.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro di spostamento, scegliere **le proprietà di configurazione**, **C/C++**, **riga di comando**.  
  
3.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md)