---
title: -Gs (verifica le chiamate ai controlli di Stack) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /GS
dev_langs:
- C++
helpviewer_keywords:
- disabling stack probes
- GS compiler option [C++]
- /GS compiler option [C++]
- stack, stack probes
- stack probes
- -GS compiler option [C++]
- stack checking calls
ms.assetid: 40daed7c-f942-4085-b872-01e12b37729e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ff02465b4e1b1a727a2367c8d5e038f30854ecc6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="gs-control-stack-checking-calls"></a>/Gs (Verifica le chiamate ai controlli di stack)
Controlla le ricerche dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Gs[size]  
```  
  
## <a name="arguments"></a>Argomenti  
 `size`  
 Facoltativo. Numero di byte che le variabili locali possono occupare prima che venga avviato un probe dello stack. Se il **/Gs** opzione viene specificata senza un `size` argomento, è uguale a quello ottenuto specificando **/Gs0**,  
  
## <a name="remarks"></a>Note  
 Un probe dello stack è una sequenza di codice inserito dal compilatore in ogni chiamata di funzione. Dopo l'avvio, un probe dello stack verifica in modo non invasivo nella memoria la quantità di spazio che sarà necessaria per l'archiviazione delle variabili locali della funzione.  
  
 Se per una funzione sono necessari più di `size` byte di spazio dello stack per le variabili locali, viene avviato il relativo probe dello stack. Per impostazione predefinita, il compilatore genera del codice che avvia un probe dello stack quando una funzione richiede più di una pagina di spazio dello stack. Ciò equivale a un'opzione del compilatore **/Gs4096** per x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], piattaforme e ARM. Questo valore consente a un'applicazione e al gestore della memoria di Windows di aumentare la quantità di memoria allocata per lo stack del programma dinamicamente e in fase di esecuzione.  
  
> [!NOTE]
>  Il valore predefinito di **/Gs4096** consente lo stack del programma di applicazioni per Windows di aumentare in modo corretto in fase di esecuzione. Non modificare l'impostazione predefinita se non si conoscono con esattezza i motivi dell'eventuale modifica.  
  
 Alcuni programmi, quali i driver di dispositivo virtuali, non necessitano di questo meccanismo di aumento delle dimensioni dello stack. In questi casi, i probe dello stack non sono necessari. È possibile interrompere la generazione dei probe dello stack da parte del compilatore impostando `size` su un valore maggiore di quanto qualsiasi funzione richiederà per l'archiviazione delle variabili locali. Non sono consentiti spazi tra **/Gs** e `size`.  
  
 **/Gs0** attiva ricerche dello stack per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali. Ciò può influire in modo negativo sulle prestazioni.  
  
 È possibile attivare o disattivare le ricerche dello stack utilizzando [check_stack](../../preprocessor/check-stack.md). **/GS** e `check_stack` pragma non hanno alcun effetto sulle routine di libreria C standard, ma influiscono sul solo le funzioni di cui si esegue la compilazione.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)