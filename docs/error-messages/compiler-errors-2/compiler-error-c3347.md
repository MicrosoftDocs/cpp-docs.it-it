---
title: Errore del compilatore C3347
ms.date: 11/04/2016
f1_keywords:
- C3347
helpviewer_keywords:
- C3347
ms.assetid: e939ad29-0b78-4681-9618-9bdae5675cee
ms.openlocfilehash: 105c34fff8b118682ae736683fae5f64a7323c81
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504825"
---
# <a name="compiler-error-c3347"></a>Errore del compilatore C3347

'arg': argomento obbligatorio non specificato nell'attributo idl_module

Un argomento obbligatorio non è stato passato all'attributo [idl_module](../../windows/attributes/idl-module.md) .

L'esempio seguente genera l'errore C3347:

```cpp
// C3347.cpp
// compile with: /c
[module(name="xx")];

[idl_module(dllname="x")];    // C3347
// try the following line instead
// [idl_module(name="test", dllname="x")];
```
