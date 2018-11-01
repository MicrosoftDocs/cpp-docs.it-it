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
ms.openlocfilehash: b37e279af3995bd1d61c97dc88b49cdd95495c75
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50442601"
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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **preprocessore** pagina delle proprietà.

1. Modificare il **Mantieni commenti** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.KeepComments%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/E (pre-elabora in stdout)](../../build/reference/e-preprocess-to-stdout.md)<br/>
[/P (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md)<br/>
[/EP (pre-elabora in stdout senza direttive #line)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md)