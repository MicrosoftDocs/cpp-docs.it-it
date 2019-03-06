---
title: /Qvec-report (livello di segnalazione parallelizzazione automatica)
ms.date: 11/04/2016
ms.assetid: 562673b9-02da-4bf8-bb64-70bc25ef4651
ms.openlocfilehash: 4ab14f890d888664b2847f3e3d4b193d7c77da1a
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57419907"
---
# <a name="qpar-report-auto-parallelizer-reporting-level"></a>/Qvec-report (livello di segnalazione parallelizzazione automatica)

Abilita la funzionalità di reporting del compilatore [parallelizzazione automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) e specifica il livello dei messaggi informativi per l'output durante la compilazione.

## <a name="syntax"></a>Sintassi

```
/Qpar-report:{1}{2}
```

## <a name="remarks"></a>Note

**/Qpar-report:1**<br/>
Invia all'output un messaggio informativo per i cicli parallelizzati.

**/Qpar-report:2**<br/>
Invia un messaggio informativo per i cicli parallelizzati e per i cicli non parallelizzati, insieme a un codice motivo.

I messaggi vengono inviati a stdout. Se non viene segnalato alcun messaggio informativo, il codice non contiene cicli oppure il livello di segnalazione non è stato impostato per la segnalazione di cicli non parallelizzati. Per altre informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

### <a name="to-set-the-qpar-report-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore /Qpar-report in Visual Studio

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.

1. Nel **pagine delle proprietà** nella finestra di dialogo **C/C++**, selezionare **riga di comando**.

1. Nel **opzioni aggiuntive** casella, immettere `/Qpar-report:1` o `/Qpar-report:2`.

### <a name="to-set-the-qpar-report-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Qpar a livello di codice

- Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Programmazione parallela in codice nativo](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/04/12/auto-vectorizer-in-visual-studio-2012-overview/)
