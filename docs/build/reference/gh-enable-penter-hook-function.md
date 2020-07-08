---
title: /Gh (Attiva funzione hook _penter)
description: Descrive l'opzione del compilatore/GH per chiamare la funzione _penter fornita.
ms.date: 07/06/2020
f1_keywords:
- _penter
helpviewer_keywords:
- /Gh compiler option [C++]
- Gh compiler option [C++]
- _penter function
- -Gh compiler option [C++]
ms.assetid: 1510a082-8a0e-486e-a309-6add814b494f
ms.openlocfilehash: 96597d964e6a341aa25f4d52d34974949eb7b096
ms.sourcegitcommit: 85d96eeb1ce41d9e1dea947f65ded672e146238b
ms.contentlocale: it-IT
ms.lasthandoff: 07/07/2020
ms.locfileid: "86058581"
---
# <a name="gh-enable-_penter-hook-function"></a>/Gh (Attiva funzione hook _penter)

Causa una chiamata alla `_penter` funzione all'inizio di ogni metodo o funzione.

## <a name="syntax"></a>Sintassi

> **`/Gh`**

## <a name="remarks"></a>Osservazioni

La `_penter` funzione non fa parte di alcuna libreria. È necessario fornire una definizione per `_penter` .

A meno che non si preveda di chiamare in modo esplicito `_penter` , non è necessario fornire un prototipo. La funzione deve effettuare il push del contenuto di tutti i registri sulla voce ed estrarre il contenuto non modificato all'uscita. Deve apparire come se avesse il seguente prototipo:

```cpp
void __declspec(naked) __cdecl _penter( void );
```

Questa dichiarazione non è disponibile per i progetti a 64 bit.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **C/C++**  >  **Command Line** .

1. Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="example"></a>Esempio

Il codice seguente, quando compilato con **/GH**, Mostra come `_penter` viene chiamato due volte. una volta quando si immette la funzione `main` e una volta quando si entra in funzione `x` . L'esempio è costituito da due file di origine, che vengono compilati separatamente.

```cpp
// local_penter.cpp
// compile with: cl /EHsc /c local_penter.cpp
// processor: x86
#include <stdio.h>

extern "C" void __declspec(naked) __cdecl _penter( void ) {
   _asm {
      push eax
      push ebx
      push ecx
      push edx
      push ebp
      push edi
      push esi
    }

   printf_s("\nIn a function!");

   _asm {
      pop esi
      pop edi
      pop ebp
      pop edx
      pop ecx
      pop ebx
      pop eax
      ret
    }
}
```

```cpp
// Gh_compiler_option.cpp
// compile with: cl /EHsc /Gh Gh_compiler_option.cpp local_penter.obj
// processor: x86
#include <stdio.h>

void x() {}

int main() {
   x();
}
```

Quando viene eseguito, la `_penter` funzione locale viene chiamata alla voce `main` e `x` :

```Output

In a function!
In a function!
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[`/GH`(Abilita funzione hook _pexit)](gh-enable-pexit-hook-function.md)
