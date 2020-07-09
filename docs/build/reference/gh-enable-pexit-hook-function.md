---
title: /GH (Attiva funzione hook _pexit)
description: Descrive l'opzione del compilatore/GH per impostare una funzione di hook _pexit locale.
ms.date: 07/06/2020
f1_keywords:
- _pexit
helpviewer_keywords:
- /Gh compiler option [C++]
- Gh compiler option [C++]
- _pexit function
- -Gh compiler option [C++]
ms.assetid: 93181453-2676-42e5-bf63-3b19e07299b6
ms.openlocfilehash: b8fc355503055af8b928874ced39cb8224901d3e
ms.sourcegitcommit: 85d96eeb1ce41d9e1dea947f65ded672e146238b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/07/2020
ms.locfileid: "86058607"
---
# <a name="gh-enable-_pexit-hook-function"></a>/GH (Attiva funzione hook _pexit)

Chiama la `_pexit` funzione alla fine di ogni metodo o funzione.

## <a name="syntax"></a>Sintassi

> **`/GH`**

## <a name="remarks"></a>Osservazioni

La `_pexit` funzione non fa parte di alcuna libreria. È necessario fornire una definizione per `_pexit` .

A meno che non si preveda di chiamare in modo esplicito `_pexit` , non è necessario fornire un prototipo. La funzione deve effettuare il push del contenuto di tutti i registri sulla voce ed estrarre il contenuto non modificato all'uscita. Deve apparire come se avesse il seguente prototipo:

```cpp
void __declspec(naked) __cdecl _pexit( void );
```

Questa dichiarazione non è disponibile per i progetti a 64 bit.

`_pexit`è simile a `_penter` ; vedere [ `/Gh` (abilita funzione hook _penter)](gh-enable-penter-hook-function.md) per un esempio di come scrivere una `_penter` funzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **C/C++**  >  **Command Line** .

1. Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[`/Gh`(Abilita funzione hook _penter)](gh-enable-penter-hook-function.md)
