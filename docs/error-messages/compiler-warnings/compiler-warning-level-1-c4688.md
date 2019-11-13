---
title: Avviso del compilatore (livello 1) C4688
ms.date: 11/04/2016
f1_keywords:
- C4688
helpviewer_keywords:
- C4688
ms.assetid: a027df3c-b2b8-4c49-8539-c2bc42db74e8
ms.openlocfilehash: bc869b7e22bc8bce0230892dc9a67d6aaec09f46
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052506"
---
# <a name="compiler-warning-level-1-c4688"></a>Avviso del compilatore (livello 1) C4688

'constraint': l'elenco di vincoli contiene il tipo privato 'type' dell'assembly

Un elenco di vincoli include un tipo privato dell'assembly. Questo significa che il tipo non sarà disponibile se si accede dall'esterno dell'assembly. Per altre informazioni, vedere [Generics](../../extensions/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4688.

```cpp
// C4688.cpp
// compile with: /clr /c /W1
ref struct A {};   // private type
public ref struct B {};

// Delete the following 3 lines to resolve.
generic <class T>
where T : A   // C4688
public ref struct M {};

generic <class T>
where T : B
public ref struct N {};
```