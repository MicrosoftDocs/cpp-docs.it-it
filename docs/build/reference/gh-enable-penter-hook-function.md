---
title: -Gh (Attiva funzione Hook penter) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _penter
dev_langs:
- C++
helpviewer_keywords:
- /Gh compiler option [C++]
- Gh compiler option [C++]
- _penter function
- -Gh compiler option [C++]
ms.assetid: 1510a082-8a0e-486e-a309-6add814b494f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 231eed17f155b9ec184e0cf4fe3bd91e7770a7f4
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716858"
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
void __declspec(naked) _cdecl _penter( void );
```

Questa dichiarazione non è disponibile per i progetti a 64 bit.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="example"></a>Esempio

Nel codice seguente, quando viene compilato con **/Gh**, viene illustrato come `_penter` viene chiamato due volte; una volta durante l'inserimento della funzione `main` e una volta quando si immettono funzione `x`.

```
// Gh_compiler_option.cpp
// compile with: /Gh
// processor: x86
#include <stdio.h>
void x() {}

int main() {
   x();
}

extern "C" void __declspec(naked) _cdecl _penter( void ) {
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

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)