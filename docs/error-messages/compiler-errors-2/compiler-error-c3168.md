---
description: 'Altre informazioni su: errore del compilatore C3168'
title: Errore del compilatore C3168
ms.date: 11/04/2016
f1_keywords:
- C3168
helpviewer_keywords:
- C3168
ms.assetid: 4c36fcfb-c351-48ff-b4eb-78d2aa1b4d55
ms.openlocfilehash: a6b9708ebb9c7fe3d9d6be7d73c24b92b1e8c6eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242249"
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
