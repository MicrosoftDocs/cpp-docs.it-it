---
description: 'Altre informazioni su: errore del compilatore C2669'
title: Errore del compilatore C2669
ms.date: 11/04/2016
f1_keywords:
- C2669
helpviewer_keywords:
- C2669
ms.assetid: f9cb8111-bcdc-484b-a863-2c42e15a0496
ms.openlocfilehash: 01b40131a2eef4ff83d10c5088b2cae3eb7e55e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210647"
---
# <a name="compiler-error-c2669"></a>Errore del compilatore C2669

funzione membro non consentita nell'Unione anonima

Le [unioni anonime](../../cpp/unions.md#anonymous_unions) non possono disporre di funzioni membro.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2669:

```cpp
// C2669.cpp
struct X {
   union {
      int i;
      void f() {   // C2669, remove function
         i = 0;
      }
   };
};
```
