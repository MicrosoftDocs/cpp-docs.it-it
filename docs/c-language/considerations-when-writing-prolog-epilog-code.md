---
title: Considerazioni sulla scrittura di codice di prologo/epilogo | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- layouts, stack frame
- stack frame layout
- __LOCAL_SIZE constant
- stack, stack frame layout
ms.assetid: 3b8addec-e809-48e4-b1d0-5bad133bd4b8
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 01a153011ad0cd571762c6473f6121a55045396c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="considerations-when-writing-prologepilog-code"></a>Considerazioni sulla scrittura di codice di prologo/epilogo
**Sezione specifica Microsoft**  
  
 Prima di scrivere le proprie sequenze di codice di prologo ed epilogo, è importante comprendere il layout dello stack frame. È anche utile sapere come usare la costante predefinita **__LOCAL_SIZE**.  
  
##  <a name="_clang_c_stack_frame_layout"></a> Layout dello stack frame C  
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
  
##  <a name="_clang_the___local_size_constant"></a> Costante __LOCAL_SIZE  
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
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni naked](../c-language/naked-functions.md)