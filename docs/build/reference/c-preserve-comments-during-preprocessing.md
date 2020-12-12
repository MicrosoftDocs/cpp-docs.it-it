---
description: Altre informazioni su:/C (conserva i commenti durante la pre-elaborazione)
title: /C (Conserva i commenti durante la pre-elaborazione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.KeepComments
- VC.Project.VCCLWCECompilerTool.KeepComments
helpviewer_keywords:
- comments, not stripping during preprocessing
- preserve comments during preprocessing
- -c compiler option [C++]
- c compiler option [C++]
- /c compiler option [C++]
ms.assetid: 944567ca-16bc-4728-befe-d414a7787f26
ms.openlocfilehash: 2cf5bf562db78dcb6c570d7313b56ad4a9fc5adb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179356"
---
# <a name="c-preserve-comments-during-preprocessing"></a>/C (Conserva i commenti durante la pre-elaborazione)

Conserva i commenti durante la pre-elaborazione.

## <a name="syntax"></a>Sintassi

```
/C
```

## <a name="remarks"></a>Osservazioni

Questa opzione del compilatore richiede l'opzione **/e**, **/p** o **/EP** .

Nell'esempio di codice seguente viene visualizzato il commento del codice sorgente.

```cpp
// C_compiler_option.cpp
// compile with: /E /C /c
int i;   // a variable
```

Questo esempio produrrà il seguente output.

```
#line 1 "C_compiler_option.cpp"
int i;   // a variable
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà del **preprocessore** .

1. Modificare la proprietà **Mantieni commenti** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.KeepComments%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/E (Pre-elabora in stdout)](e-preprocess-to-stdout.md)<br/>
[/P (pre-elabora in un file)](p-preprocess-to-a-file.md)<br/>
[/EP (pre-elabora in stdout senza direttive #line)](ep-preprocess-to-stdout-without-hash-line-directives.md)
