---
title: Considerazioni per la scrittura di codice di prologo e di epilogo
ms.date: 11/04/2016
helpviewer_keywords:
- stack frame layout
- prolog code
- epilog code
- __LOCAL_SIZE constant
- stack, stack frame layout
ms.assetid: c7814de2-bb5c-4f5f-96d0-bcfd2ad3b182
ms.openlocfilehash: cda6a6c82efcf30a916aced121024095d7ce8138
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337105"
---
# <a name="considerations-for-writing-prologepilog-code"></a>Considerazioni per la scrittura di codice di prologo e di epilogo

**Specifico di Microsoft**

Prima di scrivere sequenze di codice di prologo ed epilogo personalizzate, è importante comprendere come viene disposto lo stack frame. È anche utile sapere come `__LOCAL_SIZE` utilizzare il simbolo.

## <a name="stack-frame-layout"></a><a name="_pluslang_c.2b2b_.stack_frame_layout"></a>Stack Frame Layout

In questo esempio viene illustrato il codice standard di prologo che potrebbe essere visualizzato in una funzione a 32 bit:

```
push        ebp                ; Save ebp
mov         ebp, esp           ; Set stack frame pointer
sub         esp, localbytes    ; Allocate space for locals
push        <registers>        ; Save registers
```

La variabile `localbytes` rappresenta il numero di byte necessari nello stack per le variabili locali e la variabile `<registers>` è un segnaposto che rappresenta l'elenco di registri da salvare nello stack. Dopo l'inserimento dei registri, è possibile posizionare qualsiasi altro dato appropriati nello stack. Viene di seguito riportato il codice di epilogo corrispondente.

```
pop         <registers>   ; Restore registers
mov         esp, ebp      ; Restore stack pointer
pop         ebp           ; Restore ebp
ret                       ; Return from function
```

Lo stack va sempre verso il basso (dal livello alto a quello basso degli indirizzi di memoria). Il puntatore di base (`ebp`) punta al valore inserito di `ebp`. L'area delle variabili locali inizia da `ebp-4`. Per accedere alle variabili locali, calcolare un offset da `ebp` sottraendo il valore appropriato da `ebp`.

## <a name="__local_size"></a><a name="_pluslang___local_size"></a>__LOCAL_SIZE

Il compilatore fornisce `__LOCAL_SIZE`un simbolo, , da utilizzare nel blocco assembler inline del codice di prologo della funzione. Questo simbolo viene utilizzato per allocare spazio per le variabili locali sullo stack frame nel codice di prologo personalizzato.

Il compilatore determina `__LOCAL_SIZE`il valore di . Il relativo valore è il numero totale di byte di tutte le variabili locali definite dall'utente e le variabili temporanee generate dal compilatore. `__LOCAL_SIZE`può essere utilizzato solo come operando immediato; non può essere utilizzato in un'espressione. Non è necessario modificare o ridefinire il valore di questo simbolo. Ad esempio:

```
mov        eax, __LOCAL_SIZE           ;Immediate operand--Okay
mov        eax, [ebp - __LOCAL_SIZE]   ;Error
```

L'esempio seguente di una funzione naked contenente sequenze `__LOCAL_SIZE` di prologo ed epilogo personalizzate usa il simbolo nella sequenza di prologo:

```cpp
// the__local_size_symbol.cpp
// processor: x86
__declspec ( naked ) int main() {
   int i;
   int j;

   __asm {      /* prolog */
      push   ebp
      mov      ebp, esp
      sub      esp, __LOCAL_SIZE
      }

   /* Function body */
   __asm {   /* epilog */
      mov      esp, ebp
      pop      ebp
      ret
      }
}
```

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Chiamate di funzioni naked](../cpp/naked-function-calls.md)
