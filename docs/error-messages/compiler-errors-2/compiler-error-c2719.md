---
title: Errore del compilatore C2719
ms.date: 11/04/2016
f1_keywords:
- C2719
helpviewer_keywords:
- C2719
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
ms.openlocfilehash: 574a04923c20c3104083a6aa05a71838e7ec13d2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760504"
---
# <a name="compiler-error-c2719"></a>Errore del compilatore C2719

'parameter': il parametro formale con __declspec(align('#')) non verrà allineato

Il modificatore [align](../../cpp/align-cpp.md) `__declspec` non è consentito nei parametri della funzione. L'allineamento dei parametri di funzione è controllato dalla convenzione di chiamata usata. Per ulteriori informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).

L'esempio seguente genera l'errore C2719 e mostra come risolverlo:

```cpp
// C2719.cpp
void func(int __declspec(align(32)) i);   // C2719
// try the following line instead
// void func(int i);
```
