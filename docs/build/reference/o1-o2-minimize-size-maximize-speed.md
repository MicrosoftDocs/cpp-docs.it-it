---
title: -/O1, /O2 (Riduci dimensione, Ottimizza velocità) | Documenti Microsoft
ms.custom: ''
ms.date: 09/25/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /o2
- /o1
dev_langs:
- C++
helpviewer_keywords:
- maximize speed compiler option [C++]
- minimize size compiler option [C++]
- -O2 compiler option [C++]
- fast code
- small code
- O2 compiler option [C++]
- /O2 compiler option [C++]
- -O1 compiler option [C++]
- O1 compiler option [C++]
- /O1 compiler option [C++]
ms.assetid: 2d1423f5-53d9-44da-8908-b33a351656c2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5003695c5ae2b16faf8aa80f68928858a3a48288
ms.sourcegitcommit: 4cdfff1114829599ab54178767f57664ad3424d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/20/2018
ms.locfileid: "36270552"
---
# <a name="o1-o2-minimize-size-maximize-speed"></a>/O1, /O2 (Riduci dimensione, Ottimizza velocità)

Seleziona un set predefinito di opzioni che influiscono sulle dimensioni e la velocità del codice generato.

## <a name="syntax"></a>Sintassi

> /O1  
> /O2

## <a name="remarks"></a>Note

Il **/O1** e **/O2** opzioni del compilatore sono un modo rapido per impostare diverse opzioni di ottimizzazione specifiche in una sola volta. Il **/O1** opzione consente di impostare le opzioni di ottimizzazione singoli che crea il codice più piccolo nella maggior parte dei casi. Il **/O2** opzione consente di impostare le opzioni per creare il codice più veloce nella maggior parte dei casi. Il **/O2** è l'impostazione predefinita nelle build di rilascio. Questa tabella mostra le opzioni impostate da **/O1** e **/O2**:

|Opzione|Equivale a|
|------------|-------------------|
|**/ O1** (Riduci dimensione)|[/Og](../../build/reference/og-global-optimizations.md) [/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) [/Oy](../../build/reference/oy-frame-pointer-omission.md) [/Ob2](../../build/reference/ob-inline-function-expansion.md) [/GF](../../build/reference/gf-eliminate-duplicate-strings.md) [/Gy](../../build/reference/gy-enable-function-level-linking.md)|
|**/ O2** (Ottimizza velocità)|[/Og](../../build/reference/og-global-optimizations.md) [/Oi](../../build/reference/oi-generate-intrinsic-functions.md) [/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) [/Oy](../../build/reference/oy-frame-pointer-omission.md) [/Ob2](../../build/reference/ob-inline-function-expansion.md) [/GF](../../build/reference/gf-eliminate-duplicate-strings.md) [/Gy](../../build/reference/gy-enable-function-level-linking.md)|

**/ O1** e **/O2** si escludono a vicenda.

> [!NOTE]  
> **x86 specifico**  
> Tali opzioni presuppongono l'uso dell'omissione di puntatori ai Frame ([/Oy](../../build/reference/oy-frame-pointer-omission.md)) opzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. In **le proprietà di configurazione**aprire **C/C++** e quindi scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **ottimizzazione** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
[/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md)
