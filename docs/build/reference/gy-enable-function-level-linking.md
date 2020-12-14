---
description: Altre informazioni su:/GY (Abilita collegamento Function-Level)
title: /Gy (Attiva collegamento a livello di funzione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableFunctionLevelLinking
- /gy
- VC.Project.VCCLWCECompilerTool.EnableFunctionLevelLinking
helpviewer_keywords:
- enable function-level linking compiler option [C++]
- COMDAT function
- Gy compiler option [C++]
- -Gy compiler option [C++]
- /Gy compiler option [C++]
- packaged functions
ms.assetid: 0d3cf14c-ed7d-4ad3-b4b6-104e56f61046
ms.openlocfilehash: 3c4136b25001f7f6d6729b9c6089995d1bcd71bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200130"
---
# <a name="gy-enable-function-level-linking"></a>/Gy (Attiva collegamento a livello di funzione)

Consente al compilatore di assemblare le singole funzioni sotto forma di funzioni incluse nel pacchetto (COMDAT).

## <a name="syntax"></a>Sintassi

```
/Gy[-]
```

## <a name="remarks"></a>Osservazioni

Il linker richiede che le funzioni vengano assemblate separatamente come COMDAT per escludere o ordinare le singole funzioni in un file DLL o exe.

È possibile usare l'opzione del linker [/opt (ottimizzazioni)](opt-optimizations.md) per escludere le funzioni in pacchetto senza riferimenti dal file exe.

È possibile usare l'opzione del linker [/Order (Put Functions in order)](order-put-functions-in-order.md) per includere le funzioni in pacchetto in un ordine specificato nel file con estensione exe.

Le funzioni inline sono sempre in pacchetto se ne viene creata un'istanza come chiamate (che si verifica, ad esempio, se l'incorporamento è disattivato o si accetta un indirizzo di funzione). Inoltre, le funzioni membro C++ definite nella dichiarazione di classe vengono automaticamente assemblate. altre funzioni non lo sono e la selezione di questa opzione è necessaria per compilarle come funzioni in pacchetto.

> [!NOTE]
> L'opzione [/Zi](z7-zi-zi-debug-information-format.md) , usata per modifica e continuazione, imposta automaticamente l'opzione **/Gy** .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **generazione codice** .

1. Modificare la proprietà **abilita Function-Level collegamento** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
