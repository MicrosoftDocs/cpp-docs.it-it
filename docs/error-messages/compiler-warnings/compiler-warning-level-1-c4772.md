---
title: Avviso del compilatore (livello 1) C4772
ms.date: 11/04/2016
f1_keywords:
- C4772
helpviewer_keywords:
- C4772
ms.assetid: dafe6fd8-9faf-41f5-9d66-a55838742c14
ms.openlocfilehash: 95243ab66d5d0296e1c316ff8dde7add75a030cd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50540023"
---
# <a name="compiler-warning-level-1-c4772"></a>Avviso del compilatore (livello 1) C4772

> \#importazione di fatto riferimento a un tipo da una libreria dei tipi mancanti; «*-type mancante*' utilizzato come segnaposto

Una libreria dei tipi viene fatto riferimento con il [#import](../../preprocessor/hash-import-directive-cpp.md) direttiva. Tuttavia, la libreria dei tipi contiene un riferimento a un'altra libreria dei tipi che non esiste alcun riferimento con `#import`. Quest'altro file con estensione tlb non trovato dal compilatore.

Si noti che il compilatore non troverà le librerie dei tipi in directory diverse se si usa la [/I (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md) opzione del compilatore per specificare tali directory. Se si vuole che il compilatore per trovare le librerie dei tipi in directory diverse, aggiungere tali directory alla variabile di ambiente PATH.

Per impostazione predefinita questo avviso viene generato come errore. C4772 non possono essere eliminati con /W0.

## <a name="example"></a>Esempio

Questa è la prima libreria dei tipi necessaria per riprodurre C4772.

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

Questo è il secondo libreria dei tipi necessaria per riprodurre C4772.

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

L'esempio seguente genera l'errore C4772:

```cpp
// C4772.cpp
// assumes that C4772a.tlb is not available to the compiler
// #import "C4772a.tlb"
#import "C4772b.tlb"   // C4772 uncomment previous line to resolve
                       // and make sure c4772a.tlb is on disk
```