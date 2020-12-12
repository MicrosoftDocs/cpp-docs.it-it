---
description: 'Altre informazioni su: considerazioni sulla scrittura di codice di prologo/epilogo'
title: Considerazioni sulla scrittura di codice di prologo ed epilogo
ms.date: 11/04/2016
helpviewer_keywords:
- layouts, stack frame
- stack frame layout
- __LOCAL_SIZE constant
- stack, stack frame layout
ms.assetid: 3b8addec-e809-48e4-b1d0-5bad133bd4b8
ms.openlocfilehash: 65416e915afa95a27658e2c7517da8f2868dfef9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293287"
---
# <a name="considerations-when-writing-prologepilog-code"></a>Considerazioni sulla scrittura di codice di prologo/epilogo

**Specifico di Microsoft**

Prima di scrivere le proprie sequenze di codice di prologo ed epilogo, è importante comprendere in che modo il stack frame è disposto. È inoltre utile saper utilizzare la **__LOCAL_SIZE** costante predefinita.

## <a name="cstack-frame-layout"></a><a name="_clang_c_stack_frame_layout"></a> Layout del frame CStack

In questo esempio viene illustrato il codice standard di prologo che potrebbe essere visualizzato in una funzione a 32 bit:

```
push     ebp                 ; Save ebp
mov      ebp, esp            ; Set stack frame pointer
sub      esp, localbytes     ; Allocate space for locals
push     <registers>         ; Save registers
```

La variabile `localbytes` rappresenta il numero di byte necessari nello stack per le variabili locali e la variabile `registers` è un segnaposto che rappresenta l'elenco di registri da salvare nello stack. Dopo l'inserimento dei registri, è possibile posizionare qualsiasi altro dato appropriati nello stack. Viene di seguito riportato il codice di epilogo corrispondente.

```
pop      <registers>         ; Restore registers
mov      esp, ebp            ; Restore stack pointer
pop      ebp                 ; Restore ebp
ret                          ; Return from function
```

Lo stack va sempre verso il basso (dal livello alto a quello basso degli indirizzi di memoria). Il puntatore di base (`ebp`) punta al valore inserito di `ebp`. La sezione variabili locali inizia a `ebp-2`. Per accedere alle variabili locali, calcolare un offset da `ebp` sottraendo il valore appropriato da `ebp`.

## <a name="the-__local_size-constant"></a><a name="_clang_the___local_size_constant"></a> Costante __LOCAL_SIZE

Il compilatore specifica una costante **__LOCAL_SIZE** da usare nel blocco dell'assembler inline del codice di prologo di una funzione. Questa costante viene utilizzata per allocare spazio per le variabili locali sullo stack frame nel codice di prologo.

Il compilatore determina il valore di **__LOCAL_SIZE**. Il valore è il numero totale di byte di tutte le variabili locali definite dall'utente e le variabili temporanee generate dal compilatore. **__LOCAL_SIZE** può essere usata solo come operando immediato; non può essere usata in un'espressione. Non è necessario modificare o ridefinire il valore di questa costante. Ad esempio:

```
mov      eax, __LOCAL_SIZE           ;Immediate operand--Okay
mov      eax, [ebp - __LOCAL_SIZE]   ;Error
```

Il seguente esempio di funzione naked che contiene sequenze di prologo ed epilogo personalizzate usa **__LOCAL_SIZE** nella sequenza del prologo:

```
__declspec ( naked ) func()
{
   int i;
   int j;

   __asm      /* prolog */
      {
      push   ebp
      mov      ebp, esp
      sub      esp, __LOCAL_SIZE
      }

   /* Function body */

   __asm      /* epilog */
      {
      mov      esp, ebp
      pop      ebp
      ret
      }
}
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Funzioni naked](../c-language/naked-functions.md)
