---
title: /O1, /O2 (Riduci dimensione, Ottimizza velocità)
ms.date: 09/25/2017
f1_keywords:
- /o2
- /o1
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
ms.openlocfilehash: d33fe6bceae09267fd3f79ffe3dc26864e87c764
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320357"
---
# <a name="o1-o2-minimize-size-maximize-speed"></a>/O1, /O2 (Riduci dimensione, Ottimizza velocità)

Seleziona un set predefinito di opzioni che influiscono sulle dimensioni e la velocità del codice generato.

## <a name="syntax"></a>Sintassi

> /O1 /O2

## <a name="remarks"></a>Note

Il **/O1** e **/O2** opzioni del compilatore sono un modo rapido per impostare contemporaneamente diverse opzioni di ottimizzazione specifiche. Il **/O1** opzione consente di impostare le opzioni di ottimizzazione singoli che crea il codice più piccolo nella maggior parte dei casi. Il **/O2** opzione consente di impostare le opzioni di creare il codice più veloce nella maggior parte dei casi. Il **/O2** rappresenta l'opzione predefinita per le build di rilascio. Questa tabella mostra le opzioni specifiche che vengono impostate dal **/O1** e **/O2**:

|Opzione|Equivalente a|
|------------|-------------------|
|**/ O1** (Riduci dimensione)|[/Og](og-global-optimizations.md) [/Os](os-ot-favor-small-code-favor-fast-code.md) [/Oy](oy-frame-pointer-omission.md) [/Ob2](ob-inline-function-expansion.md) [/GF](gf-eliminate-duplicate-strings.md) [/Gy](gy-enable-function-level-linking.md)|
|**/ O2** (Ottimizza velocità)|[/Og](og-global-optimizations.md) [/Oi](oi-generate-intrinsic-functions.md) [/Ot](os-ot-favor-small-code-favor-fast-code.md) [/Oy](oy-frame-pointer-omission.md) [/Ob2](ob-inline-function-expansion.md) [/GF](gf-eliminate-duplicate-strings.md) [/Gy](gy-enable-function-level-linking.md)|

**/ O1** e **/O2** si escludono a vicenda.

> [!NOTE]
> **x86 specifici** queste opzioni implicano l'uso dell'omissione dei puntatori ai Frame ([/Oy](oy-frame-pointer-omission.md)) opzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Sotto **le proprietà di configurazione**aprire **C/C++** e quindi scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **ottimizzazione** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/EH (modello di gestione delle eccezioni)](eh-exception-handling-model.md)
