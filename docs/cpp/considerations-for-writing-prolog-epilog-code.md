---
title: Considerazioni per la scrittura di codice di prologo epilogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- stack frame layout
- prolog code
- epilog code
- __LOCAL_SIZE constant
- stack, stack frame layout
ms.assetid: c7814de2-bb5c-4f5f-96d0-bcfd2ad3b182
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9578e106c536f14059be95724ac1c2c9af92f3cf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="considerations-for-writing-prologepilog-code"></a>Considerazioni per la scrittura di codice di prologo e di epilogo
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Prima di scrivere le proprie sequenze di codice di prologo ed epilogo, è importante comprendere il layout dello stack frame. È inoltre utile sapere come utilizzare il **LOCAL_SIZE** simbolo.  
  
##  <a name="_pluslang_c.2b2b_.stack_frame_layout"></a>Layout di stack Frame  
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
  
##  <a name="_pluslang___local_size"></a>LOCAL_SIZE  
 Il compilatore fornisce un simbolo, **LOCAL_SIZE**, da utilizzare nel blocco dell'assembler inline del codice di prologo di funzione. Questo simbolo viene utilizzato per allocare spazio per le variabili locali sullo stack frame nel codice di prologo personalizzato.  
  
 Il compilatore determina il valore di **__LOCAL_SIZE**. Il relativo valore è il numero totale di byte di tutte le variabili locali definite dall'utente e le variabili temporanee generate dal compilatore. **__LOCAL_SIZE** può essere usata solo come operando immediato; non può essere usata in un'espressione. Non è necessario modificare o ridefinire il valore di questo simbolo. Ad esempio:  
  
```  
mov        eax, __LOCAL_SIZE           ;Immediate operand--Okay  
mov        eax, [ebp - __LOCAL_SIZE]   ;Error  
```  
  
 Nell'esempio seguente di una funzione naked che contiene di prologo ed epilogo personalizzate sequenze viene utilizzata la **LOCAL_SIZE** simbolo nella sequenza di prologo:  
  
```  
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