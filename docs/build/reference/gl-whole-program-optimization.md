---
description: Altre informazioni su:/GL (Ottimizzazione intero programma)
title: /GL (Ottimizzazione intero programma)
ms.date: 11/04/2016
f1_keywords:
- /gl
helpviewer_keywords:
- /GL compiler option [C++]
- whole program optimizations and C++ compiler
- -GL compiler option [C++]
- GL compiler option [C++]
ms.assetid: 09d51e2d-9728-4bd0-b5dc-3b8284aca1d1
ms.openlocfilehash: ad42eaeeacf897686831c9b415aa62026b5644f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200195"
---
# <a name="gl-whole-program-optimization"></a>/GL (Ottimizzazione intero programma)

Attiva l'ottimizzazione dell'intero programma.

## <a name="syntax"></a>Sintassi

```
/GL[-]
```

## <a name="remarks"></a>Osservazioni

L'ottimizzazione dell'intero programma consente al compilatore di eseguire ottimizzazioni con informazioni su tutti i moduli del programma. Senza l'ottimizzazione dell'intero programma, le ottimizzazioni vengono eseguite in base al modulo (modulo).

L'ottimizzazione dell'intero programma è disattivata per impostazione predefinita e deve essere abilitata in modo esplicito. Tuttavia, è anche possibile disabilitarlo in modo esplicito con **/GL-**.

Con informazioni su tutti i moduli, il compilatore può:

- Ottimizzare l'uso dei registri tra i limiti di funzione.

- Eseguire un processo migliore per tenere traccia delle modifiche apportate ai dati globali, consentendo una riduzione del numero di caricamenti e archivi.

- Eseguire un processo migliore per tenere traccia del possibile set di elementi modificato da una dereferenziazione del puntatore, riducendo il numero di caricamenti e archivi.

- Inline una funzione in un modulo anche quando la funzione è definita in un altro modulo.

i file con estensione obj prodotti con **/GL** non saranno disponibili per le utilità del linker come [editbin)](editbin-reference.md) e [dumpbin](dumpbin-reference.md).

Se si compila il programma con **/GL** e [/c](c-compile-without-linking.md), è necessario usare l'opzione del linker/LTCG per creare il file di output.

Impossibile utilizzare [/Zi](z7-zi-zi-debug-information-format.md) con **/GL**

Il formato dei file prodotti con **/GL** nella versione corrente potrebbe non essere leggibile dalle versioni successive di Visual C++. Non è necessario fornire un file con estensione LIB costituito da file obj creati con **/GL** , a meno che non si sia disposti a spedire copie del file lib per tutte le versioni di Visual C++ si prevede che gli utenti usino, ora e in futuro.

i file con estensione obj prodotti con **/GL** e i file di intestazione precompilata non devono essere usati per compilare un file con estensione LIB, a meno che il file con estensione LIB non sia collegato nello stesso computer che ha generato il file **/GL** . obj. Le informazioni del file di intestazione precompilata del file con estensione obj saranno necessarie in fase di collegamento.

Per ulteriori informazioni sulle ottimizzazioni disponibili con e sulle limitazioni dell'ottimizzazione dell'intero programma, vedere [/LTCG](ltcg-link-time-code-generation.md).  **/GL** rende disponibile anche l'ottimizzazione PGO; vedere/LTCG.  Quando si esegue la compilazione per le ottimizzazioni PGO e si vuole ordinare la funzione dalle ottimizzazioni PGO, è necessario compilare con [/Gy](gy-enable-function-level-linking.md) o un'opzione del compilatore che implica/Gy.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Vedere [/LTCG (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md) per informazioni su come specificare **/GL** nell'ambiente di sviluppo.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
