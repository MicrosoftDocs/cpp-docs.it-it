---
description: 'Altre informazioni su: errore del compilatore C2687'
title: Errore del compilatore C2687
ms.date: 11/04/2016
f1_keywords:
- C2687
helpviewer_keywords:
- C2687
ms.assetid: 1d24b24a-cd0f-41cc-975c-b08dcfb7f402
ms.openlocfilehash: 38996f2f31998ef96dd848915686adb1bf46c987
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220760"
---
# <a name="compiler-error-c2687"></a>Errore del compilatore C2687

' type ': la dichiarazione di eccezione non può essere ' void ' o indicare un tipo incompleto o un puntatore o un riferimento a un tipo incompleto

Affinché un tipo faccia parte di una dichiarazione di eccezione, è necessario che sia definito e non void.

L'esempio seguente genera l'C2687:

```cpp
// C2687.cpp
class C;

int main() {
   try {}
   catch (C) {}   // C2687 error
}
```

Possibile soluzione:

```cpp
// C2687b.cpp
// compile with: /EHsc
class C {};

int main() {
   try {}
   catch (C) {}
}
```
