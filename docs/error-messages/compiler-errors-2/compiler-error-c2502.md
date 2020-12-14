---
description: 'Altre informazioni su: errore del compilatore C2502'
title: Errore del compilatore C2502
ms.date: 11/04/2016
f1_keywords:
- C2502
helpviewer_keywords:
- C2502
ms.assetid: affa0b86-15fc-4e17-b7f2-6aad4a3771c4
ms.openlocfilehash: 6ee501a5fa3601ef5e4b97d4be5a8e59463ce797
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275932"
---
# <a name="compiler-error-c2502"></a>Errore del compilatore C2502

' Identifier ': troppi modificatori di accesso nella classe di base

La classe base ha più di un modificatore di accesso. È consentito solo un modificatore di accesso ( **`public`** , **`private`** o **`protected`** ).

L'esempio seguente genera l'C2502:

```cpp
// C2502.cpp
// compile with: /c
class A { };
class B { };
class C : private public A { };   // C2502

// OK
class D : private A {};
class E : public A, private B {};
```
