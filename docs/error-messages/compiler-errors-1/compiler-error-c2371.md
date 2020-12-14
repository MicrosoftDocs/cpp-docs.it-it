---
description: 'Altre informazioni su: errore del compilatore C2371'
title: Errore del compilatore C2371
ms.date: 11/04/2016
f1_keywords:
- C2371
helpviewer_keywords:
- C2371
ms.assetid: d383993d-05ef-4e35-8129-3b58a6f7b7b7
ms.openlocfilehash: bc7eb66d0ef56d18b7b032dbef17203f600caa0e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239649"
---
# <a name="compiler-error-c2371"></a>Errore del compilatore C2371

'identifier': ridefinizione. Tipi di base differenti

L'identificatore è già dichiarato.

L'esempio seguente genera l'errore C2371:

```cpp
// C2371.cpp
int main() {
   int i;
   float i;   // C2371, redefinition
   float f;   // OK
}
```
