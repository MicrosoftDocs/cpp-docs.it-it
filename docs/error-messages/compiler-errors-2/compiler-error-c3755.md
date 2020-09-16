---
title: Errore del compilatore C3755
ms.date: 11/04/2016
f1_keywords:
- C3755
helpviewer_keywords:
- C3755
ms.assetid: 9317b55e-a52e-4b87-b915-5a208d6eda38
ms.openlocfilehash: cc4e5423dc8fc53a8f749e2392ff23658a0cb0f1
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90685115"
---
# <a name="compiler-error-c3755"></a>Errore del compilatore C3755

' Delegate ': non è possibile definire un delegato

Un [delegato (estensioni del componente C++)](../../extensions/delegate-cpp-component-extensions.md) può essere dichiarato ma non definito.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C3755.

```cpp
// C3755.cpp
// compile with: /clr /c
delegate void MyDel() {};   // C3755
```

C3755 può verificarsi anche se si tenta di creare un modello di delegato. L'esempio seguente genera l'C3755.

```cpp
// C3755_b.cpp
// compile with: /clr /c
ref struct R {
   template<class T>
   delegate void D(int) {}   // C3755
};
```
