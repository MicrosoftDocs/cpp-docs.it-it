---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4772'
title: Avviso del compilatore (livello 1) C4772
ms.date: 11/04/2016
f1_keywords:
- C4772
helpviewer_keywords:
- C4772
ms.assetid: dafe6fd8-9faf-41f5-9d66-a55838742c14
ms.openlocfilehash: 41fcbf3074cb1e51e06ba21a01a27eaf8ded1b31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228443"
---
# <a name="compiler-warning-level-1-c4772"></a>Avviso del compilatore (livello 1) C4772

> \#l'importazione ha fatto riferimento a un tipo da una libreria dei tipi mancante. '*Missing-Type*' usato come segnaposto

È stato fatto riferimento a una libreria dei tipi con la direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) . Tuttavia, la libreria dei tipi contiene un riferimento a un'altra libreria dei tipi a cui non è stato fatto riferimento con `#import` . Questo altro file con estensione tlb non è stato trovato dal compilatore.

Si noti che il compilatore non troverà le librerie dei tipi in directory diverse se si usa l'opzione del compilatore [/i (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md) per specificare tali directory. Se si vuole che il compilatore trovi le librerie dei tipi in directory diverse, aggiungere tali directory alla variabile di ambiente PATH.

Per impostazione predefinita, questo avviso viene generato come errore. C4772 non può essere eliminato con/W0.

## <a name="example"></a>Esempio

Si tratta della prima libreria dei tipi necessaria per riprodurre C4772.

```IDL
// c4772a.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]
library C4772aLib
{
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c100")]
   enum E_C4772a
   {
      one, two, three
   };
};
```

Si tratta della seconda libreria dei tipi necessaria per riprodurre C4772.

```IDL
// c4772b.idl
// post-build command: del /f C4772a.tlb
// C4772a.tlb is available when c4772b.tlb is built
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]
library C4772bLib
{
   importlib ("c4772a.tlb");
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]
   struct S_C4772b
   {
      enum E_C4772a e;
   };
};
```

L'esempio seguente genera l'C4772:

```cpp
// C4772.cpp
// assumes that C4772a.tlb is not available to the compiler
// #import "C4772a.tlb"
#import "C4772b.tlb"   // C4772 uncomment previous line to resolve
                       // and make sure c4772a.tlb is on disk
```
