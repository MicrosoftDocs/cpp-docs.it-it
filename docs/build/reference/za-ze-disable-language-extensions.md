---
title: /Za, /Ze (Disabilita estensioni linguaggio)
ms.date: 02/19/2019
f1_keywords:
- VC.Project.VCCLWCECompilerTool.DisableLanguageExtensions
- /za
- /ze
- VC.Project.VCCLCompilerTool.DisableLanguageExtensions
helpviewer_keywords:
- -Za compiler option [C++]
- Za compiler option [C++]
- language extensions, disabling in compiler
- -Ze compiler option [C++]
- language extensions
- enable language extensions
- /Za compiler option [C++]
- /Ze compiler option [C++]
- Disable Language Extensions compiler option
- Ze compiler option [C++]
ms.assetid: 65e49258-7161-4289-a176-7c5c0656b1a2
ms.openlocfilehash: 1db1dbdba4829ccf939cdc4f07ccfefe2474a35d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62315885"
---
# <a name="za-ze-disable-language-extensions"></a>/Za, /Ze (Disabilita estensioni linguaggio)

Il **/Za** opzione del compilatore Disabilita e genera gli errori per le estensioni Microsoft a C che non sono compatibili con ANSI C89/ISO C90. Deprecate **/Ze** opzione del compilatore attiva le estensioni Microsoft. Le estensioni Microsoft sono attivate per impostazione predefinita.

## <a name="syntax"></a>Sintassi

> **/Za**<br/>
> **/Ze**

## <a name="remarks"></a>Note

> [!NOTE]
> L'uso di **/Za** quando codice viene compilato come C++ non è consigliata. Il **/Ze** opzione è deprecata poiché il comportamento è attivato per impostazione predefinita. Per un elenco di opzioni del compilatore deprecate, vedere [opzioni del compilatore rimosse e deprecate](compiler-options-listed-by-category.md#deprecated-and-removed-compiler-options).

Il compilatore Microsoft C/C++ supporta la compilazione del codice C in due modi:

- Il compilatore Usa modalità di compilazione di C per impostazione predefinita, quando un file di origine ha un *1).c* estensione, o quando il [/Tc](tc-tp-tc-tp-specify-source-file-type.md) o [/TC](tc-tp-tc-tp-specify-source-file-type.md) è specificata l'opzione. Il compilatore C è un compilatore C89/C90 che, per impostazione predefinita, abilita le estensioni Microsoft per il linguaggio C. Per altre informazioni sulle estensioni specifiche, vedere [Extensions Microsoft a C e C++](microsoft-extensions-to-c-and-cpp.md). Quando entrambi compilazione C e il **/Za** opzione vengono specificati, il compilatore C rigorosamente conforme allo standard/C90 C89. Il compilatore considera Microsoft estesi parole chiave come identificatori semplici, disabilita le altre estensioni di Microsoft e viene definito automaticamente il [ \_ \_STDC\_ \_ ](../../preprocessor/predefined-macros.md) predefiniti macro per i programmi C.

- Il compilatore possa compilare codice C in modalità di compilazione di C++. Questo comportamento è quello predefinito per i file di origine che non hanno una *1).c* estensione e quando il [/Tp](tc-tp-tc-tp-specify-source-file-type.md) o [/TP](tc-tp-tc-tp-specify-source-file-type.md) opzione specificata. In modalità di compilazione C++, il compilatore supporta le parti degli standard ISO C99 e C11 che sono state incorporate nello standard C++. Quasi tutto il codice C è anche il codice C++ valido. Un numero ridotto di parole chiave C e costrutti di codice non è valido codice C++, o viene interpretato in modo diverso in C++. Il compilatore si comporta conformemente alle C++ standard in questi casi. In modalità di compilazione C++, il **/Za** opzione può causare comportamenti imprevisti e non è consigliato.

Altre opzioni del compilatore possono influire sul modo in cui il compilatore garantisce conformità agli standard. Per informazioni su modi specificare standard C e C++ comportamento impostazioni specifiche, vedere la [/Zc](zc-conformance.md) opzione del compilatore. Per altre impostazioni di conformità standard C++, vedere la [/PERMISSIVE--](permissive-standards-conformance.md) e [/std](std-specify-language-standard-version.md) opzioni del compilatore.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Nel riquadro di spostamento, scegliere **le proprietà di configurazione** > **C/C++** > **lingua**.

1. Modificare il **Disabilita estensioni linguaggio** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](compiler-options.md)<br/>
[/Zc (conformità)](zc-conformance.md)<br/>
[/permissive/ (conformità agli standard)](permissive-standards-conformance.md)<br/>
[/std (specifica la versione standard del linguaggio)](std-specify-language-standard-version.md)<br/>
