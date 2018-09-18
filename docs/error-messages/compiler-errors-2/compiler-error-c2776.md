---
title: Errore del compilatore C2776 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2776
dev_langs:
- C++
helpviewer_keywords:
- C2776
ms.assetid: 9d80addc-62c7-40fc-a2cc-60303abb87df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 705f6930b18483c1a449fec4b50163cc658249d7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46029234"
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