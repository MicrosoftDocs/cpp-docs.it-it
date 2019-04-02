---
title: Avviso del compilatore (livello 1) C4688
ms.date: 11/04/2016
f1_keywords:
- C4688
helpviewer_keywords:
- C4688
ms.assetid: a027df3c-b2b8-4c49-8539-c2bc42db74e8
ms.openlocfilehash: 1c94198eca0a88174c8655e0d571c37f82a2df36
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781965"
---
# <a name="compiler-warning-level-1-c4688"></a>Avviso del compilatore (livello 1) C4688

'constraint': l'elenco di vincoli contiene il tipo privato 'type' dell'assembly

Un elenco di vincoli include un tipo privato dell'assembly. Questo significa che il tipo non sarà disponibile se si accede dall'esterno dell'assembly. Per altre informazioni, vedere [Generics](../../extensions/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4688.

```
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