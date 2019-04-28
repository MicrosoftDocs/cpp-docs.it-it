---
title: /C (Conserva i commenti durante la pre-elaborazione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.KeepComments
- /c
- VC.Project.VCCLWCECompilerTool.KeepComments
helpviewer_keywords:
- comments, not stripping during preprocessing
- preserve comments during preprocessing
- -c compiler option [C++]
- c compiler option [C++]
- /c compiler option [C++]
ms.assetid: 944567ca-16bc-4728-befe-d414a7787f26
ms.openlocfilehash: c5854fd1255ab509d8778828de25638dd821d74b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272832"
---
# <a name="c-preserve-comments-during-preprocessing"></a>/C (Conserva i commenti durante la pre-elaborazione)

Conserva i commenti durante la pre-elaborazione.

## <a name="syntax"></a>Sintassi

```
/C
```

## <a name="remarks"></a>Note

Questa opzione del compilatore richiede la **/E**, **/P**, o **/EP** opzione.

Esempio di codice seguente visualizzerà il commento del codice sorgente.

```
// C_compiler_option.cpp
// compile with: /E /C /c
int i;   // a variable
```

In questo esempio verrà generato l'output seguente.

```
#line 1 "C_compiler_option.cpp"
int i;   // a variable
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **preprocessore** pagina delle proprietà.

1. Modificare il **Mantieni commenti** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.KeepComments%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/E (pre-elabora in stdout)](e-preprocess-to-stdout.md)<br/>
[/P (pre-elabora in un file)](p-preprocess-to-a-file.md)<br/>
[/EP (pre-elabora in stdout senza direttive #line)](ep-preprocess-to-stdout-without-hash-line-directives.md)
