---
title: Considerazioni per la scrittura di codice di epilogo prologo
ms.date: 11/04/2016
helpviewer_keywords:
- stack frame layout
- prolog code
- epilog code
- __LOCAL_SIZE constant
- stack, stack frame layout
ms.assetid: c7814de2-bb5c-4f5f-96d0-bcfd2ad3b182
ms.openlocfilehash: a598ddbdd1b5f91c97e32905202e264b444c05d0
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988694"
---
# <a name="considerations-for-writing-prologepilog-code"></a>Considerazioni per la scrittura di codice di prologo e di epilogo

**Sezione specifica Microsoft**

Prima di scrivere le proprie sequenze di codice di prologo ed epilogo, è importante comprendere in che modo il stack frame è disposto. È inoltre utile comprendere come utilizzare il simbolo `__LOCAL_SIZE`.

##  <a name="_pluslang_c.2b2b_.stack_frame_layout"></a>Layout dello stack frame

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

##  <a name="_pluslang___local_size"></a> __LOCAL_SIZE

Il compilatore fornisce un simbolo, `__LOCAL_SIZE`, da utilizzare nel blocco dell'assembler inline del codice di prologo della funzione. Questo simbolo viene utilizzato per allocare spazio per le variabili locali sullo stack frame nel codice di prologo personalizzato.

Il compilatore determina il valore di `__LOCAL_SIZE`. Il relativo valore è il numero totale di byte di tutte le variabili locali definite dall'utente e le variabili temporanee generate dal compilatore. `__LOCAL_SIZE` può essere utilizzato solo come operando immediato; non può essere usato in un'espressione. Non è necessario modificare o ridefinire il valore di questo simbolo. Ad esempio:

```
mov        eax, __LOCAL_SIZE           ;Immediate operand--Okay
mov        eax, [ebp - __LOCAL_SIZE]   ;Error
```

Nell'esempio seguente di una funzione naked che contiene sequenze di prologo e epilogo personalizzate viene usato il simbolo `__LOCAL_SIZE` nella sequenza di Prologo:

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Chiamate di funzioni naked](../cpp/naked-function-calls.md)
