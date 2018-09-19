---
title: Errore del compilatore C3510 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3510
dev_langs:
- C++
helpviewer_keywords:
- C3510
ms.assetid: c48387bc-0300-4a4d-97f7-3fb90f82a451
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5cc134823abf2657426b0c1be9cfbe6d92a74035
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46111331"
---
# <a name="compiler-error-c3510"></a>Errore del compilatore C3510

Impossibile individuare la libreria di tipi dipendente 'type_lib'

[no_registry](../../preprocessor/no-registry.md) e [auto_search](../../preprocessor/auto-search.md) venisse passato a `#import` ma il compilatore non è in grado di trovare una libreria dei tipi riferimento.

Per risolvere questo errore, assicurarsi che tutte le librerie dei tipi e le librerie dei tipi di cui viene fatto riferimento siano disponibili al compilatore.

L'esempio seguente genera l'errore C3510:

Si supponga che sono state compilate i seguenti due librerie dei tipi e tale C3510a è stato eliminato o meno nel percorso.

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

E quindi il codice sorgente per la libreria dei tipi secondo:

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

```
// C3510.cpp
#import "c3510b.tlb" no_registry auto_search   // C3510
int main() {
   C3510aLib::S_C4336 ccc;
}
```