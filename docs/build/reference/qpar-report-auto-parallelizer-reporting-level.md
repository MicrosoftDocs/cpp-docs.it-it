---
title: -/Qpar-report (livello di segnalazione parallelizzazione automatica) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 562673b9-02da-4bf8-bb64-70bc25ef4651
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 96dff858d068f9d9bf9c6c47e1f444603c2a5729
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="qpar-report-auto-parallelizer-reporting-level"></a>/Qvec-report (livello di segnalazione parallelizzazione automatica)
Abilita la funzionalità di reporting del compilatore [parallelizzazione automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) e specifica il livello dei messaggi informativi per l'output durante la compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Qpar-report:{1}{2}  
```  
  
## <a name="remarks"></a>Note  
 **/Qpar-report: 1**  
 Invia all'output un messaggio informativo per i cicli parallelizzati.  
  
 **/Qpar-report: 2**  
 Invia un messaggio informativo per i cicli parallelizzati e per i cicli non parallelizzati, insieme a un codice motivo.  
  
 I messaggi vengono inviati a stdout. Se non viene segnalato alcun messaggio informativo, il codice non contiene cicli oppure il livello di segnalazione non è stato impostato per la segnalazione di cicli non parallelizzati. Per ulteriori informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
### <a name="to-set-the-qpar-report-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore /Qpar-report in Visual Studio  
  
1.  In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nel **pagine delle proprietà** nella finestra di dialogo **C/C++**selezionare **riga di comando**.  
  
3.  Nel **opzioni aggiuntive** immettere `/Qpar-report:1` o `/Qpar-report:2`.  
  
### <a name="to-set-the-qpar-report-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Qpar a livello di codice  
  
-   Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Programmazione parallela in codice nativo](http://go.microsoft.com/fwlink/?LinkId=263662)