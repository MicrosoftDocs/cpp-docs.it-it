---
title: /Qpar (Parallelizzazione automatica)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
ms.openlocfilehash: c1ddea73c5aa8d3e7e70b45834cb04154bf3b4bb
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809561"
---
# <a name="qpar-auto-parallelizer"></a>/Qpar (Parallelizzazione automatica)

Abilita il [parallelizzazione automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) funzionalità del compilatore di parallelizzare automaticamente i cicli nel codice.

## <a name="syntax"></a>Sintassi

```
/Qpar
```

## <a name="remarks"></a>Note

Quando il compilatore parallelizza automaticamente i cicli nel codice, divide il calcolo tra più core del processore. Un ciclo viene parallelizzato solo se il compilatore determina che è valido farlo e che la parallelizzazione potrà migliorare le prestazioni.

Le direttive `#pragma loop()` sono disponibili per garantire l'utilità di ottimizzazione per parallelizzare i cicli specifici. Per altre informazioni, vedere [ciclo](../../preprocessor/loop.md).

Per informazioni su come abilitare i messaggi di output per la parallelizzazione automatica, vedere [/Qpar-report (livello di segnalazione parallelizzazione automatica)](qpar-report-auto-parallelizer-reporting-level.md).

### <a name="to-set-the-qpar-compiler-option-in-visual-studio"></a>Per impostare l'opzione /Qpar del compilatore in Visual Studio

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.

1. Nel **pagine delle proprietà** nella finestra di dialogo **C/C++**, selezionare **riga di comando**.

1. Nel **opzioni aggiuntive** immettere `/Qpar`.

### <a name="to-set-the-qpar-compiler-option-programmatically"></a>Per impostare l'opzione /Qpar del compilatore a livello di codice

- Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[/Qvec/report (livello di segnalazione parallelizzazione automatica)](qpar-report-auto-parallelizer-reporting-level.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[#pragma loop()](../../preprocessor/loop.md)<br/>
[Programmazione parallela in codice nativo](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/04/12/auto-vectorizer-in-visual-studio-2012-overview/)
