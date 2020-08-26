---
title: /Qvec-report (livello di segnalazione parallelizzazione automatica)
ms.date: 11/04/2016
ms.assetid: 562673b9-02da-4bf8-bb64-70bc25ef4651
ms.openlocfilehash: 3a154bdf50e951ee932173cdb65f9e1514011245
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88839413"
---
# <a name="qpar-report-auto-parallelizer-reporting-level"></a>/Qvec-report (livello di segnalazione parallelizzazione automatica)

Abilita la funzionalità di creazione di report del [parallelizzazione automatica automatico](../../parallel/auto-parallelization-and-auto-vectorization.md) del compilatore e specifica il livello dei messaggi informativi per l'output durante la compilazione.

## <a name="syntax"></a>Sintassi

```
/Qpar-report:{1}{2}
```

## <a name="remarks"></a>Osservazioni

**/Qpar-report: 1**<br/>
Invia all'output un messaggio informativo per i cicli parallelizzati.

**/Qpar-report: 2**<br/>
Invia un messaggio informativo per i cicli parallelizzati e per i cicli non parallelizzati, insieme a un codice motivo.

I messaggi vengono inviati a stdout. Se non viene segnalato alcun messaggio informativo, il codice non contiene cicli oppure il livello di segnalazione non è stato impostato per la segnalazione di cicli non parallelizzati. Per ulteriori informazioni sui codici motivo e sui messaggi, vedere [Vectorizer e parallelizzazione automatica messages](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

### <a name="to-set-the-qpar-report-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore /Qpar-report in Visual Studio

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **pagine delle proprietà** , in **C/C++**, selezionare **riga di comando**.

1. Nella casella **Opzioni aggiuntive** immettere `/Qpar-report:1` o `/Qpar-report:2` .

### <a name="to-set-the-qpar-report-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Qpar a livello di codice

- Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Vettorizzazione del codice nativo in Visual Studio](/archive/blogs/nativeconcurrency/auto-vectorizer-in-visual-studio-2012-overview)
