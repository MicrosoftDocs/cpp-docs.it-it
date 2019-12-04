---
title: Errore del compilatore C3697
ms.date: 11/04/2016
f1_keywords:
- C3697
helpviewer_keywords:
- C3697
ms.assetid: 2d3f63c4-b7f8-421d-a7a5-2bf17fd054f9
ms.openlocfilehash: e642c744bbce5db4bb341a32769b2d9f74654044
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758060"
---
# <a name="compiler-error-c3697"></a>Errore del compilatore C3697

' Qualifier ': Impossibile utilizzare questo qualificatore in ' ^'

L'handle di rilevamento (^) è stato applicato a un qualificatore per il quale non è stato progettato.

L'esempio seguente genera l'C3697:

```cpp
// C3697.cpp
// compile with: /clr
using namespace System;
int main() {
   String ^__restrict s;   // C3697
   String ^ s2;   // OK
}
```
