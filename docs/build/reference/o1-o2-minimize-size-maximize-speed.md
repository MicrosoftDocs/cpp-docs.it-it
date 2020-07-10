---
title: /O1, /O2 (Riduci dimensione, Ottimizza velocità)
description: Le opzioni del compilatore MSVC/O1 e/O2 specificano tutte le ottimizzazioni per le dimensioni minime o la velocità massima.
ms.date: 07/08/2020
f1_keywords:
- /O2
- /O1
helpviewer_keywords:
- maximize speed compiler option [C++]
- minimize size compiler option [C++]
- -O2 compiler option [C++]
- fast code
- small code
- O2 compiler option [C++]
- /O2 compiler option [C++]
- -O1 compiler option [C++]
- O1 compiler option [C++]
- /O1 compiler option [C++]
ms.assetid: 2d1423f5-53d9-44da-8908-b33a351656c2
ms.openlocfilehash: c1eda8395e604468cbb23572ec930d6171984fe4
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180903"
---
# <a name="o1-o2-minimize-size-maximize-speed"></a>`/O1`, `/O2` (Riduci dimensione, Ottimizza velocità)

Seleziona un set predefinito di opzioni che influiscono sulle dimensioni e sulla velocità del codice generato.

## <a name="syntax"></a>Sintassi

> **`/O1`**\
> **`/O2`**

## <a name="remarks"></a>Osservazioni

Le **`/O1`** **`/O2`** Opzioni del compilatore e rappresentano un modo rapido per impostare contemporaneamente diverse opzioni di ottimizzazione specifiche. L' **`/O1`** opzione imposta le singole opzioni di ottimizzazione che creano il codice più piccolo nella maggior parte dei casi. L' **`/O2`** opzione consente di impostare le opzioni che creano il codice più veloce nella maggior parte dei casi. L' **`/O2`** opzione è l'impostazione predefinita per le build di versione. Questa tabella mostra le opzioni specifiche impostate da **`/O1`** e **`/O2`** :

| Opzione | Equivalente a |
|--|--|
| **`/O1`**(Riduzione dimensioni) | [`/Og`](og-global-optimizations.md) [`/Os`](os-ot-favor-small-code-favor-fast-code.md) [`/Oy`](oy-frame-pointer-omission.md) [`/Ob2`](ob-inline-function-expansion.md) [`/GF`](gf-eliminate-duplicate-strings.md) [`/Gy`](gy-enable-function-level-linking.md) |
| **`/O2`**(Ottimizza velocità) | [`/Og`](og-global-optimizations.md) [`/Oi`](oi-generate-intrinsic-functions.md) [`/Ot`](os-ot-favor-small-code-favor-fast-code.md) [`/Oy`](oy-frame-pointer-omission.md) [`/Ob2`](ob-inline-function-expansion.md) [`/GF`](gf-eliminate-duplicate-strings.md) [`/Gy`](gy-enable-function-level-linking.md) |

**`/O1`** e si escludono a **`/O2`** vicenda.

> [!NOTE]
> **specifico per x86**\
> Queste opzioni implicano l'uso dell'opzione omissione dei puntatori ai frame ( [`/Oy`](oy-frame-pointer-omission.md) ).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà di  >  **ottimizzazione C/C++**  >  **Optimization** .

1. Modificare la proprietà di **ottimizzazione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## <a name="see-also"></a>Vedere anche

[`/O`Opzioni (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[`/EH`(Modello di gestione delle eccezioni)](eh-exception-handling-model.md)
