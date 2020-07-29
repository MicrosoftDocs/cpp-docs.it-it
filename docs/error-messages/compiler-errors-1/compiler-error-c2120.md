---
title: Errore del compilatore C2120
ms.date: 11/04/2016
f1_keywords:
- C2120
helpviewer_keywords:
- C2120
ms.assetid: b0f3f66c-6cd2-4f48-9ea3-c270b53c2b8c
ms.openlocfilehash: fd0b11b1500ea448ded4a24db8e6d8ebf9ee9782
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212852"
---
# <a name="compiler-error-c2120"></a>Errore del compilatore C2120

' void ' non valido con tutti i tipi

Il **`void`** tipo viene usato in una dichiarazione con un altro tipo.

L'esempio seguente genera l'C2120:

```cpp
// C2120.cpp
int main() {
   void int i;   // C2120
   int j;   // OK
}
```
