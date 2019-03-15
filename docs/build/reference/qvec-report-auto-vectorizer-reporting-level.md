---
title: /Qvec-report (livello di segnalazione vettorizzazione automatica)
ms.date: 11/04/2016
ms.assetid: 4778c9a3-0692-4085-9b05-1bfeadf4c74a
ms.openlocfilehash: 655be3581eee4b23a8d0f2bcfaea7d07c8b1b07c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57815944"
---
# <a name="qvec-report-auto-vectorizer-reporting-level"></a>/Qvec-report (livello di segnalazione vettorizzazione automatica)

Abilita la funzionalità di segnalazione del compilatore [vettorizzazione automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) e specifica il livello dei messaggi informativi per l'output durante la compilazione.

## <a name="syntax"></a>Sintassi

```
/Qvec-report:{1}{2}
```

## <a name="remarks"></a>Note

**/Qvec-report:1**<br/>
Invia un messaggio informativo per i cicli sono vettorizzati.

**/Qvec-report:2**<br/>
Invia un messaggio informativo per i cicli sono vettorizzati e per i cicli non vettorizzati, insieme a un codice motivo.

Per informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

### <a name="to-set-the-qvec-report-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore /Qvec-report in Visual Studio

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.

1. Nel **pagine delle proprietà** nella finestra di dialogo **C/C++**, selezionare **riga di comando**.

1. Nel **opzioni aggiuntive** casella, immettere `/Qvec-report:1` o `/Qvec-report:2`.

### <a name="to-set-the-qvec-report-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Qvec-report a livello di codice

- Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Programmazione parallela in codice nativo](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/04/12/auto-vectorizer-in-visual-studio-2012-overview/)
