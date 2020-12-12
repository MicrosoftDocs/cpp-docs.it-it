---
description: Altre informazioni su:/homeparams (copia i parametri del registro nello stack)
title: /homeparams (Copia i parametri del registro nello stack)
ms.date: 12/17/2018
f1_keywords:
- /homeparams
helpviewer_keywords:
- /homeparams compiler option [C++]
- -homeparams compiler option [C++]
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
ms.openlocfilehash: 52145534121831be256c3db2a6ccacdffb30b2c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191472"
---
# <a name="homeparams-copy-register-parameters-to-stack"></a>/homeparams (Copia i parametri del registro nello stack)

Impone anche la scrittura dei parametri passati nei registri nei rispettivi percorsi nello stack al momento dell'immissione della funzione.

## <a name="syntax"></a>Sintassi

> **/homeparams**

## <a name="remarks"></a>Commenti

Questa opzione del compilatore è disponibile solo nei compilatori nativi e incrociati destinati a x64.

La convenzione di chiamata x64 richiede che lo spazio dello stack venga allocato per tutti i parametri, anche per i parametri passati nei registri. Per ulteriori informazioni, vedere [passaggio di parametri](../../build/x64-calling-convention.md#parameter-passing). Per impostazione predefinita, i parametri del registro non vengono copiati nello spazio dello stack allocato nelle build di rilascio. Questo rende difficile eseguire il debug di una build di rilascio ottimizzata del programma.

Per le build di versione, è possibile usare l'opzione **/homeparams** per forzare il compilatore a copiare i parametri del registro nello stack, per assicurarsi che sia possibile eseguire il debug dell'applicazione. **/homeparams** implica uno svantaggio in merito alle prestazioni, perché richiede un ciclo aggiuntivo per caricare i parametri del registro nello stack.

Nelle build di debug lo stack viene sempre popolato con i parametri passati nei registri.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **C/C++**  >   .

1. Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
