---
description: Altre informazioni su:/Qvec-report (livello di segnalazione Vectorizer automatica)
title: /Qvec-report (livello di segnalazione vettorizzazione automatica)
ms.date: 11/04/2016
ms.assetid: 4778c9a3-0692-4085-9b05-1bfeadf4c74a
ms.openlocfilehash: 734dabffa3bf19ecaba42d35d208eb27ec7b2968
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225466"
---
# <a name="qvec-report-auto-vectorizer-reporting-level"></a>/Qvec-report (livello di segnalazione vettorizzazione automatica)

Abilita la funzionalità di creazione di report del compilatore [Vectorizer automaticamente](../../parallel/auto-parallelization-and-auto-vectorization.md) e specifica il livello dei messaggi informativi per l'output durante la compilazione.

## <a name="syntax"></a>Sintassi

```
/Qvec-report:{1}{2}
```

## <a name="remarks"></a>Osservazioni

**/Qvec-report: 1**<br/>
Genera un messaggio informativo per i cicli che sono vettoriati.

**/Qvec-report: 2**<br/>
Genera un messaggio informativo per i cicli che sono vettoriati e per i cicli non vettoriati, insieme a un codice motivo.

Per informazioni sui codici motivo e sui messaggi, vedere [Vectorizer e parallelizzazione automatica messages](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

### <a name="to-set-the-qvec-report-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore/Qvec-report in Visual Studio

1. In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **pagine delle proprietà** , in **C/C++**, selezionare **riga di comando**.

1. Nella casella **Opzioni aggiuntive** immettere `/Qvec-report:1` o `/Qvec-report:2` .

### <a name="to-set-the-qvec-report-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore/Qvec-report a livello di codice

- Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Vettorizzazione del codice nativo in Visual Studio](/archive/blogs/nativeconcurrency/auto-vectorizer-in-visual-studio-2012-overview)
