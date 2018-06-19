---
title: -/Qpar (parallelizzazione automatica) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration
dev_langs:
- C++
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 430bf1ebc79008d97435ecbcb3b15cf19dda5f8d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375688"
---
# <a name="qpar-auto-parallelizer"></a>/Qpar (Parallelizzazione automatica)
Consente di [parallelizzazione automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) funzionalità del compilatore di parallelizzare automaticamente i cicli nel codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Qpar  
```  
  
## <a name="remarks"></a>Note  
 Quando il compilatore parallelizza automaticamente i cicli nel codice, divide il calcolo tra più core del processore. Un ciclo viene parallelizzato solo se il compilatore determina che è valido farlo e che la parallelizzazione potrà migliorare le prestazioni.  
  
 Le direttive `#pragma loop()` sono disponibili per garantire l'utilità di ottimizzazione per parallelizzare i cicli specifici. Per ulteriori informazioni, vedere [ciclo](../../preprocessor/loop.md).  
  
 Per informazioni su come abilitare i messaggi di output per la parallelizzazione automatica, vedere [/qpar (parallelizzazione automatica Reporting livello)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md).  
  
### <a name="to-set-the-qpar-compiler-option-in-visual-studio"></a>Per impostare l'opzione /Qpar del compilatore in Visual Studio  
  
1.  In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nel **pagine delle proprietà** nella finestra di dialogo **C/C++** selezionare **riga di comando**.  
  
3.  Nel **opzioni aggiuntive** immettere `/Qpar`.  
  
### <a name="to-set-the-qpar-compiler-option-programmatically"></a>Per impostare l'opzione /Qpar del compilatore a livello di codice  
  
-   Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)   
 [/Qvec-report (livello segnalazione parallelizzazione automatica)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [#pragma loop)](../../preprocessor/loop.md)   
 [Programmazione parallela in codice nativo](http://go.microsoft.com/fwlink/p/?linkid=263662)