---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4688'
title: Avviso del compilatore (livello 1) C4688
ms.date: 11/04/2016
f1_keywords:
- C4688
helpviewer_keywords:
- C4688
ms.assetid: a027df3c-b2b8-4c49-8539-c2bc42db74e8
ms.openlocfilehash: 9abd793463cf576549b09a1a887d225317ca6fc5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285162"
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
