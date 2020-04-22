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
ms.openlocfilehash: 87815b5f0e0450b84acbe3c35b7ef4f31216ec72
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749297"
---
# <a name="gh-enable-_penter-hook-function"></a>/Gh (Attiva funzione hook _penter)

Provoca una chiamata `_penter` alla funzione all'inizio di ogni metodo o funzione.

## <a name="syntax"></a>Sintassi

```
/Gh
```

## <a name="remarks"></a>Osservazioni

La `_penter` funzione non fa parte di alcuna libreria e `_penter`spetta all'utente fornire una definizione per .

A meno che `_penter`non si intenda chiamare in modo esplicito , non è necessario fornire un prototipo. La funzione deve apparire come se avesse il seguente prototipo, e deve spingere il contenuto di tutti i registri all'ingresso e pop il contenuto invariato all'uscita:

```cpp
void __declspec(naked) __cdecl _penter( void );
```

Questa dichiarazione non è disponibile per i progetti a 64 bit.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="example"></a>Esempio

Il codice seguente, quando viene compilato `_penter` con **/Gh**, mostra come viene chiamato due volte; una volta `main` quando si entra `x`funzione e una volta quando si entra la funzione .

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
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
