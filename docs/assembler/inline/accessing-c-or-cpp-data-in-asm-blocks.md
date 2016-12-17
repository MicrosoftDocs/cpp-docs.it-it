---
title: "Accesso a dati C o C++ in blocchi __asm | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], membri dati"
  - "accesso ai dati [C++], blocchi __asm"
  - "membri dati [C++], blocchi __asm"
  - "tipi di struttura in blocchi __asm"
ms.assetid: e99f5a28-0381-4090-8ece-6af8f2436a49
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Accesso a dati C o C++ in blocchi __asm
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Una maggiore praticità di assembly inline consente di fare riferimento alle variabili C\+\+ o C per nome.  Un blocco `__asm` può fare riferimento a qualsiasi simbolo, inclusi i nomi di variabili, che appartengono all'ambito in cui il blocco viene visualizzato.  Ad esempio, se la variabile C `var` è nell'ambito, l'istruzione  
  
```  
__asm mov eax, var  
```  
  
 memorizza il valore di `var` in EAX.  
  
 Se una classe, una struttura, un membro dell'unione ha un nome univoco, un blocco `__asm` può fare riferimento ad esso utilizzando solo il nome del membro, senza specificare la variabile o il nome `typedef` prima dell'operatore punto \(**.**\).  Se il nome del membro non è univoco, tuttavia, è necessario inserire una variabile o un nome `typedef` immediatamente prima dell'operatore punto.  Ad esempio, i tipi di struttura nell'esempio seguente condividono `same_name` come nome membro:.  
  
 Se si dichiarano variabili con i tipi  
  
```  
struct first_type hal;  
struct second_type oat;  
```  
  
 tutti i riferimenti al membro `same_name` devono utilizzare il nome della variabile perché `same_name` non è univoco.  Ma il membro `weasel` ha un nome univoco, in modo che sia possibile farvi riferimento utilizzando solo il nome membro:  
  
```  
// InlineAssembler_Accessing_C_asm_Blocks.cpp  
// processor: x86  
#include <stdio.h>  
struct first_type  
{  
   char *weasel;  
   int same_name;  
};  
  
struct second_type  
{  
   int wonton;  
   long same_name;  
};  
  
int main()  
{  
   struct first_type hal;  
   struct second_type oat;  
  
   __asm  
   {  
      lea ebx, hal  
      mov ecx, [ebx]hal.same_name ; Must use 'hal'  
      mov esi, [ebx].weasel       ; Can omit 'hal'  
   }  
   return 0;  
}  
```  
  
 Si noti che omettere il nome della variabile è solo una comodità di codifica.  Le stesse istruzioni dell'assembly vengono generate se il nome della variabile è presente o meno.  
  
 È possibile accedere ai membri dati in C\+\+ indipendentemente dalle restrizioni di accesso.  Tuttavia, non è possibile chiamare le funzioni membro.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di C o C\+\+ in blocchi \_\_asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)