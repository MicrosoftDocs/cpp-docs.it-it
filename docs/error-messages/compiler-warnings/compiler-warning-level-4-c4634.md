---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4634'
title: Avviso del compilatore (livello 4) C4634
ms.date: 11/04/2016
f1_keywords:
- C4634
helpviewer_keywords:
- C4634
ms.assetid: 3e3496ce-2ac7-43d0-a48a-f514c950e81d
ms.openlocfilehash: 87144f1a3c95f46159b07dc776707da06a56ff21
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134127"
---
# <a name="compiler-warning-level-4-c4634"></a>Avviso del compilatore (livello 4) C4634

commento al documento XML: impossibile applicare: motivo

Non è possibile applicare i tag della documentazione XML a tutti i costrutti C++.  Ad esempio, non è possibile aggiungere un commento relativo alla documentazione a uno spazio dei nomi o a un modello.

Per altre informazioni, vedere [XML Documentation](../../build/reference/xml-documentation-visual-cpp.md).

## <a name="examples"></a>Esempio

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
