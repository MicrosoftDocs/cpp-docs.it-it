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
ms.openlocfilehash: 3daf5dd5f9912194fd5d8aaeb4c7a312be142b69
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825345"
---
# <a name="o1-o2-minimize-size-maximize-speed"></a>/O1, /O2 (Riduci dimensione, Ottimizza velocità)

Seleziona un set predefinito di opzioni che influiscono sulle dimensioni e sulla velocità del codice generato.

## <a name="syntax"></a>Sintassi

> O1
> /O2

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/O1** e **/O2** sono un modo rapido per impostare contemporaneamente diverse opzioni di ottimizzazione specifiche. L'opzione **/O1** imposta le singole opzioni di ottimizzazione che creano il codice più piccolo nella maggior parte dei casi. L'opzione **/O2** imposta le opzioni che creano il codice più veloce nella maggior parte dei casi. L'opzione **/O2** è l'impostazione predefinita per le build di versione. Questa tabella mostra le opzioni specifiche impostate da **/O1** e **/O2**:

|Opzione|Equivalente a|
|------------|-------------------|
|**/O1** (riduzione dimensioni)|[/Og](og-global-optimizations.md) [/OS](os-ot-favor-small-code-favor-fast-code.md) [/Oy](oy-frame-pointer-omission.md) [/Ob2](ob-inline-function-expansion.md) [/GF](gf-eliminate-duplicate-strings.md) [/Gy](gy-enable-function-level-linking.md)|
|**/O2** (Ottimizza velocità)|[/Og](og-global-optimizations.md) [/OI](oi-generate-intrinsic-functions.md) [/OT](os-ot-favor-small-code-favor-fast-code.md) [/Oy](oy-frame-pointer-omission.md) [/Ob2](ob-inline-function-expansion.md) [/GF](gf-eliminate-duplicate-strings.md) [/Gy](gy-enable-function-level-linking.md)|

**/O1** e **/O2** si escludono a vicenda.

> [!NOTE]
> **Specifico per x86**\
> Queste opzioni implicano l'uso dell'opzione di omissione dei puntatori ai frame ([/Oy](oy-frame-pointer-omission.md)).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. In **proprietà di configurazione**aprire **C/C++** , quindi scegliere la pagina delle proprietà **ottimizzazione** .

1. Modificare la proprietà di **ottimizzazione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/EH (Modello di gestione delle eccezioni)](eh-exception-handling-model.md)
