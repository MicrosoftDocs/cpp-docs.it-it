---
title: /Gs (Verifica le chiamate ai controlli di stack)
ms.date: 10/25/2018
f1_keywords:
- /GS
helpviewer_keywords:
- disabling stack probes
- GS compiler option [C++]
- /GS compiler option [C++]
- stack, stack probes
- stack probes
- -GS compiler option [C++]
- stack checking calls
ms.assetid: 40daed7c-f942-4085-b872-01e12b37729e
ms.openlocfilehash: 52e203380045c3e23b04950cb241176f10321c2b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50646469"
---
# <a name="gs-control-stack-checking-calls"></a>/Gs (Verifica le chiamate ai controlli di stack)

Controlla la soglia per i probe dello stack.

## <a name="syntax"></a>Sintassi

> **/GS**[*dimensioni*]

## <a name="arguments"></a>Argomenti

*size*<br/>
Facoltativo. Numero di byte che le variabili locali possono occupare prima che venga avviato un probe dello stack. È consentito alcuno spazio tra **/Gs** e *dimensioni*.

## <a name="remarks"></a>Note

Oggetto *probe dello stack* è una sequenza di codice che il compilatore inserisce all'inizio di una chiamata di funzione. Dopo l'avvio, un probe dello stack verifica in modo non invasivo nella memoria la quantità di spazio che sarà necessaria per l'archiviazione delle variabili locali della funzione. In questo modo il sistema operativo per il paging in modo trasparente in memoria dello stack aggiuntive se necessario, prima che venga eseguito il resto della funzione.

Per impostazione predefinita, il compilatore genera del codice che avvia un probe dello stack quando una funzione richiede più di una pagina di spazio dello stack. Ciò equivale a un'opzione del compilatore **/Gs4096** per x86, x64, ARM, ARM64 piattaforme e. Questo valore consente a un'applicazione e al gestore della memoria di Windows di aumentare la quantità di memoria allocata per lo stack del programma dinamicamente e in fase di esecuzione.

> [!NOTE]
> Il valore predefinito **/Gs4096** consente allo stack di programma di applicazioni per Windows a crescere in modo corretto in fase di esecuzione. Non modificare l'impostazione predefinita se non si conoscono con esattezza i motivi dell'eventuale modifica.

Alcuni programmi, quali i driver di dispositivo virtuali, non necessitano di questo meccanismo di aumento delle dimensioni dello stack. In questi casi, non sono necessarie le ricerche dello stack ed è possibile arrestare il compilatore da generarli impostando *dimensioni* su un valore che è maggiore di quanto qualsiasi funzione richiederà per l'archiviazione delle variabili locali.

**/Gs0** avvia stack i probe per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali. Ciò può influire in modo negativo sulle prestazioni.

Per x64 ha come destinazione, se il **/Gs** opzione viene specificata senza un *size* argomento, è identico **/Gs0**. Se il *dimensioni* l'argomento è 1 a 9, viene generato l'avviso D9014 e l'effetto è lo stesso effetto **/Gs0**.

Per x86, ARM, ARM64 obiettivi e il **/Gs** opzione senza un *dimensioni* argomento equivale a **/Gs4096**. Se il *dimensioni* l'argomento è 1 a 9, viene generato l'avviso D9014 e l'effetto è lo stesso effetto **/Gs4096**.

Per tutte le destinazioni, un *dimensioni* argomento compreso tra 10 e 2147485647 consente di impostare la soglia in corrispondenza del valore specificato. Oggetto *dimensioni* di cause 2147485648 o versione successiva errore irreversibile C1049.

È possibile attivare i probe dello stack o disattivare utilizzando il [check_stack](../../preprocessor/check-stack.md) direttiva. **/GS** e il `check_stack` pragma non hanno alcun effetto sulle routine di libreria C standard, ma influiscono sul solo le funzioni si esegue la compilazione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/Gs** una facoltativa dimensioni e l'opzione del compilatore **opzioni aggiuntive**. Scegli **OK** oppure **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)