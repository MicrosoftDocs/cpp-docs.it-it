---
description: Altre informazioni su:/GE (Abilita Probe dello stack)
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
ms.openlocfilehash: db996deb1c5b964661e5465fe72cfb0fab93df56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192018"
---
# <a name="ge-enable-stack-probes"></a>/Ge (Attiva ricerche dello stack)

Attiva i probe dello stack per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali.

## <a name="syntax"></a>Sintassi

```
/Ge
```

## <a name="remarks"></a>Osservazioni

Questo meccanismo è utile se si riscrive la funzionalità del probe dello stack. Si consiglia di usare [/GH (abilita _Penter funzione hook)](gh-enable-penter-hook-function.md) invece di riscrivere il probe dello stack.

[/GS (controlla le chiamate di controllo dello stack)](gs-control-stack-checking-calls.md) ha lo stesso effetto.

**/GE** è deprecato; a partire da Visual Studio 2005, il compilatore genera automaticamente il controllo dello stack. Per un elenco delle opzioni del compilatore deprecate, vedere Opzioni del compilatore **deprecate e rimosse** nelle [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
