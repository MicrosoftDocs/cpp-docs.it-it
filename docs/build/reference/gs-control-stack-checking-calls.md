---
description: Altre informazioni su:/GS (controlla le chiamate di controllo dello stack)
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
ms.openlocfilehash: 128a5ad4dbcba15dfc5b76313b8576ce1448ec68
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200162"
---
# <a name="gs-control-stack-checking-calls"></a>/Gs (Verifica le chiamate ai controlli di stack)

Controlla la soglia per i probe dello stack.

## <a name="syntax"></a>Sintassi

> **/GS**[*dimensioni*]

## <a name="arguments"></a>Argomenti

*size*<br/>
Facoltativo. Numero di byte che le variabili locali possono occupare prima che venga avviato un probe dello stack. Non sono consentiti spazi tra **/GS** e *size*.

## <a name="remarks"></a>Commenti

Un *Probe dello stack* è una sequenza di codice che il compilatore inserisce all'inizio di una chiamata di funzione. Dopo l'avvio, un probe dello stack verifica in modo non invasivo nella memoria la quantità di spazio che sarà necessaria per l'archiviazione delle variabili locali della funzione. In questo modo, se necessario, il sistema operativo si trova nella pagina trasparente della memoria dello stack aggiuntiva, prima dell'esecuzione del resto della funzione.

Per impostazione predefinita, il compilatore genera del codice che avvia un probe dello stack quando una funzione richiede più di una pagina di spazio dello stack. Equivale a un'opzione del compilatore **/Gs4096** per piattaforme x86, x64, ARM e arm64. Questo valore consente a un'applicazione e al gestore della memoria di Windows di aumentare la quantità di memoria allocata per lo stack del programma dinamicamente e in fase di esecuzione.

> [!NOTE]
> Il valore predefinito di **/Gs4096** consente di aumentare correttamente in fase di esecuzione lo stack di programmi delle applicazioni per Windows. Non modificare l'impostazione predefinita se non si conoscono con esattezza i motivi dell'eventuale modifica.

Alcuni programmi, quali i driver di dispositivo virtuali, non necessitano di questo meccanismo di aumento delle dimensioni dello stack. In questi casi, i probe dello stack non sono necessari ed è possibile arrestare il compilatore dalla relativa generazione impostando le *dimensioni* su un valore maggiore di qualsiasi funzione necessaria per l'archiviazione delle variabili locali.

**/Gs0** avvia i probe dello stack per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali. Ciò può influire in modo negativo sulle prestazioni.

Per le destinazioni x64, se l'opzione **/GS** viene specificata senza un argomento *size* , è uguale a **/gs0**. Se l'argomento *size* è da 1 a 9, viene generato l'avviso D9014 e l'effetto è uguale a quello specificato da **/gs0**.

Per le destinazioni x86, ARM e ARM64, l'opzione **/GS** senza un argomento *size* è uguale a **/Gs4096**. Se l'argomento *size* è da 1 a 9, viene generato l'avviso D9014 e l'effetto è uguale a quello specificato da **/Gs4096**.

Per tutte le destinazioni, un argomento di *dimensione* compreso tra 10 e 2147485647 imposta la soglia in corrispondenza del valore specificato. Una *dimensione* di 2147485648 o superiore causa un errore irreversibile C1049.

È possibile attivare o disattivare i probe dello stack usando la direttiva [check_stack](../../preprocessor/check-stack.md) . **/GS** e il `check_stack` pragma non hanno effetto sulle routine della libreria C standard, ma influiscono solo sulle funzioni compilate.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Immettere l'opzione del compilatore **/GS** e una dimensione facoltativa in **Opzioni aggiuntive**. Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
