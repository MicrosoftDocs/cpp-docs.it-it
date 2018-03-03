---
title: -GL (Ottimizzazione intero programma) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /gl
- VC.Project.VCCLWCECompilerTool.WholeProgramOptimization
dev_langs:
- C++
helpviewer_keywords:
- /GL compiler option [C++]
- whole program optimizations and C++ compiler
- -GL compiler option [C++]
- GL compiler option [C++]
ms.assetid: 09d51e2d-9728-4bd0-b5dc-3b8284aca1d1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bd3a83b59a1b1a0e95dd46ebca57c814c7d680c9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="gl-whole-program-optimization"></a>/GL (Ottimizzazione intero programma)
Attiva l'ottimizzazione dell'intero programma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GL[-]  
```  
  
## <a name="remarks"></a>Note  
 Ottimizzazione intero programma consente al compilatore di eseguire ottimizzazioni con informazioni su tutti i moduli del programma. Senza ottimizzazione intero programma, le ottimizzazioni vengono eseguite su una base di modulo.  
  
 Ottimizzazione intero programma è disattivata per impostazione predefinita e deve essere abilitata in modo esplicito. Tuttavia, è anche possibile disabilitarla in modo esplicito con **/GL-.**.  
  
 Informazioni su tutti i moduli, il compilatore consente di:  
  
-   Ottimizzare l'utilizzo di registri attraverso i limiti di funzione.  
  
-   Eseguire l'operazione di ottimizzare il rilevamento delle modifiche apportate ai dati globali, riducendo il numero di caricamento e archiviazione.  
  
-   Eseguire un processo di rilevamento dereferenziare il possibile set di elementi modificati da un puntatore, riducendo le operazioni di caricamento e archiviazione migliorato.  
  
-   Inline una funzione in un modulo, anche quando la funzione viene definita in un altro modulo.  
  
 file con estensione obj generati con **/GL** non sarà disponibile per l'utilità del linker come [EDITBIN](../../build/reference/editbin-reference.md) e [DUMPBIN](../../build/reference/dumpbin-reference.md).  
  
 Se si esegue la compilazione del programma con **/GL** e [/c](../../build/reference/c-compile-without-linking.md), utilizzare l'opzione del linker /LTCG per creare il file di output.  
  
 [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) non può essere utilizzato con **/GL**  
  
 Il formato dei file generati con **/GL** nella versione corrente potrebbe non essere leggibile nelle versioni successive di Visual C++. Non è opportuno fornire un file con estensione LIB composto da file con estensione obj generati con **/GL** a meno che non si è disposti a distribuirne copie del file con estensione LIB per tutte le versioni di Visual C++ si prevedono che gli utenti utilizzino, ora e in futuro.  
  
 file con estensione obj generati con **/GL** e file di intestazione precompilata non devono essere utilizzati per compilare un file con estensione LIB a meno che il file con estensione LIB non essere collegato nello stesso computer che ha generato il **/GL** file con estensione obj. Le informazioni dal file di intestazione precompilata del file con estensione obj saranno necessarie in fase di collegamento.  
  
 Per ulteriori informazioni sulle ottimizzazioni disponibili con e i limiti di Ottimizzazione intero programma, vedere [/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  **/GL** inoltre rende disponibile a ottimizzazione guidata, vedere /LTCG.  Quando si compila per ottimizzazioni PGO e se si desidera che le ottimizzazioni PGO ordinamento delle funzioni, è necessario compilare con [/Gy](../../build/reference/gy-enable-function-level-linking.md) o un'opzione del compilatore che implica /Gy.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Vedere [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md) per informazioni su come specificare **/GL** nell'ambiente di sviluppo.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)