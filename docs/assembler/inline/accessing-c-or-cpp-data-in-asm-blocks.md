---
title: L'accesso a dati C o C++ in blocchi asm | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- data members [C++], in __asm blocks
- data access [C++], in __asm blocks
- __asm keyword [C++], data members
- structure types in __asm blocks
ms.assetid: e99f5a28-0381-4090-8ece-6af8f2436a49
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f9e4b684c878e630de81ac712fab714dc09db5ff
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43685037"
---
# <a name="accessing-c-or-c-data-in-asm-blocks"></a>Accesso a dati C o C++ in blocchi __asm

**Sezione specifica Microsoft**

Una maggiore praticità di assembly inline consente di fare riferimento alle variabili C++ o C per nome. Un blocco `__asm` può fare riferimento a qualsiasi simbolo, inclusi i nomi di variabili, che appartengono all'ambito in cui il blocco viene visualizzato. Ad esempio, se la variabile C `var` è nell'ambito, l'istruzione

```cpp
__asm mov eax, var
```

memorizza il valore di `var` in EAX.

Se una classe, struttura o unione membro ha un nome univoco, un `__asm` blocco può farvi riferimento utilizzando solo il nome del membro, senza specificare la variabile oppure `typedef` nome prima del periodo (**.**) operatore. Se il nome del membro non è univoco, tuttavia, è necessario inserire una variabile o un nome `typedef` immediatamente prima dell'operatore punto. Ad esempio, i tipi di struttura nell'esempio seguente condividono `same_name` come nome membro:.

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>