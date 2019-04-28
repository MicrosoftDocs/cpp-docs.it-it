---
title: /Qsafe_fp_loads
ms.date: 01/24/2018
ms.openlocfilehash: 57aece79dfab617121371e0489aa80f18e143372
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62319330"
---
# <a name="qsafefploads"></a>/Qsafe_fp_loads

Richiede le istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile.

## <a name="syntax"></a>Sintassi

> **/Qsafe_fp_loads**

## <a name="remarks"></a>Note

**/Qsafe_fp_loads** è solo nei compilatori per piattaforma x86; non è disponibile nei compilatori destinati a x64 o ARM.

**/Qsafe_fp_loads** impone al compilatore di usare le istruzioni di spostamento integer anziché istruzioni di spostamento in virgola mobile per spostare dati tra memoria e MMX Registra. Questa opzione inoltre disabilita l'ottimizzazione del caricamento del registro per i valori in virgola mobile che possono essere caricati in più percorsi di controllo quando il valore può generare un'eccezione in fase di caricamento, ad esempio un valore NaN.

Questa opzione esegue l'override [/fp: tranne](fp-specify-floating-point-behavior.md). **/Qsafe_fp_loads** specifica un subset del comportamento del compilatore specificato da **/fp: tranne**.

**/Qsafe_fp_loads** non è compatibile con [/clr](clr-common-language-runtime-compilation.md) e [/fp: fast](fp-specify-floating-point-behavior.md). Per altre informazioni sulle opzioni del compilatore a virgola mobile, vedere [/fp (specifica il comportamento della virgola mobile)](fp-specify-floating-point-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella. Scegli **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
