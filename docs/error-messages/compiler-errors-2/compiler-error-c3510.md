---
description: 'Altre informazioni su: errore del compilatore C3510'
title: Errore del compilatore C3510
ms.date: 11/04/2016
f1_keywords:
- C3510
helpviewer_keywords:
- C3510
ms.assetid: c48387bc-0300-4a4d-97f7-3fb90f82a451
ms.openlocfilehash: 97727f22e94993cff051c57b5692e9a14c9ab930
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315426"
---
# <a name="compiler-error-c3510"></a>Errore del compilatore C3510

Impossibile individuare la libreria dei tipi dipendente ' type_lib '

[no_registry](../../preprocessor/no-registry.md) e [auto_search](../../preprocessor/auto-search.md) sono stati passati a, `#import` ma il compilatore non è stato in grado di trovare una libreria dei tipi a cui si fa riferimento.

Per correggere l'errore, verificare che tutte le librerie dei tipi e le librerie dei tipi a cui si fa riferimento siano disponibili per il compilatore.

L'esempio seguente genera l'C3510:

Si supponga che le due librerie dei tipi seguenti siano state compilate e che C3510a. tlb sia stato eliminato o meno nel percorso.

```
// C3510a.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]
library C3510aLib
{
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12c")]
   enum E_C3510
   {
      one, two, three
   };
};
```

Quindi il codice sorgente per la seconda libreria dei tipi:

```
// C3510b.idl
// post-build command: del /f C3510a.tlb
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]
library C3510bLib
{
   importlib ("C3510a.tlb");
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]
   struct S_C3510 {
      enum E_C3510 e;
   };
};
```

E quindi il codice client:

```cpp
// C3510.cpp
#import "c3510b.tlb" no_registry auto_search   // C3510
int main() {
   C3510aLib::S_C4336 ccc;
}
```
