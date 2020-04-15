---
title: Accesso a dati C o C++ in blocchi __asm
ms.date: 08/30/2018
helpviewer_keywords:
- data members [C++], in __asm blocks
- data access [C++], in __asm blocks
- __asm keyword [C++], data members
- structure types in __asm blocks
ms.assetid: e99f5a28-0381-4090-8ece-6af8f2436a49
ms.openlocfilehash: b4341f87226118906749dcdb18b9227e68be6a23
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318083"
---
# <a name="accessing-c-or-c-data-in-__asm-blocks"></a>Accesso a dati C o C++ in blocchi __asm

**Specifico di Microsoft**

Una maggiore praticità di assembly inline consente di fare riferimento alle variabili C++ o C per nome. Un blocco `__asm` può fare riferimento a qualsiasi simbolo, inclusi i nomi di variabili, che appartengono all'ambito in cui il blocco viene visualizzato. Ad esempio, se la variabile C `var` è nell'ambito, l'istruzione

```cpp
__asm mov eax, var
```

memorizza il valore di `var` in EAX.

Se una classe, una struttura o un `__asm` membro di unione ha un nome univoco, un `typedef` blocco può farvi riferimento utilizzando solo il nome del membro, senza specificare la variabile o il nome prima dell'operatore punto (**.**). Se il nome del membro non è univoco, tuttavia, è necessario inserire una variabile o un nome `typedef` immediatamente prima dell'operatore punto. Ad esempio, i tipi di struttura nell'esempio seguente condividono `same_name` come nome membro:.

Se si dichiarano variabili con i tipi

```cpp
struct first_type hal;
struct second_type oat;
```

tutti i riferimenti al membro `same_name` devono utilizzare il nome della variabile perché `same_name` non è univoco. Ma il membro `weasel` ha un nome univoco, in modo che sia possibile farvi riferimento utilizzando solo il nome membro:

```cpp
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

Si noti che omettere il nome della variabile è solo una comodità di codifica. Le stesse istruzioni dell'assembly vengono generate se il nome della variabile è presente o meno.

È possibile accedere ai membri dati in C++ indipendentemente dalle restrizioni di accesso. Tuttavia, non è possibile chiamare le funzioni membro.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Utilizzo di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
