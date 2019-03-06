---
title: /GX (Attiva gestione eccezioni)
ms.date: 11/04/2016
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
ms.openlocfilehash: 4ac2b86c19845a092c743c484ad48d0cd0b6fb35
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416033"
---
# <a name="gx-enable-exception-handling"></a>/GX (Attiva gestione eccezioni)

Deprecato. Abilita la gestione delle eccezioni sincrona con il presupposto che le funzioni dichiarate usando `extern "C"` mai generare un'eccezione.

## <a name="syntax"></a>Sintassi

```
/GX
```

## <a name="remarks"></a>Note

**/GX** è deprecata. Usare l'equivalente [/EHsc](../../build/reference/eh-exception-handling-model.md) opzione. Per un elenco di opzioni del compilatore deprecate, vedere la **deprecate o rimosse le opzioni del compilatore** sezione [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

Per impostazione predefinita **/EHsc**, l'equivalente **/GX**, è attiva quando esegue la compilazione con l'ambiente di sviluppo di Visual Studio. Quando si usano gli strumenti da riga di comando, non viene specificata alcuna gestione delle eccezioni. Questo è l'equivalente di **/GX-**.

Per altre informazioni, vedere [gestione delle eccezioni C++](../../cpp/cpp-exception-handling.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Nel riquadro di spostamento, scegliere **le proprietà di configurazione**, **C/C++**, **riga di comando**.

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md)
