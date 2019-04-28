---
title: Errore del compilatore C2776
ms.date: 11/04/2016
f1_keywords:
- C2776
helpviewer_keywords:
- C2776
ms.assetid: 9d80addc-62c7-40fc-a2cc-60303abb87df
ms.openlocfilehash: 200fbc5c42a6b735c072c093ec4cb4f081031824
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62257101"
---
# <a name="compiler-error-c2776"></a>Errore del compilatore C2776

ciascuna proprietà è possibile specificare un solo metodo 'get'

È possibile specificare solo uno `get` funzionare nel [proprietà](../../cpp/property-cpp.md) attributi estesa. Questo errore si verifica quando più `get` le funzioni vengono specificate.

L'esempio seguente genera l'errore C2776:

```
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