---
title: Errore del compilatore C2847
ms.date: 11/04/2016
f1_keywords:
- C2847
helpviewer_keywords:
- C2847
ms.assetid: 9ad9a0e0-8b16-49d9-a5be-f8eda2372aa9
ms.openlocfilehash: b8b31dc461c1d589151701c6946f6ac1a95c5517
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738986"
---
# <a name="compiler-error-c2847"></a>Errore del compilatore C2847

impossibile applicare sizeof a un tipo gestito o WinRT 'class'

L'operatore [sizeof](../../cpp/sizeof-operator.md) ottiene il valore di un oggetto in fase di compilazione. Le dimensioni di un tipo di classe, interfaccia o valore gestito o WinRT sono dinamiche e quindi non sono note in fase di compilazione.

L'esempio seguente genera l'errore C2847:

```cpp
// C2847.cpp
// compile with: /clr
ref class A {};

int main() {
   A ^ xA = gcnew A;
   sizeof(*xA);   // C2847 cannot use sizeof on managed object
}
```
