---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4441'
title: Avviso del compilatore (livello 1) C4441
ms.date: 11/04/2016
f1_keywords:
- C4441
helpviewer_keywords:
- C4441
ms.assetid: 7fc540a5-e41f-47cf-aa37-b2b699c2685e
ms.openlocfilehash: f09e25696edffadaeb843d0dbb7ec47f4bcf8a49
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212571"
---
# <a name="compiler-warning-level-1-c4441"></a>Avviso del compilatore (livello 1) C4441

la convenzione di chiamata di ' CC1' è stata ignorata; utilizzato ' CC2'

Le funzioni membro nei tipi definiti dall'utente gestiti e nei generics delle funzioni globali devono usare la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) .  Compilatore utilizzato `__clrcall` .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4441.

```cpp
// C4441.cpp
// compile with: /clr /W1 /c
generic <class ItemType>
void __cdecl Test(ItemType item) {}   // C4441
// try the following line instead
// void Test(ItemType item) {}

ref struct MyStruct {
   void __cdecl Test(){}   // C4441
   void Test2(){}   // OK
};
```
