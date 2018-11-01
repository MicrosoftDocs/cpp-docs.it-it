---
title: /Ge (Attiva ricerche dello stack)
ms.date: 11/04/2016
f1_keywords:
- /ge
helpviewer_keywords:
- -Ge compiler option [C++]
- enable stack probes
- /Ge compiler option [C++]
- stack, stack probes
- stack probes
- stack checking calls
- Ge compiler option [C++]
ms.assetid: 4b54deae-4e3c-4bfa-95f3-ba23590f7258
ms.openlocfilehash: 485a6a479f4d0d6c9e5eb745eda894a01f356e8c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50448932"
---
# <a name="ge-enable-stack-probes"></a>/Ge (Attiva ricerche dello stack)

Attiva ricerche dello stack per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali.

## <a name="syntax"></a>Sintassi

```
/Ge
```

## <a name="remarks"></a>Note

Questo meccanismo è utile se si riscrive la funzionalità del probe dello stack. È consigliabile usare [/Gh (Abilita funzione Hook nella penter)](../../build/reference/gh-enable-penter-hook-function.md) anziché i probe dello stack di riscrittura.

[/GS (controllo dello Stack verifica chiamate)](../../build/reference/gs-control-stack-checking-calls.md) ha lo stesso effetto.

**/Ge** è deprecato; a partire da Visual Studio 2005, il compilatore genera automaticamente il controllo dello stack. Per un elenco di opzioni del compilatore deprecate, vedere **deprecate o rimosse le opzioni del compilatore** nelle [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)