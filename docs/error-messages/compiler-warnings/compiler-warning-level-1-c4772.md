---
title: Compilatore avviso (livello 1) C4772 | Documenti Microsoft
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4772
dev_langs:
- C++
helpviewer_keywords:
- C4772
ms.assetid: dafe6fd8-9faf-41f5-9d66-a55838742c14
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cbdcfec8d36568c31c291a9de8f9af3aac821fc6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4772"></a>Avviso del compilatore (livello 1) C4772

> \#importazione di fatto riferimento a un tipo da una libreria dei tipi mancanti; '*-type mancante*' utilizzato come segnaposto

Una libreria dei tipi è stato fatto riferimento con il [#import](../../preprocessor/hash-import-directive-cpp.md) direttiva. Tuttavia, la libreria dei tipi contiene un riferimento a un'altra libreria dei tipi che non esiste alcun riferimento con `#import`. L'altro file tlb non è stato trovato dal compilatore.

Si noti che il compilatore non trovi le librerie dei tipi in directory diverse se si utilizza il [/I (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md) l'opzione del compilatore per specificare tali directory. Se si desidera che il compilatore per trovare le librerie dei tipi in directory diverse, aggiungere tali directory alla variabile di ambiente PATH.

Per impostazione predefinita, questo avviso viene generato come errore. C4772 non può essere eliminato con /W0.

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

Questa è la seconda libreria dei tipi necessaria per riprodurre C4772.

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