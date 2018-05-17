---
title: -Ox (attiva la maggior parte delle ottimizzazioni di velocità) | Documenti Microsoft
ms.custom: ''
ms.date: 09/25/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.ToolOptimization
- /ox
dev_langs:
- C++
helpviewer_keywords:
- Ox compiler option [C++]
- fast code [C++]
- /Ox compiler option [C++]
- -Ox compiler option [C++]
ms.assetid: 3ad7c30b-c615-428c-b1d0-2e024f81c760
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 569563bff030904988e93db749438eaeb58ce9db
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ox-enable-most-speed-optimizations"></a>/Ox (attiva la maggior parte delle ottimizzazioni di velocità)

Il **/Ox** l'opzione del compilatore consente una combinazione di ottimizzazioni privilegiare la velocità. In alcune versioni di Visual Studio IDE e il messaggio della Guida del compilatore, si tratta *ottimizzazione completa*, ma la **/Ox** l'opzione del compilatore consente solo un subset delle opzioni di ottimizzazione velocità attivato da **/O2**.

## <a name="syntax"></a>Sintassi

> /Ox

## <a name="remarks"></a>Note

Il **/Ox** consente di opzione del compilatore di **/O** opzioni del compilatore Ottimizza per velocità specificata. Il **/Ox** l'opzione del compilatore non include aggiuntiva [/GF (Elimina stringhe Duplicate)](../../build/reference/gf-eliminate-duplicate-strings.md) e [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md) opzioni abilitate da [/O1 o /O2 (Riduci dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md). Le opzioni aggiuntive applicate da **/O1** e **/O2** può causare i puntatori alle stringhe o alle funzioni di condividere un indirizzo di destinazione, che può influire sul debug e la conformità del linguaggio rigorosa. Il **/Ox** è un modo semplice per abilitare la maggior parte delle ottimizzazioni senza includere **/GF** e **/Gy**. Per ulteriori informazioni, vedere le descrizioni del [/GF](../../build/reference/gf-eliminate-duplicate-strings.md) e [/Gy](../../build/reference/gy-enable-function-level-linking.md) opzioni.

Il **/Ox** opzione del compilatore è equivale a utilizzare le opzioni seguenti in combinazione:

- [/OB (espansione funzioni Inline)](../../build/reference/ob-inline-function-expansion.md), dove il parametro option è 2 (**/Ob2**)

- [/Og (ottimizzazioni globali)](../../build/reference/og-global-optimizations.md)

- [/Oi (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md)

- [/Ot (Ottimizza per velocità codice)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)

- [/Oy (omissione dei puntatori ai frame)](../../build/reference/oy-frame-pointer-omission.md)

**/Ox** si escludono a vicenda da:

- [/ O1 (Riduci dimensione)](../../build/reference/o1-o2-minimize-size-maximize-speed.md)

- [/ O2 (Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md)

- [/Od (disabilita (debug))](../../build/reference/od-disable-debug.md)

È possibile annullare la distorsione verso velocità del **/Ox** se si specifica l'opzione del compilatore **/Oxs.**, che combina il **/Ox** con l'opzione del compilatore [/Os (Ottimizza per dimensione piccola Il codice)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md). Le opzioni combinate favoriscono dimensioni del codice.

Per applicare tutte le ottimizzazioni a livello di file disponibili nelle build di rilascio, è consigliabile specificare [/O2 (Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) anziché **/Ox**, e [/O1 (Riduci dimensione)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) invece di **/Oxs**. Per le build di ottimizzazione maggiore nella versione, valutare l'opportunità di [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore e [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md) l'opzione del linker.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. In **le proprietà di configurazione**aprire **C/C++** e quindi scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **ottimizzazione** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)