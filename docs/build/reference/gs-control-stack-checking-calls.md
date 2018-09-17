---
title: -Gs (verifica le chiamate ai controlli di Stack) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 38b97354408d87d862955c0883c72d3e1459aa61
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45719277"
---
# <a name="gs-control-stack-checking-calls"></a>/Gs (Verifica le chiamate ai controlli di stack)

Controlla le ricerche dello stack.

## <a name="syntax"></a>Sintassi

```
/Gs[size]
```

## <a name="arguments"></a>Argomenti

*size*<br/>
Facoltativo. Numero di byte che le variabili locali possono occupare prima che venga avviato un probe dello stack. Se il **/Gs** opzione viene specificata senza un `size` argomento, è lo stesso effetto **/Gs0**,

## <a name="remarks"></a>Note

Un probe dello stack è una sequenza di codice inserito dal compilatore in ogni chiamata di funzione. Dopo l'avvio, un probe dello stack verifica in modo non invasivo nella memoria la quantità di spazio che sarà necessaria per l'archiviazione delle variabili locali della funzione.

Se per una funzione sono necessari più di `size` byte di spazio dello stack per le variabili locali, viene avviato il relativo probe dello stack. Per impostazione predefinita, il compilatore genera del codice che avvia un probe dello stack quando una funzione richiede più di una pagina di spazio dello stack. Ciò equivale a un'opzione del compilatore **/Gs4096** per piattaforme ARM, x64 e x86. Questo valore consente a un'applicazione e al gestore della memoria di Windows di aumentare la quantità di memoria allocata per lo stack del programma dinamicamente e in fase di esecuzione.

> [!NOTE]
>  Il valore predefinito **/Gs4096** consente allo stack di programma di applicazioni per Windows a crescere in modo corretto in fase di esecuzione. Non modificare l'impostazione predefinita se non si conoscono con esattezza i motivi dell'eventuale modifica.

Alcuni programmi, quali i driver di dispositivo virtuali, non necessitano di questo meccanismo di aumento delle dimensioni dello stack. In questi casi, i probe dello stack non sono necessari. È possibile interrompere la generazione dei probe dello stack da parte del compilatore impostando `size` su un valore maggiore di quanto qualsiasi funzione richiederà per l'archiviazione delle variabili locali. È consentito alcuno spazio tra **/Gs** e `size`.

**/Gs0** attiva ricerche dello stack per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali. Ciò può influire in modo negativo sulle prestazioni.

È possibile attivare o disattivare i probe di stack usando [check_stack](../../preprocessor/check-stack.md). **/GS** e il `check_stack` pragma non hanno alcun effetto sulle routine di libreria C standard, ma influiscono sul solo le funzioni si esegue la compilazione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)