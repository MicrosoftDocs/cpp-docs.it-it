---
description: 'Altre informazioni su: errore del compilatore C3106'
title: Errore del compilatore C3106
ms.date: 11/04/2016
f1_keywords:
- C3106
helpviewer_keywords:
- C3106
ms.assetid: 39d97a32-0905-4702-87d3-7f8ce473fb93
ms.openlocfilehash: 59e0544a05362584836c4cae60d0fc3d3cd920d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116080"
---
# <a name="compiler-error-c3106"></a>Errore del compilatore C3106

' attribute ': gli argomenti non denominati devono precedere gli argomenti denominati

Gli argomenti senza nome devono essere passati a un attributo prima degli argomenti denominati.

Per altre informazioni, vedere [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3106.

```cpp
// C3106.cpp
// compile with: /c
[module(name="MyLib", dll)];   // C3106
[module(dll, name="MyLib")];   // OK
```
