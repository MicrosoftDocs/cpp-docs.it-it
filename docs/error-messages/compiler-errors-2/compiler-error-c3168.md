---
title: Errore del compilatore C3168
ms.date: 11/04/2016
f1_keywords:
- C3168
helpviewer_keywords:
- C3168
ms.assetid: 4c36fcfb-c351-48ff-b4eb-78d2aa1b4d55
ms.openlocfilehash: a40a79c48b0f437271063e555593464f55fe9837
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212592"
---
# <a name="compiler-error-c3168"></a>Errore del compilatore C3168

' type ': tipo sottostante non valido per enum

Il tipo sottostante specificato per il **`enum`** tipo non è valido. Il tipo sottostante deve essere un tipo C++ integrale o un tipo CLR corrispondente.

L'esempio seguente genera l'C3168:

```cpp
// C3168.cpp
// compile with: /clr /c
ref class G{};

enum class E : G { e };   // C3168
enum class F { f };   // OK
```
