---
description: 'Altre informazioni su: errore del compilatore C3075'
title: Errore del compilatore C3075
ms.date: 11/04/2016
f1_keywords:
- C3075
helpviewer_keywords:
- C3075
ms.assetid: f431daa9-e0fa-48f0-a5c3-f99be96b55e3
ms.openlocfilehash: 68169ade5e9de13b618fe6d90936cbe887690775
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320223"
---
# <a name="compiler-error-c3075"></a>Errore del compilatore C3075

'instance': impossibile incorporare un'istanza di un tipo riferimento, 'type', in un tipo di valore

Un tipo valore non può contenere un'istanza di un tipo riferimento.

Per ulteriori informazioni, vedere [semantica dello stack C++ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3075.

```cpp
// C3075.cpp
// compile with: /clr /c
ref struct U {};
value struct X {
   U y;   // C3075
};

ref struct Y {
   U y;   // OK
};
```
