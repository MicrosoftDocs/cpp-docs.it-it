---
description: Ulteriori informazioni su:/Qsafe_fp_loads
title: /Qsafe_fp_loads
ms.date: 01/24/2018
ms.openlocfilehash: e569b308d2da982c72775699ff2149daa45a8f2a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225518"
---
# <a name="qsafe_fp_loads"></a>/Qsafe_fp_loads

Richiede le istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile.

## <a name="syntax"></a>Sintassi

> **/Qsafe_fp_loads**

## <a name="remarks"></a>Commenti

**/Qsafe_fp_loads** è disponibile solo nei compilatori destinati a x86. non è disponibile nei compilatori destinati a x64 o ARM.

**/Qsafe_fp_loads** impone al compilatore di usare le istruzioni di spostamento Integer anziché le istruzioni di spostamento a virgola mobile per spostare i dati tra i registri di memoria e MMX. Questa opzione inoltre disabilita l'ottimizzazione del caricamento del registro per i valori in virgola mobile che possono essere caricati in più percorsi di controllo quando il valore può generare un'eccezione in fase di caricamento, ad esempio un valore NaN.

Questa opzione viene sottoposta a override da [/FP: except](fp-specify-floating-point-behavior.md). **/Qsafe_fp_loads** specifica un subset del comportamento del compilatore specificato da **/FP: except**.

**/Qsafe_fp_loads** non è compatibile con [/CLR](clr-common-language-runtime-compilation.md) e [/FP: Fast](fp-specify-floating-point-behavior.md). Per ulteriori informazioni sulle opzioni del compilatore a virgola mobile, vedere [/FP (specifica il comportamento di Floating-Point)](fp-specify-floating-point-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** . Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
