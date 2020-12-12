---
description: 'Altre informazioni su: errore del compilatore C2878'
title: Errore del compilatore C2878
ms.date: 11/04/2016
f1_keywords:
- C2878
helpviewer_keywords:
- C2878
ms.assetid: 83ee3de1-f554-49e8-a840-1f550cee7f69
ms.openlocfilehash: df79869572117eed851c5edd63f94234555cb990
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320473"
---
# <a name="compiler-error-c2878"></a>Errore del compilatore C2878

' name ': non esiste uno spazio dei nomi o una classe con questo nome

È stato fatto riferimento a uno spazio dei nomi o a una classe non definita.

L'esempio seguente genera l'C2878:

```cpp
// C2878.cpp
// compile with: /c
namespace A {}
namespace B = C;   // C2878 namespace C doesn't exist
namespace B = A;
```
