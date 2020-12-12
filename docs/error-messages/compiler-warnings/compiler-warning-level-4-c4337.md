---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4337'
title: Avviso del compilatore (livello 4) C4337
ms.date: 11/04/2016
f1_keywords:
- C4337
helpviewer_keywords:
- C4337
ms.assetid: 70bc72d9-aac5-45cd-abd3-ebe42a05897b
ms.openlocfilehash: f8d59093e92c17603b4f254d7a5cb26f1299e9e3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212207"
---
# <a name="compiler-warning-level-4-c4337"></a>Avviso del compilatore (livello 4) C4337

importazione automatica della libreria dei tipi ' typelib1' a cui viene fatto riferimento incrociato in ' typelib2'

L'attributo auto_search della [direttiva #import](../../preprocessor/hash-import-directive-cpp.md) ha causato l'importazione implicita di una libreria dei tipi.

Date due librerie dei tipi su disco create dai due file seguenti (compilati con midl.exe):

```
// C4337a.idl
[
  uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12B)
]
library C4337aLib
{
   [uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12C)]
   enum E_C4337a
   {
      one = 0,
      two = 1,
      three = 2
    };
};
```

quindi, il secondo file IDL,

```
// C4337b.idl
[
   uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12D)
]

library C4337bLib
{
   importlib("c4337a.tlb");

   [uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12E)]
   struct S_C4337b
   {
      enum E_C4337a e;
   };
};
```

L'esempio seguente genera l'C4337:

```cpp
// C4337.cpp
// compile with: /W4 /LD
#import "c4337b.tlb" auto_search   // C4337
// explicitly #import all type libraries to resolve
// #import "C4337a.tlb"
// #import "C4337b.tlb"
```
