---
title: -cgthreads (il thread di generazione di codice) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /cgthreads
dev_langs:
- C++
helpviewer_keywords:
- /cgthreads compiler option (C++)
- -cgthreads compiler option (C++)
- cgthreads compiler option (C++)
- cgthreads
ms.assetid: 64bc768c-6caa-4baf-9dea-7cfa1ffb01c2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 846e59b0c1303e70e4ed38b43e4869f1f044f64f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cgthreads-code-generation-threads"></a>/cgthreads (thread di generazione di codice)
Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/cgthreads[1-8]  
```  
  
## <a name="arguments"></a>Argomenti  
 numero  
 Numero massimo di thread per l'uso da parte di cl.exe, nell'intervallo compreso tra 1 e 8.  
  
## <a name="remarks"></a>Note  
 Il **/cgthreads** opzione specifica il numero massimo di thread cl.exe Usa in parallelo per l'ottimizzazione e codice fasi di generazione della compilazione. Si noti che non possono essere presenti spazi **/cgthreads** e `number` argomento. Cl.exe Usa quattro thread, per impostazione predefinita, come se **/cgthreads4** sono state specificate. Se sono disponibili più core del processore, un valore `number` maggiore può accelerare i tempi di compilazione. Questa opzione è particolarmente utile quando viene combinato con [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).  
  
 È possibile specificare più livelli di parallelismo per una compilazione. Il commutatore di msbuild.exe **/maxcpucount** specifica il numero di processi MSBuild eseguibili in parallelo. Il [/MP (compilazione con più processi)](../../build/reference/mp-build-with-multiple-processes.md) flag del compilatore specifica il numero di processi di cl.exe che compilano simultaneamente i file di origine. Il **/cgthreads** opzione specifica il numero di thread utilizzati da ogni processo cl.exe. Dato che il processore può eseguire solo tanti thread simultanei quanti sono i core del processore, non è utile specificare valori maggiori per tutte queste opzioni simultaneamente e potrebbe risultare controproducente. Per ulteriori informazioni sulla compilazione di progetti in parallelo, vedere [compilazione di più progetti in parallelo](/visualstudio/msbuild/building-multiple-projects-in-parallel-with-msbuild).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **le proprietà di configurazione**, **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere **/cgthreads**`N`, dove `N` è un valore compreso tra 1 e 8 e quindi selezionare **OK**.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)