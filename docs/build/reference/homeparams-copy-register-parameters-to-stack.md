---
title: /homeparams (Copia i parametri del registro nello stack)
ms.date: 12/17/2018
f1_keywords:
- /homeparams
helpviewer_keywords:
- /homeparams compiler option [C++]
- -homeparams compiler option [C++]
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
ms.openlocfilehash: ffb5ca602feb7a369bb31d0277834786d66ac12a
ms.sourcegitcommit: ff3cbe4235b6c316edcc7677f79f70c3e784ad76
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/19/2018
ms.locfileid: "53627479"
---
# <a name="homeparams-copy-register-parameters-to-stack"></a>/homeparams (Copia i parametri del registro nello stack)

Forza parametri passati nei registri da scrivere anche nei percorsi nello stack di ingresso della funzione.

## <a name="syntax"></a>Sintassi

> **/homeparams**

## <a name="remarks"></a>Note

Questa opzione del compilatore è disponibile solo in nativo e compilatori incrociati x64 come destinazione.

La convenzione di chiamata x64 richiede spazio dello stack da allocare per tutti i parametri, anche per i parametri passati nei registri. Per altre informazioni, vedere [passaggio dei parametri](../../build/x64-calling-convention.md#parameter-passing). Per impostazione predefinita, i parametri del registro non vengono copiati nello spazio di stack allocato per essi nelle build di rilascio. Questo rende difficile eseguire il debug di una build di rilascio ottimizzato del programma.

Per le build di rilascio, è possibile usare la **/homeparams** registro delle opzioni a forzare nel compilatore per copiare i parametri per lo stack, per garantire che è possibile eseguire il debug dell'applicazione. **/homeparams** non comporta prestazioni, perché richiede un ciclo aggiuntivo per caricare i parametri del registro nello stack.

Nelle build di debug, lo stack viene sempre popolato con i parametri passati nei registri.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)