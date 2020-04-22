---
title: /GH (Attiva funzione hook _pexit)
ms.date: 11/04/2016
f1_keywords:
- _pexit
helpviewer_keywords:
- /Gh compiler option [C++]
- Gh compiler option [C++]
- _pexit function
- -Gh compiler option [C++]
ms.assetid: 93181453-2676-42e5-bf63-3b19e07299b6
ms.openlocfilehash: 5382ba90f490aaa12e9e55767fdf15170a69ced5
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749234"
---
# <a name="gh-enable-_pexit-hook-function"></a>/GH (Attiva funzione hook _pexit)

Chiama `_pexit` la funzione alla fine di ogni metodo o funzione.

## <a name="syntax"></a>Sintassi

```
/GH
```

## <a name="remarks"></a>Osservazioni

La `_pexit` funzione non fa parte di alcuna libreria e `_pexit`spetta all'utente fornire una definizione per .

A meno che `_pexit`non si intenda chiamare in modo esplicito , non è necessario fornire un prototipo. La funzione deve apparire come se avesse il seguente prototipo, e deve spingere il contenuto di tutti i registri all'ingresso e pop il contenuto invariato all'uscita:

```cpp
void __declspec(naked) __cdecl _pexit( void );
```

`_pexit`è simile `_penter`a ; Vedere [/Gh (Abilita _penter funzione Hook)](gh-enable-penter-hook-function.md) per `_pexit` un esempio di come scrivere una funzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
