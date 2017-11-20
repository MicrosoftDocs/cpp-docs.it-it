---
title: -/Qvec-report (livello di segnalazione vettorizzazione automatica) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 4778c9a3-0692-4085-9b05-1bfeadf4c74a
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e0df8e487f2f79029c73adfbf44cb3873bcfcaa3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="qvec-report-auto-vectorizer-reporting-level"></a>/Qvec-report (livello di segnalazione vettorizzazione automatica)
Abilita la funzionalità di reporting del compilatore [vettorizzazione automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) e specifica il livello dei messaggi informativi per l'output durante la compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Qvec-report:{1}{2}  
```  
  
## <a name="remarks"></a>Note  
 **/Qvec-report-report: 1**  
 Genera un messaggio informativo per i cicli sono vettorizzato.  
  
 **/Qvec-report-report: 2**  
 Genera un messaggio informativo per i cicli sono vettorizzati e per i cicli non vettorizzati, insieme a un codice motivo.  
  
 Per informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
### <a name="to-set-the-qvec-report-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore /Qvec-report in Visual Studio  
  
1.  In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nel **pagine delle proprietà** nella finestra di dialogo **C/C++**selezionare **riga di comando**.  
  
3.  Nel **opzioni aggiuntive** immettere `/Qvec-report:1` o `/Qvec-report:2`.  
  
### <a name="to-set-the-qvec-report-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Qvec-report a livello di codice  
  
-   Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Programmazione parallela in codice nativo](http://go.microsoft.com/fwlink/?LinkId=263662)