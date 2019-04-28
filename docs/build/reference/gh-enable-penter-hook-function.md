---
title: /Gh (Attiva funzione hook _penter)
ms.date: 11/04/2016
f1_keywords:
- _penter
helpviewer_keywords:
- /Gh compiler option [C++]
- Gh compiler option [C++]
- _penter function
- -Gh compiler option [C++]
ms.assetid: 1510a082-8a0e-486e-a309-6add814b494f
ms.openlocfilehash: bf7734a7b81c9550c060d43c2eabf5cb05332407
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292584"
---
# <a name="gh-enable-penter-hook-function"></a>/Gh (Attiva funzione hook _penter)

Fa sì che una chiamata al `_penter` funzione all'inizio di ogni metodo o funzione.

## <a name="syntax"></a>Sintassi

```
/Gh
```

## <a name="remarks"></a>Note

Il `_penter` funzione non fa parte di una raccolta ed è responsabilità dell'utente per fornire una definizione per `_penter`.

A meno che non si intende chiamare in modo esplicito `_penter`, non è necessario fornire un prototipo. La funzione deve apparire come se avesse il prototipo seguente e deve eseguire il push il contenuto di tutti i registri in ingresso e prelevare il contenuto invariato all'uscita:

```
void __declspec(naked) __cdecl _penter( void );
```

Questa dichiarazione non è disponibile per i progetti a 64 bit.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="example"></a>Esempio

Nel codice seguente, quando viene compilato con **/Gh**, viene illustrato come `_penter` viene chiamato due volte; una volta durante l'inserimento della funzione `main` e una volta quando si immettono funzione `x`.

```cpp
// Gh_compiler_option.cpp
// compile with: /Gh
// processor: x86
#include <stdio.h>
void x() {}

int main() {
   x();
}

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

```Output
In a function!
In a function!
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
