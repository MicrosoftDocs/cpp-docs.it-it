---
title: /Qsafe_fp_loads | Documenti Microsoft
ms.custom: ''
ms.date: 01/24/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1462303f9e178c70a845066bc7a0a3ce78a99e15
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378285"
---
# <a name="qsafefploads"></a>/Qsafe_fp_loads

Richiede le istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile.

## <a name="syntax"></a>Sintassi

> **/Qsafe_fp_loads**

## <a name="remarks"></a>Note

**/Qsafe_fp_loads** è solo nei compilatori per piattaforma x86; non è disponibile nei compilatori destinati a x64 o ARM.

**/Qsafe_fp_loads** impone al compilatore di usare istruzioni di spostamento integer anziché istruzioni di spostamento a virgola mobile per spostare i dati tra memoria e MMX Registra. Questa opzione inoltre disabilita l'ottimizzazione del caricamento del registro per i valori in virgola mobile che possono essere caricati in più percorsi di controllo quando il valore può generare un'eccezione in fase di caricamento, ad esempio un valore NaN.

Questa opzione viene ignorata da [/fp: tranne](../../build/reference/fp-specify-floating-point-behavior.md). **/Qsafe_fp_loads** specifica un subset del comportamento del compilatore specificato da **/fp: tranne**.

**/Qsafe_fp_loads** non è compatibile con [/clr](../../build/reference/clr-common-language-runtime-compilation.md) e [/fp: fast](../../build/reference/fp-specify-floating-point-behavior.md). Per ulteriori informazioni sulle opzioni del compilatore a virgola mobile, vedere [/fp (specifica il comportamento a virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella. Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
