---
title: "Considerazioni sulla scrittura di codice di prologo/epilogo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__LOCAL_SIZE (costante)"
  - "layout, stack frame"
  - "layout di stack frame"
  - "stack, layout di stack frame"
ms.assetid: 3b8addec-e809-48e4-b1d0-5bad133bd4b8
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Considerazioni sulla scrittura di codice di prologo/epilogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Prima di scrivere le proprie sequenze di codice di prologo ed epilogo, è importante comprendere il layout dello stack frame.  È inoltre utile sapere come utilizzare la costante predefinita **\_\_LOCAL\_SIZE**.  
  
##  <a name="_clang_c_stack_frame_layout"></a> Layout dello stack frame C  
 In questo esempio viene illustrato il codice standard di prologo che potrebbe essere visualizzato in una funzione a 32 bit:  
  
```  
push     ebp                 ; Save ebp  
mov      ebp, esp            ; Set stack frame pointer  
sub      esp, localbytes     ; Allocate space for locals  
push     <registers>         ; Save registers  
```  
  
 La variabile `localbytes` rappresenta il numero di byte necessari nello stack per le variabili locali e la variabile `registers` è un segnaposto che rappresenta l'elenco di registri da salvare nello stack.  Dopo l'inserimento dei registri, è possibile posizionare qualsiasi altro dato appropriati nello stack.  Viene di seguito riportato il codice di epilogo corrispondente.  
  
```  
pop      <registers>         ; Restore registers  
mov      esp, ebp            ; Restore stack pointer  
pop      ebp                 ; Restore ebp  
ret                          ; Return from function  
```  
  
 Lo stack va sempre verso il basso \(dal livello alto a quello basso degli indirizzi di memoria\).  Il puntatore di base \(`ebp`\) punta al valore inserito di `ebp`.  La sezione variabili locali inizia a `ebp-2`.  Per accedere alle variabili locali, calcolare un offset da `ebp` sottraendo il valore appropriato da `ebp`.  
  
##  <a name="_clang_the___local_size_constant"></a> La costante \_\_LOCAL\_SIZE  
 Il compilatore fornisce una costante, **\_\_LOCAL\_SIZE**, da utilizzare nel blocco dell'assembler inline del codice di prologo di una funzione.  Questa costante viene utilizzata per allocare spazio per le variabili locali sullo stack frame nel codice di prologo.  
  
 Il compilatore determina il valore di **\_\_LOCAL\_SIZE**.  Il valore è il numero totale di byte di tutte le variabili locali definite dall'utente e le variabili temporanee generate dal compilatore.  **\_\_LOCAL\_SIZE** può essere utilizzato solo come operando immediato; non può essere utilizzato in un'espressione.  Non è necessario modificare o ridefinire il valore di questa costante.  Ad esempio:  
  
```  
mov      eax, __LOCAL_SIZE           ;Immediate operand--Okay  
mov      eax, [ebp - __LOCAL_SIZE]   ;Error  
```  
  
 Nell'esempio di una funzione naked che contiene le sequenze di prologo ed epilogo personalizzate viene utilizzato **\_\_LOCAL\_SIZE** nella sequenza del prologo:  
  
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
  
## Vedere anche  
 [Funzioni naked](../c-language/naked-functions.md)