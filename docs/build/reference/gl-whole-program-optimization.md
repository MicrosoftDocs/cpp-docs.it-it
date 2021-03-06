---
description: Altre informazioni su:/GL (Ottimizzazione intero programma)
title: /GL (Ottimizzazione intero programma)
ms.date: 03/05/2021
f1_keywords:
- /GL
helpviewer_keywords:
- /GL compiler option [C++]
- whole program optimizations and C++ compiler
- -GL compiler option [C++]
- GL compiler option [C++]
ms.openlocfilehash: 509deaae8881c4875a9ec2ddf4d5f1ee7744a2cf
ms.sourcegitcommit: c0c9cdae79f19655e809a4979227c51bb19cff63
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2021
ms.locfileid: "102236550"
---
# <a name="gl-whole-program-optimization"></a>`/GL` (Ottimizzazione intero programma)

Attiva l'ottimizzazione dell'intero programma.

## <a name="syntax"></a>Sintassi

> **`/GL`**[**`-`**]

## <a name="remarks"></a>Commenti

L'ottimizzazione dell'intero programma consente al compilatore di eseguire ottimizzazioni con informazioni su tutti i moduli del programma. Senza l'ottimizzazione dell'intero programma, le ottimizzazioni vengono eseguite in base al modulo (modulo).

L'ottimizzazione dell'intero programma è disattivata per impostazione predefinita e deve essere abilitata in modo esplicito. Tuttavia, è anche possibile disabilitarlo in modo esplicito con **`/GL-`** .

Con informazioni su tutti i moduli, il compilatore può:

- Ottimizzare l'uso dei registri tra i limiti di funzione.

- Eseguire un processo migliore per tenere traccia delle modifiche apportate ai dati globali, consentendo una riduzione del numero di caricamenti e archivi.

- Tenere traccia del possibile set di elementi modificati da una dereferenziazione del puntatore, riducendo i carichi e gli archivi necessari.

- Inline una funzione in un modulo anche quando la funzione è definita in un altro modulo.

*`.obj`* i file prodotti con **`/GL`** non sono utilizzabili dalle utilità del linker, ad esempio [`EDITBIN`](editbin-reference.md) e [`DUMPBIN`](dumpbin-reference.md) .

Se si compila il programma con **`/GL`** e [`/c`](c-compile-without-linking.md) , è necessario usare l'opzione del linker/LTCG per creare il file di output.

[`/ZI`](z7-zi-zi-debug-information-format.md) non può essere usato con **`/GL`**

Il formato dei file prodotti con **`/GL`** nella versione corrente spesso non è leggibile dalle versioni successive di Visual Studio e dal set di strumenti MSVC. A meno che non si sia disposti a spedire copie del *`.lib`* file per tutte le versioni di Visual Studio che si prevede che gli utenti usino, ora e in futuro, non spedire un *`.lib`* file costituito *`.obj`* da file prodotti da **`/GL`** . Per ulteriori informazioni, vedere [restrizioni sulla compatibilità binaria](../../porting/binary-compat-2015-2017.md#restrictions).

*`.obj`* i file prodotti da **`/GL`** e i file di intestazione precompilata non devono essere usati per compilare un file, a *`.lib`* meno che il file non *`.lib`* sia collegato nello stesso computer che ha generato il **`/GL`** *`.obj`* file. Le informazioni del *`.obj`* file di intestazione precompilata del file sono necessarie in fase di collegamento.

Per ulteriori informazioni sulle ottimizzazioni disponibili con e sulle limitazioni dell'ottimizzazione dell'intero programma, vedere [`/LTCG`](ltcg-link-time-code-generation.md) .  **`/GL`** rende disponibile anche l'ottimizzazione PGO. Quando si esegue la compilazione per le ottimizzazioni PGO e si vuole ordinare la funzione dalle ottimizzazioni PGO, è necessario compilare con [`/Gy`](gy-enable-function-level-linking.md) o un'opzione del compilatore che implica/Gy.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

Per ulteriori informazioni su come specificare **`/GL`** nell'ambiente di sviluppo, vedere [ `/LTCG` (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md) .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
