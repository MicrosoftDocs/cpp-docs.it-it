---
title: Errore del compilatore C3816
ms.date: 11/04/2016
f1_keywords:
- C3816
helpviewer_keywords:
- C3816
ms.assetid: 2e52cc7f-e31c-41a3-8d6f-9f5fab3648c0
ms.openlocfilehash: 5e31138d50676c312028e35b480cc682dc146a43
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757124"
---
# <a name="compiler-error-c3816"></a>Errore del compilatore C3816

' declaration ' è stato dichiarato o definito in precedenza con un diverso oggetto gestito o WinRTmodifier

Una dichiarazione con prototipo e una dichiarazione effettiva richiedono che non siano presenti conflitti o incoerenze nella dichiarazione degli attributi.

L'esempio seguente genera l'errore C3816 e mostra come risolverlo:

```cpp
// C3816a.cpp
// compile with: /clr /c
class C1;
// try the following line instead
// ref class C1;

ref class C1{  // C3816, forward declaration does not use ref
};
```
