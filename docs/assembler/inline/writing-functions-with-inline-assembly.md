---
title: Scrittura di funzioni con assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- functions [C++], inline assembly
- inline assembly [C++], writing functions
- assembler [C++], writing functions
- __asm keyword [C++], in functions
ms.assetid: b5df8a04-fdc7-4622-8c9e-e4b618927497
ms.openlocfilehash: 3ce42147693f0c4c180076c627ef88c182745186
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87191001"
---
# <a name="writing-functions-with-inline-assembly"></a>Scrittura di funzioni con assembly inline

**Specifico di Microsoft**

Se si scrive una funzione con il codice assembly inline, è facile passare argomenti alla funzione e riceverne un valore. Negli esempi seguenti viene confrontata una funzione dapprima scritta per un assembler separato e successivamente riscritta dell'assembler inline. La funzione, denominata `power2`, riceve due parametri, moltiplicando il primo parametro per 2 alla potenza del secondo parametro. Scritta per un assembler separato, la funzione potrebbe essere simile alla seguente:

```asm
; POWER.ASM
; Compute the power of an integer
;
       PUBLIC _power2
_TEXT SEGMENT WORD PUBLIC 'CODE'
_power2 PROC

        push ebp        ; Save EBP
        mov ebp, esp    ; Move ESP into EBP so we can refer
                        ;   to arguments on the stack
        mov eax, [ebp+4] ; Get first argument
        mov ecx, [ebp+6] ; Get second argument
        shl eax, cl     ; EAX = EAX * ( 2 ^ CL )
        pop ebp         ; Restore EBP
        ret             ; Return with sum in EAX

_power2 ENDP
_TEXT   ENDS
        END
```

Poiché è scritta per un assembler separato, la funzione richiede un file di origine separato e passaggi di collegamento e di assembly. Gli argomenti della funzione C e C++ vengono in genere passati nello stack, pertanto l'accesso di questa versione della funzione `power2` ai relativi argomenti avviene mediante le relative posizioni nello stack. Si noti che la direttiva **Model** , disponibile in MASM e in altri assembler, consente anche di accedere agli argomenti dello stack e alle variabili dello stack locale in base al nome.

## <a name="example"></a>Esempio

In questo programma la funzione `power2` viene scritta con il codice assembly inline:

```cpp
// Power2_inline_asm.c
// compile with: /EHsc
// processor: x86

#include <stdio.h>

int power2( int num, int power );

int main( void )
{
    printf_s( "3 times 2 to the power of 5 is %d\n", \
              power2( 3, 5) );
}
int power2( int num, int power )
{
   __asm
   {
      mov eax, num    ; Get first argument
      mov ecx, power  ; Get second argument
      shl eax, cl     ; EAX = EAX * ( 2 to the power of CL )
   }
   // Return with result in EAX
}
```

La versione inline della funzione `power2` fa riferimento ai relativi argomenti in base al nome e viene visualizzata nello stesso file di origine del resto del programma. Inoltre, in questa versione sono richieste meno istruzioni di assembly.

Poiché la versione inline di `power2` non esegue un' **`return`** istruzione C, causa un avviso innocuo se si compila a livello di avviso 2 o superiore. La funzione restituisce un valore, ma il compilatore non è in grado di stabilire che in assenza di un' **`return`** istruzione. È possibile utilizzare [#pragma avviso](../../preprocessor/warning.md) per disabilitare la generazione di questo avviso.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Utilizzo di C o C++ in blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
