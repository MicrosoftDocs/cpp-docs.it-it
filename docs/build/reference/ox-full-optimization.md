---
title: /Ox (Abilita la maggior parte delle ottimizzazioni della velocità)
description: L'opzione MSVC/Ox combina alcune opzioni di ottimizzazione del compilatore per la velocità in un'unica opzione.
ms.date: 07/08/2020
f1_keywords:
- VC.Project.VCCLCompilerTool.ToolOptimization
- /Ox
- /Oxs
helpviewer_keywords:
- Ox compiler option [C++]
- fast code [C++]
- /Ox compiler option [C++]
- -Ox compiler option [C++]
ms.assetid: 3ad7c30b-c615-428c-b1d0-2e024f81c760
ms.openlocfilehash: 10893fe1cf032f2ab56f27aa4af95b050c2ec37e
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180838"
---
# <a name="ox-enable-most-speed-optimizations"></a>`/Ox`(Abilitare la maggior parte delle ottimizzazioni della velocità)

L' **`/Ox`** opzione del compilatore consente una combinazione di ottimizzazioni che prediligono la velocità. In alcune versioni dell'IDE di Visual Studio e del messaggio della guida del compilatore, viene chiamato *Ottimizzazione completa*, ma l' **`/Ox`** opzione del compilatore Abilita solo un subset delle opzioni di ottimizzazione della velocità abilitate da **`/O2`** .

## <a name="syntax"></a>Sintassi

> **`/Ox`**

## <a name="remarks"></a>Osservazioni

L' **`/Ox`** opzione del compilatore Abilita le **`/O`** Opzioni del compilatore che prediligono la velocità. L' **`/Ox`** opzione del compilatore non include le opzioni aggiuntive [ `/GF` (Elimina stringhe duplicate)](gf-eliminate-duplicate-strings.md) e [ `/Gy` (Abilita collegamento a livello di funzione)](gy-enable-function-level-linking.md) abilitate da [ `/O1` o `/O2` (Riduci dimensione, Ingrandisci velocità)](o1-o2-minimize-size-maximize-speed.md). Le opzioni aggiuntive applicate da **`/O1`** e **`/O2`** possono causare puntatori a stringhe o a funzioni per la condivisione di un indirizzo di destinazione, che può influire sul debug e sulla conformità del linguaggio strict. L' **`/Ox`** opzione è un modo semplice per abilitare la maggior parte delle ottimizzazioni senza includere **`/GF`** e **`/Gy`** . Per ulteriori informazioni, vedere le descrizioni delle [`/GF`](gf-eliminate-duplicate-strings.md) Opzioni e [`/Gy`](gy-enable-function-level-linking.md) .

L' **`/Ox`** opzione del compilatore è identica a quella usata in combinazione con le opzioni seguenti:

- [ `/Ob` (Espansione della funzione inline)](ob-inline-function-expansion.md), in cui il parametro Option è 2 ( **`/Ob2`** )

- [`/Oi`(Genera funzioni intrinseche)](oi-generate-intrinsic-functions.md)

- [`/Ot`(Ottimizza per velocità codice)](os-ot-favor-small-code-favor-fast-code.md)

- [`/Oy`(Omissione del puntatore ai frame)](oy-frame-pointer-omission.md)

**`/Ox`** si escludono a vicenda:

- [`/O1`(Riduzione dimensioni)](o1-o2-minimize-size-maximize-speed.md)

- [`/O2`(Ottimizza velocità)](o1-o2-minimize-size-maximize-speed.md)

- [`/Od`(Disabilita (debug))](od-disable-debug.md)

È possibile annullare la distorsione verso la velocità dell' **`/Ox`** opzione del compilatore se si specifica **`/Oxs`** , che combina l' **`/Ox`** opzione del compilatore con [ `/Os` (predilige Small Code)](os-ot-favor-small-code-favor-fast-code.md). Le opzioni combinate prediligono dimensioni di codice minori.  L' **`/Oxs`** opzione è esattamente identica a quella specificata **`/Ox`** **`/Os`** quando le opzioni vengono visualizzate in tale ordine.

Per applicare tutte le ottimizzazioni a livello di file disponibili per le compilazioni di versione, è consigliabile specificare [ `/O2` (Ottimizza velocità)](o1-o2-minimize-size-maximize-speed.md) invece di **`/Ox`** e [ `/O1` (Riduci dimensione)](o1-o2-minimize-size-maximize-speed.md) invece di **`/Oxs`** . Per un'ottimizzazione ancora maggiore nelle build di rilascio, prendere in considerazione anche l'opzione del compilatore [ `/GL` (ottimizzazione dell'intero programma)](gl-whole-program-optimization.md) e l'opzione del linker [ `/LTCG` (generazione del codice in fase di collegamento)](ltcg-link-time-code-generation.md) .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà di  >  **ottimizzazione C/C++**  >  **Optimization** .

1. Modificare la proprietà di **ottimizzazione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## <a name="see-also"></a>Vedere anche

[`/O`Opzioni (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
