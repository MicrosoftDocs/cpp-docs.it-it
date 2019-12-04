---
title: Errore del compilatore C2507
ms.date: 11/04/2016
f1_keywords:
- C2507
helpviewer_keywords:
- C2507
ms.assetid: f102aff5-de7d-4c3f-9cac-2ddf9ce02b14
ms.openlocfilehash: 23433dccd7fc4f86c2e848359ac50c796fcccab0
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74746799"
---
# <a name="compiler-error-c2507"></a>Errore del compilatore C2507

' Identifier ': troppi modificatori virtuali nella classe di base

Una classe o una struttura viene dichiarata come `virtual` più di una volta. È possibile visualizzare solo un modificatore di `virtual` per ogni classe in un elenco di classi di base.

L'esempio seguente genera l'C2507:

```cpp
// C2507.cpp
// compile with: /c
class A {};
class B : virtual virtual public A {};   // C2507
class C : virtual public A {};   // OK
```
