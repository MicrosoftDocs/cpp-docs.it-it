---
title: "Scrittura di funzioni con assembly inline | Microsoft Docs"
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
helpviewer_keywords: 
  - "__asm (parola chiave) [C++], funzioni"
  - "assembler [C++], scrittura di funzioni"
  - "funzioni [C++], assembly inline"
  - "assembly inline [C++], scrittura di funzioni"
ms.assetid: b5df8a04-fdc7-4622-8c9e-e4b618927497
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scrittura di funzioni con assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Specifici di Microsoft  
 Se si scrive una funzione con il codice assembly inline, è facile passare argomenti alla funzione e restituire un valore da esso.  Negli esempi seguenti confrontare una funzione per un assembler separati vengono innanzitutto scritti e riscritti per l'assembler inline.  La funzione, denominata  `power2`, riceve due parametri, moltiplicando il primo parametro per 2 elevato alla potenza del secondo parametro.  Scritto per un assembler separato, la funzione potrebbe essere simile al seguente:  
  
```  
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
  
 Dal momento che è stato scritto per un assembler separato, la funzione richiede i passaggi di file e assembly e collegamento di origine distinti.  Gli argomenti della funzione C e C\+\+ in genere sono passati sullo stack, quindi questa versione della  `power2`funzione accede ai relativi argomenti in base alle relative posizioni sullo stack.  \(Si noti che il  **modello** direttiva, disponibile in MASM e alcuni altri assemblatori, consente inoltre di accedere a stack argomenti e variabili di stack locale dal nome.\)  
  
## Esempio  
 Scrive questo programma il  `power2`funzione con il codice assembly inline:  
  
```  
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
  
 La versione in linea del  `power2`funzione fa riferimento ai relativi argomenti per nome e viene visualizzato nello stesso file di origine del resto del programma.  Questa versione richiede anche meno istruzioni in linguaggio assembly.  
  
 Poiché la versione in linea di  `power2`non esegue una C  `return`\(istruzione\), provoca un innocuo messaggio di avviso se esegue la compilazione a livello di avviso 2 o superiore.  La funzione restituisce un valore, ma il compilatore non è in grado di riconoscere che in assenza di un  `return`istruzione.  È possibile utilizzare  [avviso \#pragma](../../preprocessor/warning.md) per disattivare la generazione di questo avviso.  
  
 **FINE specifico di Microsoft**  
  
## Vedere anche  
 [Utilizzo di C o C\+\+ in blocchi \_\_asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)