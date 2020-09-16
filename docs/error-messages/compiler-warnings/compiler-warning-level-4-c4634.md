---
title: Avviso del compilatore (livello 4) C4634
ms.date: 11/04/2016
f1_keywords:
- C4634
helpviewer_keywords:
- C4634
ms.assetid: 3e3496ce-2ac7-43d0-a48a-f514c950e81d
ms.openlocfilehash: 86ac95fbd030ecf35a85eba153a449511ee7a535
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90683884"
---
# <a name="compiler-warning-level-4-c4634"></a>Avviso del compilatore (livello 4) C4634

commento al documento XML: impossibile applicare: motivo

Non è possibile applicare i tag della documentazione XML a tutti i costrutti C++.  Ad esempio, non è possibile aggiungere un commento relativo alla documentazione a uno spazio dei nomi o a un modello.

Per altre informazioni, vedere [XML Documentation](../../build/reference/xml-documentation-visual-cpp.md).

## <a name="examples"></a>Esempi

L'esempio seguente genera l'errore C4634.

```cpp
// C4634.cpp
// compile with: /W4 /doc /c
/// This is a namespace.   // C4634
namespace hello {
   class MyClass  {};
};
```

L'esempio seguente genera l'errore C4634.

```cpp
// C4634_b.cpp
// compile with: /W4 /doc /c
/// This is a template.   // C4634
template <class T>
class MyClass  {};
```
