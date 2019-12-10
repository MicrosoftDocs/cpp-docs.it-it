---
title: Avviso del compilatore (livello 4) C4336
ms.date: 11/04/2016
f1_keywords:
- C4336
helpviewer_keywords:
- C4336
ms.assetid: 93f199dd-d6dd-42c0-82d8-c12d101a7235
ms.openlocfilehash: e83bac9028980bdf3ef7449fbef065a8c9316d2d
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991329"
---
# <a name="compiler-warning-level-4-c4336"></a>Avviso del compilatore (livello 4) C4336

importa la libreria dei tipi a cui si fa riferimento incrociato ' type_lib1' prima di importare ' type_lib2'

È stato fatto riferimento a una libreria dei tipi con la direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) . Tuttavia, la libreria dei tipi contiene un riferimento a un'altra libreria dei tipi a cui non è stato fatto riferimento con `#import`. Questo altro file con estensione tlb è stato trovato dal compilatore.

Date due librerie dei tipi su disco create dai due file seguenti (compilati con MIDL. exe):

```
// c4336a.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]
library c4336aLib
{
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12c")]
   enum E_C4336
   {
      one, two, three
   };
};
```

Seconda libreria dei tipi:

```
// c4336b.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]
library C4336bLib
{
   importlib ("c4336a.tlb");
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]
   struct S_C4336
   {
      enum E_C4336 e;
   };
};
```

L'esempio seguente genera l'C4336:

```cpp
// C4336.cpp
// compile with: /W4 /LD
// #import "C4336a.tlb"
#import "C4336b.tlb"   // C4336, uncomment previous line to resolve
```
