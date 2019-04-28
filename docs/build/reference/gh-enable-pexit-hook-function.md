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
ms.openlocfilehash: 077096cc296f2aa2128127493a84a91da9a067c5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62270913"
---
# <a name="gh-enable-pexit-hook-function"></a>/GH (Attiva funzione hook _pexit)

Le chiamate di `_pexit` funzione alla fine di ogni metodo o funzione.

## <a name="syntax"></a>Sintassi

```
/GH
```

## <a name="remarks"></a>Note

Il `_pexit` funzione non fa parte di una raccolta ed è responsabilità dell'utente per fornire una definizione per `_pexit`.

A meno che non si intende chiamare in modo esplicito `_pexit`, non è necessario fornire un prototipo. La funzione deve apparire come se avesse il prototipo seguente e deve eseguire il push il contenuto di tutti i registri in ingresso e prelevare il contenuto invariato all'uscita:

```
void __declspec(naked) __cdecl _pexit( void );
```

`_pexit` è simile a `_penter`; vedere [/Gh (Abilita funzione Hook nella penter)](gh-enable-penter-hook-function.md) per un esempio di come scrivere un `_pexit` (funzione).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
