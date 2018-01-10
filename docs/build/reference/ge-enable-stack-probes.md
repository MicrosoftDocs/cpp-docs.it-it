---
title: -Ge (Attiva ricerche dello Stack) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /ge
dev_langs: C++
helpviewer_keywords:
- -Ge compiler option [C++]
- enable stack probes
- /Ge compiler option [C++]
- stack, stack probes
- stack probes
- stack checking calls
- Ge compiler option [C++]
ms.assetid: 4b54deae-4e3c-4bfa-95f3-ba23590f7258
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8fef08e817c35858b4fab096e669f62c0ae404c8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ge-enable-stack-probes"></a>/Ge (Attiva ricerche dello stack)
Attiva le ricerche dello stack per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Ge  
```  
  
## <a name="remarks"></a>Note  
 Questo meccanismo è utile se si riscrive la funzionalità della ricerca dello stack. È consigliabile utilizzare [/Gh (Attiva funzione Hook nella penter)](../../build/reference/gh-enable-penter-hook-function.md) anziché riscrivere la ricerca dello stack.  
  
 [/GS (controllo Stack Checking Calls)](../../build/reference/gs-control-stack-checking-calls.md) ha lo stesso effetto.  
  
 **/Ge** è deprecato; a partire da Visual Studio 2005, il compilatore genera automaticamente il controllo dello stack. Per un elenco di opzioni del compilatore obsolete, vedere **deprecate o rimosse le opzioni del compilatore** in [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)