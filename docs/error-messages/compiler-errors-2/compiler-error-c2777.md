---
title: Errore del compilatore C2777
ms.date: 11/04/2016
f1_keywords:
- C2777
helpviewer_keywords:
- C2777
ms.assetid: 5fe158c0-2a65-488a-aca2-61d4a8b32d43
ms.openlocfilehash: cfbe2c729141108565f00b7b5a7fd581b49e516d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62227702"
---
# <a name="compiler-error-c2777"></a>Errore del compilatore C2777

ciascuna proprietà è possibile specificare un solo metodo 'put'

Oggetto [proprietà](../../cpp/property-cpp.md) declspec modificatore ha più di una `put` proprietà.

L'esempio seguente genera l'errore C2777:

```
// C2777.cpp
struct A {
   __declspec(property(put=PutProp,put=PutPropToo))   // C2777
   // try the following line instead
   // __declspec(property(put=PutProp))
      int prop;
   int PutProp(void);
   int PutPropToo(void);
};
```