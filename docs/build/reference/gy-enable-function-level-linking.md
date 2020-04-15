---
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
ms.openlocfilehash: 8724ae4d018948c0f6aa9456f229db96878d7bf2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328285"
---
# <a name="gy-enable-function-level-linking"></a>/Gy (Attiva collegamento a livello di funzione)

Consente al compilatore di assemblare le singole funzioni sotto forma di funzioni incluse nel pacchetto (COMDAT).

## <a name="syntax"></a>Sintassi

```
/Gy[-]
```

## <a name="remarks"></a>Osservazioni

Il linker richiede che le funzioni vengano inserite separatamente come COMDAT per escludere o ordinare singole funzioni in un file DLL o EXE.

È possibile utilizzare l'opzione del linker [/OPT (Ottimizzazioni)](opt-optimizations.md) per escludere le funzioni in pacchetto senza riferimenti dal file exe.

È possibile utilizzare l'opzione del linker [/ORDER (Put Functions in Order)](order-put-functions-in-order.md) per includere le funzioni in pacchetto in un ordine specificato nel file exe.

Le funzioni inline vengono sempre inserite nel pacchetto se viene creata un'istanza come chiamate (che si verifica, ad esempio, se l'inlining è disattivato o si accetta un indirizzo di funzione). Inoltre, le funzioni membro di C, definite nella dichiarazione di classe, vengono automaticamente inserite nel pacchetto. altre funzioni non lo sono e la selezione di questa opzione è necessaria per compilarle come funzioni in pacchetto.

> [!NOTE]
> L'opzione [/-I,](z7-zi-zi-debug-information-format.md) utilizzata per Modifica e continuazione, imposta automaticamente l'opzione **/Gy.**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Generazione codice.**

1. Modificare la proprietà **Abilita collegamento a livello di funzione.**

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
