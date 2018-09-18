---
title: -GL (Ottimizzazione intero programma) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /gl
- VC.Project.VCCLWCECompilerTool.WholeProgramOptimization
dev_langs:
- C++
helpviewer_keywords:
- /GL compiler option [C++]
- whole program optimizations and C++ compiler
- -GL compiler option [C++]
- GL compiler option [C++]
ms.assetid: 09d51e2d-9728-4bd0-b5dc-3b8284aca1d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 97561a63a21550cc06f29a95f6ddf05687758b83
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723658"
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

i file con estensione obj generati con **/GL** non sarà disponibile per utilità del linker come [EDITBIN](../../build/reference/editbin-reference.md) e [DUMPBIN](../../build/reference/dumpbin-reference.md).

Se si esegue la compilazione del programma con **/GL** e [/c](../../build/reference/c-compile-without-linking.md), è consigliabile usare l'opzione del linker /LTCG per creare il file di output.

[/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) non può essere usato con **/GL**

Il formato dei file creati con **/GL** nella versione corrente potrebbero non essere leggibili nelle versioni successive di Visual C++. Non è necessario fornire un file con estensione LIB costituito dai file con estensione obj che sono stati realizzati grazie **/GL** a meno che non si è disposti a fornire le copie del file con estensione LIB per tutte le versioni di Visual C++ si prevede che gli utenti all'uso, ora e in futuro.

i file con estensione obj generati con **/GL** e i file di intestazione precompilata non devono essere utilizzati per compilare un file con estensione LIB, a meno che il file con estensione LIB verrà essere collegato nello stesso computer che ha prodotto il **/GL** file con estensione obj. Saranno necessarie in fase di collegamento informazioni dal file di intestazione precompilata del file con estensione obj.

Per altre informazioni sulle ottimizzazioni disponibili e i limiti di Ottimizzazione intero programma, vedere [/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  **/GL** inoltre rende disponibile l'ottimizzazione PGO; vedere /LTCG.  Quando si compila per ottimizzazioni PGO e se si desidera che le ottimizzazioni PGO ordinamento delle funzioni, è necessario compilare con [/Gy](../../build/reference/gy-enable-function-level-linking.md) o un'opzione del compilatore, che implica /Gy.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Visualizzare [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md) per informazioni su come specificare **/GL** nell'ambiente di sviluppo.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)