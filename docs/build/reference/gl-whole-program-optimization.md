---
title: /GL (Ottimizzazione intero programma)
ms.date: 11/04/2016
f1_keywords:
- /gl
- VC.Project.VCCLWCECompilerTool.WholeProgramOptimization
helpviewer_keywords:
- /GL compiler option [C++]
- whole program optimizations and C++ compiler
- -GL compiler option [C++]
- GL compiler option [C++]
ms.assetid: 09d51e2d-9728-4bd0-b5dc-3b8284aca1d1
ms.openlocfilehash: 6251209dac74a504bb0635f0c544c39935090a42
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292133"
---
# <a name="gl-whole-program-optimization"></a>/GL (Ottimizzazione intero programma)

Attiva l'ottimizzazione dell'intero programma.

## <a name="syntax"></a>Sintassi

```
/GL[-]
```

## <a name="remarks"></a>Note

Ottimizzazione intero programma consente al compilatore di eseguire ottimizzazioni con informazioni su tutti i moduli del programma. Senza ottimizzazione intero programma, le ottimizzazioni vengono eseguite su una base di modulo (compilando).

Ottimizzazione intero programma è disattivato per impostazione predefinita e deve essere abilitato in modo esplicito. Tuttavia, è anche possibile disabilitarla in modo esplicito con **/GL-**.

Informazioni su tutti i moduli, il compilatore può:

- Ottimizzare l'uso di registri attraverso i limiti di funzione.

- Ottenere una migliore rilevamento delle modifiche apportate ai dati globali, consentendo una riduzione del numero di caricamento e archiviazione.

- Ottenere una migliore del rilevamento dereferenziare il set di elementi modificati da un puntatore, riducendo le operazioni di caricamento e archiviazione.

- Inline una funzione in un modulo anche quando la funzione è definita in un altro modulo.

i file con estensione obj generati con **/GL** non sarà disponibile per utilità del linker come [EDITBIN](editbin-reference.md) e [DUMPBIN](dumpbin-reference.md).

Se si esegue la compilazione del programma con **/GL** e [/c](c-compile-without-linking.md), è consigliabile usare l'opzione del linker /LTCG per creare il file di output.

[/Zi](z7-zi-zi-debug-information-format.md) non può essere usato con **/GL**

Il formato dei file creati con **/GL** nella versione corrente potrebbero non essere leggibili nelle versioni successive di Visual C++. Non è necessario fornire un file con estensione LIB costituito dai file con estensione obj che sono stati realizzati grazie **/GL** a meno che non si è disposti a fornire le copie del file con estensione LIB per tutte le versioni di Visual C++ si prevede che gli utenti all'uso, ora e in futuro.

i file con estensione obj generati con **/GL** e i file di intestazione precompilata non devono essere utilizzati per compilare un file con estensione LIB, a meno che il file con estensione LIB verrà essere collegato nello stesso computer che ha prodotto il **/GL** file con estensione obj. Saranno necessarie in fase di collegamento informazioni dal file di intestazione precompilata del file con estensione obj.

Per altre informazioni sulle ottimizzazioni disponibili e i limiti di Ottimizzazione intero programma, vedere [/LTCG](ltcg-link-time-code-generation.md).  **/GL** inoltre rende disponibile l'ottimizzazione PGO; vedere /LTCG.  Quando si compila per ottimizzazioni PGO e se si desidera che le ottimizzazioni PGO ordinamento delle funzioni, è necessario compilare con [/Gy](gy-enable-function-level-linking.md) o un'opzione del compilatore, che implica /Gy.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Visualizzare [/LTCG (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md) per informazioni su come specificare **/GL** nell'ambiente di sviluppo.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
