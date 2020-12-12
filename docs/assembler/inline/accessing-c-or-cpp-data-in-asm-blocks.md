---
description: 'Altre informazioni su: accesso a dati C o C++ in blocchi di __asm'
title: Accesso a dati C o C++ in blocchi __asm
ms.date: 08/30/2018
helpviewer_keywords:
- data members [C++], in __asm blocks
- data access [C++], in __asm blocks
- __asm keyword [C++], data members
- structure types in __asm blocks
ms.assetid: e99f5a28-0381-4090-8ece-6af8f2436a49
ms.openlocfilehash: b24d25b5687dd309c400b17c1e0eb6b35ef986f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118082"
---
# <a name="accessing-c-or-c-data-in-__asm-blocks"></a>Accesso a dati C o C++ in blocchi __asm

**Specifico di Microsoft**

Una maggiore praticità di assembly inline consente di fare riferimento alle variabili C++ o C per nome. Un **`__asm`** blocco può fare riferimento a qualsiasi simbolo, inclusi i nomi delle variabili, che rientrano nell'ambito in cui viene visualizzato il blocco. Ad esempio, se la variabile C `var` è nell'ambito, l'istruzione

```cpp
__asm mov eax, var
```

memorizza il valore di `var` in EAX.

Se una classe, una struttura o un membro dell'Unione ha un nome univoco, un **`__asm`** blocco può farvi riferimento usando solo il nome del membro, senza specificare la variabile o il **`typedef`** nome prima dell'operatore punto (**.**). Se il nome del membro non è univoco, è tuttavia necessario inserire una variabile o un **`typedef`** nome immediatamente prima dell'operatore period. Ad esempio, i tipi di struttura nell'esempio seguente condividono `same_name` come nome membro:.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Utilizzo di C o C++ in blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
