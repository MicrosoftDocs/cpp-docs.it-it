---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4366'
title: Avviso del compilatore (livello 4) C4366
ms.date: 11/04/2016
f1_keywords:
- C4366
helpviewer_keywords:
- C4366
ms.assetid: 65d2942f-3741-42f4-adf2-4920d5a055ca
ms.openlocfilehash: 9fa703d64ca48090d3bf6c2f5d9e21668d9acd71
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330601"
---
# <a name="compiler-warning-level-4-c4366"></a>Avviso del compilatore (livello 4) C4366

Il risultato dell'operatore ' operator ' unario potrebbe essere non allineato

Se è possibile che un membro di una struttura non venga allineato a causa della compressione, il compilatore avvisirà quando l'indirizzo di tale membro verrà assegnato a un puntatore allineato. Per impostazione predefinita, tutti i puntatori sono allineati.

Per risolvere C4366, modificare l'allineamento della struttura o dichiarare il puntatore con la parola chiave [__unaligned](../../cpp/unaligned.md) .

Per ulteriori informazioni, vedere __unaligned e [Pack](../../preprocessor/pack.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4366.

```cpp
// C4366.cpp
// compile with: /W4 /c
// processor: IPF x64
#pragma pack(1)
struct X {
   short s1;
   int s2;
};

int main() {
   X x;
   short * ps1 = &x.s1;   // OK
   int * ps2 = &x.s2;   // C4366
}
```
