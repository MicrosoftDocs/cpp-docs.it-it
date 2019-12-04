---
title: Errore del compilatore C2776
ms.date: 11/04/2016
f1_keywords:
- C2776
helpviewer_keywords:
- C2776
ms.assetid: 9d80addc-62c7-40fc-a2cc-60303abb87df
ms.openlocfilehash: 79758c88e595e6d5ebb5cd4b39a8df8fc1339752
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74740065"
---
# <a name="compiler-error-c2776"></a>Errore del compilatore C2776

è possibile specificare un solo metodo ' Get ' per proprietà

È possibile specificare una sola funzione `get` nell'attributo esteso della [Proprietà](../../cpp/property-cpp.md) . Questo errore si verifica quando vengono specificate più funzioni `get`.

L'esempio seguente genera l'C2776:

```cpp
// C2776.cpp
struct A {
   __declspec(property(get=GetProp,get=GetPropToo))
   // try the following line instead
   // __declspec(property(get=GetProp))
      int prop;   // C2776
   int GetProp(void);
   int GetPropToo(void);
};
```
