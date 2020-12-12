---
description: 'Altre informazioni su: errore del compilatore C2196'
title: Errore del compilatore C2196
ms.date: 11/04/2016
f1_keywords:
- C2196
helpviewer_keywords:
- C2196
ms.assetid: fd2f6a58-48ce-4e58-96f8-e37720feb8e7
ms.openlocfilehash: 7c82cd145cff43d8773f87e65a09eee32185ffb4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305469"
---
# <a name="compiler-error-c2196"></a>Errore del compilatore C2196

valore case 'value' già usato.

Un'istruzione switch usa più volte lo stesso valore case.

L'esempio seguente genera l'errore C2196:

```cpp
// C2196.cpp
int main() {
   int i = 0;
   switch( i ) {
   case 0:
      break;
   case 0:   // C2196
   // try the following line instead
   // case 1:
      break;
   }
}
```
