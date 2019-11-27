---
title: /GX (Attiva gestione eccezioni)
ms.date: 11/19/2019
f1_keywords:
- /gx
helpviewer_keywords:
- exception handling, enabling
- /GX compiler option [C++]
- -GX compiler option [C++]
- cl.exe compiler, exception handling
- enable exception handling compiler option [C++]
- GX compiler option [C++]
ms.assetid: 933b43ba-de77-4ff8-a48b-7074de90bc1c
ms.openlocfilehash: 171ff0d0dfb1dec41bae5f6be63c941802c402a4
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74245094"
---
# <a name="gx-enable-exception-handling"></a>/GX (Attiva gestione eccezioni)

Deprecato. Abilita la gestione delle eccezioni sincrona usando il presupposto che le funzioni dichiarate con `extern "C"` non generano mai un'eccezione.

## <a name="syntax"></a>Sintassi

```
/GX
```

## <a name="remarks"></a>Note

**/GX** è deprecato. Usare invece l'opzione [/EHsc](eh-exception-handling-model.md) equivalente. Per un elenco delle opzioni del compilatore deprecate, vedere la sezione Opzioni del compilatore **deprecate e rimosse** in [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

Per impostazione predefinita, **/EHsc**, equivalente a **/GX**, è attivo quando si esegue la compilazione usando l'ambiente di sviluppo di Visual Studio. Quando si usano gli strumenti da riga di comando, non viene specificata alcuna gestione delle eccezioni. Equivale a **/GX-** .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nel riquadro di spostamento scegliere **proprietà di configurazione**, **C/C++** , **riga di comando**.

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/EH (modello di gestione delle eccezioni)](eh-exception-handling-model.md)
