---
title: -CGTHREADS (thread del compilatore) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- /CGTHREADS linker option
- -CGTHREADS linker option
- CGTHREADS linker option
ms.assetid: 4b52cfdb-3702-470b-9580-fabeb1417488
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5905c29170a7ad636420a9bcdbd282ccfc2e7ec3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371421"
---
# <a name="cgthreads-compiler-threads"></a>/CGTHREADS (thread del compilatore)
Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice quando si specifica la generazione del codice in fase di collegamento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/CGTHREADS:[1-8]  
```  
  
## <a name="arguments"></a>Argomenti  
 numero  
 Numero massimo di thread per l'uso da parte di cl.exe, nell'intervallo compreso tra 1 e 8.  
  
## <a name="remarks"></a>Note  
 Il **/CGTHREADS** opzione specifica il numero massimo di thread cl.exe Usa in parallelo per le fasi di ottimizzazione e generazione di codice di compilazione durante in fase di collegamento la generazione di codice ([/LTCG](../../build/reference/ltcg-link-time-code-generation.md)) è specificato. Cl.exe Usa quattro thread, per impostazione predefinita, come se **/CGTHREADS:4** sono state specificate. Se sono disponibili più core del processore, un valore `number` maggiore può accelerare i tempi di compilazione.  
  
 È possibile specificare più livelli di parallelismo per una compilazione. Il commutatore di msbuild.exe **/maxcpucount** specifica il numero di processi MSBuild eseguibili in parallelo. Il [/MP (compilazione con più processi)](../../build/reference/mp-build-with-multiple-processes.md) flag del compilatore specifica il numero di processi di cl.exe che compilano simultaneamente i file di origine. Il [/cgthreads](../../build/reference/cgthreads-code-generation-threads.md) l'opzione del compilatore specifica il numero di thread utilizzati da ogni processo cl.exe. Dato che il processore può eseguire solo tanti thread simultanei quanti sono i core del processore, non è utile specificare valori maggiori per tutte queste opzioni simultaneamente e potrebbe risultare controproducente. Per ulteriori informazioni sulla compilazione di progetti in parallelo, vedere [compilazione di più progetti in parallelo](/visualstudio/msbuild/building-multiple-projects-in-parallel-with-msbuild).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **le proprietà di configurazione**, **Linker** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere **/CGTHREADS:**`number`, dove `number` è un valore compreso tra 1 e 8 e quindi scegliere **OK**.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)