---
description: Altre informazioni su:/GX (Abilita la gestione delle eccezioni)
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
ms.openlocfilehash: e511407504129f94b615fb3ec05c9f8a04766b10
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191706"
---
# <a name="gx-enable-exception-handling"></a>/GX (Attiva gestione eccezioni)

Deprecato. Abilita la gestione delle eccezioni sincrona usando il presupposto che le funzioni dichiarate tramite `extern "C"` non generano mai un'eccezione.

## <a name="syntax"></a>Sintassi

```
/GX
```

## <a name="remarks"></a>Osservazioni

**/GX** è deprecato. Usare invece l'opzione [/EHsc](eh-exception-handling-model.md) equivalente. Per un elenco delle opzioni del compilatore deprecate, vedere la sezione Opzioni del compilatore **deprecate e rimosse** in [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

Per impostazione predefinita, **/EHsc**, equivalente a **/GX**, è attivo quando si esegue la compilazione usando l'ambiente di sviluppo di Visual Studio. Quando si usano gli strumenti da riga di comando, non viene specificata alcuna gestione delle eccezioni. Equivale a **/GX-**.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nel riquadro di spostamento scegliere **proprietà di configurazione**, **C/C++**, **riga di comando**.

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/EH (modello di gestione delle eccezioni)](eh-exception-handling-model.md)
