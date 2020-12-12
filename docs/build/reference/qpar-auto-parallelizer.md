---
description: Altre informazioni su:/QPAR (auto-parallelizzazione automatica)
title: /Qpar (Parallelizzazione automatica)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
ms.openlocfilehash: f0d4264acc4224aaad518f936dcb885d592d3007
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225583"
---
# <a name="qpar-auto-parallelizer"></a>/Qpar (Parallelizzazione automatica)

Consente alla funzionalità [parallelizzazione automatica automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) del compilatore di parallelizzare automaticamente i cicli nel codice.

## <a name="syntax"></a>Sintassi

```
/Qpar
```

## <a name="remarks"></a>Osservazioni

Quando il compilatore parallelizza automaticamente i cicli nel codice, divide il calcolo tra più core del processore. Un ciclo viene parallelizzato solo se il compilatore determina che è valido farlo e che la parallelizzazione potrà migliorare le prestazioni.

Le direttive `#pragma loop()` sono disponibili per garantire l'utilità di ottimizzazione per parallelizzare i cicli specifici. Per ulteriori informazioni, vedere [loop](../../preprocessor/loop.md).

Per informazioni su come abilitare i messaggi di output per la parallelizzazione automatica automatica, vedere [/Qpar-report (livello di report parallelizzazione automatica automatico)](qpar-report-auto-parallelizer-reporting-level.md).

### <a name="to-set-the-qpar-compiler-option-in-visual-studio"></a>Per impostare l'opzione /Qpar del compilatore in Visual Studio

1. In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **pagine delle proprietà** , in **C/C++**, selezionare **riga di comando**.

1. Nella casella **Opzioni aggiuntive** immettere `/Qpar` .

### <a name="to-set-the-qpar-compiler-option-programmatically"></a>Per impostare l'opzione /Qpar del compilatore a livello di codice

- Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[/Qpar-report (livello di segnalazione parallelizzazione automatica automatica)](qpar-report-auto-parallelizer-reporting-level.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[ciclo #pragma ()](../../preprocessor/loop.md)<br/>
[Vettorizzazione del codice nativo in Visual Studio](/archive/blogs/nativeconcurrency/auto-vectorizer-in-visual-studio-2012-overview)
