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
ms.openlocfilehash: 9a2584591f6ca22d6767a5c447ffb72bea0a78ea
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825875"
---
# <a name="za-ze-disable-language-extensions"></a>/Za, /Ze (Disabilita estensioni linguaggio)

L'opzione del compilatore **/za** Disabilita e genera errori per le estensioni Microsoft in C che non sono compatibili con ANSI C89/ISO C90. L'opzione del compilatore **/ze** deprecato Abilita le estensioni Microsoft. Le estensioni Microsoft sono attivate per impostazione predefinita.

## <a name="syntax"></a>Sintassi

> **/Za**\
> **/Ze**

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> L'uso di **/za** quando il codice viene compilato come C++ non è consigliato. L'opzione **/ze** è deprecata perché il relativo comportamento è on per impostazione predefinita. Per un elenco delle opzioni del compilatore deprecate, vedere [Opzioni del compilatore deprecate e rimosse](compiler-options-listed-by-category.md#deprecated-and-removed-compiler-options).

Il compilatore Microsoft C/C++ supporta la compilazione del codice C in due modi:

- Per impostazione predefinita, il compilatore usa la modalità di compilazione C quando un file di origine ha un'estensione *c* o quando viene specificata l'opzione [/TC](tc-tp-tc-tp-specify-source-file-type.md) o [/TC](tc-tp-tc-tp-specify-source-file-type.md) . Il compilatore C è un compilatore C89/C90 che, per impostazione predefinita, Abilita le estensioni Microsoft per il linguaggio C. Per ulteriori informazioni sulle estensioni specifiche, vedere [estensioni Microsoft per C e C++](microsoft-extensions-to-c-and-cpp.md). Quando si specificano sia la compilazione C che l'opzione **/za** , il compilatore c è conforme esclusivamente allo standard C89/C90. Il compilatore considera le parole chiave estese Microsoft come semplici identificatori, Disabilita le altre estensioni Microsoft e definisce automaticamente la macro predefinita [ \_ \_STDC\_ ](../../preprocessor/predefined-macros.md) per i programmi C.

- Il compilatore può compilare il codice C in modalità di compilazione C++. Questo comportamento è quello predefinito per i file di origine che non dispongono di un'estensione *c* e quando si specifica l'opzione [/TP](tc-tp-tc-tp-specify-source-file-type.md) o [/TP](tc-tp-tc-tp-specify-source-file-type.md) . In modalità di compilazione C++, il compilatore supporta le parti degli standard ISO C99 e C11 che sono state incorporate nello standard C++. Quasi tutto il codice C è anche codice C++ valido. Una piccola quantità di parole chiave e costrutti di codice C non è un codice C++ valido o viene interpretato in modo diverso in C++. In questi casi, il compilatore si comporta in base allo standard C++. In modalità di compilazione C++, l'opzione **/za** può causare un comportamento imprevisto e non è consigliata.

Altre opzioni del compilatore possono influenzare il modo in cui il compilatore garantisce la conformità agli standard. Per informazioni su come specificare impostazioni del comportamento C e C++ standard specifiche, vedere l'opzione del compilatore [/Zc](zc-conformance.md) . Per altre impostazioni di conformità standard C++, vedere le opzioni del compilatore [/permissive-](permissive-standards-conformance.md) e [/std](std-specify-language-standard-version.md) .

Per ulteriori informazioni sui problemi di conformità con Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nel riquadro di spostamento scegliere **Proprietà** > di configurazione**linguaggio****C/C++** > .

1. Modificare la proprietà **Disable Language Extensions** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](compiler-options.md)<br/>
[/Zc (Conformità)](zc-conformance.md)<br/>
[/permissive/ (conformità agli standard)](permissive-standards-conformance.md)<br/>
[/STD (specifica la versione standard del linguaggio)](std-specify-language-standard-version.md)<br/>
